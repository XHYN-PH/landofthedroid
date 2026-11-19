#include "recomp.h"
#include "rec_mod.h"

void f_ffdc45(void) {
  LOAD_REGS();
L_ffdc45: /* ffdc45: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ffdc4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdc50: /* ffdc50: mov dword ptr [esp + 0x2c], 0x10 */
  W32((uint32_t)(esp + 0x2cu), 0x10u);
/* ffdc58: jmp 0xffdc60 */
  goto L_ffdc60;
L_ffdc60: /* ffdc60: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdc63: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffdc67: mov esi, dword ptr [eax + edx - 4] */
  esi = R32((uint32_t)(eax + edx + 0xfffffffcu));
/* ffdc6b: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* ffdc6e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ffdc70: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffdc74: mov edi, dword ptr [edx + ecx] */
  edi = R32((uint32_t)(edx + ecx));
/* ffdc77: mov esi, dword ptr [esi + edx] */
  esi = R32((uint32_t)(esi + edx));
/* ffdc7a: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdc7d: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdc80: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdc85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdc87: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdc8a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc8c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffdc8f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ffdc91: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* ffdc94: mov ecx, dword ptr [edx + ecx] */
  ecx = R32((uint32_t)(edx + ecx));
/* ffdc97: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdc9a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc9d: call 0xffcb60 */
  esp -= 4; W32(esp, 0xffdca2u); SPILL(); f_ffcb60(); if (g_unwind) return; RELOAD();
/* ffdca2: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffdca6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdca9: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdcac: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffdcb0: jl 0xffdc60 */
  if ((sf != of)) goto L_ffdc60;
L_ffdcb2: /* ffdcb2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffdcb6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdcb9: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdcbc: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffdcc0: jl 0xffdc50 */
  if ((sf != of)) goto L_ffdc50;
L_ffdcc2: /* ffdcc2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffdcc5: xor edi, edi */
  edi = 0;
/* ffdcc7: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdccd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffdcd0: /* ffdcd0: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdcd3: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdcd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffdcd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdcd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdcd9: call 0xffcde0 */
  esp -= 4; W32(esp, 0xffdcdeu); SPILL(); f_ffcde0(); if (g_unwind) return; RELOAD();
/* ffdcde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdce1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdce2: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdce5: cmp edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdce8: jl 0xffdcd0 */
  if ((sf != of)) goto L_ffdcd0;
L_ffdcea: /* ffdcea: xor edi, edi */
  edi = 0;
/* ffdcec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdcf0: /* ffdcf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdcf3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffdcf5: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdcf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdcfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdcfc: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdcfe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd03: push 0x100a640 */
  { uint32_t v = 0x100a640u; esp -= 4; W32(esp, v); }
/* ffdd08: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd0du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd0d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd10: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd11: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd14: jl 0xffdcf0 */
  if ((sf != of)) goto L_ffdcf0;
L_ffdd16: /* ffdd16: xor edi, edi */
  edi = 0;
/* ffdd18: jmp 0xffdd20 */
  goto L_ffdd20;
L_ffdd20: /* ffdd20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd23: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffdd26: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd34: push 0x100a634 */
  { uint32_t v = 0x100a634u; esp -= 4; W32(esp, v); }
/* ffdd39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd41: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd42: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd45: jl 0xffdd20 */
  if ((sf != of)) goto L_ffdd20;
L_ffdd47: /* ffdd47: xor edi, edi */
  edi = 0;
/* ffdd49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd50: /* ffdd50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd53: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffdd56: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd64: push 0x100a628 */
  { uint32_t v = 0x100a628u; esp -= 4; W32(esp, v); }
/* ffdd69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd71: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd72: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd75: jl 0xffdd50 */
  if ((sf != of)) goto L_ffdd50;
L_ffdd77: /* ffdd77: xor edi, edi */
  edi = 0;
/* ffdd79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd80: /* ffdd80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd83: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffdd86: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd94: push 0x100a61c */
  { uint32_t v = 0x100a61cu; esp -= 4; W32(esp, v); }
/* ffdd99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdda1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdda2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdda5: jl 0xffdd80 */
  if ((sf != of)) goto L_ffdd80;
L_ffdda7: /* ffdda7: xor edi, edi */
  edi = 0;
/* ffdda9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffddb0: /* ffddb0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffddb3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffddb6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffddb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddbf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddc4: push 0x100a610 */
  { uint32_t v = 0x100a610u; esp -= 4; W32(esp, v); }
/* ffddc9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffddd1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffddd2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffddd5: jl 0xffddb0 */
  if ((sf != of)) goto L_ffddb0;
L_ffddd7: /* ffddd7: xor edi, edi */
  edi = 0;
/* ffddd9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdde0: /* ffdde0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdde3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffdde6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdde9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdded: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddf4: push 0x100a604 */
  { uint32_t v = 0x100a604u; esp -= 4; W32(esp, v); }
/* ffddf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddfeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddfe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde02: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde05: jl 0xffdde0 */
  if ((sf != of)) goto L_ffdde0;
L_ffde07: /* ffde07: xor edi, edi */
  edi = 0;
/* ffde09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde10: /* ffde10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde13: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffde16: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde24: push 0x100a5f8 */
  { uint32_t v = 0x100a5f8u; esp -= 4; W32(esp, v); }
/* ffde29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde31: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde32: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde35: jl 0xffde10 */
  if ((sf != of)) goto L_ffde10;
L_ffde37: /* ffde37: xor edi, edi */
  edi = 0;
/* ffde39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde40: /* ffde40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde43: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffde46: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde54: push 0x100a5ec */
  { uint32_t v = 0x100a5ecu; esp -= 4; W32(esp, v); }
/* ffde59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde61: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde62: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde65: jl 0xffde40 */
  if ((sf != of)) goto L_ffde40;
L_ffde67: /* ffde67: xor edi, edi */
  edi = 0;
/* ffde69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde70: /* ffde70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde73: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffde76: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde84: push 0x100a5e0 */
  { uint32_t v = 0x100a5e0u; esp -= 4; W32(esp, v); }
/* ffde89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde91: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde92: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde95: jl 0xffde70 */
  if ((sf != of)) goto L_ffde70;
L_ffde97: /* ffde97: xor edi, edi */
  edi = 0;
/* ffde99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdea0: /* ffdea0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdea3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffdea6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdeab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdead: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdeaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdeb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdeb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdeb4: push 0x100a5d4 */
  { uint32_t v = 0x100a5d4u; esp -= 4; W32(esp, v); }
/* ffdeb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdebeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdebe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdec1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdec2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdec5: jl 0xffdea0 */
  if ((sf != of)) goto L_ffdea0;
L_ffdec7: /* ffdec7: xor edi, edi */
  edi = 0;
/* ffdec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffded0: /* ffded0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffded3: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffded6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffded9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdedf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdee2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdee4: push 0x100a5c8 */
  { uint32_t v = 0x100a5c8u; esp -= 4; W32(esp, v); }
/* ffdee9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdeeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdeee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdef2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdef5: jl 0xffded0 */
  if ((sf != of)) goto L_ffded0;
L_ffdef7: /* ffdef7: xor edi, edi */
  edi = 0;
/* ffdef9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf00: /* ffdf00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf03: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffdf06: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf14: push 0x100a5b8 */
  { uint32_t v = 0x100a5b8u; esp -= 4; W32(esp, v); }
/* ffdf19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf21: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf22: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf25: jl 0xffdf00 */
  if ((sf != of)) goto L_ffdf00;
L_ffdf27: /* ffdf27: xor edi, edi */
  edi = 0;
/* ffdf29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf30: /* ffdf30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf33: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffdf36: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf44: push 0x100a5ac */
  { uint32_t v = 0x100a5acu; esp -= 4; W32(esp, v); }
/* ffdf49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf51: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf52: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf55: jl 0xffdf30 */
  if ((sf != of)) goto L_ffdf30;
L_ffdf57: /* ffdf57: xor edi, edi */
  edi = 0;
/* ffdf59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf60: /* ffdf60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf63: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffdf66: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf74: push 0x100a59c */
  { uint32_t v = 0x100a59cu; esp -= 4; W32(esp, v); }
/* ffdf79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf81: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf82: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf85: jl 0xffdf60 */
  if ((sf != of)) goto L_ffdf60;
L_ffdf87: /* ffdf87: xor edi, edi */
  edi = 0;
/* ffdf89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf90: /* ffdf90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf93: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffdf96: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfa3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfa4: push 0x100a590 */
  { uint32_t v = 0x100a590u; esp -= 4; W32(esp, v); }
/* ffdfa9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfb1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfb2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfb5: jl 0xffdf90 */
  if ((sf != of)) goto L_ffdf90;
L_ffdfb7: /* ffdfb7: xor edi, edi */
  edi = 0;
/* ffdfb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdfc0: /* ffdfc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdfc3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffdfc6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdfc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfcf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfd4: push 0x100a580 */
  { uint32_t v = 0x100a580u; esp -= 4; W32(esp, v); }
/* ffdfd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfe1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfe2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfe5: jl 0xffdfc0 */
  if ((sf != of)) goto L_ffdfc0;
L_ffdfe7: /* ffdfe7: xor edi, edi */
  edi = 0;
/* ffdfe9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdff0: /* ffdff0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdff3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffdff6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe004: push 0x100a574 */
  { uint32_t v = 0x100a574u; esp -= 4; W32(esp, v); }
/* ffe009: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe00eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe00e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe011: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe012: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe015: jl 0xffdff0 */
  if ((sf != of)) goto L_ffdff0;
L_ffe017: /* ffe017: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffe01a: mov edi, dword ptr [esi + 0x370] */
  edi = R32((uint32_t)(esi + 0x370u));
/* ffe020: xor eax, eax */
  eax = 0;
/* ffe022: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffe024: je 0xffe0d7 */
  if (zf) goto L_ffe0d7;
L_ffe02a: /* ffe02a: add edi, 0x12 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe02d: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffe031: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe035: jmp 0xffe040 */
  goto L_ffe040;
L_ffe040: /* ffe040: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe048: jmp 0xffe050 */
  goto L_ffe050;
L_ffe050: /* ffe050: mov ecx, 2 */
  ecx = 0x2u;
/* ffe055: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe057: jle 0xffe0a8 */
  if ((zf || sf != of)) goto L_ffe0a8;
L_ffe059: /* ffe059: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe05d: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffe061: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe063: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe066: lea esi, [eax + edx*4 + 0x374] */
  esi = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe06d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffe070: /* ffe070: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffe074: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffe077: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* ffe07a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe07e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffe081: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* ffe084: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* ffe087: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* ffe089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffe08e: jne 0xffe0a5 */
  if (!zf) goto L_ffe0a5;
L_ffe090: /* ffe090: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffe092: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffe094: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffe097: mov eax, dword ptr [edx + 0x370] */
  eax = R32((uint32_t)(edx + 0x370u));
/* ffe09d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffe09e: lea edi, [eax + 0x12] */
  edi = (uint32_t)(eax + 0x12u);
/* ffe0a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0a3: jl 0xffe070 */
  if ((sf != of)) goto L_ffe070;
L_ffe0a5: /* ffe0a5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe0a8: /* ffe0a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffe0ad: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0b0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe0b4: jl 0xffe050 */
  if ((sf != of)) goto L_ffe050;
L_ffe0b6: /* ffe0b6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffe0ba: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe0be: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe0c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0c4: cmp eax, 0xbb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0c9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe0cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ffe0d1: jl 0xffe040 */
  if ((sf != of)) goto L_ffe040;
L_ffe0d7: /* ffe0d7: xor edi, edi */
  edi = 0;
/* ffe0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe0e0: /* ffe0e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe0e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffe0e5: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ec: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe0ee: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe0f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe0f3: push 0x100a564 */
  { uint32_t v = 0x100a564u; esp -= 4; W32(esp, v); }
/* ffe0f8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe0fdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe0fd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe100: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe101: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe104: jl 0xffe0e0 */
  if ((sf != of)) goto L_ffe0e0;
L_ffe106: /* ffe106: xor edi, edi */
  edi = 0;
/* ffe108: jmp 0xffe110 */
  goto L_ffe110;
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

void f_ffdc5a(void) {
  LOAD_REGS();
  goto L_ffdc5a;
L_ffdc50: /* ffdc50: mov dword ptr [esp + 0x2c], 0x10 */
  W32((uint32_t)(esp + 0x2cu), 0x10u);
/* ffdc58: jmp 0xffdc60 */
  goto L_ffdc60;
L_ffdc5a: /* ffdc5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffdc60: /* ffdc60: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdc63: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffdc67: mov esi, dword ptr [eax + edx - 4] */
  esi = R32((uint32_t)(eax + edx + 0xfffffffcu));
/* ffdc6b: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* ffdc6e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ffdc70: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffdc74: mov edi, dword ptr [edx + ecx] */
  edi = R32((uint32_t)(edx + ecx));
/* ffdc77: mov esi, dword ptr [esi + edx] */
  esi = R32((uint32_t)(esi + edx));
/* ffdc7a: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdc7d: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdc80: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdc85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdc87: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdc8a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc8c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffdc8f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ffdc91: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* ffdc94: mov ecx, dword ptr [edx + ecx] */
  ecx = R32((uint32_t)(edx + ecx));
/* ffdc97: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdc9a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc9d: call 0xffcb60 */
  esp -= 4; W32(esp, 0xffdca2u); SPILL(); f_ffcb60(); if (g_unwind) return; RELOAD();
/* ffdca2: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffdca6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdca9: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdcac: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffdcb0: jl 0xffdc60 */
  if ((sf != of)) goto L_ffdc60;
L_ffdcb2: /* ffdcb2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffdcb6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdcb9: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdcbc: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffdcc0: jl 0xffdc50 */
  if ((sf != of)) goto L_ffdc50;
L_ffdcc2: /* ffdcc2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffdcc5: xor edi, edi */
  edi = 0;
/* ffdcc7: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdccd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffdcd0: /* ffdcd0: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdcd3: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdcd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffdcd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdcd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdcd9: call 0xffcde0 */
  esp -= 4; W32(esp, 0xffdcdeu); SPILL(); f_ffcde0(); if (g_unwind) return; RELOAD();
/* ffdcde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdce1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdce2: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdce5: cmp edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdce8: jl 0xffdcd0 */
  if ((sf != of)) goto L_ffdcd0;
L_ffdcea: /* ffdcea: xor edi, edi */
  edi = 0;
/* ffdcec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdcf0: /* ffdcf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdcf3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffdcf5: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdcf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdcfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdcfc: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdcfe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd03: push 0x100a640 */
  { uint32_t v = 0x100a640u; esp -= 4; W32(esp, v); }
/* ffdd08: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd0du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd0d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd10: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd11: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd14: jl 0xffdcf0 */
  if ((sf != of)) goto L_ffdcf0;
L_ffdd16: /* ffdd16: xor edi, edi */
  edi = 0;
/* ffdd18: jmp 0xffdd20 */
  goto L_ffdd20;
L_ffdd20: /* ffdd20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd23: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffdd26: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd34: push 0x100a634 */
  { uint32_t v = 0x100a634u; esp -= 4; W32(esp, v); }
/* ffdd39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd41: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd42: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd45: jl 0xffdd20 */
  if ((sf != of)) goto L_ffdd20;
L_ffdd47: /* ffdd47: xor edi, edi */
  edi = 0;
/* ffdd49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd50: /* ffdd50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd53: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffdd56: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd64: push 0x100a628 */
  { uint32_t v = 0x100a628u; esp -= 4; W32(esp, v); }
/* ffdd69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd71: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd72: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd75: jl 0xffdd50 */
  if ((sf != of)) goto L_ffdd50;
L_ffdd77: /* ffdd77: xor edi, edi */
  edi = 0;
/* ffdd79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd80: /* ffdd80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd83: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffdd86: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd94: push 0x100a61c */
  { uint32_t v = 0x100a61cu; esp -= 4; W32(esp, v); }
/* ffdd99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdda1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdda2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdda5: jl 0xffdd80 */
  if ((sf != of)) goto L_ffdd80;
L_ffdda7: /* ffdda7: xor edi, edi */
  edi = 0;
/* ffdda9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffddb0: /* ffddb0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffddb3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffddb6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffddb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddbf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddc4: push 0x100a610 */
  { uint32_t v = 0x100a610u; esp -= 4; W32(esp, v); }
/* ffddc9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffddd1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffddd2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffddd5: jl 0xffddb0 */
  if ((sf != of)) goto L_ffddb0;
L_ffddd7: /* ffddd7: xor edi, edi */
  edi = 0;
/* ffddd9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdde0: /* ffdde0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdde3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffdde6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdde9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdded: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddf4: push 0x100a604 */
  { uint32_t v = 0x100a604u; esp -= 4; W32(esp, v); }
/* ffddf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddfeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddfe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde02: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde05: jl 0xffdde0 */
  if ((sf != of)) goto L_ffdde0;
L_ffde07: /* ffde07: xor edi, edi */
  edi = 0;
/* ffde09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde10: /* ffde10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde13: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffde16: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde24: push 0x100a5f8 */
  { uint32_t v = 0x100a5f8u; esp -= 4; W32(esp, v); }
/* ffde29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde31: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde32: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde35: jl 0xffde10 */
  if ((sf != of)) goto L_ffde10;
L_ffde37: /* ffde37: xor edi, edi */
  edi = 0;
/* ffde39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde40: /* ffde40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde43: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffde46: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde54: push 0x100a5ec */
  { uint32_t v = 0x100a5ecu; esp -= 4; W32(esp, v); }
/* ffde59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde61: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde62: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde65: jl 0xffde40 */
  if ((sf != of)) goto L_ffde40;
L_ffde67: /* ffde67: xor edi, edi */
  edi = 0;
/* ffde69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde70: /* ffde70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde73: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffde76: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde84: push 0x100a5e0 */
  { uint32_t v = 0x100a5e0u; esp -= 4; W32(esp, v); }
/* ffde89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde91: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde92: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde95: jl 0xffde70 */
  if ((sf != of)) goto L_ffde70;
L_ffde97: /* ffde97: xor edi, edi */
  edi = 0;
/* ffde99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdea0: /* ffdea0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdea3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffdea6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdeab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdead: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdeaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdeb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdeb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdeb4: push 0x100a5d4 */
  { uint32_t v = 0x100a5d4u; esp -= 4; W32(esp, v); }
/* ffdeb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdebeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdebe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdec1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdec2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdec5: jl 0xffdea0 */
  if ((sf != of)) goto L_ffdea0;
L_ffdec7: /* ffdec7: xor edi, edi */
  edi = 0;
/* ffdec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffded0: /* ffded0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffded3: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffded6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffded9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdedf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdee2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdee4: push 0x100a5c8 */
  { uint32_t v = 0x100a5c8u; esp -= 4; W32(esp, v); }
/* ffdee9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdeeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdeee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdef2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdef5: jl 0xffded0 */
  if ((sf != of)) goto L_ffded0;
L_ffdef7: /* ffdef7: xor edi, edi */
  edi = 0;
/* ffdef9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf00: /* ffdf00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf03: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffdf06: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf14: push 0x100a5b8 */
  { uint32_t v = 0x100a5b8u; esp -= 4; W32(esp, v); }
/* ffdf19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf21: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf22: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf25: jl 0xffdf00 */
  if ((sf != of)) goto L_ffdf00;
L_ffdf27: /* ffdf27: xor edi, edi */
  edi = 0;
/* ffdf29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf30: /* ffdf30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf33: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffdf36: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf44: push 0x100a5ac */
  { uint32_t v = 0x100a5acu; esp -= 4; W32(esp, v); }
/* ffdf49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf51: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf52: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf55: jl 0xffdf30 */
  if ((sf != of)) goto L_ffdf30;
L_ffdf57: /* ffdf57: xor edi, edi */
  edi = 0;
/* ffdf59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf60: /* ffdf60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf63: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffdf66: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf74: push 0x100a59c */
  { uint32_t v = 0x100a59cu; esp -= 4; W32(esp, v); }
/* ffdf79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf81: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf82: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf85: jl 0xffdf60 */
  if ((sf != of)) goto L_ffdf60;
L_ffdf87: /* ffdf87: xor edi, edi */
  edi = 0;
/* ffdf89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf90: /* ffdf90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf93: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffdf96: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfa3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfa4: push 0x100a590 */
  { uint32_t v = 0x100a590u; esp -= 4; W32(esp, v); }
/* ffdfa9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfb1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfb2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfb5: jl 0xffdf90 */
  if ((sf != of)) goto L_ffdf90;
L_ffdfb7: /* ffdfb7: xor edi, edi */
  edi = 0;
/* ffdfb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdfc0: /* ffdfc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdfc3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffdfc6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdfc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfcf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfd4: push 0x100a580 */
  { uint32_t v = 0x100a580u; esp -= 4; W32(esp, v); }
/* ffdfd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfe1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfe2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfe5: jl 0xffdfc0 */
  if ((sf != of)) goto L_ffdfc0;
L_ffdfe7: /* ffdfe7: xor edi, edi */
  edi = 0;
/* ffdfe9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdff0: /* ffdff0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdff3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffdff6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe004: push 0x100a574 */
  { uint32_t v = 0x100a574u; esp -= 4; W32(esp, v); }
/* ffe009: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe00eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe00e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe011: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe012: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe015: jl 0xffdff0 */
  if ((sf != of)) goto L_ffdff0;
L_ffe017: /* ffe017: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffe01a: mov edi, dword ptr [esi + 0x370] */
  edi = R32((uint32_t)(esi + 0x370u));
/* ffe020: xor eax, eax */
  eax = 0;
/* ffe022: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffe024: je 0xffe0d7 */
  if (zf) goto L_ffe0d7;
L_ffe02a: /* ffe02a: add edi, 0x12 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe02d: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffe031: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe035: jmp 0xffe040 */
  goto L_ffe040;
L_ffe040: /* ffe040: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe048: jmp 0xffe050 */
  goto L_ffe050;
L_ffe050: /* ffe050: mov ecx, 2 */
  ecx = 0x2u;
/* ffe055: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe057: jle 0xffe0a8 */
  if ((zf || sf != of)) goto L_ffe0a8;
L_ffe059: /* ffe059: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe05d: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffe061: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe063: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe066: lea esi, [eax + edx*4 + 0x374] */
  esi = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe06d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffe070: /* ffe070: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffe074: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffe077: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* ffe07a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe07e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffe081: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* ffe084: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* ffe087: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* ffe089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffe08e: jne 0xffe0a5 */
  if (!zf) goto L_ffe0a5;
L_ffe090: /* ffe090: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffe092: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffe094: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffe097: mov eax, dword ptr [edx + 0x370] */
  eax = R32((uint32_t)(edx + 0x370u));
/* ffe09d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffe09e: lea edi, [eax + 0x12] */
  edi = (uint32_t)(eax + 0x12u);
/* ffe0a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0a3: jl 0xffe070 */
  if ((sf != of)) goto L_ffe070;
L_ffe0a5: /* ffe0a5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe0a8: /* ffe0a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffe0ad: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0b0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe0b4: jl 0xffe050 */
  if ((sf != of)) goto L_ffe050;
L_ffe0b6: /* ffe0b6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffe0ba: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe0be: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe0c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0c4: cmp eax, 0xbb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0c9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe0cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ffe0d1: jl 0xffe040 */
  if ((sf != of)) goto L_ffe040;
L_ffe0d7: /* ffe0d7: xor edi, edi */
  edi = 0;
/* ffe0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe0e0: /* ffe0e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe0e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffe0e5: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ec: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe0ee: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe0f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe0f3: push 0x100a564 */
  { uint32_t v = 0x100a564u; esp -= 4; W32(esp, v); }
/* ffe0f8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe0fdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe0fd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe100: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe101: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe104: jl 0xffe0e0 */
  if ((sf != of)) goto L_ffe0e0;
L_ffe106: /* ffe106: xor edi, edi */
  edi = 0;
/* ffe108: jmp 0xffe110 */
  goto L_ffe110;
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

void f_ffdd1a(void) {
  LOAD_REGS();
L_ffdd1a: /* ffdd1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffdd20: /* ffdd20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd23: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffdd26: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd34: push 0x100a634 */
  { uint32_t v = 0x100a634u; esp -= 4; W32(esp, v); }
/* ffdd39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd41: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd42: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd45: jl 0xffdd20 */
  if ((sf != of)) goto L_ffdd20;
L_ffdd47: /* ffdd47: xor edi, edi */
  edi = 0;
/* ffdd49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd50: /* ffdd50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd53: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffdd56: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd64: push 0x100a628 */
  { uint32_t v = 0x100a628u; esp -= 4; W32(esp, v); }
/* ffdd69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd71: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd72: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd75: jl 0xffdd50 */
  if ((sf != of)) goto L_ffdd50;
L_ffdd77: /* ffdd77: xor edi, edi */
  edi = 0;
/* ffdd79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd80: /* ffdd80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd83: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffdd86: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd94: push 0x100a61c */
  { uint32_t v = 0x100a61cu; esp -= 4; W32(esp, v); }
/* ffdd99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdda1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdda2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdda5: jl 0xffdd80 */
  if ((sf != of)) goto L_ffdd80;
L_ffdda7: /* ffdda7: xor edi, edi */
  edi = 0;
/* ffdda9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffddb0: /* ffddb0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffddb3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffddb6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffddb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddbf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddc4: push 0x100a610 */
  { uint32_t v = 0x100a610u; esp -= 4; W32(esp, v); }
/* ffddc9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffddd1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffddd2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffddd5: jl 0xffddb0 */
  if ((sf != of)) goto L_ffddb0;
L_ffddd7: /* ffddd7: xor edi, edi */
  edi = 0;
/* ffddd9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdde0: /* ffdde0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdde3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffdde6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdde9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdded: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddf4: push 0x100a604 */
  { uint32_t v = 0x100a604u; esp -= 4; W32(esp, v); }
/* ffddf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddfeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddfe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde02: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde05: jl 0xffdde0 */
  if ((sf != of)) goto L_ffdde0;
L_ffde07: /* ffde07: xor edi, edi */
  edi = 0;
/* ffde09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde10: /* ffde10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde13: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffde16: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde24: push 0x100a5f8 */
  { uint32_t v = 0x100a5f8u; esp -= 4; W32(esp, v); }
/* ffde29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde31: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde32: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde35: jl 0xffde10 */
  if ((sf != of)) goto L_ffde10;
L_ffde37: /* ffde37: xor edi, edi */
  edi = 0;
/* ffde39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde40: /* ffde40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde43: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffde46: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde54: push 0x100a5ec */
  { uint32_t v = 0x100a5ecu; esp -= 4; W32(esp, v); }
/* ffde59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde61: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde62: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde65: jl 0xffde40 */
  if ((sf != of)) goto L_ffde40;
L_ffde67: /* ffde67: xor edi, edi */
  edi = 0;
/* ffde69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde70: /* ffde70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde73: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffde76: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde84: push 0x100a5e0 */
  { uint32_t v = 0x100a5e0u; esp -= 4; W32(esp, v); }
/* ffde89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde91: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde92: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde95: jl 0xffde70 */
  if ((sf != of)) goto L_ffde70;
L_ffde97: /* ffde97: xor edi, edi */
  edi = 0;
/* ffde99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdea0: /* ffdea0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdea3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffdea6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdeab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdead: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdeaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdeb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdeb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdeb4: push 0x100a5d4 */
  { uint32_t v = 0x100a5d4u; esp -= 4; W32(esp, v); }
/* ffdeb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdebeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdebe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdec1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdec2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdec5: jl 0xffdea0 */
  if ((sf != of)) goto L_ffdea0;
L_ffdec7: /* ffdec7: xor edi, edi */
  edi = 0;
/* ffdec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffded0: /* ffded0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffded3: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffded6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffded9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdedf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdee2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdee4: push 0x100a5c8 */
  { uint32_t v = 0x100a5c8u; esp -= 4; W32(esp, v); }
/* ffdee9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdeeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdeee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdef2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdef5: jl 0xffded0 */
  if ((sf != of)) goto L_ffded0;
L_ffdef7: /* ffdef7: xor edi, edi */
  edi = 0;
/* ffdef9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf00: /* ffdf00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf03: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffdf06: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf14: push 0x100a5b8 */
  { uint32_t v = 0x100a5b8u; esp -= 4; W32(esp, v); }
/* ffdf19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf21: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf22: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf25: jl 0xffdf00 */
  if ((sf != of)) goto L_ffdf00;
L_ffdf27: /* ffdf27: xor edi, edi */
  edi = 0;
/* ffdf29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf30: /* ffdf30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf33: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffdf36: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf44: push 0x100a5ac */
  { uint32_t v = 0x100a5acu; esp -= 4; W32(esp, v); }
/* ffdf49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf51: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf52: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf55: jl 0xffdf30 */
  if ((sf != of)) goto L_ffdf30;
L_ffdf57: /* ffdf57: xor edi, edi */
  edi = 0;
/* ffdf59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf60: /* ffdf60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf63: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffdf66: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf74: push 0x100a59c */
  { uint32_t v = 0x100a59cu; esp -= 4; W32(esp, v); }
/* ffdf79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf81: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf82: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf85: jl 0xffdf60 */
  if ((sf != of)) goto L_ffdf60;
L_ffdf87: /* ffdf87: xor edi, edi */
  edi = 0;
/* ffdf89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf90: /* ffdf90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf93: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffdf96: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfa3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfa4: push 0x100a590 */
  { uint32_t v = 0x100a590u; esp -= 4; W32(esp, v); }
/* ffdfa9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfb1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfb2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfb5: jl 0xffdf90 */
  if ((sf != of)) goto L_ffdf90;
L_ffdfb7: /* ffdfb7: xor edi, edi */
  edi = 0;
/* ffdfb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdfc0: /* ffdfc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdfc3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffdfc6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdfc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfcf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfd4: push 0x100a580 */
  { uint32_t v = 0x100a580u; esp -= 4; W32(esp, v); }
/* ffdfd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfe1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfe2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfe5: jl 0xffdfc0 */
  if ((sf != of)) goto L_ffdfc0;
L_ffdfe7: /* ffdfe7: xor edi, edi */
  edi = 0;
/* ffdfe9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdff0: /* ffdff0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdff3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffdff6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe004: push 0x100a574 */
  { uint32_t v = 0x100a574u; esp -= 4; W32(esp, v); }
/* ffe009: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe00eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe00e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe011: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe012: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe015: jl 0xffdff0 */
  if ((sf != of)) goto L_ffdff0;
L_ffe017: /* ffe017: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffe01a: mov edi, dword ptr [esi + 0x370] */
  edi = R32((uint32_t)(esi + 0x370u));
/* ffe020: xor eax, eax */
  eax = 0;
/* ffe022: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffe024: je 0xffe0d7 */
  if (zf) goto L_ffe0d7;
L_ffe02a: /* ffe02a: add edi, 0x12 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe02d: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffe031: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe035: jmp 0xffe040 */
  goto L_ffe040;
L_ffe040: /* ffe040: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe048: jmp 0xffe050 */
  goto L_ffe050;
L_ffe050: /* ffe050: mov ecx, 2 */
  ecx = 0x2u;
/* ffe055: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe057: jle 0xffe0a8 */
  if ((zf || sf != of)) goto L_ffe0a8;
L_ffe059: /* ffe059: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe05d: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffe061: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe063: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe066: lea esi, [eax + edx*4 + 0x374] */
  esi = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe06d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffe070: /* ffe070: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffe074: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffe077: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* ffe07a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe07e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffe081: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* ffe084: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* ffe087: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* ffe089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffe08e: jne 0xffe0a5 */
  if (!zf) goto L_ffe0a5;
L_ffe090: /* ffe090: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffe092: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffe094: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffe097: mov eax, dword ptr [edx + 0x370] */
  eax = R32((uint32_t)(edx + 0x370u));
/* ffe09d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffe09e: lea edi, [eax + 0x12] */
  edi = (uint32_t)(eax + 0x12u);
/* ffe0a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0a3: jl 0xffe070 */
  if ((sf != of)) goto L_ffe070;
L_ffe0a5: /* ffe0a5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe0a8: /* ffe0a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffe0ad: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0b0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe0b4: jl 0xffe050 */
  if ((sf != of)) goto L_ffe050;
L_ffe0b6: /* ffe0b6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffe0ba: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe0be: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe0c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0c4: cmp eax, 0xbb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0c9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe0cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ffe0d1: jl 0xffe040 */
  if ((sf != of)) goto L_ffe040;
L_ffe0d7: /* ffe0d7: xor edi, edi */
  edi = 0;
/* ffe0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe0e0: /* ffe0e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe0e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffe0e5: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ec: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe0ee: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe0f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe0f3: push 0x100a564 */
  { uint32_t v = 0x100a564u; esp -= 4; W32(esp, v); }
/* ffe0f8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe0fdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe0fd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe100: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe101: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe104: jl 0xffe0e0 */
  if ((sf != of)) goto L_ffe0e0;
L_ffe106: /* ffe106: xor edi, edi */
  edi = 0;
/* ffe108: jmp 0xffe110 */
  goto L_ffe110;
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

void f_ffe037(void) {
  LOAD_REGS();
L_ffe037: /* ffe037: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ffe03e: mov edi, edi */
  edi = edi;
L_ffe040: /* ffe040: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe048: jmp 0xffe050 */
  goto L_ffe050;
L_ffe050: /* ffe050: mov ecx, 2 */
  ecx = 0x2u;
/* ffe055: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe057: jle 0xffe0a8 */
  if ((zf || sf != of)) goto L_ffe0a8;
L_ffe059: /* ffe059: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe05d: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffe061: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe063: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe066: lea esi, [eax + edx*4 + 0x374] */
  esi = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe06d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffe070: /* ffe070: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffe074: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffe077: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* ffe07a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe07e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffe081: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* ffe084: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* ffe087: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* ffe089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffe08e: jne 0xffe0a5 */
  if (!zf) goto L_ffe0a5;
L_ffe090: /* ffe090: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffe092: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffe094: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffe097: mov eax, dword ptr [edx + 0x370] */
  eax = R32((uint32_t)(edx + 0x370u));
/* ffe09d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffe09e: lea edi, [eax + 0x12] */
  edi = (uint32_t)(eax + 0x12u);
/* ffe0a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0a3: jl 0xffe070 */
  if ((sf != of)) goto L_ffe070;
L_ffe0a5: /* ffe0a5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe0a8: /* ffe0a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffe0ad: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0b0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe0b4: jl 0xffe050 */
  if ((sf != of)) goto L_ffe050;
L_ffe0b6: /* ffe0b6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffe0ba: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe0be: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe0c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0c4: cmp eax, 0xbb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0c9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe0cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ffe0d1: jl 0xffe040 */
  if ((sf != of)) goto L_ffe040;
L_ffe0d7: /* ffe0d7: xor edi, edi */
  edi = 0;
/* ffe0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe0e0: /* ffe0e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe0e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffe0e5: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ec: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe0ee: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe0f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe0f3: push 0x100a564 */
  { uint32_t v = 0x100a564u; esp -= 4; W32(esp, v); }
/* ffe0f8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe0fdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe0fd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe100: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe101: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe104: jl 0xffe0e0 */
  if ((sf != of)) goto L_ffe0e0;
L_ffe106: /* ffe106: xor edi, edi */
  edi = 0;
/* ffe108: jmp 0xffe110 */
  goto L_ffe110;
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

void f_ffe04a(void) {
  LOAD_REGS();
  goto L_ffe04a;
L_ffe040: /* ffe040: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe048: jmp 0xffe050 */
  goto L_ffe050;
L_ffe04a: /* ffe04a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffe050: /* ffe050: mov ecx, 2 */
  ecx = 0x2u;
/* ffe055: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe057: jle 0xffe0a8 */
  if ((zf || sf != of)) goto L_ffe0a8;
L_ffe059: /* ffe059: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe05d: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffe061: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe063: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe066: lea esi, [eax + edx*4 + 0x374] */
  esi = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe06d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffe070: /* ffe070: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffe074: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffe077: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* ffe07a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe07e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffe081: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* ffe084: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* ffe087: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* ffe089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffe08e: jne 0xffe0a5 */
  if (!zf) goto L_ffe0a5;
L_ffe090: /* ffe090: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffe092: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffe094: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffe097: mov eax, dword ptr [edx + 0x370] */
  eax = R32((uint32_t)(edx + 0x370u));
/* ffe09d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffe09e: lea edi, [eax + 0x12] */
  edi = (uint32_t)(eax + 0x12u);
/* ffe0a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0a3: jl 0xffe070 */
  if ((sf != of)) goto L_ffe070;
L_ffe0a5: /* ffe0a5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe0a8: /* ffe0a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffe0ad: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0b0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe0b4: jl 0xffe050 */
  if ((sf != of)) goto L_ffe050;
L_ffe0b6: /* ffe0b6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffe0ba: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe0be: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe0c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0c4: cmp eax, 0xbb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0c9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe0cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ffe0d1: jl 0xffe040 */
  if ((sf != of)) goto L_ffe040;
L_ffe0d7: /* ffe0d7: xor edi, edi */
  edi = 0;
/* ffe0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe0e0: /* ffe0e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe0e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffe0e5: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ec: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe0ee: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe0f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe0f3: push 0x100a564 */
  { uint32_t v = 0x100a564u; esp -= 4; W32(esp, v); }
/* ffe0f8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe0fdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe0fd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe100: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe101: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe104: jl 0xffe0e0 */
  if ((sf != of)) goto L_ffe0e0;
L_ffe106: /* ffe106: xor edi, edi */
  edi = 0;
/* ffe108: jmp 0xffe110 */
  goto L_ffe110;
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
