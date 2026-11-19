#include "recomp.h"
#include "rec_mod.h"

void f_e81000(void) {
  LOAD_REGS();
L_e81000: /* e81000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e81004: mov dword ptr [0xebdc20], eax */
  W32((uint32_t)(0xebdc20u), eax);
/* e81009: mov eax, 1 */
  eax = 0x1u;
/* e8100e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e81020(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_e81020: /* e81020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e81021: mov ebp, esp */
  ebp = esp;
/* e81023: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81025: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81026: mov eax, dword ptr [0xeae010] */
  eax = R32((uint32_t)(0xeae010u));
/* e8102b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8102e: je 0xe81204 */
  if (zf) goto L_e81204;
L_e81034: /* e81034: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e81037: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e8103a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e8103d: mov ebx, ecx */
  ebx = ecx;
/* e8103f: cld  */
  DF = 0;
/* e81040: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e81043: jb 0xe810e0 */
  if (cf) goto L_e810e0;
L_e81049: /* e81049: cmp ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8104f: jbe 0xe81059 */
  if ((cf | zf)) goto L_e81059;
L_e81051: /* e81051: cmp ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e81057: jbe 0xe81078 */
  if ((cf | zf)) goto L_e81078;
L_e81059: /* e81059: mov ecx, 8 */
  ecx = 0x8u;
/* e8105e: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e81060: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e81063: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* e81065: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e81067: add ecx, 0xe81078 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe81078u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8106d: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_e81078: /* e81078: mov ecx, ebx */
  ecx = ebx;
/* e8107a: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* e8107d: je 0xe810de */
  if (zf) goto L_e810de;
L_e8107f: /* e8107f: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e81085: jae 0xe810f0 */
  if (!cf) goto L_e810f0;
L_e81087: /* e81087: jmp 0xe81090 */
  goto L_e81090;
L_e81090: /* e81090: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xe81090); /* prefetchnta byte ptr [esi + 0x238] */
/* e81097: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e8109a: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e8109e: movq qword ptr [edi], mm0 */
  W64((uint32_t)(edi), MMX[0]);
/* e810a1: movq qword ptr [edi + 8], mm1 */
  W64((uint32_t)(edi + 0x8u), MMX[1]);
/* e810a5: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* e810a9: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* e810ad: movq qword ptr [edi + 0x10], mm2 */
  W64((uint32_t)(edi + 0x10u), MMX[2]);
/* e810b1: movq qword ptr [edi + 0x18], mm3 */
  W64((uint32_t)(edi + 0x18u), MMX[3]);
/* e810b5: movq mm0, qword ptr [esi + 0x20] */
  MMX[0] = R64((uint32_t)(esi + 0x20u));
/* e810b9: movq mm1, qword ptr [esi + 0x28] */
  MMX[1] = R64((uint32_t)(esi + 0x28u));
/* e810bd: movq qword ptr [edi + 0x20], mm0 */
  W64((uint32_t)(edi + 0x20u), MMX[0]);
/* e810c1: movq qword ptr [edi + 0x28], mm1 */
  W64((uint32_t)(edi + 0x28u), MMX[1]);
/* e810c5: movq mm2, qword ptr [esi + 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0x30u));
/* e810c9: movq mm3, qword ptr [esi + 0x38] */
  MMX[3] = R64((uint32_t)(esi + 0x38u));
/* e810cd: movq qword ptr [edi + 0x30], mm2 */
  W64((uint32_t)(edi + 0x30u), MMX[2]);
/* e810d1: movq qword ptr [edi + 0x38], mm3 */
  W64((uint32_t)(edi + 0x38u), MMX[3]);
/* e810d5: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e810d8: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e810db: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e810dc: jne 0xe81090 */
  if (!zf) goto L_e81090;
L_e810de: /* e810de: mov ecx, ebx */
  ecx = ebx;
L_e810e0: /* e810e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e810e3: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e810e6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e810e8: add ecx, 0xe811f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe811f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e810ee: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_e810f0: /* e810f0: cmp ecx, 0xc50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc50u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e810f6: jae 0xe81151 */
  if (!cf) goto L_e81151;
L_e810f8: /* e810f8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* e810fa: je 0xe810de */
  if (zf) goto L_e810de;
L_e810fc: /* e810fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e81100: /* e81100: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xe81100); /* prefetchnta byte ptr [esi + 0x238] */
/* e81107: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e8110a: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8110d: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81111: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81114: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* e81118: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xe81118); /* movntq qword ptr [edi - 0x40], mm0 */
/* e8111c: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* e81120: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xe81120); /* movntq qword ptr [edi - 0x38], mm1 */
/* e81124: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* e81128: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xe81128); /* movntq qword ptr [edi - 0x30], mm2 */
/* e8112c: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* e81130: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xe81130); /* movntq qword ptr [edi - 0x28], mm0 */
/* e81134: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* e81138: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xe81138); /* movntq qword ptr [edi - 0x20], mm1 */
/* e8113c: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* e81140: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xe81140); /* movntq qword ptr [edi - 0x18], mm2 */
/* e81144: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xe81144); /* movntq qword ptr [edi - 0x10], mm0 */
/* e81148: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e81149: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xe81149); /* movntq qword ptr [edi - 8], mm1 */
/* e8114d: jne 0xe81100 */
  if (!zf) goto L_e81100;
L_e8114f: /* e8114f: jmp 0xe810de */
  goto L_e810de;
L_e81151: /* e81151: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81157: jl 0xe810f8 */
  if ((sf != of)) goto L_e810f8;
L_e81159: /* e81159: mov eax, 0x40 */
  eax = 0x40u;
/* e8115e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81164: jmp 0xe81170 */
  goto L_e81170;
L_e81170: /* e81170: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* e81173: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* e81176: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e8117c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8117d: jne 0xe81170 */
  if (!zf) goto L_e81170;
L_e8117f: /* e8117f: mov eax, 0x80 */
  eax = 0x80u;
/* e81184: jmp 0xe81190 */
  goto L_e81190;
L_e81190: /* e81190: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e81193: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81197: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* e8119b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* e8119f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* e811a3: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* e811a7: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* e811ab: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* e811af: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e811b2: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xe811b2); /* movntq qword ptr [edi], mm0 */
/* e811b5: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xe811b5); /* movntq qword ptr [edi + 8], mm1 */
/* e811b9: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xe811b9); /* movntq qword ptr [edi + 0x10], mm2 */
/* e811bd: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xe811bd); /* movntq qword ptr [edi + 0x18], mm3 */
/* e811c1: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xe811c1); /* movntq qword ptr [edi + 0x20], mm4 */
/* e811c5: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xe811c5); /* movntq qword ptr [edi + 0x28], mm5 */
/* e811c9: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xe811c9); /* movntq qword ptr [edi + 0x30], mm6 */
/* e811cd: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xe811cd); /* movntq qword ptr [edi + 0x38], mm7 */
/* e811d1: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e811d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e811d5: jne 0xe81190 */
  if (!zf) goto L_e81190;
L_e811d7: /* e811d7: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e811dd: jmp 0xe81151 */
  goto L_e81151;
L_e81204: /* e81204: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e81207: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e8120a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e8120d: mov ebx, ecx */
  ebx = ecx;
/* e8120f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e81212: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e81215: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81217: mov ecx, ebx */
  ecx = ebx;
/* e81219: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* e8121b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8121c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8121d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8121e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8121f: ret  */
  esp += 4; SPILL(); return;
}

void f_e81070(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_e81070: /* e81070: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e81071: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e81072: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e81073: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e81074: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e81075: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e81076: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e81077: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e81078: mov ecx, ebx */
  ecx = ebx;
/* e8107a: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* e8107d: je 0xe810de */
  if (zf) goto L_e810de;
L_e8107f: /* e8107f: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e81085: jae 0xe810f0 */
  if (!cf) goto L_e810f0;
L_e81087: /* e81087: jmp 0xe81090 */
  goto L_e81090;
L_e81090: /* e81090: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xe81090); /* prefetchnta byte ptr [esi + 0x238] */
/* e81097: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e8109a: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e8109e: movq qword ptr [edi], mm0 */
  W64((uint32_t)(edi), MMX[0]);
/* e810a1: movq qword ptr [edi + 8], mm1 */
  W64((uint32_t)(edi + 0x8u), MMX[1]);
/* e810a5: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* e810a9: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* e810ad: movq qword ptr [edi + 0x10], mm2 */
  W64((uint32_t)(edi + 0x10u), MMX[2]);
/* e810b1: movq qword ptr [edi + 0x18], mm3 */
  W64((uint32_t)(edi + 0x18u), MMX[3]);
/* e810b5: movq mm0, qword ptr [esi + 0x20] */
  MMX[0] = R64((uint32_t)(esi + 0x20u));
/* e810b9: movq mm1, qword ptr [esi + 0x28] */
  MMX[1] = R64((uint32_t)(esi + 0x28u));
/* e810bd: movq qword ptr [edi + 0x20], mm0 */
  W64((uint32_t)(edi + 0x20u), MMX[0]);
/* e810c1: movq qword ptr [edi + 0x28], mm1 */
  W64((uint32_t)(edi + 0x28u), MMX[1]);
/* e810c5: movq mm2, qword ptr [esi + 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0x30u));
/* e810c9: movq mm3, qword ptr [esi + 0x38] */
  MMX[3] = R64((uint32_t)(esi + 0x38u));
/* e810cd: movq qword ptr [edi + 0x30], mm2 */
  W64((uint32_t)(edi + 0x30u), MMX[2]);
/* e810d1: movq qword ptr [edi + 0x38], mm3 */
  W64((uint32_t)(edi + 0x38u), MMX[3]);
/* e810d5: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e810d8: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e810db: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e810dc: jne 0xe81090 */
  if (!zf) goto L_e81090;
L_e810de: /* e810de: mov ecx, ebx */
  ecx = ebx;
/* e810e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e810e3: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e810e6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e810e8: add ecx, 0xe811f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe811f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e810ee: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_e810f0: /* e810f0: cmp ecx, 0xc50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc50u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e810f6: jae 0xe81151 */
  if (!cf) goto L_e81151;
L_e810f8: /* e810f8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* e810fa: je 0xe810de */
  if (zf) goto L_e810de;
L_e810fc: /* e810fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e81100: /* e81100: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xe81100); /* prefetchnta byte ptr [esi + 0x238] */
/* e81107: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e8110a: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8110d: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81111: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81114: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* e81118: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xe81118); /* movntq qword ptr [edi - 0x40], mm0 */
/* e8111c: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* e81120: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xe81120); /* movntq qword ptr [edi - 0x38], mm1 */
/* e81124: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* e81128: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xe81128); /* movntq qword ptr [edi - 0x30], mm2 */
/* e8112c: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* e81130: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xe81130); /* movntq qword ptr [edi - 0x28], mm0 */
/* e81134: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* e81138: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xe81138); /* movntq qword ptr [edi - 0x20], mm1 */
/* e8113c: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* e81140: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xe81140); /* movntq qword ptr [edi - 0x18], mm2 */
/* e81144: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xe81144); /* movntq qword ptr [edi - 0x10], mm0 */
/* e81148: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e81149: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xe81149); /* movntq qword ptr [edi - 8], mm1 */
/* e8114d: jne 0xe81100 */
  if (!zf) goto L_e81100;
L_e8114f: /* e8114f: jmp 0xe810de */
  goto L_e810de;
L_e81151: /* e81151: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81157: jl 0xe810f8 */
  if ((sf != of)) goto L_e810f8;
L_e81159: /* e81159: mov eax, 0x40 */
  eax = 0x40u;
/* e8115e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81164: jmp 0xe81170 */
  goto L_e81170;
L_e81170: /* e81170: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* e81173: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* e81176: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e8117c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8117d: jne 0xe81170 */
  if (!zf) goto L_e81170;
L_e8117f: /* e8117f: mov eax, 0x80 */
  eax = 0x80u;
/* e81184: jmp 0xe81190 */
  goto L_e81190;
L_e81190: /* e81190: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e81193: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81197: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* e8119b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* e8119f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* e811a3: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* e811a7: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* e811ab: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* e811af: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e811b2: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xe811b2); /* movntq qword ptr [edi], mm0 */
/* e811b5: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xe811b5); /* movntq qword ptr [edi + 8], mm1 */
/* e811b9: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xe811b9); /* movntq qword ptr [edi + 0x10], mm2 */
/* e811bd: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xe811bd); /* movntq qword ptr [edi + 0x18], mm3 */
/* e811c1: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xe811c1); /* movntq qword ptr [edi + 0x20], mm4 */
/* e811c5: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xe811c5); /* movntq qword ptr [edi + 0x28], mm5 */
/* e811c9: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xe811c9); /* movntq qword ptr [edi + 0x30], mm6 */
/* e811cd: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xe811cd); /* movntq qword ptr [edi + 0x38], mm7 */
/* e811d1: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e811d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e811d5: jne 0xe81190 */
  if (!zf) goto L_e81190;
L_e811d7: /* e811d7: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e811dd: jmp 0xe81151 */
  goto L_e81151;
}

void f_e81089(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_e81089: /* e81089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e81090: /* e81090: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xe81090); /* prefetchnta byte ptr [esi + 0x238] */
/* e81097: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e8109a: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e8109e: movq qword ptr [edi], mm0 */
  W64((uint32_t)(edi), MMX[0]);
/* e810a1: movq qword ptr [edi + 8], mm1 */
  W64((uint32_t)(edi + 0x8u), MMX[1]);
/* e810a5: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* e810a9: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* e810ad: movq qword ptr [edi + 0x10], mm2 */
  W64((uint32_t)(edi + 0x10u), MMX[2]);
/* e810b1: movq qword ptr [edi + 0x18], mm3 */
  W64((uint32_t)(edi + 0x18u), MMX[3]);
/* e810b5: movq mm0, qword ptr [esi + 0x20] */
  MMX[0] = R64((uint32_t)(esi + 0x20u));
/* e810b9: movq mm1, qword ptr [esi + 0x28] */
  MMX[1] = R64((uint32_t)(esi + 0x28u));
/* e810bd: movq qword ptr [edi + 0x20], mm0 */
  W64((uint32_t)(edi + 0x20u), MMX[0]);
/* e810c1: movq qword ptr [edi + 0x28], mm1 */
  W64((uint32_t)(edi + 0x28u), MMX[1]);
/* e810c5: movq mm2, qword ptr [esi + 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0x30u));
/* e810c9: movq mm3, qword ptr [esi + 0x38] */
  MMX[3] = R64((uint32_t)(esi + 0x38u));
/* e810cd: movq qword ptr [edi + 0x30], mm2 */
  W64((uint32_t)(edi + 0x30u), MMX[2]);
/* e810d1: movq qword ptr [edi + 0x38], mm3 */
  W64((uint32_t)(edi + 0x38u), MMX[3]);
/* e810d5: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e810d8: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e810db: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e810dc: jne 0xe81090 */
  if (!zf) goto L_e81090;
L_e810de: /* e810de: mov ecx, ebx */
  ecx = ebx;
/* e810e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e810e3: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e810e6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e810e8: add ecx, 0xe811f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe811f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e810ee: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
}

void f_e810f0(void) {
  LOAD_REGS();
  uint64_t MMX[8];
  goto L_e810f0;
L_e810de: /* e810de: mov ecx, ebx */
  ecx = ebx;
/* e810e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e810e3: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e810e6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e810e8: add ecx, 0xe811f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe811f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e810ee: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_e810f0: /* e810f0: cmp ecx, 0xc50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc50u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e810f6: jae 0xe81151 */
  if (!cf) goto L_e81151;
L_e810f8: /* e810f8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* e810fa: je 0xe810de */
  if (zf) goto L_e810de;
L_e810fc: /* e810fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e81100: /* e81100: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xe81100); /* prefetchnta byte ptr [esi + 0x238] */
/* e81107: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e8110a: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8110d: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81111: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81114: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* e81118: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xe81118); /* movntq qword ptr [edi - 0x40], mm0 */
/* e8111c: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* e81120: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xe81120); /* movntq qword ptr [edi - 0x38], mm1 */
/* e81124: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* e81128: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xe81128); /* movntq qword ptr [edi - 0x30], mm2 */
/* e8112c: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* e81130: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xe81130); /* movntq qword ptr [edi - 0x28], mm0 */
/* e81134: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* e81138: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xe81138); /* movntq qword ptr [edi - 0x20], mm1 */
/* e8113c: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* e81140: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xe81140); /* movntq qword ptr [edi - 0x18], mm2 */
/* e81144: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xe81144); /* movntq qword ptr [edi - 0x10], mm0 */
/* e81148: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e81149: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xe81149); /* movntq qword ptr [edi - 8], mm1 */
/* e8114d: jne 0xe81100 */
  if (!zf) goto L_e81100;
L_e8114f: /* e8114f: jmp 0xe810de */
  goto L_e810de;
L_e81151: /* e81151: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81157: jl 0xe810f8 */
  if ((sf != of)) goto L_e810f8;
L_e81159: /* e81159: mov eax, 0x40 */
  eax = 0x40u;
/* e8115e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81164: jmp 0xe81170 */
  goto L_e81170;
L_e81170: /* e81170: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* e81173: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* e81176: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e8117c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8117d: jne 0xe81170 */
  if (!zf) goto L_e81170;
L_e8117f: /* e8117f: mov eax, 0x80 */
  eax = 0x80u;
/* e81184: jmp 0xe81190 */
  goto L_e81190;
L_e81190: /* e81190: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e81193: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81197: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* e8119b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* e8119f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* e811a3: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* e811a7: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* e811ab: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* e811af: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e811b2: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xe811b2); /* movntq qword ptr [edi], mm0 */
/* e811b5: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xe811b5); /* movntq qword ptr [edi + 8], mm1 */
/* e811b9: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xe811b9); /* movntq qword ptr [edi + 0x10], mm2 */
/* e811bd: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xe811bd); /* movntq qword ptr [edi + 0x18], mm3 */
/* e811c1: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xe811c1); /* movntq qword ptr [edi + 0x20], mm4 */
/* e811c5: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xe811c5); /* movntq qword ptr [edi + 0x28], mm5 */
/* e811c9: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xe811c9); /* movntq qword ptr [edi + 0x30], mm6 */
/* e811cd: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xe811cd); /* movntq qword ptr [edi + 0x38], mm7 */
/* e811d1: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e811d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e811d5: jne 0xe81190 */
  if (!zf) goto L_e81190;
L_e811d7: /* e811d7: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e811dd: jmp 0xe81151 */
  goto L_e81151;
}

void f_e81166(void) {
  LOAD_REGS();
  uint64_t MMX[8];
  goto L_e81166;
L_e810de: /* e810de: mov ecx, ebx */
  ecx = ebx;
/* e810e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e810e3: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e810e6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e810e8: add ecx, 0xe811f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe811f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e810ee: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_e810f8: /* e810f8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* e810fa: je 0xe810de */
  if (zf) goto L_e810de;
L_e810fc: /* e810fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e81100: /* e81100: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xe81100); /* prefetchnta byte ptr [esi + 0x238] */
/* e81107: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e8110a: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8110d: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81111: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81114: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* e81118: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xe81118); /* movntq qword ptr [edi - 0x40], mm0 */
/* e8111c: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* e81120: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xe81120); /* movntq qword ptr [edi - 0x38], mm1 */
/* e81124: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* e81128: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xe81128); /* movntq qword ptr [edi - 0x30], mm2 */
/* e8112c: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* e81130: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xe81130); /* movntq qword ptr [edi - 0x28], mm0 */
/* e81134: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* e81138: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xe81138); /* movntq qword ptr [edi - 0x20], mm1 */
/* e8113c: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* e81140: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xe81140); /* movntq qword ptr [edi - 0x18], mm2 */
/* e81144: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xe81144); /* movntq qword ptr [edi - 0x10], mm0 */
/* e81148: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e81149: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xe81149); /* movntq qword ptr [edi - 8], mm1 */
/* e8114d: jne 0xe81100 */
  if (!zf) goto L_e81100;
L_e8114f: /* e8114f: jmp 0xe810de */
  goto L_e810de;
L_e81151: /* e81151: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81157: jl 0xe810f8 */
  if ((sf != of)) goto L_e810f8;
L_e81159: /* e81159: mov eax, 0x40 */
  eax = 0x40u;
/* e8115e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81164: jmp 0xe81170 */
  goto L_e81170;
L_e81166: /* e81166: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* e8116d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e81170: /* e81170: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* e81173: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* e81176: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e8117c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8117d: jne 0xe81170 */
  if (!zf) goto L_e81170;
L_e8117f: /* e8117f: mov eax, 0x80 */
  eax = 0x80u;
/* e81184: jmp 0xe81190 */
  goto L_e81190;
L_e81190: /* e81190: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e81193: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81197: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* e8119b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* e8119f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* e811a3: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* e811a7: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* e811ab: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* e811af: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e811b2: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xe811b2); /* movntq qword ptr [edi], mm0 */
/* e811b5: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xe811b5); /* movntq qword ptr [edi + 8], mm1 */
/* e811b9: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xe811b9); /* movntq qword ptr [edi + 0x10], mm2 */
/* e811bd: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xe811bd); /* movntq qword ptr [edi + 0x18], mm3 */
/* e811c1: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xe811c1); /* movntq qword ptr [edi + 0x20], mm4 */
/* e811c5: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xe811c5); /* movntq qword ptr [edi + 0x28], mm5 */
/* e811c9: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xe811c9); /* movntq qword ptr [edi + 0x30], mm6 */
/* e811cd: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xe811cd); /* movntq qword ptr [edi + 0x38], mm7 */
/* e811d1: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e811d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e811d5: jne 0xe81190 */
  if (!zf) goto L_e81190;
L_e811d7: /* e811d7: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e811dd: jmp 0xe81151 */
  goto L_e81151;
}

void f_e81186(void) {
  LOAD_REGS();
  uint64_t MMX[8];
  goto L_e81186;
L_e810de: /* e810de: mov ecx, ebx */
  ecx = ebx;
/* e810e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e810e3: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e810e6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e810e8: add ecx, 0xe811f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe811f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e810ee: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_e810f8: /* e810f8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* e810fa: je 0xe810de */
  if (zf) goto L_e810de;
L_e810fc: /* e810fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e81100: /* e81100: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xe81100); /* prefetchnta byte ptr [esi + 0x238] */
/* e81107: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e8110a: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8110d: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81111: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81114: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* e81118: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xe81118); /* movntq qword ptr [edi - 0x40], mm0 */
/* e8111c: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* e81120: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xe81120); /* movntq qword ptr [edi - 0x38], mm1 */
/* e81124: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* e81128: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xe81128); /* movntq qword ptr [edi - 0x30], mm2 */
/* e8112c: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* e81130: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xe81130); /* movntq qword ptr [edi - 0x28], mm0 */
/* e81134: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* e81138: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xe81138); /* movntq qword ptr [edi - 0x20], mm1 */
/* e8113c: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* e81140: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xe81140); /* movntq qword ptr [edi - 0x18], mm2 */
/* e81144: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xe81144); /* movntq qword ptr [edi - 0x10], mm0 */
/* e81148: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e81149: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xe81149); /* movntq qword ptr [edi - 8], mm1 */
/* e8114d: jne 0xe81100 */
  if (!zf) goto L_e81100;
L_e8114f: /* e8114f: jmp 0xe810de */
  goto L_e810de;
L_e81151: /* e81151: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81157: jl 0xe810f8 */
  if ((sf != of)) goto L_e810f8;
L_e81159: /* e81159: mov eax, 0x40 */
  eax = 0x40u;
/* e8115e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81164: jmp 0xe81170 */
  goto L_e81170;
L_e81170: /* e81170: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* e81173: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* e81176: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e8117c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8117d: jne 0xe81170 */
  if (!zf) goto L_e81170;
L_e8117f: /* e8117f: mov eax, 0x80 */
  eax = 0x80u;
/* e81184: jmp 0xe81190 */
  goto L_e81190;
L_e81186: /* e81186: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* e8118d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e81190: /* e81190: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* e81193: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* e81197: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* e8119b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* e8119f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* e811a3: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* e811a7: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* e811ab: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* e811af: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e811b2: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xe811b2); /* movntq qword ptr [edi], mm0 */
/* e811b5: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xe811b5); /* movntq qword ptr [edi + 8], mm1 */
/* e811b9: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xe811b9); /* movntq qword ptr [edi + 0x10], mm2 */
/* e811bd: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xe811bd); /* movntq qword ptr [edi + 0x18], mm3 */
/* e811c1: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xe811c1); /* movntq qword ptr [edi + 0x20], mm4 */
/* e811c5: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xe811c5); /* movntq qword ptr [edi + 0x28], mm5 */
/* e811c9: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xe811c9); /* movntq qword ptr [edi + 0x30], mm6 */
/* e811cd: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xe811cd); /* movntq qword ptr [edi + 0x38], mm7 */
/* e811d1: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e811d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e811d5: jne 0xe81190 */
  if (!zf) goto L_e81190;
L_e811d7: /* e811d7: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e811dd: jmp 0xe81151 */
  goto L_e81151;
}

void f_e811e2(void) {
  LOAD_REGS();
L_e811e2: /* e811e2: mov edi, edi */
  edi = edi;
/* e811e4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811e5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811e6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811e7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811e8: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811e9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811ea: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811eb: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811ec: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811ed: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811ee: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811ef: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811f0: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811f1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811f2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e811f3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
  SPILL(); f_e811f4(); return;
}

void f_e811f4(void) {
  LOAD_REGS();
L_e811f4: /* e811f4: mov ecx, ebx */
  ecx = ebx;
/* e811f6: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* e811f9: je 0xe811fd */
  if (zf) goto L_e811fd;
L_e811fb: /* e811fb: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
L_e811fd: /* e811fd: emms  */
/* e811ff: sfence  */
  guest_unsupported(0xe811ff); /* sfence  */
/* e81202: jmp 0xe8121b */
  goto L_e8121b;
L_e8121b: /* e8121b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8121c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8121d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8121e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8121f: ret  */
  esp += 4; SPILL(); return;
}

void f_e81220(void) {
  LOAD_REGS();
L_e81220: /* e81220: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e81225: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e81227: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e8122b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8122d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8122e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe81231u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e81231: ret  */
  esp += 4; SPILL(); return;
}

void f_e81240(void) {
  LOAD_REGS();
L_e81240: /* e81240: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e81244: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* e81245: js 0xe8126d */
  if (sf) goto L_e8126d;
L_e81247: /* e81247: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81248: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* e8124c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8124d: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* e81251: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81252: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e81256: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81257: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* e8125a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e81260: /* e81260: mov ecx, esi */
  ecx = esi;
/* e81262: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe81264u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e81264: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81266: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* e81267: jne 0xe81260 */
  if (!zf) goto L_e81260;
L_e81269: /* e81269: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8126a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8126b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8126c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_e8126d: /* e8126d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e81270(void) {
  LOAD_REGS();
L_e81270: /* e81270: mov eax, 0xebdd60 */
  eax = 0xebdd60u;
/* e81275: ret  */
  esp += 4; SPILL(); return;
}

