#include "recomp.h"
#include "rec_mod.h"

void f_968100(void) {
  LOAD_REGS();
L_968100: /* 968100: mov ecx, dword ptr [0xcf8ba8] */
  ecx = R32((uint32_t)(0xcf8ba8u));
/* 968106: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968109: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96810a: je 0x968115 */
  if (zf) goto L_968115;
L_96810c: /* 96810c: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96810f: jne 0x96825c */
  if (!zf) goto L_96825c;
L_968115: /* 968115: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 968119: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96811b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96811c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96811d: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 968121: je 0x96813b */
  if (zf) goto L_96813b;
L_968123: /* 968123: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 968126: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96812a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96812b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96812c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96812d: call 0x953470 */
  esp -= 4; W32(esp, 0x968132u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968132: mov ecx, dword ptr [0xcf8ba8] */
  ecx = R32((uint32_t)(0xcf8ba8u));
/* 968138: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96813b: /* 96813b: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96813e: jne 0x9681d5 */
  if (!zf) goto L_9681d5;
L_968144: /* 968144: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 968149: lea ebx, [eax - 1] */
  ebx = (uint32_t)(eax + 0xffffffffu);
/* 96814c: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 96814f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968151: je 0x968194 */
  if (zf) goto L_968194;
L_968153: /* 968153: test byte ptr [edi + 0x3e], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3eu))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 968156: je 0x968194 */
  if (zf) goto L_968194;
L_968158: /* 968158: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 96815d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96815f: je 0x968194 */
  if (zf) goto L_968194;
L_968161: /* 968161: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 968163: jle 0x968228 */
  if ((zf || sf != of)) goto L_968228;
L_968169: /* 968169: mov esi, ebx */
  esi = ebx;
/* 96816b: nop  */
/* 96816c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_968170: /* 968170: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 968174: push 0xc02433b6 */
  { uint32_t v = 0xc02433b6u; esp -= 4; W32(esp, v); }
/* 968179: push 0x45a1cac1 */
  { uint32_t v = 0x45a1cac1u; esp -= 4; W32(esp, v); }
/* 96817e: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 968183: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968184: call 0x953470 */
  esp -= 4; W32(esp, 0x968189u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968189: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96818c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 96818d: jne 0x968170 */
  if (!zf) goto L_968170;
L_96818f: /* 96818f: jmp 0x968228 */
  goto L_968228;
L_968194: /* 968194: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 968197: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968199: jne 0x9681aa */
  if (!zf) goto L_9681aa;
L_96819b: /* 96819b: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 96819e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96819f: call 0x963010 */
  esp -= 4; W32(esp, 0x9681a4u); SPILL(); f_963010(); if (g_unwind) return; RELOAD();
/* 9681a4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9681a7: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
L_9681aa: /* 9681aa: xor esi, esi */
  esi = 0;
/* 9681ac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9681ae: jle 0x968228 */
  if ((zf || sf != of)) goto L_968228;
L_9681b0: /* 9681b0: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9681b3: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 9681b6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9681ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9681bd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9681c0: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 9681c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9681c6: call 0x953470 */
  esp -= 4; W32(esp, 0x9681cbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9681cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9681ce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9681cf: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9681d1: jl 0x9681b0 */
  if ((sf != of)) goto L_9681b0;
L_9681d3: /* 9681d3: jmp 0x968228 */
  goto L_968228;
L_9681d5: /* 9681d5: cmp dword ptr [esp + 0x14], 0x18 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9681da: mov ebx, dword ptr [0xcf85cc] */
  ebx = R32((uint32_t)(0xcf85ccu));
/* 9681e0: jne 0x9681ec */
  if (!zf) goto L_9681ec;
L_9681e2: /* 9681e2: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 9681e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9681e9: je 0x9681ec */
  if (zf) goto L_9681ec;
L_9681eb: /* 9681eb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_9681ec: /* 9681ec: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 9681ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9681f1: jne 0x9681ff */
  if (!zf) goto L_9681ff;
L_9681f3: /* 9681f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9681f4: call 0x970960 */
  esp -= 4; W32(esp, 0x9681f9u); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 9681f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9681fc: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
L_9681ff: /* 9681ff: xor esi, esi */
  esi = 0;
/* 968201: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 968203: jle 0x968228 */
  if ((zf || sf != of)) goto L_968228;
L_968205: /* 968205: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 968208: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* 96820b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96820f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968212: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 968215: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96821a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96821b: call 0x953470 */
  esp -= 4; W32(esp, 0x968220u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968220: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968223: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 968224: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 968226: jl 0x968205 */
  if ((sf != of)) goto L_968205;
L_968228: /* 968228: cmp dword ptr [esp + 0x14], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96822d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96822e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96822f: jne 0x96824a */
  if (!zf) goto L_96824a;
L_968231: /* 968231: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968234: jne 0x96824a */
  if (!zf) goto L_96824a;
L_968236: /* 968236: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 96823a: push 0xafe104 */
  { uint32_t v = 0xafe104u; esp -= 4; W32(esp, v); }
/* 96823f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968240: call 0x953470 */
  esp -= 4; W32(esp, 0x968245u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968245: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968248: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968249: ret  */
  esp += 4; SPILL(); return;
L_96824a: /* 96824a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 96824e: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 968253: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968254: call 0x953470 */
  esp -= 4; W32(esp, 0x968259u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968259: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96825c: /* 96825c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96825d: ret  */
  esp += 4; SPILL(); return;
}

void f_968260(void) {
  LOAD_REGS();
L_968260: /* 968260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968261: mov ebp, esp */
  ebp = esp;
/* 968263: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 968266: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968269: cmp dword ptr [0xcf8ba8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8ba8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968270: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968272: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968273: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 968276: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 96827e: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 968286: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 96828e: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 968296: jne 0x9682b0 */
  if (!zf) goto L_9682b0;
L_968298: /* 968298: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 96829b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96829d: jne 0x9682ab */
  if (!zf) goto L_9682ab;
L_96829f: /* 96829f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9682a0: call 0x970960 */
  esp -= 4; W32(esp, 0x9682a5u); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 9682a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9682a8: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
L_9682ab: /* 9682ab: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 9682ae: jmp 0x9682c3 */
  goto L_9682c3;
L_9682b0: /* 9682b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9682b1: call 0x970960 */
  esp -= 4; W32(esp, 0x9682b6u); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 9682b6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9682b9: mov esi, eax */
  esi = eax;
/* 9682bb: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_9682c3: /* 9682c3: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 9682c6: push 0xafe208 */
  { uint32_t v = 0xafe208u; esp -= 4; W32(esp, v); }
/* 9682cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9682cc: call 0x953470 */
  esp -= 4; W32(esp, 0x9682d1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9682d1: mov eax, dword ptr [0xcf8c38] */
  eax = R32((uint32_t)(0xcf8c38u));
/* 9682d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9682d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9682db: je 0x9682f2 */
  if (zf) goto L_9682f2;
L_9682dd: /* 9682dd: mov dword ptr [0xcf8c38], 0 */
  W32((uint32_t)(0xcf8c38u), 0x0u);
/* 9682e7: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 9682ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9682eb: push 0xafe158 */
  { uint32_t v = 0xafe158u; esp -= 4; W32(esp, v); }
/* 9682f0: jmp 0x9682fb */
  goto L_9682fb;
L_9682f2: /* 9682f2: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 9682f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9682f6: push 0xafe128 */
  { uint32_t v = 0xafe128u; esp -= 4; W32(esp, v); }
L_9682fb: /* 9682fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9682fc: call 0x953470 */
  esp -= 4; W32(esp, 0x968301u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968301: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 968304: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 968307: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 96830a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96830d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 968311: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968312: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968313: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968314: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 968318: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96831du); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96831d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 968321: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 968325: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 968328: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968329: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96832a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96832b: call 0x970e20 */
  esp -= 4; W32(esp, 0x968330u); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 968330: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 968336: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968339: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96833b: mov ecx, eax */
  ecx = eax;
/* 96833d: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 968341: je 0x96838f */
  if (zf) goto L_96838f;
L_968343: /* 968343: lea ebx, [esp + 0x40] */
  ebx = (uint32_t)(esp + 0x40u);
/* 968347: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 968349: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 96834d: mov ebx, dword ptr [edi + 0xc] */
  ebx = R32((uint32_t)(edi + 0xcu));
/* 968350: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 968352: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 968356: lea ebx, [esp + 0x30] */
  ebx = (uint32_t)(esp + 0x30u);
/* 96835a: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96835c: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 96835f: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 968361: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
L_968365: /* 968365: fld dword ptr [ecx + eax - 4] */
  { double v = F32((uint32_t)(ecx + eax + 0xfffffffcu)); FPUSH(v); }
/* 968369: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96836d: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 968370: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 968373: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 968376: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 96837a: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* 96837d: mov dword ptr [ebx + eax], edx */
  W32((uint32_t)(ebx + eax), edx);
/* 968380: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 968384: jne 0x968365 */
  if (!zf) goto L_968365;
L_968386: /* 968386: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 968389: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
L_96838f: /* 96838f: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968392: jne 0x9683a6 */
  if (!zf) goto L_9683a6;
L_968394: /* 968394: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 96839c: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 9683a4: jmp 0x9683e3 */
  goto L_9683e3;
L_9683a6: /* 9683a6: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9683a9: jne 0x9683e3 */
  if (!zf) goto L_9683e3;
L_9683ab: /* 9683ab: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 9683af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9683b0: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 9683b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9683b5: call 0x96c350 */
  esp -= 4; W32(esp, 0x9683bau); SPILL(); f_96c350(); if (g_unwind) return; RELOAD();
/* 9683ba: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 9683be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9683bf: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 9683c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9683c4: call 0x96c350 */
  esp -= 4; W32(esp, 0x9683c9u); SPILL(); f_96c350(); if (g_unwind) return; RELOAD();
/* 9683c9: mov ecx, dword ptr [0xcf8494] */
  ecx = R32((uint32_t)(0xcf8494u));
/* 9683cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9683d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9683d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9683d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9683d6: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 9683da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9683db: call 0x970b20 */
  esp -= 4; W32(esp, 0x9683e0u); SPILL(); f_970b20(); if (g_unwind) return; RELOAD();
/* 9683e0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9683e3: /* 9683e3: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 9683e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9683e8: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 9683ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9683ed: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 9683f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9683f2: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9683f4: call 0x9621c0 */
  esp -= 4; W32(esp, 0x9683f9u); SPILL(); f_9621c0(); if (g_unwind) return; RELOAD();
/* 9683f9: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9683fd: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 968401: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968404: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 968408: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96840c: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 968410: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 968413: push 0xafe110 */
  { uint32_t v = 0xafe110u; esp -= 4; W32(esp, v); }
/* 968418: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968419: call 0x953470 */
  esp -= 4; W32(esp, 0x96841eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96841e: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 968422: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968425: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 968429: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 96842d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 968431: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 968435: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 968438: push 0xafe110 */
  { uint32_t v = 0xafe110u; esp -= 4; W32(esp, v); }
/* 96843d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96843e: call 0x953470 */
  esp -= 4; W32(esp, 0x968443u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968443: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 968447: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96844a: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96844e: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 968452: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 968456: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 96845a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96845d: push 0xafe110 */
  { uint32_t v = 0xafe110u; esp -= 4; W32(esp, v); }
/* 968462: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968463: call 0x953470 */
  esp -= 4; W32(esp, 0x968468u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968469: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96846a: call 0x96b280 */
  esp -= 4; W32(esp, 0x96846fu); SPILL(); f_96b280(); if (g_unwind) return; RELOAD();
/* 96846f: push 0xafe108 */
  { uint32_t v = 0xafe108u; esp -= 4; W32(esp, v); }
/* 968474: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968475: call 0x953470 */
  esp -= 4; W32(esp, 0x96847au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96847a: mov eax, dword ptr [0xcf8b40] */
  eax = R32((uint32_t)(0xcf8b40u));
/* 96847f: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 968483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968484: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968485: call 0x953a60 */
  esp -= 4; W32(esp, 0x96848au); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 96848a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 96848d: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 968490: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 968494: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968495: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968496: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 968498: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968499: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96849a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96849b: call 0x96b540 */
  esp -= 4; W32(esp, 0x9684a0u); SPILL(); f_96b540(); if (g_unwind) return; RELOAD();
/* 9684a0: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 9684a4: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9684a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9684a9: je 0x9684bb */
  if (zf) goto L_9684bb;
L_9684ab: /* 9684ab: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 9684b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9684b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9684b3: call 0x953a60 */
  esp -= 4; W32(esp, 0x9684b8u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 9684b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9684bb: /* 9684bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9684bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9684bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9684be: mov esp, ebp */
  esp = ebp;
/* 9684c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9684c1: ret  */
  esp += 4; SPILL(); return;
}

void f_9684d0(void) {
  LOAD_REGS();
L_9684d0: /* 9684d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9684d1: mov eax, dword ptr [0xcf8be8] */
  eax = R32((uint32_t)(0xcf8be8u));
/* 9684d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9684d8: jne 0x9684ed */
  if (!zf) goto L_9684ed;
L_9684da: /* 9684da: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9684df: push 0xafe29c */
  { uint32_t v = 0xafe29cu; esp -= 4; W32(esp, v); }
/* 9684e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9684e5: call 0x953470 */
  esp -= 4; W32(esp, 0x9684eau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9684ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9684ed: /* 9684ed: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9684f1: lea eax, [ecx - 7] */
  eax = (uint32_t)(ecx + 0xfffffff9u);
/* 9684f4: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9684f7: ja 0x96864b */
  if ((!cf && !zf)) goto L_96864b;
L_9684fd: /* 9684fd: movzx edx, byte ptr [eax + 0x968664] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x968664u)));
/* 968504: jmp dword ptr [edx*4 + 0x968650] */
  switch (R32((uint32_t)(edx*4 + 0x968650u))) {
    case 0x96850bu: goto L_96850b;
    case 0x9685ffu: goto L_9685ff;
    case 0x96861cu: goto L_96861c;
    case 0x968630u: goto L_968630;
    case 0x96864bu: goto L_96864b;
    default: guest_badjump(0x968504, R32((uint32_t)(edx*4 + 0x968650u))); return;
  }
L_96850b: /* 96850b: cmp dword ptr [0xcf85cc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968512: jne 0x9685eb */
  if (!zf) goto L_9685eb;
L_968518: /* 968518: mov eax, dword ptr [0xcf8418] */
  eax = R32((uint32_t)(0xcf8418u));
/* 96851d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96851f: jge 0x9685eb */
  if ((sf == of)) goto L_9685eb;
L_968525: /* 968525: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 96852a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96852c: jne 0x9685eb */
  if (!zf) goto L_9685eb;
L_968532: /* 968532: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 968538: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968539: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 96853d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96853e: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 968542: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 968543: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968545: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968546: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 96854a: mov dword ptr [0xcf8bf8], ecx */
  W32((uint32_t)(0xcf8bf8u), ecx);
/* 968550: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 968558: je 0x96857e */
  if (zf) goto L_96857e;
L_96855a: /* 96855a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_968560: /* 968560: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 968563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968565: je 0x96857e */
  if (zf) goto L_96857e;
L_968567: /* 968567: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968568: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96856c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96856d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96856e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96856f: call 0x968680 */
  esp -= 4; W32(esp, 0x968574u); SPILL(); f_968680(); if (g_unwind) return; RELOAD();
/* 968574: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 968577: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96857a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96857c: jne 0x968560 */
  if (!zf) goto L_968560;
L_96857e: /* 96857e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 968582: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968584: je 0x9685a9 */
  if (zf) goto L_9685a9;
L_968586: /* 968586: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 968589: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96858b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96858d: je 0x9685a9 */
  if (zf) goto L_9685a9;
L_96858f: /* 96858f: nop  */
L_968590: /* 968590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968591: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 968595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968597: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968598: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96859b: call 0x968680 */
  esp -= 4; W32(esp, 0x9685a0u); SPILL(); f_968680(); if (g_unwind) return; RELOAD();
/* 9685a0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9685a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9685a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9685a7: jne 0x968590 */
  if (!zf) goto L_968590;
L_9685a9: /* 9685a9: mov eax, dword ptr [0xcf8c54] */
  eax = R32((uint32_t)(0xcf8c54u));
/* 9685ae: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9685b2: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9685b4: mov ecx, dword ptr [0xcf8be4] */
  ecx = R32((uint32_t)(0xcf8be4u));
/* 9685ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9685bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9685bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9685bd: jne 0x9685c7 */
  if (!zf) goto L_9685c7;
L_9685bf: /* 9685bf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9685c1: je 0x96864b */
  if (zf) goto L_96864b;
L_9685c7: /* 9685c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9685c8: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9685ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9685cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9685d0: push 0xafe240 */
  { uint32_t v = 0xafe240u; esp -= 4; W32(esp, v); }
/* 9685d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9685d6: call 0x953470 */
  esp -= 4; W32(esp, 0x9685dbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9685db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9685dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9685df: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9685e1: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9685e6u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9685e6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9685e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9685ea: ret  */
  esp += 4; SPILL(); return;
L_9685eb: /* 9685eb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9685ef: push 0xafe23c */
  { uint32_t v = 0xafe23cu; esp -= 4; W32(esp, v); }
/* 9685f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9685f5: call 0x953470 */
  esp -= 4; W32(esp, 0x9685fau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9685fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9685fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9685fe: ret  */
  esp += 4; SPILL(); return;
L_9685ff: /* 9685ff: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 968604: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968606: je 0x96864b */
  if (zf) goto L_96864b;
L_968608: /* 968608: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 96860c: push 0xafe234 */
  { uint32_t v = 0xafe234u; esp -= 4; W32(esp, v); }
/* 968611: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968612: call 0x953470 */
  esp -= 4; W32(esp, 0x968617u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968617: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96861a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96861b: ret  */
  esp += 4; SPILL(); return;
L_96861c: /* 96861c: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 968620: push 0xafe23c */
  { uint32_t v = 0xafe23cu; esp -= 4; W32(esp, v); }
/* 968625: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968626: call 0x953470 */
  esp -= 4; W32(esp, 0x96862bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96862b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96862e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96862f: ret  */
  esp += 4; SPILL(); return;
L_968630: /* 968630: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 968635: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968637: je 0x96864b */
  if (zf) goto L_96864b;
L_968639: /* 968639: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 96863d: push 0xafe234 */
  { uint32_t v = 0xafe234u; esp -= 4; W32(esp, v); }
/* 968642: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968643: call 0x953470 */
  esp -= 4; W32(esp, 0x968648u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968648: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96864b: /* 96864b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96864c: ret  */
  esp += 4; SPILL(); return;
}

void f_968680(void) {
  LOAD_REGS();
L_968680: /* 968680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968681: mov ebp, esp */
  ebp = esp;
/* 968683: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 968686: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968689: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 96868c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96868d: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 968690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968691: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 968693: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 968696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968698: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968699: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 96869d: jne 0x9686b0 */
  if (!zf) goto L_9686b0;
L_96869f: /* 96869f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9686a0: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x9686a5u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 9686a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9686a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9686aa: jne 0x968868 */
  if (!zf) goto L_968868;
L_9686b0: /* 9686b0: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 9686b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9686b7: jne 0x968868 */
  if (!zf) goto L_968868;
L_9686bd: /* 9686bd: mov edi, dword ptr [ebx + 0x3c] */
  edi = R32((uint32_t)(ebx + 0x3cu));
/* 9686c0: test edi, 0x400 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9686c6: je 0x9686d5 */
  if (zf) goto L_9686d5;
L_9686c8: /* 9686c8: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 9686cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9686cf: jne 0x968868 */
  if (!zf) goto L_968868;
L_9686d5: /* 9686d5: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 9686d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9686da: je 0x968868 */
  if (zf) goto L_968868;
L_9686e0: /* 9686e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9686e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9686e5: je 0x96873c */
  if (zf) goto L_96873c;
L_9686e7: /* 9686e7: mov edx, eax */
  edx = eax;
/* 9686e9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 9686ed: xor ecx, ecx */
  ecx = 0;
/* 9686ef: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_9686f1: /* 9686f1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 9686f4: fld dword ptr [esp + eax + 0x14] */
  { double v = F32((uint32_t)(esp + eax + 0x14u)); FPUSH(v); }
/* 9686f8: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 9686fe: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 968704: fst dword ptr [esp + ecx*4 + 0x14] */
  WF32((uint32_t)(esp + ecx*4 + 0x14u), ST0);
/* 968708: fcomp qword ptr [0xa14ed8] */
  fpu_com(ST0, F64((uint32_t)(0xa14ed8u)));
  FPOP();
/* 96870e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 968710: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 968713: jp 0x96871d */
  if (pf) goto L_96871d;
L_968715: /* 968715: mov dword ptr [esp + ecx*4 + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + ecx*4 + 0x14u), 0xbf800000u);
L_96871d: /* 96871d: fld dword ptr [esp + ecx*4 + 0x14] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x14u)); FPUSH(v); }
/* 968721: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 968727: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 968729: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96872c: jne 0x968736 */
  if (!zf) goto L_968736;
L_96872e: /* 96872e: mov dword ptr [esp + ecx*4 + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + ecx*4 + 0x14u), 0x3f800000u);
L_968736: /* 968736: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 968737: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96873a: jl 0x9686f1 */
  if ((sf != of)) goto L_9686f1;
L_96873c: /* 96873c: test edi, 0x1000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968742: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 968748: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 96874b: je 0x9687dd */
  if (zf) goto L_9687dd;
L_968751: /* 968751: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 968754: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968756: je 0x968863 */
  if (zf) goto L_968863;
L_96875c: /* 96875c: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 96875f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 968761: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968763: je 0x968863 */
  if (zf) goto L_968863;
L_968769: /* 968769: lea esi, [esi + esi*2 + 1] */
  esi = (uint32_t)(esi + esi*2 + 0x1u);
/* 96876d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_968770: /* 968770: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 968773: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 968779: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96877c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96877e: je 0x9687c7 */
  if (zf) goto L_9687c7;
L_968780: /* 968780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 968783: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968785: je 0x9687c0 */
  if (zf) goto L_9687c0;
L_968787: /* 968787: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 96878a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 96878e: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 968791: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968792: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968793: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968796: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96879a: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 96879d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9687a1: lea edx, [esi - 1] */
  edx = (uint32_t)(esi + 0xffffffffu);
/* 9687a4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9687a8: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9687ac: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9687af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9687b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9687b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9687b2: push 0xafe2f0 */
  { uint32_t v = 0xafe2f0u; esp -= 4; W32(esp, v); }
/* 9687b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9687b8: call 0x953470 */
  esp -= 4; W32(esp, 0x9687bdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9687bd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9687c0: /* 9687c0: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 9687c4: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_9687c7: /* 9687c7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9687c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9687cb: jne 0x968770 */
  if (!zf) goto L_968770;
L_9687cd: /* 9687cd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9687d1: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 9687d4: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 9687d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9687d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9687d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9687d9: mov esp, ebp */
  esp = ebp;
/* 9687db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9687dc: ret  */
  esp += 4; SPILL(); return;
L_9687dd: /* 9687dd: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 9687e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9687e2: je 0x968863 */
  if (zf) goto L_968863;
L_9687e4: /* 9687e4: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 9687e7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9687e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9687eb: je 0x968863 */
  if (zf) goto L_968863;
L_9687ed: /* 9687ed: lea esi, [esi + esi*2 + 1] */
  esi = (uint32_t)(esi + esi*2 + 0x1u);
L_9687f1: /* 9687f1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9687f4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9687f7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9687f9: jne 0x9687fe */
  if (!zf) goto L_9687fe;
L_9687fb: /* 9687fb: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_9687fe: /* 9687fe: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 968801: cmp edx, dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968807: je 0x968859 */
  if (zf) goto L_968859;
L_968809: /* 968809: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 96880c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96880e: je 0x968852 */
  if (zf) goto L_968852;
L_968810: /* 968810: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 968813: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 968817: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 96881a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96881b: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 96881e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96881f: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 968824: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968825: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968828: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96882c: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 96882f: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 968833: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 968836: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96883a: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 96883e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 968841: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968842: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968843: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968844: push 0xafe2c0 */
  { uint32_t v = 0xafe2c0u; esp -= 4; W32(esp, v); }
/* 968849: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96884a: call 0x953470 */
  esp -= 4; W32(esp, 0x96884fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96884f: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968852: /* 968852: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 968856: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_968859: /* 968859: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 96885b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96885d: jne 0x9687f1 */
  if (!zf) goto L_9687f1;
L_96885f: /* 96885f: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_968863: /* 968863: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 968866: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_968868: /* 968868: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 968869: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96886a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96886b: mov esp, ebp */
  esp = ebp;
/* 96886d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96886e: ret  */
  esp += 4; SPILL(); return;
}

void f_968870(void) {
  LOAD_REGS();
L_968870: /* 968870: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968873: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 968878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968879: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96887a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96887b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96887c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96887d: xor ebx, ebx */
  ebx = 0;
/* 96887f: call 0x94f340 */
  esp -= 4; W32(esp, 0x968884u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 968884: mov ecx, dword ptr [0xcf85d4] */
  ecx = R32((uint32_t)(0xcf85d4u));
/* 96888a: mov esi, eax */
  esi = eax;
/* 96888c: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96888e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96888f: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x968894u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 968894: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968895: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968896: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968897: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 96889b: call 0x94f610 */
  esp -= 4; W32(esp, 0x9688a0u); SPILL(); f_94f610(); if (g_unwind) return; RELOAD();
/* 9688a0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 9688a4: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9688a8: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9688ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9688ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9688ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9688af: call 0x966560 */
  esp -= 4; W32(esp, 0x9688b4u); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 9688b4: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9688b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9688b9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9688bd: je 0x9688f5 */
  if (zf) goto L_9688f5;
L_9688bf: /* 9688bf: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9688c2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9688c4: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 9688c7: je 0x9688f5 */
  if (zf) goto L_9688f5;
L_9688c9: /* 9688c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9688d0: /* 9688d0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9688d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9688d4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9688d7: call 0x95f210 */
  esp -= 4; W32(esp, 0x9688dcu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 9688dc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9688df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9688e1: jl 0x9688ef */
  if ((sf != of)) goto L_9688ef;
L_9688e3: /* 9688e3: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9688e6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9688ea: mov dword ptr [ecx + eax*4 + 4], edx */
  W32((uint32_t)(ecx + eax*4 + 0x4u), edx);
/* 9688ee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_9688ef: /* 9688ef: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 9688f1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9688f3: jne 0x9688d0 */
  if (!zf) goto L_9688d0;
L_9688f5: /* 9688f5: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9688f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9688fa: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9688ffu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9688ff: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 968903: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968904: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 968909: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96890a: call 0x953470 */
  esp -= 4; W32(esp, 0x96890fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96890f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 968913: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968916: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968918: je 0x968950 */
  if (zf) goto L_968950;
L_96891a: /* 96891a: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 96891d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96891e: xor esi, esi */
  esi = 0;
/* 968920: call 0x94f340 */
  esp -= 4; W32(esp, 0x968925u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 968925: mov ebx, eax */
  ebx = eax;
/* 968927: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96892a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96892c: jle 0x968950 */
  if ((zf || sf != of)) goto L_968950;
L_96892e: /* 96892e: mov edi, edi */
  edi = edi;
L_968930: /* 968930: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968932: je 0x968943 */
  if (zf) goto L_968943;
L_968934: /* 968934: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968935: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 96893a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96893b: call 0x953470 */
  esp -= 4; W32(esp, 0x968940u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968940: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968943: /* 968943: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 968947: mov edi, dword ptr [eax + esi*4 + 8] */
  edi = R32((uint32_t)(eax + esi*4 + 0x8u));
/* 96894b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96894c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96894e: jl 0x968930 */
  if ((sf != of)) goto L_968930;
L_968950: /* 968950: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 968954: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968955: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96895au); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96895a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96895d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96895e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96895f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 968960: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968961: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968964: ret  */
  esp += 4; SPILL(); return;
}

void f_968970(void) {
  LOAD_REGS();
L_968970: /* 968970: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968974: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 968978: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968979: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 96897d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96897e: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 968982: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 968986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968987: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 96898b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96898c: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 968990: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968991: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 968995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968996: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 96899a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96899b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96899c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96899d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96899e: call 0x9657a0 */
  esp -= 4; W32(esp, 0x9689a3u); SPILL(); f_9657a0(); if (g_unwind) return; RELOAD();
/* 9689a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9689a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9689a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9689a6: call 0x966560 */
  esp -= 4; W32(esp, 0x9689abu); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 9689ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9689ac: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 9689b0: call 0x94f340 */
  esp -= 4; W32(esp, 0x9689b5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9689b5: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 9689b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9689ba: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 9689bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9689c0: call 0x953470 */
  esp -= 4; W32(esp, 0x9689c5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9689c5: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 9689c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9689ca: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9689cfu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9689cf: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 9689d3: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9689d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9689d8: je 0x968ade */
  if (zf) goto L_968ade;
L_9689de: /* 9689de: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9689e0: je 0x9689e8 */
  if (zf) goto L_9689e8;
L_9689e2: /* 9689e2: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 9689e6: jmp 0x9689ef */
  goto L_9689ef;
L_9689e8: /* 9689e8: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 9689eb: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
L_9689ef: /* 9689ef: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 9689f5: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 9689fa: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 9689fe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9689ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 968a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968a01: mov dword ptr [0xcf8bfc], ecx */
  W32((uint32_t)(0xcf8bfcu), ecx);
/* 968a07: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 968a0c: jmp 0x968a14 */
  goto L_968a14;
L_968a0e: /* 968a0e: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
L_968a14: /* 968a14: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 968a17: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 968a1a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 968a1d: je 0x968a2d */
  if (zf) goto L_968a2d;
L_968a1f: /* 968a1f: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 968a22: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 968a25: mov ebp, dword ptr [eax + 8] */
  ebp = R32((uint32_t)(eax + 0x8u));
/* 968a28: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 968a2b: jmp 0x968a39 */
  goto L_968a39;
L_968a2d: /* 968a2d: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 968a30: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 968a33: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 968a36: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
L_968a39: /* 968a39: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 968a3f: cmp dword ptr [esi + 0x34], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968a42: jne 0x968a6f */
  if (!zf) goto L_968a6f;
L_968a44: /* 968a44: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 968a47: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 968a4a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 968a50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968a51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968a52: push 0xafe320 */
  { uint32_t v = 0xafe320u; esp -= 4; W32(esp, v); }
/* 968a57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968a58: call 0x953470 */
  esp -= 4; W32(esp, 0x968a5du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968a5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968a5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968a5f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 968a61: call 0x96e130 */
  esp -= 4; W32(esp, 0x968a66u); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 968a66: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 968a6c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968a6f: /* 968a6f: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 968a72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968a74: je 0x968ac4 */
  if (zf) goto L_968ac4;
L_968a76: /* 968a76: cmp dword ptr [ebx + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968a79: je 0x968aa0 */
  if (zf) goto L_968aa0;
L_968a7b: /* 968a7b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 968a7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968a7f: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 968a82: call 0x95f210 */
  esp -= 4; W32(esp, 0x968a87u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 968a87: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 968a8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968a8c: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 968a91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968a92: call 0x953470 */
  esp -= 4; W32(esp, 0x968a97u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968a97: mov ecx, dword ptr [0xcf8bfc] */
  ecx = R32((uint32_t)(0xcf8bfcu));
/* 968a9d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968aa0: /* 968aa0: cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968aa3: je 0x968ac4 */
  if (zf) goto L_968ac4;
L_968aa5: /* 968aa5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 968aa8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968aa9: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 968aac: call 0x95f210 */
  esp -= 4; W32(esp, 0x968ab1u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 968ab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968ab2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 968ab6: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 968abb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968abc: call 0x953470 */
  esp -= 4; W32(esp, 0x968ac1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968ac1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968ac4: /* 968ac4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968ac6: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 968acc: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 968acf: mov esi, edi */
  esi = edi;
/* 968ad1: je 0x968add */
  if (zf) goto L_968add;
L_968ad3: /* 968ad3: cmp edi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 968ad7: jne 0x968a0e */
  if (!zf) goto L_968a0e;
L_968add: /* 968add: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_968ade: /* 968ade: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 968adf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 968ae0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968ae1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968ae4: ret  */
  esp += 4; SPILL(); return;
}

void f_968af0(void) {
  LOAD_REGS();
L_968af0: /* 968af0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 968af4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 968af8: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 968afc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968afd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968afe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968aff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968b01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968b02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968b03: xor ebx, ebx */
  ebx = 0;
/* 968b05: call 0x966560 */
  esp -= 4; W32(esp, 0x968b0au); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 968b0a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968b0d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 968b11: call 0x958540 */
  esp -= 4; W32(esp, 0x968b16u); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
/* 968b16: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 968b1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b1c: je 0x968b7b */
  if (zf) goto L_968b7b;
L_968b1e: /* 968b1e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 968b21: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b23: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 968b26: je 0x968b7b */
  if (zf) goto L_968b7b;
L_968b28: /* 968b28: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 968b2b: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 968b2e: xor edi, edi */
  edi = 0;
/* 968b30: xor esi, esi */
  esi = 0;
/* 968b32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b34: je 0x968b6d */
  if (zf) goto L_968b6d;
L_968b36: /* 968b36: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 968b39: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 968b3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b3d: je 0x968b6d */
  if (zf) goto L_968b6d;
L_968b3f: /* 968b3f: nop  */
L_968b40: /* 968b40: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 968b43: test byte ptr [eax + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 968b47: je 0x968b50 */
  if (zf) goto L_968b50;
L_968b49: /* 968b49: mov esi, 1 */
  esi = 0x1u;
/* 968b4e: jmp 0x968b55 */
  goto L_968b55;
L_968b50: /* 968b50: mov edi, 1 */
  edi = 0x1u;
L_968b55: /* 968b55: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 968b57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b59: jne 0x968b40 */
  if (!zf) goto L_968b40;
L_968b5b: /* 968b5b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b5d: je 0x968b6d */
  if (zf) goto L_968b6d;
L_968b5f: /* 968b5f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b61: je 0x968b6d */
  if (zf) goto L_968b6d;
L_968b63: /* 968b63: or dword ptr [edx + 0x14], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x14u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx + 0x14u), r);
  }
/* 968b6a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 968b6b: jmp 0x968b74 */
  goto L_968b74;
L_968b6d: /* 968b6d: and dword ptr [edx + 0x14], 0xfeffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x14u))); uint32_t b = (uint32_t)(0xfeffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edx + 0x14u), r);
  }
L_968b74: /* 968b74: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 968b77: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b79: jne 0x968b28 */
  if (!zf) goto L_968b28;
L_968b7b: /* 968b7b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 968b7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968b80: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 968b85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968b86: call 0x953470 */
  esp -= 4; W32(esp, 0x968b8bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968b8b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 968b8f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968b92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b94: je 0x968bc9 */
  if (zf) goto L_968bc9;
L_968b96: /* 968b96: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 968b99: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 968b9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968b9d: je 0x968bc9 */
  if (zf) goto L_968bc9;
L_968b9f: /* 968b9f: nop  */
L_968ba0: /* 968ba0: mov cl, byte ptr [eax + 0x17] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x17u))) & 0xffu);
/* 968ba3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 968ba6: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 968ba9: je 0x968bc3 */
  if (zf) goto L_968bc3;
L_968bab: /* 968bab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 968bae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968baf: call 0x95f210 */
  esp -= 4; W32(esp, 0x968bb4u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 968bb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968bb5: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 968bba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968bbb: call 0x953470 */
  esp -= 4; W32(esp, 0x968bc0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968bc0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968bc3: /* 968bc3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 968bc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968bc7: jne 0x968ba0 */
  if (!zf) goto L_968ba0;
L_968bc9: /* 968bc9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 968bcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968bce: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x968bd3u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 968bd3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968bd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 968bd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 968bd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 968bd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968bda: ret  */
  esp += 4; SPILL(); return;
}

void f_968be0(void) {
  LOAD_REGS();
L_968be0: /* 968be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968be1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 968be5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968be6: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 968bea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968beb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968bec: call 0x969cb0 */
  esp -= 4; W32(esp, 0x968bf1u); SPILL(); f_969cb0(); if (g_unwind) return; RELOAD();
/* 968bf1: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 968bf4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968bf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968bf9: je 0x968c05 */
  if (zf) goto L_968c05;
L_968bfb: /* 968bfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968bfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968bfd: call 0x96a240 */
  esp -= 4; W32(esp, 0x968c02u); SPILL(); f_96a240(); if (g_unwind) return; RELOAD();
/* 968c02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968c05: /* 968c05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 968c06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 968c07: ret  */
  esp += 4; SPILL(); return;
}

void f_968c10(void) {
  LOAD_REGS();
L_968c10: /* 968c10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968c13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968c14: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968c15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968c16: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 968c1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968c1b: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 968c1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968c20: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 968c24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968c25: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 968c29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968c2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968c2b: call 0x9664b0 */
  esp -= 4; W32(esp, 0x968c30u); SPILL(); f_9664b0(); if (g_unwind) return; RELOAD();
/* 968c30: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 968c34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968c35: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 968c39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968c3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968c3b: call 0x9666c0 */
  esp -= 4; W32(esp, 0x968c40u); SPILL(); f_9666c0(); if (g_unwind) return; RELOAD();
/* 968c40: mov eax, dword ptr [0xcf84b0] */
  eax = R32((uint32_t)(0xcf84b0u));
/* 968c45: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 968c49: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 968c4d: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 968c51: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968c54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968c56: jne 0x968c6a */
  if (!zf) goto L_968c6a;
L_968c58: /* 968c58: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 968c5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968c5f: jne 0x968c80 */
  if (!zf) goto L_968c80;
L_968c61: /* 968c61: mov eax, dword ptr [0xcf84a0] */
  eax = R32((uint32_t)(0xcf84a0u));
/* 968c66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968c68: jne 0x968cba */
  if (!zf) goto L_968cba;
L_968c6a: /* 968c6a: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 968c6e: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 968c72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968c73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968c74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968c75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968c76: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968c77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968c78: call 0x968d10 */
  esp -= 4; W32(esp, 0x968c7du); SPILL(); f_968d10(); if (g_unwind) return; RELOAD();
/* 968c7d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968c80: /* 968c80: mov eax, dword ptr [0xcf84a0] */
  eax = R32((uint32_t)(0xcf84a0u));
/* 968c85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968c87: jne 0x968cba */
  if (!zf) goto L_968cba;
L_968c89: /* 968c89: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 968c8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968c90: jne 0x968ce6 */
  if (!zf) goto L_968ce6;
L_968c92: /* 968c92: mov eax, dword ptr [0xcf84b0] */
  eax = R32((uint32_t)(0xcf84b0u));
/* 968c97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968c99: jne 0x968ce6 */
  if (!zf) goto L_968ce6;
L_968c9b: /* 968c9b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 968c9f: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 968ca3: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 968ca9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 968cab: fmul qword ptr [0xa21738] */
  ST0 = ST0 * (F64((uint32_t)(0xa21738u)));
/* 968cb1: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 968cb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 968cb5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 968cb8: jp 0x968ce6 */
  if (pf) goto L_968ce6;
L_968cba: /* 968cba: mov eax, 3 */
  eax = 0x3u;
/* 968cbf: nop  */
L_968cc0: /* 968cc0: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 968cc4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 968cc5: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 968ccb: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 968cce: jne 0x968cc0 */
  if (!zf) goto L_968cc0;
L_968cd0: /* 968cd0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 968cd4: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 968cd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968cd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968cda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968cdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968cdc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968cdd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968cde: call 0x968d10 */
  esp -= 4; W32(esp, 0x968ce3u); SPILL(); f_968d10(); if (g_unwind) return; RELOAD();
/* 968ce3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968ce6: /* 968ce6: mov eax, dword ptr [0xcf8b40] */
  eax = R32((uint32_t)(0xcf8b40u));
/* 968ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968cec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968ced: call 0x953a60 */
  esp -= 4; W32(esp, 0x968cf2u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 968cf2: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 968cf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968cf9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968cfa: call 0x953a60 */
  esp -= 4; W32(esp, 0x968cffu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 968cff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968d02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 968d03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 968d04: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 968d05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968d06: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968d09: ret  */
  esp += 4; SPILL(); return;
}

void f_968d10(void) {
  LOAD_REGS();
L_968d10: /* 968d10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968d11: mov ebp, esp */
  ebp = esp;
/* 968d13: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 968d16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968d17: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 968d1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968d1b: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 968d1e: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 968d21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968d22: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 968d25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968d26: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 968d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968d2a: push 0xafe3a4 */
  { uint32_t v = 0xafe3a4u; esp -= 4; W32(esp, v); }
/* 968d2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968d30: call 0x953470 */
  esp -= 4; W32(esp, 0x968d35u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968d35: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 968d38: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 968d3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968d41: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 968d43: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 968d46: jnp 0x968d71 */
  if (!pf) goto L_968d71;
L_968d48: /* 968d48: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 968d4b: mov edx, esi */
  edx = esi;
/* 968d4d: fchs  */
  ST0 = -ST0;
/* 968d4f: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 968d53: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 968d57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968d58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968d59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968d5a: call 0x970e20 */
  esp -= 4; W32(esp, 0x968d5fu); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 968d5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968d60: mov esi, eax */
  esi = eax;
/* 968d62: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 968d65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968d66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968d67: call 0x970e20 */
  esp -= 4; W32(esp, 0x968d6cu); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 968d6c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968d6f: mov edi, eax */
  edi = eax;
L_968d71: /* 968d71: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 968d74: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 968d77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 968d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 968d7b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968d7e: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 968d82: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 968d84: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 968d87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 968d89: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 968d8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 968d8e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968d91: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 968d95: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 968d97: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 968d9a: push 0xafe37c */
  { uint32_t v = 0xafe37cu; esp -= 4; W32(esp, v); }
/* 968d9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968da0: call 0x953470 */
  esp -= 4; W32(esp, 0x968da5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968da5: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 968da8: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 968dae: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968db1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 968db3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 968db6: jnp 0x968dd5 */
  if (!pf) goto L_968dd5;
L_968db8: /* 968db8: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 968dbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968dbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968dc0: call 0x953a60 */
  esp -= 4; W32(esp, 0x968dc5u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 968dc5: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 968dcb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968dcc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968dcd: call 0x953a60 */
  esp -= 4; W32(esp, 0x968dd2u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 968dd2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968dd5: /* 968dd5: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 968dd8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 968ddb: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968dde: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 968de2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 968de5: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 968de9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 968deb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 968dee: push 0xafe364 */
  { uint32_t v = 0xafe364u; esp -= 4; W32(esp, v); }
/* 968df3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968df4: call 0x953470 */
  esp -= 4; W32(esp, 0x968df9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968df9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968dfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 968dfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 968dfe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968dff: mov esp, ebp */
  esp = ebp;
/* 968e01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 968e02: ret  */
  esp += 4; SPILL(); return;
}

void f_968e10(void) {
  LOAD_REGS();
L_968e10: /* 968e10: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968e13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968e14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968e15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968e16: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 968e1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968e1b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 968e1f: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 968e23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968e24: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 968e28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968e2a: call 0x9664b0 */
  esp -= 4; W32(esp, 0x968e2fu); SPILL(); f_9664b0(); if (g_unwind) return; RELOAD();
/* 968e2f: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 968e33: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 968e37: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968e3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968e3c: je 0x968e4c */
  if (zf) goto L_968e4c;
L_968e3e: /* 968e3e: push 0xafe3e8 */
  { uint32_t v = 0xafe3e8u; esp -= 4; W32(esp, v); }
/* 968e43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968e44: call 0x953470 */
  esp -= 4; W32(esp, 0x968e49u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968e49: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968e4c: /* 968e4c: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 968e50: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 968e53: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 968e57: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968e5a: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 968e5e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 968e60: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 968e64: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 968e67: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 968e6b: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 968e6d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 968e70: push 0xafe3bc */
  { uint32_t v = 0xafe3bcu; esp -= 4; W32(esp, v); }
/* 968e75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968e76: call 0x953470 */
  esp -= 4; W32(esp, 0x968e7bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 968e7b: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 968e81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968e82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968e83: call 0x953a60 */
  esp -= 4; W32(esp, 0x968e88u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 968e88: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 968e8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968e8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968e90: call 0x953a60 */
  esp -= 4; W32(esp, 0x968e95u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 968e95: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968e98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 968e99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 968e9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 968e9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968e9e: ret  */
  esp += 4; SPILL(); return;
}

void f_968ea0(void) {
  LOAD_REGS();
L_968ea0: /* 968ea0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 968ea3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 968ea4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968ea6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968ea7: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 968eab: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 968eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968eb0: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 968eb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968eb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968eb6: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 968ebe: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 968ec6: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 968ece: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 968ed6: mov dword ptr [esp + 0x3c], 0x3f800000 */
  W32((uint32_t)(esp + 0x3cu), 0x3f800000u);
/* 968ede: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 968ee6: call 0x9666c0 */
  esp -= 4; W32(esp, 0x968eebu); SPILL(); f_9666c0(); if (g_unwind) return; RELOAD();
/* 968eeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968eec: call 0x956060 */
  esp -= 4; W32(esp, 0x968ef1u); SPILL(); f_956060(); if (g_unwind) return; RELOAD();
/* 968ef1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968ef2: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 968ef6: call 0x94f340 */
  esp -= 4; W32(esp, 0x968efbu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 968efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968efc: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x968f01u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 968f01: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 968f05: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 968f09: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968f0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968f0e: je 0x968f60 */
  if (zf) goto L_968f60;
L_968f10: /* 968f10: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 968f13: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968f15: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 968f18: je 0x968f60 */
  if (zf) goto L_968f60;
L_968f1a: /* 968f1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_968f20: /* 968f20: mov eax, dword ptr [0xcf788c] */
  eax = R32((uint32_t)(0xcf788cu));
/* 968f25: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 968f29: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 968f2c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 968f2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968f2e: mov dword ptr [0xcf788c], eax */
  W32((uint32_t)(0xcf788cu), eax);
/* 968f33: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 968f36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968f37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968f38: call 0x96fa90 */
  esp -= 4; W32(esp, 0x968f3du); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 968f3d: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 968f41: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 968f44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968f45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968f46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968f47: call 0x970e20 */
  esp -= 4; W32(esp, 0x968f4cu); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 968f4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968f4d: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 968f51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968f52: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x968f57u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 968f57: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 968f59: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 968f5c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968f5e: jne 0x968f20 */
  if (!zf) goto L_968f20;
L_968f60: /* 968f60: mov eax, dword ptr [0xcf84b0] */
  eax = R32((uint32_t)(0xcf84b0u));
/* 968f65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968f67: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 968f6b: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 968f6f: jne 0x968f83 */
  if (!zf) goto L_968f83;
L_968f71: /* 968f71: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 968f76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968f78: jne 0x968f98 */
  if (!zf) goto L_968f98;
L_968f7a: /* 968f7a: mov eax, dword ptr [0xcf84a0] */
  eax = R32((uint32_t)(0xcf84a0u));
/* 968f7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968f81: jne 0x968fd2 */
  if (!zf) goto L_968fd2;
L_968f83: /* 968f83: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 968f87: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 968f8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968f8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968f8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968f8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 968f8f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968f90: call 0x9690f0 */
  esp -= 4; W32(esp, 0x968f95u); SPILL(); f_9690f0(); if (g_unwind) return; RELOAD();
/* 968f95: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968f98: /* 968f98: mov eax, dword ptr [0xcf84a0] */
  eax = R32((uint32_t)(0xcf84a0u));
/* 968f9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968f9f: jne 0x968fd2 */
  if (!zf) goto L_968fd2;
L_968fa1: /* 968fa1: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 968fa6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968fa8: jne 0x968ffc */
  if (!zf) goto L_968ffc;
L_968faa: /* 968faa: mov eax, dword ptr [0xcf84b0] */
  eax = R32((uint32_t)(0xcf84b0u));
/* 968faf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 968fb1: jne 0x968ffc */
  if (!zf) goto L_968ffc;
L_968fb3: /* 968fb3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 968fb7: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 968fbb: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 968fc1: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 968fc3: fmul qword ptr [0xa21738] */
  ST0 = ST0 * (F64((uint32_t)(0xa21738u)));
/* 968fc9: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 968fcb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 968fcd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 968fd0: jp 0x968ffc */
  if (pf) goto L_968ffc;
L_968fd2: /* 968fd2: mov eax, 3 */
  eax = 0x3u;
L_968fd7: /* 968fd7: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 968fdb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 968fdc: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 968fe2: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 968fe5: jne 0x968fd7 */
  if (!zf) goto L_968fd7;
L_968fe7: /* 968fe7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 968feb: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 968fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 968ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 968ff1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 968ff2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 968ff3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 968ff4: call 0x9690f0 */
  esp -= 4; W32(esp, 0x968ff9u); SPILL(); f_9690f0(); if (g_unwind) return; RELOAD();
/* 968ff9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_968ffc: /* 968ffc: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 969000: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969002: je 0x969029 */
  if (zf) goto L_969029;
L_969004: /* 969004: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 969007: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96900a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96900c: je 0x969029 */
  if (zf) goto L_969029;
L_96900e: /* 96900e: mov edi, edi */
  edi = edi;
L_969010: /* 969010: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 969016: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969017: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969018: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96901b: call 0x953a60 */
  esp -= 4; W32(esp, 0x969020u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 969020: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969022: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969025: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969027: jne 0x969010 */
  if (!zf) goto L_969010;
L_969029: /* 969029: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 96902d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96902e: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x969033u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 969033: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 969037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969038: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96903du); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96903d: mov eax, dword ptr [0xcf8414] */
  eax = R32((uint32_t)(0xcf8414u));
/* 969042: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969045: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969047: jne 0x969056 */
  if (!zf) goto L_969056;
L_969049: /* 969049: mov eax, dword ptr [0xcf8528] */
  eax = R32((uint32_t)(0xcf8528u));
/* 96904e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969050: je 0x9690e3 */
  if (zf) goto L_9690e3;
L_969056: /* 969056: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 969059: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96905c: je 0x969067 */
  if (zf) goto L_969067;
L_96905e: /* 96905e: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 969063: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969065: jne 0x9690e3 */
  if (!zf) goto L_9690e3;
L_969067: /* 969067: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 96906a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96906c: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 969072: mov dword ptr [edi + 0x34], edx */
  W32((uint32_t)(edi + 0x34u), edx);
/* 969075: je 0x9690e3 */
  if (zf) goto L_9690e3;
L_969077: /* 969077: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96907a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96907c: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 96907f: je 0x9690e3 */
  if (zf) goto L_9690e3;
L_969081: /* 969081: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 969084: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 969087: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969089: jne 0x96908e */
  if (!zf) goto L_96908e;
L_96908b: /* 96908b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
L_96908e: /* 96908e: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 969091: cmp ecx, dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969097: je 0x9690dd */
  if (zf) goto L_9690dd;
L_969099: /* 969099: mov ecx, dword ptr [0xcf8414] */
  ecx = R32((uint32_t)(0xcf8414u));
/* 96909f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9690a1: je 0x9690b6 */
  if (zf) goto L_9690b6;
L_9690a3: /* 9690a3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9690a5: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 9690a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9690aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9690ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9690ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9690ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9690ae: call 0x96ac60 */
  esp -= 4; W32(esp, 0x9690b3u); SPILL(); f_96ac60(); if (g_unwind) return; RELOAD();
/* 9690b3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9690b6: /* 9690b6: mov eax, dword ptr [0xcf8528] */
  eax = R32((uint32_t)(0xcf8528u));
/* 9690bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9690bd: je 0x9690dd */
  if (zf) goto L_9690dd;
L_9690bf: /* 9690bf: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9690c1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9690c4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9690c7: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 9690cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9690cc: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9690cf: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 9690d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9690d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9690d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9690d5: call 0x96af70 */
  esp -= 4; W32(esp, 0x9690dau); SPILL(); f_96af70(); if (g_unwind) return; RELOAD();
/* 9690da: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9690dd: /* 9690dd: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 9690df: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9690e1: jne 0x969081 */
  if (!zf) goto L_969081;
L_9690e3: /* 9690e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9690e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9690e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9690e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9690e7: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9690ea: ret  */
  esp += 4; SPILL(); return;
}

void f_9690f0(void) {
  LOAD_REGS();
L_9690f0: /* 9690f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9690f1: mov ebp, esp */
  ebp = esp;
/* 9690f3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9690f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9690f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9690fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9690fb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 9690fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9690ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969100: call 0x94f340 */
  esp -= 4; W32(esp, 0x969105u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 969105: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 969108: mov edi, eax */
  edi = eax;
/* 96910a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 96910d: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 969110: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969112: push 0xafe414 */
  { uint32_t v = 0xafe414u; esp -= 4; W32(esp, v); }
/* 969117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969118: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 96911c: call 0x953470 */
  esp -= 4; W32(esp, 0x969121u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969121: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 969124: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 96912a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96912d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96912f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 969132: jnp 0x969180 */
  if (!pf) goto L_969180;
L_969134: /* 969134: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969135: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x96913au); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 96913a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96913d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96913f: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 969143: je 0x969184 */
  if (zf) goto L_969184;
L_969145: /* 969145: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 969148: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96914b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96914d: je 0x969184 */
  if (zf) goto L_969184;
L_96914f: /* 96914f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 969152: fchs  */
  ST0 = -ST0;
/* 969154: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_969158: /* 969158: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96915c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 96915f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969162: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 969165: call 0x970e20 */
  esp -= 4; W32(esp, 0x96916au); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 96916a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96916b: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 96916f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969170: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x969175u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 969175: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969177: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96917a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96917c: jne 0x969158 */
  if (!zf) goto L_969158;
L_96917e: /* 96917e: jmp 0x969184 */
  goto L_969184;
L_969180: /* 969180: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
L_969184: /* 969184: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 969188: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96918a: je 0x969226 */
  if (zf) goto L_969226;
L_969190: /* 969190: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 969193: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 969196: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969198: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 96919c: je 0x969222 */
  if (zf) goto L_969222;
L_9691a2: /* 9691a2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9691a6: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9691ab: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9691ae: xor esi, esi */
  esi = 0;
/* 9691b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9691b2: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9691b6: jle 0x9691f1 */
  if ((zf || sf != of)) goto L_9691f1;
L_9691b8: /* 9691b8: cmp esi, dword ptr [0xcf8418] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8418u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9691be: jne 0x9691d0 */
  if (!zf) goto L_9691d0;
L_9691c0: /* 9691c0: push 0xafdf20 */
  { uint32_t v = 0xafdf20u; esp -= 4; W32(esp, v); }
/* 9691c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9691c6: call 0x953470 */
  esp -= 4; W32(esp, 0x9691cbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9691cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9691ce: jmp 0x9691e7 */
  goto L_9691e7;
L_9691d0: /* 9691d0: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* 9691d3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9691d6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9691d9: push 0xafe40c */
  { uint32_t v = 0xafe40cu; esp -= 4; W32(esp, v); }
/* 9691de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9691df: call 0x953470 */
  esp -= 4; W32(esp, 0x9691e4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9691e4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9691e7: /* 9691e7: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9691ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9691ed: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9691ef: jl 0x9691b8 */
  if ((sf != of)) goto L_9691b8;
L_9691f1: /* 9691f1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9691f5: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9691f8: je 0x96920a */
  if (zf) goto L_96920a;
L_9691fa: /* 9691fa: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 969200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969202: call 0x953a60 */
  esp -= 4; W32(esp, 0x969207u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 969207: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96920a: /* 96920a: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96920f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969210: call 0x953470 */
  esp -= 4; W32(esp, 0x969215u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969215: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 969219: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 96921b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96921e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969220: jne 0x9691a2 */
  if (!zf) goto L_9691a2;
L_969222: /* 969222: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_969226: /* 969226: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 969229: cmp dword ptr [esp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96922d: je 0x96923c */
  if (zf) goto L_96923c;
L_96922f: /* 96922f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 969233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969234: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x969239u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 969239: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96923c: /* 96923c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96923d: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969242: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969243: call 0x953470 */
  esp -= 4; W32(esp, 0x969248u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969248: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96924b: xor esi, esi */
  esi = 0;
/* 96924d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96924f: jle 0x969265 */
  if ((zf || sf != of)) goto L_969265;
L_969251: /* 969251: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969252: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969257: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969258: call 0x953470 */
  esp -= 4; W32(esp, 0x96925du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96925d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969260: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 969261: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 969263: jl 0x969251 */
  if ((sf != of)) goto L_969251;
L_969265: /* 969265: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 969268: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 96926b: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96926e: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 969272: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 969275: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 969279: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 96927b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96927e: push 0xafe3ec */
  { uint32_t v = 0xafe3ecu; esp -= 4; W32(esp, v); }
/* 969283: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969284: call 0x953470 */
  esp -= 4; W32(esp, 0x969289u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969289: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96928c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96928d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96928e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96928f: mov esp, ebp */
  esp = ebp;
/* 969291: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 969292: ret  */
  esp += 4; SPILL(); return;
}

void f_9692a0(void) {
  LOAD_REGS();
L_9692a0: /* 9692a0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9692a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9692a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9692a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9692a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9692a7: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 9692ab: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 9692af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9692b0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9692b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9692b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9692b6: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 9692be: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 9692c6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 9692ce: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 9692d6: mov dword ptr [esp + 0x38], 0x3f800000 */
  W32((uint32_t)(esp + 0x38u), 0x3f800000u);
/* 9692de: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 9692e6: call 0x9666c0 */
  esp -= 4; W32(esp, 0x9692ebu); SPILL(); f_9666c0(); if (g_unwind) return; RELOAD();
/* 9692eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9692ec: call 0x956060 */
  esp -= 4; W32(esp, 0x9692f1u); SPILL(); f_956060(); if (g_unwind) return; RELOAD();
/* 9692f1: mov edx, dword ptr [0xcf8b48] */
  edx = R32((uint32_t)(0xcf8b48u));
/* 9692f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9692f8: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 9692fc: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x969301u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 969301: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 969305: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 969309: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96930c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96930e: je 0x96933a */
  if (zf) goto L_96933a;
L_969310: /* 969310: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 969313: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969315: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969317: je 0x96933a */
  if (zf) goto L_96933a;
L_969319: /* 969319: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_969320: /* 969320: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 969323: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969324: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 969328: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969329: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96932c: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x969331u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 969331: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969333: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969336: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969338: jne 0x969320 */
  if (!zf) goto L_969320;
L_96933a: /* 96933a: mov eax, dword ptr [0xcf84b0] */
  eax = R32((uint32_t)(0xcf84b0u));
/* 96933f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969341: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 969345: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 969349: jne 0x96935d */
  if (!zf) goto L_96935d;
L_96934b: /* 96934b: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 969350: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969352: jne 0x969372 */
  if (!zf) goto L_969372;
L_969354: /* 969354: mov eax, dword ptr [0xcf84a0] */
  eax = R32((uint32_t)(0xcf84a0u));
/* 969359: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96935b: jne 0x9693ac */
  if (!zf) goto L_9693ac;
L_96935d: /* 96935d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 969361: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 969365: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969366: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969367: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969368: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969369: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96936a: call 0x9690f0 */
  esp -= 4; W32(esp, 0x96936fu); SPILL(); f_9690f0(); if (g_unwind) return; RELOAD();
/* 96936f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969372: /* 969372: mov eax, dword ptr [0xcf84a0] */
  eax = R32((uint32_t)(0xcf84a0u));
/* 969377: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969379: jne 0x9693ac */
  if (!zf) goto L_9693ac;
L_96937b: /* 96937b: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 969380: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969382: jne 0x9693d6 */
  if (!zf) goto L_9693d6;
L_969384: /* 969384: mov eax, dword ptr [0xcf84b0] */
  eax = R32((uint32_t)(0xcf84b0u));
/* 969389: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96938b: jne 0x9693d6 */
  if (!zf) goto L_9693d6;
L_96938d: /* 96938d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 969391: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 969395: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 96939b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 96939d: fmul qword ptr [0xa21738] */
  ST0 = ST0 * (F64((uint32_t)(0xa21738u)));
/* 9693a3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9693a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9693a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9693aa: jp 0x9693d6 */
  if (pf) goto L_9693d6;
L_9693ac: /* 9693ac: mov eax, 3 */
  eax = 0x3u;
L_9693b1: /* 9693b1: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 9693b5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9693b6: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 9693bc: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 9693bf: jne 0x9693b1 */
  if (!zf) goto L_9693b1;
L_9693c1: /* 9693c1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9693c5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9693c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9693ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9693cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9693cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9693cd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9693ce: call 0x9690f0 */
  esp -= 4; W32(esp, 0x9693d3u); SPILL(); f_9690f0(); if (g_unwind) return; RELOAD();
/* 9693d3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9693d6: /* 9693d6: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 9693da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9693db: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9693e0u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9693e0: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 9693e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9693e5: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9693eau); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9693ea: mov eax, dword ptr [0xcf8414] */
  eax = R32((uint32_t)(0xcf8414u));
/* 9693ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9693f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9693f4: jne 0x969403 */
  if (!zf) goto L_969403;
L_9693f6: /* 9693f6: mov eax, dword ptr [0xcf8528] */
  eax = R32((uint32_t)(0xcf8528u));
/* 9693fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9693fd: je 0x9694d3 */
  if (zf) goto L_9694d3;
L_969403: /* 969403: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 969406: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969409: je 0x969418 */
  if (zf) goto L_969418;
L_96940b: /* 96940b: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 969410: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969412: jne 0x9694d3 */
  if (!zf) goto L_9694d3;
L_969418: /* 969418: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 96941b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96941d: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 969423: mov dword ptr [edi + 0x34], edx */
  W32((uint32_t)(edi + 0x34u), edx);
/* 969426: je 0x9694d3 */
  if (zf) goto L_9694d3;
L_96942c: /* 96942c: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96942f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969431: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 969434: je 0x9694d3 */
  if (zf) goto L_9694d3;
L_96943a: /* 96943a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_969440: /* 969440: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 969443: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 969449: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96944c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96944e: je 0x9694c9 */
  if (zf) goto L_9694c9;
L_969450: /* 969450: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 969453: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 969459: mov ecx, ebx */
  ecx = ebx;
/* 96945b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96945d: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 969460: sub ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 969463: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 969465: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 969468: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969469: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96946a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96946b: call 0x94f0c0 */
  esp -= 4; W32(esp, 0x969470u); SPILL(); f_94f0c0(); if (g_unwind) return; RELOAD();
/* 969470: mov ecx, dword ptr [0xcf8414] */
  ecx = R32((uint32_t)(0xcf8414u));
/* 969476: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969479: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96947b: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 96947f: je 0x969496 */
  if (zf) goto L_969496;
L_969481: /* 969481: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 969485: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969486: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969487: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969488: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969489: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96948a: call 0x96ac60 */
  esp -= 4; W32(esp, 0x96948fu); SPILL(); f_96ac60(); if (g_unwind) return; RELOAD();
/* 96948f: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 969493: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969496: /* 969496: mov ecx, dword ptr [0xcf8528] */
  ecx = R32((uint32_t)(0xcf8528u));
/* 96949c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96949e: je 0x9694bc */
  if (zf) goto L_9694bc;
L_9694a0: /* 9694a0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9694a3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 9694a6: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 9694aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9694ab: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 9694ae: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9694b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9694b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9694b3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9694b4: call 0x96af70 */
  esp -= 4; W32(esp, 0x9694b9u); SPILL(); f_96af70(); if (g_unwind) return; RELOAD();
/* 9694b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9694bc: /* 9694bc: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 9694c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9694c1: call 0x94ee00 */
  esp -= 4; W32(esp, 0x9694c6u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 9694c6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9694c9: /* 9694c9: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 9694cb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9694cd: jne 0x969440 */
  if (!zf) goto L_969440;
L_9694d3: /* 9694d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9694d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9694d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9694d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9694d7: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9694da: ret  */
  esp += 4; SPILL(); return;
}

void f_9694e0(void) {
  LOAD_REGS();
L_9694e0: /* 9694e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9694e1: mov ebp, esp */
  ebp = esp;
/* 9694e3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9694e6: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9694e9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9694ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9694ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9694ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9694f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9694f1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9694f4: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 9694fc: je 0x96950c */
  if (zf) goto L_96950c;
L_9694fe: /* 9694fe: push 0xafe454 */
  { uint32_t v = 0xafe454u; esp -= 4; W32(esp, v); }
/* 969503: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969504: call 0x953470 */
  esp -= 4; W32(esp, 0x969509u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96950c: /* 96950c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 96950f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969510: call 0x956060 */
  esp -= 4; W32(esp, 0x969515u); SPILL(); f_956060(); if (g_unwind) return; RELOAD();
/* 969515: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969516: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96951a: call 0x94f340 */
  esp -= 4; W32(esp, 0x96951fu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96951f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969520: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x969525u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 969525: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 969529: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 96952d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969530: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969532: je 0x969583 */
  if (zf) goto L_969583;
L_969534: /* 969534: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 969537: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969539: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 96953c: je 0x969580 */
  if (zf) goto L_969580;
L_96953e: /* 96953e: mov edi, edi */
  edi = edi;
L_969540: /* 969540: mov eax, dword ptr [0xcf788c] */
  eax = R32((uint32_t)(0xcf788cu));
/* 969545: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 969548: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 969549: mov dword ptr [0xcf788c], eax */
  W32((uint32_t)(0xcf788cu), eax);
/* 96954e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 969551: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 969555: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969556: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969557: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969558: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96955du); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96955d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 969561: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 969564: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969565: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969566: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969567: call 0x970e20 */
  esp -= 4; W32(esp, 0x96956cu); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 96956c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96956d: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 969571: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969572: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x969577u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 969577: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 969579: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96957c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96957e: jne 0x969540 */
  if (!zf) goto L_969540;
L_969580: /* 969580: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_969583: /* 969583: push 0xafe448 */
  { uint32_t v = 0xafe448u; esp -= 4; W32(esp, v); }
/* 969588: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969589: call 0x953470 */
  esp -= 4; W32(esp, 0x96958eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96958e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 969592: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969595: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969597: je 0x96961e */
  if (zf) goto L_96961e;
L_96959d: /* 96959d: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9695a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9695a2: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 9695a5: je 0x9695f8 */
  if (zf) goto L_9695f8;
L_9695a7: /* 9695a7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9695ab: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9695ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9695b0: je 0x9695bc */
  if (zf) goto L_9695bc;
L_9695b2: /* 9695b2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9695ba: jmp 0x9695ca */
  goto L_9695ca;
L_9695bc: /* 9695bc: push 0xafe454 */
  { uint32_t v = 0xafe454u; esp -= 4; W32(esp, v); }
/* 9695c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9695c2: call 0x953470 */
  esp -= 4; W32(esp, 0x9695c7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9695c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9695ca: /* 9695ca: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9695cd: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9695d0: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9695d4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 9695d7: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9695db: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9695dd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9695e0: push 0xafe42c */
  { uint32_t v = 0xafe42cu; esp -= 4; W32(esp, v); }
/* 9695e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9695e6: call 0x953470 */
  esp -= 4; W32(esp, 0x9695ebu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9695eb: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 9695ed: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9695f0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9695f2: jne 0x9695a7 */
  if (!zf) goto L_9695a7;
L_9695f4: /* 9695f4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_9695f8: /* 9695f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9695fa: je 0x96961e */
  if (zf) goto L_96961e;
L_9695fc: /* 9695fc: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 9695ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969601: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969603: je 0x96961e */
  if (zf) goto L_96961e;
L_969605: /* 969605: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 96960b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96960c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96960d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 969610: call 0x953a60 */
  esp -= 4; W32(esp, 0x969615u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 969615: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969617: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96961a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96961c: jne 0x969605 */
  if (!zf) goto L_969605;
L_96961e: /* 96961e: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 969622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969623: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x969628u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 969628: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 96962c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96962d: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x969632u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 969632: push 0xafe428 */
  { uint32_t v = 0xafe428u; esp -= 4; W32(esp, v); }
/* 969637: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969638: call 0x953470 */
  esp -= 4; W32(esp, 0x96963du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96963d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969640: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 969641: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 969642: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 969643: mov esp, ebp */
  esp = ebp;
/* 969645: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 969646: ret  */
  esp += 4; SPILL(); return;
}

void f_969650(void) {
  LOAD_REGS();
L_969650: /* 969650: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 969654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969655: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969656: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969657: call 0x956060 */
  esp -= 4; W32(esp, 0x96965cu); SPILL(); f_956060(); if (g_unwind) return; RELOAD();
/* 96965c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 969660: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 969664: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969667: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96966a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 96966e: jne 0x969689 */
  if (!zf) goto L_969689;
L_969670: /* 969670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969671: call 0x94f340 */
  esp -= 4; W32(esp, 0x969676u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 969676: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969677: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 96967c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96967d: call 0x953470 */
  esp -= 4; W32(esp, 0x969682u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969682: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 969686: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969689: /* 969689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96968b: je 0x9696b7 */
  if (zf) goto L_9696b7;
L_96968d: /* 96968d: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 969690: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969692: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969694: je 0x9696b7 */
  if (zf) goto L_9696b7;
L_969696: /* 969696: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 969699: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96969a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96969d: call 0x95f210 */
  esp -= 4; W32(esp, 0x9696a2u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 9696a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9696a3: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 9696a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9696a9: call 0x953470 */
  esp -= 4; W32(esp, 0x9696aeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9696ae: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9696b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9696b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9696b5: jne 0x969696 */
  if (!zf) goto L_969696;
L_9696b7: /* 9696b7: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9696bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9696bd: call 0x953470 */
  esp -= 4; W32(esp, 0x9696c2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9696c2: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 9696c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9696c7: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x9696ccu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 9696cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9696cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9696d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9696d1: ret  */
  esp += 4; SPILL(); return;
}

void f_9696e0(void) {
  LOAD_REGS();
L_9696e0: /* 9696e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9696e1: mov ebp, esp */
  ebp = esp;
/* 9696e3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9696e6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9696e9: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 9696ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9696ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9696f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9696f1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 9696f4: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 9696f7: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 9696fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9696fe: jne 0x9698c7 */
  if (!zf) goto L_9698c7;
L_969704: /* 969704: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 969707: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96970a: je 0x969719 */
  if (zf) goto L_969719;
L_96970c: /* 96970c: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 969711: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969713: jne 0x9698c7 */
  if (!zf) goto L_9698c7;
L_969719: /* 969719: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 96971c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96971e: je 0x9698c7 */
  if (zf) goto L_9698c7;
L_969724: /* 969724: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 969727: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96972a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96972c: je 0x9698c7 */
  if (zf) goto L_9698c7;
L_969732: /* 969732: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_969735: /* 969735: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 969738: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 96973c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96973f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969741: jne 0x969746 */
  if (!zf) goto L_969746;
L_969743: /* 969743: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
L_969746: /* 969746: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 969749: cmp ecx, dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96974f: je 0x9698b9 */
  if (zf) goto L_9698b9;
L_969755: /* 969755: mov ecx, dword ptr [0xcf8538] */
  ecx = R32((uint32_t)(0xcf8538u));
/* 96975b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96975d: je 0x96976c */
  if (zf) goto L_96976c;
L_96975f: /* 96975f: test dword ptr [eax + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969766: je 0x9698b9 */
  if (zf) goto L_9698b9;
L_96976c: /* 96976c: mov ecx, dword ptr [0xcf8414] */
  ecx = R32((uint32_t)(0xcf8414u));
/* 969772: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969774: je 0x96978d */
  if (zf) goto L_96978d;
L_969776: /* 969776: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 969779: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 96977b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96977c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96977d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96977e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96977f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969780: call 0x96ac60 */
  esp -= 4; W32(esp, 0x969785u); SPILL(); f_96ac60(); if (g_unwind) return; RELOAD();
/* 969785: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969788: jmp 0x9698b9 */
  goto L_9698b9;
L_96978d: /* 96978d: mov ecx, dword ptr [0xcf8418] */
  ecx = R32((uint32_t)(0xcf8418u));
/* 969793: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 969795: jl 0x9697ab */
  if ((sf != of)) goto L_9697ab;
L_969797: /* 969797: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 96979a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96979b: push 0xafe48c */
  { uint32_t v = 0xafe48cu; esp -= 4; W32(esp, v); }
/* 9697a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9697a1: call 0x953470 */
  esp -= 4; W32(esp, 0x9697a6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9697a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9697a9: jmp 0x9697d1 */
  goto L_9697d1;
L_9697ab: /* 9697ab: inc dword ptr [0xcf8be4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8be4u), r);
  }
/* 9697b1: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 9697b4: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 9697b7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9697ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9697bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9697bc: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9697c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9697c3: push 0xafe474 */
  { uint32_t v = 0xafe474u; esp -= 4; W32(esp, v); }
/* 9697c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9697c9: call 0x953470 */
  esp -= 4; W32(esp, 0x9697ceu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9697ce: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9697d1: /* 9697d1: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9697d3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9697d5: je 0x969889 */
  if (zf) goto L_969889;
L_9697db: /* 9697db: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9697de: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 9697e2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9697e4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9697e6: je 0x969889 */
  if (zf) goto L_969889;
L_9697ec: /* 9697ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9697f0: /* 9697f0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9697f4: mov eax, dword ptr [0xcf788c] */
  eax = R32((uint32_t)(0xcf788cu));
/* 9697f9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9697fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9697fd: mov dword ptr [0xcf788c], eax */
  W32((uint32_t)(0xcf788cu), eax);
/* 969802: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 969806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969807: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 96980b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 96980e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96980f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969810: call 0x96fa90 */
  esp -= 4; W32(esp, 0x969815u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 969815: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 969819: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 96981c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96981d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96981e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96981f: call 0x970e20 */
  esp -= 4; W32(esp, 0x969824u); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 969824: mov edi, eax */
  edi = eax;
/* 969826: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96982b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96982e: xor esi, esi */
  esi = 0;
/* 969830: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 969832: jle 0x96985d */
  if ((zf || sf != of)) goto L_96985d;
L_969834: /* 969834: cmp esi, dword ptr [0xcf8418] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8418u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96983a: je 0x969853 */
  if (zf) goto L_969853;
L_96983c: /* 96983c: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* 96983f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 969842: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 969845: push 0xafe40c */
  { uint32_t v = 0xafe40cu; esp -= 4; W32(esp, v); }
/* 96984a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96984b: call 0x953470 */
  esp -= 4; W32(esp, 0x969850u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969850: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969853: /* 969853: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 969858: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 969859: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96985b: jl 0x969834 */
  if ((sf != of)) goto L_969834;
L_96985d: /* 96985d: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 969862: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969863: call 0x953470 */
  esp -= 4; W32(esp, 0x969868u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969868: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 96986e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96986f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969870: call 0x953a60 */
  esp -= 4; W32(esp, 0x969875u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 969875: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 969879: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 96987b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 96987e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969881: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969883: jne 0x9697f0 */
  if (!zf) goto L_9697f0;
L_969889: /* 969889: mov eax, dword ptr [0xcf8418] */
  eax = R32((uint32_t)(0xcf8418u));
/* 96988e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 969890: jl 0x9698b9 */
  if ((sf != of)) goto L_9698b9;
L_969892: /* 969892: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 969895: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 969898: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96989b: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96989f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9698a2: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9698a6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9698a8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9698ab: push 0xafe458 */
  { uint32_t v = 0xafe458u; esp -= 4; W32(esp, v); }
/* 9698b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9698b1: call 0x953470 */
  esp -= 4; W32(esp, 0x9698b6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9698b6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9698b9: /* 9698b9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9698bd: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 9698bf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9698c1: jne 0x969735 */
  if (!zf) goto L_969735;
L_9698c7: /* 9698c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9698c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9698c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9698ca: mov esp, ebp */
  esp = ebp;
/* 9698cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9698cd: ret  */
  esp += 4; SPILL(); return;
}

void f_9698d0(void) {
  LOAD_REGS();
L_9698d0: /* 9698d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9698d1: mov ebp, esp */
  ebp = esp;
/* 9698d3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9698d6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9698d9: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 9698de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9698df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9698e0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 9698e3: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 9698e6: mov eax, dword ptr [0xcf84a8] */
  eax = R32((uint32_t)(0xcf84a8u));
/* 9698eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9698ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9698ee: jne 0x969a88 */
  if (!zf) goto L_969a88;
L_9698f4: /* 9698f4: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 9698f7: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9698fa: je 0x969909 */
  if (zf) goto L_969909;
L_9698fc: /* 9698fc: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 969901: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969903: jne 0x969a88 */
  if (!zf) goto L_969a88;
L_969909: /* 969909: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 96990c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96990e: je 0x969a88 */
  if (zf) goto L_969a88;
L_969914: /* 969914: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 969917: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96991a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96991c: je 0x969a88 */
  if (zf) goto L_969a88;
L_969922: /* 969922: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_969925: /* 969925: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 969928: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 96992e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 969931: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969933: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 969937: je 0x969a7e */
  if (zf) goto L_969a7e;
L_96993d: /* 96993d: mov ecx, dword ptr [0xcf8538] */
  ecx = R32((uint32_t)(0xcf8538u));
/* 969943: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969945: je 0x969954 */
  if (zf) goto L_969954;
L_969947: /* 969947: test dword ptr [edi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96994e: je 0x969a7e */
  if (zf) goto L_969a7e;
L_969954: /* 969954: sub eax, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 969957: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96995d: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 969960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 969962: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 969965: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969966: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 969969: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96996a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96996b: call 0x94f0c0 */
  esp -= 4; W32(esp, 0x969970u); SPILL(); f_94f0c0(); if (g_unwind) return; RELOAD();
/* 969970: mov ecx, dword ptr [0xcf8414] */
  ecx = R32((uint32_t)(0xcf8414u));
/* 969976: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969979: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96997b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 96997f: je 0x969996 */
  if (zf) goto L_969996;
L_969981: /* 969981: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 969984: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969986: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969987: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969988: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969989: call 0x96ac60 */
  esp -= 4; W32(esp, 0x96998eu); SPILL(); f_96ac60(); if (g_unwind) return; RELOAD();
/* 96998e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969991: jmp 0x969a6d */
  goto L_969a6d;
L_969996: /* 969996: mov eax, dword ptr [0xcf8418] */
  eax = R32((uint32_t)(0xcf8418u));
/* 96999b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96999d: jl 0x9699ae */
  if ((sf != of)) goto L_9699ae;
L_96999f: /* 96999f: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 9699a2: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9699a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9699a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9699a7: push 0xafe4bc */
  { uint32_t v = 0xafe4bcu; esp -= 4; W32(esp, v); }
/* 9699ac: jmp 0x9699c1 */
  goto L_9699c1;
L_9699ae: /* 9699ae: inc dword ptr [0xcf8be4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8be4u), r);
  }
/* 9699b4: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 9699b7: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 9699ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9699bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9699bc: push 0xafe4a0 */
  { uint32_t v = 0xafe4a0u; esp -= 4; W32(esp, v); }
L_9699c1: /* 9699c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9699c2: call 0x953470 */
  esp -= 4; W32(esp, 0x9699c7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9699c7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9699cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9699ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9699d0: je 0x969a3d */
  if (zf) goto L_969a3d;
L_9699d2: /* 9699d2: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9699d5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9699d8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9699da: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9699de: je 0x969a3d */
  if (zf) goto L_969a3d;
L_9699e0: /* 9699e0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9699e4: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9699e9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9699ec: xor esi, esi */
  esi = 0;
/* 9699ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9699f0: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 9699f4: jle 0x969a22 */
  if ((zf || sf != of)) goto L_969a22;
L_9699f6: /* 9699f6: cmp esi, dword ptr [0xcf8418] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8418u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9699fc: je 0x969a18 */
  if (zf) goto L_969a18;
L_9699fe: /* 9699fe: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 969a01: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 969a04: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 969a07: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 969a0a: push 0xafe40c */
  { uint32_t v = 0xafe40cu; esp -= 4; W32(esp, v); }
/* 969a0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969a10: call 0x953470 */
  esp -= 4; W32(esp, 0x969a15u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969a15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969a18: /* 969a18: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 969a1d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 969a1e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 969a20: jl 0x9699f6 */
  if ((sf != of)) goto L_9699f6;
L_969a22: /* 969a22: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 969a27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969a28: call 0x953470 */
  esp -= 4; W32(esp, 0x969a2du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969a2d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 969a31: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 969a33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969a36: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969a38: jne 0x9699e0 */
  if (!zf) goto L_9699e0;
L_969a3a: /* 969a3a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_969a3d: /* 969a3d: mov eax, dword ptr [0xcf8418] */
  eax = R32((uint32_t)(0xcf8418u));
/* 969a42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 969a44: jl 0x969a6d */
  if ((sf != of)) goto L_969a6d;
L_969a46: /* 969a46: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 969a49: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 969a4c: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 969a4f: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 969a53: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 969a56: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 969a5a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 969a5c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 969a5f: push 0xafe458 */
  { uint32_t v = 0xafe458u; esp -= 4; W32(esp, v); }
/* 969a64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969a65: call 0x953470 */
  esp -= 4; W32(esp, 0x969a6au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969a6a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969a6d: /* 969a6d: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 969a71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969a72: call 0x94ee00 */
  esp -= 4; W32(esp, 0x969a77u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 969a77: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 969a7b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969a7e: /* 969a7e: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 969a80: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969a82: jne 0x969925 */
  if (!zf) goto L_969925;
L_969a88: /* 969a88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 969a89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 969a8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 969a8b: mov esp, ebp */
  esp = ebp;
/* 969a8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 969a8e: ret  */
  esp += 4; SPILL(); return;
}

void f_969a90(void) {
  LOAD_REGS();
L_969a90: /* 969a90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 969a91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969a92: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 969a96: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969a99: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969a9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969a9d: je 0x969aac */
  if (zf) goto L_969aac;
L_969a9f: /* 969a9f: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 969aa4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969aa6: jne 0x969ba7 */
  if (!zf) goto L_969ba7;
L_969aac: /* 969aac: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 969aaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969ab1: je 0x969ba7 */
  if (zf) goto L_969ba7;
L_969ab7: /* 969ab7: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 969aba: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969abc: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 969abf: je 0x969ba7 */
  if (zf) goto L_969ba7;
L_969ac5: /* 969ac5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969ac6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 969aca: jmp 0x969ad0 */
  goto L_969ad0;
L_969acc: /* 969acc: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
L_969ad0: /* 969ad0: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 969ad4: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 969ad7: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969ada: jne 0x969af0 */
  if (!zf) goto L_969af0;
L_969adc: /* 969adc: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 969ae1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969ae2: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969ae7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969ae8: call 0x953470 */
  esp -= 4; W32(esp, 0x969aedu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969aed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969af0: /* 969af0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 969af4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969af5: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969afa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969afb: call 0x953470 */
  esp -= 4; W32(esp, 0x969b00u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969b00: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 969b03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969b06: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969b08: jne 0x969b43 */
  if (!zf) goto L_969b43;
L_969b0a: /* 969b0a: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 969b0c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969b0e: je 0x969b8d */
  if (zf) goto L_969b8d;
L_969b10: /* 969b10: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 969b13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969b15: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 969b18: je 0x969b8d */
  if (zf) goto L_969b8d;
L_969b1a: /* 969b1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_969b20: /* 969b20: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 969b23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969b24: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 969b27: call 0x95f210 */
  esp -= 4; W32(esp, 0x969b2cu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 969b2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969b2d: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969b32: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969b33: call 0x953470 */
  esp -= 4; W32(esp, 0x969b38u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969b38: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969b3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969b3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969b3f: jne 0x969b20 */
  if (!zf) goto L_969b20;
L_969b41: /* 969b41: jmp 0x969b8d */
  goto L_969b8d;
L_969b43: /* 969b43: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 969b45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969b47: je 0x969b8d */
  if (zf) goto L_969b8d;
L_969b49: /* 969b49: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* 969b4c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969b4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969b50: je 0x969b8d */
  if (zf) goto L_969b8d;
L_969b52: /* 969b52: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 969b55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969b56: call 0x95f210 */
  esp -= 4; W32(esp, 0x969b5bu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 969b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969b5c: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969b61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969b62: call 0x953470 */
  esp -= 4; W32(esp, 0x969b67u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969b67: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 969b69: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 969b6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969b6f: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969b71: jne 0x969b78 */
  if (!zf) goto L_969b78;
L_969b73: /* 969b73: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 969b76: jmp 0x969b87 */
  goto L_969b87;
L_969b78: /* 969b78: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 969b7b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969b7d: jne 0x969b84 */
  if (!zf) goto L_969b84;
L_969b7f: /* 969b7f: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 969b82: jmp 0x969b87 */
  goto L_969b87;
L_969b84: /* 969b84: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_969b87: /* 969b87: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969b89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969b8b: jne 0x969b52 */
  if (!zf) goto L_969b52;
L_969b8d: /* 969b8d: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 969b92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969b93: call 0x953470 */
  esp -= 4; W32(esp, 0x969b98u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969b98: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 969b9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969b9e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969ba0: jne 0x969acc */
  if (!zf) goto L_969acc;
L_969ba6: /* 969ba6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_969ba7: /* 969ba7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 969ba8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 969ba9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 969baa: ret  */
  esp += 4; SPILL(); return;
}

void f_969bb0(void) {
  LOAD_REGS();
L_969bb0: /* 969bb0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 969bb4: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969bb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969bb8: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 969bbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969bbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969bbe: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 969bc2: je 0x969bc9 */
  if (zf) goto L_969bc9;
L_969bc4: /* 969bc4: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969bc7: jne 0x969be1 */
  if (!zf) goto L_969be1;
L_969bc9: /* 969bc9: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 969bcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969bcd: call 0x94f340 */
  esp -= 4; W32(esp, 0x969bd2u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 969bd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969bd3: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969bd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969bd9: call 0x953470 */
  esp -= 4; W32(esp, 0x969bdeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969bde: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969be1: /* 969be1: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 969be4: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969be7: jne 0x969c5e */
  if (!zf) goto L_969c5e;
L_969be9: /* 969be9: cmp dword ptr [0xcf85cc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 969bf0: jle 0x969bf7 */
  if ((zf || sf != of)) goto L_969bf7;
L_969bf2: /* 969bf2: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969bf5: je 0x969c5e */
  if (zf) goto L_969c5e;
L_969bf7: /* 969bf7: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 969bfa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969bfc: je 0x969c91 */
  if (zf) goto L_969c91;
L_969c02: /* 969c02: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* 969c05: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969c07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969c09: je 0x969c91 */
  if (zf) goto L_969c91;
L_969c0f: /* 969c0f: nop  */
L_969c10: /* 969c10: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 969c13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969c14: call 0x95f210 */
  esp -= 4; W32(esp, 0x969c19u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 969c19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969c1a: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969c1f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969c20: call 0x953470 */
  esp -= 4; W32(esp, 0x969c25u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969c25: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 969c28: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 969c2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969c2e: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969c30: jne 0x969c37 */
  if (!zf) goto L_969c37;
L_969c32: /* 969c32: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 969c35: jmp 0x969c46 */
  goto L_969c46;
L_969c37: /* 969c37: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 969c3a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969c3c: jne 0x969c43 */
  if (!zf) goto L_969c43;
L_969c3e: /* 969c3e: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 969c41: jmp 0x969c46 */
  goto L_969c46;
L_969c43: /* 969c43: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_969c46: /* 969c46: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969c48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969c4a: jne 0x969c10 */
  if (!zf) goto L_969c10;
L_969c4c: /* 969c4c: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 969c51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969c52: call 0x953470 */
  esp -= 4; W32(esp, 0x969c57u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969c57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969c5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 969c5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 969c5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 969c5d: ret  */
  esp += 4; SPILL(); return;
L_969c5e: /* 969c5e: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 969c61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969c63: je 0x969c91 */
  if (zf) goto L_969c91;
L_969c65: /* 969c65: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 969c68: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969c6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969c6c: je 0x969c91 */
  if (zf) goto L_969c91;
L_969c6e: /* 969c6e: mov edi, edi */
  edi = edi;
L_969c70: /* 969c70: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 969c73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969c74: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 969c77: call 0x95f210 */
  esp -= 4; W32(esp, 0x969c7cu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 969c7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969c7d: push 0xafe408 */
  { uint32_t v = 0xafe408u; esp -= 4; W32(esp, v); }
/* 969c82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969c83: call 0x953470 */
  esp -= 4; W32(esp, 0x969c88u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969c88: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 969c8a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969c8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969c8f: jne 0x969c70 */
  if (!zf) goto L_969c70;
L_969c91: /* 969c91: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 969c96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 969c97: call 0x953470 */
  esp -= 4; W32(esp, 0x969c9cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969c9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969c9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 969ca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 969ca1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 969ca2: ret  */
  esp += 4; SPILL(); return;
}

void f_969cb0(void) {
  LOAD_REGS();
L_969cb0: /* 969cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969cb1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 969cb5: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969cb8: jne 0x969cc8 */
  if (!zf) goto L_969cc8;
L_969cba: /* 969cba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 969cbb: mov dword ptr [esp + 8], 0xafe824 */
  W32((uint32_t)(esp + 0x8u), 0xafe824u);
/* 969cc3: jmp 0x953470 */
  SPILL(); f_953470(); return;
L_969cc8: /* 969cc8: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969ccb: jne 0x969cdb */
  if (!zf) goto L_969cdb;
L_969ccd: /* 969ccd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 969cce: mov dword ptr [esp + 8], 0xafe810 */
  W32((uint32_t)(esp + 0x8u), 0xafe810u);
/* 969cd6: jmp 0x953470 */
  SPILL(); f_953470(); return;
L_969cdb: /* 969cdb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969cdd: jne 0x969ced */
  if (!zf) goto L_969ced;
L_969cdf: /* 969cdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 969ce0: mov dword ptr [esp + 8], 0xafe804 */
  W32((uint32_t)(esp + 0x8u), 0xafe804u);
/* 969ce8: jmp 0x953470 */
  SPILL(); f_953470(); return;
L_969ced: /* 969ced: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 969cf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969cf3: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 969cf7: mov dword ptr [0xcf8c50], eax */
  W32((uint32_t)(0xcf8c50u), eax);
/* 969cfc: mov dword ptr [0xcf8548], 0 */
  W32((uint32_t)(0xcf8548u), 0x0u);
/* 969d06: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 969d09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969d0a: push 0xafe7fc */
  { uint32_t v = 0xafe7fcu; esp -= 4; W32(esp, v); }
/* 969d0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969d10: call 0x953470 */
  esp -= 4; W32(esp, 0x969d15u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969d15: push 0xafe7ec */
  { uint32_t v = 0xafe7ecu; esp -= 4; W32(esp, v); }
/* 969d1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969d1b: call 0x953470 */
  esp -= 4; W32(esp, 0x969d20u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969d20: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969d23: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969d26: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969d29: je 0x969d32 */
  if (zf) goto L_969d32;
L_969d2b: /* 969d2b: push 0xafe7e4 */
  { uint32_t v = 0xafe7e4u; esp -= 4; W32(esp, v); }
/* 969d30: jmp 0x969d37 */
  goto L_969d37;
L_969d32: /* 969d32: push 0xafe7dc */
  { uint32_t v = 0xafe7dcu; esp -= 4; W32(esp, v); }
L_969d37: /* 969d37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969d38: call 0x953470 */
  esp -= 4; W32(esp, 0x969d3du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969d3d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969d40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969d43: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969d46: je 0x969d56 */
  if (zf) goto L_969d56;
L_969d48: /* 969d48: push 0xafe7d0 */
  { uint32_t v = 0xafe7d0u; esp -= 4; W32(esp, v); }
/* 969d4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969d4e: call 0x953470 */
  esp -= 4; W32(esp, 0x969d53u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969d53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969d56: /* 969d56: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969d5a: je 0x969d6a */
  if (zf) goto L_969d6a;
L_969d5c: /* 969d5c: push 0xafe7c0 */
  { uint32_t v = 0xafe7c0u; esp -= 4; W32(esp, v); }
/* 969d61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969d62: call 0x953470 */
  esp -= 4; W32(esp, 0x969d67u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969d67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969d6a: /* 969d6a: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969d6d: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969d70: je 0x969d80 */
  if (zf) goto L_969d80;
L_969d72: /* 969d72: push 0xafe7b4 */
  { uint32_t v = 0xafe7b4u; esp -= 4; W32(esp, v); }
/* 969d77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969d78: call 0x953470 */
  esp -= 4; W32(esp, 0x969d7du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969d7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969d80: /* 969d80: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969d83: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969d86: je 0x969d96 */
  if (zf) goto L_969d96;
L_969d88: /* 969d88: push 0xafe7ac */
  { uint32_t v = 0xafe7acu; esp -= 4; W32(esp, v); }
/* 969d8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969d8e: call 0x953470 */
  esp -= 4; W32(esp, 0x969d93u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969d93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969d96: /* 969d96: test dword ptr [esi + 0x3c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969d9d: je 0x969dad */
  if (zf) goto L_969dad;
L_969d9f: /* 969d9f: push 0xafe7a4 */
  { uint32_t v = 0xafe7a4u; esp -= 4; W32(esp, v); }
/* 969da4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969da5: call 0x953470 */
  esp -= 4; W32(esp, 0x969daau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969daa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969dad: /* 969dad: test dword ptr [esi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969db4: jne 0x969dc4 */
  if (!zf) goto L_969dc4;
L_969db6: /* 969db6: push 0xafe79c */
  { uint32_t v = 0xafe79cu; esp -= 4; W32(esp, v); }
/* 969dbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969dbc: call 0x953470 */
  esp -= 4; W32(esp, 0x969dc1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969dc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969dc4: /* 969dc4: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969dc7: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969dca: je 0x969dda */
  if (zf) goto L_969dda;
L_969dcc: /* 969dcc: push 0xafe794 */
  { uint32_t v = 0xafe794u; esp -= 4; W32(esp, v); }
/* 969dd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969dd2: call 0x953470 */
  esp -= 4; W32(esp, 0x969dd7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969dd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969dda: /* 969dda: test dword ptr [esi + 0x3c], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969de1: je 0x969df1 */
  if (zf) goto L_969df1;
L_969de3: /* 969de3: push 0xafe788 */
  { uint32_t v = 0xafe788u; esp -= 4; W32(esp, v); }
/* 969de8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969de9: call 0x953470 */
  esp -= 4; W32(esp, 0x969deeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969dee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969df1: /* 969df1: test byte ptr [esi + 0x3f], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3fu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969df5: je 0x969e05 */
  if (zf) goto L_969e05;
L_969df7: /* 969df7: push 0xafe778 */
  { uint32_t v = 0xafe778u; esp -= 4; W32(esp, v); }
/* 969dfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969dfd: call 0x953470 */
  esp -= 4; W32(esp, 0x969e02u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969e02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969e05: /* 969e05: test dword ptr [esi + 0x3c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969e0c: je 0x969e1c */
  if (zf) goto L_969e1c;
L_969e0e: /* 969e0e: push 0xafe768 */
  { uint32_t v = 0xafe768u; esp -= 4; W32(esp, v); }
/* 969e13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969e14: call 0x953470 */
  esp -= 4; W32(esp, 0x969e19u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969e19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969e1c: /* 969e1c: test dword ptr [esi + 0x3c], 0x100000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969e23: je 0x969e33 */
  if (zf) goto L_969e33;
L_969e25: /* 969e25: push 0xafe75c */
  { uint32_t v = 0xafe75cu; esp -= 4; W32(esp, v); }
/* 969e2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969e2b: call 0x953470 */
  esp -= 4; W32(esp, 0x969e30u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969e30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969e33: /* 969e33: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969e36: test eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969e3b: je 0x969e52 */
  if (zf) goto L_969e52;
L_969e3d: /* 969e3d: test eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969e42: jne 0x969e52 */
  if (!zf) goto L_969e52;
L_969e44: /* 969e44: push 0xafe74c */
  { uint32_t v = 0xafe74cu; esp -= 4; W32(esp, v); }
/* 969e49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969e4a: call 0x953470 */
  esp -= 4; W32(esp, 0x969e4fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969e4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969e52: /* 969e52: test dword ptr [esi + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969e59: je 0x969e69 */
  if (zf) goto L_969e69;
L_969e5b: /* 969e5b: push 0xafe73c */
  { uint32_t v = 0xafe73cu; esp -= 4; W32(esp, v); }
/* 969e60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969e61: call 0x953470 */
  esp -= 4; W32(esp, 0x969e66u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969e66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969e69: /* 969e69: test dword ptr [esi + 0x3c], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969e70: je 0x969e80 */
  if (zf) goto L_969e80;
L_969e72: /* 969e72: push 0xafe730 */
  { uint32_t v = 0xafe730u; esp -= 4; W32(esp, v); }
/* 969e77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969e78: call 0x953470 */
  esp -= 4; W32(esp, 0x969e7du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969e7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969e80: /* 969e80: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969e83: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 969e85: jns 0x969e95 */
  if (!sf) goto L_969e95;
L_969e87: /* 969e87: push 0xafe724 */
  { uint32_t v = 0xafe724u; esp -= 4; W32(esp, v); }
/* 969e8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969e8d: call 0x953470 */
  esp -= 4; W32(esp, 0x969e92u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969e92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969e95: /* 969e95: test dword ptr [esi + 0x3c], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969e9c: je 0x969eac */
  if (zf) goto L_969eac;
L_969e9e: /* 969e9e: push 0xafe714 */
  { uint32_t v = 0xafe714u; esp -= 4; W32(esp, v); }
/* 969ea3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969ea4: call 0x953470 */
  esp -= 4; W32(esp, 0x969ea9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969ea9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969eac: /* 969eac: test dword ptr [esi + 0x3c], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969eb3: je 0x969ec3 */
  if (zf) goto L_969ec3;
L_969eb5: /* 969eb5: push 0xafe708 */
  { uint32_t v = 0xafe708u; esp -= 4; W32(esp, v); }
/* 969eba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969ebb: call 0x953470 */
  esp -= 4; W32(esp, 0x969ec0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969ec0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969ec3: /* 969ec3: test dword ptr [esi + 0x3c], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969eca: je 0x969eda */
  if (zf) goto L_969eda;
L_969ecc: /* 969ecc: push 0xafe6fc */
  { uint32_t v = 0xafe6fcu; esp -= 4; W32(esp, v); }
/* 969ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969ed2: call 0x953470 */
  esp -= 4; W32(esp, 0x969ed7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969ed7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969eda: /* 969eda: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 969edf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969ee0: call 0x953470 */
  esp -= 4; W32(esp, 0x969ee5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969ee5: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969ee8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969eeb: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969ef0: je 0x969f0b */
  if (zf) goto L_969f0b;
L_969ef2: /* 969ef2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 969ef5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 969ef8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 969efb: push 0xafe6e8 */
  { uint32_t v = 0xafe6e8u; esp -= 4; W32(esp, v); }
/* 969f00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969f01: call 0x953470 */
  esp -= 4; W32(esp, 0x969f06u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969f06: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969f09: jmp 0x969f5d */
  goto L_969f5d;
L_969f0b: /* 969f0b: mov ecx, dword ptr [0xcf8bc8] */
  ecx = R32((uint32_t)(0xcf8bc8u));
/* 969f11: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969f13: je 0x969f2c */
  if (zf) goto L_969f2c;
L_969f15: /* 969f15: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969f18: je 0x969f2c */
  if (zf) goto L_969f2c;
L_969f1a: /* 969f1a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 969f1d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969f1f: je 0x969f2c */
  if (zf) goto L_969f2c;
L_969f21: /* 969f21: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 969f24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969f25: push 0xafe6d0 */
  { uint32_t v = 0xafe6d0u; esp -= 4; W32(esp, v); }
/* 969f2a: jmp 0x969f54 */
  goto L_969f54;
L_969f2c: /* 969f2c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969f2f: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 969f32: je 0x969f47 */
  if (zf) goto L_969f47;
L_969f34: /* 969f34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969f36: je 0x969f5d */
  if (zf) goto L_969f5d;
L_969f38: /* 969f38: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969f3a: je 0x969f5d */
  if (zf) goto L_969f5d;
L_969f3c: /* 969f3c: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 969f3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969f40: push 0xafe6a4 */
  { uint32_t v = 0xafe6a4u; esp -= 4; W32(esp, v); }
/* 969f45: jmp 0x969f54 */
  goto L_969f54;
L_969f47: /* 969f47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969f49: je 0x969f5d */
  if (zf) goto L_969f5d;
L_969f4b: /* 969f4b: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 969f4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 969f4f: push 0xafe688 */
  { uint32_t v = 0xafe688u; esp -= 4; W32(esp, v); }
L_969f54: /* 969f54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969f55: call 0x953470 */
  esp -= 4; W32(esp, 0x969f5au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969f5a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969f5d: /* 969f5d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 969f60: and eax, 0x1ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 969f65: je 0x969f76 */
  if (zf) goto L_969f76;
L_969f67: /* 969f67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969f68: push 0xafe674 */
  { uint32_t v = 0xafe674u; esp -= 4; W32(esp, v); }
/* 969f6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969f6e: call 0x953470 */
  esp -= 4; W32(esp, 0x969f73u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969f73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969f76: /* 969f76: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 969f79: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 969f7e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 969f80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 969f81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 969f82: push 0xafe664 */
  { uint32_t v = 0xafe664u; esp -= 4; W32(esp, v); }
/* 969f87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969f88: call 0x96b1f0 */
  esp -= 4; W32(esp, 0x969f8du); SPILL(); f_96b1f0(); if (g_unwind) return; RELOAD();
/* 969f8d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 969f90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969f93: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 969f96: push 0xafe64c */
  { uint32_t v = 0xafe64cu; esp -= 4; W32(esp, v); }
/* 969f9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969f9c: call 0x953470 */
  esp -= 4; W32(esp, 0x969fa1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969fa1: mov eax, dword ptr [0xcf8ba8] */
  eax = R32((uint32_t)(0xcf8ba8u));
/* 969fa6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 969fa9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 969fac: je 0x969fb5 */
  if (zf) goto L_969fb5;
L_969fae: /* 969fae: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 969fb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969fb3: je 0x969fc6 */
  if (zf) goto L_969fc6;
L_969fb5: /* 969fb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 969fb6: push 0xafe63c */
  { uint32_t v = 0xafe63cu; esp -= 4; W32(esp, v); }
/* 969fbb: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 969fbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969fbe: call 0x968100 */
  esp -= 4; W32(esp, 0x969fc3u); SPILL(); f_968100(); if (g_unwind) return; RELOAD();
/* 969fc3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969fc6: /* 969fc6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 969fc9: fcomp dword ptr [0xcf8a14] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a14u)));
  FPOP();
/* 969fcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 969fd1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 969fd4: jne 0x969fed */
  if (!zf) goto L_969fed;
L_969fd6: /* 969fd6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 969fd9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 969fdc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 969fdf: push 0xafe620 */
  { uint32_t v = 0xafe620u; esp -= 4; W32(esp, v); }
/* 969fe4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 969fe5: call 0x953470 */
  esp -= 4; W32(esp, 0x969feau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 969fea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_969fed: /* 969fed: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 969ff0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969ff2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 969ff3: je 0x96a0bd */
  if (zf) goto L_96a0bd;
L_969ff9: /* 969ff9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 969ffc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 969ffe: je 0x96a0bd */
  if (zf) goto L_96a0bd;
L_96a004: /* 96a004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a005: call 0x94eff0 */
  esp -= 4; W32(esp, 0x96a00au); SPILL(); f_94eff0(); if (g_unwind) return; RELOAD();
/* 96a00a: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 96a00d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a00e: mov ebp, eax */
  ebp = eax;
/* 96a010: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a015u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a015: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a018: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96a01b: jge 0x96a05e */
  if ((sf == of)) goto L_96a05e;
L_96a01d: /* 96a01d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a01e: call 0x95f210 */
  esp -= 4; W32(esp, 0x96a023u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96a023: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a024: push 0xafe5fc */
  { uint32_t v = 0xafe5fcu; esp -= 4; W32(esp, v); }
/* 96a029: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a02a: call 0x953470 */
  esp -= 4; W32(esp, 0x96a02fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a02f: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 96a032: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a037: je 0x96a0a7 */
  if (zf) goto L_96a0a7;
L_96a039: /* 96a039: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 96a03c: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 96a03f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a041: je 0x96a0a7 */
  if (zf) goto L_96a0a7;
L_96a043: /* 96a043: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a044: push 0xafe5f4 */
  { uint32_t v = 0xafe5f4u; esp -= 4; W32(esp, v); }
/* 96a049: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a04a: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 96a04d: call 0x96b1c0 */
  esp -= 4; W32(esp, 0x96a052u); SPILL(); f_96b1c0(); if (g_unwind) return; RELOAD();
/* 96a052: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 96a055: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a058: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a05a: jne 0x96a043 */
  if (!zf) goto L_96a043;
L_96a05c: /* 96a05c: jmp 0x96a0a7 */
  goto L_96a0a7;
L_96a05e: /* 96a05e: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 96a061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a062: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a067u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a067: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a06a: cmp eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96a06d: jge 0x96a083 */
  if ((sf == of)) goto L_96a083;
L_96a06f: /* 96a06f: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 96a072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a073: push 0xafe5e0 */
  { uint32_t v = 0xafe5e0u; esp -= 4; W32(esp, v); }
/* 96a078: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a079: call 0x9642f0 */
  esp -= 4; W32(esp, 0x96a07eu); SPILL(); f_9642f0(); if (g_unwind) return; RELOAD();
/* 96a07e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a081: jmp 0x96a0a7 */
  goto L_96a0a7;
L_96a083: /* 96a083: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 96a086: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a087: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a08cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a08c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a08d: push 0xafe5c0 */
  { uint32_t v = 0xafe5c0u; esp -= 4; W32(esp, v); }
/* 96a092: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a093: call 0x953470 */
  esp -= 4; W32(esp, 0x96a098u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a098: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a099: push 0xafe5b4 */
  { uint32_t v = 0xafe5b4u; esp -= 4; W32(esp, v); }
/* 96a09e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a09f: call 0x96b1c0 */
  esp -= 4; W32(esp, 0x96a0a4u); SPILL(); f_96b1c0(); if (g_unwind) return; RELOAD();
/* 96a0a4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a0a7: /* 96a0a7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 96a0a9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96a0ac: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96a0af: push 0xafe594 */
  { uint32_t v = 0xafe594u; esp -= 4; W32(esp, v); }
/* 96a0b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a0b5: call 0x953470 */
  esp -= 4; W32(esp, 0x96a0bau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a0ba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a0bd: /* 96a0bd: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 96a0c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a0c2: je 0x96a1a9 */
  if (zf) goto L_96a1a9;
L_96a0c8: /* 96a0c8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 96a0cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a0cd: je 0x96a1a9 */
  if (zf) goto L_96a1a9;
L_96a0d3: /* 96a0d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a0d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a0d5: call 0x94eff0 */
  esp -= 4; W32(esp, 0x96a0dau); SPILL(); f_94eff0(); if (g_unwind) return; RELOAD();
/* 96a0da: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 96a0dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a0de: mov ebx, eax */
  ebx = eax;
/* 96a0e0: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a0e5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a0e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a0e8: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96a0eb: jge 0x96a12e */
  if ((sf == of)) goto L_96a12e;
L_96a0ed: /* 96a0ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a0ee: call 0x95f210 */
  esp -= 4; W32(esp, 0x96a0f3u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96a0f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a0f4: push 0xafe570 */
  { uint32_t v = 0xafe570u; esp -= 4; W32(esp, v); }
/* 96a0f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a0fa: call 0x953470 */
  esp -= 4; W32(esp, 0x96a0ffu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a0ff: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 96a102: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a105: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a107: je 0x96a177 */
  if (zf) goto L_96a177;
L_96a109: /* 96a109: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 96a10c: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 96a10f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a111: je 0x96a177 */
  if (zf) goto L_96a177;
L_96a113: /* 96a113: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a114: push 0xafe5f4 */
  { uint32_t v = 0xafe5f4u; esp -= 4; W32(esp, v); }
/* 96a119: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a11a: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 96a11d: call 0x96b1c0 */
  esp -= 4; W32(esp, 0x96a122u); SPILL(); f_96b1c0(); if (g_unwind) return; RELOAD();
/* 96a122: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 96a125: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a128: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a12a: jne 0x96a113 */
  if (!zf) goto L_96a113;
L_96a12c: /* 96a12c: jmp 0x96a177 */
  goto L_96a177;
L_96a12e: /* 96a12e: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 96a131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a132: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a137u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a137: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a13a: cmp eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96a13d: jge 0x96a153 */
  if ((sf == of)) goto L_96a153;
L_96a13f: /* 96a13f: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 96a142: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a143: push 0xafe55c */
  { uint32_t v = 0xafe55cu; esp -= 4; W32(esp, v); }
/* 96a148: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a149: call 0x9642f0 */
  esp -= 4; W32(esp, 0x96a14eu); SPILL(); f_9642f0(); if (g_unwind) return; RELOAD();
/* 96a14e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a151: jmp 0x96a177 */
  goto L_96a177;
L_96a153: /* 96a153: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 96a156: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a157: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a15cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a15c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a15d: push 0xafe53c */
  { uint32_t v = 0xafe53cu; esp -= 4; W32(esp, v); }
/* 96a162: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a163: call 0x953470 */
  esp -= 4; W32(esp, 0x96a168u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a168: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a169: push 0xafe5b4 */
  { uint32_t v = 0xafe5b4u; esp -= 4; W32(esp, v); }
/* 96a16e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a16f: call 0x96b1c0 */
  esp -= 4; W32(esp, 0x96a174u); SPILL(); f_96b1c0(); if (g_unwind) return; RELOAD();
/* 96a174: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a177: /* 96a177: mov ebp, dword ptr [0xcf788c] */
  ebp = R32((uint32_t)(0xcf788cu));
/* 96a17d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 96a181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a182: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a183: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 96a184: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a185: mov dword ptr [0xcf788c], ebp */
  W32((uint32_t)(0xcf788cu), ebp);
/* 96a18b: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96a190u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96a190: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 96a194: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a197: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96a19a: push 0xafe51c */
  { uint32_t v = 0xafe51cu; esp -= 4; W32(esp, v); }
/* 96a19f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a1a0: call 0x953470 */
  esp -= 4; W32(esp, 0x96a1a5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a1a5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a1a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_96a1a9: /* 96a1a9: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 96a1ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a1ad: push 0xafe50c */
  { uint32_t v = 0xafe50cu; esp -= 4; W32(esp, v); }
/* 96a1b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a1b3: call 0x96bae0 */
  esp -= 4; W32(esp, 0x96a1b8u); SPILL(); f_96bae0(); if (g_unwind) return; RELOAD();
/* 96a1b8: push 0xafe4f0 */
  { uint32_t v = 0xafe4f0u; esp -= 4; W32(esp, v); }
/* 96a1bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a1be: call 0x953470 */
  esp -= 4; W32(esp, 0x96a1c3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a1c3: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 96a1c6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a1c9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a1cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a1cc: je 0x96a21d */
  if (zf) goto L_96a21d;
L_96a1ce: /* 96a1ce: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96a1d1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96a1d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a1d6: je 0x96a21d */
  if (zf) goto L_96a21d;
L_96a1d8: /* 96a1d8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96a1db: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a1de: jne 0x96a1f0 */
  if (!zf) goto L_96a1f0;
L_96a1e0: /* 96a1e0: push 0xafe4e8 */
  { uint32_t v = 0xafe4e8u; esp -= 4; W32(esp, v); }
/* 96a1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a1e6: call 0x953470 */
  esp -= 4; W32(esp, 0x96a1ebu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a1eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a1ee: jmp 0x96a217 */
  goto L_96a217;
L_96a1f0: /* 96a1f0: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a1f3: jne 0x96a205 */
  if (!zf) goto L_96a205;
L_96a1f5: /* 96a1f5: push 0xafe4e0 */
  { uint32_t v = 0xafe4e0u; esp -= 4; W32(esp, v); }
/* 96a1fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a1fb: call 0x953470 */
  esp -= 4; W32(esp, 0x96a200u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a200: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a203: jmp 0x96a217 */
  goto L_96a217;
L_96a205: /* 96a205: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 96a208: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a209: push 0xaf9610 */
  { uint32_t v = 0xaf9610u; esp -= 4; W32(esp, v); }
/* 96a20e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a20f: call 0x953470 */
  esp -= 4; W32(esp, 0x96a214u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a214: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a217: /* 96a217: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96a219: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a21b: jne 0x96a1d8 */
  if (!zf) goto L_96a1d8;
L_96a21d: /* 96a21d: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96a222: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a223: call 0x953470 */
  esp -= 4; W32(esp, 0x96a228u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a228: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a22d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a230: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a231: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a236: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a237: ret  */
  esp += 4; SPILL(); return;
}

void f_96a240(void) {
  LOAD_REGS();
L_96a240: /* 96a240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a241: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a242: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a243: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 96a247: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 96a24a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a24b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a24c: xor edi, edi */
  edi = 0;
/* 96a24e: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96a251: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 96a255: je 0x96a2b6 */
  if (zf) goto L_96a2b6;
L_96a257: /* 96a257: mov eax, dword ptr [0xcf8bc8] */
  eax = R32((uint32_t)(0xcf8bc8u));
/* 96a25c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a25e: je 0x96a2b6 */
  if (zf) goto L_96a2b6;
L_96a260: /* 96a260: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 96a264: push 0xafe860 */
  { uint32_t v = 0xafe860u; esp -= 4; W32(esp, v); }
/* 96a269: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a26a: call 0x953470 */
  esp -= 4; W32(esp, 0x96a26fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a26f: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 96a272: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a275: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a277: je 0x96a2a2 */
  if (zf) goto L_96a2a2;
L_96a279: /* 96a279: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96a27c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96a27e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a280: je 0x96a2a2 */
  if (zf) goto L_96a2a2;
L_96a282: /* 96a282: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 96a285: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 96a28a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a28b: push 0xafe858 */
  { uint32_t v = 0xafe858u; esp -= 4; W32(esp, v); }
/* 96a290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a291: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96a294: call 0x953470 */
  esp -= 4; W32(esp, 0x96a299u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a299: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96a29b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a29e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a2a0: jne 0x96a282 */
  if (!zf) goto L_96a282;
L_96a2a2: /* 96a2a2: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96a2a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a2a8: call 0x953470 */
  esp -= 4; W32(esp, 0x96a2adu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a2ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a2b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a2b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a2b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a2b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a2b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96a2b5: ret  */
  esp += 4; SPILL(); return;
L_96a2b6: /* 96a2b6: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 96a2ba: push 0xafe848 */
  { uint32_t v = 0xafe848u; esp -= 4; W32(esp, v); }
/* 96a2bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a2c0: call 0x953470 */
  esp -= 4; W32(esp, 0x96a2c5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a2c5: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 96a2c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a2cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a2cd: je 0x96a2f1 */
  if (zf) goto L_96a2f1;
L_96a2cf: /* 96a2cf: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 96a2d2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96a2d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a2d6: je 0x96a2f1 */
  if (zf) goto L_96a2f1;
L_96a2d8: /* 96a2d8: mov edx, 0xfeffffff */
  edx = 0xfeffffffu;
/* 96a2dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_96a2e0: /* 96a2e0: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 96a2e3: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 96a2e5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96a2e8: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 96a2eb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96a2ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a2ef: jne 0x96a2e0 */
  if (!zf) goto L_96a2e0;
L_96a2f1: /* 96a2f1: cmp dword ptr [0xcf85cc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a2f8: jne 0x96a339 */
  if (!zf) goto L_96a339;
L_96a2fa: /* 96a2fa: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 96a2fd: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 96a300: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a302: je 0x96a3ab */
  if (zf) goto L_96a3ab;
L_96a308: /* 96a308: test byte ptr [esi + 0xf], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xfu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96a30c: jne 0x96a3ab */
  if (!zf) goto L_96a3ab;
L_96a312: /* 96a312: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 96a315: or eax, 0x1000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 96a31a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a31b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a31c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 96a31f: call 0x96b6b0 */
  esp -= 4; W32(esp, 0x96a324u); SPILL(); f_96b6b0(); if (g_unwind) return; RELOAD();
/* 96a324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96a326: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a327: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a328: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96a329: call 0x957ce0 */
  esp -= 4; W32(esp, 0x96a32eu); SPILL(); f_957ce0(); if (g_unwind) return; RELOAD();
/* 96a32e: mov esi, eax */
  esi = eax;
/* 96a330: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a333: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a335: jne 0x96a308 */
  if (!zf) goto L_96a308;
L_96a337: /* 96a337: jmp 0x96a3ab */
  goto L_96a3ab;
L_96a339: /* 96a339: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 96a33c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a33e: je 0x96a3ab */
  if (zf) goto L_96a3ab;
L_96a340: /* 96a340: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 96a343: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a345: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 96a348: je 0x96a3a7 */
  if (zf) goto L_96a3a7;
L_96a34a: /* 96a34a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_96a350: /* 96a350: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 96a353: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96a356: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a358: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 96a35c: je 0x96a3a1 */
  if (zf) goto L_96a3a1;
L_96a35e: /* 96a35e: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96a361: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96a363: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a365: je 0x96a3a1 */
  if (zf) goto L_96a3a1;
L_96a367: /* 96a367: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 96a36a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96a36d: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a36f: jne 0x96a374 */
  if (!zf) goto L_96a374;
L_96a371: /* 96a371: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_96a374: /* 96a374: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a376: jne 0x96a397 */
  if (!zf) goto L_96a397;
L_96a378: /* 96a378: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 96a37b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a37c: or edx, 0x1000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 96a382: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a383: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 96a386: call 0x96b6b0 */
  esp -= 4; W32(esp, 0x96a38bu); SPILL(); f_96b6b0(); if (g_unwind) return; RELOAD();
/* 96a38b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96a38f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a392: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96a393: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_96a397: /* 96a397: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96a399: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a39b: jne 0x96a367 */
  if (!zf) goto L_96a367;
L_96a39d: /* 96a39d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_96a3a1: /* 96a3a1: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 96a3a3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a3a5: jne 0x96a350 */
  if (!zf) goto L_96a350;
L_96a3a7: /* 96a3a7: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_96a3ab: /* 96a3ab: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 96a3ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a3af: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a3b4u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a3b4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a3b7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a3b9: je 0x96a40e */
  if (zf) goto L_96a40e;
L_96a3bb: /* 96a3bb: push 0xafe834 */
  { uint32_t v = 0xafe834u; esp -= 4; W32(esp, v); }
/* 96a3c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a3c1: call 0x953470 */
  esp -= 4; W32(esp, 0x96a3c6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a3c6: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 96a3c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a3cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a3ce: je 0x96a400 */
  if (zf) goto L_96a400;
L_96a3d0: /* 96a3d0: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96a3d3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96a3d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a3d7: je 0x96a400 */
  if (zf) goto L_96a400;
L_96a3d9: /* 96a3d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96a3e0: /* 96a3e0: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 96a3e3: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 96a3e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a3e9: push 0xafe858 */
  { uint32_t v = 0xafe858u; esp -= 4; W32(esp, v); }
/* 96a3ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a3ef: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96a3f2: call 0x953470 */
  esp -= 4; W32(esp, 0x96a3f7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a3f7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96a3f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a3fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a3fe: jne 0x96a3e0 */
  if (!zf) goto L_96a3e0;
L_96a400: /* 96a400: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96a405: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a406: call 0x953470 */
  esp -= 4; W32(esp, 0x96a40bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a40b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a40e: /* 96a40e: mov ebp, dword ptr [ebp + 0x24] */
  ebp = R32((uint32_t)(ebp + 0x24u));
/* 96a411: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a413: je 0x96a43b */
  if (zf) goto L_96a43b;
L_96a415: /* 96a415: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 96a418: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a41a: lea esi, [ebp + 4] */
  esi = (uint32_t)(ebp + 0x4u);
/* 96a41d: je 0x96a43b */
  if (zf) goto L_96a43b;
L_96a41f: /* 96a41f: nop  */
L_96a420: /* 96a420: mov cl, byte ptr [eax + 0xf] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xfu))) & 0xffu);
/* 96a423: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96a426: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96a429: jne 0x96a435 */
  if (!zf) goto L_96a435;
L_96a42b: /* 96a42b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a42c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a42d: call 0x96b6b0 */
  esp -= 4; W32(esp, 0x96a432u); SPILL(); f_96b6b0(); if (g_unwind) return; RELOAD();
/* 96a432: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a435: /* 96a435: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96a437: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a439: jne 0x96a420 */
  if (!zf) goto L_96a420;
L_96a43b: /* 96a43b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a43c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a43d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a43e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a43f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96a440: ret  */
  esp += 4; SPILL(); return;
}

void f_96a450(void) {
  LOAD_REGS();
L_96a450: /* 96a450: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 96a455: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96a458: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a459: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a45a: mov dword ptr [0xcf8c50], eax */
  W32((uint32_t)(0xcf8c50u), eax);
/* 96a45f: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 96a464: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a467: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 96a46b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a46c: mov dword ptr [0xcf8548], 0 */
  W32((uint32_t)(0xcf8548u), 0x0u);
/* 96a476: je 0x96a49b */
  if (zf) goto L_96a49b;
L_96a478: /* 96a478: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a47b: je 0x96a487 */
  if (zf) goto L_96a487;
L_96a47d: /* 96a47d: cmp esi, 0x12 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a480: je 0x96a487 */
  if (zf) goto L_96a487;
L_96a482: /* 96a482: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a485: jne 0x96a49b */
  if (!zf) goto L_96a49b;
L_96a487: /* 96a487: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96a48d: push 0xafe8d0 */
  { uint32_t v = 0xafe8d0u; esp -= 4; W32(esp, v); }
/* 96a492: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a493: call 0x953470 */
  esp -= 4; W32(esp, 0x96a498u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a498: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a49b: /* 96a49b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a49d: je 0x96a90a */
  if (zf) goto L_96a90a;
L_96a4a3: /* 96a4a3: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a4a6: jne 0x96a51b */
  if (!zf) goto L_96a51b;
L_96a4a8: /* 96a4a8: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 96a4ac: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96a4b0: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 96a4b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a4b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a4b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a4b7: call 0x966560 */
  esp -= 4; W32(esp, 0x96a4bcu); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 96a4bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a4bd: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 96a4c1: call 0x9708b0 */
  esp -= 4; W32(esp, 0x96a4c6u); SPILL(); f_9708b0(); if (g_unwind) return; RELOAD();
/* 96a4c6: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96a4cc: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 96a4d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a4d1: push 0xafe8c4 */
  { uint32_t v = 0xafe8c4u; esp -= 4; W32(esp, v); }
/* 96a4d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a4d7: mov esi, eax */
  esi = eax;
/* 96a4d9: call 0x953470 */
  esp -= 4; W32(esp, 0x96a4deu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a4de: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96a4e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 96a4e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a4e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a4e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96a4e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a4ea: call 0x96b1f0 */
  esp -= 4; W32(esp, 0x96a4efu); SPILL(); f_96b1f0(); if (g_unwind) return; RELOAD();
/* 96a4ef: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 96a4f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a4f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a4f7: call 0x953a60 */
  esp -= 4; W32(esp, 0x96a4fcu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 96a4fc: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 96a500: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a501: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96a506u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96a506: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a50b: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a50e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a50f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a510: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a511: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a516: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a517: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a51a: ret  */
  esp += 4; SPILL(); return;
L_96a51b: /* 96a51b: cmp esi, 0x1b */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a51e: jne 0x96a5c0 */
  if (!zf) goto L_96a5c0;
L_96a524: /* 96a524: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96a529: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a52b: je 0x96a55b */
  if (zf) goto L_96a55b;
L_96a52d: /* 96a52d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 96a531: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 96a535: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 96a539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a53a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96a53e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a53f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a541: call 0x968af0 */
  esp -= 4; W32(esp, 0x96a546u); SPILL(); f_968af0(); if (g_unwind) return; RELOAD();
/* 96a546: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a54b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a54e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a54f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a550: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a551: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a556: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a557: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a55a: ret  */
  esp += 4; SPILL(); return;
L_96a55b: /* 96a55b: cmp dword ptr [0xcf85cc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a562: jne 0x96a592 */
  if (!zf) goto L_96a592;
L_96a564: /* 96a564: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 96a568: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 96a56c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96a570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a571: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 96a575: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a577: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a578: call 0x968970 */
  esp -= 4; W32(esp, 0x96a57du); SPILL(); f_968970(); if (g_unwind) return; RELOAD();
/* 96a57d: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a582: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a585: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a586: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a587: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a588: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a58d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a58e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a591: ret  */
  esp += 4; SPILL(); return;
L_96a592: /* 96a592: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 96a596: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96a59a: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 96a59e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a59f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 96a5a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a5a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a5a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a5a6: call 0x968870 */
  esp -= 4; W32(esp, 0x96a5abu); SPILL(); f_968870(); if (g_unwind) return; RELOAD();
/* 96a5ab: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a5b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a5b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a5b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a5b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a5b6: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a5bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a5bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a5bf: ret  */
  esp += 4; SPILL(); return;
L_96a5c0: /* 96a5c0: cmp esi, 0x11 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a5c3: jne 0x96a5f3 */
  if (!zf) goto L_96a5f3;
L_96a5c5: /* 96a5c5: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 96a5c9: push 0xcf87e8 */
  { uint32_t v = 0xcf87e8u; esp -= 4; W32(esp, v); }
/* 96a5ce: push 0xaf40b8 */
  { uint32_t v = 0xaf40b8u; esp -= 4; W32(esp, v); }
/* 96a5d3: push 0xaf8178 */
  { uint32_t v = 0xaf8178u; esp -= 4; W32(esp, v); }
/* 96a5d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a5d9: call 0x953470 */
  esp -= 4; W32(esp, 0x96a5deu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a5de: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a5e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a5e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a5e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a5e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a5e9: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a5ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a5ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a5f2: ret  */
  esp += 4; SPILL(); return;
L_96a5f3: /* 96a5f3: cmp esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a5f6: jne 0x96a633 */
  if (!zf) goto L_96a633;
L_96a5f8: /* 96a5f8: mov eax, dword ptr [0xcf85b0] */
  eax = R32((uint32_t)(0xcf85b0u));
/* 96a5fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a5ff: jne 0x96a888 */
  if (!zf) goto L_96a888;
L_96a605: /* 96a605: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 96a609: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 96a60d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96a611: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a612: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 96a616: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a618: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a619: call 0x96b2e0 */
  esp -= 4; W32(esp, 0x96a61eu); SPILL(); f_96b2e0(); if (g_unwind) return; RELOAD();
/* 96a61e: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a623: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a626: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a627: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a628: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a629: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a62e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a62f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a632: ret  */
  esp += 4; SPILL(); return;
L_96a633: /* 96a633: cmp esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a636: jne 0x96a666 */
  if (!zf) goto L_96a666;
L_96a638: /* 96a638: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 96a63c: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 96a641: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96a646: push 0xafe8b8 */
  { uint32_t v = 0xafe8b8u; esp -= 4; W32(esp, v); }
/* 96a64b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a64c: call 0x953470 */
  esp -= 4; W32(esp, 0x96a651u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a651: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a656: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a659: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a65a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a65b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a65c: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a661: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a662: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a665: ret  */
  esp += 4; SPILL(); return;
L_96a666: /* 96a666: cmp esi, 0x16 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a669: jne 0x96a6c5 */
  if (!zf) goto L_96a6c5;
L_96a66b: /* 96a66b: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 96a66f: push 0xafe8b0 */
  { uint32_t v = 0xafe8b0u; esp -= 4; W32(esp, v); }
/* 96a674: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a675: call 0x953470 */
  esp -= 4; W32(esp, 0x96a67au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a67a: fld dword ptr [0xcf8bf0] */
  { double v = F32((uint32_t)(0xcf8bf0u)); FPUSH(v); }
/* 96a680: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96a683: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96a688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a689: call 0x953470 */
  esp -= 4; W32(esp, 0x96a68eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a68e: fld dword ptr [0xcf8bf4] */
  { double v = F32((uint32_t)(0xcf8bf4u)); FPUSH(v); }
/* 96a694: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a697: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96a69a: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96a69f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a6a0: call 0x953470 */
  esp -= 4; W32(esp, 0x96a6a5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a6a5: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96a6aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a6ab: call 0x953470 */
  esp -= 4; W32(esp, 0x96a6b0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a6b0: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a6b5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a6b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a6b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a6ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a6bb: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a6c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a6c1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a6c4: ret  */
  esp += 4; SPILL(); return;
L_96a6c5: /* 96a6c5: cmp esi, 0x17 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a6c8: jne 0x96a7ae */
  if (!zf) goto L_96a7ae;
L_96a6ce: /* 96a6ce: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 96a6d2: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 96a6d6: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 96a6da: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 96a6de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a6df: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 96a6e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a6e4: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 96a6e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a6e9: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 96a6ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a6ee: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 96a6f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a6f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a6f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a6f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a6f6: call 0x9657a0 */
  esp -= 4; W32(esp, 0x96a6fbu); SPILL(); f_9657a0(); if (g_unwind) return; RELOAD();
/* 96a6fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a6fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a6fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a6fe: call 0x966560 */
  esp -= 4; W32(esp, 0x96a703u); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 96a703: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 96a707: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 96a70b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a70e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a70f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a711: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 96a715: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a71au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a71a: mov edx, dword ptr [0xcf8b80] */
  edx = R32((uint32_t)(0xcf8b80u));
/* 96a720: mov edi, dword ptr [0xcf8b60] */
  edi = R32((uint32_t)(0xcf8b60u));
/* 96a726: mov ecx, dword ptr [0xcf8c14] */
  ecx = R32((uint32_t)(0xcf8c14u));
/* 96a72c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a72f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a730: mov eax, dword ptr [0xcf8b84] */
  eax = R32((uint32_t)(0xcf8b84u));
/* 96a735: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 96a737: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a739: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a73a: call 0x94f340 */
  esp -= 4; W32(esp, 0x96a73fu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96a73f: mov ebx, dword ptr [0xcf85d4] */
  ebx = R32((uint32_t)(0xcf85d4u));
/* 96a745: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96a74b: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 96a74f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a752: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96a754: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a755: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a756: push 0xafe894 */
  { uint32_t v = 0xafe894u; esp -= 4; W32(esp, v); }
/* 96a75b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a75c: call 0x953470 */
  esp -= 4; W32(esp, 0x96a761u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a761: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 96a765: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a766: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96a76bu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96a76b: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 96a76f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a770: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 96a774: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a775: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96a777: call 0x964120 */
  esp -= 4; W32(esp, 0x96a77cu); SPILL(); f_964120(); if (g_unwind) return; RELOAD();
/* 96a77c: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 96a780: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a783: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96a787: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 96a78b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96a78e: push 0xafe884 */
  { uint32_t v = 0xafe884u; esp -= 4; W32(esp, v); }
/* 96a793: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a794: call 0x953470 */
  esp -= 4; W32(esp, 0x96a799u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a799: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a79e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a7a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a7a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a7a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a7a4: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a7a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a7aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a7ad: ret  */
  esp += 4; SPILL(); return;
L_96a7ae: /* 96a7ae: cmp esi, 0x1a */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a7b1: jne 0x96a7e1 */
  if (!zf) goto L_96a7e1;
L_96a7b3: /* 96a7b3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 96a7b7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 96a7bb: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 96a7bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a7c0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96a7c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a7c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a7c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a7c7: call 0x96bb50 */
  esp -= 4; W32(esp, 0x96a7ccu); SPILL(); f_96bb50(); if (g_unwind) return; RELOAD();
/* 96a7cc: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a7d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a7d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a7d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a7d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a7d7: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a7dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a7dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a7e0: ret  */
  esp += 4; SPILL(); return;
L_96a7e1: /* 96a7e1: mov eax, dword ptr [0xcf85b0] */
  eax = R32((uint32_t)(0xcf85b0u));
/* 96a7e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a7e8: je 0x96a888 */
  if (zf) goto L_96a888;
L_96a7ee: /* 96a7ee: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a7f1: jne 0x96a812 */
  if (!zf) goto L_96a812;
L_96a7f3: /* 96a7f3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 96a7f7: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 96a7fb: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96a7ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a800: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 96a804: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a806: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a807: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a808: call 0x96bdf0 */
  esp -= 4; W32(esp, 0x96a80du); SPILL(); f_96bdf0(); if (g_unwind) return; RELOAD();
/* 96a80d: jmp 0x96a907 */
  goto L_96a907;
L_96a812: /* 96a812: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a815: jne 0x96a85d */
  if (!zf) goto L_96a85d;
L_96a817: /* 96a817: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 96a81b: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 96a81f: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 96a823: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 96a827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a828: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a829: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a82a: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 96a82c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a82d: call 0x967450 */
  esp -= 4; W32(esp, 0x96a832u); SPILL(); f_967450(); if (g_unwind) return; RELOAD();
/* 96a832: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a833: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a834: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a835: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 96a837: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a838: call 0x96bdf0 */
  esp -= 4; W32(esp, 0x96a83du); SPILL(); f_96bdf0(); if (g_unwind) return; RELOAD();
/* 96a83d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a83e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a83f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a840: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 96a842: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a843: call 0x9684d0 */
  esp -= 4; W32(esp, 0x96a848u); SPILL(); f_9684d0(); if (g_unwind) return; RELOAD();
/* 96a848: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a84d: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a850: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a852: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a853: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a858: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a859: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a85c: ret  */
  esp += 4; SPILL(); return;
L_96a85d: /* 96a85d: cmp esi, 0x19 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a860: je 0x96a86c */
  if (zf) goto L_96a86c;
L_96a862: /* 96a862: cmp esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a865: je 0x96a86c */
  if (zf) goto L_96a86c;
L_96a867: /* 96a867: cmp esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96a86a: jne 0x96a888 */
  if (!zf) goto L_96a888;
L_96a86c: /* 96a86c: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 96a870: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96a874: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 96a878: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a879: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 96a87d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a87e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a87f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a880: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a881: call 0x96b7f0 */
  esp -= 4; W32(esp, 0x96a886u); SPILL(); f_96b7f0(); if (g_unwind) return; RELOAD();
/* 96a886: jmp 0x96a907 */
  goto L_96a907;
L_96a888: /* 96a888: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 96a88c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96a890: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 96a894: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 96a898: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a89a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a89b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a89c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a89d: call 0x967450 */
  esp -= 4; W32(esp, 0x96a8a2u); SPILL(); f_967450(); if (g_unwind) return; RELOAD();
/* 96a8a2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a8a5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a8a7: je 0x96a8ca */
  if (zf) goto L_96a8ca;
L_96a8a9: /* 96a8a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96a8b0: /* 96a8b0: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 96a8b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a8b5: je 0x96a8ca */
  if (zf) goto L_96a8ca;
L_96a8b7: /* 96a8b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a8b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96a8b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a8ba: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a8bb: call 0x966cd0 */
  esp -= 4; W32(esp, 0x96a8c0u); SPILL(); f_966cd0(); if (g_unwind) return; RELOAD();
/* 96a8c0: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 96a8c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a8c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a8c8: jne 0x96a8b0 */
  if (!zf) goto L_96a8b0;
L_96a8ca: /* 96a8ca: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 96a8ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a8d0: je 0x96a8f5 */
  if (zf) goto L_96a8f5;
L_96a8d2: /* 96a8d2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 96a8d5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96a8d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a8da: je 0x96a8f5 */
  if (zf) goto L_96a8f5;
L_96a8dc: /* 96a8dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96a8e0: /* 96a8e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a8e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a8e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a8e3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a8e4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96a8e7: call 0x966cd0 */
  esp -= 4; W32(esp, 0x96a8ecu); SPILL(); f_966cd0(); if (g_unwind) return; RELOAD();
/* 96a8ec: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 96a8ee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a8f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a8f3: jne 0x96a8e0 */
  if (!zf) goto L_96a8e0;
L_96a8f5: /* 96a8f5: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 96a8f9: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 96a8fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96a8fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96a8ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96a900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a901: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96a902: call 0x9684d0 */
  esp -= 4; W32(esp, 0x96a907u); SPILL(); f_9684d0(); if (g_unwind) return; RELOAD();
L_96a907: /* 96a907: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a90a: /* 96a90a: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 96a90f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96a910: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a911: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96a912: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 96a917: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96a918: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a91b: ret  */
  esp += 4; SPILL(); return;
}

void f_96a920(void) {
  LOAD_REGS();
L_96a920: /* 96a920: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 96a925: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a927: jne 0x96a9e9 */
  if (!zf) goto L_96a9e9;
L_96a92d: /* 96a92d: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 96a932: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a934: jne 0x96a9e9 */
  if (!zf) goto L_96a9e9;
L_96a93a: /* 96a93a: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96a940: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96a946: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96a948: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96a94b: jnp 0x96a9e9 */
  if (!pf) goto L_96a9e9;
L_96a951: /* 96a951: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a952: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 96a956: push 0xafef00 */
  { uint32_t v = 0xafef00u; esp -= 4; W32(esp, v); }
/* 96a95b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a95c: call 0x953470 */
  esp -= 4; W32(esp, 0x96a961u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a961: push 0xafee40 */
  { uint32_t v = 0xafee40u; esp -= 4; W32(esp, v); }
/* 96a966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a967: call 0x953470 */
  esp -= 4; W32(esp, 0x96a96cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a96c: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96a971: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a974: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a976: je 0x96a9c2 */
  if (zf) goto L_96a9c2;
L_96a978: /* 96a978: mov eax, dword ptr [0xcf8570] */
  eax = R32((uint32_t)(0xcf8570u));
/* 96a97d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a97f: jne 0x96a9a2 */
  if (!zf) goto L_96a9a2;
L_96a981: /* 96a981: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 96a987: fcomp qword ptr [0xa21748] */
  fpu_com(ST0, F64((uint32_t)(0xa21748u)));
  FPOP();
/* 96a98d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96a98f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96a992: jne 0x96a9a2 */
  if (!zf) goto L_96a9a2;
L_96a994: /* 96a994: push 0xafedb0 */
  { uint32_t v = 0xafedb0u; esp -= 4; W32(esp, v); }
/* 96a999: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a99a: call 0x953470 */
  esp -= 4; W32(esp, 0x96a99fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a99f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a9a2: /* 96a9a2: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96a9a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a9a9: je 0x96a9c2 */
  if (zf) goto L_96a9c2;
L_96a9ab: /* 96a9ab: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 96a9b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96a9b2: jne 0x96a9c2 */
  if (!zf) goto L_96a9c2;
L_96a9b4: /* 96a9b4: push 0xafed38 */
  { uint32_t v = 0xafed38u; esp -= 4; W32(esp, v); }
/* 96a9b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a9ba: call 0x953470 */
  esp -= 4; W32(esp, 0x96a9bfu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a9bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96a9c2: /* 96a9c2: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96a9c8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96a9cb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96a9ce: push 0xafeac8 */
  { uint32_t v = 0xafeac8u; esp -= 4; W32(esp, v); }
/* 96a9d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a9d4: call 0x953470 */
  esp -= 4; W32(esp, 0x96a9d9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a9d9: push 0xafe9d8 */
  { uint32_t v = 0xafe9d8u; esp -= 4; W32(esp, v); }
/* 96a9de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96a9df: call 0x953470 */
  esp -= 4; W32(esp, 0x96a9e4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a9e4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a9e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96a9e8: ret  */
  esp += 4; SPILL(); return;
L_96a9e9: /* 96a9e9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 96a9ed: push 0xafe938 */
  { uint32_t v = 0xafe938u; esp -= 4; W32(esp, v); }
/* 96a9f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96a9f3: call 0x953470 */
  esp -= 4; W32(esp, 0x96a9f8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96a9f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96a9fb: ret  */
  esp += 4; SPILL(); return;
}

void f_96aa00(void) {
  LOAD_REGS();
L_96aa00: /* 96aa00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96aa01: mov ebp, esp */
  ebp = esp;
/* 96aa03: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96aa06: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96aa09: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96aa0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96aa0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96aa10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aa11: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 96aa14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96aa15: push 0xaffa88 */
  { uint32_t v = 0xaffa88u; esp -= 4; W32(esp, v); }
/* 96aa1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aa1b: call 0x953470 */
  esp -= 4; W32(esp, 0x96aa20u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96aa20: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 96aa26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96aa28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96aa2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96aa2b: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 96aa30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aa31: call 0x96ba70 */
  esp -= 4; W32(esp, 0x96aa36u); SPILL(); f_96ba70(); if (g_unwind) return; RELOAD();
/* 96aa36: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96aa3c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96aa3f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96aa42: push 0xaff998 */
  { uint32_t v = 0xaff998u; esp -= 4; W32(esp, v); }
/* 96aa47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aa48: call 0x953470 */
  esp -= 4; W32(esp, 0x96aa4du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96aa4d: mov edx, dword ptr [0xcf8b3c] */
  edx = R32((uint32_t)(0xcf8b3cu));
/* 96aa53: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96aa58: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 96aa5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96aa5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96aa5c: push 0xaff988 */
  { uint32_t v = 0xaff988u; esp -= 4; W32(esp, v); }
/* 96aa61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aa62: call 0x96b1f0 */
  esp -= 4; W32(esp, 0x96aa67u); SPILL(); f_96b1f0(); if (g_unwind) return; RELOAD();
/* 96aa67: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96aa6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aa6d: call 0x953470 */
  esp -= 4; W32(esp, 0x96aa72u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96aa72: mov ebx, dword ptr [0xcf8b4c] */
  ebx = R32((uint32_t)(0xcf8b4cu));
/* 96aa78: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96aa7b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96aa7d: je 0x96ab12 */
  if (zf) goto L_96ab12;
L_96aa83: /* 96aa83: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 96aa86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96aa88: je 0x96ab12 */
  if (zf) goto L_96ab12;
L_96aa8e: /* 96aa8e: push 0xaff980 */
  { uint32_t v = 0xaff980u; esp -= 4; W32(esp, v); }
/* 96aa93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aa94: call 0x953470 */
  esp -= 4; W32(esp, 0x96aa99u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96aa99: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 96aa9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96aa9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96aaa1: je 0x96aad1 */
  if (zf) goto L_96aad1;
L_96aaa3: /* 96aaa3: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96aaa6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96aaa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96aaaa: je 0x96aad1 */
  if (zf) goto L_96aad1;
L_96aaac: /* 96aaac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96aab0: /* 96aab0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 96aab3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96aab4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96aab7: call 0x95f210 */
  esp -= 4; W32(esp, 0x96aabcu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96aabc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96aabd: push 0xafd338 */
  { uint32_t v = 0xafd338u; esp -= 4; W32(esp, v); }
/* 96aac2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aac3: call 0x953470 */
  esp -= 4; W32(esp, 0x96aac8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96aac8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96aaca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96aacd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96aacf: jne 0x96aab0 */
  if (!zf) goto L_96aab0;
L_96aad1: /* 96aad1: mov ecx, dword ptr [0xcf788c] */
  ecx = R32((uint32_t)(0xcf788cu));
/* 96aad7: mov eax, dword ptr [0xcf8b3c] */
  eax = R32((uint32_t)(0xcf8b3cu));
/* 96aadc: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 96aae0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96aae1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96aae2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96aae3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96aae4: mov dword ptr [0xcf788c], ecx */
  W32((uint32_t)(0xcf788cu), ecx);
/* 96aaea: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96aaefu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96aaef: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 96aaf3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96aaf6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96aaf9: push 0xaff96c */
  { uint32_t v = 0xaff96cu; esp -= 4; W32(esp, v); }
/* 96aafe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96aaff: call 0x953470 */
  esp -= 4; W32(esp, 0x96ab04u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ab04: mov ebx, dword ptr [ebx + 0x1c] */
  ebx = R32((uint32_t)(ebx + 0x1cu));
/* 96ab07: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ab0a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ab0c: jne 0x96aa83 */
  if (!zf) goto L_96aa83;
L_96ab12: /* 96ab12: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 96ab17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ab19: je 0x96ab29 */
  if (zf) goto L_96ab29;
L_96ab1b: /* 96ab1b: push 0xaff900 */
  { uint32_t v = 0xaff900u; esp -= 4; W32(esp, v); }
/* 96ab20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ab21: call 0x953470 */
  esp -= 4; W32(esp, 0x96ab26u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ab26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ab29: /* 96ab29: push 0xaff840 */
  { uint32_t v = 0xaff840u; esp -= 4; W32(esp, v); }
/* 96ab2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ab2f: call 0x953470 */
  esp -= 4; W32(esp, 0x96ab34u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ab34: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96ab39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ab3c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ab3f: jl 0x96ab4f */
  if ((sf != of)) goto L_96ab4f;
L_96ab41: /* 96ab41: push 0xaff738 */
  { uint32_t v = 0xaff738u; esp -= 4; W32(esp, v); }
/* 96ab46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ab47: call 0x953470 */
  esp -= 4; W32(esp, 0x96ab4cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ab4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ab4f: /* 96ab4f: push 0xaff700 */
  { uint32_t v = 0xaff700u; esp -= 4; W32(esp, v); }
/* 96ab54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ab55: call 0x953470 */
  esp -= 4; W32(esp, 0x96ab5au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ab5a: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96ab60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ab63: xor esi, esi */
  esi = 0;
/* 96ab65: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96ab67: jle 0x96abfb */
  if ((zf || sf != of)) goto L_96abfb;
L_96ab6d: /* 96ab6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_96ab70: /* 96ab70: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 96ab75: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 96ab7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ab7d: mov ecx, dword ptr [0xcf85d8] */
  ecx = R32((uint32_t)(0xcf85d8u));
/* 96ab83: mov dword ptr [esp + 0x10], 0x80800000 */
  W32((uint32_t)(esp + 0x10u), 0x80800000u);
/* 96ab8b: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 96ab8e: je 0x96abc5 */
  if (zf) goto L_96abc5;
L_96ab90: /* 96ab90: lea ebx, [edx*4] */
  ebx = (uint32_t)(edx*4);
/* 96ab97: mov edx, eax */
  edx = eax;
/* 96ab99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96aba0: /* 96aba0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 96aba4: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 96aba6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96aba8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96abab: jp 0x96abb3 */
  if (pf) goto L_96abb3;
L_96abad: /* 96abad: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96abaf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_96abb3: /* 96abb3: fcom dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
/* 96abb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96abb7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96abba: jne 0x96abc0 */
  if (!zf) goto L_96abc0;
L_96abbc: /* 96abbc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96abbe: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
L_96abc0: /* 96abc0: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96abc2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 96abc3: jne 0x96aba0 */
  if (!zf) goto L_96aba0;
L_96abc5: /* 96abc5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 96abc9: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96abcc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 96abce: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96abd2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 96abd6: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96abda: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96abdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96abde: push 0xaff6d8 */
  { uint32_t v = 0xaff6d8u; esp -= 4; W32(esp, v); }
/* 96abe3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96abe4: call 0x953470 */
  esp -= 4; W32(esp, 0x96abe9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96abe9: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96abef: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96abf2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96abf3: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96abf5: jl 0x96ab70 */
  if ((sf != of)) goto L_96ab70;
L_96abfb: /* 96abfb: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96ac01: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96ac04: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96ac07: push 0xaff4f0 */
  { uint32_t v = 0xaff4f0u; esp -= 4; W32(esp, v); }
/* 96ac0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ac0d: call 0x953470 */
  esp -= 4; W32(esp, 0x96ac12u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ac12: push 0xaff4a0 */
  { uint32_t v = 0xaff4a0u; esp -= 4; W32(esp, v); }
/* 96ac17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ac18: call 0x953470 */
  esp -= 4; W32(esp, 0x96ac1du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ac1d: push 0xaff2d8 */
  { uint32_t v = 0xaff2d8u; esp -= 4; W32(esp, v); }
/* 96ac22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ac23: call 0x953470 */
  esp -= 4; W32(esp, 0x96ac28u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ac28: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96ac2d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ac30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ac32: je 0x96ac4b */
  if (zf) goto L_96ac4b;
L_96ac34: /* 96ac34: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 96ac39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ac3b: jne 0x96ac4b */
  if (!zf) goto L_96ac4b;
L_96ac3d: /* 96ac3d: push 0xaff200 */
  { uint32_t v = 0xaff200u; esp -= 4; W32(esp, v); }
/* 96ac42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ac43: call 0x953470 */
  esp -= 4; W32(esp, 0x96ac48u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ac48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ac4b: /* 96ac4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96ac4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96ac4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96ac4e: mov esp, ebp */
  esp = ebp;
/* 96ac50: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96ac51: ret  */
  esp += 4; SPILL(); return;
}

void f_96ac60(void) {
  LOAD_REGS();
L_96ac60: /* 96ac60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96ac61: mov ebp, esp */
  ebp = esp;
/* 96ac63: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96ac66: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96ac69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ac6a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 96ac6d: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 96ac70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ac71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ac72: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 96ac75: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 96ac78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ac79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ac7a: call 0x970820 */
  esp -= 4; W32(esp, 0x96ac7fu); SPILL(); f_970820(); if (g_unwind) return; RELOAD();
/* 96ac7f: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 96ac83: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 96ac87: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 96ac8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ac8b: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 96ac91: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 96ac95: call 0x94f340 */
  esp -= 4; W32(esp, 0x96ac9au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96ac9a: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96aca0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96aca3: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96aca6: jne 0x96acbd */
  if (!zf) goto L_96acbd;
L_96aca8: /* 96aca8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 96acab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96acac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96acad: push 0xaffbc8 */
  { uint32_t v = 0xaffbc8u; esp -= 4; W32(esp, v); }
/* 96acb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96acb3: call 0x953470 */
  esp -= 4; W32(esp, 0x96acb8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96acb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96acbb: jmp 0x96ace4 */
  goto L_96ace4;
L_96acbd: /* 96acbd: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96acc0: jne 0x96acde */
  if (!zf) goto L_96acde;
L_96acc2: /* 96acc2: mov eax, dword ptr [0xcf8418] */
  eax = R32((uint32_t)(0xcf8418u));
/* 96acc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96acc9: jl 0x96acde */
  if ((sf != of)) goto L_96acde;
L_96accb: /* 96accb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96acce: push 0xaffbbc */
  { uint32_t v = 0xaffbbcu; esp -= 4; W32(esp, v); }
/* 96acd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96acd4: call 0x953470 */
  esp -= 4; W32(esp, 0x96acd9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96acd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96acdc: jmp 0x96ace4 */
  goto L_96ace4;
L_96acde: /* 96acde: inc dword ptr [0xcf8be4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8be4u), r);
  }
L_96ace4: /* 96ace4: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 96ace7: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 96acea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96aced: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96acee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96acef: push 0xaffba4 */
  { uint32_t v = 0xaffba4u; esp -= 4; W32(esp, v); }
/* 96acf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96acf5: call 0x953470 */
  esp -= 4; W32(esp, 0x96acfau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96acfa: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 96ad00: fmul qword ptr [0xa176f0] */
  ST0 = ST0 * (F64((uint32_t)(0xa176f0u)));
/* 96ad06: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ad09: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ad0b: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 96ad11: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 96ad15: je 0x96aeea */
  if (zf) goto L_96aeea;
L_96ad1b: /* 96ad1b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96ad1e: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 96ad22: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 96ad24: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ad26: je 0x96aeea */
  if (zf) goto L_96aeea;
L_96ad2c: /* 96ad2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96ad30: /* 96ad30: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 96ad34: mov eax, dword ptr [0xcf788c] */
  eax = R32((uint32_t)(0xcf788cu));
/* 96ad39: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96ad3c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 96ad40: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 96ad44: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96ad47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ad48: mov dword ptr [0xcf788c], eax */
  W32((uint32_t)(0xcf788cu), eax);
/* 96ad4d: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 96ad50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ad51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ad52: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96ad57u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96ad57: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 96ad5a: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 96ad5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ad5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ad60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ad61: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96ad66u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96ad66: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 96ad6a: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 96ad6e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96ad72: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 96ad76: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ad79: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 96ad7d: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 96ad81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ad82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ad83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ad84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ad85: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 96ad88: call 0x962c10 */
  esp -= 4; W32(esp, 0x96ad8du); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 96ad8d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96ad91: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 96ad95: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 96ad99: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 96ad9d: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 96ada1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ada4: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 96ada8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ada9: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 96adad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96adae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96adaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96adb0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 96adb3: call 0x962c10 */
  esp -= 4; W32(esp, 0x96adb8u); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 96adb8: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 96adbc: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 96adc0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96adc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96adc5: jne 0x96adcf */
  if (!zf) goto L_96adcf;
L_96adc7: /* 96adc7: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 96adcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96adcd: je 0x96addf */
  if (zf) goto L_96addf;
L_96adcf: /* 96adcf: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 96add7: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
L_96addf: /* 96addf: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96ade5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ade7: je 0x96ae27 */
  if (zf) goto L_96ae27;
L_96ade9: /* 96ade9: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 96adec: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 96adef: lea ebx, [esp + 0x38] */
  ebx = (uint32_t)(esp + 0x38u);
/* 96adf3: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 96adf5: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 96adf8: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 96adfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_96ae00: /* 96ae00: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 96ae04: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 96ae07: fmul dword ptr [edi + eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax + 0xfffffffcu)));
/* 96ae0b: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96ae0e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96ae0f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ae11: fadd dword ptr [edx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + ecx*4)));
/* 96ae14: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 96ae18: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 96ae1a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 96ae1c: fstp dword ptr [ebx + eax] */
  WF32((uint32_t)(ebx + eax), ST0); FPOP();
/* 96ae1f: jne 0x96ae00 */
  if (!zf) goto L_96ae00;
L_96ae21: /* 96ae21: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 96ae24: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_96ae27: /* 96ae27: cmp dword ptr [0xcf8494], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8494u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ae2e: jg 0x96ae6b */
  if ((!zf && sf == of)) goto L_96ae6b;
L_96ae30: /* 96ae30: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 96ae34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ae35: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 96ae39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ae3a: call 0x96c350 */
  esp -= 4; W32(esp, 0x96ae3fu); SPILL(); f_96c350(); if (g_unwind) return; RELOAD();
/* 96ae3f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 96ae43: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 96ae46: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96ae49: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 96ae4d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96ae50: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96ae54: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 96ae58: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96ae5b: push 0xaffb8c */
  { uint32_t v = 0xaffb8cu; esp -= 4; W32(esp, v); }
/* 96ae60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ae61: call 0x953470 */
  esp -= 4; W32(esp, 0x96ae66u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ae66: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ae69: jmp 0x96ae9e */
  goto L_96ae9e;
L_96ae6b: /* 96ae6b: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 96ae6f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96ae72: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96ae75: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 96ae79: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 96ae7d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96ae81: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 96ae85: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96ae89: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 96ae8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96ae90: push 0xaffb70 */
  { uint32_t v = 0xaffb70u; esp -= 4; W32(esp, v); }
/* 96ae95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ae96: call 0x953470 */
  esp -= 4; W32(esp, 0x96ae9bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ae9b: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ae9e: /* 96ae9e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 96aea2: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 96aea6: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96aea8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96aeaa: je 0x96aec1 */
  if (zf) goto L_96aec1;
L_96aeac: /* 96aeac: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 96aeaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96aeb0: call 0x95f210 */
  esp -= 4; W32(esp, 0x96aeb5u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96aeb5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 96aeb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96aeb9: push 0xaffb58 */
  { uint32_t v = 0xaffb58u; esp -= 4; W32(esp, v); }
/* 96aebe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96aebf: jmp 0x96aed4 */
  goto L_96aed4;
L_96aec1: /* 96aec1: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 96aec4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96aec5: call 0x95f210 */
  esp -= 4; W32(esp, 0x96aecau); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96aeca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96aecb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96aece: push 0xaffb48 */
  { uint32_t v = 0xaffb48u; esp -= 4; W32(esp, v); }
/* 96aed3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_96aed4: /* 96aed4: call 0x953470 */
  esp -= 4; W32(esp, 0x96aed9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96aed9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 96aedd: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 96aedf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96aee2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96aee4: jne 0x96ad30 */
  if (!zf) goto L_96ad30;
L_96aeea: /* 96aeea: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96aeef: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96aef2: jne 0x96af25 */
  if (!zf) goto L_96af25;
L_96aef4: /* 96aef4: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 96aef7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 96aefa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 96aefd: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96af00: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96af04: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 96af07: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96af0b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 96af0d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96af10: push 0xafe364 */
  { uint32_t v = 0xafe364u; esp -= 4; W32(esp, v); }
/* 96af15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96af16: call 0x953470 */
  esp -= 4; W32(esp, 0x96af1bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96af1b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96af1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96af1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96af20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96af21: mov esp, ebp */
  esp = ebp;
/* 96af23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96af24: ret  */
  esp += 4; SPILL(); return;
L_96af25: /* 96af25: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96af28: jne 0x96af5d */
  if (!zf) goto L_96af5d;
L_96af2a: /* 96af2a: mov eax, dword ptr [0xcf8418] */
  eax = R32((uint32_t)(0xcf8418u));
/* 96af2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96af31: jl 0x96af5d */
  if ((sf != of)) goto L_96af5d;
L_96af33: /* 96af33: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 96af36: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 96af39: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96af3c: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96af40: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 96af43: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96af47: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 96af49: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96af4c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96af4f: push 0xaffb28 */
  { uint32_t v = 0xaffb28u; esp -= 4; W32(esp, v); }
/* 96af54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96af55: call 0x953470 */
  esp -= 4; W32(esp, 0x96af5au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96af5a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96af5d: /* 96af5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96af5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96af5f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96af60: mov esp, ebp */
  esp = ebp;
/* 96af62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96af63: ret  */
  esp += 4; SPILL(); return;
}

void f_96af70(void) {
  LOAD_REGS();
L_96af70: /* 96af70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96af71: mov ebp, esp */
  ebp = esp;
/* 96af73: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96af76: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96af79: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 96af7c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96af7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96af7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96af7f: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 96af83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96af84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96af85: call 0x96c350 */
  esp -= 4; W32(esp, 0x96af8au); SPILL(); f_96c350(); if (g_unwind) return; RELOAD();
/* 96af8a: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 96af8d: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96af91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96af92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96af93: call 0x96c350 */
  esp -= 4; W32(esp, 0x96af98u); SPILL(); f_96c350(); if (g_unwind) return; RELOAD();
/* 96af98: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 96af9c: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 96afa0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96afa3: fabs  */
  ST0 = fabs(ST0);
/* 96afa5: fcomp qword ptr [0xa1f978] */
  fpu_com(ST0, F64((uint32_t)(0xa1f978u)));
  FPOP();
/* 96afab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96afad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96afb0: je 0x96aff3 */
  if (zf) goto L_96aff3;
L_96afb2: /* 96afb2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 96afb6: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 96afba: fabs  */
  ST0 = fabs(ST0);
/* 96afbc: fcomp qword ptr [0xa1f978] */
  fpu_com(ST0, F64((uint32_t)(0xa1f978u)));
  FPOP();
/* 96afc2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96afc4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96afc7: je 0x96aff3 */
  if (zf) goto L_96aff3;
L_96afc9: /* 96afc9: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 96afcd: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 96afd1: fabs  */
  ST0 = fabs(ST0);
/* 96afd3: fcomp qword ptr [0xa1f978] */
  fpu_com(ST0, F64((uint32_t)(0xa1f978u)));
  FPOP();
/* 96afd9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96afdb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96afde: je 0x96aff3 */
  if (zf) goto L_96aff3;
L_96afe0: /* 96afe0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 96afe3: push 0xaffc0c */
  { uint32_t v = 0xaffc0cu; esp -= 4; W32(esp, v); }
/* 96afe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96afe9: call 0x953470 */
  esp -= 4; W32(esp, 0x96afeeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96afee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96aff1: jmp 0x96b039 */
  goto L_96b039;
L_96aff3: /* 96aff3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 96aff6: push 0xaffbfc */
  { uint32_t v = 0xaffbfcu; esp -= 4; W32(esp, v); }
/* 96affb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96affc: call 0x953470 */
  esp -= 4; W32(esp, 0x96b001u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b001: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b004: xor edi, edi */
  edi = 0;
L_96b006: /* 96b006: fld dword ptr [esp + edi*4 + 0x10] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x10u)); FPUSH(v); }
/* 96b00a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b00d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96b010: push 0xafe40c */
  { uint32_t v = 0xafe40cu; esp -= 4; W32(esp, v); }
/* 96b015: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b016: call 0x953470 */
  esp -= 4; W32(esp, 0x96b01bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b01b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b01e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96b01f: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96b022: jl 0x96b006 */
  if ((sf != of)) goto L_96b006;
L_96b024: /* 96b024: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b025: call 0x95f210 */
  esp -= 4; W32(esp, 0x96b02au); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96b02a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b02b: push 0xaffbf4 */
  { uint32_t v = 0xaffbf4u; esp -= 4; W32(esp, v); }
/* 96b030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b031: call 0x953470 */
  esp -= 4; W32(esp, 0x96b036u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b036: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b039: /* 96b039: xor edi, edi */
  edi = 0;
/* 96b03b: nop  */
/* 96b03c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96b040: /* 96b040: fld dword ptr [esp + edi*4 + 0x20] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x20u)); FPUSH(v); }
/* 96b044: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b047: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96b04a: push 0xafe40c */
  { uint32_t v = 0xafe40cu; esp -= 4; W32(esp, v); }
/* 96b04f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b050: call 0x953470 */
  esp -= 4; W32(esp, 0x96b055u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b055: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b058: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96b059: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96b05c: jl 0x96b040 */
  if ((sf != of)) goto L_96b040;
L_96b05e: /* 96b05e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 96b061: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b062: call 0x95f210 */
  esp -= 4; W32(esp, 0x96b067u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96b067: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b068: push 0xaffbf4 */
  { uint32_t v = 0xaffbf4u; esp -= 4; W32(esp, v); }
/* 96b06d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b06e: call 0x953470 */
  esp -= 4; W32(esp, 0x96b073u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b073: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 96b076: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 96b079: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b07c: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96b080: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 96b083: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96b087: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 96b089: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96b08c: push 0xaffbdc */
  { uint32_t v = 0xaffbdcu; esp -= 4; W32(esp, v); }
/* 96b091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b092: call 0x953470 */
  esp -= 4; W32(esp, 0x96b097u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b097: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b09a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b09b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b09c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b09d: mov esp, ebp */
  esp = ebp;
/* 96b09f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b0a0: ret  */
  esp += 4; SPILL(); return;
}

void f_96b0b0(void) {
  LOAD_REGS();
L_96b0b0: /* 96b0b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b0b1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 96b0b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b0b7: je 0x96b1b5 */
  if (zf) goto L_96b1b5;
L_96b0bd: /* 96b0bd: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 96b0c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b0c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b0c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b0c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b0c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b0c7: call 0x956620 */
  esp -= 4; W32(esp, 0x96b0ccu); SPILL(); f_956620(); if (g_unwind) return; RELOAD();
/* 96b0cc: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 96b0d0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96b0d4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b0d7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96b0d9: jne 0x96b0e3 */
  if (!zf) goto L_96b0e3;
L_96b0db: /* 96b0db: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_96b0e3: /* 96b0e3: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 96b0e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b0e7: call 0x94f340 */
  esp -= 4; W32(esp, 0x96b0ecu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96b0ec: lea edx, [eax + eax + 2] */
  edx = (uint32_t)(eax + eax + 0x2u);
/* 96b0f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b0f1: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x96b0f6u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 96b0f6: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 96b0fa: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96b0fe: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 96b103: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b106: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96b107: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 96b10c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96b110: /* 96b110: cmp dword ptr [ebx + 0x34], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x34u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96b113: je 0x96b12b */
  if (zf) goto L_96b12b;
L_96b115: /* 96b115: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 96b118: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96b11c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b11e: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96b123u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96b123: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 96b128: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b12b: /* 96b12b: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 96b12e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b130: je 0x96b177 */
  if (zf) goto L_96b177;
L_96b132: /* 96b132: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 96b135: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b137: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 96b13a: je 0x96b177 */
  if (zf) goto L_96b177;
L_96b13c: /* 96b13c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96b140: /* 96b140: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 96b143: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96b146: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96b148: je 0x96b171 */
  if (zf) goto L_96b171;
L_96b14a: /* 96b14a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b14c: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 96b14f: jne 0x96b15e */
  if (!zf) goto L_96b15e;
L_96b151: /* 96b151: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b152: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x96b157u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 96b157: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b15a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b15c: jne 0x96b16c */
  if (!zf) goto L_96b16c;
L_96b15e: /* 96b15e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 96b162: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b163: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b164: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96b169u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96b169: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b16c: /* 96b16c: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
L_96b171: /* 96b171: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 96b173: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b175: jne 0x96b140 */
  if (!zf) goto L_96b140;
L_96b177: /* 96b177: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 96b17b: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 96b17f: xor edx, edx */
  edx = 0;
/* 96b181: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96b183: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 96b186: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 96b187: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 96b189: mov ebx, edx */
  ebx = edx;
/* 96b18b: jne 0x96b110 */
  if (!zf) goto L_96b110;
L_96b18d: /* 96b18d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96b191: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96b195: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96b199: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b19a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b19b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b19d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b19e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b19f: call 0x96a450 */
  esp -= 4; W32(esp, 0x96b1a4u); SPILL(); f_96a450(); if (g_unwind) return; RELOAD();
/* 96b1a4: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 96b1a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b1a9: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96b1aeu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96b1ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b1b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b1b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b1b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b1b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_96b1b5: /* 96b1b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96b1b6: ret  */
  esp += 4; SPILL(); return;
}

void f_96b1c0(void) {
  LOAD_REGS();
L_96b1c0: /* 96b1c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b1c1: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96b1c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b1c6: call 0x95f210 */
  esp -= 4; W32(esp, 0x96b1cbu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96b1cb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 96b1cf: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 96b1d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b1d4: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96b1d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b1da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b1db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b1dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b1dd: call 0x96b1f0 */
  esp -= 4; W32(esp, 0x96b1e2u); SPILL(); f_96b1f0(); if (g_unwind) return; RELOAD();
/* 96b1e2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b1e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b1e6: ret  */
  esp += 4; SPILL(); return;
}

void f_96b1f0(void) {
  LOAD_REGS();
L_96b1f0: /* 96b1f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b1f1: mov ebp, esp */
  ebp = esp;
/* 96b1f3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96b1f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b1f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b1f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b1f9: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 96b1fc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b1fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b1ff: je 0x96b275 */
  if (zf) goto L_96b275;
L_96b201: /* 96b201: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 96b204: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b206: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 96b209: je 0x96b22d */
  if (zf) goto L_96b22d;
L_96b20b: /* 96b20b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b20c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b20d: call dword ptr [0xcfb0d4] */
  esp -= 4; W32(esp, 0x96b213u); SPILL(); f_42c86c(); if (g_unwind) return; /* MSVCR70!fputs */ RELOAD();
/* 96b213: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 96b216: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b219: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96b21c: je 0x96b22d */
  if (zf) goto L_96b22d;
L_96b21e: /* 96b21e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b21f: push 0xaffc24 */
  { uint32_t v = 0xaffc24u; esp -= 4; W32(esp, v); }
/* 96b224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b225: call 0x953470 */
  esp -= 4; W32(esp, 0x96b22au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b22a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b22d: /* 96b22d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 96b230: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b232: je 0x96b267 */
  if (zf) goto L_96b267;
L_96b234: /* 96b234: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_96b238: /* 96b238: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 96b23a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b23d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96b240: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96b243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b245: je 0x96b24e */
  if (zf) goto L_96b24e;
L_96b247: /* 96b247: push 0xaffc1c */
  { uint32_t v = 0xaffc1cu; esp -= 4; W32(esp, v); }
/* 96b24c: jmp 0x96b253 */
  goto L_96b253;
L_96b24e: /* 96b24e: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
L_96b253: /* 96b253: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b254: call 0x953470 */
  esp -= 4; W32(esp, 0x96b259u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b259: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96b25d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b260: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96b261: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 96b265: jne 0x96b238 */
  if (!zf) goto L_96b238;
L_96b267: /* 96b267: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96b26c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b26d: call 0x953470 */
  esp -= 4; W32(esp, 0x96b272u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b272: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b275: /* 96b275: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b277: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b278: mov esp, ebp */
  esp = ebp;
/* 96b27a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b27b: ret  */
  esp += 4; SPILL(); return;
}

void f_96b280(void) {
  LOAD_REGS();
L_96b280: /* 96b280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b281: mov ebp, esp */
  ebp = esp;
/* 96b283: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96b286: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b289: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b28a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 96b28d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b28e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b28f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96b293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b294: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b295: call 0x96c350 */
  esp -= 4; W32(esp, 0x96b29au); SPILL(); f_96c350(); if (g_unwind) return; RELOAD();
/* 96b29a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 96b29d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b2a0: xor esi, esi */
  esi = 0;
L_96b2a2: /* 96b2a2: fld dword ptr [esp + esi*4 + 0x10] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x10u)); FPUSH(v); }
/* 96b2a6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b2a9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96b2ac: push 0xafe40c */
  { uint32_t v = 0xafe40cu; esp -= 4; W32(esp, v); }
/* 96b2b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b2b2: call 0x953470 */
  esp -= 4; W32(esp, 0x96b2b7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b2b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b2ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96b2bb: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96b2be: jl 0x96b2a2 */
  if ((sf != of)) goto L_96b2a2;
L_96b2c0: /* 96b2c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b2c1: call 0x95f210 */
  esp -= 4; W32(esp, 0x96b2c6u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96b2c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b2c7: push 0xaffbf4 */
  { uint32_t v = 0xaffbf4u; esp -= 4; W32(esp, v); }
/* 96b2cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b2cd: call 0x953470 */
  esp -= 4; W32(esp, 0x96b2d2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b2d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b2d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b2d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b2d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b2d8: mov esp, ebp */
  esp = ebp;
/* 96b2da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b2db: ret  */
  esp += 4; SPILL(); return;
}

void f_96b2e0(void) {
  LOAD_REGS();
L_96b2e0: /* 96b2e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b2e3: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 96b2e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b2e9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b2ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b2eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b2ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b2ed: call 0x94f340 */
  esp -= 4; W32(esp, 0x96b2f2u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96b2f2: mov esi, eax */
  esi = eax;
/* 96b2f4: add esi, dword ptr [0xcf85d4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf85d4u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96b2fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b2fb: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 96b303: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x96b308u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 96b308: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b309: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b30b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b30c: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 96b310: call 0x94f610 */
  esp -= 4; W32(esp, 0x96b315u); SPILL(); f_94f610(); if (g_unwind) return; RELOAD();
/* 96b315: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 96b319: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 96b31d: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 96b321: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b322: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b323: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b324: call 0x966560 */
  esp -= 4; W32(esp, 0x96b329u); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 96b329: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b32c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b32e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96b332: je 0x96b364 */
  if (zf) goto L_96b364;
L_96b334: /* 96b334: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96b337: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b339: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 96b33c: je 0x96b364 */
  if (zf) goto L_96b364;
L_96b33e: /* 96b33e: mov edi, edi */
  edi = edi;
L_96b340: /* 96b340: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 96b343: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b344: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96b347: call 0x95f210 */
  esp -= 4; W32(esp, 0x96b34cu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96b34c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b34f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96b351: jl 0x96b35e */
  if ((sf != of)) goto L_96b35e;
L_96b353: /* 96b353: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 96b356: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96b35a: mov dword ptr [edx + eax*4 + 4], ecx */
  W32((uint32_t)(edx + eax*4 + 0x4u), ecx);
L_96b35e: /* 96b35e: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 96b360: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b362: jne 0x96b340 */
  if (!zf) goto L_96b340;
L_96b364: /* 96b364: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 96b369: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b36b: jne 0x96b383 */
  if (!zf) goto L_96b383;
L_96b36d: /* 96b36d: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
/* 96b372: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b374: jne 0x96b383 */
  if (!zf) goto L_96b383;
L_96b376: /* 96b376: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 96b37b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b37d: je 0x96b434 */
  if (zf) goto L_96b434;
L_96b383: /* 96b383: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b385: je 0x96b3d9 */
  if (zf) goto L_96b3d9;
L_96b387: /* 96b387: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 96b38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b38c: je 0x96b3d9 */
  if (zf) goto L_96b3d9;
L_96b38e: /* 96b38e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96b392: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b394: jne 0x96b3a3 */
  if (!zf) goto L_96b3a3;
L_96b396: /* 96b396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b397: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x96b39cu); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 96b39c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b39f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3a1: jne 0x96b3d2 */
  if (!zf) goto L_96b3d2;
L_96b3a3: /* 96b3a3: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 96b3a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3a8: je 0x96b3d2 */
  if (zf) goto L_96b3d2;
L_96b3aa: /* 96b3aa: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96b3ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3af: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 96b3b2: je 0x96b3d2 */
  if (zf) goto L_96b3d2;
L_96b3b4: /* 96b3b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b3b5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96b3b8: call 0x95f210 */
  esp -= 4; W32(esp, 0x96b3bdu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96b3bd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b3c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96b3c2: jl 0x96b3cc */
  if ((sf != of)) goto L_96b3cc;
L_96b3c4: /* 96b3c4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 96b3c8: mov dword ptr [ecx + eax*4 + 4], esi */
  W32((uint32_t)(ecx + eax*4 + 0x4u), esi);
L_96b3cc: /* 96b3cc: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 96b3ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3d0: jne 0x96b3b4 */
  if (!zf) goto L_96b3b4;
L_96b3d2: /* 96b3d2: mov ebx, dword ptr [ebx + 0x1c] */
  ebx = R32((uint32_t)(ebx + 0x1cu));
/* 96b3d5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3d7: jne 0x96b387 */
  if (!zf) goto L_96b387;
L_96b3d9: /* 96b3d9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3db: je 0x96b434 */
  if (zf) goto L_96b434;
L_96b3dd: /* 96b3dd: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 96b3e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3e2: lea ebx, [ebp + 4] */
  ebx = (uint32_t)(ebp + 0x4u);
/* 96b3e5: je 0x96b434 */
  if (zf) goto L_96b434;
L_96b3e7: /* 96b3e7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96b3eb: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96b3ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3f0: jne 0x96b3ff */
  if (!zf) goto L_96b3ff;
L_96b3f2: /* 96b3f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b3f3: call 0x96d2b0 */
  esp -= 4; W32(esp, 0x96b3f8u); SPILL(); f_96d2b0(); if (g_unwind) return; RELOAD();
/* 96b3f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b3fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b3fd: jne 0x96b42e */
  if (!zf) goto L_96b42e;
L_96b3ff: /* 96b3ff: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 96b402: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b404: je 0x96b42e */
  if (zf) goto L_96b42e;
L_96b406: /* 96b406: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 96b409: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 96b40b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b40d: je 0x96b42e */
  if (zf) goto L_96b42e;
L_96b40f: /* 96b40f: nop  */
L_96b410: /* 96b410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b411: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96b414: call 0x95f210 */
  esp -= 4; W32(esp, 0x96b419u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96b419: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b41c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96b41e: jl 0x96b428 */
  if ((sf != of)) goto L_96b428;
L_96b420: /* 96b420: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96b424: mov dword ptr [edx + eax*4 + 4], esi */
  W32((uint32_t)(edx + eax*4 + 0x4u), esi);
L_96b428: /* 96b428: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 96b42a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b42c: jne 0x96b410 */
  if (!zf) goto L_96b410;
L_96b42e: /* 96b42e: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 96b430: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b432: jne 0x96b3e7 */
  if (!zf) goto L_96b3e7;
L_96b434: /* 96b434: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 96b438: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b439: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96b43eu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96b43e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96b442: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b445: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b447: je 0x96b474 */
  if (zf) goto L_96b474;
L_96b449: /* 96b449: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96b44c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b44d: call 0x94f340 */
  esp -= 4; W32(esp, 0x96b452u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96b452: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b455: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96b457: jle 0x96b474 */
  if ((zf || sf != of)) goto L_96b474;
L_96b459: /* 96b459: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 96b45d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96b461: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_96b464: /* 96b464: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b466: je 0x96b469 */
  if (zf) goto L_96b469;
L_96b468: /* 96b468: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_96b469: /* 96b469: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 96b46c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96b46f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96b470: jne 0x96b464 */
  if (!zf) goto L_96b464;
L_96b472: /* 96b472: jmp 0x96b478 */
  goto L_96b478;
L_96b474: /* 96b474: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
L_96b478: /* 96b478: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 96b47d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b47f: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 96b483: je 0x96b4a7 */
  if (zf) goto L_96b4a7;
L_96b485: /* 96b485: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96b48a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96b48b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b48c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b48d: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 96b492: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96b497: push 0xafde10 */
  { uint32_t v = 0xafde10u; esp -= 4; W32(esp, v); }
/* 96b49c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b49d: call 0x953470 */
  esp -= 4; W32(esp, 0x96b4a2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b4a2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b4a5: jmp 0x96b4bd */
  goto L_96b4bd;
L_96b4a7: /* 96b4a7: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96b4ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b4ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b4af: push 0xafe0fc */
  { uint32_t v = 0xafe0fcu; esp -= 4; W32(esp, v); }
/* 96b4b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b4b5: call 0x953470 */
  esp -= 4; W32(esp, 0x96b4bau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b4ba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b4bd: /* 96b4bd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96b4c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b4c3: je 0x96b514 */
  if (zf) goto L_96b514;
L_96b4c5: /* 96b4c5: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96b4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b4c9: xor edi, edi */
  edi = 0;
/* 96b4cb: call 0x94f340 */
  esp -= 4; W32(esp, 0x96b4d0u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96b4d0: mov ebx, eax */
  ebx = eax;
/* 96b4d2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b4d5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96b4d7: jle 0x96b514 */
  if ((zf || sf != of)) goto L_96b514;
L_96b4d9: /* 96b4d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96b4e0: /* 96b4e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b4e2: je 0x96b507 */
  if (zf) goto L_96b507;
L_96b4e4: /* 96b4e4: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 96b4e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b4eb: je 0x96b4fb */
  if (zf) goto L_96b4fb;
L_96b4ed: /* 96b4ed: push 0xafdd34 */
  { uint32_t v = 0xafdd34u; esp -= 4; W32(esp, v); }
/* 96b4f2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b4f3: call 0x953470 */
  esp -= 4; W32(esp, 0x96b4f8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b4f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b4fb: /* 96b4fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b4fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b4fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b4ff: call 0x96b1c0 */
  esp -= 4; W32(esp, 0x96b504u); SPILL(); f_96b1c0(); if (g_unwind) return; RELOAD();
/* 96b504: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b507: /* 96b507: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96b50b: mov esi, dword ptr [edx + edi*4 + 8] */
  esi = R32((uint32_t)(edx + edi*4 + 0x8u));
/* 96b50f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96b510: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96b512: jl 0x96b4e0 */
  if ((sf != of)) goto L_96b4e0;
L_96b514: /* 96b514: mov eax, dword ptr [0xcf8400] */
  eax = R32((uint32_t)(0xcf8400u));
/* 96b519: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b51b: je 0x96b52b */
  if (zf) goto L_96b52b;
L_96b51d: /* 96b51d: push 0xafe234 */
  { uint32_t v = 0xafe234u; esp -= 4; W32(esp, v); }
/* 96b522: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b523: call 0x953470 */
  esp -= 4; W32(esp, 0x96b528u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b528: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b52b: /* 96b52b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96b52f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b530: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96b535u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96b535: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b538: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b539: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b53a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b53b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b53c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b53f: ret  */
  esp += 4; SPILL(); return;
}

void f_96b540(void) {
  LOAD_REGS();
L_96b540: /* 96b540: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b543: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b544: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 96b548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b549: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 96b54f: mov eax, esi */
  eax = esi;
/* 96b551: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b553: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b554: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 96b558: je 0x96b5bc */
  if (zf) goto L_96b5bc;
L_96b55a: /* 96b55a: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 96b55e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b55f: mov ebx, ebp */
  ebx = ebp;
/* 96b561: mov edx, edi */
  edx = edi;
/* 96b563: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 96b567: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 96b569: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 96b56b: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 96b56d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_96b570: /* 96b570: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96b571: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b573: je 0x96b587 */
  if (zf) goto L_96b587;
L_96b575: /* 96b575: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 96b578: lea ecx, [esp + ecx + 0x10] */
  ecx = (uint32_t)(esp + ecx + 0x10u);
/* 96b57c: fld dword ptr [ecx + ebx] */
  { double v = F32((uint32_t)(ecx + ebx)); FPUSH(v); }
/* 96b57f: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 96b581: fstp dword ptr [esp + eax*4 + 0x10] */
  WF32((uint32_t)(esp + eax*4 + 0x10u), ST0); FPOP();
/* 96b585: jmp 0x96b5b1 */
  goto L_96b5b1;
L_96b587: /* 96b587: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 96b58b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b58d: je 0x96b5a9 */
  if (zf) goto L_96b5a9;
L_96b58f: /* 96b58f: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 96b596: lea ebp, [edx + esi] */
  ebp = (uint32_t)(edx + esi);
/* 96b599: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 96b59b: mov ebp, dword ptr [esp + ebp + 0x10] */
  ebp = R32((uint32_t)(esp + ebp + 0x10u));
/* 96b59f: mov dword ptr [esp + ecx + 0x10], ebp */
  W32((uint32_t)(esp + ecx + 0x10u), ebp);
/* 96b5a3: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 96b5a7: jmp 0x96b5b1 */
  goto L_96b5b1;
L_96b5a9: /* 96b5a9: mov dword ptr [esp + eax*4 + 0x10], 0 */
  W32((uint32_t)(esp + eax*4 + 0x10u), 0x0u);
L_96b5b1: /* 96b5b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b5b3: jne 0x96b570 */
  if (!zf) goto L_96b570;
L_96b5b5: /* 96b5b5: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 96b5bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_96b5bc: /* 96b5bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b5be: je 0x96b5da */
  if (zf) goto L_96b5da;
L_96b5c0: /* 96b5c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b5c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b5c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96b5c6: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96b5ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b5cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b5cc: call 0x970b20 */
  esp -= 4; W32(esp, 0x96b5d1u); SPILL(); f_970b20(); if (g_unwind) return; RELOAD();
/* 96b5d1: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 96b5d7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b5da: /* 96b5da: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b5dc: je 0x96b602 */
  if (zf) goto L_96b602;
L_96b5de: /* 96b5de: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 96b5e2: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 96b5e6: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96b5e8: lea eax, [ebp + esi*4] */
  eax = (uint32_t)(ebp + esi*4);
/* 96b5ec: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 96b5ee: mov edi, edi */
  edi = edi;
L_96b5f0: /* 96b5f0: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 96b5f4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96b5f7: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 96b5f8: fmul dword ptr [ecx + eax] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax)));
/* 96b5fb: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 96b5fd: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 96b600: jne 0x96b5f0 */
  if (!zf) goto L_96b5f0;
L_96b602: /* 96b602: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 96b606: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 96b60a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b60b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 96b60f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b611: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b612: call 0x96af70 */
  esp -= 4; W32(esp, 0x96b617u); SPILL(); f_96af70(); if (g_unwind) return; RELOAD();
/* 96b617: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b61a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b61b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b61c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b61d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b620: ret  */
  esp += 4; SPILL(); return;
}

void f_96b630(void) {
  LOAD_REGS();
L_96b630: /* 96b630: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b633: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 96b637: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b638: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 96b63c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b63d: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 96b641: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b642: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 96b646: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b647: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 96b64b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96b64f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b651: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b652: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b653: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b654: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b655: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 96b65d: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 96b665: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 96b66d: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 96b675: mov dword ptr [esp + 0x38], 0x3f800000 */
  W32((uint32_t)(esp + 0x38u), 0x3f800000u);
/* 96b67d: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 96b685: call 0x96b540 */
  esp -= 4; W32(esp, 0x96b68au); SPILL(); f_96b540(); if (g_unwind) return; RELOAD();
/* 96b68a: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 96b68e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b691: fchs  */
  ST0 = -ST0;
/* 96b693: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 96b697: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b698: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b699: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 96b69c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b69d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b69e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b69f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b6a0: call 0x96b540 */
  esp -= 4; W32(esp, 0x96b6a5u); SPILL(); f_96b540(); if (g_unwind) return; RELOAD();
/* 96b6a5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b6a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b6a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b6aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b6ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b6ac: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b6af: ret  */
  esp += 4; SPILL(); return;
}

void f_96b6b0(void) {
  LOAD_REGS();
L_96b6b0: /* 96b6b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b6b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 96b6b5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 96b6b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b6b9: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 96b6bd: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 96b6c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b6c3: push 0xaffc70 */
  { uint32_t v = 0xaffc70u; esp -= 4; W32(esp, v); }
/* 96b6c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b6c9: call 0x953470 */
  esp -= 4; W32(esp, 0x96b6ceu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b6ce: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 96b6d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b6d4: test eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b6d9: je 0x96b6e9 */
  if (zf) goto L_96b6e9;
L_96b6db: /* 96b6db: push 0xafe7a4 */
  { uint32_t v = 0xafe7a4u; esp -= 4; W32(esp, v); }
/* 96b6e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b6e1: call 0x953470 */
  esp -= 4; W32(esp, 0x96b6e6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b6e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b6e9: /* 96b6e9: test dword ptr [esi + 0xc], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b6f0: je 0x96b700 */
  if (zf) goto L_96b700;
L_96b6f2: /* 96b6f2: push 0xaffc64 */
  { uint32_t v = 0xaffc64u; esp -= 4; W32(esp, v); }
/* 96b6f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b6f8: call 0x953470 */
  esp -= 4; W32(esp, 0x96b6fdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b6fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b700: /* 96b700: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96b705: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b706: call 0x953470 */
  esp -= 4; W32(esp, 0x96b70bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b70b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 96b70d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b70e: push 0xaffc4c */
  { uint32_t v = 0xaffc4cu; esp -= 4; W32(esp, v); }
/* 96b713: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b714: call 0x96bae0 */
  esp -= 4; W32(esp, 0x96b719u); SPILL(); f_96bae0(); if (g_unwind) return; RELOAD();
/* 96b719: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96b71c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b71f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b721: je 0x96b740 */
  if (zf) goto L_96b740;
L_96b723: /* 96b723: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 96b726: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b728: je 0x96b740 */
  if (zf) goto L_96b740;
L_96b72a: /* 96b72a: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 96b72d: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 96b730: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b732: push 0xaffc2c */
  { uint32_t v = 0xaffc2cu; esp -= 4; W32(esp, v); }
/* 96b737: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b738: call 0x953470 */
  esp -= 4; W32(esp, 0x96b73du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b73d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b740: /* 96b740: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b741: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b742: ret  */
  esp += 4; SPILL(); return;
}

void f_96b750(void) {
  LOAD_REGS();
L_96b750: /* 96b750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b751: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b752: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b753: inc dword ptr [0xcf8be8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8be8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8be8u), r);
  }
/* 96b759: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 96b75d: push 0xaffcb8 */
  { uint32_t v = 0xaffcb8u; esp -= 4; W32(esp, v); }
/* 96b762: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b763: call 0x953470 */
  esp -= 4; W32(esp, 0x96b768u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b768: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 96b76c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b76f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b771: je 0x96b7d1 */
  if (zf) goto L_96b7d1;
L_96b773: /* 96b773: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 96b776: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96b779: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b77b: je 0x96b7d1 */
  if (zf) goto L_96b7d1;
L_96b77d: /* 96b77d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_96b780: /* 96b780: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96b784: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 96b787: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b78a: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96b78e: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 96b793: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 96b797: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96b79a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96b79d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b79e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 96b7a2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b7a5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96b7a8: push 0xaffc88 */
  { uint32_t v = 0xaffc88u; esp -= 4; W32(esp, v); }
/* 96b7ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b7ae: call 0x953470 */
  esp -= 4; W32(esp, 0x96b7b3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b7b3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 96b7b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b7b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b7b8: call 0x96b280 */
  esp -= 4; W32(esp, 0x96b7bdu); SPILL(); f_96b280(); if (g_unwind) return; RELOAD();
/* 96b7bd: push 0xaffc84 */
  { uint32_t v = 0xaffc84u; esp -= 4; W32(esp, v); }
/* 96b7c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b7c3: call 0x953470 */
  esp -= 4; W32(esp, 0x96b7c8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b7c8: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 96b7ca: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b7cd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b7cf: jne 0x96b780 */
  if (!zf) goto L_96b780;
L_96b7d1: /* 96b7d1: push 0xaffc7c */
  { uint32_t v = 0xaffc7cu; esp -= 4; W32(esp, v); }
/* 96b7d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b7d7: call 0x953470 */
  esp -= 4; W32(esp, 0x96b7dcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b7dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b7df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b7e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b7e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b7e2: ret  */
  esp += 4; SPILL(); return;
}

void f_96b7f0(void) {
  LOAD_REGS();
L_96b7f0: /* 96b7f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 96b7f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b7f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b7f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b7f7: xor esi, esi */
  esi = 0;
/* 96b7f9: xor edi, edi */
  edi = 0;
/* 96b7fb: cmp eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96b7fe: jne 0x96b807 */
  if (!zf) goto L_96b807;
L_96b800: /* 96b800: mov edi, 0x96c2c0 */
  edi = 0x96c2c0u;
/* 96b805: jmp 0x96b848 */
  goto L_96b848;
L_96b807: /* 96b807: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96b80a: jne 0x96b818 */
  if (!zf) goto L_96b818;
L_96b80c: /* 96b80c: mov esi, 1 */
  esi = 0x1u;
/* 96b811: mov edi, 0x96c210 */
  edi = 0x96c210u;
/* 96b816: jmp 0x96b848 */
  goto L_96b848;
L_96b818: /* 96b818: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96b81b: jne 0x96b829 */
  if (!zf) goto L_96b829;
L_96b81d: /* 96b81d: mov esi, 2 */
  esi = 0x2u;
/* 96b822: mov edi, 0x96c210 */
  edi = 0x96c210u;
/* 96b827: jmp 0x96b848 */
  goto L_96b848;
L_96b829: /* 96b829: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b82a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96b82f: push 0xafff78 */
  { uint32_t v = 0xafff78u; esp -= 4; W32(esp, v); }
/* 96b834: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b835: call 0x953470 */
  esp -= 4; W32(esp, 0x96b83au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b83a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b83c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b83e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96b840: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96b845u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96b845: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b848: /* 96b848: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96b84c: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 96b850: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b851: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 96b855: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 96b859: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b85a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 96b85e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b85f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b860: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b861: call 0x9669d0 */
  esp -= 4; W32(esp, 0x96b866u); SPILL(); f_9669d0(); if (g_unwind) return; RELOAD();
/* 96b866: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b86a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b86c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b86e: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 96b872: call 0x96b8b0 */
  esp -= 4; W32(esp, 0x96b877u); SPILL(); f_96b8b0(); if (g_unwind) return; RELOAD();
/* 96b877: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 96b87b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b87c: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 96b881: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b882: call 0x953470 */
  esp -= 4; W32(esp, 0x96b887u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b887: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 96b88b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96b88d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b88e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b88f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b891: call 0x96b8b0 */
  esp -= 4; W32(esp, 0x96b896u); SPILL(); f_96b8b0(); if (g_unwind) return; RELOAD();
/* 96b896: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 96b89a: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b89d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b89e: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96b8a3u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96b8a3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b8a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b8a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b8a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b8a9: ret  */
  esp += 4; SPILL(); return;
}

void f_96b8b0(void) {
  LOAD_REGS();
L_96b8b0: /* 96b8b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b8b1: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 96b8b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b8b7: xor ebx, ebx */
  ebx = 0;
/* 96b8b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b8bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b8bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b8bd: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 96b8c1: je 0x96b8d7 */
  if (zf) goto L_96b8d7;
L_96b8c3: /* 96b8c3: mov edx, 0xfeffffff */
  edx = 0xfeffffffu;
L_96b8c8: /* 96b8c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 96b8ca: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b8cc: je 0x96b8d7 */
  if (zf) goto L_96b8d7;
L_96b8ce: /* 96b8ce: and dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 96b8d1: mov eax, ecx */
  eax = ecx;
/* 96b8d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b8d5: jne 0x96b8c8 */
  if (!zf) goto L_96b8c8;
L_96b8d7: /* 96b8d7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96b8db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b8dd: je 0x96b940 */
  if (zf) goto L_96b940;
L_96b8df: /* 96b8df: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96b8e2: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 96b8e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b8e6: call 0x94f340 */
  esp -= 4; W32(esp, 0x96b8ebu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96b8eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b8ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96b8f0: jle 0x96b940 */
  if ((zf || sf != of)) goto L_96b940;
L_96b8f2: /* 96b8f2: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 96b8f6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b8f7: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 96b8fb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96b8ff: nop  */
L_96b900: /* 96b900: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b902: je 0x96b925 */
  if (zf) goto L_96b925;
L_96b904: /* 96b904: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96b908: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96b90c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b90d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b90e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96b910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b912: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b913: call 0x966180 */
  esp -= 4; W32(esp, 0x96b918u); SPILL(); f_966180(); if (g_unwind) return; RELOAD();
/* 96b918: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 96b91c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b91f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96b921: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_96b925: /* 96b925: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96b929: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 96b92c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96b92f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96b930: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96b934: jne 0x96b900 */
  if (!zf) goto L_96b900;
L_96b936: /* 96b936: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96b93a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b93b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b93c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b93d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b93e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96b93f: ret  */
  esp += 4; SPILL(); return;
L_96b940: /* 96b940: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b941: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b942: mov eax, ebx */
  eax = ebx;
/* 96b944: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b945: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96b946: ret  */
  esp += 4; SPILL(); return;
}

void f_96b950(void) {
  LOAD_REGS();
L_96b950: /* 96b950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96b951: mov ebp, esp */
  ebp = esp;
/* 96b953: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96b956: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b957: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96b958: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 96b95b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b95d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b95e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96b95f: jne 0x96b979 */
  if (!zf) goto L_96b979;
L_96b961: /* 96b961: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96b964: push 0xafffe8 */
  { uint32_t v = 0xafffe8u; esp -= 4; W32(esp, v); }
/* 96b969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b96a: call 0x953470 */
  esp -= 4; W32(esp, 0x96b96fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b96f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b972: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96b973: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96b974: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96b975: mov esp, ebp */
  esp = ebp;
/* 96b977: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96b978: ret  */
  esp += 4; SPILL(); return;
L_96b979: /* 96b979: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 96b97c: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 96b97f: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 96b985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96b986: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96b987: call 0x95f210 */
  esp -= 4; W32(esp, 0x96b98cu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96b98c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 96b98f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b992: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96b993: push 0xafffd8 */
  { uint32_t v = 0xafffd8u; esp -= 4; W32(esp, v); }
/* 96b998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b999: call 0x953470 */
  esp -= 4; W32(esp, 0x96b99eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b99e: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 96b9a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b9a4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b9a6: je 0x96b9d9 */
  if (zf) goto L_96b9d9;
L_96b9a8: /* 96b9a8: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96b9ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b9af: je 0x96b9d9 */
  if (zf) goto L_96b9d9;
L_96b9b1: /* 96b9b1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_96b9b5: /* 96b9b5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 96b9b7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96b9ba: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96b9bd: push 0xafffd0 */
  { uint32_t v = 0xafffd0u; esp -= 4; W32(esp, v); }
/* 96b9c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b9c3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96b9c6: call 0x953470 */
  esp -= 4; W32(esp, 0x96b9cbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b9cb: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96b9cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96b9d2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96b9d3: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 96b9d7: jne 0x96b9b5 */
  if (!zf) goto L_96b9b5;
L_96b9d9: /* 96b9d9: test dword ptr [ebx + 0x14], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b9e0: je 0x96b9f0 */
  if (zf) goto L_96b9f0;
L_96b9e2: /* 96b9e2: push 0xafffc4 */
  { uint32_t v = 0xafffc4u; esp -= 4; W32(esp, v); }
/* 96b9e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b9e8: call 0x953470 */
  esp -= 4; W32(esp, 0x96b9edu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96b9ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96b9f0: /* 96b9f0: test dword ptr [ebx + 0x14], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96b9f7: je 0x96ba07 */
  if (zf) goto L_96ba07;
L_96b9f9: /* 96b9f9: push 0xafffb4 */
  { uint32_t v = 0xafffb4u; esp -= 4; W32(esp, v); }
/* 96b9fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96b9ff: call 0x953470 */
  esp -= 4; W32(esp, 0x96ba04u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ba04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ba07: /* 96ba07: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96ba0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ba0d: call 0x953470 */
  esp -= 4; W32(esp, 0x96ba12u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ba12: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 96ba15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ba18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ba1a: je 0x96ba69 */
  if (zf) goto L_96ba69;
L_96ba1c: /* 96ba1c: push 0xafffa4 */
  { uint32_t v = 0xafffa4u; esp -= 4; W32(esp, v); }
/* 96ba21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ba22: call 0x953470 */
  esp -= 4; W32(esp, 0x96ba27u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ba27: mov ebx, dword ptr [ebx + 0xc] */
  ebx = R32((uint32_t)(ebx + 0xcu));
/* 96ba2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ba2d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ba2f: je 0x96ba5b */
  if (zf) goto L_96ba5b;
L_96ba31: /* 96ba31: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 96ba34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ba36: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* 96ba39: je 0x96ba5b */
  if (zf) goto L_96ba5b;
L_96ba3b: /* 96ba3b: nop  */
/* 96ba3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96ba40: /* 96ba40: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 96ba43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ba44: push 0xaf9610 */
  { uint32_t v = 0xaf9610u; esp -= 4; W32(esp, v); }
/* 96ba49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ba4a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96ba4d: call 0x953470 */
  esp -= 4; W32(esp, 0x96ba52u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ba52: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 96ba54: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ba57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ba59: jne 0x96ba40 */
  if (!zf) goto L_96ba40;
L_96ba5b: /* 96ba5b: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96ba60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ba61: call 0x953470 */
  esp -= 4; W32(esp, 0x96ba66u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ba66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ba69: /* 96ba69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96ba6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96ba6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96ba6c: mov esp, ebp */
  esp = ebp;
/* 96ba6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96ba6f: ret  */
  esp += 4; SPILL(); return;
}

void f_96ba70(void) {
  LOAD_REGS();
L_96ba70: /* 96ba70: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96ba74: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 96ba78: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 96ba7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ba7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ba7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ba7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ba80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ba81: call 0x966560 */
  esp -= 4; W32(esp, 0x96ba86u); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 96ba86: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 96ba8a: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 96ba8e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96ba92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ba93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ba94: call dword ptr [0xcfb0d4] */
  esp -= 4; W32(esp, 0x96ba9au); SPILL(); f_42c86c(); if (g_unwind) return; /* MSVCR70!fputs */ RELOAD();
/* 96ba9a: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96ba9e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96baa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96baa3: je 0x96bac3 */
  if (zf) goto L_96bac3;
L_96baa5: /* 96baa5: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96baa8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96baaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96baac: je 0x96bac3 */
  if (zf) goto L_96bac3;
L_96baae: /* 96baae: mov edi, edi */
  edi = edi;
L_96bab0: /* 96bab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bab2: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bab5: call 0x96b950 */
  esp -= 4; W32(esp, 0x96babau); SPILL(); f_96b950(); if (g_unwind) return; RELOAD();
/* 96baba: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96babc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96babf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bac1: jne 0x96bab0 */
  if (!zf) goto L_96bab0;
L_96bac3: /* 96bac3: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 96bac7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bac8: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96bacdu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96bacd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96bad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96bad2: ret  */
  esp += 4; SPILL(); return;
}

void f_96bae0(void) {
  LOAD_REGS();
L_96bae0: /* 96bae0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 96bae4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bae5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bae6: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 96baea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96baeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96baec: call dword ptr [0xcfb0d4] */
  esp -= 4; W32(esp, 0x96baf2u); SPILL(); f_42c86c(); if (g_unwind) return; /* MSVCR70!fputs */ RELOAD();
/* 96baf2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96baf6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96baf9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bafb: je 0x96bb34 */
  if (zf) goto L_96bb34;
L_96bafd: /* 96bafd: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96bb00: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bb02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bb04: je 0x96bb34 */
  if (zf) goto L_96bb34;
L_96bb06: /* 96bb06: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 96bb09: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 96bb0c: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 96bb12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bb13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96bb14: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bb17: call 0x95f210 */
  esp -= 4; W32(esp, 0x96bb1cu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96bb1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bb1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bb20: push 0xaffff8 */
  { uint32_t v = 0xaffff8u; esp -= 4; W32(esp, v); }
/* 96bb25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bb26: call 0x953470 */
  esp -= 4; W32(esp, 0x96bb2bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bb2b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bb2d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bb30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bb32: jne 0x96bb06 */
  if (!zf) goto L_96bb06;
L_96bb34: /* 96bb34: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96bb39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bb3a: call 0x953470 */
  esp -= 4; W32(esp, 0x96bb3fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bb3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bb42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96bb43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96bb44: ret  */
  esp += 4; SPILL(); return;
}

void f_96bb50(void) {
  LOAD_REGS();
L_96bb50: /* 96bb50: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96bb53: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 96bb58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bb59: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96bb5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bb5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bb5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bb5d: call 0x94f340 */
  esp -= 4; W32(esp, 0x96bb62u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96bb62: mov edi, dword ptr [0xcf85d4] */
  edi = R32((uint32_t)(0xcf85d4u));
/* 96bb68: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 96bb6c: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 96bb70: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 96bb74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bb75: mov esi, eax */
  esi = eax;
/* 96bb77: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 96bb7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96bb7c: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 96bb80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bb81: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 96bb85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bb86: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 96bb8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96bb8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bb8c: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bb8e: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 96bb92: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96bb93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bb94: call 0x9657a0 */
  esp -= 4; W32(esp, 0x96bb99u); SPILL(); f_9657a0(); if (g_unwind) return; RELOAD();
/* 96bb99: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 96bb9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bb9e: push 0xaf2ab4 */
  { uint32_t v = 0xaf2ab4u; esp -= 4; W32(esp, v); }
/* 96bba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bba4: call 0x953470 */
  esp -= 4; W32(esp, 0x96bba9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bba9: call 0x958540 */
  esp -= 4; W32(esp, 0x96bbaeu); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
/* 96bbae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bbaf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96bbb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bbb1: call 0x966560 */
  esp -= 4; W32(esp, 0x96bbb6u); SPILL(); f_966560(); if (g_unwind) return; RELOAD();
/* 96bbb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bbb7: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 96bbbb: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x96bbc0u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 96bbc0: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bbc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bbc4: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96bbc8: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x96bbcdu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 96bbcd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96bbd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bbd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96bbd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bbd5: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96bbd9: call 0x94f610 */
  esp -= 4; W32(esp, 0x96bbdeu); SPILL(); f_94f610(); if (g_unwind) return; RELOAD();
/* 96bbde: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 96bbe2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bbe3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96bbe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96bbe6: call 0x94f610 */
  esp -= 4; W32(esp, 0x96bbebu); SPILL(); f_94f610(); if (g_unwind) return; RELOAD();
/* 96bbeb: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 96bbef: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bbf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bbf4: je 0x96bc1b */
  if (zf) goto L_96bc1b;
L_96bbf6: /* 96bbf6: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96bbf9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bbfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bbfd: je 0x96bc1b */
  if (zf) goto L_96bc1b;
L_96bbff: /* 96bbff: nop  */
L_96bc00: /* 96bc00: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 96bc04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bc05: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 96bc08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bc09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bc0a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bc0d: call 0x957e60 */
  esp -= 4; W32(esp, 0x96bc12u); SPILL(); f_957e60(); if (g_unwind) return; RELOAD();
/* 96bc12: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bc14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bc17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc19: jne 0x96bc00 */
  if (!zf) goto L_96bc00;
L_96bc1b: /* 96bc1b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc1d: je 0x96bc56 */
  if (zf) goto L_96bc56;
L_96bc1f: /* 96bc1f: nop  */
L_96bc20: /* 96bc20: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 96bc23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc25: je 0x96bc56 */
  if (zf) goto L_96bc56;
L_96bc27: /* 96bc27: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 96bc2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc2c: je 0x96bc4f */
  if (zf) goto L_96bc4f;
L_96bc2e: /* 96bc2e: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96bc31: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bc33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc35: je 0x96bc4f */
  if (zf) goto L_96bc4f;
L_96bc37: /* 96bc37: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96bc3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bc3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bc3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96bc3e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bc41: call 0x957e60 */
  esp -= 4; W32(esp, 0x96bc46u); SPILL(); f_957e60(); if (g_unwind) return; RELOAD();
/* 96bc46: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bc48: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bc4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc4d: jne 0x96bc37 */
  if (!zf) goto L_96bc37;
L_96bc4f: /* 96bc4f: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 96bc52: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc54: jne 0x96bc20 */
  if (!zf) goto L_96bc20;
L_96bc56: /* 96bc56: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc58: je 0x96bc95 */
  if (zf) goto L_96bc95;
L_96bc5a: /* 96bc5a: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 96bc5d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc5f: lea ebx, [ebp + 4] */
  ebx = (uint32_t)(ebp + 0x4u);
/* 96bc62: je 0x96bc95 */
  if (zf) goto L_96bc95;
L_96bc64: /* 96bc64: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 96bc67: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96bc6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc6c: je 0x96bc8f */
  if (zf) goto L_96bc8f;
L_96bc6e: /* 96bc6e: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96bc71: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bc73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc75: je 0x96bc8f */
  if (zf) goto L_96bc8f;
L_96bc77: /* 96bc77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bc78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bc79: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96bc7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bc7e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bc81: call 0x957e60 */
  esp -= 4; W32(esp, 0x96bc86u); SPILL(); f_957e60(); if (g_unwind) return; RELOAD();
/* 96bc86: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bc88: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bc8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc8d: jne 0x96bc77 */
  if (!zf) goto L_96bc77;
L_96bc8f: /* 96bc8f: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 96bc91: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc93: jne 0x96bc64 */
  if (!zf) goto L_96bc64;
L_96bc95: /* 96bc95: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96bc99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bc9b: je 0x96bdc0 */
  if (zf) goto L_96bdc0;
L_96bca1: /* 96bca1: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96bca4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bca5: call 0x94f340 */
  esp -= 4; W32(esp, 0x96bcaau); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96bcaa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bcad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96bcaf: jle 0x96bdc0 */
  if ((zf || sf != of)) goto L_96bdc0;
L_96bcb5: /* 96bcb5: mov ecx, 4 */
  ecx = 0x4u;
/* 96bcba: mov ebp, ecx */
  ebp = ecx;
/* 96bcbc: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_96bcc0: /* 96bcc0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bcc2: je 0x96bd61 */
  if (zf) goto L_96bd61;
L_96bcc8: /* 96bcc8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 96bccb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bccc: call 0x94f340 */
  esp -= 4; W32(esp, 0x96bcd1u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96bcd1: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 96bcd5: mov edi, eax */
  edi = eax;
/* 96bcd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bcd8: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 96bcdd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bcde: call 0x953470 */
  esp -= 4; W32(esp, 0x96bce3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bce3: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96bce8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bceb: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96bcee: jne 0x96bcfb */
  if (!zf) goto L_96bcfb;
L_96bcf0: /* 96bcf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bcf1: call 0x966bb0 */
  esp -= 4; W32(esp, 0x96bcf6u); SPILL(); f_966bb0(); if (g_unwind) return; RELOAD();
/* 96bcf6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bcf9: jmp 0x96bd18 */
  goto L_96bd18;
L_96bcfb: /* 96bcfb: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96bcfe: jl 0x96bd18 */
  if ((sf != of)) goto L_96bd18;
L_96bd00: /* 96bd00: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 96bd03: push 0x965fb0 */
  { uint32_t v = 0x965fb0u; esp -= 4; W32(esp, v); }
/* 96bd08: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 96bd0a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96bd0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bd0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96bd0f: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x96bd15u); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 96bd15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96bd18: /* 96bd18: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 96bd1b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bd1d: je 0x96bd59 */
  if (zf) goto L_96bd59;
L_96bd1f: /* 96bd1f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96bd22: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bd25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bd27: je 0x96bd59 */
  if (zf) goto L_96bd59;
L_96bd29: /* 96bd29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96bd30: /* 96bd30: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 96bd33: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bd36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bd38: je 0x96bd3f */
  if (zf) goto L_96bd3f;
L_96bd3a: /* 96bd3a: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 96bd3d: jmp 0x96bd44 */
  goto L_96bd44;
L_96bd3f: /* 96bd3f: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 96bd42: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_96bd44: /* 96bd44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bd45: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 96bd4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bd4b: call 0x953470 */
  esp -= 4; W32(esp, 0x96bd50u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bd50: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96bd52: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bd55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bd57: jne 0x96bd30 */
  if (!zf) goto L_96bd30;
L_96bd59: /* 96bd59: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96bd5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bd5f: jmp 0x96bd9c */
  goto L_96bd9c;
L_96bd61: /* 96bd61: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96bd65: mov eax, dword ptr [ecx + eax] */
  eax = R32((uint32_t)(ecx + eax));
/* 96bd68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bd6a: je 0x96bd92 */
  if (zf) goto L_96bd92;
L_96bd6c: /* 96bd6c: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 96bd6f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bd71: je 0x96bd78 */
  if (zf) goto L_96bd78;
L_96bd73: /* 96bd73: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 96bd76: jmp 0x96bd7d */
  goto L_96bd7d;
L_96bd78: /* 96bd78: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 96bd7b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_96bd7d: /* 96bd7d: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 96bd81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bd82: push 0xb00004 */
  { uint32_t v = 0xb00004u; esp -= 4; W32(esp, v); }
/* 96bd87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bd88: call 0x953470 */
  esp -= 4; W32(esp, 0x96bd8du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bd8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bd90: jmp 0x96bda4 */
  goto L_96bda4;
L_96bd92: /* 96bd92: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 96bd96: push 0xafddbc */
  { uint32_t v = 0xafddbcu; esp -= 4; W32(esp, v); }
/* 96bd9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_96bd9c: /* 96bd9c: call 0x953470 */
  esp -= 4; W32(esp, 0x96bda1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bda1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96bda4: /* 96bda4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96bda8: mov esi, dword ptr [eax + ebp + 4] */
  esi = R32((uint32_t)(eax + ebp + 0x4u));
/* 96bdac: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 96bdb0: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 96bdb3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96bdb4: mov ecx, ebp */
  ecx = ebp;
/* 96bdb6: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 96bdba: jne 0x96bcc0 */
  if (!zf) goto L_96bcc0;
L_96bdc0: /* 96bdc0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 96bdc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bdc5: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96bdcau); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96bdca: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96bdce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96bdcf: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96bdd4u); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96bdd4: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 96bdd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bdd9: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96bddeu); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96bdde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bde1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96bde2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96bde3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96bde4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96bde5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bde8: ret  */
  esp += 4; SPILL(); return;
}

void f_96bdf0(void) {
  LOAD_REGS();
L_96bdf0: /* 96bdf0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96bdf3: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 96bdf8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bdf9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96bdfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bdfb: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 96bdff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96be00: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 96be04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96be05: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 96be09: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 96be0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96be0e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96be12: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 96be16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96be17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96be18: mov ebp, 1 */
  ebp = 0x1u;
/* 96be1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96be1e: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 96be26: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 96be2a: call 0x9669d0 */
  esp -= 4; W32(esp, 0x96be2fu); SPILL(); f_9669d0(); if (g_unwind) return; RELOAD();
/* 96be2f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96be32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96be34: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 96be38: je 0x96bee1 */
  if (zf) goto L_96bee1;
L_96be3e: /* 96be3e: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 96be41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96be42: call 0x94f340 */
  esp -= 4; W32(esp, 0x96be47u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96be47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96be4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96be4c: jle 0x96bedd */
  if ((zf || sf != of)) goto L_96bedd;
L_96be52: /* 96be52: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 96be56: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 96be5a: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
/* 96be62: mov esi, 4 */
  esi = 0x4u;
L_96be67: /* 96be67: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96be69: je 0x96bebd */
  if (zf) goto L_96bebd;
L_96be6b: /* 96be6b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 96be6f: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 96be72: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 96be73: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 96be77: xor ebx, ebx */
  ebx = 0;
/* 96be79: xor ebp, ebp */
  ebp = 0;
/* 96be7b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96be7d: je 0x96bebd */
  if (zf) goto L_96bebd;
L_96be7f: /* 96be7f: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 96be82: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 96be84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96be86: je 0x96bebd */
  if (zf) goto L_96bebd;
L_96be88: /* 96be88: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 96be8b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96be8e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96be90: jne 0x96be99 */
  if (!zf) goto L_96be99;
L_96be92: /* 96be92: mov ebx, 1 */
  ebx = 0x1u;
/* 96be97: jmp 0x96bea0 */
  goto L_96bea0;
L_96be99: /* 96be99: cmp ecx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 96be9d: jae 0x96bea0 */
  if (!cf) goto L_96bea0;
L_96be9f: /* 96be9f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_96bea0: /* 96bea0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 96bea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bea4: jne 0x96be88 */
  if (!zf) goto L_96be88;
L_96bea6: /* 96bea6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bea8: je 0x96bebd */
  if (zf) goto L_96bebd;
L_96beaa: /* 96beaa: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96beac: jne 0x96bebd */
  if (!zf) goto L_96bebd;
L_96beae: /* 96beae: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96beb2: mov dword ptr [edx + eax], ebp */
  W32((uint32_t)(edx + eax), ebp);
/* 96beb5: dec dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 96beb9: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_96bebd: /* 96bebd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96bec1: mov edi, dword ptr [esi + eax + 4] */
  edi = R32((uint32_t)(esi + eax + 0x4u));
/* 96bec5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96bec8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 96bec9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 96becd: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 96bed1: jne 0x96be67 */
  if (!zf) goto L_96be67;
L_96bed3: /* 96bed3: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 96bed7: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 96bedb: jmp 0x96bee1 */
  goto L_96bee1;
L_96bedd: /* 96bedd: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_96bee1: /* 96bee1: cmp dword ptr [esp + 0x30], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96bee6: jne 0x96bf2d */
  if (!zf) goto L_96bf2d;
L_96bee8: /* 96bee8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96beec: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 96bef0: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 96bef4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bef5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bef6: push 0xb00070 */
  { uint32_t v = 0xb00070u; esp -= 4; W32(esp, v); }
/* 96befb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96befc: call 0x953470 */
  esp -= 4; W32(esp, 0x96bf01u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bf01: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96bf07: lea edi, [ecx - 1] */
  edi = (uint32_t)(ecx + 0xffffffffu);
/* 96bf0a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bf0d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bf0f: je 0x96bf26 */
  if (zf) goto L_96bf26;
L_96bf11: /* 96bf11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96bf13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96bf15: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96bf1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bf1b: call 0x953470 */
  esp -= 4; W32(esp, 0x96bf20u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bf20: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bf23: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 96bf24: jne 0x96bf11 */
  if (!zf) goto L_96bf11;
L_96bf26: /* 96bf26: push 0xb00054 */
  { uint32_t v = 0xb00054u; esp -= 4; W32(esp, v); }
/* 96bf2b: jmp 0x96bf80 */
  goto L_96bf80;
L_96bf2d: /* 96bf2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bf2e: call 0x94f340 */
  esp -= 4; W32(esp, 0x96bf33u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96bf33: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 96bf37: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 96bf3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bf3c: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96bf41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96bf42: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96bf43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bf44: push 0xb00048 */
  { uint32_t v = 0xb00048u; esp -= 4; W32(esp, v); }
/* 96bf49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bf4a: call 0x953470 */
  esp -= 4; W32(esp, 0x96bf4fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bf4f: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96bf55: lea edi, [edx - 1] */
  edi = (uint32_t)(edx + 0xffffffffu);
/* 96bf58: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bf5b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bf5d: je 0x96bf7b */
  if (zf) goto L_96bf7b;
L_96bf5f: /* 96bf5f: nop  */
L_96bf60: /* 96bf60: push 0xc02433b6 */
  { uint32_t v = 0xc02433b6u; esp -= 4; W32(esp, v); }
/* 96bf65: push 0x45a1cac1 */
  { uint32_t v = 0x45a1cac1u; esp -= 4; W32(esp, v); }
/* 96bf6a: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96bf6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bf70: call 0x953470 */
  esp -= 4; W32(esp, 0x96bf75u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bf75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bf78: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 96bf79: jne 0x96bf60 */
  if (!zf) goto L_96bf60;
L_96bf7b: /* 96bf7b: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
L_96bf80: /* 96bf80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bf81: call 0x953470 */
  esp -= 4; W32(esp, 0x96bf86u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bf86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96bf89: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bf8b: je 0x96bfd4 */
  if (zf) goto L_96bfd4;
L_96bf8d: /* 96bf8d: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
L_96bf91: /* 96bf91: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 96bf94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bf96: je 0x96bfd4 */
  if (zf) goto L_96bfd4;
L_96bf98: /* 96bf98: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 96bf9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bf9d: je 0x96bfcd */
  if (zf) goto L_96bfcd;
L_96bf9f: /* 96bf9f: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 96bfa3: jae 0x96bfcd */
  if (!cf) goto L_96bfcd;
L_96bfa5: /* 96bfa5: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96bfa8: jne 0x96bfc0 */
  if (!zf) goto L_96bfc0;
L_96bfaa: /* 96bfaa: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 96bfad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96bfae: mov eax, ebp */
  eax = ebp;
/* 96bfb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96bfb1: push 0xb0003c */
  { uint32_t v = 0xb0003cu; esp -= 4; W32(esp, v); }
/* 96bfb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bfb7: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 96bfb8: call 0x953470 */
  esp -= 4; W32(esp, 0x96bfbdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96bfbd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96bfc0: /* 96bfc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96bfc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96bfc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96bfc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96bfc5: call 0x968100 */
  esp -= 4; W32(esp, 0x96bfcau); SPILL(); f_968100(); if (g_unwind) return; RELOAD();
/* 96bfca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96bfcd: /* 96bfcd: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 96bfd0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bfd2: jne 0x96bf91 */
  if (!zf) goto L_96bf91;
L_96bfd4: /* 96bfd4: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 96bfd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bfda: je 0x96c02c */
  if (zf) goto L_96c02c;
L_96bfdc: /* 96bfdc: mov edx, eax */
  edx = eax;
/* 96bfde: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 96bfe1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bfe3: lea edi, [edx + 4] */
  edi = (uint32_t)(edx + 0x4u);
/* 96bfe6: je 0x96c02c */
  if (zf) goto L_96c02c;
L_96bfe8: /* 96bfe8: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 96bfeb: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96bfee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96bff0: je 0x96c026 */
  if (zf) goto L_96c026;
L_96bff2: /* 96bff2: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 96bff6: jae 0x96c026 */
  if (!cf) goto L_96c026;
L_96bff8: /* 96bff8: cmp dword ptr [esp + 0x30], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96bffd: jne 0x96c015 */
  if (!zf) goto L_96c015;
L_96bfff: /* 96bfff: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 96c002: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c003: mov eax, ebp */
  eax = ebp;
/* 96c005: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c006: push 0xb0003c */
  { uint32_t v = 0xb0003cu; esp -= 4; W32(esp, v); }
/* 96c00b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c00c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 96c00d: call 0x953470 */
  esp -= 4; W32(esp, 0x96c012u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c012: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c015: /* 96c015: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 96c019: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c01a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c01c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c01d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c01e: call 0x968100 */
  esp -= 4; W32(esp, 0x96c023u); SPILL(); f_968100(); if (g_unwind) return; RELOAD();
/* 96c023: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c026: /* 96c026: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 96c028: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c02a: jne 0x96bfe8 */
  if (!zf) goto L_96bfe8;
L_96c02c: /* 96c02c: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 96c030: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c032: je 0x96c1db */
  if (zf) goto L_96c1db;
L_96c038: /* 96c038: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 96c03b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c03c: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 96c044: call 0x94f340 */
  esp -= 4; W32(esp, 0x96c049u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96c049: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c04c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96c04e: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 96c052: jle 0x96c1db */
  if ((zf || sf != of)) goto L_96c1db;
L_96c058: /* 96c058: xor esi, esi */
  esi = 0;
/* 96c05a: xor ebp, ebp */
  ebp = 0;
/* 96c05c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c05e: je 0x96c0ce */
  if (zf) goto L_96c0ce;
L_96c060: /* 96c060: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96c065: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c068: jne 0x96c075 */
  if (!zf) goto L_96c075;
L_96c06a: /* 96c06a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c06b: call 0x966bb0 */
  esp -= 4; W32(esp, 0x96c070u); SPILL(); f_966bb0(); if (g_unwind) return; RELOAD();
/* 96c070: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c073: jmp 0x96c09e */
  goto L_96c09e;
L_96c075: /* 96c075: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c078: jl 0x96c09e */
  if ((sf != of)) goto L_96c09e;
L_96c07a: /* 96c07a: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 96c07d: push 0x965fb0 */
  { uint32_t v = 0x965fb0u; esp -= 4; W32(esp, v); }
/* 96c082: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 96c084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c085: call 0x94f340 */
  esp -= 4; W32(esp, 0x96c08au); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96c08a: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 96c08d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c091: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96c094: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c095: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x96c09bu); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 96c09b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c09e: /* 96c09e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 96c0a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c0a3: je 0x96c0ce */
  if (zf) goto L_96c0ce;
L_96c0a5: /* 96c0a5: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 96c0a8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96c0aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c0ac: je 0x96c0ce */
  if (zf) goto L_96c0ce;
L_96c0ae: /* 96c0ae: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_96c0b2: /* 96c0b2: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 96c0b5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96c0b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c0ba: jne 0x96c0c3 */
  if (!zf) goto L_96c0c3;
L_96c0bc: /* 96c0bc: mov ebp, 1 */
  ebp = 0x1u;
/* 96c0c1: jmp 0x96c0c8 */
  goto L_96c0c8;
L_96c0c3: /* 96c0c3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 96c0c5: jae 0x96c0c8 */
  if (!cf) goto L_96c0c8;
L_96c0c7: /* 96c0c7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_96c0c8: /* 96c0c8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96c0ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c0cc: jne 0x96c0b2 */
  if (!zf) goto L_96c0b2;
L_96c0ce: /* 96c0ce: cmp dword ptr [esp + 0x30], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c0d3: jne 0x96c15a */
  if (!zf) goto L_96c15a;
L_96c0d9: /* 96c0d9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c0db: je 0x96c145 */
  if (zf) goto L_96c145;
L_96c0dd: /* 96c0dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c0de: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 96c0e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c0e4: call 0x953470 */
  esp -= 4; W32(esp, 0x96c0e9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c0e9: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 96c0ec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c0ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c0f1: je 0x96c123 */
  if (zf) goto L_96c123;
L_96c0f3: /* 96c0f3: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96c0f6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96c0f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c0fa: je 0x96c123 */
  if (zf) goto L_96c123;
L_96c0fc: /* 96c0fc: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
L_96c100: /* 96c100: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 96c103: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96c106: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c108: je 0x96c11d */
  if (zf) goto L_96c11d;
L_96c10a: /* 96c10a: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 96c10c: jae 0x96c11d */
  if (!cf) goto L_96c11d;
L_96c10e: /* 96c10e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c10f: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 96c114: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c115: call 0x953470 */
  esp -= 4; W32(esp, 0x96c11au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c11a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c11d: /* 96c11d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96c11f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c121: jne 0x96c100 */
  if (!zf) goto L_96c100;
L_96c123: /* 96c123: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 96c126: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 96c12a: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 96c130: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c132: push 0xb0002c */
  { uint32_t v = 0xb0002cu; esp -= 4; W32(esp, v); }
/* 96c137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c138: call 0x953470 */
  esp -= 4; W32(esp, 0x96c13du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c13d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c140: jmp 0x96c1be */
  goto L_96c1be;
L_96c145: /* 96c145: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 96c149: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c14a: push 0xb0000c */
  { uint32_t v = 0xb0000cu; esp -= 4; W32(esp, v); }
/* 96c14f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c150: call 0x953470 */
  esp -= 4; W32(esp, 0x96c155u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c155: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c158: jmp 0x96c1be */
  goto L_96c1be;
L_96c15a: /* 96c15a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c15c: je 0x96c15f */
  if (zf) goto L_96c15f;
L_96c15e: /* 96c15e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_96c15f: /* 96c15f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c160: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 96c165: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c166: call 0x953470 */
  esp -= 4; W32(esp, 0x96c16bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c16b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c16e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c170: je 0x96c1b0 */
  if (zf) goto L_96c1b0;
L_96c172: /* 96c172: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 96c175: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c177: je 0x96c1b0 */
  if (zf) goto L_96c1b0;
L_96c179: /* 96c179: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96c17c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96c17e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c180: je 0x96c1b0 */
  if (zf) goto L_96c1b0;
L_96c182: /* 96c182: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 96c185: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96c188: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c18a: jne 0x96c195 */
  if (!zf) goto L_96c195;
L_96c18c: /* 96c18c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c18e: je 0x96c1aa */
  if (zf) goto L_96c1aa;
L_96c190: /* 96c190: xor ebp, ebp */
  ebp = 0;
/* 96c192: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96c193: jmp 0x96c19c */
  goto L_96c19c;
L_96c195: /* 96c195: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 96c199: jae 0x96c1aa */
  if (!cf) goto L_96c1aa;
L_96c19b: /* 96c19b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_96c19c: /* 96c19c: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 96c1a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c1a2: call 0x953470 */
  esp -= 4; W32(esp, 0x96c1a7u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c1a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c1aa: /* 96c1aa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96c1ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c1ae: jne 0x96c182 */
  if (!zf) goto L_96c182;
L_96c1b0: /* 96c1b0: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96c1b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c1b6: call 0x953470 */
  esp -= 4; W32(esp, 0x96c1bbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c1bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c1be: /* 96c1be: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 96c1c2: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 96c1c6: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 96c1ca: mov edi, dword ptr [edx + eax*4 + 8] */
  edi = R32((uint32_t)(edx + eax*4 + 0x8u));
/* 96c1ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96c1cf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c1d1: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 96c1d5: jl 0x96c058 */
  if ((sf != of)) goto L_96c058;
L_96c1db: /* 96c1db: cmp dword ptr [esp + 0x30], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c1e0: jne 0x96c1f0 */
  if (!zf) goto L_96c1f0;
L_96c1e2: /* 96c1e2: push 0xafe23c */
  { uint32_t v = 0xafe23cu; esp -= 4; W32(esp, v); }
/* 96c1e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c1e8: call 0x953470 */
  esp -= 4; W32(esp, 0x96c1edu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c1ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c1f0: /* 96c1f0: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 96c1f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c1f5: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96c1fau); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96c1fa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c1fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96c1fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96c1ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96c200: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96c201: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c204: ret  */
  esp += 4; SPILL(); return;
}

void f_96c210(void) {
  LOAD_REGS();
L_96c210: /* 96c210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96c211: mov ebp, esp */
  ebp = esp;
/* 96c213: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96c216: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c217: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 96c21a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c21b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c21c: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 96c21f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c220: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 96c223: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 96c227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c228: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c229: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c22a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c22b: call 0x965940 */
  esp -= 4; W32(esp, 0x96c230u); SPILL(); f_965940(); if (g_unwind) return; RELOAD();
/* 96c230: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 96c233: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c234: mov ebx, eax */
  ebx = eax;
/* 96c236: call 0x95f210 */
  esp -= 4; W32(esp, 0x96c23bu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96c23b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c23e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c23f: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 96c242: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c243: call 0x95f210 */
  esp -= 4; W32(esp, 0x96c248u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96c248: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96c24e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 96c251: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c254: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c255: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96c258: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c259: push 0xb000b4 */
  { uint32_t v = 0xb000b4u; esp -= 4; W32(esp, v); }
/* 96c25e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c25f: call 0x953470 */
  esp -= 4; W32(esp, 0x96c264u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c264: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96c26a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c26d: xor esi, esi */
  esi = 0;
/* 96c26f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 96c270: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96c272: jle 0x96c296 */
  if ((zf || sf != of)) goto L_96c296;
L_96c274: /* 96c274: fld dword ptr [ebx + esi*4] */
  { double v = F32((uint32_t)(ebx + esi*4)); FPUSH(v); }
/* 96c277: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96c27a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96c27d: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96c282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c283: call 0x953470 */
  esp -= 4; W32(esp, 0x96c288u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c288: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96c28d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c290: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96c291: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96c292: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c294: jl 0x96c274 */
  if ((sf != of)) goto L_96c274;
L_96c296: /* 96c296: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 96c29a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96c29d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96c2a0: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96c2a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c2a6: call 0x953470 */
  esp -= 4; W32(esp, 0x96c2abu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c2ab: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96c2b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c2b1: call 0x953470 */
  esp -= 4; W32(esp, 0x96c2b6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c2b6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c2b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96c2ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96c2bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96c2bc: mov esp, ebp */
  esp = ebp;
/* 96c2be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96c2bf: ret  */
  esp += 4; SPILL(); return;
}

void f_96c2c0(void) {
  LOAD_REGS();
L_96c2c0: /* 96c2c0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 96c2c4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 96c2c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c2c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c2c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c2ca: call 0x95f210 */
  esp -= 4; W32(esp, 0x96c2cfu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96c2cf: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96c2d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c2d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c2d7: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 96c2da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c2db: call 0x95f210 */
  esp -= 4; W32(esp, 0x96c2e0u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96c2e0: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 96c2e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c2e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c2e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c2e9: call 0x94f340 */
  esp -= 4; W32(esp, 0x96c2eeu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96c2ee: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 96c2f2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c2f5: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96c2f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c2f9: push 0xb000c0 */
  { uint32_t v = 0xb000c0u; esp -= 4; W32(esp, v); }
/* 96c2fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c2ff: call 0x953470 */
  esp -= 4; W32(esp, 0x96c304u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c304: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c307: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c309: je 0x96c330 */
  if (zf) goto L_96c330;
L_96c30b: /* 96c30b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96c30e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96c311: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c313: je 0x96c330 */
  if (zf) goto L_96c330;
L_96c315: /* 96c315: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 96c318: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c319: push 0xaf6234 */
  { uint32_t v = 0xaf6234u; esp -= 4; W32(esp, v); }
/* 96c31e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c31f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96c322: call 0x953470 */
  esp -= 4; W32(esp, 0x96c327u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c327: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96c329: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c32c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c32e: jne 0x96c315 */
  if (!zf) goto L_96c315;
L_96c330: /* 96c330: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96c335: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c336: call 0x953470 */
  esp -= 4; W32(esp, 0x96c33bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c33b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c33e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96c33f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96c340: ret  */
  esp += 4; SPILL(); return;
}

void f_96c350(void) {
  LOAD_REGS();
L_96c350: /* 96c350: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 96c354: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c355: mov edi, dword ptr [0xcf85cc] */
  edi = R32((uint32_t)(0xcf85ccu));
/* 96c35b: xor ecx, ecx */
  ecx = 0;
/* 96c35d: xor eax, eax */
  eax = 0;
/* 96c35f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96c361: jle 0x96c38f */
  if ((zf || sf != of)) goto L_96c38f;
L_96c363: /* 96c363: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c364: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_96c368: /* 96c368: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c36b: mov edi, dword ptr [0xcf8418] */
  edi = R32((uint32_t)(0xcf8418u));
/* 96c371: jne 0x96c3a2 */
  if (!zf) goto L_96c3a2;
L_96c373: /* 96c373: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c375: je 0x96c37e */
  if (zf) goto L_96c37e;
L_96c377: /* 96c377: mov edi, dword ptr [esi + ecx*4] */
  edi = R32((uint32_t)(esi + ecx*4));
/* 96c37a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
L_96c37d: /* 96c37d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_96c37e: /* 96c37e: mov edi, dword ptr [0xcf85cc] */
  edi = R32((uint32_t)(0xcf85ccu));
/* 96c384: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96c385: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c387: jl 0x96c368 */
  if ((sf != of)) goto L_96c368;
L_96c389: /* 96c389: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c38c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96c38d: jge 0x96c3a0 */
  if ((sf == of)) goto L_96c3a0;
L_96c38f: /* 96c38f: mov ecx, 3 */
  ecx = 0x3u;
/* 96c394: lea edi, [edx + eax*4] */
  edi = (uint32_t)(edx + eax*4);
/* 96c397: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96c399: xor eax, eax */
  eax = 0;
/* 96c39b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 96c39d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_96c3a0: /* 96c3a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96c3a1: ret  */
  esp += 4; SPILL(); return;
L_96c3a2: /* 96c3a2: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c3a4: jne 0x96c377 */
  if (!zf) goto L_96c377;
L_96c3a6: /* 96c3a6: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
/* 96c3ad: jmp 0x96c37d */
  goto L_96c37d;
}

void f_96c3b0(void) {
  LOAD_REGS();
L_96c3b0: /* 96c3b0: sub esp, 0xd8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96c3b6: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 96c3bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c3bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96c3bd: xor ebx, ebx */
  ebx = 0;
/* 96c3bf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c3c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c3c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c3c3: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 96c3cb: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 96c3cf: jne 0x96c3ed */
  if (!zf) goto L_96c3ed;
L_96c3d1: /* 96c3d1: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96c3d6: push 0xb00228 */
  { uint32_t v = 0xb00228u; esp -= 4; W32(esp, v); }
/* 96c3db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c3dc: call 0x953470 */
  esp -= 4; W32(esp, 0x96c3e1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c3e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c3e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c3e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96c3e5: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96c3eau); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96c3ea: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c3ed: /* 96c3ed: cmp dword ptr [0xcf85bc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85bcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c3f3: je 0x96c409 */
  if (zf) goto L_96c409;
L_96c3f5: /* 96c3f5: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96c3fb: push 0xb001b0 */
  { uint32_t v = 0xb001b0u; esp -= 4; W32(esp, v); }
/* 96c400: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c401: call 0x953470 */
  esp -= 4; W32(esp, 0x96c406u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c406: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c409: /* 96c409: mov edx, dword ptr [esp + 0xec] */
  edx = R32((uint32_t)(esp + 0xecu));
/* 96c410: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 96c417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c418: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x96c41eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96c41e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c420: mov dword ptr [0xcf85c0], eax */
  W32((uint32_t)(0xcf85c0u), eax);
/* 96c425: jne 0x96c449 */
  if (!zf) goto L_96c449;
L_96c427: /* 96c427: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96c42d: push 0xb00174 */
  { uint32_t v = 0xb00174u; esp -= 4; W32(esp, v); }
/* 96c432: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c433: call 0x953470 */
  esp -= 4; W32(esp, 0x96c438u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c438: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c439: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c43a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 96c43c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96c441u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96c441: mov eax, dword ptr [0xcf85c0] */
  eax = R32((uint32_t)(0xcf85c0u));
/* 96c446: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c449: /* 96c449: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 96c44f: mov ebp, eax */
  ebp = eax;
/* 96c451: jmp 0x96c455 */
  goto L_96c455;
L_96c453: /* 96c453: fstp st(0) */
  STI(0) = ST0; FPOP();
L_96c455: /* 96c455: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96c459: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c45b: je 0x96c466 */
  if (zf) goto L_96c466;
L_96c45d: /* 96c45d: mov esi, dword ptr [esp + 0xf0] */
  esi = R32((uint32_t)(esp + 0xf0u));
/* 96c464: jmp 0x96c482 */
  goto L_96c482;
L_96c466: /* 96c466: mov edx, dword ptr [0xcf8b30] */
  edx = R32((uint32_t)(0xcf8b30u));
/* 96c46c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c46d: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 96c471: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 96c476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c477: call dword ptr [0xcfb0d8] */
  esp -= 4; W32(esp, 0x96c47du); SPILL(); f_42c5d6(); if (g_unwind) return; /* MSVCR70!fgets */ RELOAD();
/* 96c47d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c480: mov esi, eax */
  esi = eax;
L_96c482: /* 96c482: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c484: je 0x96c588 */
  if (zf) goto L_96c588;
L_96c48a: /* 96c48a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96c48e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c490: je 0x96c49c */
  if (zf) goto L_96c49c;
L_96c492: /* 96c492: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 96c49a: jmp 0x96c4a0 */
  goto L_96c4a0;
L_96c49c: /* 96c49c: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
L_96c4a0: /* 96c4a0: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96c4a3: je 0x96c455 */
  if (zf) goto L_96c455;
L_96c4a5: /* 96c4a5: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 96c4ab: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c4ae: jle 0x96c4bd */
  if ((zf || sf != of)) goto L_96c4bd;
L_96c4b0: /* 96c4b0: movsx edx, byte ptr [esi] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 96c4b3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 96c4b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c4b6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x96c4b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96c4b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c4bb: jmp 0x96c4cf */
  goto L_96c4cf;
L_96c4bd: /* 96c4bd: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 96c4c0: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 96c4c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 96c4c8: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 96c4cc: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_96c4cf: /* 96c4cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c4d1: je 0x96c4d6 */
  if (zf) goto L_96c4d6;
L_96c4d3: /* 96c4d3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96c4d4: jmp 0x96c4a5 */
  goto L_96c4a5;
L_96c4d6: /* 96c4d6: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96c4da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c4db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c4dc: call 0x953410 */
  esp -= 4; W32(esp, 0x96c4e1u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 96c4e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96c4e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c4e8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c4ea: je 0x96c453 */
  if (zf) goto L_96c453;
L_96c4f0: /* 96c4f0: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 96c4f3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 96c4f6: mov esi, eax */
  esi = eax;
/* 96c4f8: mov eax, dword ptr [esp + 0xec] */
  eax = R32((uint32_t)(esp + 0xecu));
/* 96c4ff: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 96c500: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c502: je 0x96c510 */
  if (zf) goto L_96c510;
L_96c504: /* 96c504: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96c507: jne 0x96c4a5 */
  if (!zf) goto L_96c4a5;
L_96c509: /* 96c509: jmp 0x96c455 */
  goto L_96c455;
L_96c510: /* 96c510: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 96c516: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c519: jle 0x96c528 */
  if ((zf || sf != of)) goto L_96c528;
L_96c51b: /* 96c51b: movsx edx, byte ptr [esi] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 96c51e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 96c520: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c521: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x96c523u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96c523: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c526: jmp 0x96c53a */
  goto L_96c53a;
L_96c528: /* 96c528: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 96c52b: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 96c531: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 96c533: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 96c537: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_96c53a: /* 96c53a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c53c: je 0x96c541 */
  if (zf) goto L_96c541;
L_96c53e: /* 96c53e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96c53f: jmp 0x96c510 */
  goto L_96c510;
L_96c541: /* 96c541: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96c545: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c547: call 0x953410 */
  esp -= 4; W32(esp, 0x96c54cu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 96c54c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96c54e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96c552: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c555: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c557: je 0x96c579 */
  if (zf) goto L_96c579;
L_96c559: /* 96c559: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96c55f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c560: push 0xb00120 */
  { uint32_t v = 0xb00120u; esp -= 4; W32(esp, v); }
/* 96c565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c566: call 0x953470 */
  esp -= 4; W32(esp, 0x96c56bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c56b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c56d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c56f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96c571: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96c576u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96c576: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c579: /* 96c579: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96c57d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96c57e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96c57f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96c580: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96c581: add esp, 0xd8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c587: ret  */
  esp += 4; SPILL(); return;
L_96c588: /* 96c588: mov edx, dword ptr [esp + 0xec] */
  edx = R32((uint32_t)(esp + 0xecu));
/* 96c58f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96c594: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c595: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c596: push 0xb000d0 */
  { uint32_t v = 0xb000d0u; esp -= 4; W32(esp, v); }
/* 96c59b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c59c: call 0x953470 */
  esp -= 4; W32(esp, 0x96c5a1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c5a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c5a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c5a5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96c5a7: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96c5acu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96c5ac: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c5af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96c5b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96c5b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96c5b2: xor eax, eax */
  eax = 0;
/* 96c5b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96c5b5: add esp, 0xd8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c5bb: ret  */
  esp += 4; SPILL(); return;
}

void f_96c50e(void) {
  LOAD_REGS();
L_96c50e: /* 96c50e: mov edi, edi */
  edi = edi;
L_96c510: /* 96c510: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 96c516: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c519: jle 0x96c528 */
  if ((zf || sf != of)) goto L_96c528;
L_96c51b: /* 96c51b: movsx edx, byte ptr [esi] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 96c51e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 96c520: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c521: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x96c523u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96c523: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c526: jmp 0x96c53a */
  goto L_96c53a;
L_96c528: /* 96c528: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 96c52b: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 96c531: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 96c533: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 96c537: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_96c53a: /* 96c53a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c53c: je 0x96c541 */
  if (zf) goto L_96c541;
L_96c53e: /* 96c53e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96c53f: jmp 0x96c510 */
  goto L_96c510;
L_96c541: /* 96c541: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96c545: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c547: call 0x953410 */
  esp -= 4; W32(esp, 0x96c54cu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 96c54c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96c54e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96c552: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c555: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c557: je 0x96c579 */
  if (zf) goto L_96c579;
L_96c559: /* 96c559: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96c55f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c560: push 0xb00120 */
  { uint32_t v = 0xb00120u; esp -= 4; W32(esp, v); }
/* 96c565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c566: call 0x953470 */
  esp -= 4; W32(esp, 0x96c56bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c56b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c56d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c56f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96c571: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96c576u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96c576: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c579: /* 96c579: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96c57d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96c57e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96c57f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96c580: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96c581: add esp, 0xd8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c587: ret  */
  esp += 4; SPILL(); return;
}