void f_e81280(void) {
  LOAD_REGS();
L_e81280: /* e81280: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e81285: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e81287: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8128b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8128f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e81291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e81293: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81294: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e81298: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8129a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8129b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8129c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8129d: push 0xebdd60 */
  { uint32_t v = 0xebdd60u; esp -= 4; W32(esp, v); }
/* e812a2: call dword ptr [0xeae01c] */
  esp -= 4; W32(esp, 0xe812a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* e812a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e812ab: ret  */
  esp += 4; SPILL(); return;
}

void f_e812b0(void) {
  LOAD_REGS();
L_e812b0: /* e812b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e812b4: ret  */
  esp += 4; SPILL(); return;
}

void f_e812c0(void) {
  LOAD_REGS();
L_e812c0: /* e812c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e812c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e812c6: je 0xe812cd */
  if (zf) goto L_e812cd;
L_e812c8: /* e812c8: jmp 0xe90320 */
  SPILL(); f_e90320(); return;
L_e812cd: /* e812cd: ret  */
  esp += 4; SPILL(); return;
}

void f_e812d0(void) {
  LOAD_REGS();
L_e812d0: /* e812d0: ret  */
  esp += 4; SPILL(); return;
}

void f_e812e0(void) {
  LOAD_REGS();
L_e812e0: /* e812e0: mov eax, ecx */
  eax = ecx;
/* e812e2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e812e6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e812e8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e812ea: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e812ed: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e812f0: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* e812f3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* e812f6: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* e812f9: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* e812fc: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* e812ff: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* e81302: mov ecx, dword ptr [edx + 0x14] */
  ecx = R32((uint32_t)(edx + 0x14u));
/* e81305: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e81308: mov ecx, dword ptr [edx + 0x18] */
  ecx = R32((uint32_t)(edx + 0x18u));
/* e8130b: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* e8130e: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* e81311: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* e81314: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* e81317: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* e8131a: mov ecx, dword ptr [edx + 0x24] */
  ecx = R32((uint32_t)(edx + 0x24u));
/* e8131d: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* e81320: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* e81323: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* e81326: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* e81329: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* e8132c: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e8132f: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* e81332: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* e81335: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* e81338: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81339: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8133a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8133b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8133c: lea esi, [edx + 0x38] */
  esi = (uint32_t)(edx + 0x38u);
/* e8133f: lea edi, [eax + 0x38] */
  edi = (uint32_t)(eax + 0x38u);
/* e81342: mov ecx, 0x10 */
  ecx = 0x10u;
/* e81347: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81349: lea esi, [edx + 0x78] */
  esi = (uint32_t)(edx + 0x78u);
/* e8134c: lea edi, [eax + 0x78] */
  edi = (uint32_t)(eax + 0x78u);
/* e8134f: mov ecx, 0x10 */
  ecx = 0x10u;
/* e81354: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81356: lea esi, [edx + 0xb8] */
  esi = (uint32_t)(edx + 0xb8u);
/* e8135c: lea edi, [eax + 0xb8] */
  edi = (uint32_t)(eax + 0xb8u);
/* e81362: mov ecx, 0x10 */
  ecx = 0x10u;
/* e81367: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81369: mov ecx, dword ptr [edx + 0xf8] */
  ecx = R32((uint32_t)(edx + 0xf8u));
/* e8136f: mov dword ptr [eax + 0xf8], ecx */
  W32((uint32_t)(eax + 0xf8u), ecx);
/* e81375: lea esi, [edx + 0xfc] */
  esi = (uint32_t)(edx + 0xfcu);
/* e8137b: lea edi, [eax + 0xfc] */
  edi = (uint32_t)(eax + 0xfcu);
/* e81381: mov ecx, 0x10 */
  ecx = 0x10u;
/* e81386: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81388: lea esi, [edx + 0x13c] */
  esi = (uint32_t)(edx + 0x13cu);
/* e8138e: lea edi, [eax + 0x13c] */
  edi = (uint32_t)(eax + 0x13cu);
/* e81394: mov ecx, 0x10 */
  ecx = 0x10u;
/* e81399: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8139b: mov ecx, dword ptr [edx + 0x17c] */
  ecx = R32((uint32_t)(edx + 0x17cu));
/* e813a1: mov dword ptr [eax + 0x17c], ecx */
  W32((uint32_t)(eax + 0x17cu), ecx);
/* e813a7: mov ecx, dword ptr [edx + 0x180] */
  ecx = R32((uint32_t)(edx + 0x180u));
/* e813ad: mov dword ptr [eax + 0x180], ecx */
  W32((uint32_t)(eax + 0x180u), ecx);
/* e813b3: mov ecx, dword ptr [edx + 0x184] */
  ecx = R32((uint32_t)(edx + 0x184u));
/* e813b9: mov dword ptr [eax + 0x184], ecx */
  W32((uint32_t)(eax + 0x184u), ecx);
/* e813bf: mov ecx, dword ptr [edx + 0x188] */
  ecx = R32((uint32_t)(edx + 0x188u));
/* e813c5: mov dword ptr [eax + 0x188], ecx */
  W32((uint32_t)(eax + 0x188u), ecx);
/* e813cb: mov ecx, dword ptr [edx + 0x18c] */
  ecx = R32((uint32_t)(edx + 0x18cu));
/* e813d1: mov dword ptr [eax + 0x18c], ecx */
  W32((uint32_t)(eax + 0x18cu), ecx);
/* e813d7: mov ecx, dword ptr [edx + 0x190] */
  ecx = R32((uint32_t)(edx + 0x190u));
/* e813dd: mov dword ptr [eax + 0x190], ecx */
  W32((uint32_t)(eax + 0x190u), ecx);
/* e813e3: mov ecx, dword ptr [edx + 0x194] */
  ecx = R32((uint32_t)(edx + 0x194u));
/* e813e9: mov dword ptr [eax + 0x194], ecx */
  W32((uint32_t)(eax + 0x194u), ecx);
/* e813ef: mov ecx, dword ptr [edx + 0x198] */
  ecx = R32((uint32_t)(edx + 0x198u));
/* e813f5: mov dword ptr [eax + 0x198], ecx */
  W32((uint32_t)(eax + 0x198u), ecx);
/* e813fb: mov ecx, dword ptr [edx + 0x19c] */
  ecx = R32((uint32_t)(edx + 0x19cu));
/* e81401: mov dword ptr [eax + 0x19c], ecx */
  W32((uint32_t)(eax + 0x19cu), ecx);
/* e81407: mov ecx, dword ptr [edx + 0x1a0] */
  ecx = R32((uint32_t)(edx + 0x1a0u));
/* e8140d: mov dword ptr [eax + 0x1a0], ecx */
  W32((uint32_t)(eax + 0x1a0u), ecx);
/* e81413: lea ecx, [edx + 0x1a4] */
  ecx = (uint32_t)(edx + 0x1a4u);
/* e81419: lea esi, [eax + 0x1a4] */
  esi = (uint32_t)(eax + 0x1a4u);
/* e8141f: mov edi, ecx */
  edi = ecx;
/* e81421: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* e81423: mov ebx, esi */
  ebx = esi;
/* e81425: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* e81427: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* e8142a: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* e8142d: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* e81430: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* e81433: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* e81436: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* e81439: mov ecx, dword ptr [edx + 0x1b4] */
  ecx = R32((uint32_t)(edx + 0x1b4u));
/* e8143f: mov dword ptr [eax + 0x1b4], ecx */
  W32((uint32_t)(eax + 0x1b4u), ecx);
/* e81445: lea esi, [edx + 0x1b8] */
  esi = (uint32_t)(edx + 0x1b8u);
/* e8144b: lea edi, [eax + 0x1b8] */
  edi = (uint32_t)(eax + 0x1b8u);
/* e81451: mov ecx, 0xd0 */
  ecx = 0xd0u;
/* e81456: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81458: lea esi, [edx + 0x4f8] */
  esi = (uint32_t)(edx + 0x4f8u);
/* e8145e: lea edi, [eax + 0x4f8] */
  edi = (uint32_t)(eax + 0x4f8u);
/* e81464: mov ecx, 8 */
  ecx = 0x8u;
/* e81469: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8146b: mov ecx, dword ptr [edx + 0x518] */
  ecx = R32((uint32_t)(edx + 0x518u));
/* e81471: mov dword ptr [eax + 0x518], ecx */
  W32((uint32_t)(eax + 0x518u), ecx);
/* e81477: mov ecx, dword ptr [edx + 0x51c] */
  ecx = R32((uint32_t)(edx + 0x51cu));
/* e8147d: mov dword ptr [eax + 0x51c], ecx */
  W32((uint32_t)(eax + 0x51cu), ecx);
/* e81483: mov ecx, dword ptr [edx + 0x520] */
  ecx = R32((uint32_t)(edx + 0x520u));
/* e81489: mov dword ptr [eax + 0x520], ecx */
  W32((uint32_t)(eax + 0x520u), ecx);
/* e8148f: mov ecx, dword ptr [edx + 0x524] */
  ecx = R32((uint32_t)(edx + 0x524u));
/* e81495: mov dword ptr [eax + 0x524], ecx */
  W32((uint32_t)(eax + 0x524u), ecx);
/* e8149b: mov ecx, dword ptr [edx + 0x528] */
  ecx = R32((uint32_t)(edx + 0x528u));
/* e814a1: mov dword ptr [eax + 0x528], ecx */
  W32((uint32_t)(eax + 0x528u), ecx);
/* e814a7: lea esi, [edx + 0x52c] */
  esi = (uint32_t)(edx + 0x52cu);
/* e814ad: lea edi, [eax + 0x52c] */
  edi = (uint32_t)(eax + 0x52cu);
/* e814b3: mov ecx, 8 */
  ecx = 0x8u;
/* e814b8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e814ba: mov ecx, dword ptr [edx + 0x54c] */
  ecx = R32((uint32_t)(edx + 0x54cu));
/* e814c0: mov dword ptr [eax + 0x54c], ecx */
  W32((uint32_t)(eax + 0x54cu), ecx);
/* e814c6: mov ecx, dword ptr [edx + 0x550] */
  ecx = R32((uint32_t)(edx + 0x550u));
/* e814cc: mov dword ptr [eax + 0x550], ecx */
  W32((uint32_t)(eax + 0x550u), ecx);
/* e814d2: mov ecx, dword ptr [edx + 0x554] */
  ecx = R32((uint32_t)(edx + 0x554u));
/* e814d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e814d9: mov dword ptr [eax + 0x554], ecx */
  W32((uint32_t)(eax + 0x554u), ecx);
/* e814df: mov ecx, dword ptr [edx + 0x558] */
  ecx = R32((uint32_t)(edx + 0x558u));
/* e814e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e814e6: mov dword ptr [eax + 0x558], ecx */
  W32((uint32_t)(eax + 0x558u), ecx);
/* e814ec: mov edx, dword ptr [edx + 0x55c] */
  edx = R32((uint32_t)(edx + 0x55cu));
/* e814f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e814f3: mov dword ptr [eax + 0x55c], edx */
  W32((uint32_t)(eax + 0x55cu), edx);
/* e814f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e814fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81500(void) {
  LOAD_REGS();
L_e81500: /* e81500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81502: push 0xeac9c9 */
  { uint32_t v = 0xeac9c9u; esp -= 4; W32(esp, v); }
/* e81507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8150d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8150e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e81515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81517: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81518: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81519: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e8151d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81520: mov esi, ecx */
  esi = ecx;
/* e81522: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e81524: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e81528: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* e8152e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e81531: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e81534: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe8153au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e8153a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* e81541: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81544: xor ebx, ebx */
  ebx = 0;
/* e81546: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e81548: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e81550: jle 0xe81576 */
  if ((zf || sf != of)) goto L_e81576;
L_e81552: /* e81552: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e81554: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e81556: mov ecx, esi */
  ecx = esi;
/* e81558: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8155eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e8155e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e81560: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* e81563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e81565: je 0xe8156e */
  if (zf) goto L_e8156e;
L_e81567: /* e81567: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e81569: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* e8156c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e8156e: /* e8156e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81571: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e81572: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81574: jl 0xe81552 */
  if ((sf != of)) goto L_e81552;
L_e81576: /* e81576: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8157a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8157b: mov eax, esi */
  eax = esi;
/* e8157d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8157e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8157f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e81586: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e81589: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81590(void) {
  LOAD_REGS();
L_e81590: /* e81590: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81592: push 0xeac9c9 */
  { uint32_t v = 0xeac9c9u; esp -= 4; W32(esp, v); }
/* e81597: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8159d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8159e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e815a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e815a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e815a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e815a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e815a9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e815ad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e815b0: mov esi, ecx */
  esi = ecx;
/* e815b2: xor ebx, ebx */
  ebx = 0;
/* e815b4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e815b6: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e815ba: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* e815bc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e815bf: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e815c2: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe815c8u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e815c8: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* e815cb: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e815ce: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* e815d2: jle 0xe81612 */
  if ((zf || sf != of)) goto L_e81612;
L_e815d4: /* e815d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e815d5: xor ebp, ebp */
  ebp = 0;
L_e815d7: /* e815d7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e815d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e815db: mov ecx, esi */
  ecx = esi;
/* e815dd: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe815e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e815e3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e815e5: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e815e8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* e815ea: je 0xe81606 */
  if (zf) goto L_e81606;
L_e815ec: /* e815ec: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e815ee: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e815f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e815f2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e815f4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e815f7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* e815fa: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e815fd: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e81600: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* e81603: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_e81606: /* e81606: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81609: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e8160a: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e8160d: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8160f: jl 0xe815d7 */
  if ((sf != of)) goto L_e815d7;
L_e81611: /* e81611: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_e81612: /* e81612: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e81616: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e81617: mov eax, esi */
  eax = esi;
/* e81619: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8161a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8161b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e81622: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e81625: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81630(void) {
  LOAD_REGS();
L_e81630: /* e81630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81632: push 0xeac9c9 */
  { uint32_t v = 0xeac9c9u; esp -= 4; W32(esp, v); }
/* e81637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8163d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8163e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e81645: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e81648: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81649: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8164a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* e8164e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e81651: mov ebx, ecx */
  ebx = ecx;
/* e81653: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81654: xor esi, esi */
  esi = 0;
/* e81656: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* e8165b: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* e8165f: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e81661: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* e81664: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* e81667: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe8166du); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e8166d: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e81670: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81673: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* e81677: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* e8167b: jle 0xe816ca */
  if ((zf || sf != of)) goto L_e816ca;
L_e8167d: /* e8167d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* e81681: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_e81682: /* e81682: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* e81687: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e81689: mov ecx, ebx */
  ecx = ebx;
/* e8168b: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe81691u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e81691: imul eax, eax, 0x42c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x42cu);
  eax = (uint32_t)r;
  }
/* e81697: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* e81699: je 0xe816ab */
  if (zf) goto L_e816ab;
L_e8169b: /* e8169b: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* e8169e: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e816a2: mov ecx, 0x10b */
  ecx = 0x10bu;
/* e816a7: mov edi, eax */
  edi = eax;
/* e816a9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_e816ab: /* e816ab: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e816af: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e816b3: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e816b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e816b7: add edx, 0x42c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e816bd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e816bf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e816c3: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* e816c7: jl 0xe81682 */
  if ((sf != of)) goto L_e81682;
L_e816c9: /* e816c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_e816ca: /* e816ca: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e816ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e816cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e816d0: mov eax, ebx */
  eax = ebx;
/* e816d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e816d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e816da: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e816dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81740(void) {
  LOAD_REGS();
L_e81740: /* e81740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81742: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81743: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e81747: mov esi, ecx */
  esi = ecx;
/* e81749: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8174b: je 0xe81794 */
  if (zf) goto L_e81794;
L_e8174d: /* e8174d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81750: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e81752: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* e81759: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e8175c: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe81762u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e81762: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81765: xor ebx, ebx */
  ebx = 0;
/* e81767: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e81769: jle 0xe81794 */
  if ((zf || sf != of)) goto L_e81794;
L_e8176b: /* e8176b: jmp 0xe81770 */
  goto L_e81770;
L_e81770: /* e81770: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e81772: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e81774: mov ecx, esi */
  ecx = esi;
/* e81776: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8177cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e8177c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8177e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* e81781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e81783: je 0xe8178c */
  if (zf) goto L_e8178c;
L_e81785: /* e81785: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e81787: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* e8178a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e8178c: /* e8178c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e8178f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e81790: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81792: jl 0xe81770 */
  if ((sf != of)) goto L_e81770;
L_e81794: /* e81794: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e81795: mov eax, esi */
  eax = esi;
/* e81797: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e81799: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8176d(void) {
  LOAD_REGS();
L_e8176d: /* e8176d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e81770: /* e81770: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e81772: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e81774: mov ecx, esi */
  ecx = esi;
/* e81776: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8177cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e8177c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8177e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* e81781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e81783: je 0xe8178c */
  if (zf) goto L_e8178c;
L_e81785: /* e81785: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e81787: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* e8178a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e8178c: /* e8178c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e8178f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e81790: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81792: jl 0xe81770 */
  if ((sf != of)) goto L_e81770;
L_e81794: /* e81794: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e81795: mov eax, esi */
  eax = esi;
/* e81797: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e81799: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e817a0(void) {
  LOAD_REGS();
L_e817a0: /* e817a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e817a2: push 0xeac9c9 */
  { uint32_t v = 0xeac9c9u; esp -= 4; W32(esp, v); }
/* e817a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e817ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e817ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e817b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e817b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e817b7: mov esi, ecx */
  esi = ecx;
/* e817b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e817bd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e817c0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e817c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e817c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e817c5: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e817cd: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe817d3u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e817d3: mov ecx, esi */
  ecx = esi;
/* e817d5: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* e817dd: call dword ptr [0xeae024] */
  esp -= 4; W32(esp, 0xe817e3u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* e817e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e817e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e817e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e817ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e817f2: ret  */
  esp += 4; SPILL(); return;
}

void f_e81800(void) {
  LOAD_REGS();
L_e81800: /* e81800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81801: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e81802: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81804: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e81808: mov esi, ecx */
  esi = ecx;
/* e8180a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8180c: je 0xe8186a */
  if (zf) goto L_e8186a;
L_e8180e: /* e8180e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81811: xor ebp, ebp */
  ebp = 0;
/* e81813: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e81815: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* e81818: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e8181b: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe81821u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e81821: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81824: xor ebx, ebx */
  ebx = 0;
/* e81826: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81828: jle 0xe8186a */
  if ((zf || sf != of)) goto L_e8186a;
L_e8182a: /* e8182a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e81830: /* e81830: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e81832: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e81834: mov ecx, esi */
  ecx = esi;
/* e81836: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8183cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e8183c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8183e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e81841: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* e81843: je 0xe8185f */
  if (zf) goto L_e8185f;
L_e81845: /* e81845: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e81847: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e81849: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8184b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e8184d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e81850: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* e81853: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e81856: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e81859: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* e8185c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_e8185f: /* e8185f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e81862: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e81863: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e81866: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81868: jl 0xe81830 */
  if ((sf != of)) goto L_e81830;
L_e8186a: /* e8186a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8186b: mov eax, esi */
  eax = esi;
/* e8186d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8186e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8186f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e81870: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81880(void) {
  LOAD_REGS();
L_e81880: /* e81880: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81882: push 0xeac9c9 */
  { uint32_t v = 0xeac9c9u; esp -= 4; W32(esp, v); }
/* e81887: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8188d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8188e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e81895: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81897: mov esi, ecx */
  esi = ecx;
/* e81899: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e8189d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e818a0: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* e818a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e818a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e818a8: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e818b0: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe818b6u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e818b6: mov ecx, esi */
  ecx = esi;
/* e818b8: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* e818c0: call dword ptr [0xeae024] */
  esp -= 4; W32(esp, 0xe818c6u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* e818c6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e818ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e818cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e818d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e818d5: ret  */
  esp += 4; SPILL(); return;
}

void f_e818e0(void) {
  LOAD_REGS();
L_e818e0: /* e818e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e818e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e818e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e818e3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* e818e7: mov ebx, ecx */
  ebx = ecx;
/* e818e9: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e818eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e818ec: je 0xe8195a */
  if (zf) goto L_e8195a;
L_e818ee: /* e818ee: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e818f1: xor esi, esi */
  esi = 0;
/* e818f3: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* e818f8: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e818fb: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* e818fe: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe81904u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e81904: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e81907: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* e8190b: jle 0xe8195a */
  if ((zf || sf != of)) goto L_e8195a;
L_e8190d: /* e8190d: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e81911: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_e81912: /* e81912: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* e81917: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e81919: mov ecx, ebx */
  ecx = ebx;
/* e8191b: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe81921u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e81921: imul eax, eax, 0x42c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x42cu);
  eax = (uint32_t)r;
  }
/* e81927: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* e81929: je 0xe8193b */
  if (zf) goto L_e8193b;
L_e8192b: /* e8192b: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* e8192e: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81932: mov ecx, 0x10b */
  ecx = 0x10bu;
/* e81937: mov edi, eax */
  edi = eax;
/* e81939: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_e8193b: /* e8193b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8193f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e81943: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e81946: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e81947: add edx, 0x42c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8194d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8194f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e81953: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* e81957: jl 0xe81912 */
  if ((sf != of)) goto L_e81912;
L_e81959: /* e81959: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_e8195a: /* e8195a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8195b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8195c: mov eax, ebx */
  eax = ebx;
/* e8195e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8195f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e81960: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81970(void) {
  LOAD_REGS();
L_e81970: /* e81970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81972: push 0xeac9f1 */
  { uint32_t v = 0xeac9f1u; esp -= 4; W32(esp, v); }
/* e81977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8197d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8197e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e81985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81986: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81987: mov esi, ecx */
  esi = ecx;
/* e81989: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8198a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* e8198e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e81991: xor edi, edi */
  edi = 0;
/* e81993: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e81995: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e8199d: jle 0xe819bb */
  if ((zf || sf != of)) goto L_e819bb;
L_e8199f: /* e8199f: nop  */
L_e819a0: /* e819a0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e819a2: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e819a8: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* e819ab: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e819ad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e819af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e819b0: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe819b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e819b3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e819b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e819b7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e819b9: jl 0xe819a0 */
  if ((sf != of)) goto L_e819a0;
L_e819bb: /* e819bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e819be: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e819c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e819c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e819c3: mov ecx, esi */
  ecx = esi;
/* e819c5: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* e819cd: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe819d3u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e819d3: mov ecx, esi */
  ecx = esi;
/* e819d5: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* e819dd: call dword ptr [0xeae024] */
  esp -= 4; W32(esp, 0xe819e3u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* e819e3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e819e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e819e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e819e9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e819f0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e819f3: ret  */
  esp += 4; SPILL(); return;
}

void f_e81a00(void) {
  LOAD_REGS();
L_e81a00: /* e81a00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81a02: push 0xeaca2a */
  { uint32_t v = 0xeaca2au; esp -= 4; W32(esp, v); }
/* e81a07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e81a0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81a0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e81a15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81a16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81a17: mov esi, ecx */
  esi = ecx;
/* e81a19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e81a1d: lea ecx, [esi + 0x2b480] */
  ecx = (uint32_t)(esi + 0x2b480u);
/* e81a23: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* e81a2b: call dword ptr [0xeae240] */
  esp -= 4; W32(esp, 0xe81a31u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* e81a31: lea ecx, [esi + 0x2b470] */
  ecx = (uint32_t)(esi + 0x2b470u);
/* e81a37: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* e81a3c: call 0xe81970 */
  esp -= 4; W32(esp, 0xe81a41u); SPILL(); f_e81970(); if (g_unwind) return; RELOAD();
/* e81a41: push 0xe812d0 */
  { uint32_t v = 0xe812d0u; esp -= 4; W32(esp, v); }
/* e81a46: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* e81a4b: push 0x560 */
  { uint32_t v = 0x560u; esp -= 4; W32(esp, v); }
/* e81a50: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e81a53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81a54: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* e81a5c: call 0xeac494 */
  esp -= 4; W32(esp, 0xe81a61u); SPILL(); f_eac494(); if (g_unwind) return; RELOAD();
/* e81a61: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e81a65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81a66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e81a6d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e81a70: ret  */
  esp += 4; SPILL(); return;
}

void f_e81a80(void) {
  LOAD_REGS();
L_e81a80: /* e81a80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81a82: push 0xeaca82 */
  { uint32_t v = 0xeaca82u; esp -= 4; W32(esp, v); }
/* e81a87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e81a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81a8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e81a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81a97: mov esi, ecx */
  esi = ecx;
/* e81a99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e81a9d: mov dword ptr [esi], 0xeae390 */
  W32((uint32_t)(esi), 0xeae390u);
/* e81aa3: mov dword ptr [esi + 0x28], 0xeae388 */
  W32((uint32_t)(esi + 0x28u), 0xeae388u);
/* e81aaa: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* e81ab2: call dword ptr [0xeae098] */
  esp -= 4; W32(esp, 0xe81ab8u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* e81ab8: lea ecx, [esi + 0x2fc90] */
  ecx = (uint32_t)(esi + 0x2fc90u);
/* e81abe: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* e81ac3: call dword ptr [0xeae240] */
  esp -= 4; W32(esp, 0xe81ac9u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* e81ac9: lea ecx, [esi + 0x46f4] */
  ecx = (uint32_t)(esi + 0x46f4u);
/* e81acf: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* e81ad4: call 0xe81a00 */
  esp -= 4; W32(esp, 0xe81ad9u); SPILL(); f_e81a00(); if (g_unwind) return; RELOAD();
/* e81ad9: lea ecx, [esi + 0x467c] */
  ecx = (uint32_t)(esi + 0x467cu);
/* e81adf: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* e81ae4: call 0xe81880 */
  esp -= 4; W32(esp, 0xe81ae9u); SPILL(); f_e81880(); if (g_unwind) return; RELOAD();
/* e81ae9: lea ecx, [esi + 0x4654] */
  ecx = (uint32_t)(esi + 0x4654u);
/* e81aef: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* e81af4: call 0xe817a0 */
  esp -= 4; W32(esp, 0xe81af9u); SPILL(); f_e817a0(); if (g_unwind) return; RELOAD();
/* e81af9: mov ecx, esi */
  ecx = esi;
/* e81afb: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* e81b03: call dword ptr [0xeae244] */
  esp -= 4; W32(esp, 0xe81b09u); SPILL(); f_6c8dc3(); if (g_unwind) return; /* Engine!??1URenderDevice@@UAE@XZ */ RELOAD();
/* e81b09: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e81b0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81b0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e81b15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e81b18: ret  */
  esp += 4; SPILL(); return;
}

void f_e81b20(void) {
  LOAD_REGS();
L_e81b20: /* e81b20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81b21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* e81b25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e81b28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81b29: mov esi, ecx */
  esi = ecx;
/* e81b2b: je 0xe81b60 */
  if (zf) goto L_e81b60;
L_e81b2d: /* e81b2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* e81b30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81b31: push 0xe81a80 */
  { uint32_t v = 0xe81a80u; esp -= 4; W32(esp, v); }
/* e81b36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* e81b39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81b3a: push 0x30fd4 */
  { uint32_t v = 0x30fd4u; esp -= 4; W32(esp, v); }
/* e81b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81b40: call 0xeac494 */
  esp -= 4; W32(esp, 0xe81b45u); SPILL(); f_eac494(); if (g_unwind) return; RELOAD();
/* e81b45: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e81b48: je 0xe81b58 */
  if (zf) goto L_e81b58;
L_e81b4a: /* e81b4a: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e81b50: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e81b52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e81b54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81b55: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe81b58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e81b58: /* e81b58: mov eax, edi */
  eax = edi;
/* e81b5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e81b5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81b5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e81b5d: ret 4 */
  esp += 8; SPILL(); return;
L_e81b60: /* e81b60: mov ecx, esi */
  ecx = esi;
/* e81b62: call 0xe81a80 */
  esp -= 4; W32(esp, 0xe81b67u); SPILL(); f_e81a80(); if (g_unwind) return; RELOAD();
/* e81b67: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e81b6a: je 0xe81b7b */
  if (zf) goto L_e81b7b;
L_e81b6c: /* e81b6c: push 0x30fd4 */
  { uint32_t v = 0x30fd4u; esp -= 4; W32(esp, v); }
/* e81b71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81b72: call dword ptr [0xeae09c] */
  esp -= 4; W32(esp, 0xe81b78u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* e81b78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e81b7b: /* e81b7b: mov eax, esi */
  eax = esi;
/* e81b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81b7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e81b7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81b90(void) {
  LOAD_REGS();
L_e81b90: /* e81b90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81b92: push 0xeaca9e */
  { uint32_t v = 0xeaca9eu; esp -= 4; W32(esp, v); }
/* e81b97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e81b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81b9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e81ba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81ba6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81ba7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e81ba8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* e81bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81bad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81bae: push 0xe812d0 */
  { uint32_t v = 0xe812d0u; esp -= 4; W32(esp, v); }
/* e81bb3: mov ebx, ecx */
  ebx = ecx;
/* e81bb5: push 0xe812e0 */
  { uint32_t v = 0xe812e0u; esp -= 4; W32(esp, v); }
/* e81bba: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* e81bbf: mov dword ptr [ebx], 0xeae438 */
  W32((uint32_t)(ebx), 0xeae438u);
/* e81bc5: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e81bc8: push 0x560 */
  { uint32_t v = 0x560u; esp -= 4; W32(esp, v); }
/* e81bcd: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* e81bd0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e81bd3: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* e81bd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e81bd7: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* e81bda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81bdb: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* e81bdf: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* e81be2: call 0xeac4f4 */
  esp -= 4; W32(esp, 0xe81be7u); SPILL(); f_eac4f4(); if (g_unwind) return; RELOAD();
/* e81be7: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e81bed: mov dword ptr [ebx + 0x2b00c], ecx */
  W32((uint32_t)(ebx + 0x2b00cu), ecx);
/* e81bf3: lea esi, [ebp + 0x2b010] */
  esi = (uint32_t)(ebp + 0x2b010u);
/* e81bf9: lea edi, [ebx + 0x2b010] */
  edi = (uint32_t)(ebx + 0x2b010u);
/* e81bff: mov ecx, 0x117 */
  ecx = 0x117u;
/* e81c04: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81c06: mov edx, dword ptr [ebp + 0x2b46c] */
  edx = R32((uint32_t)(ebp + 0x2b46cu));
/* e81c0c: lea eax, [ebp + 0x2b470] */
  eax = (uint32_t)(ebp + 0x2b470u);
/* e81c12: lea ecx, [ebx + 0x2b470] */
  ecx = (uint32_t)(ebx + 0x2b470u);
/* e81c18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81c19: mov dword ptr [ebx + 0x2b46c], edx */
  W32((uint32_t)(ebx + 0x2b46cu), edx);
/* e81c1f: call 0xe81500 */
  esp -= 4; W32(esp, 0xe81c24u); SPILL(); f_e81500(); if (g_unwind) return; RELOAD();
/* e81c24: mov ecx, dword ptr [ebp + 0x2b47c] */
  ecx = R32((uint32_t)(ebp + 0x2b47cu));
/* e81c2a: lea edx, [ebp + 0x2b480] */
  edx = (uint32_t)(ebp + 0x2b480u);
/* e81c30: mov dword ptr [ebx + 0x2b47c], ecx */
  W32((uint32_t)(ebx + 0x2b47cu), ecx);
/* e81c36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e81c37: lea ecx, [ebx + 0x2b480] */
  ecx = (uint32_t)(ebx + 0x2b480u);
/* e81c3d: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e81c45: call dword ptr [0xeae258] */
  esp -= 4; W32(esp, 0xe81c4bu); SPILL(); f_6cb258(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@ABV0@@Z */ RELOAD();
/* e81c4b: mov eax, dword ptr [ebp + 0x2b48c] */
  eax = R32((uint32_t)(ebp + 0x2b48cu));
/* e81c51: mov dword ptr [ebx + 0x2b48c], eax */
  W32((uint32_t)(ebx + 0x2b48cu), eax);
/* e81c57: mov ecx, dword ptr [ebp + 0x2b490] */
  ecx = R32((uint32_t)(ebp + 0x2b490u));
/* e81c5d: mov dword ptr [ebx + 0x2b490], ecx */
  W32((uint32_t)(ebx + 0x2b490u), ecx);
/* e81c63: mov edx, dword ptr [ebp + 0x2b494] */
  edx = R32((uint32_t)(ebp + 0x2b494u));
/* e81c69: mov dword ptr [ebx + 0x2b494], edx */
  W32((uint32_t)(ebx + 0x2b494u), edx);
/* e81c6f: lea esi, [ebp + 0x2b498] */
  esi = (uint32_t)(ebp + 0x2b498u);
/* e81c75: lea edi, [ebx + 0x2b498] */
  edi = (uint32_t)(ebx + 0x2b498u);
/* e81c7b: mov ecx, 0x40 */
  ecx = 0x40u;
/* e81c80: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81c82: mov eax, dword ptr [ebp + 0x2b598] */
  eax = R32((uint32_t)(ebp + 0x2b598u));
/* e81c88: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e81c8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e81c8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81c8e: mov dword ptr [ebx + 0x2b598], eax */
  W32((uint32_t)(ebx + 0x2b598u), eax);
/* e81c94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e81c95: mov eax, ebx */
  eax = ebx;
/* e81c97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e81c98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e81c9f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e81ca2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81cb0(void) {
  LOAD_REGS();
L_e81cb0: /* e81cb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81cb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81cb2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e81cb3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* e81cb7: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e81cba: mov ebx, ecx */
  ebx = ecx;
/* e81cbc: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* e81cbf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e81cc2: mov edx, ebp */
  edx = ebp;
/* e81cc4: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e81cc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81cc7: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* e81cca: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* e81ccd: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* e81cd1: mov dword ptr [esp + 0x14], 0x80 */
  W32((uint32_t)(esp + 0x14u), 0x80u);
/* e81cd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81cda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e81ce0: /* e81ce0: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* e81ce3: mov edi, eax */
  edi = eax;
/* e81ce5: mov ecx, 0x158 */
  ecx = 0x158u;
/* e81cea: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81cec: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e81cf0: add eax, 0x560 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x560u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e81cf5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e81cf6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* e81cfa: jne 0xe81ce0 */
  if (!zf) goto L_e81ce0;
L_e81cfc: /* e81cfc: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e81d02: mov dword ptr [ebx + 0x2b00c], edx */
  W32((uint32_t)(ebx + 0x2b00cu), edx);
/* e81d08: lea esi, [ebp + 0x2b010] */
  esi = (uint32_t)(ebp + 0x2b010u);
/* e81d0e: lea edi, [ebx + 0x2b010] */
  edi = (uint32_t)(ebx + 0x2b010u);
/* e81d14: mov ecx, 0x117 */
  ecx = 0x117u;
/* e81d19: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81d1b: mov eax, dword ptr [ebp + 0x2b46c] */
  eax = R32((uint32_t)(ebp + 0x2b46cu));
/* e81d21: lea ecx, [ebp + 0x2b470] */
  ecx = (uint32_t)(ebp + 0x2b470u);
/* e81d27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81d28: lea ecx, [ebx + 0x2b470] */
  ecx = (uint32_t)(ebx + 0x2b470u);
/* e81d2e: mov dword ptr [ebx + 0x2b46c], eax */
  W32((uint32_t)(ebx + 0x2b46cu), eax);
/* e81d34: call 0xe81740 */
  esp -= 4; W32(esp, 0xe81d39u); SPILL(); f_e81740(); if (g_unwind) return; RELOAD();
/* e81d39: mov edx, dword ptr [ebp + 0x2b47c] */
  edx = R32((uint32_t)(ebp + 0x2b47cu));
/* e81d3f: lea eax, [ebp + 0x2b480] */
  eax = (uint32_t)(ebp + 0x2b480u);
/* e81d45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81d46: lea ecx, [ebx + 0x2b480] */
  ecx = (uint32_t)(ebx + 0x2b480u);
/* e81d4c: mov dword ptr [ebx + 0x2b47c], edx */
  W32((uint32_t)(ebx + 0x2b47cu), edx);
/* e81d52: call dword ptr [0xeae25c] */
  esp -= 4; W32(esp, 0xe81d58u); SPILL(); f_6c5ecf(); if (g_unwind) return; /* Engine!??4?$TArray@E@@QAEAAV0@ABV0@@Z */ RELOAD();
/* e81d58: mov ecx, dword ptr [ebp + 0x2b48c] */
  ecx = R32((uint32_t)(ebp + 0x2b48cu));
/* e81d5e: mov dword ptr [ebx + 0x2b48c], ecx */
  W32((uint32_t)(ebx + 0x2b48cu), ecx);
/* e81d64: mov edx, dword ptr [ebp + 0x2b490] */
  edx = R32((uint32_t)(ebp + 0x2b490u));
/* e81d6a: mov dword ptr [ebx + 0x2b490], edx */
  W32((uint32_t)(ebx + 0x2b490u), edx);
/* e81d70: mov eax, dword ptr [ebp + 0x2b494] */
  eax = R32((uint32_t)(ebp + 0x2b494u));
/* e81d76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e81d77: mov dword ptr [ebx + 0x2b494], eax */
  W32((uint32_t)(ebx + 0x2b494u), eax);
/* e81d7d: lea eax, [ebx + 0x2b498] */
  eax = (uint32_t)(ebx + 0x2b498u);
/* e81d83: mov ecx, 0x40 */
  ecx = 0x40u;
/* e81d88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81d89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e81d90: /* e81d90: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e81d94: mov edx, dword ptr [eax + edx] */
  edx = R32((uint32_t)(eax + edx));
/* e81d97: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e81d99: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e81d9c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e81d9d: jne 0xe81d90 */
  if (!zf) goto L_e81d90;
L_e81d9f: /* e81d9f: mov eax, dword ptr [ebp + 0x2b598] */
  eax = R32((uint32_t)(ebp + 0x2b598u));
/* e81da5: mov dword ptr [ebx + 0x2b598], eax */
  W32((uint32_t)(ebx + 0x2b598u), eax);
/* e81dab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e81dac: mov eax, ebx */
  eax = ebx;
/* e81dae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e81daf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e81db0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e81dc0(void) {
  LOAD_REGS();
L_e81dc0: /* e81dc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e81dc2: push 0xeacae3 */
  { uint32_t v = 0xeacae3u; esp -= 4; W32(esp, v); }
/* e81dc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e81dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81dce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e81dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e81dd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e81dd7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e81dd8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* e81ddc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e81ddd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e81dde: mov ebx, ecx */
  ebx = ecx;
/* e81de0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e81de1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* e81de5: call dword ptr [0xeae260] */
  esp -= 4; W32(esp, 0xe81debu); SPILL(); f_6c2806(); if (g_unwind) return; /* Engine!??0URenderDevice@@QAE@ABV0@@Z */ RELOAD();
/* e81deb: mov dword ptr [ebx], 0xeae390 */
  W32((uint32_t)(ebx), 0xeae390u);
/* e81df1: mov dword ptr [ebx + 0x28], 0xeae388 */
  W32((uint32_t)(ebx + 0x28u), 0xeae388u);
/* e81df8: mov eax, dword ptr [ebp + 0xb0] */
  eax = R32((uint32_t)(ebp + 0xb0u));
/* e81dfe: mov dword ptr [ebx + 0xb0], eax */
  W32((uint32_t)(ebx + 0xb0u), eax);
/* e81e04: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* e81e09: lea esi, [ebp + 0xb4] */
  esi = (uint32_t)(ebp + 0xb4u);
/* e81e0f: lea edi, [ebx + 0xb4] */
  edi = (uint32_t)(ebx + 0xb4u);
/* e81e15: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81e17: mov ecx, dword ptr [ebp + 0x40b4] */
  ecx = R32((uint32_t)(ebp + 0x40b4u));
/* e81e1d: mov dword ptr [ebx + 0x40b4], ecx */
  W32((uint32_t)(ebx + 0x40b4u), ecx);
/* e81e23: mov edx, dword ptr [ebp + 0x40b8] */
  edx = R32((uint32_t)(ebp + 0x40b8u));
/* e81e29: mov dword ptr [ebx + 0x40b8], edx */
  W32((uint32_t)(ebx + 0x40b8u), edx);
/* e81e2f: mov eax, dword ptr [ebp + 0x40bc] */
  eax = R32((uint32_t)(ebp + 0x40bcu));
/* e81e35: mov dword ptr [ebx + 0x40bc], eax */
  W32((uint32_t)(ebx + 0x40bcu), eax);
/* e81e3b: mov ecx, dword ptr [ebp + 0x40c0] */
  ecx = R32((uint32_t)(ebp + 0x40c0u));
/* e81e41: mov dword ptr [ebx + 0x40c0], ecx */
  W32((uint32_t)(ebx + 0x40c0u), ecx);
/* e81e47: mov edx, dword ptr [ebp + 0x40c4] */
  edx = R32((uint32_t)(ebp + 0x40c4u));
/* e81e4d: mov dword ptr [ebx + 0x40c4], edx */
  W32((uint32_t)(ebx + 0x40c4u), edx);
/* e81e53: mov eax, dword ptr [ebp + 0x40c8] */
  eax = R32((uint32_t)(ebp + 0x40c8u));
/* e81e59: mov dword ptr [ebx + 0x40c8], eax */
  W32((uint32_t)(ebx + 0x40c8u), eax);
/* e81e5f: mov ecx, dword ptr [ebp + 0x40cc] */
  ecx = R32((uint32_t)(ebp + 0x40ccu));
/* e81e65: mov dword ptr [ebx + 0x40cc], ecx */
  W32((uint32_t)(ebx + 0x40ccu), ecx);
/* e81e6b: mov edx, dword ptr [ebp + 0x40d0] */
  edx = R32((uint32_t)(ebp + 0x40d0u));
/* e81e71: mov dword ptr [ebx + 0x40d0], edx */
  W32((uint32_t)(ebx + 0x40d0u), edx);
/* e81e77: mov eax, dword ptr [ebp + 0x40d4] */
  eax = R32((uint32_t)(ebp + 0x40d4u));
/* e81e7d: mov dword ptr [ebx + 0x40d4], eax */
  W32((uint32_t)(ebx + 0x40d4u), eax);
/* e81e83: mov ecx, dword ptr [ebp + 0x40d8] */
  ecx = R32((uint32_t)(ebp + 0x40d8u));
/* e81e89: mov dword ptr [ebx + 0x40d8], ecx */
  W32((uint32_t)(ebx + 0x40d8u), ecx);
/* e81e8f: mov edx, dword ptr [ebp + 0x40dc] */
  edx = R32((uint32_t)(ebp + 0x40dcu));
/* e81e95: mov dword ptr [ebx + 0x40dc], edx */
  W32((uint32_t)(ebx + 0x40dcu), edx);
/* e81e9b: mov eax, dword ptr [ebp + 0x40e0] */
  eax = R32((uint32_t)(ebp + 0x40e0u));
/* e81ea1: mov dword ptr [ebx + 0x40e0], eax */
  W32((uint32_t)(ebx + 0x40e0u), eax);
/* e81ea7: mov ecx, dword ptr [ebp + 0x40e4] */
  ecx = R32((uint32_t)(ebp + 0x40e4u));
/* e81ead: mov dword ptr [ebx + 0x40e4], ecx */
  W32((uint32_t)(ebx + 0x40e4u), ecx);
/* e81eb3: mov edx, dword ptr [ebp + 0x40e8] */
  edx = R32((uint32_t)(ebp + 0x40e8u));
/* e81eb9: mov dword ptr [ebx + 0x40e8], edx */
  W32((uint32_t)(ebx + 0x40e8u), edx);
/* e81ebf: mov eax, dword ptr [ebp + 0x40ec] */
  eax = R32((uint32_t)(ebp + 0x40ecu));
/* e81ec5: mov dword ptr [ebx + 0x40ec], eax */
  W32((uint32_t)(ebx + 0x40ecu), eax);
/* e81ecb: mov ecx, dword ptr [ebp + 0x40f0] */
  ecx = R32((uint32_t)(ebp + 0x40f0u));
/* e81ed1: mov dword ptr [ebx + 0x40f0], ecx */
  W32((uint32_t)(ebx + 0x40f0u), ecx);
/* e81ed7: mov edx, dword ptr [ebp + 0x40f4] */
  edx = R32((uint32_t)(ebp + 0x40f4u));
/* e81edd: mov dword ptr [ebx + 0x40f4], edx */
  W32((uint32_t)(ebx + 0x40f4u), edx);
/* e81ee3: mov eax, dword ptr [ebp + 0x40f8] */
  eax = R32((uint32_t)(ebp + 0x40f8u));
/* e81ee9: mov dword ptr [ebx + 0x40f8], eax */
  W32((uint32_t)(ebx + 0x40f8u), eax);
/* e81eef: mov ecx, dword ptr [ebp + 0x40fc] */
  ecx = R32((uint32_t)(ebp + 0x40fcu));
/* e81ef5: mov dword ptr [ebx + 0x40fc], ecx */
  W32((uint32_t)(ebx + 0x40fcu), ecx);
/* e81efb: mov edx, dword ptr [ebp + 0x4100] */
  edx = R32((uint32_t)(ebp + 0x4100u));
/* e81f01: mov dword ptr [ebx + 0x4100], edx */
  W32((uint32_t)(ebx + 0x4100u), edx);
/* e81f07: mov eax, dword ptr [ebp + 0x4104] */
  eax = R32((uint32_t)(ebp + 0x4104u));
/* e81f0d: mov dword ptr [ebx + 0x4104], eax */
  W32((uint32_t)(ebx + 0x4104u), eax);
/* e81f13: mov ecx, dword ptr [ebp + 0x4108] */
  ecx = R32((uint32_t)(ebp + 0x4108u));
/* e81f19: mov dword ptr [ebx + 0x4108], ecx */
  W32((uint32_t)(ebx + 0x4108u), ecx);
/* e81f1f: mov edx, dword ptr [ebp + 0x410c] */
  edx = R32((uint32_t)(ebp + 0x410cu));
/* e81f25: mov dword ptr [ebx + 0x410c], edx */
  W32((uint32_t)(ebx + 0x410cu), edx);
/* e81f2b: mov eax, dword ptr [ebp + 0x4110] */
  eax = R32((uint32_t)(ebp + 0x4110u));
/* e81f31: mov dword ptr [ebx + 0x4110], eax */
  W32((uint32_t)(ebx + 0x4110u), eax);
/* e81f37: mov ecx, dword ptr [ebp + 0x4114] */
  ecx = R32((uint32_t)(ebp + 0x4114u));
/* e81f3d: mov dword ptr [ebx + 0x4114], ecx */
  W32((uint32_t)(ebx + 0x4114u), ecx);
/* e81f43: mov edx, dword ptr [ebp + 0x4118] */
  edx = R32((uint32_t)(ebp + 0x4118u));
/* e81f49: mov dword ptr [ebx + 0x4118], edx */
  W32((uint32_t)(ebx + 0x4118u), edx);
/* e81f4f: mov eax, dword ptr [ebp + 0x411c] */
  eax = R32((uint32_t)(ebp + 0x411cu));
/* e81f55: mov dword ptr [ebx + 0x411c], eax */
  W32((uint32_t)(ebx + 0x411cu), eax);
/* e81f5b: mov ecx, dword ptr [ebp + 0x4120] */
  ecx = R32((uint32_t)(ebp + 0x4120u));
/* e81f61: mov dword ptr [ebx + 0x4120], ecx */
  W32((uint32_t)(ebx + 0x4120u), ecx);
/* e81f67: mov edx, dword ptr [ebp + 0x4124] */
  edx = R32((uint32_t)(ebp + 0x4124u));
/* e81f6d: mov dword ptr [ebx + 0x4124], edx */
  W32((uint32_t)(ebx + 0x4124u), edx);
/* e81f73: mov eax, dword ptr [ebp + 0x4128] */
  eax = R32((uint32_t)(ebp + 0x4128u));
/* e81f79: mov dword ptr [ebx + 0x4128], eax */
  W32((uint32_t)(ebx + 0x4128u), eax);
/* e81f7f: mov ecx, dword ptr [ebp + 0x412c] */
  ecx = R32((uint32_t)(ebp + 0x412cu));
/* e81f85: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e81f8d: mov dword ptr [ebx + 0x412c], ecx */
  W32((uint32_t)(ebx + 0x412cu), ecx);
/* e81f93: mov edx, dword ptr [ebp + 0x4130] */
  edx = R32((uint32_t)(ebp + 0x4130u));
/* e81f99: mov dword ptr [ebx + 0x4130], edx */
  W32((uint32_t)(ebx + 0x4130u), edx);
/* e81f9f: mov eax, dword ptr [ebp + 0x4134] */
  eax = R32((uint32_t)(ebp + 0x4134u));
/* e81fa5: mov dword ptr [ebx + 0x4134], eax */
  W32((uint32_t)(ebx + 0x4134u), eax);
/* e81fab: mov ecx, dword ptr [ebp + 0x4138] */
  ecx = R32((uint32_t)(ebp + 0x4138u));
/* e81fb1: mov dword ptr [ebx + 0x4138], ecx */
  W32((uint32_t)(ebx + 0x4138u), ecx);
/* e81fb7: mov edx, dword ptr [ebp + 0x413c] */
  edx = R32((uint32_t)(ebp + 0x413cu));
/* e81fbd: mov dword ptr [ebx + 0x413c], edx */
  W32((uint32_t)(ebx + 0x413cu), edx);
/* e81fc3: mov eax, dword ptr [ebp + 0x4140] */
  eax = R32((uint32_t)(ebp + 0x4140u));
/* e81fc9: mov dword ptr [ebx + 0x4140], eax */
  W32((uint32_t)(ebx + 0x4140u), eax);
/* e81fcf: mov ecx, dword ptr [ebp + 0x4144] */
  ecx = R32((uint32_t)(ebp + 0x4144u));
/* e81fd5: mov dword ptr [ebx + 0x4144], ecx */
  W32((uint32_t)(ebx + 0x4144u), ecx);
/* e81fdb: mov edx, dword ptr [ebp + 0x4148] */
  edx = R32((uint32_t)(ebp + 0x4148u));
/* e81fe1: mov dword ptr [ebx + 0x4148], edx */
  W32((uint32_t)(ebx + 0x4148u), edx);
/* e81fe7: lea esi, [ebp + 0x414c] */
  esi = (uint32_t)(ebp + 0x414cu);
/* e81fed: lea edi, [ebx + 0x414c] */
  edi = (uint32_t)(ebx + 0x414cu);
/* e81ff3: mov ecx, 0x35 */
  ecx = 0x35u;
/* e81ff8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e81ffa: lea esi, [ebp + 0x4220] */
  esi = (uint32_t)(ebp + 0x4220u);
/* e82000: lea edi, [ebx + 0x4220] */
  edi = (uint32_t)(ebx + 0x4220u);
/* e82006: mov ecx, 0x10b */
  ecx = 0x10bu;
/* e8200b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8200d: mov ax, word ptr [ebp + 0x464c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x464cu))) & 0xffffu);
/* e82014: mov word ptr [ebx + 0x464c], ax */
  W16((uint32_t)(ebx + 0x464cu), (eax & 0xffffu));
/* e8201b: mov cx, word ptr [ebp + 0x464e] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x464eu))) & 0xffffu);
/* e82022: mov word ptr [ebx + 0x464e], cx */
  W16((uint32_t)(ebx + 0x464eu), (ecx & 0xffffu));
/* e82029: mov dx, word ptr [ebp + 0x4650] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x4650u))) & 0xffffu);
/* e82030: lea ecx, [ebp + 0x4654] */
  ecx = (uint32_t)(ebp + 0x4654u);
/* e82036: mov word ptr [ebx + 0x4650], dx */
  W16((uint32_t)(ebx + 0x4650u), (edx & 0xffffu));
/* e8203d: mov ax, word ptr [ebp + 0x4652] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x4652u))) & 0xffffu);
/* e82044: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e82045: lea ecx, [ebx + 0x4654] */
  ecx = (uint32_t)(ebx + 0x4654u);
/* e8204b: mov word ptr [ebx + 0x4652], ax */
  W16((uint32_t)(ebx + 0x4652u), (eax & 0xffffu));
/* e82052: call 0xe81590 */
  esp -= 4; W32(esp, 0xe82057u); SPILL(); f_e81590(); if (g_unwind) return; RELOAD();
/* e82057: mov edx, dword ptr [ebp + 0x4660] */
  edx = R32((uint32_t)(ebp + 0x4660u));
/* e8205d: mov dword ptr [ebx + 0x4660], edx */
  W32((uint32_t)(ebx + 0x4660u), edx);
/* e82063: mov eax, dword ptr [ebp + 0x4664] */
  eax = R32((uint32_t)(ebp + 0x4664u));
/* e82069: mov dword ptr [ebx + 0x4664], eax */
  W32((uint32_t)(ebx + 0x4664u), eax);
/* e8206f: mov ecx, dword ptr [ebp + 0x4668] */
  ecx = R32((uint32_t)(ebp + 0x4668u));
/* e82075: mov dword ptr [ebx + 0x4668], ecx */
  W32((uint32_t)(ebx + 0x4668u), ecx);
/* e8207b: mov edx, dword ptr [ebp + 0x466c] */
  edx = R32((uint32_t)(ebp + 0x466cu));
/* e82081: mov dword ptr [ebx + 0x466c], edx */
  W32((uint32_t)(ebx + 0x466cu), edx);
/* e82087: mov eax, dword ptr [ebp + 0x4670] */
  eax = R32((uint32_t)(ebp + 0x4670u));
/* e8208d: mov dword ptr [ebx + 0x4670], eax */
  W32((uint32_t)(ebx + 0x4670u), eax);
/* e82093: mov ecx, dword ptr [ebp + 0x4674] */
  ecx = R32((uint32_t)(ebp + 0x4674u));
/* e82099: mov dword ptr [ebx + 0x4674], ecx */
  W32((uint32_t)(ebx + 0x4674u), ecx);
/* e8209f: mov edx, dword ptr [ebp + 0x4678] */
  edx = R32((uint32_t)(ebp + 0x4678u));
/* e820a5: lea eax, [ebp + 0x467c] */
  eax = (uint32_t)(ebp + 0x467cu);
/* e820ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e820ac: lea ecx, [ebx + 0x467c] */
  ecx = (uint32_t)(ebx + 0x467cu);
/* e820b2: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* e820b7: mov dword ptr [ebx + 0x4678], edx */
  W32((uint32_t)(ebx + 0x4678u), edx);
/* e820bd: call 0xe81630 */
  esp -= 4; W32(esp, 0xe820c2u); SPILL(); f_e81630(); if (g_unwind) return; RELOAD();
/* e820c2: mov ecx, dword ptr [ebp + 0x4688] */
  ecx = R32((uint32_t)(ebp + 0x4688u));
/* e820c8: mov dword ptr [ebx + 0x4688], ecx */
  W32((uint32_t)(ebx + 0x4688u), ecx);
/* e820ce: mov edx, dword ptr [ebp + 0x468c] */
  edx = R32((uint32_t)(ebp + 0x468cu));
/* e820d4: mov dword ptr [ebx + 0x468c], edx */
  W32((uint32_t)(ebx + 0x468cu), edx);
/* e820da: mov eax, dword ptr [ebp + 0x4690] */
  eax = R32((uint32_t)(ebp + 0x4690u));
/* e820e0: mov dword ptr [ebx + 0x4690], eax */
  W32((uint32_t)(ebx + 0x4690u), eax);
/* e820e6: mov ecx, dword ptr [ebp + 0x4694] */
  ecx = R32((uint32_t)(ebp + 0x4694u));
/* e820ec: mov dword ptr [ebx + 0x4694], ecx */
  W32((uint32_t)(ebx + 0x4694u), ecx);
/* e820f2: mov edx, dword ptr [ebp + 0x4698] */
  edx = R32((uint32_t)(ebp + 0x4698u));
/* e820f8: mov dword ptr [ebx + 0x4698], edx */
  W32((uint32_t)(ebx + 0x4698u), edx);
/* e820fe: mov eax, dword ptr [ebp + 0x469c] */
  eax = R32((uint32_t)(ebp + 0x469cu));
/* e82104: mov dword ptr [ebx + 0x469c], eax */
  W32((uint32_t)(ebx + 0x469cu), eax);
/* e8210a: mov ecx, dword ptr [ebp + 0x46a0] */
  ecx = R32((uint32_t)(ebp + 0x46a0u));
/* e82110: mov dword ptr [ebx + 0x46a0], ecx */
  W32((uint32_t)(ebx + 0x46a0u), ecx);
/* e82116: mov edx, dword ptr [ebp + 0x46a4] */
  edx = R32((uint32_t)(ebp + 0x46a4u));
/* e8211c: mov dword ptr [ebx + 0x46a4], edx */
  W32((uint32_t)(ebx + 0x46a4u), edx);
/* e82122: mov eax, dword ptr [ebp + 0x46a8] */
  eax = R32((uint32_t)(ebp + 0x46a8u));
/* e82128: mov dword ptr [ebx + 0x46a8], eax */
  W32((uint32_t)(ebx + 0x46a8u), eax);
/* e8212e: mov ecx, dword ptr [ebp + 0x46ac] */
  ecx = R32((uint32_t)(ebp + 0x46acu));
/* e82134: mov dword ptr [ebx + 0x46ac], ecx */
  W32((uint32_t)(ebx + 0x46acu), ecx);
/* e8213a: mov edx, dword ptr [ebp + 0x46b0] */
  edx = R32((uint32_t)(ebp + 0x46b0u));
/* e82140: mov dword ptr [ebx + 0x46b0], edx */
  W32((uint32_t)(ebx + 0x46b0u), edx);
/* e82146: mov eax, dword ptr [ebp + 0x46b4] */
  eax = R32((uint32_t)(ebp + 0x46b4u));
/* e8214c: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* e82151: mov dword ptr [ebx + 0x46b4], eax */
  W32((uint32_t)(ebx + 0x46b4u), eax);
/* e82157: lea esi, [ebp + 0x46b8] */
  esi = (uint32_t)(ebp + 0x46b8u);
/* e8215d: lea edi, [ebx + 0x46b8] */
  edi = (uint32_t)(ebx + 0x46b8u);
/* e82163: mov ecx, 0xd */
  ecx = 0xdu;
/* e82168: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8216a: mov ecx, dword ptr [ebp + 0x46ec] */
  ecx = R32((uint32_t)(ebp + 0x46ecu));
/* e82170: mov dword ptr [ebx + 0x46ec], ecx */
  W32((uint32_t)(ebx + 0x46ecu), ecx);
/* e82176: mov edx, dword ptr [ebp + 0x46f0] */
  edx = R32((uint32_t)(ebp + 0x46f0u));
/* e8217c: lea eax, [ebp + 0x46f4] */
  eax = (uint32_t)(ebp + 0x46f4u);
/* e82182: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e82183: lea ecx, [ebx + 0x46f4] */
  ecx = (uint32_t)(ebx + 0x46f4u);
/* e82189: mov dword ptr [ebx + 0x46f0], edx */
  W32((uint32_t)(ebx + 0x46f0u), edx);
/* e8218f: call 0xe81b90 */
  esp -= 4; W32(esp, 0xe82194u); SPILL(); f_e81b90(); if (g_unwind) return; RELOAD();
/* e82194: lea ecx, [ebp + 0x2fc90] */
  ecx = (uint32_t)(ebp + 0x2fc90u);
/* e8219a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8219b: lea ecx, [ebx + 0x2fc90] */
  ecx = (uint32_t)(ebx + 0x2fc90u);
/* e821a1: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* e821a6: call dword ptr [0xeae258] */
  esp -= 4; W32(esp, 0xe821acu); SPILL(); f_6cb258(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@ABV0@@Z */ RELOAD();
/* e821ac: lea esi, [ebp + 0x2fc9c] */
  esi = (uint32_t)(ebp + 0x2fc9cu);
/* e821b2: lea edi, [ebx + 0x2fc9c] */
  edi = (uint32_t)(ebx + 0x2fc9cu);
/* e821b8: mov ecx, 0x493 */
  ecx = 0x493u;
/* e821bd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e821bf: lea esi, [ebp + 0x30ee8] */
  esi = (uint32_t)(ebp + 0x30ee8u);
/* e821c5: lea edi, [ebx + 0x30ee8] */
  edi = (uint32_t)(ebx + 0x30ee8u);
/* e821cb: mov ecx, 0x3b */
  ecx = 0x3bu;
/* e821d0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e821d2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e821d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e821d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e821d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e821d9: mov eax, ebx */
  eax = ebx;
/* e821db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e821dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e821e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e821e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e821f0(void) {
  LOAD_REGS();
L_e821f0: /* e821f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e821f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e821f2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* e821f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e821f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e821f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e821f9: mov ebx, ecx */
  ebx = ecx;
/* e821fb: call dword ptr [0xeae264] */
  esp -= 4; W32(esp, 0xe82201u); SPILL(); f_6c90ac(); if (g_unwind) return; /* Engine!??4URenderDevice@@QAEAAV0@ABV0@@Z */ RELOAD();
/* e82201: mov eax, dword ptr [ebp + 0xb0] */
  eax = R32((uint32_t)(ebp + 0xb0u));
/* e82207: mov ecx, ebp */
  ecx = ebp;
/* e82209: mov dword ptr [ebx + 0xb0], eax */
  W32((uint32_t)(ebx + 0xb0u), eax);
/* e8220f: lea eax, [ebx + 0xb4] */
  eax = (uint32_t)(ebx + 0xb4u);
/* e82215: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e82217: mov edx, 0x1000 */
  edx = 0x1000u;
/* e8221c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e82220: /* e82220: mov esi, dword ptr [ecx + eax] */
  esi = R32((uint32_t)(ecx + eax));
/* e82223: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* e82225: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e82228: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* e82229: jne 0xe82220 */
  if (!zf) goto L_e82220;
L_e8222b: /* e8222b: mov ecx, dword ptr [ebp + 0x40b4] */
  ecx = R32((uint32_t)(ebp + 0x40b4u));
/* e82231: mov dword ptr [ebx + 0x40b4], ecx */
  W32((uint32_t)(ebx + 0x40b4u), ecx);
/* e82237: mov edx, dword ptr [ebp + 0x40b8] */
  edx = R32((uint32_t)(ebp + 0x40b8u));
/* e8223d: mov dword ptr [ebx + 0x40b8], edx */
  W32((uint32_t)(ebx + 0x40b8u), edx);
/* e82243: mov eax, dword ptr [ebp + 0x40bc] */
  eax = R32((uint32_t)(ebp + 0x40bcu));
/* e82249: mov dword ptr [ebx + 0x40bc], eax */
  W32((uint32_t)(ebx + 0x40bcu), eax);
/* e8224f: mov ecx, dword ptr [ebp + 0x40c0] */
  ecx = R32((uint32_t)(ebp + 0x40c0u));
/* e82255: mov dword ptr [ebx + 0x40c0], ecx */
  W32((uint32_t)(ebx + 0x40c0u), ecx);
/* e8225b: mov edx, dword ptr [ebp + 0x40c4] */
  edx = R32((uint32_t)(ebp + 0x40c4u));
/* e82261: mov dword ptr [ebx + 0x40c4], edx */
  W32((uint32_t)(ebx + 0x40c4u), edx);
/* e82267: mov eax, dword ptr [ebp + 0x40c8] */
  eax = R32((uint32_t)(ebp + 0x40c8u));
/* e8226d: mov dword ptr [ebx + 0x40c8], eax */
  W32((uint32_t)(ebx + 0x40c8u), eax);
/* e82273: mov ecx, dword ptr [ebp + 0x40cc] */
  ecx = R32((uint32_t)(ebp + 0x40ccu));
/* e82279: mov dword ptr [ebx + 0x40cc], ecx */
  W32((uint32_t)(ebx + 0x40ccu), ecx);
/* e8227f: mov edx, dword ptr [ebp + 0x40d0] */
  edx = R32((uint32_t)(ebp + 0x40d0u));
/* e82285: mov dword ptr [ebx + 0x40d0], edx */
  W32((uint32_t)(ebx + 0x40d0u), edx);
/* e8228b: mov eax, dword ptr [ebp + 0x40d4] */
  eax = R32((uint32_t)(ebp + 0x40d4u));
/* e82291: mov dword ptr [ebx + 0x40d4], eax */
  W32((uint32_t)(ebx + 0x40d4u), eax);
/* e82297: mov ecx, dword ptr [ebp + 0x40d8] */
  ecx = R32((uint32_t)(ebp + 0x40d8u));
/* e8229d: mov dword ptr [ebx + 0x40d8], ecx */
  W32((uint32_t)(ebx + 0x40d8u), ecx);
/* e822a3: mov edx, dword ptr [ebp + 0x40dc] */
  edx = R32((uint32_t)(ebp + 0x40dcu));
/* e822a9: mov dword ptr [ebx + 0x40dc], edx */
  W32((uint32_t)(ebx + 0x40dcu), edx);
/* e822af: mov eax, dword ptr [ebp + 0x40e0] */
  eax = R32((uint32_t)(ebp + 0x40e0u));
/* e822b5: mov dword ptr [ebx + 0x40e0], eax */
  W32((uint32_t)(ebx + 0x40e0u), eax);
/* e822bb: mov ecx, dword ptr [ebp + 0x40e4] */
  ecx = R32((uint32_t)(ebp + 0x40e4u));
/* e822c1: mov dword ptr [ebx + 0x40e4], ecx */
  W32((uint32_t)(ebx + 0x40e4u), ecx);
/* e822c7: mov edx, dword ptr [ebp + 0x40e8] */
  edx = R32((uint32_t)(ebp + 0x40e8u));
/* e822cd: mov dword ptr [ebx + 0x40e8], edx */
  W32((uint32_t)(ebx + 0x40e8u), edx);
/* e822d3: mov eax, dword ptr [ebp + 0x40ec] */
  eax = R32((uint32_t)(ebp + 0x40ecu));
/* e822d9: mov dword ptr [ebx + 0x40ec], eax */
  W32((uint32_t)(ebx + 0x40ecu), eax);
/* e822df: mov ecx, dword ptr [ebp + 0x40f0] */
  ecx = R32((uint32_t)(ebp + 0x40f0u));
/* e822e5: mov dword ptr [ebx + 0x40f0], ecx */
  W32((uint32_t)(ebx + 0x40f0u), ecx);
/* e822eb: mov edx, dword ptr [ebp + 0x40f4] */
  edx = R32((uint32_t)(ebp + 0x40f4u));
/* e822f1: mov dword ptr [ebx + 0x40f4], edx */
  W32((uint32_t)(ebx + 0x40f4u), edx);
/* e822f7: mov eax, dword ptr [ebp + 0x40f8] */
  eax = R32((uint32_t)(ebp + 0x40f8u));
/* e822fd: mov dword ptr [ebx + 0x40f8], eax */
  W32((uint32_t)(ebx + 0x40f8u), eax);
/* e82303: mov ecx, dword ptr [ebp + 0x40fc] */
  ecx = R32((uint32_t)(ebp + 0x40fcu));
/* e82309: mov dword ptr [ebx + 0x40fc], ecx */
  W32((uint32_t)(ebx + 0x40fcu), ecx);
/* e8230f: mov edx, dword ptr [ebp + 0x4100] */
  edx = R32((uint32_t)(ebp + 0x4100u));
/* e82315: mov dword ptr [ebx + 0x4100], edx */
  W32((uint32_t)(ebx + 0x4100u), edx);
/* e8231b: mov eax, dword ptr [ebp + 0x4104] */
  eax = R32((uint32_t)(ebp + 0x4104u));
/* e82321: mov dword ptr [ebx + 0x4104], eax */
  W32((uint32_t)(ebx + 0x4104u), eax);
/* e82327: mov ecx, dword ptr [ebp + 0x4108] */
  ecx = R32((uint32_t)(ebp + 0x4108u));
/* e8232d: mov dword ptr [ebx + 0x4108], ecx */
  W32((uint32_t)(ebx + 0x4108u), ecx);
/* e82333: mov edx, dword ptr [ebp + 0x410c] */
  edx = R32((uint32_t)(ebp + 0x410cu));
/* e82339: mov dword ptr [ebx + 0x410c], edx */
  W32((uint32_t)(ebx + 0x410cu), edx);
/* e8233f: mov eax, dword ptr [ebp + 0x4110] */
  eax = R32((uint32_t)(ebp + 0x4110u));
/* e82345: mov dword ptr [ebx + 0x4110], eax */
  W32((uint32_t)(ebx + 0x4110u), eax);
/* e8234b: mov ecx, dword ptr [ebp + 0x4114] */
  ecx = R32((uint32_t)(ebp + 0x4114u));
/* e82351: mov dword ptr [ebx + 0x4114], ecx */
  W32((uint32_t)(ebx + 0x4114u), ecx);
/* e82357: mov edx, dword ptr [ebp + 0x4118] */
  edx = R32((uint32_t)(ebp + 0x4118u));
/* e8235d: mov dword ptr [ebx + 0x4118], edx */
  W32((uint32_t)(ebx + 0x4118u), edx);
/* e82363: mov eax, dword ptr [ebp + 0x411c] */
  eax = R32((uint32_t)(ebp + 0x411cu));
/* e82369: mov dword ptr [ebx + 0x411c], eax */
  W32((uint32_t)(ebx + 0x411cu), eax);
/* e8236f: mov ecx, dword ptr [ebp + 0x4120] */
  ecx = R32((uint32_t)(ebp + 0x4120u));
/* e82375: mov dword ptr [ebx + 0x4120], ecx */
  W32((uint32_t)(ebx + 0x4120u), ecx);
/* e8237b: mov edx, dword ptr [ebp + 0x4124] */
  edx = R32((uint32_t)(ebp + 0x4124u));
/* e82381: mov dword ptr [ebx + 0x4124], edx */
  W32((uint32_t)(ebx + 0x4124u), edx);
/* e82387: mov eax, dword ptr [ebp + 0x4128] */
  eax = R32((uint32_t)(ebp + 0x4128u));
/* e8238d: mov dword ptr [ebx + 0x4128], eax */
  W32((uint32_t)(ebx + 0x4128u), eax);
/* e82393: mov ecx, dword ptr [ebp + 0x412c] */
  ecx = R32((uint32_t)(ebp + 0x412cu));
/* e82399: mov dword ptr [ebx + 0x412c], ecx */
  W32((uint32_t)(ebx + 0x412cu), ecx);
/* e8239f: mov edx, dword ptr [ebp + 0x4130] */
  edx = R32((uint32_t)(ebp + 0x4130u));
/* e823a5: mov dword ptr [ebx + 0x4130], edx */
  W32((uint32_t)(ebx + 0x4130u), edx);
/* e823ab: mov eax, dword ptr [ebp + 0x4134] */
  eax = R32((uint32_t)(ebp + 0x4134u));
/* e823b1: mov dword ptr [ebx + 0x4134], eax */
  W32((uint32_t)(ebx + 0x4134u), eax);
/* e823b7: mov ecx, dword ptr [ebp + 0x4138] */
  ecx = R32((uint32_t)(ebp + 0x4138u));
/* e823bd: mov dword ptr [ebx + 0x4138], ecx */
  W32((uint32_t)(ebx + 0x4138u), ecx);
/* e823c3: mov edx, dword ptr [ebp + 0x413c] */
  edx = R32((uint32_t)(ebp + 0x413cu));
/* e823c9: mov dword ptr [ebx + 0x413c], edx */
  W32((uint32_t)(ebx + 0x413cu), edx);
/* e823cf: mov eax, dword ptr [ebp + 0x4140] */
  eax = R32((uint32_t)(ebp + 0x4140u));
/* e823d5: mov dword ptr [ebx + 0x4140], eax */
  W32((uint32_t)(ebx + 0x4140u), eax);
/* e823db: mov ecx, dword ptr [ebp + 0x4144] */
  ecx = R32((uint32_t)(ebp + 0x4144u));
/* e823e1: mov dword ptr [ebx + 0x4144], ecx */
  W32((uint32_t)(ebx + 0x4144u), ecx);
/* e823e7: mov edx, dword ptr [ebp + 0x4148] */
  edx = R32((uint32_t)(ebp + 0x4148u));
/* e823ed: lea esi, [ebp + 0x414c] */
  esi = (uint32_t)(ebp + 0x414cu);
/* e823f3: lea edi, [ebx + 0x414c] */
  edi = (uint32_t)(ebx + 0x414cu);
/* e823f9: mov ecx, 0x35 */
  ecx = 0x35u;
/* e823fe: mov dword ptr [ebx + 0x4148], edx */
  W32((uint32_t)(ebx + 0x4148u), edx);
/* e82404: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e82406: lea esi, [ebp + 0x4220] */
  esi = (uint32_t)(ebp + 0x4220u);
/* e8240c: lea edi, [ebx + 0x4220] */
  edi = (uint32_t)(ebx + 0x4220u);
/* e82412: mov ecx, 0x10b */
  ecx = 0x10bu;
/* e82417: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e82419: mov ax, word ptr [ebp + 0x464c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x464cu))) & 0xffffu);
/* e82420: mov word ptr [ebx + 0x464c], ax */
  W16((uint32_t)(ebx + 0x464cu), (eax & 0xffffu));
/* e82427: mov cx, word ptr [ebp + 0x464e] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x464eu))) & 0xffffu);
/* e8242e: mov word ptr [ebx + 0x464e], cx */
  W16((uint32_t)(ebx + 0x464eu), (ecx & 0xffffu));
/* e82435: mov dx, word ptr [ebp + 0x4650] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x4650u))) & 0xffffu);
/* e8243c: lea ecx, [ebp + 0x4654] */
  ecx = (uint32_t)(ebp + 0x4654u);
/* e82442: mov word ptr [ebx + 0x4650], dx */
  W16((uint32_t)(ebx + 0x4650u), (edx & 0xffffu));
/* e82449: mov ax, word ptr [ebp + 0x4652] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x4652u))) & 0xffffu);
/* e82450: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e82451: lea ecx, [ebx + 0x4654] */
  ecx = (uint32_t)(ebx + 0x4654u);
/* e82457: mov word ptr [ebx + 0x4652], ax */
  W16((uint32_t)(ebx + 0x4652u), (eax & 0xffffu));
/* e8245e: call 0xe81800 */
  esp -= 4; W32(esp, 0xe82463u); SPILL(); f_e81800(); if (g_unwind) return; RELOAD();
/* e82463: mov edx, dword ptr [ebp + 0x4660] */
  edx = R32((uint32_t)(ebp + 0x4660u));
/* e82469: mov dword ptr [ebx + 0x4660], edx */
  W32((uint32_t)(ebx + 0x4660u), edx);
/* e8246f: mov eax, dword ptr [ebp + 0x4664] */
  eax = R32((uint32_t)(ebp + 0x4664u));
/* e82475: mov dword ptr [ebx + 0x4664], eax */
  W32((uint32_t)(ebx + 0x4664u), eax);
/* e8247b: mov ecx, dword ptr [ebp + 0x4668] */
  ecx = R32((uint32_t)(ebp + 0x4668u));
/* e82481: mov dword ptr [ebx + 0x4668], ecx */
  W32((uint32_t)(ebx + 0x4668u), ecx);
/* e82487: mov edx, dword ptr [ebp + 0x466c] */
  edx = R32((uint32_t)(ebp + 0x466cu));
/* e8248d: mov dword ptr [ebx + 0x466c], edx */
  W32((uint32_t)(ebx + 0x466cu), edx);
/* e82493: mov eax, dword ptr [ebp + 0x4670] */
  eax = R32((uint32_t)(ebp + 0x4670u));
/* e82499: mov dword ptr [ebx + 0x4670], eax */
  W32((uint32_t)(ebx + 0x4670u), eax);
/* e8249f: mov ecx, dword ptr [ebp + 0x4674] */
  ecx = R32((uint32_t)(ebp + 0x4674u));
/* e824a5: mov dword ptr [ebx + 0x4674], ecx */
  W32((uint32_t)(ebx + 0x4674u), ecx);
/* e824ab: mov edx, dword ptr [ebp + 0x4678] */
  edx = R32((uint32_t)(ebp + 0x4678u));
/* e824b1: lea eax, [ebp + 0x467c] */
  eax = (uint32_t)(ebp + 0x467cu);
/* e824b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e824b8: lea ecx, [ebx + 0x467c] */
  ecx = (uint32_t)(ebx + 0x467cu);
/* e824be: mov dword ptr [ebx + 0x4678], edx */
  W32((uint32_t)(ebx + 0x4678u), edx);
/* e824c4: call 0xe818e0 */
  esp -= 4; W32(esp, 0xe824c9u); SPILL(); f_e818e0(); if (g_unwind) return; RELOAD();
/* e824c9: mov ecx, dword ptr [ebp + 0x4688] */
  ecx = R32((uint32_t)(ebp + 0x4688u));
/* e824cf: mov dword ptr [ebx + 0x4688], ecx */
  W32((uint32_t)(ebx + 0x4688u), ecx);
/* e824d5: mov edx, dword ptr [ebp + 0x468c] */
  edx = R32((uint32_t)(ebp + 0x468cu));
/* e824db: mov dword ptr [ebx + 0x468c], edx */
  W32((uint32_t)(ebx + 0x468cu), edx);
/* e824e1: mov eax, dword ptr [ebp + 0x4690] */
  eax = R32((uint32_t)(ebp + 0x4690u));
/* e824e7: mov dword ptr [ebx + 0x4690], eax */
  W32((uint32_t)(ebx + 0x4690u), eax);
/* e824ed: mov ecx, dword ptr [ebp + 0x4694] */
  ecx = R32((uint32_t)(ebp + 0x4694u));
/* e824f3: mov dword ptr [ebx + 0x4694], ecx */
  W32((uint32_t)(ebx + 0x4694u), ecx);
/* e824f9: mov edx, dword ptr [ebp + 0x4698] */
  edx = R32((uint32_t)(ebp + 0x4698u));
/* e824ff: mov dword ptr [ebx + 0x4698], edx */
  W32((uint32_t)(ebx + 0x4698u), edx);
/* e82505: mov eax, dword ptr [ebp + 0x469c] */
  eax = R32((uint32_t)(ebp + 0x469cu));
/* e8250b: mov dword ptr [ebx + 0x469c], eax */
  W32((uint32_t)(ebx + 0x469cu), eax);
/* e82511: mov ecx, dword ptr [ebp + 0x46a0] */
  ecx = R32((uint32_t)(ebp + 0x46a0u));
/* e82517: mov dword ptr [ebx + 0x46a0], ecx */
  W32((uint32_t)(ebx + 0x46a0u), ecx);
/* e8251d: mov edx, dword ptr [ebp + 0x46a4] */
  edx = R32((uint32_t)(ebp + 0x46a4u));
/* e82523: mov dword ptr [ebx + 0x46a4], edx */
  W32((uint32_t)(ebx + 0x46a4u), edx);
/* e82529: mov eax, dword ptr [ebp + 0x46a8] */
  eax = R32((uint32_t)(ebp + 0x46a8u));
/* e8252f: mov dword ptr [ebx + 0x46a8], eax */
  W32((uint32_t)(ebx + 0x46a8u), eax);
/* e82535: mov ecx, dword ptr [ebp + 0x46ac] */
  ecx = R32((uint32_t)(ebp + 0x46acu));
/* e8253b: mov dword ptr [ebx + 0x46ac], ecx */
  W32((uint32_t)(ebx + 0x46acu), ecx);
/* e82541: mov edx, dword ptr [ebp + 0x46b0] */
  edx = R32((uint32_t)(ebp + 0x46b0u));
/* e82547: mov dword ptr [ebx + 0x46b0], edx */
  W32((uint32_t)(ebx + 0x46b0u), edx);
/* e8254d: mov eax, dword ptr [ebp + 0x46b4] */
  eax = R32((uint32_t)(ebp + 0x46b4u));
/* e82553: mov dword ptr [ebx + 0x46b4], eax */
  W32((uint32_t)(ebx + 0x46b4u), eax);
/* e82559: lea esi, [ebp + 0x46b8] */
  esi = (uint32_t)(ebp + 0x46b8u);
/* e8255f: lea edi, [ebx + 0x46b8] */
  edi = (uint32_t)(ebx + 0x46b8u);
/* e82565: mov ecx, 0xd */
  ecx = 0xdu;
/* e8256a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8256c: mov ecx, dword ptr [ebp + 0x46ec] */
  ecx = R32((uint32_t)(ebp + 0x46ecu));
/* e82572: mov dword ptr [ebx + 0x46ec], ecx */
  W32((uint32_t)(ebx + 0x46ecu), ecx);
/* e82578: mov edx, dword ptr [ebp + 0x46f0] */
  edx = R32((uint32_t)(ebp + 0x46f0u));
/* e8257e: lea eax, [ebp + 0x46f4] */
  eax = (uint32_t)(ebp + 0x46f4u);
/* e82584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e82585: lea ecx, [ebx + 0x46f4] */
  ecx = (uint32_t)(ebx + 0x46f4u);
/* e8258b: mov dword ptr [ebx + 0x46f0], edx */
  W32((uint32_t)(ebx + 0x46f0u), edx);
/* e82591: call 0xe81cb0 */
  esp -= 4; W32(esp, 0xe82596u); SPILL(); f_e81cb0(); if (g_unwind) return; RELOAD();
/* e82596: lea ecx, [ebp + 0x2fc90] */
  ecx = (uint32_t)(ebp + 0x2fc90u);
/* e8259c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8259d: lea ecx, [ebx + 0x2fc90] */
  ecx = (uint32_t)(ebx + 0x2fc90u);
/* e825a3: call dword ptr [0xeae25c] */
  esp -= 4; W32(esp, 0xe825a9u); SPILL(); f_6c5ecf(); if (g_unwind) return; /* Engine!??4?$TArray@E@@QAEAAV0@ABV0@@Z */ RELOAD();
/* e825a9: mov ecx, 0x493 */
  ecx = 0x493u;
/* e825ae: lea esi, [ebp + 0x2fc9c] */
  esi = (uint32_t)(ebp + 0x2fc9cu);
/* e825b4: lea edi, [ebx + 0x2fc9c] */
  edi = (uint32_t)(ebx + 0x2fc9cu);
/* e825ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e825bc: lea esi, [ebp + 0x30ee8] */
  esi = (uint32_t)(ebp + 0x30ee8u);
/* e825c2: lea edi, [ebx + 0x30ee8] */
  edi = (uint32_t)(ebx + 0x30ee8u);
/* e825c8: mov ecx, 0x3b */
  ecx = 0x3bu;
/* e825cd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e825cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e825d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e825d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e825d2: mov eax, ebx */
  eax = ebx;
/* e825d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e825d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e825e0(void) {
  LOAD_REGS();
L_e825e0: /* e825e0: mov eax, ecx */
  eax = ecx;
/* e825e2: xor edx, edx */
  edx = 0;
/* e825e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e825e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e825e6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e825e8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* e825eb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e825ee: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* e825f1: mov esi, dword ptr [0xeae0a0] */
  esi = R32((uint32_t)(0xeae0a0u));
/* e825f7: lea edi, [eax + 0x10] */
  edi = (uint32_t)(eax + 0x10u);
/* e825fa: mov ecx, 0x10 */
  ecx = 0x10u;
/* e825ff: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e82601: mov ecx, 1 */
  ecx = 0x1u;
/* e82606: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e82607: mov byte ptr [eax + 0x50], dl */
  W8((uint32_t)(eax + 0x50u), (edx & 0xffu));
/* e8260a: mov byte ptr [eax + 0x51], dl */
  W8((uint32_t)(eax + 0x51u), (edx & 0xffu));
/* e8260d: mov dword ptr [eax + 0x54], edx */
  W32((uint32_t)(eax + 0x54u), edx);
/* e82610: mov byte ptr [eax + 0x58], dl */
  W8((uint32_t)(eax + 0x58u), (edx & 0xffu));
/* e82613: mov dword ptr [eax + 0x5c], ecx */
  W32((uint32_t)(eax + 0x5cu), ecx);
/* e82616: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* e82619: mov dword ptr [eax + 0x64], edx */
  W32((uint32_t)(eax + 0x64u), edx);
/* e8261c: mov dword ptr [eax + 0x68], edx */
  W32((uint32_t)(eax + 0x68u), edx);
/* e8261f: mov byte ptr [eax + 0x6c], dl */
  W8((uint32_t)(eax + 0x6cu), (edx & 0xffu));
/* e82622: mov dword ptr [eax + 0x70], edx */
  W32((uint32_t)(eax + 0x70u), edx);
/* e82625: mov dword ptr [eax + 0x74], edx */
  W32((uint32_t)(eax + 0x74u), edx);
/* e82628: mov dword ptr [eax + 0x78], edx */
  W32((uint32_t)(eax + 0x78u), edx);
/* e8262b: mov dword ptr [eax + 0x7c], edx */
  W32((uint32_t)(eax + 0x7cu), edx);
/* e8262e: mov dword ptr [eax + 0x80], edx */
  W32((uint32_t)(eax + 0x80u), edx);
/* e82634: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e82635: ret  */
  esp += 4; SPILL(); return;
}

void f_e82640(void) {
  LOAD_REGS();
L_e82640: /* e82640: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e82643: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* e82649: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e8264c: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e82652: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e82653: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e82656: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e82657: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e8265d: lea edi, [ecx + 0x10] */
  edi = (uint32_t)(ecx + 0x10u);
/* e82660: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* e82663: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e82669: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e8266d: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* e8266f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e82671: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e82673: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e82675: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* e82679: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* e8267b: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e82681: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e82685: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e82689: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* e8268c: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* e82690: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e82692: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e82694: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* e82698: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e8269c: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* e8269f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e826a1: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e826a3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* e826a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e826a9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e826ad: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e826af: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e826b1: fadd dword ptr [edi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xcu)));
/* e826b4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* e826b8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e826ba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e826bc: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* e826bf: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e826c5: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* e826c8: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e826ce: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* e826d1: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e826d7: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e826db: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* e826de: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e826e0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e826e2: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e826e4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* e826e8: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* e826eb: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e826f1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e826f5: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e826f9: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* e826fc: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* e82700: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e82702: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e82704: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* e82708: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e8270c: fadd dword ptr [edi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x18u)));
/* e8270f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e82711: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e82713: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e82717: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e82719: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e8271d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e8271f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e82721: fadd dword ptr [edi + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x1cu)));
/* e82724: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e82728: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e8272a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e8272c: fld dword ptr [edi + 0x28] */
  { double v = F32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* e8272f: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e82735: fld dword ptr [edi + 0x24] */
  { double v = F32((uint32_t)(edi + 0x24u)); FPUSH(v); }
/* e82738: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e8273e: fld dword ptr [edi + 0x2c] */
  { double v = F32((uint32_t)(edi + 0x2cu)); FPUSH(v); }
/* e82741: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e82747: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e8274b: fmul dword ptr [edi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x20u)));
/* e8274e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e82750: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e82752: mov ecx, 0x10 */
  ecx = 0x10u;
/* e82757: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* e8275b: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e8275d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* e82761: fld dword ptr [edi + 0x20] */
  { double v = F32((uint32_t)(edi + 0x20u)); FPUSH(v); }
/* e82764: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e8276a: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e8276e: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e82772: fmul dword ptr [edi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x24u)));
/* e82775: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* e82779: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e8277b: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e8277d: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* e82781: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e82785: fadd dword ptr [edi + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x28u)));
/* e82788: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e8278a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e8278c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* e82790: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e82792: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e82796: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e82798: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e8279a: fadd dword ptr [edi + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x2cu)));
/* e8279d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* e827a1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e827a3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e827a5: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* e827a8: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e827ae: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* e827b1: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e827b7: fld dword ptr [edi + 0x3c] */
  { double v = F32((uint32_t)(edi + 0x3cu)); FPUSH(v); }
/* e827ba: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e827c0: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e827c4: fmul dword ptr [edi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x30u)));
/* e827c7: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e827c9: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e827cb: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e827cd: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* e827d1: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* e827d4: fmul dword ptr [0xeae4b8] */
  ST0 = ST0 * (F32((uint32_t)(0xeae4b8u)));
/* e827da: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e827de: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e827e2: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* e827e5: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* e827e9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e827eb: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e827ed: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* e827f1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e827f5: fadd dword ptr [edi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x38u)));
/* e827f8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e827fa: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e827fc: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* e82800: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e82802: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e82806: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e82808: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e8280a: fadd dword ptr [edi + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x3cu)));
/* e8280d: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* e82811: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e82813: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e82815: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e82817: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e82818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e82819: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8281c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e82820(void) {
  LOAD_REGS();
L_e82820: /* e82820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e82821: mov esi, ecx */
  esi = ecx;
/* e82823: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e82829: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e8282f: add eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e82832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e82833: call 0xe87ae0 */
  esp -= 4; W32(esp, 0xe82838u); SPILL(); f_e87ae0(); if (g_unwind) return; RELOAD();
/* e82838: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e8283e: mov ecx, dword ptr [eax + 0x1a0] */
  ecx = R32((uint32_t)(eax + 0x1a0u));
/* e82844: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e82846: mov edx, 1 */
  edx = 0x1u;
/* e8284b: je 0xe82866 */
  if (zf) goto L_e82866;
L_e8284d: /* e8284d: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e82853: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e82854: add eax, 0xbc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e82859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8285a: mov ecx, esi */
  ecx = esi;
/* e8285c: call 0xe87a30 */
  esp -= 4; W32(esp, 0xe82861u); SPILL(); f_e87a30(); if (g_unwind) return; RELOAD();
/* e82861: mov edx, 2 */
  edx = 0x2u;
L_e82866: /* e82866: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e8286c: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e82872: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* e82875: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e8287b: mov dword ptr [ecx + 0x54c], 1 */
  W32((uint32_t)(ecx + 0x54cu), 0x1u);
/* e82885: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e82886: ret  */
  esp += 4; SPILL(); return;
}

void f_e82890(void) {
  LOAD_REGS();
L_e82890: /* e82890: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e82895: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e82896: mov esi, ecx */
  esi = ecx;
/* e82898: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e8289a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8289b: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* e8289e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8289f: call 0xe81020 */
  esp -= 4; W32(esp, 0xe828a4u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e828a4: xor ecx, ecx */
  ecx = 0;
/* e828a6: mov eax, 3 */
  eax = 0x3u;
/* e828ab: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e828ae: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e828b1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* e828b4: mov eax, 1 */
  eax = 0x1u;
/* e828b9: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* e828bc: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* e828bf: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* e828c2: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* e828c4: mov ecx, 2 */
  ecx = 0x2u;
/* e828c9: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* e828cc: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* e828cf: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* e828d2: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e828d5: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* e828d8: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e828db: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* e828de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e828e1: mov dword ptr [esi + 0x10], 0xc47a0000 */
  W32((uint32_t)(esi + 0x10u), 0xc47a0000u);
/* e828e8: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* e828eb: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* e828ee: mov eax, esi */
  eax = esi;
/* e828f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e828f1: ret  */
  esp += 4; SPILL(); return;
}

void f_e82900(void) {
  LOAD_REGS();
L_e82900: /* e82900: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e82901: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e82902: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e82903: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e82904: mov ebp, ecx */
  ebp = ecx;
/* e82906: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e82907: lea esi, [ebp + 0x38] */
  esi = (uint32_t)(ebp + 0x38u);
/* e8290a: mov dword ptr [esp + 0x10], 8 */
  W32((uint32_t)(esp + 0x10u), 0x8u);
/* e82912: xor ebx, ebx */
  ebx = 0;
/* e82914: mov edi, 1 */
  edi = 0x1u;
/* e82919: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e82920: /* e82920: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e82925: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e82927: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e82928: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* e8292b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8292c: call 0xe81020 */
  esp -= 4; W32(esp, 0xe82931u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e82931: mov eax, 3 */
  eax = 0x3u;
/* e82936: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e82939: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e8293c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* e8293f: mov eax, 2 */
  eax = 0x2u;
/* e82944: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* e82947: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e8294a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e8294e: mov dword ptr [esi + 0x40], ebx */
  W32((uint32_t)(esi + 0x40u), ebx);
/* e82951: mov dword ptr [esi + 0x38], ebx */
  W32((uint32_t)(esi + 0x38u), ebx);
/* e82954: mov dword ptr [esi + 0x3c], ebx */
  W32((uint32_t)(esi + 0x3cu), ebx);
/* e82957: mov dword ptr [esi + 0x10], 0xc47a0000 */
  W32((uint32_t)(esi + 0x10u), 0xc47a0000u);
/* e8295e: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* e82960: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* e82963: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* e82966: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* e82969: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* e8296c: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* e8296f: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* e82972: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* e82975: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e82978: add esi, 0x84 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e8297e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8297f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e82983: jne 0xe82920 */
  if (!zf) goto L_e82920;
L_e82985: /* e82985: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* e82988: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* e8298b: mov eax, 2 */
  eax = 0x2u;
/* e82990: mov dword ptr [ebp + 0x28], edi */
  W32((uint32_t)(ebp + 0x28u), edi);
/* e82993: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e82994: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* e82997: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* e8299a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8299b: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
/* e8299e: mov dword ptr [ebp + 4], ebx */
  W32((uint32_t)(ebp + 0x4u), ebx);
/* e829a1: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* e829a4: mov byte ptr [ebp + 0xc], bl */
  W8((uint32_t)(ebp + 0xcu), (ebx & 0xffu));
/* e829a7: mov dword ptr [ebp + 0x18], ebx */
  W32((uint32_t)(ebp + 0x18u), ebx);
/* e829aa: mov dword ptr [ebp + 0x20], ebx */
  W32((uint32_t)(ebp + 0x20u), ebx);
/* e829ad: mov dword ptr [ebp + 0x34], ebx */
  W32((uint32_t)(ebp + 0x34u), ebx);
/* e829b0: mov dword ptr [ebp + 0x2c], ebx */
  W32((uint32_t)(ebp + 0x2cu), ebx);
/* e829b3: mov eax, ebp */
  eax = ebp;
/* e829b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e829b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e829b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e829b8: ret  */
  esp += 4; SPILL(); return;
}

void f_e829c0(void) {
  LOAD_REGS();
L_e829c0: /* e829c0: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e829c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e829c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e829c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e829c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e829ca: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* e829d1: mov al, byte ptr [edi + 0x60] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x60u))) & 0xffu);
/* e829d4: xor edx, edx */
  edx = 0;
/* e829d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e829d8: mov ebp, ecx */
  ebp = ecx;
/* e829da: je 0xe829e5 */
  if (zf) goto L_e829e5;
L_e829dc: /* e829dc: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* e829df: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e829e3: jmp 0xe829e9 */
  goto L_e829e9;
L_e829e5: /* e829e5: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_e829e9: /* e829e9: cmp dword ptr [edi + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e829ec: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* e829f0: je 0xe82a0f */
  if (zf) goto L_e82a0f;
L_e829f2: /* e829f2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e829f6: je 0xe82a0f */
  if (zf) goto L_e82a0f;
L_e829f8: /* e829f8: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e829fb: mov eax, dword ptr [ecx + 0x41e4] */
  eax = R32((uint32_t)(ecx + 0x41e4u));
/* e82a01: mov esi, 2 */
  esi = 0x2u;
/* e82a06: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e82a08: jne 0xe82a14 */
  if (!zf) goto L_e82a14;
L_e82a0a: /* e82a0a: mov dword ptr [edi + 0x3c], edx */
  W32((uint32_t)(edi + 0x3cu), edx);
/* e82a0d: jmp 0xe82a14 */
  goto L_e82a14;
L_e82a0f: /* e82a0f: mov esi, 2 */
  esi = 0x2u;
L_e82a14: /* e82a14: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* e82a17: mov ecx, 6 */
  ecx = 0x6u;
/* e82a1c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e82a1e: ja 0xe82bec */
  if ((!cf && !zf)) goto L_e82bec;
L_e82a24: /* e82a24: jmp dword ptr [eax*4 + 0xe8331c] */
  switch (R32((uint32_t)(eax*4 + 0xe8331cu))) {
    case 0xe82a2bu: goto L_e82a2b;
    case 0xe82a61u: goto L_e82a61;
    case 0xe82a9bu: goto L_e82a9b;
    case 0xe82abeu: goto L_e82abe;
    case 0xe82b37u: goto L_e82b37;
    case 0xe82b57u: goto L_e82b57;
    case 0xe82b80u: goto L_e82b80;
    default: guest_badjump(0xe82a24, R32((uint32_t)(eax*4 + 0xe8331cu))); return;
  }
L_e82a2b: /* e82a2b: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82a31: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82a37: mov dword ptr [ecx + 0x24], esi */
  W32((uint32_t)(ecx + 0x24u), esi);
/* e82a3a: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82a40: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82a46: mov dword ptr [ecx + 0x28], 1 */
  W32((uint32_t)(ecx + 0x28u), 0x1u);
/* e82a4d: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82a53: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82a59: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* e82a5c: jmp 0xe82bec */
  goto L_e82bec;
L_e82a61: /* e82a61: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82a67: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e82a6d: mov dword ptr [eax + 0x24], 5 */
  W32((uint32_t)(eax + 0x24u), 0x5u);
/* e82a74: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82a7a: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e82a80: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* e82a83: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82a89: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e82a8f: mov dword ptr [eax + 4], 1 */
  W32((uint32_t)(eax + 0x4u), 0x1u);
/* e82a96: jmp 0xe82bec */
  goto L_e82bec;
L_e82a9b: /* e82a9b: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82aa1: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e82aa7: mov dword ptr [eax + 0x24], esi */
  W32((uint32_t)(eax + 0x24u), esi);
/* e82aaa: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82ab0: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e82ab6: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* e82ab9: jmp 0xe82ba2 */
  goto L_e82ba2;
L_e82abe: /* e82abe: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82ac4: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e82aca: mov dword ptr [eax + 0x24], 9 */
  W32((uint32_t)(eax + 0x24u), 0x9u);
/* e82ad1: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82ad7: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e82add: mov ebx, 3 */
  ebx = 0x3u;
/* e82ae2: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* e82ae5: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82aeb: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82af1: mov eax, 1 */
  eax = 0x1u;
/* e82af6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* e82af9: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82aff: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82b05: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* e82b08: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e82b0c: mov al, 0x7f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
/* e82b0e: mov byte ptr [esp + 0x10], al */
  W8((uint32_t)(esp + 0x10u), (eax & 0xffu));
/* e82b12: mov byte ptr [esp + 0x11], al */
  W8((uint32_t)(esp + 0x11u), (eax & 0xffu));
/* e82b16: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
/* e82b1a: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82b20: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82b26: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* e82b2b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e82b2f: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* e82b32: jmp 0xe82bf1 */
  goto L_e82bf1;
L_e82b37: /* e82b37: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82b3d: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e82b43: mov dword ptr [eax + 0x24], esi */
  W32((uint32_t)(eax + 0x24u), esi);
/* e82b46: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82b4c: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e82b52: mov dword ptr [eax + 0x28], esi */
  W32((uint32_t)(eax + 0x28u), esi);
/* e82b55: jmp 0xe82ba2 */
  goto L_e82ba2;
L_e82b57: /* e82b57: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82b5d: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82b63: mov eax, 1 */
  eax = 0x1u;
/* e82b68: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* e82b6b: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82b71: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82b77: mov dword ptr [ecx + 0x28], 4 */
  W32((uint32_t)(ecx + 0x28u), 0x4u);
/* e82b7e: jmp 0xe82ba7 */
  goto L_e82ba7;
L_e82b80: /* e82b80: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82b86: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e82b8c: mov dword ptr [eax + 0x24], esi */
  W32((uint32_t)(eax + 0x24u), esi);
/* e82b8f: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82b95: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e82b9b: mov dword ptr [eax + 0x28], 4 */
  W32((uint32_t)(eax + 0x28u), 0x4u);
L_e82ba2: /* e82ba2: mov eax, 1 */
  eax = 0x1u;
L_e82ba7: /* e82ba7: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82bad: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82bb3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* e82bb6: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82bbc: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82bc2: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* e82bc5: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82bcb: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82bd1: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* e82bd6: mov byte ptr [esp + 0x12], 0 */
  W8((uint32_t)(esp + 0x12u), 0x0u);
/* e82bdb: mov byte ptr [esp + 0x11], 0 */
  W8((uint32_t)(esp + 0x11u), 0x0u);
/* e82be0: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* e82be5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e82be9: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
L_e82bec: /* e82bec: mov ebx, 3 */
  ebx = 0x3u;
L_e82bf1: /* e82bf1: mov esi, dword ptr [edi + 0x48] */
  esi = R32((uint32_t)(edi + 0x48u));
/* e82bf4: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e82bf6: je 0xe82c2a */
  if (zf) goto L_e82c2a;
L_e82bf8: /* e82bf8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e82bfb: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* e82c01: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e82c03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e82c04: mov eax, dword ptr [eax + 0x138] */
  eax = R32((uint32_t)(eax + 0x138u));
/* e82c0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e82c0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e82c0c: mov ecx, esi */
  ecx = esi;
/* e82c0e: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xe82c14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e82c14: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e82c16: mov ecx, eax */
  ecx = eax;
/* e82c18: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe82c1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e82c1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e82c1f: mov ecx, ebp */
  ecx = ebp;
/* e82c21: call 0xe909c0 */
  esp -= 4; W32(esp, 0xe82c26u); SPILL(); f_e909c0(); if (g_unwind) return; RELOAD();
/* e82c26: xor edx, edx */
  edx = 0;
/* e82c28: jmp 0xe82c2c */
  goto L_e82c2c;
L_e82c2a: /* e82c2a: xor eax, eax */
  eax = 0;
L_e82c2c: /* e82c2c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e82c2e: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82c34: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82c3a: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
/* e82c3d: je 0xe82c76 */
  if (zf) goto L_e82c76;
L_e82c3f: /* e82c3f: cmp dword ptr [eax + 0x30], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e82c42: je 0xe82c76 */
  if (zf) goto L_e82c76;
L_e82c44: /* e82c44: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* e82c47: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82c4d: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82c53: mov edx, dword ptr [edx + 0x4668] */
  edx = R32((uint32_t)(edx + 0x4668u));
/* e82c59: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
/* e82c5c: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e82c5f: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82c65: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82c6b: mov ecx, dword ptr [ecx + 0x4668] */
  ecx = R32((uint32_t)(ecx + 0x4668u));
/* e82c71: mov dword ptr [edx + 0x40], ecx */
  W32((uint32_t)(edx + 0x40u), ecx);
/* e82c74: jmp 0xe82cd8 */
  goto L_e82cd8;
L_e82c76: /* e82c76: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e82c78: je 0xe82cd8 */
  if (zf) goto L_e82cd8;
L_e82c7a: /* e82c7a: movzx ecx, byte ptr [esi + 0x39] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x39u)));
/* e82c7e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e82c80: je 0xe82c96 */
  if (zf) goto L_e82c96;
L_e82c82: /* e82c82: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e82c83: jne 0xe82ca9 */
  if (!zf) goto L_e82ca9;
L_e82c85: /* e82c85: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82c8b: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82c91: mov dword ptr [ecx + 0x3c], ebx */
  W32((uint32_t)(ecx + 0x3cu), ebx);
/* e82c94: jmp 0xe82ca9 */
  goto L_e82ca9;
L_e82c96: /* e82c96: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82c9c: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82ca2: mov dword ptr [ecx + 0x3c], 1 */
  W32((uint32_t)(ecx + 0x3cu), 0x1u);
L_e82ca9: /* e82ca9: movzx ecx, byte ptr [esi + 0x3a] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x3au)));
/* e82cad: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e82caf: je 0xe82cc5 */
  if (zf) goto L_e82cc5;
L_e82cb1: /* e82cb1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e82cb2: jne 0xe82cd8 */
  if (!zf) goto L_e82cd8;
L_e82cb4: /* e82cb4: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82cba: mov ecx, dword ptr [edx + 0x52c] */
  ecx = R32((uint32_t)(edx + 0x52cu));
/* e82cc0: mov dword ptr [ecx + 0x40], ebx */
  W32((uint32_t)(ecx + 0x40u), ebx);
/* e82cc3: jmp 0xe82cd8 */
  goto L_e82cd8;
L_e82cc5: /* e82cc5: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82ccb: mov ecx, dword ptr [edx + 0x52c] */
  ecx = R32((uint32_t)(edx + 0x52cu));
/* e82cd1: mov dword ptr [ecx + 0x40], 1 */
  W32((uint32_t)(ecx + 0x40u), 0x1u);
L_e82cd8: /* e82cd8: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* e82cdb: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82ce1: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82ce7: mov edx, dword ptr [edx + 0x4668] */
  edx = R32((uint32_t)(edx + 0x4668u));
/* e82ced: mov dword ptr [ecx + 0x44], edx */
  W32((uint32_t)(ecx + 0x44u), edx);
/* e82cf0: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* e82cf3: xor edx, edx */
  edx = 0;
/* e82cf5: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e82cf7: jne 0xe82dc6 */
  if (!zf) goto L_e82dc6;
L_e82cfd: /* e82cfd: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82d03: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82d09: mov eax, 2 */
  eax = 0x2u;
/* e82d0e: mov dword ptr [ecx + 0x58], eax */
  W32((uint32_t)(ecx + 0x58u), eax);
/* e82d11: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82d17: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82d1d: mov dword ptr [ecx + 0x64], eax */
  W32((uint32_t)(ecx + 0x64u), eax);
/* e82d20: cmp dword ptr [edi + 0x44], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x44u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e82d23: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82d29: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82d2f: je 0xe82d45 */
  if (zf) goto L_e82d45;
L_e82d31: /* e82d31: mov dword ptr [ecx + 0x5c], ebx */
  W32((uint32_t)(ecx + 0x5cu), ebx);
/* e82d34: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82d3a: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82d40: mov dword ptr [ecx + 0x68], ebx */
  W32((uint32_t)(ecx + 0x68u), ebx);
/* e82d43: jmp 0xe82d57 */
  goto L_e82d57;
L_e82d45: /* e82d45: mov dword ptr [ecx + 0x5c], edx */
  W32((uint32_t)(ecx + 0x5cu), edx);
/* e82d48: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82d4e: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82d54: mov dword ptr [ecx + 0x68], edx */
  W32((uint32_t)(ecx + 0x68u), edx);
L_e82d57: /* e82d57: cmp dword ptr [esp + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e82d5b: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82d61: jne 0xe82d82 */
  if (!zf) goto L_e82d82;
L_e82d63: /* e82d63: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e82d69: mov eax, 4 */
  eax = 0x4u;
/* e82d6e: mov dword ptr [ecx + 0x4c], eax */
  W32((uint32_t)(ecx + 0x4cu), eax);
/* e82d71: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82d77: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e82d7d: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* e82d80: jmp 0xe82d9f */
  goto L_e82d9f;
L_e82d82: /* e82d82: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e82d88: mov ecx, 0xc */
  ecx = 0xcu;
/* e82d8d: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* e82d90: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82d96: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e82d9c: mov dword ptr [eax + 0x50], ecx */
  W32((uint32_t)(eax + 0x50u), ecx);
L_e82d9f: /* e82d9f: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e82da2: mov eax, dword ptr [ecx + 0x41e4] */
  eax = R32((uint32_t)(ecx + 0x41e4u));
/* e82da8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e82dac: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e82dad: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e82daf: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e82db7: jge 0xe83001 */
  if ((sf == of)) goto L_e83001;
L_e82dbd: /* e82dbd: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* e82dc1: jmp 0xe83009 */
  goto L_e83009;
L_e82dc6: /* e82dc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e82dc8: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82dce: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e82dd4: mov ecx, 2 */
  ecx = 0x2u;
/* e82dd9: mov dword ptr [edx + 0x58], ecx */
  W32((uint32_t)(edx + 0x58u), ecx);
/* e82ddc: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82de2: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82de8: mov dword ptr [edx + 0x64], ecx */
  W32((uint32_t)(edx + 0x64u), ecx);
/* e82deb: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82df1: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82df7: mov dword ptr [edx + 0x4c], ecx */
  W32((uint32_t)(edx + 0x4cu), ecx);
/* e82dfa: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e00: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82e06: mov dword ptr [edx + 0x50], ecx */
  W32((uint32_t)(edx + 0x50u), ecx);
/* e82e09: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e0f: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82e15: mov dword ptr [edx + 0xdc], ecx */
  W32((uint32_t)(edx + 0xdcu), ecx);
/* e82e1b: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e21: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82e27: mov dword ptr [edx + 0xe0], 1 */
  W32((uint32_t)(edx + 0xe0u), 0x1u);
/* e82e31: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e37: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82e3d: mov dword ptr [edx + 0xe8], ecx */
  W32((uint32_t)(edx + 0xe8u), ecx);
/* e82e43: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e49: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e82e4f: mov dword ptr [edx + 0xec], 1 */
  W32((uint32_t)(edx + 0xecu), 0x1u);
/* e82e59: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e5f: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e82e65: mov ecx, 0xc */
  ecx = 0xcu;
/* e82e6a: mov dword ptr [edx + 0xd0], ecx */
  W32((uint32_t)(edx + 0xd0u), ecx);
/* e82e70: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e76: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82e7c: mov dword ptr [edx + 0xd4], ecx */
  W32((uint32_t)(edx + 0xd4u), ecx);
/* e82e82: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e88: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e82e8e: mov dword ptr [edx + 0x160], 0 */
  W32((uint32_t)(edx + 0x160u), 0x0u);
/* e82e98: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82e9e: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e82ea4: mov ecx, 1 */
  ecx = 0x1u;
/* e82ea9: mov dword ptr [edx + 0x164], ecx */
  W32((uint32_t)(edx + 0x164u), ecx);
/* e82eaf: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82eb5: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82ebb: mov dword ptr [edx + 0x154], 4 */
  W32((uint32_t)(edx + 0x154u), 0x4u);
/* e82ec5: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82ecb: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82ed1: mov dword ptr [edx + 0x170], ecx */
  W32((uint32_t)(edx + 0x170u), ecx);
/* e82ed7: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82edd: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82ee3: mov dword ptr [edx + 0x158], ebx */
  W32((uint32_t)(edx + 0x158u), ebx);
/* e82ee9: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82eef: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82ef5: mov dword ptr [edx + 0xbc], eax */
  W32((uint32_t)(edx + 0xbcu), eax);
/* e82efb: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82f01: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e82f07: mov dword ptr [edx + 0xf4], ecx */
  W32((uint32_t)(edx + 0xf4u), ecx);
/* e82f0d: je 0xe82f4e */
  if (zf) goto L_e82f4e;
L_e82f0f: /* e82f0f: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* e82f12: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e82f14: je 0xe82f4e */
  if (zf) goto L_e82f4e;
L_e82f16: /* e82f16: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82f1c: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e82f1f: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e82f25: mov eax, dword ptr [eax + 0x4668] */
  eax = R32((uint32_t)(eax + 0x4668u));
/* e82f2b: mov dword ptr [edx + 0xc0], eax */
  W32((uint32_t)(edx + 0xc0u), eax);
/* e82f31: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e82f34: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82f3a: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e82f40: mov ecx, dword ptr [ecx + 0x4668] */
  ecx = R32((uint32_t)(ecx + 0x4668u));
/* e82f46: mov dword ptr [eax + 0xc4], ecx */
  W32((uint32_t)(eax + 0xc4u), ecx);
/* e82f4c: jmp 0xe82fb6 */
  goto L_e82fb6;
L_e82f4e: /* e82f4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e82f50: je 0xe82fb6 */
  if (zf) goto L_e82fb6;
L_e82f52: /* e82f52: movzx eax, byte ptr [esi + 0x39] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x39u)));
/* e82f56: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e82f59: je 0xe82f72 */
  if (zf) goto L_e82f72;
L_e82f5b: /* e82f5b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e82f5c: jne 0xe82f84 */
  if (!zf) goto L_e82f84;
L_e82f5e: /* e82f5e: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82f64: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e82f6a: mov dword ptr [eax + 0xc0], ebx */
  W32((uint32_t)(eax + 0xc0u), ebx);
/* e82f70: jmp 0xe82f84 */
  goto L_e82f84;
L_e82f72: /* e82f72: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82f78: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e82f7e: mov dword ptr [eax + 0xc0], ecx */
  W32((uint32_t)(eax + 0xc0u), ecx);
L_e82f84: /* e82f84: movzx eax, byte ptr [esi + 0x3a] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3au)));
/* e82f88: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e82f8b: je 0xe82fa4 */
  if (zf) goto L_e82fa4;
L_e82f8d: /* e82f8d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e82f8e: jne 0xe82fb6 */
  if (!zf) goto L_e82fb6;
L_e82f90: /* e82f90: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82f96: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e82f9c: mov dword ptr [edx + 0xc4], ebx */
  W32((uint32_t)(edx + 0xc4u), ebx);
/* e82fa2: jmp 0xe82fb6 */
  goto L_e82fb6;
L_e82fa4: /* e82fa4: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e82faa: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e82fb0: mov dword ptr [edx + 0xc4], ecx */
  W32((uint32_t)(edx + 0xc4u), ecx);
L_e82fb6: /* e82fb6: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e82fbc: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e82fbf: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e82fc5: mov eax, dword ptr [eax + 0x4668] */
  eax = R32((uint32_t)(eax + 0x4668u));
/* e82fcb: mov dword ptr [edx + 0xc8], eax */
  W32((uint32_t)(edx + 0xc8u), eax);
/* e82fd1: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e82fd4: mov eax, dword ptr [ecx + 0x41e4] */
  eax = R32((uint32_t)(ecx + 0x41e4u));
/* e82fda: mov ecx, dword ptr [ecx + 0x41e0] */
  ecx = R32((uint32_t)(ecx + 0x41e0u));
/* e82fe0: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e82fe3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e82fe5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e82fe7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* e82feb: ja 0xe82fef */
  if ((!cf && !zf)) goto L_e82fef;
L_e82fed: /* e82fed: mov eax, ecx */
  eax = ecx;
L_e82fef: /* e82fef: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e82ff3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e82ff5: jge 0xe83001 */
  if ((sf == of)) goto L_e83001;
L_e82ff7: /* e82ff7: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e82fff: jmp 0xe83009 */
  goto L_e83009;
L_e83001: /* e83001: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e83003: jl 0xe83009 */
  if ((sf != of)) goto L_e83009;
L_e83005: /* e83005: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_e83009: /* e83009: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8300d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8300f: jle 0xe83274 */
  if ((zf || sf != of)) goto L_e83274;
L_e83015: /* e83015: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e83019: mov ebx, ecx */
  ebx = ecx;
/* e8301b: add edi, 0xb0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e83021: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e83027: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e83029: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* e8302d: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e83031: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* e83035: jmp 0xe83040 */
  goto L_e83040;
L_e83037: /* e83037: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8303b: jmp 0xe83040 */
  goto L_e83040;
L_e83040: /* e83040: mov esi, dword ptr [edi - 0x48] */
  esi = R32((uint32_t)(edi + 0xffffffb8u));
/* e83043: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83045: je 0xe83099 */
  if (zf) goto L_e83099;
L_e83047: /* e83047: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e8304a: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* e83050: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e83052: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83053: mov eax, dword ptr [eax + 0x138] */
  eax = R32((uint32_t)(eax + 0x138u));
/* e83059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8305a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8305b: mov ecx, esi */
  ecx = esi;
/* e8305d: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xe83063u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e83063: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e83065: mov ecx, eax */
  ecx = eax;
/* e83067: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe8306du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8306d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8306e: mov ecx, ebp */
  ecx = ebp;
/* e83070: call 0xe909c0 */
  esp -= 4; W32(esp, 0xe83075u); SPILL(); f_e909c0(); if (g_unwind) return; RELOAD();
/* e83075: movzx ecx, byte ptr [esi + 0x39] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x39u)));
/* e83079: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e8307c: je 0xe8309d */
  if (zf) goto L_e8309d;
L_e8307e: /* e8307e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e8307f: jne 0xe830b3 */
  if (!zf) goto L_e830b3;
L_e83081: /* e83081: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83087: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e8308d: mov dword ptr [edx + 0xc0], 3 */
  W32((uint32_t)(edx + 0xc0u), 0x3u);
/* e83097: jmp 0xe830b3 */
  goto L_e830b3;
L_e83099: /* e83099: xor eax, eax */
  eax = 0;
/* e8309b: jmp 0xe830ed */
  goto L_e830ed;
L_e8309d: /* e8309d: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e830a3: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e830a9: mov dword ptr [edx + 0xc0], 1 */
  W32((uint32_t)(edx + 0xc0u), 0x1u);
L_e830b3: /* e830b3: movzx ecx, byte ptr [esi + 0x3a] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x3au)));
/* e830b7: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e830ba: je 0xe830d7 */
  if (zf) goto L_e830d7;
L_e830bc: /* e830bc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e830bd: jne 0xe830ed */
  if (!zf) goto L_e830ed;
L_e830bf: /* e830bf: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e830c5: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e830cb: mov dword ptr [edx + 0xc4], 3 */
  W32((uint32_t)(edx + 0xc4u), 0x3u);
/* e830d5: jmp 0xe830ed */
  goto L_e830ed;
L_e830d7: /* e830d7: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e830dd: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e830e3: mov dword ptr [edx + 0xc4], 1 */
  W32((uint32_t)(edx + 0xc4u), 0x1u);
L_e830ed: /* e830ed: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e830f3: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e830f9: mov ecx, 2 */
  ecx = 0x2u;
/* e830fe: mov dword ptr [edx + ebx + 0x58], ecx */
  W32((uint32_t)(edx + ebx + 0x58u), ecx);
/* e83102: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83108: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e8310e: mov dword ptr [edx + ebx + 0x64], ecx */
  W32((uint32_t)(edx + ebx + 0x64u), ecx);
/* e83112: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83118: mov esi, dword ptr [edx + 0x52c] */
  esi = R32((uint32_t)(edx + 0x52cu));
/* e8311e: mov edx, 1 */
  edx = 0x1u;
/* e83123: mov dword ptr [esi + ebx + 0x5c], edx */
  W32((uint32_t)(esi + ebx + 0x5cu), edx);
/* e83127: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8312d: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e83133: mov dword ptr [esi + ebx + 0x68], edx */
  W32((uint32_t)(esi + ebx + 0x68u), edx);
/* e83137: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8313d: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e83143: mov dword ptr [edx + ebx + 0x50], 3 */
  W32((uint32_t)(edx + ebx + 0x50u), 0x3u);
/* e8314b: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83151: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e83157: mov dword ptr [edx + ebx + 0x38], eax */
  W32((uint32_t)(edx + ebx + 0x38u), eax);
/* e8315b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8315d: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e8315f: je 0xe83192 */
  if (zf) goto L_e83192;
L_e83161: /* e83161: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83162: je 0xe8317a */
  if (zf) goto L_e8317a;
L_e83164: /* e83164: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8316a: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e83170: mov dword ptr [ecx + ebx + 0x4c], 4 */
  W32((uint32_t)(ecx + ebx + 0x4cu), 0x4u);
/* e83178: jmp 0xe831a6 */
  goto L_e831a6;
L_e8317a: /* e8317a: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83180: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e83186: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e8318c: mov dword ptr [eax + ebx + 0x4c], ecx */
  W32((uint32_t)(eax + ebx + 0x4cu), ecx);
/* e83190: jmp 0xe831a6 */
  goto L_e831a6;
L_e83192: /* e83192: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83198: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8319e: mov dword ptr [eax + ebx + 0x4c], 0xd */
  W32((uint32_t)(eax + ebx + 0x4cu), 0xdu);
L_e831a6: /* e831a6: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e831ac: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e831af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e831b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e831b2: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* e831b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e831b7: call 0xe9c430 */
  esp -= 4; W32(esp, 0xe831bcu); SPILL(); f_e9c430(); if (g_unwind) return; RELOAD();
/* e831bc: add edi, -0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffbcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e831bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e831c0: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* e831c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e831c5: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* e831c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e831ca: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe831cfu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e831cf: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e831d5: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e831db: lea edi, [eax + ebx + 0x7c] */
  edi = (uint32_t)(eax + ebx + 0x7cu);
/* e831df: mov ecx, 0x10 */
  ecx = 0x10u;
/* e831e4: lea esi, [esp + 0x5c] */
  esi = (uint32_t)(esp + 0x5cu);
/* e831e8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e831ea: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e831f0: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e831f6: mov dword ptr [edx + ebx + 0x78], 1 */
  W32((uint32_t)(edx + ebx + 0x78u), 0x1u);
/* e831fe: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e83204: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e8320a: mov dword ptr [ecx + ebx + 0x70], 0x20000 */
  W32((uint32_t)(ecx + ebx + 0x70u), 0x20000u);
/* e83212: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83218: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8321e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e83222: mov dword ptr [eax + ebx + 0x74], 3 */
  W32((uint32_t)(eax + ebx + 0x74u), 0x3u);
/* e8322a: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* e8322d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8322f: je 0xe8324d */
  if (zf) goto L_e8324d;
L_e83231: /* e83231: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83237: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8323d: mov ecx, dword ptr [eax + ebx + 0x74] */
  ecx = R32((uint32_t)(eax + ebx + 0x74u));
/* e83241: lea eax, [eax + ebx + 0x74] */
  eax = (uint32_t)(eax + ebx + 0x74u);
/* e83245: or ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e8324b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e8324d: /* e8324d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e83251: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e83255: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e83258: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e8325e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8325f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* e83263: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e83267: jne 0xe83037 */
  if (!zf) goto L_e83037;
L_e8326d: /* e8326d: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
L_e83274: /* e83274: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8327a: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e83280: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* e83283: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* e83286: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8328c: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e83292: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* e83295: mov dword ptr [edx + 0x10], eax */
  W32((uint32_t)(edx + 0x10u), eax);
/* e83298: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8329e: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e832a4: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* e832a7: mov dword ptr [edx + 0x18], eax */
  W32((uint32_t)(edx + 0x18u), eax);
/* e832aa: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e832b0: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e832b6: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* e832b9: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* e832bc: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e832c2: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e832c8: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* e832cb: mov byte ptr [edx + 0xc], al */
  W8((uint32_t)(edx + 0xcu), (eax & 0xffu));
/* e832ce: mov esi, dword ptr [edi + 0x5c] */
  esi = R32((uint32_t)(edi + 0x5cu));
/* e832d1: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e832d7: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e832dd: xor ecx, ecx */
  ecx = 0;
/* e832df: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e832e1: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e832e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e832e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e832e6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e832e7: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e832ea: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* e832ed: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e832f3: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e832f9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e832fd: mov dword ptr [edx + 0x34], eax */
  W32((uint32_t)(edx + 0x34u), eax);
/* e83300: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83306: mov eax, 1 */
  eax = 0x1u;
/* e8330b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8330c: mov dword ptr [ecx + 0x54c], eax */
  W32((uint32_t)(ecx + 0x54cu), eax);
/* e83312: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e83313: add esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e83319: ret 0x90 */
  esp += 148; SPILL(); return;
}

void f_e8303d(void) {
  LOAD_REGS();
  goto L_e8303d;
L_e83037: /* e83037: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8303b: jmp 0xe83040 */
  goto L_e83040;
L_e8303d: /* e8303d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e83040: /* e83040: mov esi, dword ptr [edi - 0x48] */
  esi = R32((uint32_t)(edi + 0xffffffb8u));
/* e83043: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83045: je 0xe83099 */
  if (zf) goto L_e83099;
L_e83047: /* e83047: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e8304a: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* e83050: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e83052: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83053: mov eax, dword ptr [eax + 0x138] */
  eax = R32((uint32_t)(eax + 0x138u));
/* e83059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8305a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8305b: mov ecx, esi */
  ecx = esi;
/* e8305d: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xe83063u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e83063: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e83065: mov ecx, eax */
  ecx = eax;
/* e83067: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe8306du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8306d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8306e: mov ecx, ebp */
  ecx = ebp;
/* e83070: call 0xe909c0 */
  esp -= 4; W32(esp, 0xe83075u); SPILL(); f_e909c0(); if (g_unwind) return; RELOAD();
/* e83075: movzx ecx, byte ptr [esi + 0x39] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x39u)));
/* e83079: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e8307c: je 0xe8309d */
  if (zf) goto L_e8309d;
L_e8307e: /* e8307e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e8307f: jne 0xe830b3 */
  if (!zf) goto L_e830b3;
L_e83081: /* e83081: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83087: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e8308d: mov dword ptr [edx + 0xc0], 3 */
  W32((uint32_t)(edx + 0xc0u), 0x3u);
/* e83097: jmp 0xe830b3 */
  goto L_e830b3;
L_e83099: /* e83099: xor eax, eax */
  eax = 0;
/* e8309b: jmp 0xe830ed */
  goto L_e830ed;
L_e8309d: /* e8309d: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e830a3: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e830a9: mov dword ptr [edx + 0xc0], 1 */
  W32((uint32_t)(edx + 0xc0u), 0x1u);
L_e830b3: /* e830b3: movzx ecx, byte ptr [esi + 0x3a] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x3au)));
/* e830b7: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e830ba: je 0xe830d7 */
  if (zf) goto L_e830d7;
L_e830bc: /* e830bc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e830bd: jne 0xe830ed */
  if (!zf) goto L_e830ed;
L_e830bf: /* e830bf: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e830c5: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e830cb: mov dword ptr [edx + 0xc4], 3 */
  W32((uint32_t)(edx + 0xc4u), 0x3u);
/* e830d5: jmp 0xe830ed */
  goto L_e830ed;
L_e830d7: /* e830d7: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e830dd: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e830e3: mov dword ptr [edx + 0xc4], 1 */
  W32((uint32_t)(edx + 0xc4u), 0x1u);
L_e830ed: /* e830ed: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e830f3: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e830f9: mov ecx, 2 */
  ecx = 0x2u;
/* e830fe: mov dword ptr [edx + ebx + 0x58], ecx */
  W32((uint32_t)(edx + ebx + 0x58u), ecx);
/* e83102: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83108: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e8310e: mov dword ptr [edx + ebx + 0x64], ecx */
  W32((uint32_t)(edx + ebx + 0x64u), ecx);
/* e83112: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83118: mov esi, dword ptr [edx + 0x52c] */
  esi = R32((uint32_t)(edx + 0x52cu));
/* e8311e: mov edx, 1 */
  edx = 0x1u;
/* e83123: mov dword ptr [esi + ebx + 0x5c], edx */
  W32((uint32_t)(esi + ebx + 0x5cu), edx);
/* e83127: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8312d: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e83133: mov dword ptr [esi + ebx + 0x68], edx */
  W32((uint32_t)(esi + ebx + 0x68u), edx);
/* e83137: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8313d: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e83143: mov dword ptr [edx + ebx + 0x50], 3 */
  W32((uint32_t)(edx + ebx + 0x50u), 0x3u);
/* e8314b: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83151: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e83157: mov dword ptr [edx + ebx + 0x38], eax */
  W32((uint32_t)(edx + ebx + 0x38u), eax);
/* e8315b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8315d: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e8315f: je 0xe83192 */
  if (zf) goto L_e83192;
L_e83161: /* e83161: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83162: je 0xe8317a */
  if (zf) goto L_e8317a;
L_e83164: /* e83164: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8316a: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e83170: mov dword ptr [ecx + ebx + 0x4c], 4 */
  W32((uint32_t)(ecx + ebx + 0x4cu), 0x4u);
/* e83178: jmp 0xe831a6 */
  goto L_e831a6;
L_e8317a: /* e8317a: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83180: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e83186: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e8318c: mov dword ptr [eax + ebx + 0x4c], ecx */
  W32((uint32_t)(eax + ebx + 0x4cu), ecx);
/* e83190: jmp 0xe831a6 */
  goto L_e831a6;
L_e83192: /* e83192: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83198: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8319e: mov dword ptr [eax + ebx + 0x4c], 0xd */
  W32((uint32_t)(eax + ebx + 0x4cu), 0xdu);
L_e831a6: /* e831a6: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e831ac: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e831af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e831b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e831b2: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* e831b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e831b7: call 0xe9c430 */
  esp -= 4; W32(esp, 0xe831bcu); SPILL(); f_e9c430(); if (g_unwind) return; RELOAD();
/* e831bc: add edi, -0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffbcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e831bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e831c0: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* e831c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e831c5: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* e831c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e831ca: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe831cfu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e831cf: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e831d5: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e831db: lea edi, [eax + ebx + 0x7c] */
  edi = (uint32_t)(eax + ebx + 0x7cu);
/* e831df: mov ecx, 0x10 */
  ecx = 0x10u;
/* e831e4: lea esi, [esp + 0x5c] */
  esi = (uint32_t)(esp + 0x5cu);
/* e831e8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e831ea: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e831f0: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e831f6: mov dword ptr [edx + ebx + 0x78], 1 */
  W32((uint32_t)(edx + ebx + 0x78u), 0x1u);
/* e831fe: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e83204: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e8320a: mov dword ptr [ecx + ebx + 0x70], 0x20000 */
  W32((uint32_t)(ecx + ebx + 0x70u), 0x20000u);
/* e83212: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83218: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8321e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e83222: mov dword ptr [eax + ebx + 0x74], 3 */
  W32((uint32_t)(eax + ebx + 0x74u), 0x3u);
/* e8322a: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* e8322d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8322f: je 0xe8324d */
  if (zf) goto L_e8324d;
L_e83231: /* e83231: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83237: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8323d: mov ecx, dword ptr [eax + ebx + 0x74] */
  ecx = R32((uint32_t)(eax + ebx + 0x74u));
/* e83241: lea eax, [eax + ebx + 0x74] */
  eax = (uint32_t)(eax + ebx + 0x74u);
/* e83245: or ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e8324b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e8324d: /* e8324d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e83251: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e83255: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e83258: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e8325e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8325f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* e83263: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e83267: jne 0xe83037 */
  if (!zf) goto L_e83037;
L_e8326d: /* e8326d: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* e83274: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8327a: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e83280: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* e83283: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* e83286: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8328c: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e83292: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* e83295: mov dword ptr [edx + 0x10], eax */
  W32((uint32_t)(edx + 0x10u), eax);
/* e83298: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8329e: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e832a4: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* e832a7: mov dword ptr [edx + 0x18], eax */
  W32((uint32_t)(edx + 0x18u), eax);
/* e832aa: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e832b0: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e832b6: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* e832b9: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* e832bc: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e832c2: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e832c8: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* e832cb: mov byte ptr [edx + 0xc], al */
  W8((uint32_t)(edx + 0xcu), (eax & 0xffu));
/* e832ce: mov esi, dword ptr [edi + 0x5c] */
  esi = R32((uint32_t)(edi + 0x5cu));
/* e832d1: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e832d7: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e832dd: xor ecx, ecx */
  ecx = 0;
/* e832df: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e832e1: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e832e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e832e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e832e6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e832e7: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e832ea: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* e832ed: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e832f3: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e832f9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e832fd: mov dword ptr [edx + 0x34], eax */
  W32((uint32_t)(edx + 0x34u), eax);
/* e83300: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e83306: mov eax, 1 */
  eax = 0x1u;
/* e8330b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8330c: mov dword ptr [ecx + 0x54c], eax */
  W32((uint32_t)(ecx + 0x54cu), eax);
/* e83312: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e83313: add esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e83319: ret 0x90 */
  esp += 148; SPILL(); return;
}

void f_e83340(void) {
  LOAD_REGS();
L_e83340: /* e83340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e83341: mov ebp, esp */
  ebp = esp;
/* e83343: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* e83346: sub esp, 0x1f4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8334c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8334d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8334e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8334f: mov edi, ecx */
  edi = ecx;
/* e83351: mov eax, dword ptr [edi + 0x2b00c] */
  eax = R32((uint32_t)(edi + 0x2b00cu));
/* e83357: mov ebx, dword ptr [eax + 0x52c] */
  ebx = R32((uint32_t)(eax + 0x52cu));
/* e8335d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e83360: xor edx, edx */
  edx = 0;
/* e83362: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* e83366: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* e8336a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* e8336e: mov ecx, dword ptr [eax + 0x41e4] */
  ecx = R32((uint32_t)(eax + 0x41e4u));
/* e83374: mov eax, dword ptr [eax + 0x41e0] */
  eax = R32((uint32_t)(eax + 0x41e0u));
/* e8337a: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* e8337e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e83381: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* e83384: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e83386: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e8338a: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* e8338e: je 0xe833ba */
  if (zf) goto L_e833ba;
L_e83390: /* e83390: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* e83393: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e83395: mov esi, dword ptr [0xeae26c] */
  esi = R32((uint32_t)(0xeae26cu));
/* e8339b: je 0xe833ab */
  if (zf) goto L_e833ab;
L_e8339d: /* e8339d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e833a0: /* e833a0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833a2: je 0xe833b6 */
  if (zf) goto L_e833b6;
L_e833a4: /* e833a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e833a7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833a9: jne 0xe833a0 */
  if (!zf) goto L_e833a0;
L_e833ab: /* e833ab: xor eax, eax */
  eax = 0;
/* e833ad: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833af: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e833b2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833b4: je 0xe833ba */
  if (zf) goto L_e833ba;
L_e833b6: /* e833b6: mov esi, ecx */
  esi = ecx;
/* e833b8: jmp 0xe833bc */
  goto L_e833bc;
L_e833ba: /* e833ba: xor esi, esi */
  esi = 0;
L_e833bc: /* e833bc: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833be: je 0xe833f0 */
  if (zf) goto L_e833f0;
L_e833c0: /* e833c0: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* e833c3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833c5: mov edx, dword ptr [0xeae268] */
  edx = R32((uint32_t)(0xeae268u));
/* e833cb: je 0xe833df */
  if (zf) goto L_e833df;
L_e833cd: /* e833cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e833d0: /* e833d0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833d2: je 0xe83603 */
  if (zf) goto L_e83603;
L_e833d8: /* e833d8: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e833db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e833dd: jne 0xe833d0 */
  if (!zf) goto L_e833d0;
L_e833df: /* e833df: xor eax, eax */
  eax = 0;
/* e833e1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e833e3: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e833e6: xor edx, edx */
  edx = 0;
/* e833e8: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833ea: jne 0xe83605 */
  if (!zf) goto L_e83605;
L_e833f0: /* e833f0: xor eax, eax */
  eax = 0;
L_e833f2: /* e833f2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e833f4: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e833f8: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* e833fc: je 0xe83404 */
  if (zf) goto L_e83404;
L_e833fe: /* e833fe: test byte ptr [eax + 0x7c], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83402: jne 0xe8341b */
  if (!zf) goto L_e8341b;
L_e83404: /* e83404: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e83406: je 0xe8341f */
  if (zf) goto L_e8341f;
L_e83408: /* e83408: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* e8340b: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* e8340e: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* e83411: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e83414: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* e83418: mov dword ptr [ebx + 0x18], ecx */
  W32((uint32_t)(ebx + 0x18u), ecx);
L_e8341b: /* e8341b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_e8341f: /* e8341f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e83422: test byte ptr [edx + 0xc8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0xc8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83429: je 0xe83e1a */
  if (zf) goto L_e83e1a;
L_e8342f: /* e8342f: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* e83433: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe83438u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e83438: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e8343b: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* e8343e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e83440: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* e83444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83445: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83446: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e83447: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8344cu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8344c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8344f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83451: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* e83455: mov esi, 2 */
  esi = 0x2u;
/* e8345a: je 0xe837a9 */
  if (zf) goto L_e837a9;
L_e83460: /* e83460: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e83463: mov dl, byte ptr [ecx + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* e83466: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83468: je 0xe83505 */
  if (zf) goto L_e83505;
L_e8346e: /* e8346e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e83472: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83474: je 0xe83505 */
  if (zf) goto L_e83505;
L_e8347a: /* e8347a: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* e83480: mov eax, dword ptr [ebp + 0x90] */
  eax = R32((uint32_t)(ebp + 0x90u));
/* e83486: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83488: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8348a: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e83490: mov ecx, 0x21 */
  ecx = 0x21u;
/* e83495: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e83498: lea edi, [esp + 0x188] */
  edi = (uint32_t)(esp + 0x188u);
/* e8349f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e834a1: mov edi, esp */
  edi = esp;
/* e834a3: mov ecx, 0x21 */
  ecx = 0x21u;
/* e834a8: lea esi, [esp + 0x188] */
  esi = (uint32_t)(esp + 0x188u);
/* e834af: mov byte ptr [esp + 0x1d8], 1 */
  W8((uint32_t)(esp + 0x1d8u), 0x1u);
/* e834b7: mov dword ptr [esp + 0x188], 1 */
  W32((uint32_t)(esp + 0x188u), 0x1u);
/* e834c2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e834c4: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* e834cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e834cc: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* e834d3: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e834da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e834db: lea eax, [esp + 0xbc] */
  eax = (uint32_t)(esp + 0xbcu);
/* e834e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e834e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e834e4: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* e834eb: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe834f0u); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e834f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e834f2: je 0xe8379e */
  if (zf) goto L_e8379e;
L_e834f8: /* e834f8: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e834fc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e83500: mov esi, 2 */
  esi = 0x2u;
L_e83505: /* e83505: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e83509: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e8350d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8350f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83513: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e83515: jge 0xe8377a */
  if ((sf == of)) goto L_e8377a;
L_e8351b: /* e8351b: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83521: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83522: lea eax, [ecx + ebx + 0x38] */
  eax = (uint32_t)(ecx + ebx + 0x38u);
/* e83526: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83527: mov ecx, edi */
  ecx = edi;
/* e83529: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8352eu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8352e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83532: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83538: mov eax, 1 */
  eax = 0x1u;
/* e8353d: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* e83541: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* e83545: mov byte ptr [esp + 0xc1], al */
  W8((uint32_t)(esp + 0xc1u), (eax & 0xffu));
/* e8354c: mov dword ptr [esp + 0xc4], eax */
  W32((uint32_t)(esp + 0xc4u), eax);
/* e83553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e83554: lea eax, [edx + ebx + 0x38] */
  eax = (uint32_t)(edx + ebx + 0x38u);
/* e83558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83559: mov ecx, edi */
  ecx = edi;
/* e8355b: mov byte ptr [esp + 0xc8], 0 */
  W8((uint32_t)(esp + 0xc8u), 0x0u);
/* e83563: call 0xe88140 */
  esp -= 4; W32(esp, 0xe83568u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e83568: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e8356b: movzx eax, byte ptr [ecx + 0x44] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x44u)));
/* e8356f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83570: je 0xe8371e */
  if (zf) goto L_e8371e;
L_e83576: /* e83576: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83577: je 0xe836c2 */
  if (zf) goto L_e836c2;
L_e8357d: /* e8357d: movzx eax, byte ptr [ecx + 0x45] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x45u)));
/* e83581: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e83583: je 0xe83662 */
  if (zf) goto L_e83662;
L_e83589: /* e83589: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8358d: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83593: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83594: je 0xe8360c */
  if (zf) goto L_e8360c;
L_e83596: /* e83596: mov dword ptr [ecx + ebx + 0x4c], 0xc */
  W32((uint32_t)(ecx + ebx + 0x4cu), 0xcu);
/* e8359e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e835a2: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e835a8: mov dword ptr [edx + ebx + 0x58], esi */
  W32((uint32_t)(edx + ebx + 0x58u), esi);
/* e835ac: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e835b0: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e835b6: mov dword ptr [eax + ebx + 0x5c], 3 */
  W32((uint32_t)(eax + ebx + 0x5cu), 0x3u);
/* e835be: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e835c2: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e835c8: mov dword ptr [ecx + ebx + 0x50], esi */
  W32((uint32_t)(ecx + ebx + 0x50u), esi);
/* e835cc: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e835d0: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e835d6: mov dword ptr [edx + ebx + 0x64], esi */
  W32((uint32_t)(edx + ebx + 0x64u), esi);
/* e835da: mov byte ptr [esp + 0x14], 0x7f */
  W8((uint32_t)(esp + 0x14u), 0x7fu);
/* e835df: mov byte ptr [esp + 0x15], 0x7f */
  W8((uint32_t)(esp + 0x15u), 0x7fu);
/* e835e4: mov byte ptr [esp + 0x16], 0x7f */
  W8((uint32_t)(esp + 0x16u), 0x7fu);
/* e835e9: mov byte ptr [esp + 0x17], 0 */
  W8((uint32_t)(esp + 0x17u), 0x0u);
/* e835ee: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e835f2: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* e835f5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e835f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e835fa: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e835fe: jmp 0xe839f3 */
  goto L_e839f3;
L_e83603: /* e83603: xor edx, edx */
  edx = 0;
L_e83605: /* e83605: mov eax, ecx */
  eax = ecx;
/* e83607: jmp 0xe833f2 */
  goto L_e833f2;
L_e8360c: /* e8360c: mov dword ptr [ecx + ebx + 0x4c], 4 */
  W32((uint32_t)(ecx + ebx + 0x4cu), 0x4u);
/* e83614: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83618: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8361e: mov dword ptr [edx + ebx + 0x58], 0x20 */
  W32((uint32_t)(edx + ebx + 0x58u), 0x20u);
/* e83626: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8362a: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83630: mov dword ptr [eax + ebx + 0x5c], esi */
  W32((uint32_t)(eax + ebx + 0x5cu), esi);
/* e83634: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83638: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8363e: mov dword ptr [ecx + ebx + 0x50], 3 */
  W32((uint32_t)(ecx + ebx + 0x50u), 0x3u);
/* e83646: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8364a: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83650: mov dword ptr [edx + ebx + 0x68], esi */
  W32((uint32_t)(edx + ebx + 0x68u), esi);
/* e83654: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83658: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e83659: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e8365d: jmp 0xe839f3 */
  goto L_e839f3;
L_e83662: /* e83662: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83666: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8366c: mov dword ptr [eax + ebx + 0x4c], 3 */
  W32((uint32_t)(eax + ebx + 0x4cu), 0x3u);
/* e83674: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83678: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8367e: mov dword ptr [ecx + ebx + 0x5c], esi */
  W32((uint32_t)(ecx + ebx + 0x5cu), esi);
/* e83682: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83686: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8368c: mov dword ptr [edx + ebx + 0x50], 4 */
  W32((uint32_t)(edx + ebx + 0x50u), 0x4u);
/* e83694: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83698: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8369e: mov dword ptr [eax + ebx + 0x64], 0 */
  W32((uint32_t)(eax + ebx + 0x64u), 0x0u);
/* e836a6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e836aa: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e836b0: mov dword ptr [ecx + ebx + 0x68], esi */
  W32((uint32_t)(ecx + ebx + 0x68u), esi);
/* e836b4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e836b8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e836b9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e836bd: jmp 0xe839f3 */
  goto L_e839f3;
L_e836c2: /* e836c2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e836c6: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e836cc: mov dword ptr [edx + ebx + 0x4c], 0xd */
  W32((uint32_t)(edx + ebx + 0x4cu), 0xdu);
/* e836d4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e836d8: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e836de: mov dword ptr [eax + ebx + 0x58], esi */
  W32((uint32_t)(eax + ebx + 0x58u), esi);
/* e836e2: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e836e6: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e836ec: mov dword ptr [ecx + ebx + 0x5c], 1 */
  W32((uint32_t)(ecx + ebx + 0x5cu), 0x1u);
/* e836f4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e836f8: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e836fe: mov dword ptr [edx + ebx + 0x50], esi */
  W32((uint32_t)(edx + ebx + 0x50u), esi);
/* e83702: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83706: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8370c: mov dword ptr [eax + ebx + 0x64], esi */
  W32((uint32_t)(eax + ebx + 0x64u), esi);
/* e83710: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83714: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e83715: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e83719: jmp 0xe839f3 */
  goto L_e839f3;
L_e8371e: /* e8371e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83722: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83728: mov dword ptr [ecx + ebx + 0x4c], 5 */
  W32((uint32_t)(ecx + ebx + 0x4cu), 0x5u);
/* e83730: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83734: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8373a: mov dword ptr [edx + ebx + 0x58], esi */
  W32((uint32_t)(edx + ebx + 0x58u), esi);
/* e8373e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83742: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83748: mov dword ptr [eax + ebx + 0x5c], 1 */
  W32((uint32_t)(eax + ebx + 0x5cu), 0x1u);
/* e83750: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83754: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8375a: mov dword ptr [ecx + ebx + 0x50], esi */
  W32((uint32_t)(ecx + ebx + 0x50u), esi);
/* e8375e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83762: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83768: mov dword ptr [edx + ebx + 0x64], esi */
  W32((uint32_t)(edx + ebx + 0x64u), esi);
/* e8376c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83770: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e83771: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e83775: jmp 0xe839f3 */
  goto L_e839f3;
L_e8377a: /* e8377a: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e83780: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83782: je 0xe8378f */
  if (zf) goto L_e8378f;
L_e83784: /* e83784: push 0xeaefa0 */
  { uint32_t v = 0xeaefa0u; esp -= 4; W32(esp, v); }
/* e83789: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe8378fu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e8378f: /* e8378f: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e83795: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83797: je 0xe8379e */
  if (zf) goto L_e8379e;
L_e83799: /* e83799: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e8379c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e8379e: /* e8379e: xor eax, eax */
  eax = 0;
/* e837a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e837a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e837a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e837a3: mov esp, ebp */
  esp = ebp;
/* e837a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e837a6: ret 0x90 */
  esp += 148; SPILL(); return;
L_e837a9: /* e837a9: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* e837af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e837b0: mov eax, 1 */
  eax = 0x1u;
/* e837b5: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* e837b9: mov byte ptr [esp + 0xc5], al */
  W8((uint32_t)(esp + 0xc5u), (eax & 0xffu));
/* e837c0: mov dword ptr [esp + 0xc8], eax */
  W32((uint32_t)(esp + 0xc8u), eax);
/* e837c7: mov eax, dword ptr [ebp + 0x90] */
  eax = R32((uint32_t)(ebp + 0x90u));
/* e837cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e837ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e837d0: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e837d6: mov edi, esp */
  edi = esp;
/* e837d8: mov byte ptr [esp + 0x150], 0 */
  W8((uint32_t)(esp + 0x150u), 0x0u);
/* e837e0: mov ecx, 0x21 */
  ecx = 0x21u;
/* e837e5: lea esi, [esp + 0x100] */
  esi = (uint32_t)(esp + 0x100u);
/* e837ec: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e837ee: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* e837f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e837f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e837f9: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e83800: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83801: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* e83804: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* e8380b: lea eax, [esp + 0xbc] */
  eax = (uint32_t)(esp + 0xbcu);
/* e83812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83813: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83814: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe83819u); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e83819: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8381b: je 0xe8379e */
  if (zf) goto L_e8379e;
L_e8381d: /* e8381d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e83820: mov cl, byte ptr [eax + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44u))) & 0xffu);
/* e83823: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83825: je 0xe839ef */
  if (zf) goto L_e839ef;
L_e8382b: /* e8382b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8382f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83831: je 0xe839ef */
  if (zf) goto L_e839ef;
L_e83837: /* e83837: mov ecx, 0x21 */
  ecx = 0x21u;
/* e8383c: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e8383f: lea edi, [esp + 0xf8] */
  edi = (uint32_t)(esp + 0xf8u);
/* e83846: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e83848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8384a: lea ecx, [esp + 0xfc] */
  ecx = (uint32_t)(esp + 0xfcu);
/* e83851: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e83852: mov edx, eax */
  edx = eax;
/* e83854: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e83858: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8385a: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8385fu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8385f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e83862: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83864: jne 0xe83899 */
  if (!zf) goto L_e83899;
L_e83866: /* e83866: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e8386c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8386e: je 0xe8387b */
  if (zf) goto L_e8387b;
L_e83870: /* e83870: push 0xeaef28 */
  { uint32_t v = 0xeaef28u; esp -= 4; W32(esp, v); }
/* e83875: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe8387bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e8387b: /* e8387b: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e83881: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83883: je 0xe8379e */
  if (zf) goto L_e8379e;
L_e83889: /* e83889: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e8388c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e8388e: xor eax, eax */
  eax = 0;
/* e83890: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e83891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e83892: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e83893: mov esp, ebp */
  esp = ebp;
/* e83895: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e83896: ret 0x90 */
  esp += 148; SPILL(); return;
L_e83899: /* e83899: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e8389d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e838a1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e838a3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e838a7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e838a9: jge 0xe839bf */
  if ((sf == of)) goto L_e839bf;
L_e838af: /* e838af: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e838b3: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e838b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e838ba: lea eax, [ecx + ebx + 0x38] */
  eax = (uint32_t)(ecx + ebx + 0x38u);
/* e838be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e838bf: mov ecx, esi */
  ecx = esi;
/* e838c1: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe838c6u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e838c6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e838ca: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e838d0: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* e838d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e838d8: lea eax, [edx + ebx + 0x38] */
  eax = (uint32_t)(edx + ebx + 0x38u);
/* e838dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e838dd: mov ecx, esi */
  ecx = esi;
/* e838df: call 0xe88140 */
  esp -= 4; W32(esp, 0xe838e4u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e838e4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e838e8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e838eb: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e838f1: mov ecx, 1 */
  ecx = 0x1u;
/* e838f6: mov dword ptr [edx + ebx + 0x70], ecx */
  W32((uint32_t)(edx + ebx + 0x70u), ecx);
/* e838fa: movzx eax, byte ptr [eax + 0x44] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x44u)));
/* e838fe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e838ff: je 0xe83956 */
  if (zf) goto L_e83956;
L_e83901: /* e83901: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83902: je 0xe8394f */
  if (zf) goto L_e8394f;
L_e83904: /* e83904: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83908: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8390e: mov eax, 2 */
  eax = 0x2u;
/* e83913: mov dword ptr [ecx + ebx + 0x4c], eax */
  W32((uint32_t)(ecx + ebx + 0x4cu), eax);
/* e83917: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8391b: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83921: mov dword ptr [edx + ebx + 0x58], eax */
  W32((uint32_t)(edx + ebx + 0x58u), eax);
/* e83925: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83929: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8392f: mov dword ptr [ecx + ebx + 0x50], eax */
  W32((uint32_t)(ecx + ebx + 0x50u), eax);
/* e83933: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83937: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8393d: mov dword ptr [edx + ebx + 0x64], eax */
  W32((uint32_t)(edx + ebx + 0x64u), eax);
/* e83941: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83945: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e83946: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e8394a: jmp 0xe839f3 */
  goto L_e839f3;
L_e8394f: /* e8394f: mov edx, 0xd */
  edx = 0xdu;
/* e83954: jmp 0xe8395b */
  goto L_e8395b;
L_e83956: /* e83956: mov edx, 5 */
  edx = 0x5u;
L_e8395b: /* e8395b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8395f: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83965: mov dword ptr [eax + ebx + 0x4c], edx */
  W32((uint32_t)(eax + ebx + 0x4cu), edx);
/* e83969: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e8396d: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e83973: mov eax, 2 */
  eax = 0x2u;
/* e83978: mov dword ptr [esi + ebx + 0x58], eax */
  W32((uint32_t)(esi + ebx + 0x58u), eax);
/* e8397c: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e83980: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e83986: mov dword ptr [esi + ebx + 0x5c], ecx */
  W32((uint32_t)(esi + ebx + 0x5cu), ecx);
/* e8398a: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e8398e: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e83994: mov dword ptr [esi + ebx + 0x50], edx */
  W32((uint32_t)(esi + ebx + 0x50u), edx);
/* e83998: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8399c: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e839a2: mov dword ptr [edx + ebx + 0x64], eax */
  W32((uint32_t)(edx + ebx + 0x64u), eax);
/* e839a6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e839aa: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e839b0: mov dword ptr [eax + ebx + 0x68], ecx */
  W32((uint32_t)(eax + ebx + 0x68u), ecx);
/* e839b4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e839b8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e839b9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e839bd: jmp 0xe839f3 */
  goto L_e839f3;
L_e839bf: /* e839bf: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e839c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e839c7: je 0xe839d4 */
  if (zf) goto L_e839d4;
L_e839c9: /* e839c9: push 0xeaeee0 */
  { uint32_t v = 0xeaeee0u; esp -= 4; W32(esp, v); }
/* e839ce: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe839d4u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e839d4: /* e839d4: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e839da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e839dc: je 0xe839e4 */
  if (zf) goto L_e839e4;
L_e839de: /* e839de: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e839e2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e839e4: /* e839e4: xor eax, eax */
  eax = 0;
/* e839e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e839e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e839e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e839e9: mov esp, ebp */
  esp = ebp;
/* e839eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e839ec: ret 0x90 */
  esp += 148; SPILL(); return;
L_e839ef: /* e839ef: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_e839f3: /* e839f3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e839f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e839f9: je 0xe83bae */
  if (zf) goto L_e83bae;
L_e839ff: /* e839ff: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e83a03: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e83a07: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e83a09: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e83a0b: jge 0xe83cb3 */
  if ((sf == of)) goto L_e83cb3;
L_e83a11: /* e83a11: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e83a15: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e83a19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e83a1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e83a1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83a1e: mov ecx, 0x21 */
  ecx = 0x21u;
/* e83a23: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e83a26: lea edi, [esp + 0x104] */
  edi = (uint32_t)(esp + 0x104u);
/* e83a2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83a2e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e83a30: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe83a35u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e83a35: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e83a38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83a3a: je 0xe83c83 */
  if (zf) goto L_e83c83;
L_e83a40: /* e83a40: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83a44: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e83a48: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83a4e: lea edx, [ecx + ebx + 0x38] */
  edx = (uint32_t)(ecx + ebx + 0x38u);
/* e83a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83a53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83a54: mov ecx, esi */
  ecx = esi;
/* e83a56: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe83a5bu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e83a5b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83a5f: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83a65: lea eax, [esp + 0xf8] */
  eax = (uint32_t)(esp + 0xf8u);
/* e83a6c: lea edx, [ecx + ebx + 0x38] */
  edx = (uint32_t)(ecx + ebx + 0x38u);
/* e83a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83a71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83a72: mov ecx, esi */
  ecx = esi;
/* e83a74: call 0xe88140 */
  esp -= 4; W32(esp, 0xe83a79u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e83a79: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83a7d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e83a80: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83a86: mov ecx, 1 */
  ecx = 0x1u;
/* e83a8b: mov dword ptr [eax + ebx + 0x70], ecx */
  W32((uint32_t)(eax + ebx + 0x70u), ecx);
/* e83a8f: movzx eax, byte ptr [edx + 0x45] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x45u)));
/* e83a93: mov edx, 2 */
  edx = 0x2u;
/* e83a98: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e83a9a: je 0xe83b57 */
  if (zf) goto L_e83b57;
L_e83aa0: /* e83aa0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83aa1: je 0xe83b11 */
  if (zf) goto L_e83b11;
L_e83aa3: /* e83aa3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83aa7: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83aad: mov dword ptr [eax + ebx + 0x4c], 0xd */
  W32((uint32_t)(eax + ebx + 0x4cu), 0xdu);
/* e83ab5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83ab9: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83abf: mov dword ptr [eax + ebx + 0x58], ecx */
  W32((uint32_t)(eax + ebx + 0x58u), ecx);
/* e83ac3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83ac7: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83acd: mov dword ptr [eax + ebx + 0x5c], 3 */
  W32((uint32_t)(eax + ebx + 0x5cu), 0x3u);
/* e83ad5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83ad9: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83adf: mov dword ptr [eax + ebx + 0x50], edx */
  W32((uint32_t)(eax + ebx + 0x50u), edx);
/* e83ae3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83ae7: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83aed: mov byte ptr [esp + 0x10], 0x7f */
  W8((uint32_t)(esp + 0x10u), 0x7fu);
/* e83af2: mov byte ptr [esp + 0x11], 0x7f */
  W8((uint32_t)(esp + 0x11u), 0x7fu);
/* e83af7: mov byte ptr [esp + 0x12], 0x7f */
  W8((uint32_t)(esp + 0x12u), 0x7fu);
/* e83afc: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* e83b01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e83b05: mov dword ptr [edx + ebx + 0x64], ecx */
  W32((uint32_t)(edx + ebx + 0x64u), ecx);
/* e83b09: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* e83b0c: jmp 0xe83ba5 */
  goto L_e83ba5;
L_e83b11: /* e83b11: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83b15: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83b1b: mov dword ptr [edx + ebx + 0x4c], 4 */
  W32((uint32_t)(edx + ebx + 0x4cu), 0x4u);
/* e83b23: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83b27: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83b2d: mov dword ptr [eax + ebx + 0x58], 0x22 */
  W32((uint32_t)(eax + ebx + 0x58u), 0x22u);
/* e83b35: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83b39: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83b3f: mov dword ptr [edx + ebx + 0x5c], ecx */
  W32((uint32_t)(edx + ebx + 0x5cu), ecx);
/* e83b43: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83b47: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83b4d: mov dword ptr [eax + ebx + 0x50], 3 */
  W32((uint32_t)(eax + ebx + 0x50u), 0x3u);
/* e83b55: jmp 0xe83b97 */
  goto L_e83b97;
L_e83b57: /* e83b57: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83b5b: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83b61: mov dword ptr [eax + ebx + 0x4c], 3 */
  W32((uint32_t)(eax + ebx + 0x4cu), 0x3u);
/* e83b69: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83b6d: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83b73: mov dword ptr [eax + ebx + 0x5c], ecx */
  W32((uint32_t)(eax + ebx + 0x5cu), ecx);
/* e83b77: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83b7b: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83b81: mov dword ptr [eax + ebx + 0x50], 4 */
  W32((uint32_t)(eax + ebx + 0x50u), 0x4u);
/* e83b89: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83b8d: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83b93: mov dword ptr [eax + ebx + 0x64], edx */
  W32((uint32_t)(eax + ebx + 0x64u), edx);
L_e83b97: /* e83b97: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83b9b: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83ba1: mov dword ptr [edx + ebx + 0x68], ecx */
  W32((uint32_t)(edx + ebx + 0x68u), ecx);
L_e83ba5: /* e83ba5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83ba9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e83baa: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_e83bae: /* e83bae: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e83bb2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e83bb5: mov ecx, dword ptr [edx + 0x4104] */
  ecx = R32((uint32_t)(edx + 0x4104u));
/* e83bbb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83bbd: jne 0xe83d85 */
  if (!zf) goto L_e83d85;
L_e83bc3: /* e83bc3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e83bc6: mov cl, byte ptr [esi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x44u))) & 0xffu);
/* e83bc9: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83bcb: jne 0xe83bd9 */
  if (!zf) goto L_e83bd9;
L_e83bcd: /* e83bcd: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e83bd1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83bd3: jne 0xe83d85 */
  if (!zf) goto L_e83d85;
L_e83bd9: /* e83bd9: mov ecx, dword ptr [esi + 0xc8] */
  ecx = R32((uint32_t)(esi + 0xc8u));
/* e83bdf: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83be2: jne 0xe83bf0 */
  if (!zf) goto L_e83bf0;
L_e83be4: /* e83be4: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83be7: jne 0xe83d85 */
  if (!zf) goto L_e83d85;
L_e83bed: /* e83bed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_e83bf0: /* e83bf0: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e83bf4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e83bf6: jge 0xe83dee */
  if ((sf == of)) goto L_e83dee;
L_e83bfc: /* e83bfc: movzx ecx, byte ptr [esi + 0x45] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x45u)));
/* e83c00: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83c06: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e83c09: je 0xe83d23 */
  if (zf) goto L_e83d23;
L_e83c0f: /* e83c0f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e83c10: je 0xe83ce2 */
  if (zf) goto L_e83ce2;
L_e83c16: /* e83c16: mov dword ptr [eax + ebx + 0x4c], 0xc */
  W32((uint32_t)(eax + ebx + 0x4cu), 0xcu);
/* e83c1e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83c22: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83c28: mov eax, 1 */
  eax = 0x1u;
/* e83c2d: mov dword ptr [ecx + ebx + 0x58], eax */
  W32((uint32_t)(ecx + ebx + 0x58u), eax);
/* e83c31: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83c35: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83c3b: mov dword ptr [ecx + ebx + 0x5c], 3 */
  W32((uint32_t)(ecx + ebx + 0x5cu), 0x3u);
/* e83c43: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83c47: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83c4d: mov dword ptr [ecx + ebx + 0x50], 2 */
  W32((uint32_t)(ecx + ebx + 0x50u), 0x2u);
/* e83c55: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83c59: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83c5f: mov dword ptr [ecx + ebx + 0x64], eax */
  W32((uint32_t)(ecx + ebx + 0x64u), eax);
/* e83c63: mov byte ptr [esp + 0x10], 0x7f */
  W8((uint32_t)(esp + 0x10u), 0x7fu);
/* e83c68: mov byte ptr [esp + 0x11], 0x7f */
  W8((uint32_t)(esp + 0x11u), 0x7fu);
/* e83c6d: mov byte ptr [esp + 0x12], 0x7f */
  W8((uint32_t)(esp + 0x12u), 0x7fu);
/* e83c72: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* e83c77: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e83c7b: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* e83c7e: jmp 0xe83d70 */
  goto L_e83d70;
L_e83c83: /* e83c83: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e83c89: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83c8b: je 0xe83c98 */
  if (zf) goto L_e83c98;
L_e83c8d: /* e83c8d: push 0xeaeea8 */
  { uint32_t v = 0xeaeea8u; esp -= 4; W32(esp, v); }
/* e83c92: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe83c98u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e83c98: /* e83c98: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e83c9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83ca0: je 0xe83ca8 */
  if (zf) goto L_e83ca8;
L_e83ca2: /* e83ca2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e83ca6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e83ca8: /* e83ca8: xor eax, eax */
  eax = 0;
/* e83caa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e83cab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e83cac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e83cad: mov esp, ebp */
  esp = ebp;
/* e83caf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e83cb0: ret 0x90 */
  esp += 148; SPILL(); return;
L_e83cb3: /* e83cb3: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e83cb9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83cbb: je 0xe83cc8 */
  if (zf) goto L_e83cc8;
L_e83cbd: /* e83cbd: push 0xeaee68 */
  { uint32_t v = 0xeaee68u; esp -= 4; W32(esp, v); }
/* e83cc2: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe83cc8u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e83cc8: /* e83cc8: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e83cce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83cd0: je 0xe83cd7 */
  if (zf) goto L_e83cd7;
L_e83cd2: /* e83cd2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e83cd5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_e83cd7: /* e83cd7: xor eax, eax */
  eax = 0;
/* e83cd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e83cda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e83cdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e83cdc: mov esp, ebp */
  esp = ebp;
/* e83cde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e83cdf: ret 0x90 */
  esp += 148; SPILL(); return;
L_e83ce2: /* e83ce2: mov dword ptr [eax + ebx + 0x4c], 4 */
  W32((uint32_t)(eax + ebx + 0x4cu), 0x4u);
/* e83cea: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83cee: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83cf4: mov dword ptr [ecx + ebx + 0x58], 0x20 */
  W32((uint32_t)(ecx + ebx + 0x58u), 0x20u);
/* e83cfc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83d00: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83d06: mov eax, 1 */
  eax = 0x1u;
/* e83d0b: mov dword ptr [ecx + ebx + 0x5c], eax */
  W32((uint32_t)(ecx + ebx + 0x5cu), eax);
/* e83d0f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83d13: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83d19: mov dword ptr [ecx + ebx + 0x50], 3 */
  W32((uint32_t)(ecx + ebx + 0x50u), 0x3u);
/* e83d21: jmp 0xe83d62 */
  goto L_e83d62;
L_e83d23: /* e83d23: mov dword ptr [eax + ebx + 0x4c], 3 */
  W32((uint32_t)(eax + ebx + 0x4cu), 0x3u);
/* e83d2b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83d2f: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83d35: mov eax, 1 */
  eax = 0x1u;
/* e83d3a: mov dword ptr [ecx + ebx + 0x5c], eax */
  W32((uint32_t)(ecx + ebx + 0x5cu), eax);
/* e83d3e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83d42: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83d48: mov dword ptr [ecx + ebx + 0x50], 4 */
  W32((uint32_t)(ecx + ebx + 0x50u), 0x4u);
/* e83d50: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83d54: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83d5a: mov dword ptr [ecx + ebx + 0x64], 0 */
  W32((uint32_t)(ecx + ebx + 0x64u), 0x0u);
L_e83d62: /* e83d62: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83d66: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83d6c: mov dword ptr [ecx + ebx + 0x68], eax */
  W32((uint32_t)(ecx + ebx + 0x68u), eax);
L_e83d70: /* e83d70: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83d74: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e83d78: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e83d79: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e83d7b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* e83d7f: jle 0xe83d85 */
  if ((zf || sf != of)) goto L_e83d85;
L_e83d81: /* e83d81: inc dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x1cu), r);
  }
L_e83d85: /* e83d85: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e83d88: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* e83d8e: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e83d91: mov edx, 1 */
  edx = 0x1u;
/* e83d96: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e83d98: mov dword ptr [ebx + 0x18], ecx */
  W32((uint32_t)(ebx + 0x18u), ecx);
/* e83d9b: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* e83d9e: mov dword ptr [ebx + 0x14], 0 */
  W32((uint32_t)(ebx + 0x14u), 0x0u);
/* e83da5: movzx eax, byte ptr [eax + 0x45] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x45u)));
/* e83da9: mov ecx, 2 */
  ecx = 0x2u;
/* e83dae: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e83db0: je 0xe84a83 */
  if (zf) goto L_e84a83;
L_e83db6: /* e83db6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83db7: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* e83dbc: mov dword ptr [ebx + 0x2c], edx */
  W32((uint32_t)(ebx + 0x2cu), edx);
/* e83dbf: je 0xe84a65 */
  if (zf) goto L_e84a65;
L_e83dc5: /* e83dc5: mov byte ptr [esp + 0x10], 0x7f */
  W8((uint32_t)(esp + 0x10u), 0x7fu);
/* e83dca: mov byte ptr [esp + 0x11], 0x7f */
  W8((uint32_t)(esp + 0x11u), 0x7fu);
/* e83dcf: mov byte ptr [esp + 0x12], 0x7f */
  W8((uint32_t)(esp + 0x12u), 0x7fu);
/* e83dd4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e83dd8: mov dword ptr [ebx + 0x24], 9 */
  W32((uint32_t)(ebx + 0x24u), 0x9u);
/* e83ddf: mov dword ptr [ebx + 0x28], 3 */
  W32((uint32_t)(ebx + 0x28u), 0x3u);
/* e83de6: mov dword ptr [ebx + 0x30], eax */
  W32((uint32_t)(ebx + 0x30u), eax);
/* e83de9: jmp 0xe84a91 */
  goto L_e84a91;
L_e83dee: /* e83dee: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e83df4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83df6: je 0xe83e03 */
  if (zf) goto L_e83e03;
L_e83df8: /* e83df8: push 0xeaee28 */
  { uint32_t v = 0xeaee28u; esp -= 4; W32(esp, v); }
L_e83dfd: /* e83dfd: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe83e03u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e83e03: /* e83e03: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e83e09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83e0b: je 0xe83e0f */
  if (zf) goto L_e83e0f;
L_e83e0d: /* e83e0d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_e83e0f: /* e83e0f: xor eax, eax */
  eax = 0;
/* e83e11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e83e12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e83e13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e83e14: mov esp, ebp */
  esp = ebp;
/* e83e16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e83e17: ret 0x90 */
  esp += 148; SPILL(); return;
L_e83e1a: /* e83e1a: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e83e20: add edx, 0x78 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e83e23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83e24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e83e26: lea eax, [esp + 0x188] */
  eax = (uint32_t)(esp + 0x188u);
/* e83e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83e2e: call 0xe9c430 */
  esp -= 4; W32(esp, 0xe83e33u); SPILL(); f_e9c430(); if (g_unwind) return; RELOAD();
/* e83e33: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e83e36: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e83e39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e83e3a: lea ecx, [esp + 0x184] */
  ecx = (uint32_t)(esp + 0x184u);
/* e83e41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e83e42: lea edx, [esp + 0x1c8] */
  edx = (uint32_t)(esp + 0x1c8u);
/* e83e49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83e4a: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe83e4fu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e83e4f: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* e83e53: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe83e58u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e83e58: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e83e5b: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* e83e5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e83e60: lea eax, [esp + 0x74] */
  eax = (uint32_t)(esp + 0x74u);
/* e83e64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83e65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83e66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e83e67: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe83e6cu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e83e6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e83e6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83e71: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* e83e75: je 0xe84176 */
  if (zf) goto L_e84176;
L_e83e7b: /* e83e7b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e83e7e: mov dl, byte ptr [ecx + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* e83e81: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83e83: je 0xe83eeb */
  if (zf) goto L_e83eeb;
L_e83e85: /* e83e85: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e83e89: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83e8b: je 0xe83eeb */
  if (zf) goto L_e83eeb;
L_e83e8d: /* e83e8d: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* e83e93: mov eax, dword ptr [ebp + 0x90] */
  eax = R32((uint32_t)(ebp + 0x90u));
/* e83e99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83e9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e83e9d: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e83ea3: mov edi, esp */
  edi = esp;
/* e83ea5: mov ecx, 0x21 */
  ecx = 0x21u;
/* e83eaa: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e83ead: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e83eaf: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* e83eb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e83eb7: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* e83ebe: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e83ec5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83ec6: lea eax, [esp + 0xbc] */
  eax = (uint32_t)(esp + 0xbcu);
/* e83ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83ece: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e83ecf: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* e83ed6: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe83edbu); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e83edb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e83edd: je 0xe8379e */
  if (zf) goto L_e8379e;
L_e83ee3: /* e83ee3: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e83ee7: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_e83eeb: /* e83eeb: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e83eef: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e83ef3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e83ef5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83ef9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e83efb: jge 0xe84143 */
  if ((sf == of)) goto L_e84143;
L_e83f01: /* e83f01: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83f07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83f08: lea eax, [ecx + ebx + 0x38] */
  eax = (uint32_t)(ecx + ebx + 0x38u);
/* e83f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e83f0d: mov ecx, edi */
  ecx = edi;
/* e83f0f: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe83f14u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e83f14: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83f18: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83f1e: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* e83f25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e83f26: lea edx, [esp + 0x1c4] */
  edx = (uint32_t)(esp + 0x1c4u);
/* e83f2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e83f2e: lea ecx, [eax + ebx + 0x7c] */
  ecx = (uint32_t)(eax + ebx + 0x7cu);
/* e83f32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e83f33: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe83f38u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e83f38: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83f3c: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83f42: mov dword ptr [edx + ebx + 0x74], 3 */
  W32((uint32_t)(edx + ebx + 0x74u), 0x3u);
/* e83f4a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83f4e: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83f54: mov dword ptr [eax + ebx + 0x70], 0x20000 */
  W32((uint32_t)(eax + ebx + 0x70u), 0x20000u);
/* e83f5c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83f60: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e83f63: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83f69: mov edx, 1 */
  edx = 0x1u;
/* e83f6e: mov dword ptr [ecx + ebx + 0x78], edx */
  W32((uint32_t)(ecx + ebx + 0x78u), edx);
/* e83f72: test byte ptr [eax + 0xc8], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xc8u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e83f78: je 0xe83f94 */
  if (zf) goto L_e83f94;
L_e83f7a: /* e83f7a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83f7e: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83f84: mov esi, dword ptr [ecx + ebx + 0x74] */
  esi = R32((uint32_t)(ecx + ebx + 0x74u));
/* e83f88: lea ecx, [ecx + ebx + 0x74] */
  ecx = (uint32_t)(ecx + ebx + 0x74u);
/* e83f8c: or esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* e83f92: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_e83f94: /* e83f94: movzx eax, byte ptr [eax + 0x44] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x44u)));
/* e83f98: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83f99: je 0xe83fb6 */
  if (zf) goto L_e83fb6;
L_e83f9b: /* e83f9b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e83f9c: jne 0xe842d7 */
  if (!zf) goto L_e842d7;
L_e83fa2: /* e83fa2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83fa6: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83fac: mov dword ptr [eax + ebx + 0x4c], 0xd */
  W32((uint32_t)(eax + ebx + 0x4cu), 0xdu);
/* e83fb4: jmp 0xe83fca */
  goto L_e83fca;
L_e83fb6: /* e83fb6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e83fba: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e83fc0: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e83fc6: mov dword ptr [eax + ebx + 0x4c], ecx */
  W32((uint32_t)(eax + ebx + 0x4cu), ecx);
L_e83fca: /* e83fca: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83fce: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83fd4: mov eax, 2 */
  eax = 0x2u;
/* e83fd9: mov dword ptr [ecx + ebx + 0x58], eax */
  W32((uint32_t)(ecx + ebx + 0x58u), eax);
/* e83fdd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83fe1: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e83fe7: mov dword ptr [ecx + ebx + 0x5c], edx */
  W32((uint32_t)(ecx + ebx + 0x5cu), edx);
L_e83feb: /* e83feb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e83fef: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e83ff5: mov dword ptr [edx + ebx + 0x50], eax */
  W32((uint32_t)(edx + ebx + 0x50u), eax);
/* e83ff9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e83ffd: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84003: mov dword ptr [ecx + ebx + 0x64], eax */
  W32((uint32_t)(ecx + ebx + 0x64u), eax);
L_e84007: /* e84007: inc dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
L_e8400b: /* e8400b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e8400e: test byte ptr [eax + 0xc8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xc8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e84015: je 0xe84498 */
  if (zf) goto L_e84498;
L_e8401b: /* e8401b: mov esi, eax */
  esi = eax;
/* e8401d: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* e84023: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84024: lea edx, [esp + 0x184] */
  edx = (uint32_t)(esp + 0x184u);
/* e8402b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8402c: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* e84030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84031: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe84036u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e84036: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8403a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e8403e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84042: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e84044: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e84046: jge 0xe845c0 */
  if ((sf == of)) goto L_e845c0;
L_e8404c: /* e8404c: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84052: mov ecx, esi */
  ecx = esi;
/* e84054: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* e84057: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e8405b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8405c: lea eax, [eax + ebx + 0x38] */
  eax = (uint32_t)(eax + ebx + 0x38u);
/* e84060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84061: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe84066u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e84066: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8406a: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84070: mov dword ptr [ecx + ebx + 0x78], 1 */
  W32((uint32_t)(ecx + ebx + 0x78u), 0x1u);
/* e84078: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8407c: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84082: mov dword ptr [edx + ebx + 0x70], 0x20000 */
  W32((uint32_t)(edx + ebx + 0x70u), 0x20000u);
/* e8408a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8408e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e84091: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84097: mov dword ptr [eax + ebx + 0x74], 3 */
  W32((uint32_t)(eax + ebx + 0x74u), 0x3u);
/* e8409f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e840a3: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e840a9: lea edi, [ecx + ebx + 0x7c] */
  edi = (uint32_t)(ecx + ebx + 0x7cu);
/* e840ad: mov ecx, 0x10 */
  ecx = 0x10u;
/* e840b2: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* e840b6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e840b8: movzx eax, byte ptr [edx + 0x45] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x45u)));
/* e840bc: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e840bf: je 0xe8443d */
  if (zf) goto L_e8443d;
L_e840c5: /* e840c5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e840c6: je 0xe843e4 */
  if (zf) goto L_e843e4;
L_e840cc: /* e840cc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e840d0: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e840d6: mov dword ptr [eax + ebx + 0x4c], 0xd */
  W32((uint32_t)(eax + ebx + 0x4cu), 0xdu);
/* e840de: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e840e2: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e840e8: mov eax, 1 */
  eax = 0x1u;
/* e840ed: mov dword ptr [ecx + ebx + 0x58], eax */
  W32((uint32_t)(ecx + ebx + 0x58u), eax);
/* e840f1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e840f5: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e840fb: mov dword ptr [edx + ebx + 0x5c], 3 */
  W32((uint32_t)(edx + ebx + 0x5cu), 0x3u);
/* e84103: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84107: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8410d: mov dword ptr [ecx + ebx + 0x50], 2 */
  W32((uint32_t)(ecx + ebx + 0x50u), 0x2u);
/* e84115: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84119: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8411f: mov dword ptr [edx + ebx + 0x64], eax */
  W32((uint32_t)(edx + ebx + 0x64u), eax);
/* e84123: mov byte ptr [esp + 0x14], 0x7f */
  W8((uint32_t)(esp + 0x14u), 0x7fu);
/* e84128: mov byte ptr [esp + 0x15], 0x7f */
  W8((uint32_t)(esp + 0x15u), 0x7fu);
/* e8412d: mov byte ptr [esp + 0x16], 0x7f */
  W8((uint32_t)(esp + 0x16u), 0x7fu);
/* e84132: mov byte ptr [esp + 0x17], 0 */
  W8((uint32_t)(esp + 0x17u), 0x0u);
/* e84137: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8413b: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* e8413e: jmp 0xe84494 */
  goto L_e84494;
L_e84143: /* e84143: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e84149: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8414b: je 0xe84158 */
  if (zf) goto L_e84158;
L_e8414d: /* e8414d: push 0xeaefa0 */
  { uint32_t v = 0xeaefa0u; esp -= 4; W32(esp, v); }
/* e84152: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe84158u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e84158: /* e84158: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e8415e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84160: je 0xe83cd7 */
  if (zf) goto L_e83cd7;
L_e84166: /* e84166: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e84169: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e8416b: xor eax, eax */
  eax = 0;
/* e8416d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8416e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8416f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e84170: mov esp, ebp */
  esp = ebp;
/* e84172: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e84173: ret 0x90 */
  esp += 148; SPILL(); return;
L_e84176: /* e84176: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e84179: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* e8417f: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* e84185: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* e84188: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8418b: mov dword ptr [esp + 0xc4], ecx */
  W32((uint32_t)(esp + 0xc4u), ecx);
/* e84192: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84193: mov dword ptr [esp + 0x74], 1 */
  W32((uint32_t)(esp + 0x74u), 0x1u);
/* e8419b: mov byte ptr [esp + 0xc4], 8 */
  W8((uint32_t)(esp + 0xc4u), 0x8u);
/* e841a3: mov byte ptr [esp + 0xc5], 1 */
  W8((uint32_t)(esp + 0xc5u), 0x1u);
/* e841ab: mov ecx, 0x10 */
  ecx = 0x10u;
/* e841b0: lea edi, [esp + 0x84] */
  edi = (uint32_t)(esp + 0x84u);
/* e841b7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e841b9: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e841bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e841c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e841c2: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e841c8: mov edi, esp */
  edi = esp;
/* e841ca: mov ecx, 0x21 */
  ecx = 0x21u;
/* e841cf: lea esi, [esp + 0x100] */
  esi = (uint32_t)(esp + 0x100u);
/* e841d6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e841d8: lea edx, [esp + 0xac] */
  edx = (uint32_t)(esp + 0xacu);
/* e841df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e841e0: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e841e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e841e8: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* e841ef: lea edx, [esp + 0xbc] */
  edx = (uint32_t)(esp + 0xbcu);
/* e841f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e841f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e841f8: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe841fdu); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e841fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e841ff: je 0xe8379e */
  if (zf) goto L_e8379e;
L_e84205: /* e84205: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e84208: mov al, byte ptr [ecx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* e8420b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8420d: je 0xe8400b */
  if (zf) goto L_e8400b;
L_e84213: /* e84213: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e84217: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84219: je 0xe8400b */
  if (zf) goto L_e8400b;
L_e8421f: /* e8421f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e84221: lea edx, [esp + 0xfc] */
  edx = (uint32_t)(esp + 0xfcu);
/* e84228: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84229: mov ecx, 0x21 */
  ecx = 0x21u;
/* e8422e: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e84231: lea edi, [esp + 0x100] */
  edi = (uint32_t)(esp + 0x100u);
/* e84238: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8423a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e8423e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8423f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84240: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe84245u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e84245: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e84248: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8424a: jne 0xe8427f */
  if (!zf) goto L_e8427f;
L_e8424c: /* e8424c: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e84252: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84254: je 0xe84261 */
  if (zf) goto L_e84261;
L_e84256: /* e84256: push 0xeaef28 */
  { uint32_t v = 0xeaef28u; esp -= 4; W32(esp, v); }
/* e8425b: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe84261u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e84261: /* e84261: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e84267: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84269: je 0xe83cd7 */
  if (zf) goto L_e83cd7;
L_e8426f: /* e8426f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e84272: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e84274: xor eax, eax */
  eax = 0;
/* e84276: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e84277: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e84278: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e84279: mov esp, ebp */
  esp = ebp;
/* e8427b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8427c: ret 0x90 */
  esp += 148; SPILL(); return;
L_e8427f: /* e8427f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e84283: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e84287: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e84289: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8428d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8428f: jge 0xe843b4 */
  if ((sf == of)) goto L_e843b4;
L_e84295: /* e84295: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e84299: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8429f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e842a0: lea eax, [ecx + ebx + 0x38] */
  eax = (uint32_t)(ecx + ebx + 0x38u);
/* e842a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e842a5: mov ecx, esi */
  ecx = esi;
/* e842a7: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe842acu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e842ac: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e842b0: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e842b6: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* e842bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e842be: lea eax, [edx + ebx + 0x38] */
  eax = (uint32_t)(edx + ebx + 0x38u);
/* e842c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e842c3: mov ecx, esi */
  ecx = esi;
/* e842c5: call 0xe88140 */
  esp -= 4; W32(esp, 0xe842cau); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e842ca: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e842cd: movzx eax, byte ptr [ecx + 0x44] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x44u)));
/* e842d1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e842d2: je 0xe84346 */
  if (zf) goto L_e84346;
L_e842d4: /* e842d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e842d5: je 0xe842fd */
  if (zf) goto L_e842fd;
L_e842d7: /* e842d7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e842db: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e842e1: mov eax, 2 */
  eax = 0x2u;
/* e842e6: mov dword ptr [edx + ebx + 0x4c], eax */
  W32((uint32_t)(edx + ebx + 0x4cu), eax);
/* e842ea: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e842ee: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e842f4: mov dword ptr [ecx + ebx + 0x58], eax */
  W32((uint32_t)(ecx + ebx + 0x58u), eax);
/* e842f8: jmp 0xe83feb */
  goto L_e83feb;
L_e842fd: /* e842fd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84301: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84307: mov edx, 0xd */
  edx = 0xdu;
/* e8430c: mov dword ptr [eax + ebx + 0x4c], edx */
  W32((uint32_t)(eax + ebx + 0x4cu), edx);
/* e84310: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84314: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8431a: mov ecx, 2 */
  ecx = 0x2u;
/* e8431f: mov dword ptr [eax + ebx + 0x58], ecx */
  W32((uint32_t)(eax + ebx + 0x58u), ecx);
/* e84323: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e84327: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8432d: mov eax, 1 */
  eax = 0x1u;
/* e84332: mov dword ptr [esi + ebx + 0x5c], eax */
  W32((uint32_t)(esi + ebx + 0x5cu), eax);
/* e84336: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e8433a: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e84340: mov dword ptr [esi + ebx + 0x50], edx */
  W32((uint32_t)(esi + ebx + 0x50u), edx);
/* e84344: jmp 0xe84393 */
  goto L_e84393;
L_e84346: /* e84346: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8434a: mov eax, dword ptr [0xeba050] */
  eax = R32((uint32_t)(0xeba050u));
/* e8434f: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84355: mov dword ptr [edx + ebx + 0x4c], eax */
  W32((uint32_t)(edx + ebx + 0x4cu), eax);
/* e84359: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8435d: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84363: mov ecx, 2 */
  ecx = 0x2u;
/* e84368: mov dword ptr [edx + ebx + 0x58], ecx */
  W32((uint32_t)(edx + ebx + 0x58u), ecx);
/* e8436c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84370: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84376: mov eax, 1 */
  eax = 0x1u;
/* e8437b: mov dword ptr [edx + ebx + 0x5c], eax */
  W32((uint32_t)(edx + ebx + 0x5cu), eax);
/* e8437f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84383: mov esi, dword ptr [0xeba050] */
  esi = R32((uint32_t)(0xeba050u));
/* e84389: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8438f: mov dword ptr [edx + ebx + 0x50], esi */
  W32((uint32_t)(edx + ebx + 0x50u), esi);
L_e84393: /* e84393: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84397: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8439d: mov dword ptr [edx + ebx + 0x64], ecx */
  W32((uint32_t)(edx + ebx + 0x64u), ecx);
/* e843a1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e843a5: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e843ab: mov dword ptr [ecx + ebx + 0x68], eax */
  W32((uint32_t)(ecx + ebx + 0x68u), eax);
/* e843af: jmp 0xe84007 */
  goto L_e84007;
L_e843b4: /* e843b4: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e843ba: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e843bc: je 0xe843c9 */
  if (zf) goto L_e843c9;
L_e843be: /* e843be: push 0xeaeee0 */
  { uint32_t v = 0xeaeee0u; esp -= 4; W32(esp, v); }
/* e843c3: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe843c9u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e843c9: /* e843c9: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e843cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e843d1: je 0xe843d9 */
  if (zf) goto L_e843d9;
L_e843d3: /* e843d3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e843d7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_e843d9: /* e843d9: xor eax, eax */
  eax = 0;
/* e843db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e843dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e843dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e843de: mov esp, ebp */
  esp = ebp;
/* e843e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e843e1: ret 0x90 */
  esp += 148; SPILL(); return;
L_e843e4: /* e843e4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e843e8: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e843ee: mov dword ptr [ecx + ebx + 0x4c], 4 */
  W32((uint32_t)(ecx + ebx + 0x4cu), 0x4u);
/* e843f6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e843fa: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84400: mov dword ptr [edx + ebx + 0x58], 0x22 */
  W32((uint32_t)(edx + ebx + 0x58u), 0x22u);
/* e84408: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8440c: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84412: mov eax, 1 */
  eax = 0x1u;
/* e84417: mov dword ptr [ecx + ebx + 0x5c], eax */
  W32((uint32_t)(ecx + ebx + 0x5cu), eax);
/* e8441b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8441f: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84425: mov dword ptr [edx + ebx + 0x50], 3 */
  W32((uint32_t)(edx + ebx + 0x50u), 0x3u);
/* e8442d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84431: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84437: mov dword ptr [ecx + ebx + 0x68], eax */
  W32((uint32_t)(ecx + ebx + 0x68u), eax);
/* e8443b: jmp 0xe84494 */
  goto L_e84494;
L_e8443d: /* e8443d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84441: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84447: mov dword ptr [edx + ebx + 0x4c], 3 */
  W32((uint32_t)(edx + ebx + 0x4cu), 0x3u);
/* e8444f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84453: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84459: mov eax, 1 */
  eax = 0x1u;
/* e8445e: mov dword ptr [ecx + ebx + 0x5c], eax */
  W32((uint32_t)(ecx + ebx + 0x5cu), eax);
/* e84462: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84466: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8446c: mov dword ptr [edx + ebx + 0x50], 4 */
  W32((uint32_t)(edx + ebx + 0x50u), 0x4u);
/* e84474: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84478: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8447e: mov dword ptr [ecx + ebx + 0x64], 2 */
  W32((uint32_t)(ecx + ebx + 0x64u), 0x2u);
/* e84486: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8448a: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84490: mov dword ptr [edx + ebx + 0x68], eax */
  W32((uint32_t)(edx + ebx + 0x68u), eax);
L_e84494: /* e84494: inc dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
L_e84498: /* e84498: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e8449b: test byte ptr [eax + 0xc8], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xc8u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e844a2: je 0xe84688 */
  if (zf) goto L_e84688;
L_e844a8: /* e844a8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e844ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e844ae: je 0xe84688 */
  if (zf) goto L_e84688;
L_e844b4: /* e844b4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e844b8: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e844bc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e844c0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e844c2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e844c4: jge 0xe8496c */
  if ((sf == of)) goto L_e8496c;
L_e844ca: /* e844ca: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e844ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e844d0: mov ecx, 0x21 */
  ecx = 0x21u;
/* e844d5: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e844d8: lea edi, [esp + 0xfc] */
  edi = (uint32_t)(esp + 0xfcu);
/* e844df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e844e1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e844e3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e844e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e844e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e844e9: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe844eeu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e844ee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e844f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e844f3: je 0xe84938 */
  if (zf) goto L_e84938;
L_e844f9: /* e844f9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e844fd: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e84501: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84508: lea eax, [edx + ebx + 0x38] */
  eax = (uint32_t)(edx + ebx + 0x38u);
/* e8450c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8450d: mov ecx, esi */
  ecx = esi;
/* e8450f: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe84514u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e84514: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84518: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8451e: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* e84525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84526: lea eax, [edx + ebx + 0x38] */
  eax = (uint32_t)(edx + ebx + 0x38u);
/* e8452a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8452b: mov ecx, esi */
  ecx = esi;
/* e8452d: call 0xe88140 */
  esp -= 4; W32(esp, 0xe84532u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e84532: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e84535: movzx eax, byte ptr [ecx + 0x45] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x45u)));
/* e84539: mov ecx, 2 */
  ecx = 0x2u;
/* e8453e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e84540: je 0xe84631 */
  if (zf) goto L_e84631;
L_e84546: /* e84546: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e84547: je 0xe845d8 */
  if (zf) goto L_e845d8;
L_e8454d: /* e8454d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84551: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84557: mov dword ptr [edx + ebx + 0x4c], 0xd */
  W32((uint32_t)(edx + ebx + 0x4cu), 0xdu);
/* e8455f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84563: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84569: mov eax, 1 */
  eax = 0x1u;
/* e8456e: mov dword ptr [edx + ebx + 0x58], eax */
  W32((uint32_t)(edx + ebx + 0x58u), eax);
/* e84572: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84576: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8457c: mov dword ptr [edx + ebx + 0x5c], 3 */
  W32((uint32_t)(edx + ebx + 0x5cu), 0x3u);
/* e84584: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84588: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8458e: mov dword ptr [edx + ebx + 0x50], ecx */
  W32((uint32_t)(edx + ebx + 0x50u), ecx);
/* e84592: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84596: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8459c: mov byte ptr [esp + 0x10], 0x7f */
  W8((uint32_t)(esp + 0x10u), 0x7fu);
/* e845a1: mov byte ptr [esp + 0x11], 0x7f */
  W8((uint32_t)(esp + 0x11u), 0x7fu);
/* e845a6: mov byte ptr [esp + 0x12], 0x7f */
  W8((uint32_t)(esp + 0x12u), 0x7fu);
/* e845ab: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* e845b0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e845b4: mov dword ptr [ecx + ebx + 0x64], eax */
  W32((uint32_t)(ecx + ebx + 0x64u), eax);
/* e845b8: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* e845bb: jmp 0xe84684 */
  goto L_e84684;
L_e845c0: /* e845c0: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e845c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e845c8: je 0xe83e03 */
  if (zf) goto L_e83e03;
L_e845ce: /* e845ce: push 0xeaede0 */
  { uint32_t v = 0xeaede0u; esp -= 4; W32(esp, v); }
/* e845d3: jmp 0xe83dfd */
  goto L_e83dfd;
L_e845d8: /* e845d8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e845dc: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e845e2: mov dword ptr [eax + ebx + 0x4c], 4 */
  W32((uint32_t)(eax + ebx + 0x4cu), 0x4u);
/* e845ea: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e845ee: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e845f4: mov dword ptr [ecx + ebx + 0x58], 0x22 */
  W32((uint32_t)(ecx + ebx + 0x58u), 0x22u);
/* e845fc: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84600: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84606: mov eax, 1 */
  eax = 0x1u;
/* e8460b: mov dword ptr [edx + ebx + 0x5c], eax */
  W32((uint32_t)(edx + ebx + 0x5cu), eax);
/* e8460f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84613: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84619: mov dword ptr [ecx + ebx + 0x50], 3 */
  W32((uint32_t)(ecx + ebx + 0x50u), 0x3u);
/* e84621: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84625: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8462b: mov dword ptr [edx + ebx + 0x68], eax */
  W32((uint32_t)(edx + ebx + 0x68u), eax);
/* e8462f: jmp 0xe84684 */
  goto L_e84684;
L_e84631: /* e84631: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84635: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8463b: mov dword ptr [eax + ebx + 0x4c], 3 */
  W32((uint32_t)(eax + ebx + 0x4cu), 0x3u);
/* e84643: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84647: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8464d: mov eax, 1 */
  eax = 0x1u;
/* e84652: mov dword ptr [edx + ebx + 0x5c], eax */
  W32((uint32_t)(edx + ebx + 0x5cu), eax);
/* e84656: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8465a: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84660: mov dword ptr [edx + ebx + 0x50], 4 */
  W32((uint32_t)(edx + ebx + 0x50u), 0x4u);
/* e84668: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8466c: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84672: mov dword ptr [edx + ebx + 0x64], ecx */
  W32((uint32_t)(edx + ebx + 0x64u), ecx);
/* e84676: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8467a: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84680: mov dword ptr [ecx + ebx + 0x68], eax */
  W32((uint32_t)(ecx + ebx + 0x68u), eax);
L_e84684: /* e84684: inc dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
L_e84688: /* e84688: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e8468b: test byte ptr [esi + 0xc8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xc8u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e84692: jne 0xe83d85 */
  if (!zf) goto L_e83d85;
L_e84698: /* e84698: test byte ptr [0xebdd44], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xebdd44u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8469f: mov edi, 1 */
  edi = 0x1u;
/* e846a4: jne 0xe846b8 */
  if (!zf) goto L_e846b8;
L_e846a6: /* e846a6: or dword ptr [0xebdd44], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebdd44u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xebdd44u), r);
  }
/* e846ac: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* e846ae: mov ecx, 0xebdc28 */
  ecx = 0xebdc28u;
/* e846b3: call 0xe8aec0 */
  esp -= 4; W32(esp, 0xe846b8u); SPILL(); f_e8aec0(); if (g_unwind) return; RELOAD();
L_e846b8: /* e846b8: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e846bc: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e846c0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e846c4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e846c6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e846c8: jge 0xe84a4d */
  if ((sf == of)) goto L_e84a4d;
L_e846ce: /* e846ce: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e846d2: push 0xebdc28 */
  { uint32_t v = 0xebdc28u; esp -= 4; W32(esp, v); }
/* e846d7: mov ecx, esi */
  ecx = esi;
/* e846d9: call 0xe909c0 */
  esp -= 4; W32(esp, 0xe846deu); SPILL(); f_e909c0(); if (g_unwind) return; RELOAD();
/* e846de: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e846e2: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e846e8: mov dword ptr [ecx + ebx + 0x38], eax */
  W32((uint32_t)(ecx + ebx + 0x38u), eax);
/* e846ec: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e846f0: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e846f6: mov dword ptr [edx + ebx + 0x78], edi */
  W32((uint32_t)(edx + ebx + 0x78u), edi);
/* e846fa: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e846fe: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84704: mov dword ptr [eax + ebx + 0x70], 0x10000 */
  W32((uint32_t)(eax + ebx + 0x70u), 0x10000u);
/* e8470c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84710: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84716: mov dword ptr [ecx + ebx + 0x74], 3 */
  W32((uint32_t)(ecx + ebx + 0x74u), 0x3u);
/* e8471e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84722: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* e84725: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8472b: mov ecx, dword ptr [edx + 0x4668] */
  ecx = R32((uint32_t)(edx + 0x4668u));
/* e84731: mov dword ptr [eax + ebx + 0x3c], ecx */
  W32((uint32_t)(eax + ebx + 0x3cu), ecx);
/* e84735: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84739: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* e8473c: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84742: mov ecx, dword ptr [edx + 0x4668] */
  ecx = R32((uint32_t)(edx + 0x4668u));
/* e84748: mov dword ptr [eax + ebx + 0x40], ecx */
  W32((uint32_t)(eax + ebx + 0x40u), ecx);
/* e8474c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84750: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* e84753: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84759: mov ecx, dword ptr [edx + 0x4668] */
  ecx = R32((uint32_t)(edx + 0x4668u));
/* e8475f: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* e84763: mov dword ptr [eax + ebx + 0x44], ecx */
  W32((uint32_t)(eax + ebx + 0x44u), ecx);
/* e84767: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84768: lea ecx, [esp + 0x1c4] */
  ecx = (uint32_t)(esp + 0x1c4u);
/* e8476f: call dword ptr [0xeae0cc] */
  esp -= 4; W32(esp, 0xe84775u); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* e84775: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* e84779: call dword ptr [0xeae0c8] */
  esp -= 4; W32(esp, 0xe8477fu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* e8477f: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* e84783: call dword ptr [0xeae0c8] */
  esp -= 4; W32(esp, 0xe84789u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* e84789: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* e8478d: call dword ptr [0xeae0c8] */
  esp -= 4; W32(esp, 0xe84793u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* e84793: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* e84797: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8479b: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e847a1: fstp dword ptr [eax + ebx + 0x7c] */
  WF32((uint32_t)(eax + ebx + 0x7cu), ST0); FPOP();
/* e847a5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e847a9: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* e847ad: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e847b3: xor eax, eax */
  eax = 0;
/* e847b5: fstp dword ptr [ecx + ebx + 0x8c] */
  WF32((uint32_t)(ecx + ebx + 0x8cu), ST0); FPOP();
/* e847bc: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e847c0: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* e847c4: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e847ca: fstp dword ptr [edx + ebx + 0x9c] */
  WF32((uint32_t)(edx + ebx + 0x9cu), ST0); FPOP();
/* e847d1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e847d5: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e847db: mov dword ptr [ecx + ebx + 0xac], eax */
  W32((uint32_t)(ecx + ebx + 0xacu), eax);
/* e847e2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e847e6: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* e847ea: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e847f0: fstp dword ptr [edx + ebx + 0x80] */
  WF32((uint32_t)(edx + ebx + 0x80u), ST0); FPOP();
/* e847f7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e847fb: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* e847ff: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84805: fstp dword ptr [ecx + ebx + 0x90] */
  WF32((uint32_t)(ecx + ebx + 0x90u), ST0); FPOP();
/* e8480c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84810: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* e84814: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8481a: fstp dword ptr [edx + ebx + 0xa0] */
  WF32((uint32_t)(edx + ebx + 0xa0u), ST0); FPOP();
/* e84821: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84825: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8482b: mov dword ptr [ecx + ebx + 0xb0], eax */
  W32((uint32_t)(ecx + ebx + 0xb0u), eax);
/* e84832: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84836: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* e8483a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e8483b: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84841: fchs  */
  ST0 = -ST0;
/* e84843: fstp dword ptr [edx + ebx] */
  WF32((uint32_t)(edx + ebx), ST0); FPOP();
/* e84846: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8484a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* e8484e: fchs  */
  ST0 = -ST0;
/* e84850: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84856: fstp dword ptr [ecx + ebx + 0x94] */
  WF32((uint32_t)(ecx + ebx + 0x94u), ST0); FPOP();
/* e8485d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84861: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* e84865: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8486b: fchs  */
  ST0 = -ST0;
/* e8486d: fstp dword ptr [edx + ebx + 0xa4] */
  WF32((uint32_t)(edx + ebx + 0xa4u), ST0); FPOP();
/* e84874: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e84878: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8487e: mov dword ptr [ecx + ebx + 0xb4], eax */
  W32((uint32_t)(ecx + ebx + 0xb4u), eax);
/* e84885: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84889: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e8488c: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84892: mov dword ptr [edx + ebx + 0xa8], eax */
  W32((uint32_t)(edx + ebx + 0xa8u), eax);
/* e84899: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8489d: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e848a3: mov dword ptr [eax + ebx + 0xb8], 0x3f800000 */
  W32((uint32_t)(eax + ebx + 0xb8u), 0x3f800000u);
/* e848ae: movzx eax, byte ptr [ecx + 0x45] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x45u)));
/* e848b2: mov ecx, 2 */
  ecx = 0x2u;
/* e848b7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e848b9: je 0xe849f6 */
  if (zf) goto L_e849f6;
L_e848bf: /* e848bf: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e848c0: je 0xe8499f */
  if (zf) goto L_e8499f;
L_e848c6: /* e848c6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e848ca: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e848d0: mov dword ptr [edx + ebx + 0x4c], 0xd */
  W32((uint32_t)(edx + ebx + 0x4cu), 0xdu);
/* e848d8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e848dc: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e848e2: mov dword ptr [eax + ebx + 0x58], edi */
  W32((uint32_t)(eax + ebx + 0x58u), edi);
/* e848e6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e848ea: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e848f0: mov dword ptr [edx + ebx + 0x5c], 3 */
  W32((uint32_t)(edx + ebx + 0x5cu), 0x3u);
/* e848f8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e848fc: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84902: mov dword ptr [eax + ebx + 0x50], ecx */
  W32((uint32_t)(eax + ebx + 0x50u), ecx);
/* e84906: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8490a: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84910: mov dword ptr [ecx + ebx + 0x64], edi */
  W32((uint32_t)(ecx + ebx + 0x64u), edi);
/* e84914: mov byte ptr [esp + 0x10], 0x7f */
  W8((uint32_t)(esp + 0x10u), 0x7fu);
/* e84919: mov byte ptr [esp + 0x11], 0x7f */
  W8((uint32_t)(esp + 0x11u), 0x7fu);
/* e8491e: mov byte ptr [esp + 0x12], 0x7f */
  W8((uint32_t)(esp + 0x12u), 0x7fu);
/* e84923: mov byte ptr [esp + 0x13], 0 */
  W8((uint32_t)(esp + 0x13u), 0x0u);
/* e84928: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8492c: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* e8492f: inc dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* e84933: jmp 0xe83d85 */
  goto L_e83d85;
L_e84938: /* e84938: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e8493e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84940: je 0xe8494d */
  if (zf) goto L_e8494d;
L_e84942: /* e84942: push 0xeaeea8 */
  { uint32_t v = 0xeaeea8u; esp -= 4; W32(esp, v); }
/* e84947: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe8494du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e8494d: /* e8494d: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e84953: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84955: je 0xe83e0f */
  if (zf) goto L_e83e0f;
L_e8495b: /* e8495b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8495f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e84961: xor eax, eax */
  eax = 0;
/* e84963: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e84964: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e84965: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e84966: mov esp, ebp */
  esp = ebp;
/* e84968: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e84969: ret 0x90 */
  esp += 148; SPILL(); return;
L_e8496c: /* e8496c: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e84972: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84974: je 0xe84981 */
  if (zf) goto L_e84981;
L_e84976: /* e84976: push 0xeaee68 */
  { uint32_t v = 0xeaee68u; esp -= 4; W32(esp, v); }
/* e8497b: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe84981u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e84981: /* e84981: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e84987: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84989: je 0xe8379e */
  if (zf) goto L_e8379e;
L_e8498f: /* e8498f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e84992: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e84994: xor eax, eax */
  eax = 0;
/* e84996: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e84997: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e84998: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e84999: mov esp, ebp */
  esp = ebp;
/* e8499b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8499c: ret 0x90 */
  esp += 148; SPILL(); return;
L_e8499f: /* e8499f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e849a3: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e849a9: mov dword ptr [eax + ebx + 0x4c], 4 */
  W32((uint32_t)(eax + ebx + 0x4cu), 0x4u);
/* e849b1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e849b5: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e849bb: mov dword ptr [edx + ebx + 0x58], ecx */
  W32((uint32_t)(edx + ebx + 0x58u), ecx);
/* e849bf: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e849c3: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e849c9: mov dword ptr [eax + ebx + 0x5c], edi */
  W32((uint32_t)(eax + ebx + 0x5cu), edi);
/* e849cd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e849d1: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e849d7: mov dword ptr [ecx + ebx + 0x50], 3 */
  W32((uint32_t)(ecx + ebx + 0x50u), 0x3u);
/* e849df: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e849e3: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e849e9: mov dword ptr [edx + ebx + 0x68], edi */
  W32((uint32_t)(edx + ebx + 0x68u), edi);
/* e849ed: inc dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* e849f1: jmp 0xe83d85 */
  goto L_e83d85;
L_e849f6: /* e849f6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e849fa: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84a00: mov dword ptr [eax + ebx + 0x4c], 3 */
  W32((uint32_t)(eax + ebx + 0x4cu), 0x3u);
/* e84a08: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84a0c: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84a12: mov dword ptr [edx + ebx + 0x5c], edi */
  W32((uint32_t)(edx + ebx + 0x5cu), edi);
/* e84a16: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84a1a: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84a20: mov dword ptr [eax + ebx + 0x50], 4 */
  W32((uint32_t)(eax + ebx + 0x50u), 0x4u);
/* e84a28: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e84a2c: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84a32: mov dword ptr [edx + ebx + 0x64], ecx */
  W32((uint32_t)(edx + ebx + 0x64u), ecx);
/* e84a36: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e84a3a: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84a40: mov dword ptr [eax + ebx + 0x68], edi */
  W32((uint32_t)(eax + ebx + 0x68u), edi);
/* e84a44: inc dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* e84a48: jmp 0xe83d85 */
  goto L_e83d85;
L_e84a4d: /* e84a4d: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e84a53: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84a55: je 0xe83e03 */
  if (zf) goto L_e83e03;
L_e84a5b: /* e84a5b: push 0xeaed88 */
  { uint32_t v = 0xeaed88u; esp -= 4; W32(esp, v); }
/* e84a60: jmp 0xe83dfd */
  goto L_e83dfd;
L_e84a65: /* e84a65: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* e84a68: mov dword ptr [ebx + 0x28], ecx */
  W32((uint32_t)(ebx + 0x28u), ecx);
/* e84a6b: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* e84a70: mov byte ptr [esp + 0x11], 0 */
  W8((uint32_t)(esp + 0x11u), 0x0u);
/* e84a75: mov byte ptr [esp + 0x12], 0 */
  W8((uint32_t)(esp + 0x12u), 0x0u);
/* e84a7a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84a7e: mov dword ptr [ebx + 0x30], ecx */
  W32((uint32_t)(ebx + 0x30u), ecx);
/* e84a81: jmp 0xe84a91 */
  goto L_e84a91;
L_e84a83: /* e84a83: mov dword ptr [ebx + 0x24], 5 */
  W32((uint32_t)(ebx + 0x24u), 0x5u);
/* e84a8a: mov dword ptr [ebx + 0x28], 6 */
  W32((uint32_t)(ebx + 0x28u), 0x6u);
L_e84a91: /* e84a91: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e84a95: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e84a99: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e84a9f: mov eax, dword ptr [eax + esi*4 + 0x52c] */
  eax = R32((uint32_t)(eax + esi*4 + 0x52cu));
/* e84aa6: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e84aaa: mov dword ptr [eax + 0x34], esi */
  W32((uint32_t)(eax + 0x34u), esi);
/* e84aad: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e84ab1: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e84ab7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e84ab8: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* e84abc: mov dword ptr [ecx + 0x54c], eax */
  W32((uint32_t)(ecx + 0x54cu), eax);
/* e84ac2: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e84ac6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e84ac7: xor eax, eax */
  eax = 0;
/* e84ac9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84acb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e84acc: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e84acf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e84ad0: mov esp, ebp */
  esp = ebp;
/* e84ad2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e84ad3: ret 0x90 */
  esp += 148; SPILL(); return;
}

void f_e84ae0(void) {
  LOAD_REGS();
L_e84ae0: /* e84ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e84ae1: mov ebp, esp */
  ebp = esp;
/* e84ae3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* e84ae6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e84ae8: push 0xeacb20 */
  { uint32_t v = 0xeacb20u; esp -= 4; W32(esp, v); }
/* e84aed: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e84af3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84af4: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e84afb: sub esp, 0x1d8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e84b01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e84b02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e84b03: mov ebx, ecx */
  ebx = ecx;
/* e84b05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e84b06: xor edi, edi */
  edi = 0;
/* e84b08: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* e84b0c: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* e84b0f: mov ecx, dword ptr [esi + 0x41e4] */
  ecx = R32((uint32_t)(esi + 0x41e4u));
/* e84b15: mov eax, dword ptr [esi + 0x41e0] */
  eax = R32((uint32_t)(esi + 0x41e0u));
/* e84b1b: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e84b1d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* e84b21: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e84b24: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* e84b28: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* e84b2b: xor edx, edx */
  edx = 0;
/* e84b2d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e84b31: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84b37: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* e84b3b: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* e84b3f: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* e84b43: cmp dword ptr [eax + 0x1a0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84b49: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* e84b4d: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e84b50: cmp dword ptr [eax + 0x194], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x194u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84b56: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e84b5a: mov edx, 1 */
  edx = 0x1u;
/* e84b5f: jne 0xe84b6d */
  if (!zf) goto L_e84b6d;
L_e84b61: /* e84b61: cmp dword ptr [eax + 0x190], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x190u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84b67: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* e84b6b: je 0xe84b71 */
  if (zf) goto L_e84b71;
L_e84b6d: /* e84b6d: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
L_e84b71: /* e84b71: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* e84b74: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84b76: je 0xe84b8d */
  if (zf) goto L_e84b8d;
L_e84b78: /* e84b78: cmp dword ptr [ecx + 0x4c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84b7b: jne 0xe84b8d */
  if (!zf) goto L_e84b8d;
L_e84b7d: /* e84b7d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e84b81: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* e84b85: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* e84b89: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
L_e84b8d: /* e84b8d: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* e84b90: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* e84b94: cmp dword ptr [ebp + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84b97: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e84b9b: je 0xe84bb6 */
  if (zf) goto L_e84bb6;
L_e84b9d: /* e84b9d: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* e84ba3: xor edx, edx */
  edx = 0;
/* e84ba5: cmp dword ptr [ebp + 0x8c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84bab: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e84baf: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e84bb2: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_e84bb6: /* e84bb6: cmp dword ptr [esi + 0x64], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84bb9: je 0xe84bc1 */
  if (zf) goto L_e84bc1;
L_e84bbb: /* e84bbb: mov dword ptr [ecx + 0x40], edi */
  W32((uint32_t)(ecx + 0x40u), edi);
/* e84bbe: mov dword ptr [ecx + 0x44], edi */
  W32((uint32_t)(ecx + 0x44u), edi);
L_e84bc1: /* e84bc1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84bc3: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e84bc6: jne 0xe858b7 */
  if (!zf) goto L_e858b7;
L_e84bcc: /* e84bcc: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e84bd2: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e84bd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84bd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84bda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e84bdc: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e84be2: mov edi, esp */
  edi = esp;
/* e84be4: lea edx, [esp + 0xb4] */
  edx = (uint32_t)(esp + 0xb4u);
/* e84beb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84bec: mov edx, dword ptr [esp + 0xac] */
  edx = R32((uint32_t)(esp + 0xacu));
/* e84bf3: mov ecx, 0x21 */
  ecx = 0x21u;
/* e84bf8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e84bfa: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* e84c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84c02: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* e84c09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84c0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84c0b: mov ecx, ebx */
  ecx = ebx;
/* e84c0d: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe84c12u); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e84c12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84c14: je 0xe86421 */
  if (zf) goto L_e86421;
L_e84c1a: /* e84c1a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e84c1e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e84c21: jne 0xe84c8c */
  if (!zf) goto L_e84c8c;
L_e84c23: /* e84c23: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e84c27: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84c29: je 0xe84c4d */
  if (zf) goto L_e84c4d;
L_e84c2b: /* e84c2b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84c2f: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84c35: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84c3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e84c3e: add edx, 0x38 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e84c41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84c42: mov ecx, ebx */
  ecx = ebx;
/* e84c44: call 0xe87aa0 */
  esp -= 4; W32(esp, 0xe84c49u); SPILL(); f_e87aa0(); if (g_unwind) return; RELOAD();
/* e84c49: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_e84c4d: /* e84c4d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e84c51: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84c53: je 0xe84e85 */
  if (zf) goto L_e84e85;
L_e84c59: /* e84c59: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84c5f: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84c65: mov edx, dword ptr [ecx + 0x1a0] */
  edx = R32((uint32_t)(ecx + 0x1a0u));
/* e84c6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84c6c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e84c70: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e84c77: lea edx, [ecx + eax + 0x38] */
  edx = (uint32_t)(ecx + eax + 0x38u);
/* e84c7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84c7c: mov ecx, ebx */
  ecx = ebx;
/* e84c7e: call 0xe87a30 */
  esp -= 4; W32(esp, 0xe84c83u); SPILL(); f_e87a30(); if (g_unwind) return; RELOAD();
/* e84c83: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e84c87: jmp 0xe84e85 */
  goto L_e84e85;
L_e84c8c: /* e84c8c: cmp eax, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e84c90: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e84c94: jge 0xe84cf1 */
  if ((sf == of)) goto L_e84cf1;
L_e84c96: /* e84c96: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84c98: je 0xe84ca4 */
  if (zf) goto L_e84ca4;
L_e84c9a: /* e84c9a: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* e84c9e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84ca0: jne 0xe84d01 */
  if (!zf) goto L_e84d01;
L_e84ca2: /* e84ca2: jmp 0xe84c59 */
  goto L_e84c59;
L_e84ca4: /* e84ca4: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e84ca8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84caa: je 0xe84e85 */
  if (zf) goto L_e84e85;
L_e84cb0: /* e84cb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84cb2: je 0xe84e85 */
  if (zf) goto L_e84e85;
L_e84cb8: /* e84cb8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e84cbb: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84cc1: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* e84cc4: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84cca: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e84ccd: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e84cd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84cd1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e84cd5: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e84cdc: lea edx, [ecx + eax + 0x38] */
  edx = (uint32_t)(ecx + eax + 0x38u);
/* e84ce0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84ce1: mov ecx, ebx */
  ecx = ebx;
/* e84ce3: call 0xe87b40 */
  esp -= 4; W32(esp, 0xe84ce8u); SPILL(); f_e87b40(); if (g_unwind) return; RELOAD();
/* e84ce8: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e84cec: jmp 0xe84e85 */
  goto L_e84e85;
L_e84cf1: /* e84cf1: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* e84cf5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84cf7: jne 0xe84d01 */
  if (!zf) goto L_e84d01;
L_e84cf9: /* e84cf9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84cfb: je 0xe84e85 */
  if (zf) goto L_e84e85;
L_e84d01: /* e84d01: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e84d05: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84d0b: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e84d12: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* e84d15: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84d19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e84d1a: lea edx, [ebx + 0x2b010] */
  edx = (uint32_t)(ebx + 0x2b010u);
/* e84d20: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* e84d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84d25: lea ecx, [ebx + 0x2b470] */
  ecx = (uint32_t)(ebx + 0x2b470u);
/* e84d2b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e84d33: call 0xe8b370 */
  esp -= 4; W32(esp, 0xe84d38u); SPILL(); f_e8b370(); if (g_unwind) return; RELOAD();
/* e84d38: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84d3e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e84d42: mov dword ptr [ecx + edx*4 + 0x52c], eax */
  W32((uint32_t)(ecx + edx*4 + 0x52cu), eax);
/* e84d49: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84d4f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84d53: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84d5a: mov dword ptr [edx + 0x14], 0 */
  W32((uint32_t)(edx + 0x14u), 0x0u);
/* e84d61: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e84d65: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84d6b: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e84d71: mov ecx, dword ptr [eax + 0x1a0] */
  ecx = R32((uint32_t)(eax + 0x1a0u));
/* e84d77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e84d78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84d79: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e84d7d: mov eax, dword ptr [eax + ecx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84d84: lea ecx, [eax + edx + 0x38] */
  ecx = (uint32_t)(eax + edx + 0x38u);
/* e84d88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84d89: mov ecx, ebx */
  ecx = ebx;
/* e84d8b: call 0xe87bd0 */
  esp -= 4; W32(esp, 0xe84d90u); SPILL(); f_e87bd0(); if (g_unwind) return; RELOAD();
/* e84d90: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e84d94: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e84d95: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84d97: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e84d9b: je 0xe84ddc */
  if (zf) goto L_e84ddc;
L_e84d9d: /* e84d9d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84d9f: jne 0xe84ddc */
  if (!zf) goto L_e84ddc;
L_e84da1: /* e84da1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e84da4: test byte ptr [edx + 0x5c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x5cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e84da8: jne 0xe84ddc */
  if (!zf) goto L_e84ddc;
L_e84daa: /* e84daa: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84db0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84db4: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84dbb: mov dword ptr [edx + 0x24], 9 */
  W32((uint32_t)(edx + 0x24u), 0x9u);
/* e84dc2: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84dc8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84dcc: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84dd3: mov dword ptr [edx + 0x28], 1 */
  W32((uint32_t)(edx + 0x28u), 0x1u);
/* e84dda: jmp 0xe84e50 */
  goto L_e84e50;
L_e84ddc: /* e84ddc: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84de2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84de6: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84ded: mov dword ptr [edx + 0x24], 9 */
  W32((uint32_t)(edx + 0x24u), 0x9u);
/* e84df4: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84dfa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84dfe: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84e05: mov dword ptr [edx + 0x28], 3 */
  W32((uint32_t)(edx + 0x28u), 0x3u);
/* e84e0c: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84e12: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84e16: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84e1d: mov byte ptr [esp + 0x20], 0x7f */
  W8((uint32_t)(esp + 0x20u), 0x7fu);
/* e84e22: mov byte ptr [esp + 0x21], 0x7f */
  W8((uint32_t)(esp + 0x21u), 0x7fu);
/* e84e27: mov byte ptr [esp + 0x22], 0x7f */
  W8((uint32_t)(esp + 0x22u), 0x7fu);
/* e84e2c: mov byte ptr [esp + 0x23], 0 */
  W8((uint32_t)(esp + 0x23u), 0x0u);
/* e84e31: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e84e35: mov dword ptr [edx + 0x30], eax */
  W32((uint32_t)(edx + 0x30u), eax);
/* e84e38: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84e3e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e84e42: mov eax, dword ptr [ecx + edx*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e84e49: mov dword ptr [eax + 0x2c], 1 */
  W32((uint32_t)(eax + 0x2cu), 0x1u);
L_e84e50: /* e84e50: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e84e53: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* e84e56: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84e5a: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84e60: mov eax, dword ptr [eax + ecx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e84e67: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e84e6a: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* e84e6d: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84e73: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e84e77: mov eax, dword ptr [ecx + edx*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e84e7e: mov dword ptr [eax + 4], 1 */
  W32((uint32_t)(eax + 0x4u), 0x1u);
L_e84e85: /* e84e85: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e84e89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84e8b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e84e93: jne 0xe84ff5 */
  if (!zf) goto L_e84ff5;
L_e84e99: /* e84e99: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e84e9c: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* e84e9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84ea1: je 0xe84ff5 */
  if (zf) goto L_e84ff5;
L_e84ea7: /* e84ea7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e84ea9: lea edx, [esp + 0xd4] */
  edx = (uint32_t)(esp + 0xd4u);
/* e84eb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84eb1: mov ecx, 0x21 */
  ecx = 0x21u;
/* e84eb6: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e84eb9: lea edi, [esp + 0xd8] */
  edi = (uint32_t)(esp + 0xd8u);
/* e84ec0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e84ec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84ec3: mov ecx, 0x21 */
  ecx = 0x21u;
/* e84ec8: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e84ecb: lea edi, [esp + 0x54] */
  edi = (uint32_t)(esp + 0x54u);
/* e84ecf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e84ed0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e84ed2: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe84ed7u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e84ed7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e84eda: mov edx, dword ptr [ecx + 0x4c] */
  edx = R32((uint32_t)(ecx + 0x4cu));
/* e84edd: mov edi, eax */
  edi = eax;
/* e84edf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e84ee1: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* e84ee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84ee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84ee7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e84ee8: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe84eedu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e84eed: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e84ef1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e84ef4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84ef6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e84efa: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e84efe: jne 0xe8502d */
  if (!zf) goto L_e8502d;
L_e84f04: /* e84f04: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e84f08: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* e84f09: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e84f0b: jge 0xe8502d */
  if ((sf == of)) goto L_e8502d;
L_e84f11: /* e84f11: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84f13: je 0xe8502d */
  if (zf) goto L_e8502d;
L_e84f19: /* e84f19: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e84f1d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84f1f: je 0xe8502d */
  if (zf) goto L_e8502d;
L_e84f25: /* e84f25: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84f2b: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84f31: mov ecx, dword ptr [ecx + 0x52c] */
  ecx = R32((uint32_t)(ecx + 0x52cu));
/* e84f37: lea esi, [ecx + eax + 0x38] */
  esi = (uint32_t)(ecx + eax + 0x38u);
/* e84f3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84f3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e84f3d: mov ecx, ebx */
  ecx = ebx;
/* e84f3f: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe84f44u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e84f44: mov ecx, 2 */
  ecx = 0x2u;
/* e84f49: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* e84f4c: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* e84f4f: mov eax, 1 */
  eax = 0x1u;
/* e84f54: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* e84f57: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e84f5a: mov dword ptr [esi + 0x14], 3 */
  W32((uint32_t)(esi + 0x14u), 0x3u);
/* e84f61: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e84f65: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e84f6b: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e84f71: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* e84f75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e84f76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e84f7a: mov eax, dword ptr [eax + edx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e84f81: lea ecx, [eax + ecx + 0x38] */
  ecx = (uint32_t)(eax + ecx + 0x38u);
/* e84f85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84f86: mov ecx, ebx */
  ecx = ebx;
/* e84f88: call 0xe88140 */
  esp -= 4; W32(esp, 0xe84f8du); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e84f8d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e84f91: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e84f95: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84f9b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e84f9c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e84fa0: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84fa6: mov edx, dword ptr [edx + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e84fad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e84fae: lea eax, [edx + eax + 0x38] */
  eax = (uint32_t)(edx + eax + 0x38u);
/* e84fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84fb3: mov ecx, ebx */
  ecx = ebx;
/* e84fb5: call 0xe88020 */
  esp -= 4; W32(esp, 0xe84fbau); SPILL(); f_e88020(); if (g_unwind) return; RELOAD();
/* e84fba: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e84fbe: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e84fc4: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e84fca: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* e84fd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e84fd2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e84fd6: mov edx, dword ptr [edx + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e84fdd: lea eax, [edx + eax + 0x38] */
  eax = (uint32_t)(edx + eax + 0x38u);
/* e84fe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e84fe2: mov ecx, ebx */
  ecx = ebx;
/* e84fe4: call 0xe88140 */
  esp -= 4; W32(esp, 0xe84fe9u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e84fe9: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e84fed: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
L_e84ff5: /* e84ff5: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* e84ff8: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* e84ffb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e84ffd: je 0xe85359 */
  if (zf) goto L_e85359;
L_e85003: /* e85003: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85009: mov eax, dword ptr [edx + 0x18c] */
  eax = R32((uint32_t)(edx + 0x18cu));
/* e8500f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85011: je 0xe85359 */
  if (zf) goto L_e85359;
L_e85017: /* e85017: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e8501a: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* e8501d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8501f: je 0xe852ce */
  if (zf) goto L_e852ce;
L_e85025: /* e85025: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* e85028: jmp 0xe852ea */
  goto L_e852ea;
L_e8502d: /* e8502d: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85033: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8503a: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* e8503d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85041: lea edx, [ebx + 0x2b010] */
  edx = (uint32_t)(ebx + 0x2b010u);
/* e85047: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e85048: xor esi, esi */
  esi = 0;
/* e8504a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8504b: lea ecx, [ebx + 0x2b470] */
  ecx = (uint32_t)(ebx + 0x2b470u);
/* e85051: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e85055: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* e85059: call 0xe8b370 */
  esp -= 4; W32(esp, 0xe8505eu); SPILL(); f_e8b370(); if (g_unwind) return; RELOAD();
/* e8505e: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85064: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e85068: mov dword ptr [ecx + edx*4 + 0x52c], eax */
  W32((uint32_t)(ecx + edx*4 + 0x52cu), eax);
/* e8506f: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e85075: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85079: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85080: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e85083: mov dword ptr [edx + 0x14], esi */
  W32((uint32_t)(edx + 0x14u), esi);
/* e85086: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* e85089: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8508d: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85093: mov edx, dword ptr [edx + eax*4 + 0x52c] */
  edx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e8509a: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e850a0: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e850a3: mov dword ptr [edx + 0x18], ecx */
  W32((uint32_t)(edx + 0x18u), ecx);
/* e850a6: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e850ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e850ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e850ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e850af: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e850b5: mov edi, esp */
  edi = esp;
/* e850b7: lea edx, [esp + 0xb4] */
  edx = (uint32_t)(esp + 0xb4u);
/* e850be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e850bf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e850c2: mov ecx, 0x21 */
  ecx = 0x21u;
/* e850c7: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e850ca: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e850cc: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* e850d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e850d4: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* e850d7: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* e850de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e850df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e850e0: mov ecx, ebx */
  ecx = ebx;
/* e850e2: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe850e7u); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e850e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e850e9: je 0xe86421 */
  if (zf) goto L_e86421;
L_e850ef: /* e850ef: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e850f2: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* e850f5: cmp ecx, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e850f8: jne 0xe85147 */
  if (!zf) goto L_e85147;
L_e850fa: /* e850fa: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85100: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85104: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e8510b: mov dword ptr [ecx + 0x24], 5 */
  W32((uint32_t)(ecx + 0x24u), 0x5u);
/* e85112: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85118: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8511c: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e85123: mov dword ptr [ecx + 0x28], 6 */
  W32((uint32_t)(ecx + 0x28u), 0x6u);
/* e8512a: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85130: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85134: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e8513b: mov dword ptr [ecx + 4], 1 */
  W32((uint32_t)(ecx + 0x4u), 0x1u);
/* e85142: jmp 0xe84ff5 */
  goto L_e84ff5;
L_e85147: /* e85147: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8514b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8514d: je 0xe85290 */
  if (zf) goto L_e85290;
L_e85153: /* e85153: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85157: cmp eax, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8515b: jge 0xe85220 */
  if ((sf == of)) goto L_e85220;
L_e85161: /* e85161: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e85165: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8516b: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85171: mov edx, dword ptr [edx + esi*4 + 0x52c] */
  edx = R32((uint32_t)(edx + esi*4 + 0x52cu));
/* e85178: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85179: lea esi, [edx + eax + 0x38] */
  esi = (uint32_t)(edx + eax + 0x38u);
/* e8517d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8517e: mov ecx, ebx */
  ecx = ebx;
/* e85180: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe85185u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e85185: mov eax, 2 */
  eax = 0x2u;
/* e8518a: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e8518d: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e85190: mov dword ptr [esi + 0x14], 3 */
  W32((uint32_t)(esi + 0x14u), 0x3u);
/* e85197: mov edi, 1 */
  edi = 0x1u;
/* e8519c: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* e8519f: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* e851a2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e851a6: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e851ac: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e851b2: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* e851b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e851b7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e851bb: mov ecx, dword ptr [ecx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e851c2: lea edx, [ecx + edx + 0x38] */
  edx = (uint32_t)(ecx + edx + 0x38u);
/* e851c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e851c7: mov ecx, ebx */
  ecx = ebx;
/* e851c9: call 0xe88140 */
  esp -= 4; W32(esp, 0xe851ceu); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e851ce: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e851d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e851d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e851d7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e851db: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e851e1: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e851e8: mov dword ptr [edx + 0x24], 5 */
  W32((uint32_t)(edx + 0x24u), 0x5u);
/* e851ef: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e851f5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e851f9: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85200: mov dword ptr [edx + 0x28], 6 */
  W32((uint32_t)(edx + 0x28u), 0x6u);
/* e85207: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e8520d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85211: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85218: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8521b: jmp 0xe84ff5 */
  goto L_e84ff5;
L_e85220: /* e85220: mov esi, dword ptr [ebp + 0x90] */
  esi = R32((uint32_t)(ebp + 0x90u));
/* e85226: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85228: je 0xe85267 */
  if (zf) goto L_e85267;
L_e8522a: /* e8522a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8522b: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* e8522f: push 0xeaf430 */
  { uint32_t v = 0xeaf430u; esp -= 4; W32(esp, v); }
/* e85234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85235: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe8523bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e8523b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8523e: mov dword ptr [esp + 0x1ec], 0 */
  W32((uint32_t)(esp + 0x1ecu), 0x0u);
L_e85249: /* e85249: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8524a: mov ecx, esi */
  ecx = esi;
/* e8524c: call dword ptr [0xeae0d4] */
  esp -= 4; W32(esp, 0xe85252u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* e85252: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* e85256: mov dword ptr [esp + 0x1ec], 0xffffffff */
  W32((uint32_t)(esp + 0x1ecu), 0xffffffffu);
/* e85261: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe85267u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e85267: /* e85267: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e8526d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8526f: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85275: /* e85275: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* e85277: xor eax, eax */
  eax = 0;
/* e85279: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e85280: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e85287: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e85288: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e85289: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8528a: mov esp, ebp */
  esp = ebp;
/* e8528c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8528d: ret 0x90 */
  esp += 148; SPILL(); return;
L_e85290: /* e85290: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85296: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85298: je 0xe852a5 */
  if (zf) goto L_e852a5;
L_e8529a: /* e8529a: push 0xeaf3d0 */
  { uint32_t v = 0xeaf3d0u; esp -= 4; W32(esp, v); }
L_e8529f: /* e8529f: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe852a5u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e852a5: /* e852a5: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e852ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e852ad: je 0xe86421 */
  if (zf) goto L_e86421;
L_e852b3: /* e852b3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* e852b5: xor eax, eax */
  eax = 0;
/* e852b7: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e852be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e852c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e852c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e852c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e852c8: mov esp, ebp */
  esp = ebp;
/* e852ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e852cb: ret 0x90 */
  esp += 148; SPILL(); return;
L_e852ce: /* e852ce: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e852d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e852d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e852d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e852d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e852d8: call 0xe89280 */
  esp -= 4; W32(esp, 0xe852ddu); SPILL(); f_e89280(); if (g_unwind) return; RELOAD();
/* e852dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e852e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e852e2: je 0xe85359 */
  if (zf) goto L_e85359;
L_e852e4: /* e852e4: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* e852e7: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
L_e852ea: /* e852ea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e852ec: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e852f0: je 0xe85359 */
  if (zf) goto L_e85359;
L_e852f2: /* e852f2: mov ecx, 0x21 */
  ecx = 0x21u;
/* e852f7: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e852fa: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* e852fe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85300: mov ecx, eax */
  ecx = eax;
/* e85302: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85303: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* e85307: call 0xe82640 */
  esp -= 4; W32(esp, 0xe8530cu); SPILL(); f_e82640(); if (g_unwind) return; RELOAD();
/* e8530c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8530e: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* e85312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85313: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85314: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e85315: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8531au); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8531a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8531d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8531f: je 0xe85359 */
  if (zf) goto L_e85359;
L_e85321: /* e85321: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85323: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e85329: mov edi, esp */
  edi = esp;
/* e8532b: mov ecx, 0x21 */
  ecx = 0x21u;
/* e85330: lea esi, [esp + 0xd0] */
  esi = (uint32_t)(esp + 0xd0u);
/* e85337: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85339: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* e85340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85341: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e85348: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85349: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e85350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85352: mov ecx, ebx */
  ecx = ebx;
/* e85354: call 0xe8b3e0 */
  esp -= 4; W32(esp, 0xe85359u); SPILL(); f_e8b3e0(); if (g_unwind) return; RELOAD();
L_e85359: /* e85359: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e8535c: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* e8535f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85361: je 0xe8570c */
  if (zf) goto L_e8570c;
L_e85367: /* e85367: mov ecx, 0x21 */
  ecx = 0x21u;
/* e8536c: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e8536f: lea edi, [esp + 0xd0] */
  edi = (uint32_t)(esp + 0xd0u);
/* e85376: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85378: mov ecx, 0x21 */
  ecx = 0x21u;
/* e8537d: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e85380: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* e85384: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85386: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85388: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* e8538f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85391: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e85392: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe85397u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e85397: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e8539a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8539c: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* e853a0: mov edi, eax */
  edi = eax;
/* e853a2: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* e853a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e853a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e853a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e853a8: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe853adu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e853ad: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* e853b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e853b2: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* e853b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e853b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e853b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e853b9: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* e853bd: call 0xe887d0 */
  esp -= 4; W32(esp, 0xe853c2u); SPILL(); f_e887d0(); if (g_unwind) return; RELOAD();
/* e853c2: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* e853c6: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e853c9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e853cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e853cf: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e853d3: jne 0xe855bb */
  if (!zf) goto L_e855bb;
L_e853d9: /* e853d9: cmp eax, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e853dd: jge 0xe8540b */
  if ((sf == of)) goto L_e8540b;
L_e853df: /* e853df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e853e1: je 0xe8540b */
  if (zf) goto L_e8540b;
L_e853e3: /* e853e3: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* e853e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e853e8: je 0xe854fd */
  if (zf) goto L_e854fd;
L_e853ee: /* e853ee: cmp ecx, dword ptr [esi + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e853f1: jne 0xe853ff */
  if (!zf) goto L_e853ff;
L_e853f3: /* e853f3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e853f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e853f9: je 0xe854fd */
  if (zf) goto L_e854fd;
L_e853ff: /* e853ff: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e85403: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85405: jne 0xe85505 */
  if (!zf) goto L_e85505;
L_e8540b: /* e8540b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e8540f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e85410: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e85412: jge 0xe855bb */
  if ((sf == of)) goto L_e855bb;
L_e85418: /* e85418: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8541a: je 0xe855bb */
  if (zf) goto L_e855bb;
L_e85420: /* e85420: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e85424: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85426: je 0xe855bb */
  if (zf) goto L_e855bb;
L_e8542c: /* e8542c: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85432: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e85438: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e8543e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8543f: lea esi, [edx + eax + 0x38] */
  esi = (uint32_t)(edx + eax + 0x38u);
/* e85443: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e85444: mov ecx, ebx */
  ecx = ebx;
/* e85446: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8544bu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8544b: mov eax, 2 */
  eax = 0x2u;
/* e85450: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e85453: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e85456: mov ecx, 1 */
  ecx = 0x1u;
/* e8545b: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* e8545e: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* e85461: mov dword ptr [esi + 0x14], 3 */
  W32((uint32_t)(esi + 0x14u), 0x3u);
/* e85468: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e8546c: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85472: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e85478: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* e8547c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8547d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85481: mov ecx, dword ptr [ecx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e85488: lea edx, [ecx + edx + 0x38] */
  edx = (uint32_t)(ecx + edx + 0x38u);
/* e8548c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8548d: mov ecx, ebx */
  ecx = ebx;
/* e8548f: call 0xe88140 */
  esp -= 4; W32(esp, 0xe85494u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e85494: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85498: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8549c: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e854a2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e854a3: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e854a7: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e854ad: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e854b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e854b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e854b8: lea edx, [ecx + eax + 0x38] */
  edx = (uint32_t)(ecx + eax + 0x38u);
/* e854bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e854bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e854be: mov ecx, ebx */
  ecx = ebx;
/* e854c0: call 0xe88060 */
  esp -= 4; W32(esp, 0xe854c5u); SPILL(); f_e88060(); if (g_unwind) return; RELOAD();
/* e854c5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e854c9: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e854cf: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e854d5: lea eax, [esp + 0xd0] */
  eax = (uint32_t)(esp + 0xd0u);
/* e854dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e854dd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e854e1: mov ecx, dword ptr [ecx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e854e8: lea edx, [ecx + edx + 0x38] */
  edx = (uint32_t)(ecx + edx + 0x38u);
/* e854ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_e854ed: /* e854ed: mov ecx, ebx */
  ecx = ebx;
/* e854ef: call 0xe88140 */
  esp -= 4; W32(esp, 0xe854f4u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e854f4: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e854f8: jmp 0xe8570c */
  goto L_e8570c;
L_e854fd: /* e854fd: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e85501: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85503: je 0xe8555a */
  if (zf) goto L_e8555a;
L_e85505: /* e85505: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* e85508: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* e8550b: mov ecx, dword ptr [edx + 0xb0] */
  ecx = R32((uint32_t)(edx + 0xb0u));
/* e85511: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* e85517: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e85519: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8551a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* e8551e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8551f: mov ecx, esi */
  ecx = esi;
/* e85521: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe85527u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e85527: mov al, byte ptr [eax + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3u))) & 0xffu);
/* e8552a: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85530: mov byte ptr [esp + 0x18], al */
  W8((uint32_t)(esp + 0x18u), (eax & 0xffu));
/* e85534: mov byte ptr [esp + 0x19], al */
  W8((uint32_t)(esp + 0x19u), (eax & 0xffu));
/* e85538: mov byte ptr [esp + 0x1a], al */
  W8((uint32_t)(esp + 0x1au), (eax & 0xffu));
/* e8553c: mov byte ptr [esp + 0x1b], al */
  W8((uint32_t)(esp + 0x1bu), (eax & 0xffu));
/* e85540: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85544: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e8554b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e8554f: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* e85552: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85556: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_e8555a: /* e8555a: xor ecx, ecx */
  ecx = 0;
/* e8555c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8555e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e85561: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e85564: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85565: xor ecx, ecx */
  ecx = 0;
/* e85567: cmp dword ptr [esi + 0x44], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8556a: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8556d: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e85573: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85574: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e8557a: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e85581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e85582: lea eax, [edx + eax + 0x38] */
  eax = (uint32_t)(edx + eax + 0x38u);
/* e85586: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85587: mov ecx, ebx */
  ecx = ebx;
/* e85589: call 0xe88060 */
  esp -= 4; W32(esp, 0xe8558eu); SPILL(); f_e88060(); if (g_unwind) return; RELOAD();
/* e8558e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85592: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85598: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8559e: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* e855a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e855a6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e855aa: mov edx, dword ptr [edx + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e855b1: lea eax, [edx + eax + 0x38] */
  eax = (uint32_t)(edx + eax + 0x38u);
/* e855b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e855b6: jmp 0xe854ed */
  goto L_e854ed;
L_e855bb: /* e855bb: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e855c1: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e855c8: mov dword ptr [edx + 0x34], eax */
  W32((uint32_t)(edx + 0x34u), eax);
/* e855cb: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* e855cf: lea eax, [ebx + 0x2b010] */
  eax = (uint32_t)(ebx + 0x2b010u);
/* e855d5: xor esi, esi */
  esi = 0;
/* e855d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e855d8: lea ecx, [ebx + 0x2b470] */
  ecx = (uint32_t)(ebx + 0x2b470u);
/* e855de: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* e855e2: call 0xe8b370 */
  esp -= 4; W32(esp, 0xe855e7u); SPILL(); f_e8b370(); if (g_unwind) return; RELOAD();
/* e855e7: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e855ed: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e855f1: mov dword ptr [ecx + edx*4 + 0x52c], eax */
  W32((uint32_t)(ecx + edx*4 + 0x52cu), eax);
/* e855f8: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e855fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85602: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85609: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e8560c: mov dword ptr [edx + 0x14], esi */
  W32((uint32_t)(edx + 0x14u), esi);
/* e8560f: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* e85612: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85616: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e8561c: mov edx, dword ptr [edx + eax*4 + 0x52c] */
  edx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e85623: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e85629: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8562c: mov dword ptr [edx + 0x18], ecx */
  W32((uint32_t)(edx + 0x18u), ecx);
/* e8562f: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85635: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85636: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85637: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e85638: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8563e: mov edi, esp */
  edi = esp;
/* e85640: lea edx, [esp + 0xb4] */
  edx = (uint32_t)(esp + 0xb4u);
/* e85647: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85648: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e8564b: mov ecx, 0x21 */
  ecx = 0x21u;
/* e85650: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e85653: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85655: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* e8565c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8565d: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* e85660: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* e85667: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85669: mov ecx, ebx */
  ecx = ebx;
/* e8566b: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe85670u); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e85670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85672: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85678: /* e85678: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e8567b: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* e8567e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85680: jne 0xe8572e */
  if (!zf) goto L_e8572e;
L_e85686: /* e85686: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8568a: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85690: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e85697: mov eax, 2 */
  eax = 0x2u;
/* e8569c: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* e8569f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e856a3: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e856a9: mov edx, dword ptr [edx + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e856b0: mov dword ptr [edx + 0x28], eax */
  W32((uint32_t)(edx + 0x28u), eax);
/* e856b3: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e856b9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e856bd: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e856c4: mov eax, 1 */
  eax = 0x1u;
/* e856c9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* e856cc: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e856d2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e856d6: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e856dd: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
L_e856e0: /* e856e0: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e856e6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e856ea: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e856f1: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* e856f6: mov byte ptr [esp + 0x19], 0 */
  W8((uint32_t)(esp + 0x19u), 0x0u);
/* e856fb: mov byte ptr [esp + 0x1a], 0 */
  W8((uint32_t)(esp + 0x1au), 0x0u);
/* e85700: mov byte ptr [esp + 0x1b], 0 */
  W8((uint32_t)(esp + 0x1bu), 0x0u);
/* e85705: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e85709: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
L_e8570c: /* e8570c: mov esi, 1 */
  esi = 0x1u;
L_e85711: /* e85711: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e85714: xor edi, edi */
  edi = 0;
/* e85716: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e85718: je 0xe8643a */
  if (zf) goto L_e8643a;
L_e8571e: /* e8571e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* e85721: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85722: mov ecx, ebx */
  ecx = ebx;
/* e85724: call 0xe87d20 */
  esp -= 4; W32(esp, 0xe85729u); SPILL(); f_e87d20(); if (g_unwind) return; RELOAD();
/* e85729: jmp 0xe866f8 */
  goto L_e866f8;
L_e8572e: /* e8572e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e85732: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85734: je 0xe8574e */
  if (zf) goto L_e8574e;
L_e85736: /* e85736: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e8573c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8573e: je 0xe852a5 */
  if (zf) goto L_e852a5;
L_e85744: /* e85744: push 0xeaf360 */
  { uint32_t v = 0xeaf360u; esp -= 4; W32(esp, v); }
/* e85749: jmp 0xe8529f */
  goto L_e8529f;
L_e8574e: /* e8574e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e85752: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85754: je 0xe85899 */
  if (zf) goto L_e85899;
L_e8575a: /* e8575a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8575e: cmp eax, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e85762: jge 0xe85867 */
  if ((sf == of)) goto L_e85867;
L_e85768: /* e85768: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e8576c: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e85772: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85778: mov edx, dword ptr [edx + esi*4 + 0x52c] */
  edx = R32((uint32_t)(edx + esi*4 + 0x52cu));
/* e8577f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85780: lea esi, [edx + eax + 0x38] */
  esi = (uint32_t)(edx + eax + 0x38u);
/* e85784: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e85785: mov ecx, ebx */
  ecx = ebx;
/* e85787: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8578cu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8578c: mov eax, 2 */
  eax = 0x2u;
/* e85791: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e85794: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e85797: mov dword ptr [esi + 0x14], 3 */
  W32((uint32_t)(esi + 0x14u), 0x3u);
/* e8579e: mov edi, 1 */
  edi = 0x1u;
/* e857a3: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* e857a6: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* e857a9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e857ad: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e857b3: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e857b9: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* e857bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e857be: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e857c2: mov ecx, dword ptr [ecx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e857c9: lea edx, [ecx + edx + 0x38] */
  edx = (uint32_t)(ecx + edx + 0x38u);
/* e857cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e857ce: mov ecx, ebx */
  ecx = ebx;
/* e857d0: call 0xe88140 */
  esp -= 4; W32(esp, 0xe857d5u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e857d5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e857d9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e857dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e857de: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e857e2: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e857e8: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e857ef: mov dword ptr [edx + 0x24], 5 */
  W32((uint32_t)(edx + 0x24u), 0x5u);
/* e857f6: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e857fc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85800: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85807: mov dword ptr [edx + 0x28], 2 */
  W32((uint32_t)(edx + 0x28u), 0x2u);
/* e8580e: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e85814: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85818: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e8581f: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e85822: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e85828: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8582c: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85833: mov dword ptr [edx + 0x2c], edi */
  W32((uint32_t)(edx + 0x2cu), edi);
/* e85836: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e8583c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85840: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85847: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* e8584c: mov byte ptr [esp + 0x19], 0 */
  W8((uint32_t)(esp + 0x19u), 0x0u);
/* e85851: mov byte ptr [esp + 0x1a], 0 */
  W8((uint32_t)(esp + 0x1au), 0x0u);
/* e85856: mov byte ptr [esp + 0x1b], 0 */
  W8((uint32_t)(esp + 0x1bu), 0x0u);
/* e8585b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e8585f: mov dword ptr [edx + 0x30], eax */
  W32((uint32_t)(edx + 0x30u), eax);
/* e85862: jmp 0xe8570c */
  goto L_e8570c;
L_e85867: /* e85867: mov esi, dword ptr [ebp + 0x90] */
  esi = R32((uint32_t)(ebp + 0x90u));
/* e8586d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8586f: je 0xe85267 */
  if (zf) goto L_e85267;
L_e85875: /* e85875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85876: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* e8587a: push 0xeaf2d0 */
  { uint32_t v = 0xeaf2d0u; esp -= 4; W32(esp, v); }
/* e8587f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85880: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe85886u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e85886: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e85889: mov dword ptr [esp + 0x1ec], 1 */
  W32((uint32_t)(esp + 0x1ecu), 0x1u);
/* e85894: jmp 0xe85249 */
  goto L_e85249;
L_e85899: /* e85899: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e8589f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e858a1: je 0xe85267 */
  if (zf) goto L_e85267;
L_e858a7: /* e858a7: push 0xeaf280 */
  { uint32_t v = 0xeaf280u; esp -= 4; W32(esp, v); }
/* e858ac: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe858b2u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* e858b2: jmp 0xe85267 */
  goto L_e85267;
L_e858b7: /* e858b7: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* e858bd: mov eax, dword ptr [ebp + 0x90] */
  eax = R32((uint32_t)(ebp + 0x90u));
/* e858c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e858c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e858c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e858c7: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e858cd: mov edi, esp */
  edi = esp;
/* e858cf: mov ecx, 0x21 */
  ecx = 0x21u;
/* e858d4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e858d6: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* e858dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e858de: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* e858e5: lea edx, [esp + 0xa8] */
  edx = (uint32_t)(esp + 0xa8u);
/* e858ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e858ed: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* e858f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e858f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e858f6: mov ecx, ebx */
  ecx = ebx;
/* e858f8: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe858fdu); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e858fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e858ff: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85905: /* e85905: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* e85909: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8590b: mov esi, 1 */
  esi = 0x1u;
/* e85910: je 0xe8593c */
  if (zf) goto L_e8593c;
L_e85912: /* e85912: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85916: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e85918: jne 0xe859aa */
  if (!zf) goto L_e859aa;
L_e8591e: /* e8591e: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85924: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85928: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e8592f: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e85932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85934: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85935: mov ecx, ebx */
  ecx = ebx;
/* e85937: call 0xe87aa0 */
  esp -= 4; W32(esp, 0xe8593cu); SPILL(); f_e87aa0(); if (g_unwind) return; RELOAD();
L_e8593c: /* e8593c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e85940: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85942: je 0xe85988 */
  if (zf) goto L_e85988;
L_e85944: /* e85944: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e85948: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e8594c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e85950: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e85952: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e85954: jge 0xe85a43 */
  if ((sf == of)) goto L_e85a43;
L_e8595a: /* e8595a: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e85960: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e85966: mov edx, dword ptr [eax + 0x1a0] */
  edx = R32((uint32_t)(eax + 0x1a0u));
/* e8596c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8596d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e85971: mov eax, dword ptr [eax + edx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e85978: lea ecx, [eax + ecx + 0x38] */
  ecx = (uint32_t)(eax + ecx + 0x38u);
/* e8597c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8597d: mov ecx, ebx */
  ecx = ebx;
/* e8597f: call 0xe87a30 */
  esp -= 4; W32(esp, 0xe85984u); SPILL(); f_e87a30(); if (g_unwind) return; RELOAD();
/* e85984: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
L_e85988: /* e85988: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* e8598c: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e85990: je 0xe85b46 */
  if (zf) goto L_e85b46;
L_e85996: /* e85996: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e8599a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8599c: je 0xe85a84 */
  if (zf) goto L_e85a84;
L_e859a2: /* e859a2: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* e859a5: jmp 0xe85a90 */
  goto L_e85a90;
L_e859aa: /* e859aa: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* e859ae: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e859b2: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* e859b5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e859b7: jge 0xe85a02 */
  if ((sf == of)) goto L_e85a02;
L_e859b9: /* e859b9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e859bc: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e859c2: mov ecx, dword ptr [edx + 0x5c] */
  ecx = R32((uint32_t)(edx + 0x5cu));
/* e859c5: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e859cb: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e859ce: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e859d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e859d1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e859d5: mov edx, dword ptr [edx + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e859dc: lea eax, [edx + eax + 0x38] */
  eax = (uint32_t)(edx + eax + 0x38u);
/* e859e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e859e1: mov ecx, ebx */
  ecx = ebx;
/* e859e3: call 0xe87b40 */
  esp -= 4; W32(esp, 0xe859e8u); SPILL(); f_e87b40(); if (g_unwind) return; RELOAD();
/* e859e8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e859ec: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e859ed: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e859ef: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e859f3: je 0xe8593c */
  if (zf) goto L_e8593c;
L_e859f9: /* e859f9: inc dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* e859fd: jmp 0xe8593c */
  goto L_e8593c;
L_e85a02: /* e85a02: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85a08: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85a0a: je 0xe85a17 */
  if (zf) goto L_e85a17;
L_e85a0c: /* e85a0c: push 0xeaf228 */
  { uint32_t v = 0xeaf228u; esp -= 4; W32(esp, v); }
/* e85a11: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe85a17u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e85a17: /* e85a17: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e85a1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85a1f: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85a25: /* e85a25: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e85a28: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e85a2a: xor eax, eax */
  eax = 0;
/* e85a2c: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e85a33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e85a3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e85a3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e85a3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e85a3d: mov esp, ebp */
  esp = ebp;
/* e85a3f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e85a40: ret 0x90 */
  esp += 148; SPILL(); return;
L_e85a43: /* e85a43: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85a49: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85a4b: je 0xe85a58 */
  if (zf) goto L_e85a58;
L_e85a4d: /* e85a4d: push 0xeaf1ec */
  { uint32_t v = 0xeaf1ecu; esp -= 4; W32(esp, v); }
/* e85a52: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe85a58u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e85a58: /* e85a58: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e85a5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85a60: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85a66: /* e85a66: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e85a69: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e85a6b: xor eax, eax */
  eax = 0;
/* e85a6d: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e85a74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e85a7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e85a7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e85a7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e85a7e: mov esp, ebp */
  esp = ebp;
/* e85a80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e85a81: ret 0x90 */
  esp += 148; SPILL(); return;
L_e85a84: /* e85a84: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* e85a8b: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe85a90u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
L_e85a90: /* e85a90: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e85a94: mov esi, eax */
  esi = eax;
/* e85a96: mov ecx, 0x21 */
  ecx = 0x21u;
/* e85a9b: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* e85a9f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85aa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85aa3: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* e85aa7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85aa8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85aa9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e85aaa: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe85aafu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e85aaf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e85ab2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85ab4: je 0xe85c32 */
  if (zf) goto L_e85c32;
L_e85aba: /* e85aba: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e85abe: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e85ac2: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e85ac4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e85ac8: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e85aca: jge 0xe85bf1 */
  if ((sf == of)) goto L_e85bf1;
L_e85ad0: /* e85ad0: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e85ad4: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e85ada: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85ae0: mov edx, dword ptr [edx + esi*4 + 0x52c] */
  edx = R32((uint32_t)(edx + esi*4 + 0x52cu));
/* e85ae7: lea esi, [edx + ecx + 0x38] */
  esi = (uint32_t)(edx + ecx + 0x38u);
/* e85aeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85aec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e85aed: mov ecx, ebx */
  ecx = ebx;
/* e85aef: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe85af4u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e85af4: mov ecx, 2 */
  ecx = 0x2u;
/* e85af9: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* e85afc: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* e85aff: mov eax, 1 */
  eax = 0x1u;
/* e85b04: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* e85b07: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e85b0a: mov dword ptr [esi + 0x14], 3 */
  W32((uint32_t)(esi + 0x14u), 0x3u);
/* e85b11: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e85b15: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85b1b: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e85b21: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* e85b25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85b26: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85b2a: mov ecx, dword ptr [ecx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e85b31: lea edx, [ecx + edx + 0x38] */
  edx = (uint32_t)(ecx + edx + 0x38u);
/* e85b35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85b36: mov ecx, ebx */
  ecx = ebx;
/* e85b38: call 0xe88140 */
  esp -= 4; W32(esp, 0xe85b3du); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
L_e85b3d: /* e85b3d: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e85b41: mov esi, 1 */
  esi = 0x1u;
L_e85b46: /* e85b46: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e85b4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85b4c: jne 0xe860ae */
  if (!zf) goto L_e860ae;
L_e85b52: /* e85b52: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e85b55: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* e85b58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85b5a: je 0xe860ae */
  if (zf) goto L_e860ae;
L_e85b60: /* e85b60: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85b64: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e85b6a: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85b71: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85b75: mov dword ptr [edx + 0x34], eax */
  W32((uint32_t)(edx + 0x34u), eax);
/* e85b78: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85b7c: lea ecx, [ebx + 0x2b010] */
  ecx = (uint32_t)(ebx + 0x2b010u);
/* e85b82: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e85b83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85b84: lea ecx, [ebx + 0x2b470] */
  ecx = (uint32_t)(ebx + 0x2b470u);
/* e85b8a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e85b8e: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e85b96: call 0xe8b370 */
  esp -= 4; W32(esp, 0xe85b9bu); SPILL(); f_e8b370(); if (g_unwind) return; RELOAD();
/* e85b9b: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85ba1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85ba5: mov dword ptr [edx + ecx*4 + 0x52c], eax */
  W32((uint32_t)(edx + ecx*4 + 0x52cu), eax);
/* e85bac: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85bb2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85bb6: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e85bbd: mov dword ptr [ecx + 0x14], 0 */
  W32((uint32_t)(ecx + 0x14u), 0x0u);
/* e85bc4: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* e85bc7: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e85bcd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85bd1: mov eax, dword ptr [eax + ecx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e85bd8: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e85bda: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* e85bdd: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e85be1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85be3: je 0xe85e61 */
  if (zf) goto L_e85e61;
L_e85be9: /* e85be9: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* e85bec: jmp 0xe85e6d */
  goto L_e85e6d;
L_e85bf1: /* e85bf1: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85bf7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85bf9: je 0xe85c06 */
  if (zf) goto L_e85c06;
L_e85bfb: /* e85bfb: push 0xeaf1a8 */
  { uint32_t v = 0xeaf1a8u; esp -= 4; W32(esp, v); }
/* e85c00: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe85c06u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e85c06: /* e85c06: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e85c0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85c0e: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85c14: /* e85c14: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e85c17: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e85c19: xor eax, eax */
  eax = 0;
/* e85c1b: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e85c22: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e85c29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e85c2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e85c2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e85c2c: mov esp, ebp */
  esp = ebp;
/* e85c2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e85c2f: ret 0x90 */
  esp += 148; SPILL(); return;
L_e85c32: /* e85c32: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* e85c36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85c38: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* e85c3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85c3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e85c3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e85c3f: call 0xe887d0 */
  esp -= 4; W32(esp, 0xe85c44u); SPILL(); f_e887d0(); if (g_unwind) return; RELOAD();
/* e85c44: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e85c47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85c49: je 0xe85db8 */
  if (zf) goto L_e85db8;
L_e85c4f: /* e85c4f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e85c53: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e85c57: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e85c59: cmp dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e85c5d: jge 0xe85d77 */
  if ((sf == of)) goto L_e85d77;
L_e85c63: /* e85c63: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* e85c66: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* e85c69: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* e85c6f: mov ecx, dword ptr [ecx + 0x3ac] */
  ecx = R32((uint32_t)(ecx + 0x3acu));
/* e85c75: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e85c77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85c78: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* e85c7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85c7d: mov ecx, eax */
  ecx = eax;
/* e85c7f: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe85c85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e85c85: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85c8b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e85c8f: mov eax, dword ptr [edx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e85c96: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e85c99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85c9b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e85c9f: je 0xe85ce6 */
  if (zf) goto L_e85ce6;
L_e85ca1: /* e85ca1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e85ca3: je 0xe85ce6 */
  if (zf) goto L_e85ce6;
L_e85ca5: /* e85ca5: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85cab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85cad: je 0xe85cba */
  if (zf) goto L_e85cba;
L_e85caf: /* e85caf: push 0xeaec48 */
  { uint32_t v = 0xeaec48u; esp -= 4; W32(esp, v); }
/* e85cb4: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe85cbau); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e85cba: /* e85cba: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e85cc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85cc2: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85cc8: /* e85cc8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e85ccb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e85ccd: xor eax, eax */
  eax = 0;
/* e85ccf: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e85cd6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e85cdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e85cde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e85cdf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e85ce0: mov esp, ebp */
  esp = ebp;
/* e85ce2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e85ce3: ret 0x90 */
  esp += 148; SPILL(); return;
L_e85ce6: /* e85ce6: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* e85ce9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85ced: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e85cf1: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e85cf7: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85cfd: mov edx, dword ptr [edx + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e85d04: mov dword ptr [edx + eax + 0x64], 3 */
  W32((uint32_t)(edx + eax + 0x64u), 0x3u);
/* e85d0c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e85d10: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e85d16: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e85d1c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e85d20: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e85d27: mov eax, 2 */
  eax = 0x2u;
/* e85d2c: mov dword ptr [edx + ecx + 0x50], eax */
  W32((uint32_t)(edx + ecx + 0x50u), eax);
/* e85d30: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e85d34: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e85d38: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e85d3e: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85d44: mov ecx, dword ptr [ecx + esi*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + esi*4 + 0x52cu));
/* e85d4b: mov dword ptr [ecx + edx + 0x58], 1 */
  W32((uint32_t)(ecx + edx + 0x58u), 0x1u);
/* e85d53: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e85d57: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85d5d: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e85d63: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e85d67: mov edx, dword ptr [edx + esi*4 + 0x52c] */
  edx = R32((uint32_t)(edx + esi*4 + 0x52cu));
/* e85d6e: mov dword ptr [edx + ecx + 0x4c], eax */
  W32((uint32_t)(edx + ecx + 0x4cu), eax);
/* e85d72: jmp 0xe85b3d */
  goto L_e85b3d;
L_e85d77: /* e85d77: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85d7d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85d7f: je 0xe85d8c */
  if (zf) goto L_e85d8c;
L_e85d81: /* e85d81: push 0xeaf160 */
  { uint32_t v = 0xeaf160u; esp -= 4; W32(esp, v); }
/* e85d86: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe85d8cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e85d8c: /* e85d8c: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e85d92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85d94: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85d9a: /* e85d9a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e85d9d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e85d9f: xor eax, eax */
  eax = 0;
/* e85da1: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e85da8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e85daf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e85db0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e85db1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e85db2: mov esp, ebp */
  esp = ebp;
/* e85db4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e85db5: ret 0x90 */
  esp += 148; SPILL(); return;
L_e85db8: /* e85db8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85dba: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* e85dbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85dbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e85dc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e85dc1: call 0xe88440 */
  esp -= 4; W32(esp, 0xe85dc6u); SPILL(); f_e88440(); if (g_unwind) return; RELOAD();
/* e85dc6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e85dc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85dcb: je 0xe85e49 */
  if (zf) goto L_e85e49;
L_e85dcd: /* e85dcd: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e85dd1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e85dd5: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e85dd7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e85ddb: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e85ddd: jge 0xe85e08 */
  if ((sf == of)) goto L_e85e08;
L_e85ddf: /* e85ddf: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e85de3: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e85de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85dea: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e85df0: mov eax, dword ptr [eax + edx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e85df7: lea ecx, [eax + ecx + 0x38] */
  ecx = (uint32_t)(eax + ecx + 0x38u);
/* e85dfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85dfc: mov ecx, ebx */
  ecx = ebx;
/* e85dfe: call 0xe87ff0 */
  esp -= 4; W32(esp, 0xe85e03u); SPILL(); f_e87ff0(); if (g_unwind) return; RELOAD();
/* e85e03: jmp 0xe85b3d */
  goto L_e85b3d;
L_e85e08: /* e85e08: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85e0e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85e10: je 0xe85e1d */
  if (zf) goto L_e85e1d;
L_e85e12: /* e85e12: push 0xeaf118 */
  { uint32_t v = 0xeaf118u; esp -= 4; W32(esp, v); }
/* e85e17: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe85e1du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e85e1d: /* e85e1d: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e85e23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85e25: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85e2b: /* e85e2b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e85e2e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e85e30: xor eax, eax */
  eax = 0;
/* e85e32: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e85e39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e85e40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e85e41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e85e42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e85e43: mov esp, ebp */
  esp = ebp;
/* e85e45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e85e46: ret 0x90 */
  esp += 148; SPILL(); return;
L_e85e49: /* e85e49: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85e4f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85e51: je 0xe86415 */
  if (zf) goto L_e86415;
L_e85e57: /* e85e57: push 0xeaf088 */
  { uint32_t v = 0xeaf088u; esp -= 4; W32(esp, v); }
/* e85e5c: jmp 0xe8640f */
  goto L_e8640f;
L_e85e61: /* e85e61: lea ecx, [esp + 0x15c] */
  ecx = (uint32_t)(esp + 0x15cu);
/* e85e68: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe85e6du); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
L_e85e6d: /* e85e6d: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e85e71: mov esi, eax */
  esi = eax;
/* e85e73: mov ecx, 0x21 */
  ecx = 0x21u;
/* e85e78: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* e85e7c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85e7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85e80: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* e85e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85e85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85e86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e85e87: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe85e8cu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e85e8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e85e8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85e91: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e85e95: jne 0xe85ed9 */
  if (!zf) goto L_e85ed9;
L_e85e97: /* e85e97: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e85e9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85e9f: je 0xe85eac */
  if (zf) goto L_e85eac;
L_e85ea1: /* e85ea1: push 0xeaf010 */
  { uint32_t v = 0xeaf010u; esp -= 4; W32(esp, v); }
/* e85ea6: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe85eacu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e85eac: /* e85eac: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e85eb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85eb4: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85eba: /* e85eba: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e85ebe: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e85ec0: xor eax, eax */
  eax = 0;
/* e85ec2: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e85ec9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e85ed0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e85ed1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e85ed2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e85ed3: mov esp, ebp */
  esp = ebp;
/* e85ed5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e85ed6: ret 0x90 */
  esp += 148; SPILL(); return;
L_e85ed9: /* e85ed9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e85edc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85ede: mov ecx, 0x21 */
  ecx = 0x21u;
/* e85ee3: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e85ee6: lea edi, [esp + 0xd4] */
  edi = (uint32_t)(esp + 0xd4u);
/* e85eed: lea edx, [esp + 0xd4] */
  edx = (uint32_t)(esp + 0xd4u);
/* e85ef4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85ef6: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* e85ef9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85efa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85efb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e85efc: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe85f01u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e85f01: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* e85f07: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e85f0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85f0b: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e85f0f: mov eax, dword ptr [ebp + 0x90] */
  eax = R32((uint32_t)(ebp + 0x90u));
/* e85f15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85f16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e85f18: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e85f1e: mov edi, esp */
  edi = esp;
/* e85f20: mov ecx, 0x21 */
  ecx = 0x21u;
/* e85f25: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e85f28: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e85f2a: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* e85f31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85f32: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e85f35: lea edx, [esp + 0xa8] */
  edx = (uint32_t)(esp + 0xa8u);
/* e85f3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85f3d: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* e85f40: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* e85f47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85f48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85f49: mov ecx, ebx */
  ecx = ebx;
/* e85f4b: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe85f50u); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e85f50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85f52: je 0xe86421 */
  if (zf) goto L_e86421;
L_e85f58: /* e85f58: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e85f5c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e85f5e: je 0xe8624d */
  if (zf) goto L_e8624d;
L_e85f64: /* e85f64: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e85f68: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* e85f6b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85f6f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e85f71: jge 0xe861fd */
  if ((sf == of)) goto L_e861fd;
L_e85f77: /* e85f77: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e85f7b: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e85f81: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85f87: mov edx, dword ptr [edx + esi*4 + 0x52c] */
  edx = R32((uint32_t)(edx + esi*4 + 0x52cu));
/* e85f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e85f8f: lea esi, [edx + eax + 0x38] */
  esi = (uint32_t)(edx + eax + 0x38u);
/* e85f93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e85f94: mov ecx, ebx */
  ecx = ebx;
/* e85f96: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe85f9bu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e85f9b: mov eax, 2 */
  eax = 0x2u;
/* e85fa0: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e85fa3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e85fa6: mov dword ptr [esi + 0x14], 3 */
  W32((uint32_t)(esi + 0x14u), 0x3u);
/* e85fad: mov edi, 1 */
  edi = 0x1u;
/* e85fb2: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* e85fb5: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* e85fb8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e85fbc: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85fc2: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e85fc8: lea eax, [esp + 0xd0] */
  eax = (uint32_t)(esp + 0xd0u);
/* e85fcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e85fd0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85fd4: mov ecx, dword ptr [ecx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e85fdb: lea edx, [ecx + edx + 0x38] */
  edx = (uint32_t)(ecx + edx + 0x38u);
/* e85fdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e85fe0: mov ecx, ebx */
  ecx = ebx;
/* e85fe2: call 0xe88140 */
  esp -= 4; W32(esp, 0xe85fe7u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e85fe7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e85feb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e85fef: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e85ff5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e85ff6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e85ffa: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e86000: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e86007: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e8600b: lea esi, [ecx + eax + 0x38] */
  esi = (uint32_t)(ecx + eax + 0x38u);
/* e8600f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e86011: mov ecx, ebx */
  ecx = ebx;
/* e86013: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe86018u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e86018: mov dword ptr [esi + 0x2c], 2 */
  W32((uint32_t)(esi + 0x2cu), 0x2u);
/* e8601f: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* e86022: mov dword ptr [esi + 0x18], 4 */
  W32((uint32_t)(esi + 0x18u), 0x4u);
/* e86029: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* e8602c: mov dword ptr [esi + 0x14], 3 */
  W32((uint32_t)(esi + 0x14u), 0x3u);
/* e86033: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e86037: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e8603d: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e86043: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* e86047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86048: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8604c: mov ecx, dword ptr [ecx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e86053: lea edx, [ecx + edx + 0x38] */
  edx = (uint32_t)(ecx + edx + 0x38u);
/* e86057: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86058: mov ecx, ebx */
  ecx = ebx;
/* e8605a: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8605fu); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8605f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e86063: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e86067: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e86068: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e8606c: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86072: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e86079: mov dword ptr [edx + 0x24], 5 */
  W32((uint32_t)(edx + 0x24u), 0x5u);
/* e86080: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86086: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8608a: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e86091: mov dword ptr [edx + 0x28], 6 */
  W32((uint32_t)(edx + 0x28u), 0x6u);
/* e86098: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e8609e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e860a2: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e860a9: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e860ac: mov esi, edi */
  esi = edi;
L_e860ae: /* e860ae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e860b1: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* e860b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e860b6: je 0xe85711 */
  if (zf) goto L_e85711;
L_e860bc: /* e860bc: mov ecx, 0x21 */
  ecx = 0x21u;
/* e860c1: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e860c4: lea edi, [esp + 0xd0] */
  edi = (uint32_t)(esp + 0xd0u);
/* e860cb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e860cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e860cf: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* e860d6: mov edx, eax */
  edx = eax;
/* e860d8: mov eax, dword ptr [edx + 0x44] */
  eax = R32((uint32_t)(edx + 0x44u));
/* e860db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e860dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e860dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e860de: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe860e3u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e860e3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e860e6: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* e860e9: xor edi, edi */
  edi = 0;
/* e860eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e860ec: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* e860f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e860f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e860f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e860f6: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* e860fa: call 0xe887d0 */
  esp -= 4; W32(esp, 0xe860ffu); SPILL(); f_e887d0(); if (g_unwind) return; RELOAD();
/* e860ff: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e86103: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* e86107: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e8610d: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e86114: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* e86118: mov dword ptr [edx + 0x34], eax */
  W32((uint32_t)(edx + 0x34u), eax);
/* e8611b: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e8611f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e86122: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e86123: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* e86127: lea ecx, [ebx + 0x2b010] */
  ecx = (uint32_t)(ebx + 0x2b010u);
/* e8612d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8612e: lea ecx, [ebx + 0x2b470] */
  ecx = (uint32_t)(ebx + 0x2b470u);
/* e86134: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e86138: call 0xe8b370 */
  esp -= 4; W32(esp, 0xe8613du); SPILL(); f_e8b370(); if (g_unwind) return; RELOAD();
/* e8613d: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86143: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e86147: mov dword ptr [edx + ecx*4 + 0x52c], eax */
  W32((uint32_t)(edx + ecx*4 + 0x52cu), eax);
/* e8614e: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86154: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86158: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e8615f: mov dword ptr [ecx + 0x14], edi */
  W32((uint32_t)(ecx + 0x14u), edi);
/* e86162: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* e86165: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e86169: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e8616f: mov eax, dword ptr [eax + ecx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e86176: mov ecx, dword ptr [ebp + 0x94] */
  ecx = R32((uint32_t)(ebp + 0x94u));
/* e8617c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8617d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e86180: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* e86183: mov edx, dword ptr [ebp + 0x90] */
  edx = R32((uint32_t)(ebp + 0x90u));
/* e86189: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8618a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8618b: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e86191: mov edi, esp */
  edi = esp;
/* e86193: mov ecx, 0x21 */
  ecx = 0x21u;
/* e86198: lea esi, [ebp + 0xc] */
  esi = (uint32_t)(ebp + 0xcu);
/* e8619b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8619d: lea eax, [esp + 0xb4] */
  eax = (uint32_t)(esp + 0xb4u);
/* e861a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e861a5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e861a8: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* e861af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e861b0: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* e861b3: lea edx, [esp + 0xa8] */
  edx = (uint32_t)(esp + 0xa8u);
/* e861ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e861bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e861bc: mov ecx, ebx */
  ecx = ebx;
/* e861be: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe861c3u); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e861c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e861c5: je 0xe86421 */
  if (zf) goto L_e86421;
L_e861cb: /* e861cb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e861ce: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* e861d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e861d3: je 0xe86329 */
  if (zf) goto L_e86329;
L_e861d9: /* e861d9: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e861dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e861df: je 0xe8628e */
  if (zf) goto L_e8628e;
L_e861e5: /* e861e5: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e861eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e861ed: je 0xe86415 */
  if (zf) goto L_e86415;
L_e861f3: /* e861f3: push 0xeaf360 */
  { uint32_t v = 0xeaf360u; esp -= 4; W32(esp, v); }
/* e861f8: jmp 0xe8640f */
  goto L_e8640f;
L_e861fd: /* e861fd: mov esi, dword ptr [ebp + 0x90] */
  esi = R32((uint32_t)(ebp + 0x90u));
/* e86203: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86205: je 0xe85a17 */
  if (zf) goto L_e85a17;
L_e8620b: /* e8620b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8620c: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* e86210: push 0xeaf430 */
  { uint32_t v = 0xeaf430u; esp -= 4; W32(esp, v); }
/* e86215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86216: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe8621cu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e8621c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8621f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86220: mov ecx, esi */
  ecx = esi;
/* e86222: mov dword ptr [esp + 0x1f0], 2 */
  W32((uint32_t)(esp + 0x1f0u), 0x2u);
/* e8622d: call dword ptr [0xeae0d4] */
  esp -= 4; W32(esp, 0xe86233u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* e86233: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* e86237: mov dword ptr [esp + 0x1ec], 0xffffffff */
  W32((uint32_t)(esp + 0x1ecu), 0xffffffffu);
/* e86242: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe86248u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e86248: jmp 0xe85a17 */
  goto L_e85a17;
L_e8624d: /* e8624d: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e86253: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86255: je 0xe86262 */
  if (zf) goto L_e86262;
L_e86257: /* e86257: push 0xeaf3d0 */
  { uint32_t v = 0xeaf3d0u; esp -= 4; W32(esp, v); }
/* e8625c: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe86262u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e86262: /* e86262: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e86268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8626a: je 0xe86421 */
  if (zf) goto L_e86421;
L_e86270: /* e86270: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e86273: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e86275: xor eax, eax */
  eax = 0;
/* e86277: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e8627e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e86285: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e86286: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e86287: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e86288: mov esp, ebp */
  esp = ebp;
/* e8628a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8628b: ret 0x90 */
  esp += 148; SPILL(); return;
L_e8628e: /* e8628e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e86292: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86294: je 0xe86400 */
  if (zf) goto L_e86400;
L_e8629a: /* e8629a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8629e: cmp eax, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e862a2: jge 0xe86394 */
  if ((sf == of)) goto L_e86394;
L_e862a8: /* e862a8: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e862ac: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e862b2: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e862b8: mov edx, dword ptr [edx + esi*4 + 0x52c] */
  edx = R32((uint32_t)(edx + esi*4 + 0x52cu));
/* e862bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e862c0: lea esi, [edx + eax + 0x38] */
  esi = (uint32_t)(edx + eax + 0x38u);
/* e862c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e862c5: mov ecx, ebx */
  ecx = ebx;
/* e862c7: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe862ccu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e862cc: mov dword ptr [esi + 0x2c], 2 */
  W32((uint32_t)(esi + 0x2cu), 0x2u);
/* e862d3: mov dword ptr [esi + 0x18], 2 */
  W32((uint32_t)(esi + 0x18u), 0x2u);
/* e862da: mov dword ptr [esi + 0x14], 3 */
  W32((uint32_t)(esi + 0x14u), 0x3u);
/* e862e1: mov edi, 1 */
  edi = 0x1u;
/* e862e6: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* e862e9: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* e862ec: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e862f0: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e862f6: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e862fc: lea eax, [esp + 0xd0] */
  eax = (uint32_t)(esp + 0xd0u);
/* e86303: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86304: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e86308: mov ecx, dword ptr [ecx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8630f: lea edx, [ecx + edx + 0x38] */
  edx = (uint32_t)(ecx + edx + 0x38u);
/* e86313: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86314: mov ecx, ebx */
  ecx = ebx;
/* e86316: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8631bu); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8631b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8631f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e86322: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e86323: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e86327: jmp 0xe8632e */
  goto L_e8632e;
L_e86329: /* e86329: mov edi, 1 */
  edi = 0x1u;
L_e8632e: /* e8632e: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* e86331: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e86335: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e8633b: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e86342: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e86344: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e86346: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e86349: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8634c: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* e8634f: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86355: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86359: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e86360: mov dword ptr [ecx + 0x28], 2 */
  W32((uint32_t)(ecx + 0x28u), 0x2u);
/* e86367: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e8636d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86371: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e86378: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* e8637b: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86381: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86385: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e8638c: mov dword ptr [ecx + 0x2c], edi */
  W32((uint32_t)(ecx + 0x2cu), edi);
/* e8638f: jmp 0xe856e0 */
  goto L_e856e0;
L_e86394: /* e86394: mov edi, dword ptr [ebp + 0x90] */
  edi = R32((uint32_t)(ebp + 0x90u));
/* e8639a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8639c: je 0xe863db */
  if (zf) goto L_e863db;
L_e8639e: /* e8639e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8639f: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* e863a3: push 0xeaf2d0 */
  { uint32_t v = 0xeaf2d0u; esp -= 4; W32(esp, v); }
/* e863a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e863a9: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe863afu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e863af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e863b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e863b3: mov ecx, edi */
  ecx = edi;
/* e863b5: mov dword ptr [esp + 0x1f0], 3 */
  W32((uint32_t)(esp + 0x1f0u), 0x3u);
/* e863c0: call dword ptr [0xeae0d4] */
  esp -= 4; W32(esp, 0xe863c6u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* e863c6: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* e863ca: mov dword ptr [esp + 0x1ec], 0xffffffff */
  W32((uint32_t)(esp + 0x1ecu), 0xffffffffu);
/* e863d5: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe863dbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e863db: /* e863db: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e863e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e863e3: je 0xe86421 */
  if (zf) goto L_e86421;
L_e863e5: /* e863e5: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* e863e7: xor eax, eax */
  eax = 0;
/* e863e9: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e863f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e863f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e863f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e863f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e863fa: mov esp, ebp */
  esp = ebp;
/* e863fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e863fd: ret 0x90 */
  esp += 148; SPILL(); return;
L_e86400: /* e86400: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e86406: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86408: je 0xe86415 */
  if (zf) goto L_e86415;
L_e8640a: /* e8640a: push 0xeaf280 */
  { uint32_t v = 0xeaf280u; esp -= 4; W32(esp, v); }
L_e8640f: /* e8640f: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe86415u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e86415: /* e86415: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e8641b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8641d: je 0xe86421 */
  if (zf) goto L_e86421;
L_e8641f: /* e8641f: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_e86421: /* e86421: xor eax, eax */
  eax = 0;
/* e86423: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e8642a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e86431: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e86432: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e86433: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e86434: mov esp, ebp */
  esp = ebp;
/* e86436: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e86437: ret 0x90 */
  esp += 148; SPILL(); return;
L_e8643a: /* e8643a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e8643d: movzx eax, byte ptr [ecx + 0x58] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x58u)));
/* e86441: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e86444: ja 0xe866e4 */
  if ((!cf && !zf)) goto L_e866e4;
L_e8644a: /* e8644a: jmp dword ptr [eax*4 + 0xe86800] */
  switch (R32((uint32_t)(eax*4 + 0xe86800u))) {
    case 0xe86451u: goto L_e86451;
    case 0xe864eau: goto L_e864ea;
    case 0xe8654eu: goto L_e8654e;
    case 0xe86585u: goto L_e86585;
    case 0xe865adu: goto L_e865ad;
    case 0xe8662cu: goto L_e8662c;
    case 0xe866a4u: goto L_e866a4;
    default: guest_badjump(0xe8644a, R32((uint32_t)(eax*4 + 0xe86800u))); return;
  }
L_e86451: /* e86451: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* e86455: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e8645b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8645d: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86463: je 0xe864a2 */
  if (zf) goto L_e864a2;
L_e86465: /* e86465: mov dword ptr [eax + 0x24], 5 */
  W32((uint32_t)(eax + 0x24u), 0x5u);
/* e8646c: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86472: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86478: mov dword ptr [eax + 0x28], 6 */
  W32((uint32_t)(eax + 0x28u), 0x6u);
/* e8647f: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86485: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8648b: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* e8648e: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86494: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8649a: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* e8649d: jmp 0xe866d5 */
  goto L_e866d5;
L_e864a2: /* e864a2: mov dword ptr [eax + 0x24], 2 */
  W32((uint32_t)(eax + 0x24u), 0x2u);
/* e864a9: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e864af: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e864b5: mov dword ptr [eax + 0x28], esi */
  W32((uint32_t)(eax + 0x28u), esi);
/* e864b8: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e864be: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e864c4: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* e864c7: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e864cd: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e864d3: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* e864d6: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e864dc: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e864e2: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* e864e5: jmp 0xe866e4 */
  goto L_e866e4;
L_e864ea: /* e864ea: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e864f0: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e864f6: mov dword ptr [eax + 0x24], 2 */
  W32((uint32_t)(eax + 0x24u), 0x2u);
/* e864fd: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86503: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86509: mov dword ptr [eax + 0x28], esi */
  W32((uint32_t)(eax + 0x28u), esi);
/* e8650c: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86512: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86518: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* e8651b: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86521: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86527: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* e8652a: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86530: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86536: mov byte ptr [eax + 0xc], 0x7f */
  W8((uint32_t)(eax + 0xcu), 0x7fu);
/* e8653a: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86540: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86546: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* e86549: jmp 0xe866e4 */
  goto L_e866e4;
L_e8654e: /* e8654e: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86554: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8655a: mov dword ptr [eax + 0x24], 9 */
  W32((uint32_t)(eax + 0x24u), 0x9u);
/* e86561: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86567: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8656d: mov dword ptr [eax + 0x28], 3 */
  W32((uint32_t)(eax + 0x28u), 0x3u);
/* e86574: mov byte ptr [esp + 0x18], 0x7f */
  W8((uint32_t)(esp + 0x18u), 0x7fu);
/* e86579: mov byte ptr [esp + 0x19], 0x7f */
  W8((uint32_t)(esp + 0x19u), 0x7fu);
/* e8657e: mov byte ptr [esp + 0x1a], 0x7f */
  W8((uint32_t)(esp + 0x1au), 0x7fu);
/* e86583: jmp 0xe865e2 */
  goto L_e865e2;
L_e86585: /* e86585: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e8658b: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e86591: mov eax, 2 */
  eax = 0x2u;
/* e86596: mov dword ptr [edx + 0x24], eax */
  W32((uint32_t)(edx + 0x24u), eax);
/* e86599: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e8659f: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e865a5: mov dword ptr [edx + 0x28], eax */
  W32((uint32_t)(edx + 0x28u), eax);
/* e865a8: jmp 0xe8664e */
  goto L_e8664e;
L_e865ad: /* e865ad: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e865b3: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e865b9: mov dword ptr [eax + 0x24], 2 */
  W32((uint32_t)(eax + 0x24u), 0x2u);
/* e865c0: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e865c6: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e865cc: mov dword ptr [eax + 0x28], 4 */
  W32((uint32_t)(eax + 0x28u), 0x4u);
/* e865d3: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* e865d8: mov byte ptr [esp + 0x19], 0 */
  W8((uint32_t)(esp + 0x19u), 0x0u);
/* e865dd: mov byte ptr [esp + 0x1a], 0 */
  W8((uint32_t)(esp + 0x1au), 0x0u);
L_e865e2: /* e865e2: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e865e8: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e865ee: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* e865f1: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e865f7: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e865fd: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* e86600: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86606: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8660c: mov dword ptr [eax + 0x2c], esi */
  W32((uint32_t)(eax + 0x2cu), esi);
/* e8660f: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86615: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8661b: mov byte ptr [esp + 0x1b], 0 */
  W8((uint32_t)(esp + 0x1bu), 0x0u);
/* e86620: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e86624: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* e86627: jmp 0xe866e4 */
  goto L_e866e4;
L_e8662c: /* e8662c: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86632: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e86638: mov dword ptr [edx + 0x24], esi */
  W32((uint32_t)(edx + 0x24u), esi);
/* e8663b: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86641: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e86647: mov dword ptr [edx + 0x28], 4 */
  W32((uint32_t)(edx + 0x28u), 0x4u);
L_e8664e: /* e8664e: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86654: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e8665a: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* e8665d: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86663: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e86669: mov dword ptr [edx + 0x14], edi */
  W32((uint32_t)(edx + 0x14u), edi);
/* e8666c: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86672: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e86678: mov dword ptr [edx + 0x2c], esi */
  W32((uint32_t)(edx + 0x2cu), esi);
/* e8667b: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86681: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e86687: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* e8668c: mov byte ptr [esp + 0x19], 0 */
  W8((uint32_t)(esp + 0x19u), 0x0u);
/* e86691: mov byte ptr [esp + 0x1a], 0 */
  W8((uint32_t)(esp + 0x1au), 0x0u);
/* e86696: mov byte ptr [esp + 0x1b], 0 */
  W8((uint32_t)(esp + 0x1bu), 0x0u);
/* e8669b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e8669f: mov dword ptr [edx + 0x30], eax */
  W32((uint32_t)(edx + 0x30u), eax);
/* e866a2: jmp 0xe866e4 */
  goto L_e866e4;
L_e866a4: /* e866a4: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e866aa: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e866b0: mov dword ptr [eax + 0x24], esi */
  W32((uint32_t)(eax + 0x24u), esi);
/* e866b3: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e866b9: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e866bf: mov dword ptr [eax + 0x28], 2 */
  W32((uint32_t)(eax + 0x28u), 0x2u);
/* e866c6: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e866cc: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e866d2: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
L_e866d5: /* e866d5: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e866db: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e866e1: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_e866e4: /* e866e4: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* e866e7: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e866ed: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e866f3: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e866f5: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
L_e866f8: /* e866f8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e866fb: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* e866fe: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86704: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e8670a: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* e8670d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e8670f: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* e86711: not edx */
  edx = ~edx;
/* e86713: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e86716: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86718: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* e8671b: je 0xe867be */
  if (zf) goto L_e867be;
L_e86721: /* e86721: cmp dword ptr [ebp + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86727: je 0xe8675a */
  if (zf) goto L_e8675a;
L_e86729: /* e86729: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e8672f: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86735: cmp dword ptr [eax + 0x24], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86739: jne 0xe8675a */
  if (!zf) goto L_e8675a;
L_e8673b: /* e8673b: cmp dword ptr [eax + 0x28], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8673e: jne 0xe8675a */
  if (!zf) goto L_e8675a;
L_e86740: /* e86740: mov dword ptr [eax + 0x24], 5 */
  W32((uint32_t)(eax + 0x24u), 0x5u);
/* e86747: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e8674d: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e86753: mov dword ptr [ecx + 0x28], 6 */
  W32((uint32_t)(ecx + 0x28u), 0x6u);
L_e8675a: /* e8675a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8675e: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86764: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8676a: mov ecx, dword ptr [edx + 0x52c] */
  ecx = R32((uint32_t)(edx + 0x52cu));
/* e86770: lea edx, [ecx + eax + 0x38] */
  edx = (uint32_t)(ecx + eax + 0x38u);
/* e86774: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86775: mov ecx, ebx */
  ecx = ebx;
/* e86777: call 0xe87b80 */
  esp -= 4; W32(esp, 0xe8677cu); SPILL(); f_e87b80(); if (g_unwind) return; RELOAD();
/* e8677c: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86782: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e86788: mov edx, dword ptr [ebp + 0x7c] */
  edx = R32((uint32_t)(ebp + 0x7cu));
/* e8678b: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* e8678e: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86794: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e8679a: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* e8679d: mov ecx, dword ptr [ebp + 0x80] */
  ecx = R32((uint32_t)(ebp + 0x80u));
/* e867a3: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e867a5: mov ecx, dword ptr [ebp + 0x74] */
  ecx = R32((uint32_t)(ebp + 0x74u));
/* e867a8: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* e867ab: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e867b1: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e867b7: or dword ptr [eax + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x18u), r);
  }
/* e867ba: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
L_e867be: /* e867be: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e867c4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e867c8: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e867cf: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e867d3: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* e867d6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e867da: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e867e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e867e1: mov dword ptr [ecx + 0x54c], eax */
  W32((uint32_t)(ecx + 0x54cu), eax);
/* e867e7: mov ecx, dword ptr [esp + 0x1e4] */
  ecx = R32((uint32_t)(esp + 0x1e4u));
/* e867ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e867ef: mov eax, esi */
  eax = esi;
/* e867f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e867f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e867f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e867fa: mov esp, ebp */
  esp = ebp;
/* e867fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e867fd: ret 0x90 */
  esp += 148; SPILL(); return;
}
