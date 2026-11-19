#include "recomp.h"
#include "rec_mod.h"

void f_46cb23(void) {
  LOAD_REGS();
L_46cb23: /* 46cb23: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cb26: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46cb28: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46cb2b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46cb2d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46cb30: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46cb32: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46cb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46cb36: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46cb3bu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46cb3b: mov eax, 0x46cb41 */
  eax = 0x46cb41u;
/* 46cb40: ret  */
  esp += 4; SPILL(); return;
}

void f_46cb41(void) {
  LOAD_REGS();
L_46cb41: /* 46cb41: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46cb44: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cb46: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46cb49: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46cb4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46cb4f: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46cb52: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46cb54: call 0x461453 */
  esp -= 4; W32(esp, 0x46cb59u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46cb41u: guest_unwind_done(); RELOAD(); goto L_46cb41; } return; } RELOAD();
/* 46cb59: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46cb5d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46cb60: call 0x462246 */
  esp -= 4; W32(esp, 0x46cb65u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46cb41u: guest_unwind_done(); RELOAD(); goto L_46cb41; } return; } RELOAD();
/* 46cb65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46cb68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46cb69: mov eax, esi */
  eax = esi;
/* 46cb6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46cb6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46cb73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46cb74: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cb75: ret  */
  esp += 4; SPILL(); return;
}

void f_46cb76(void) {
  LOAD_REGS();
L_46cb76: /* 46cb76: mov eax, 0x48c2ef */
  eax = 0x48c2efu;
/* 46cb7b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46cb80u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46cb80: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46cb83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46cb84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46cb85: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46cb88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46cb89: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46cb8c: xor ebx, ebx */
  ebx = 0;
/* 46cb8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46cb8f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46cb92: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 46cb95: call 0x462178 */
  esp -= 4; W32(esp, 0x46cb9au); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46cb9a: cmp byte ptr [ebp - 0x18], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46cb9d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46cba0: je 0x46cc74 */
  if (zf) goto L_46cc74;
L_46cba6: /* 46cba6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cba8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cbab: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46cbad: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 46cbb0: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46cbb3: jg 0x46cbb9 */
  if ((!zf && sf == of)) goto L_46cbb9;
L_46cbb5: /* 46cbb5: xor edi, edi */
  edi = 0;
/* 46cbb7: jmp 0x46cbbc */
  goto L_46cbbc;
L_46cbb9: /* 46cbb9: lea edi, [ecx - 1] */
  edi = (uint32_t)(ecx + 0xffffffffu);
L_46cbbc: /* 46cbbc: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 46cbbf: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 46cbc4: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46cbc7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46cbcb: je 0x46cc02 */
  if (zf) goto L_46cc02;
L_46cbcd: /* 46cbcd: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46cbd0: jne 0x46cc74 */
  if (!zf) goto L_46cc74;
L_46cbd6: /* 46cbd6: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46cbd8: jle 0x46cc02 */
  if ((zf || sf != of)) goto L_46cc02;
L_46cbda: /* 46cbda: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cbdc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cbdf: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46cbe1: xor edx, edx */
  edx = 0;
/* 46cbe3: mov dx, word ptr [eax + 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 46cbe7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46cbea: mov ecx, eax */
  ecx = eax;
/* 46cbec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46cbed: call 0x4619f2 */
  esp -= 4; W32(esp, 0x46cbf2u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 46cbf2: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46cbf6: jne 0x46cbff */
  if (!zf) goto L_46cbff;
L_46cbf8: /* 46cbf8: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
L_46cbff: /* 46cbff: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46cc00: jmp 0x46cbcd */
  goto L_46cbcd;
L_46cc02: /* 46cc02: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cc04: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cc07: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46cc0a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46cc0e: call 0x4619f2 */
  esp -= 4; W32(esp, 0x46cc13u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 46cc13: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46cc17: jne 0x46cc20 */
  if (!zf) goto L_46cc20;
L_46cc19: /* 46cc19: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
L_46cc20: /* 46cc20: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46cc23: jne 0x46cc74 */
  if (!zf) goto L_46cc74;
L_46cc25: /* 46cc25: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46cc27: jle 0x46cc74 */
  if ((zf || sf != of)) goto L_46cc74;
L_46cc29: /* 46cc29: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cc2b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cc2e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46cc30: xor edx, edx */
  edx = 0;
/* 46cc32: mov dx, word ptr [eax + 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 46cc36: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46cc39: mov ecx, eax */
  ecx = eax;
/* 46cc3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46cc3c: call 0x4619f2 */
  esp -= 4; W32(esp, 0x46cc41u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 46cc41: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46cc45: jne 0x46cc4e */
  if (!zf) goto L_46cc4e;
L_46cc47: /* 46cc47: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
L_46cc4e: /* 46cc4e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46cc4f: jmp 0x46cc20 */
  goto L_46cc20;
L_46cc74: /* 46cc74: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cc76: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cc79: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46cc7b: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 46cc7e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cc80: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46cc83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46cc84: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46cc87: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46cc89: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46cc8c: call 0x461453 */
  esp -= 4; W32(esp, 0x46cc91u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46cc91: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46cc95: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46cc98: call 0x462246 */
  esp -= 4; W32(esp, 0x46cc9du); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46cc9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46cca0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46cca1: mov eax, esi */
  eax = esi;
/* 46cca3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46cca4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46ccab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ccac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ccad: ret  */
  esp += 4; SPILL(); return;
}

void f_46cc51(void) {
  LOAD_REGS();
L_46cc51: /* 46cc51: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cc54: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46cc56: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46cc59: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46cc5b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46cc5e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46cc60: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46cc63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46cc64: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46cc69u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46cc69: mov eax, 0x46cc6f */
  eax = 0x46cc6fu;
/* 46cc6e: ret  */
  esp += 4; SPILL(); return;
}

void f_46cc6f(void) {
  LOAD_REGS();
L_46cc6f: /* 46cc6f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46cc72: xor ebx, ebx */
  ebx = 0;
/* 46cc74: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cc76: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cc79: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46cc7b: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 46cc7e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cc80: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46cc83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46cc84: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46cc87: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46cc89: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46cc8c: call 0x461453 */
  esp -= 4; W32(esp, 0x46cc91u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46cc6fu: guest_unwind_done(); RELOAD(); goto L_46cc6f; } return; } RELOAD();
/* 46cc91: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46cc95: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46cc98: call 0x462246 */
  esp -= 4; W32(esp, 0x46cc9du); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46cc6fu: guest_unwind_done(); RELOAD(); goto L_46cc6f; } return; } RELOAD();
/* 46cc9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46cca0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46cca1: mov eax, esi */
  eax = esi;
/* 46cca3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46cca4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46ccab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ccac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ccad: ret  */
  esp += 4; SPILL(); return;
}

void f_46ccae(void) {
  LOAD_REGS();
L_46ccae: /* 46ccae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ccaf: mov ebp, esp */
  ebp = esp;
/* 46ccb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ccb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ccb3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46ccb6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46ccb8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ccbb: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 46ccbe: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46ccc1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46ccc4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46ccc7: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 46ccc9: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46cccc: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46cccf: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 46ccd2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46ccd5: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 46ccd8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46ccda: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46ccdd: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cce0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cce3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cce4: ret  */
  esp += 4; SPILL(); return;
}

void f_46cce5(void) {
  LOAD_REGS();
L_46cce5: /* 46cce5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46cce6: mov ebp, esp */
  ebp = esp;
/* 46cce8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cce9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ccea: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46cced: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46ccef: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46ccf2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46ccf4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 46ccf6: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46ccf9: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46ccfc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46ccfe: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 46cd01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cd04: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46cd07: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46cd09: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cd0c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cd0f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cd10: ret  */
  esp += 4; SPILL(); return;
}

void f_46cd11(void) {
  LOAD_REGS();
L_46cd11: /* 46cd11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46cd12: mov ebp, esp */
  ebp = esp;
/* 46cd14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cd15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cd16: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46cd19: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46cd1b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cd1e: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 46cd21: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46cd24: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46cd27: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46cd2a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 46cd2c: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46cd2f: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46cd32: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 46cd35: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cd38: fsubr dword ptr [ebp - 4] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffffcu))) - ST0;
/* 46cd3b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46cd3d: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46cd40: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cd43: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cd46: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cd47: ret  */
  esp += 4; SPILL(); return;
}

void f_46cd48(void) {
  LOAD_REGS();
L_46cd48: /* 46cd48: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46cd49: mov ebp, esp */
  ebp = esp;
/* 46cd4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cd4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cd4d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46cd50: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46cd52: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46cd55: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46cd57: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 46cd59: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46cd5c: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46cd5f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46cd61: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 46cd64: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cd67: fchs  */
  ST0 = -ST0;
/* 46cd69: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46cd6c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46cd6e: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cd71: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cd74: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cd75: ret  */
  esp += 4; SPILL(); return;
}

void f_46cd76(void) {
  LOAD_REGS();
L_46cd76: /* 46cd76: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46cd77: mov ebp, esp */
  ebp = esp;
/* 46cd79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cd7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cd7b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46cd7e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46cd80: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cd83: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46cd86: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 46cd89: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 46cd8c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46cd8f: call 0x469829 */
  esp -= 4; W32(esp, 0x46cd94u); SPILL(); f_469829(); if (g_unwind) return; RELOAD();
/* 46cd94: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46cd97: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cd9a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46cd9c: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cd9f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cda2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cda3: ret  */
  esp += 4; SPILL(); return;
}

void f_46cda4(void) {
  LOAD_REGS();
L_46cda4: /* 46cda4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46cda5: mov ebp, esp */
  ebp = esp;
/* 46cda7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cda8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cda9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46cdac: fldz  */
  FPUSH(0.0);
/* 46cdae: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46cdb0: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46cdb3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46cdb6: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 46cdb9: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 46cdbc: call 0x469829 */
  esp -= 4; W32(esp, 0x46cdc1u); SPILL(); f_469829(); if (g_unwind) return; RELOAD();
/* 46cdc1: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46cdc4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cdc7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46cdc9: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cdcc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cdcf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cdd0: ret  */
  esp += 4; SPILL(); return;
}

void f_46cdd1(void) {
  LOAD_REGS();
L_46cdd1: /* 46cdd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46cdd2: mov ebp, esp */
  ebp = esp;
/* 46cdd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cdd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cdd6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46cdd9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46cddb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cdde: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46cde1: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 46cde4: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 46cde7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46cdea: call 0x46985a */
  esp -= 4; W32(esp, 0x46cdefu); SPILL(); f_46985a(); if (g_unwind) return; RELOAD();
/* 46cdef: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46cdf2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cdf5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46cdf7: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cdfa: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cdfd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cdfe: ret  */
  esp += 4; SPILL(); return;
}

void f_46cdff(void) {
  LOAD_REGS();
L_46cdff: /* 46cdff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ce00: mov ebp, esp */
  ebp = esp;
/* 46ce02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ce03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ce04: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46ce07: fldz  */
  FPUSH(0.0);
/* 46ce09: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46ce0b: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46ce0e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ce11: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 46ce14: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 46ce17: call 0x46985a */
  esp -= 4; W32(esp, 0x46ce1cu); SPILL(); f_46985a(); if (g_unwind) return; RELOAD();
/* 46ce1c: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46ce1f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46ce22: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46ce24: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46ce27: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46ce2a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ce2b: ret  */
  esp += 4; SPILL(); return;
}

void f_46ce2c(void) {
  LOAD_REGS();
L_46ce2c: /* 46ce2c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46ce30: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 46ce33: fchs  */
  ST0 = -ST0;
/* 46ce35: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46ce37: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46ce3b: fchs  */
  ST0 = -ST0;
/* 46ce3d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46ce3f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46ce42: ret  */
  esp += 4; SPILL(); return;
}

void f_46ce43(void) {
  LOAD_REGS();
L_46ce43: /* 46ce43: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46ce47: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 46ce4a: fchs  */
  ST0 = -ST0;
/* 46ce4c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46ce4e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46ce52: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46ce54: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46ce57: ret  */
  esp += 4; SPILL(); return;
}

void f_46ce58(void) {
  LOAD_REGS();
L_46ce58: /* 46ce58: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ce59: mov ebp, esp */
  ebp = esp;
/* 46ce5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ce5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ce5d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46ce60: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46ce62: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46ce65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ce66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ce67: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46ce6a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46ce6d: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46ce72u); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46ce72: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46ce76: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46ce79: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46ce7c: call 0x467fdf */
  esp -= 4; W32(esp, 0x46ce81u); SPILL(); f_467fdf(); if (g_unwind) return; RELOAD();
/* 46ce81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46ce84: fchs  */
  ST0 = -ST0;
/* 46ce86: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46ce89: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46ce8c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46ce8e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46ce91: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46ce96u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46ce96: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46ce9a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46ce9d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46cea0: call 0x467f83 */
  esp -= 4; W32(esp, 0x46cea5u); SPILL(); f_467f83(); if (g_unwind) return; RELOAD();
/* 46cea5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cea8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cea9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46ceab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ceac: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46ceaf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46ceb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ceb3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ceb4: ret  */
  esp += 4; SPILL(); return;
}

void f_46ceb5(void) {
  LOAD_REGS();
L_46ceb5: /* 46ceb5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ceb6: mov ebp, esp */
  ebp = esp;
/* 46ceb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ceb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ceba: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46cebd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46cec0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cec2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cec3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cec4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46cec7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46ceca: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46cecfu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46cecf: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46ced3: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46ced6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46ced9: call 0x467fdf */
  esp -= 4; W32(esp, 0x46cedeu); SPILL(); f_467fdf(); if (g_unwind) return; RELOAD();
/* 46cede: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cee0: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46cee3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46cee6: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46cee9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46ceec: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46cef1u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46cef1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46cef5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46cef8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46cefb: call 0x467f83 */
  esp -= 4; W32(esp, 0x46cf00u); SPILL(); f_467f83(); if (g_unwind) return; RELOAD();
/* 46cf00: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cf03: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cf04: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46cf06: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cf07: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cf0a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cf0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46cf0e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cf0f: ret  */
  esp += 4; SPILL(); return;
}

void f_46cf10(void) {
  LOAD_REGS();
L_46cf10: /* 46cf10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46cf11: mov ebp, esp */
  ebp = esp;
/* 46cf13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cf14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46cf15: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46cf18: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cf1a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46cf1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cf1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cf1f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46cf22: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46cf25: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46cf28: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46cf2du); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46cf2d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cf2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cf2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46cf31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cf32: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46cf35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 46cf38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46cf39: call 0x48aef4 */
  esp -= 4; W32(esp, 0x46cf3eu); SPILL(); f_48aef4(); if (g_unwind) return; RELOAD();
/* 46cf3e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46cf41: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46cf43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46cf46: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46cf49: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46cf4b: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46cf50u); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46cf50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cf51: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cf52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46cf54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cf55: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46cf58: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46cf5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46cf5c: call 0x48aef4 */
  esp -= 4; W32(esp, 0x46cf61u); SPILL(); f_48aef4(); if (g_unwind) return; RELOAD();
/* 46cf61: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46cf64: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cf67: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46cf6a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46cf6c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46cf6f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46cf72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46cf73: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cf74: ret  */
  esp += 4; SPILL(); return;
}

void f_46cf75(void) {
  LOAD_REGS();
L_46cf75: /* 46cf75: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46cf76: mov ebp, esp */
  ebp = esp;
/* 46cf78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46cf7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46cf7c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46cf7f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46cf81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cf82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cf83: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46cf87: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46cf8a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46cf8d: call 0x467ff8 */
  esp -= 4; W32(esp, 0x46cf92u); SPILL(); f_467ff8(); if (g_unwind) return; RELOAD();
/* 46cf92: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 46cf95: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46cf98: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46cf9b: call 0x467fc9 */
  esp -= 4; W32(esp, 0x46cfa0u); SPILL(); f_467fc9(); if (g_unwind) return; RELOAD();
/* 46cfa0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46cfa2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cfa3: je 0x46cfb4 */
  if (zf) goto L_46cfb4;
L_46cfa5: /* 46cfa5: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 46cfa8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46cfab: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46cfad: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46cfaf: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46cfb2: jmp 0x46d029 */
  goto L_46d029;
L_46cfb4: /* 46cfb4: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46cfb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46cfb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46cfb9: call 0x469c49 */
  esp -= 4; W32(esp, 0x46cfbeu); SPILL(); f_469c49(); if (g_unwind) return; RELOAD();
/* 46cfbe: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 46cfc1: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 46cfc7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cfc8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cfc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46cfcb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46cfce: jp 0x46cfda */
  if (pf) goto L_46cfda;
L_46cfd0: /* 46cfd0: fld dword ptr [0x48e3d0] */
  { double v = F32((uint32_t)(0x48e3d0u)); FPUSH(v); }
/* 46cfd6: fchs  */
  ST0 = -ST0;
/* 46cfd8: jmp 0x46d012 */
  goto L_46d012;
L_46cfda: /* 46cfda: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46cfdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cfde: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46cfe1: call 0x467fb5 */
  esp -= 4; W32(esp, 0x46cfe6u); SPILL(); f_467fb5(); if (g_unwind) return; RELOAD();
/* 46cfe6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46cfe8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46cfe9: je 0x46cff0 */
  if (zf) goto L_46cff0;
L_46cfeb: /* 46cfeb: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46cfee: jmp 0x46d012 */
  goto L_46d012;
L_46cff0: /* 46cff0: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46cff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cff4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46cff5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46cff8: call 0x48befc */
  esp -= 4; W32(esp, 0x46cffdu); SPILL(); f_48befc(); if (g_unwind) return; RELOAD();
/* 46cffd: fld dword ptr [0x48e274] */
  { double v = F32((uint32_t)(0x48e274u)); FPUSH(v); }
/* 46d003: fadd dword ptr [0x48e270] */
  ST0 = ST0 + (F32((uint32_t)(0x48e270u)));
/* 46d009: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d00a: fild dword ptr [ebp - 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d00d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d00e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 46d010: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_46d012: /* 46d012: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46d015: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 46d018: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46d01b: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 46d01e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d021: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46d023: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46d026: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_46d029: /* 46d029: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d02a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d02b: ret  */
  esp += 4; SPILL(); return;
}

void f_46d02c(void) {
  LOAD_REGS();
L_46d02c: /* 46d02c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d02d: mov ebp, esp */
  ebp = esp;
/* 46d02f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d032: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46d035: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d036: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46d039: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 46d03c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d03d: mov dword ptr [ebp - 4], 0x3ede5bd9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3ede5bd9u);
/* 46d044: call 0x46cf75 */
  esp -= 4; W32(esp, 0x46d049u); SPILL(); f_46cf75(); if (g_unwind) return; RELOAD();
/* 46d049: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d04a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d04b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d04c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46d04f: call 0x469e3d */
  esp -= 4; W32(esp, 0x46d054u); SPILL(); f_469e3d(); if (g_unwind) return; RELOAD();
/* 46d054: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d057: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d05a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d05b: ret  */
  esp += 4; SPILL(); return;
}

void f_46d05c(void) {
  LOAD_REGS();
L_46d05c: /* 46d05c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d05d: mov ebp, esp */
  ebp = esp;
/* 46d05f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d060: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46d063: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46d065: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d066: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d067: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d068: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d06b: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46d070u); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46d070: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 46d073: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 46d075: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 46d078: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46d07a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d07d: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46d082u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46d082: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d085: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d086: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d087: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 46d08a: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 46d08c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46d08d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46d090: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d092: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d093: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46d094: ret  */
  esp += 4; SPILL(); return;
}

void f_46d095(void) {
  LOAD_REGS();
L_46d095: /* 46d095: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46d099: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46d09b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46d09f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d0a1: fldz  */
  FPUSH(0.0);
/* 46d0a3: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46d0a6: ret  */
  esp += 4; SPILL(); return;
}

void f_46d0a7(void) {
  LOAD_REGS();
L_46d0a7: /* 46d0a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d0a8: mov ebp, esp */
  ebp = esp;
/* 46d0aa: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d0ad: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46d0b0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 46d0b3: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 46d0b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d0bb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d0be: jp 0x46d0ee */
  if (pf) goto L_46d0ee;
L_46d0c0: /* 46d0c0: fldz  */
  FPUSH(0.0);
/* 46d0c2: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 46d0c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d0c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d0c9: jp 0x46d0ee */
  if (pf) goto L_46d0ee;
L_46d0cb: /* 46d0cb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46d0ce: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 46d0d0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46d0d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d0d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d0d4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46d0d8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d0db: call 0x468058 */
  esp -= 4; W32(esp, 0x46d0e0u); SPILL(); f_468058(); if (g_unwind) return; RELOAD();
/* 46d0e0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d0e3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d0e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d0e6: fldz  */
  FPUSH(0.0);
/* 46d0e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d0e9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46d0ec: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d0ed: ret  */
  esp += 4; SPILL(); return;
L_46d0ee: /* 46d0ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d0ef: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d0f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d0f3: call 0x46cf75 */
  esp -= 4; W32(esp, 0x46d0f8u); SPILL(); f_46cf75(); if (g_unwind) return; RELOAD();
/* 46d0f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d0f9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46d0fc: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46d0ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d100: call 0x46cda4 */
  esp -= 4; W32(esp, 0x46d105u); SPILL(); f_46cda4(); if (g_unwind) return; RELOAD();
/* 46d105: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d106: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46d109: call 0x46cf10 */
  esp -= 4; W32(esp, 0x46d10eu); SPILL(); f_46cf10(); if (g_unwind) return; RELOAD();
/* 46d10e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d111: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d114: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d115: ret  */
  esp += 4; SPILL(); return;
}

void f_46d116(void) {
  LOAD_REGS();
L_46d116: /* 46d116: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d117: mov ebp, esp */
  ebp = esp;
/* 46d119: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d11c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46d11f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46d121: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46d124: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46d125: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d126: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46d129: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46d12b: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 46d12e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46d131: mov ebx, esi */
  ebx = esi;
/* 46d133: jge 0x46d137 */
  if ((sf == of)) goto L_46d137;
L_46d135: /* 46d135: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
L_46d137: /* 46d137: fld1  */
  FPUSH(1.0);
/* 46d139: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d13c: fldz  */
  FPUSH(0.0);
/* 46d13e: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
L_46d141: /* 46d141: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46d144: je 0x46d152 */
  if (zf) goto L_46d152;
L_46d146: /* 46d146: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d14a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46d14d: call 0x469829 */
  esp -= 4; W32(esp, 0x46d152u); SPILL(); f_469829(); if (g_unwind) return; RELOAD();
L_46d152: /* 46d152: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ebx = r;
  }
/* 46d154: je 0x46d164 */
  if (zf) goto L_46d164;
L_46d156: /* 46d156: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d15a: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 46d15d: call 0x469829 */
  esp -= 4; W32(esp, 0x46d162u); SPILL(); f_469829(); if (g_unwind) return; RELOAD();
/* 46d162: jmp 0x46d141 */
  goto L_46d141;
L_46d164: /* 46d164: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46d166: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d167: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46d168: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46d16b: jge 0x46d188 */
  if ((sf == of)) goto L_46d188;
L_46d16d: /* 46d16d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d16e: fld1  */
  FPUSH(1.0);
/* 46d170: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d173: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d176: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d177: fldz  */
  FPUSH(0.0);
/* 46d179: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 46d17c: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46d17f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d180: call 0x46cdd1 */
  esp -= 4; W32(esp, 0x46d185u); SPILL(); f_46cdd1(); if (g_unwind) return; RELOAD();
/* 46d185: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46d188: /* 46d188: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46d18a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46d18d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 46d18f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46d192: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 46d195: mov eax, ecx */
  eax = ecx;
/* 46d197: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d198: ret  */
  esp += 4; SPILL(); return;
}

void f_46d199(void) {
  LOAD_REGS();
L_46d199: /* 46d199: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d19a: mov ebp, esp */
  ebp = esp;
/* 46d19c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d19d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d19e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d19f: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46d1a2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46d1a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d1a6: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 46d1ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d1ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d1af: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d1b2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46d1b5: jp 0x46d1d5 */
  if (pf) goto L_46d1d5;
L_46d1b7: /* 46d1b7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46d1b9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46d1bd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46d1bf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d1c2: call 0x468058 */
  esp -= 4; W32(esp, 0x46d1c7u); SPILL(); f_468058(); if (g_unwind) return; RELOAD();
/* 46d1c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d1ca: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d1cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d1cd: fldz  */
  FPUSH(0.0);
/* 46d1cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d1d0: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46d1d3: jmp 0x46d1ff */
  goto L_46d1ff;
L_46d1d5: /* 46d1d5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46d1d7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d1da: call 0x48befc */
  esp -= 4; W32(esp, 0x46d1dfu); SPILL(); f_48befc(); if (g_unwind) return; RELOAD();
/* 46d1df: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 46d1e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d1e3: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d1e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d1e7: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 46d1ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d1eb: call 0x469e3d */
  esp -= 4; W32(esp, 0x46d1f0u); SPILL(); f_469e3d(); if (g_unwind) return; RELOAD();
/* 46d1f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d1f1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46d1f4: call 0x46cf10 */
  esp -= 4; W32(esp, 0x46d1f9u); SPILL(); f_46cf10(); if (g_unwind) return; RELOAD();
/* 46d1f9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d1fc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46d1ff: /* 46d1ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d200: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d201: ret  */
  esp += 4; SPILL(); return;
}

void f_46d202(void) {
  LOAD_REGS();
L_46d202: /* 46d202: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d203: mov ebp, esp */
  ebp = esp;
/* 46d205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d206: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d207: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d20a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46d20c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46d20f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d210: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d211: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d214: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46d217: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46d21cu); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46d21c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46d220: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46d223: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d226: call 0x467fdf */
  esp -= 4; W32(esp, 0x46d22bu); SPILL(); f_467fdf(); if (g_unwind) return; RELOAD();
/* 46d22b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46d22e: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46d231: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46d233: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46d236: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d239: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46d23eu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46d23e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46d242: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46d245: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d248: call 0x467f83 */
  esp -= 4; W32(esp, 0x46d24du); SPILL(); f_467f83(); if (g_unwind) return; RELOAD();
/* 46d24d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d250: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d251: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d253: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d254: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46d257: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46d25a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d25b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d25c: ret  */
  esp += 4; SPILL(); return;
}

void f_46d25d(void) {
  LOAD_REGS();
L_46d25d: /* 46d25d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d25e: mov ebp, esp */
  ebp = esp;
/* 46d260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d261: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d262: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d265: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46d268: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46d26a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d26b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d26c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d26f: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46d272: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46d277u); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46d277: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46d27b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46d27e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d281: call 0x467f83 */
  esp -= 4; W32(esp, 0x46d286u); SPILL(); f_467f83(); if (g_unwind) return; RELOAD();
/* 46d286: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46d288: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46d28b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46d28e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46d291: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d294: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46d299u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46d299: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46d29d: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46d2a0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d2a3: call 0x467fdf */
  esp -= 4; W32(esp, 0x46d2a8u); SPILL(); f_467fdf(); if (g_unwind) return; RELOAD();
/* 46d2a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d2ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d2ac: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d2ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d2af: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46d2b2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46d2b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d2b6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d2b7: ret  */
  esp += 4; SPILL(); return;
}

void f_46d2b8(void) {
  LOAD_REGS();
L_46d2b8: /* 46d2b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d2b9: mov ebp, esp */
  ebp = esp;
/* 46d2bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d2bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d2bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d2be: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d2c1: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46d2c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d2c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d2c6: call 0x469c49 */
  esp -= 4; W32(esp, 0x46d2cbu); SPILL(); f_469c49(); if (g_unwind) return; RELOAD();
/* 46d2cb: fst dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0);
/* 46d2ce: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46d2d2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d2d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d2d4: jne 0x46d2e3 */
  if (!zf) goto L_46d2e3;
L_46d2d6: /* 46d2d6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
L_46d2d8: /* 46d2d8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d2db: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
L_46d2dd: /* 46d2dd: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_46d2e0: /* 46d2e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d2e1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d2e2: ret  */
  esp += 4; SPILL(); return;
L_46d2e3: /* 46d2e3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d2e5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46d2e7: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 46d2ed: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46d2ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d2f1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d2f4: jp 0x46d2f8 */
  if (pf) goto L_46d2f8;
L_46d2f6: /* 46d2f6: fchs  */
  ST0 = -ST0;
L_46d2f8: /* 46d2f8: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46d2fb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 46d2fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d2fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d2ff: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d302: call 0x467cd5 */
  esp -= 4; W32(esp, 0x46d307u); SPILL(); f_467cd5(); if (g_unwind) return; RELOAD();
/* 46d307: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 46d30a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 46d30c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d30f: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46d314u); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46d314: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46d317: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 46d318: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46d31a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d31b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46d31d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d31e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 46d31f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d320: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d321: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d324: call 0x467cd5 */
  esp -= 4; W32(esp, 0x46d329u); SPILL(); f_467cd5(); if (g_unwind) return; RELOAD();
/* 46d329: fldz  */
  FPUSH(0.0);
/* 46d32b: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 46d32d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d32e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46d331: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d332: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d334: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d337: jp 0x46d353 */
  if (pf) goto L_46d353;
L_46d339: /* 46d339: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 46d33b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 46d33d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d340: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 46d342: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d345: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46d348: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d34a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46d34d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d34f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d351: jmp 0x46d2e0 */
  goto L_46d2e0;
L_46d353: /* 46d353: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 46d359: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d35b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46d35d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d35f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d362: fdivr dword ptr [esi + 4] */
  ST0 = (F32((uint32_t)(esi + 0x4u))) / ST0;
/* 46d365: jp 0x46d2d8 */
  if (pf) goto L_46d2d8;
L_46d36b: /* 46d36b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d36e: fchs  */
  ST0 = -ST0;
/* 46d370: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d372: fchs  */
  ST0 = -ST0;
/* 46d374: jmp 0x46d2dd */
  goto L_46d2dd;
}

void f_46d379(void) {
  LOAD_REGS();
L_46d379: /* 46d379: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d37a: mov ebp, esp */
  ebp = esp;
/* 46d37c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d37d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d37e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d37f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d382: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 46d385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d387: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d38a: call 0x48bf14 */
  esp -= 4; W32(esp, 0x46d38fu); SPILL(); f_48bf14(); if (g_unwind) return; RELOAD();
/* 46d38f: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 46d392: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 46d394: fld1  */
  FPUSH(1.0);
/* 46d396: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 46d39a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46d39d: call 0x467fdf */
  esp -= 4; W32(esp, 0x46d3a2u); SPILL(); f_467fdf(); if (g_unwind) return; RELOAD();
/* 46d3a2: fld dword ptr [0x4c8e6c] */
  { double v = F32((uint32_t)(0x4c8e6cu)); FPUSH(v); }
/* 46d3a8: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46d3ab: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 46d3ae: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46d3b0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46d3b2: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 46d3b5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46d3b7: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46d3b9: fld1  */
  FPUSH(1.0);
/* 46d3bb: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 46d3bd: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d3c0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d3c2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 46d3c4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46d3c6: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46d3c8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d3cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d3cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d3cf: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46d3d4u); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46d3d4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d3d7: fmul dword ptr [ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 46d3da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d3db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d3dc: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 46d3df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d3e0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d3e2: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d3e5: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 46d3e8: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46d3eb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d3ec: ret  */
  esp += 4; SPILL(); return;
}

void f_46d3ed(void) {
  LOAD_REGS();
L_46d3ed: /* 46d3ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d3ee: mov ebp, esp */
  ebp = esp;
/* 46d3f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d3f3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46d3f6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 46d3f9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46d3fb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46d3fe: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d401: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d402: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46d405: fchs  */
  ST0 = -ST0;
/* 46d407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d408: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d40b: call 0x46d379 */
  esp -= 4; W32(esp, 0x46d410u); SPILL(); f_46d379(); if (g_unwind) return; RELOAD();
/* 46d410: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 46d413: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d416: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46d418: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d419: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46d41c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d41d: fchs  */
  ST0 = -ST0;
/* 46d41f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46d422: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d423: ret  */
  esp += 4; SPILL(); return;
}

void f_46d424(void) {
  LOAD_REGS();
L_46d424: /* 46d424: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d425: mov ebp, esp */
  ebp = esp;
/* 46d427: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d42a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46d42d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d42e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d431: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d432: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d435: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d436: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d437: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d438: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d439: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46d43c: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 46d43e: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d441: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d444: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46d447: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d44a: fadd qword ptr [ebp - 8] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46d44d: mov edi, eax */
  edi = eax;
/* 46d44f: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d452: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d453: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d454: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d455: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d456: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46d457: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d458: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d459: ret  */
  esp += 4; SPILL(); return;
}

void f_46d45a(void) {
  LOAD_REGS();
L_46d45a: /* 46d45a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d45b: mov ebp, esp */
  ebp = esp;
/* 46d45d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d460: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46d463: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46d465: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46d468: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d46a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d46b: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 46d46d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d46e: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d471: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d474: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d476: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46d479: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d47c: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d47f: mov edi, eax */
  edi = eax;
/* 46d481: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d482: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d483: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d484: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d485: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46d486: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d487: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d488: ret  */
  esp += 4; SPILL(); return;
}

void f_46d489(void) {
  LOAD_REGS();
L_46d489: /* 46d489: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d48a: mov ebp, esp */
  ebp = esp;
/* 46d48c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d48f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46d492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d493: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d497: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d49a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d49b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d49c: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d49d: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d49e: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46d4a1: fsub qword ptr [eax] */
  ST0 = ST0 - (F64((uint32_t)(eax)));
/* 46d4a3: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d4a6: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d4a9: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46d4ac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d4af: fsubr qword ptr [ebp - 8] */
  ST0 = (F64((uint32_t)(ebp + 0xfffffff8u))) - ST0;
/* 46d4b2: mov edi, eax */
  edi = eax;
/* 46d4b4: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d4b7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4b8: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4b9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4ba: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46d4bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d4bd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d4be: ret  */
  esp += 4; SPILL(); return;
}

void f_46d4bf(void) {
  LOAD_REGS();
L_46d4bf: /* 46d4bf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d4c0: mov ebp, esp */
  ebp = esp;
/* 46d4c2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d4c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d4c6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d4c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d4ca: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46d4cd: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d4d0: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4d1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4d2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4d3: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46d4d6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4d7: call 0x46998b */
  esp -= 4; W32(esp, 0x46d4dcu); SPILL(); f_46998b(); if (g_unwind) return; RELOAD();
/* 46d4dc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d4df: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d4e2: mov edi, eax */
  edi = eax;
/* 46d4e4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4e5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4e6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4e7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46d4e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d4ea: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d4eb: ret  */
  esp += 4; SPILL(); return;
}

void f_46d4ec(void) {
  LOAD_REGS();
L_46d4ec: /* 46d4ec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d4ed: mov ebp, esp */
  ebp = esp;
/* 46d4ef: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d4f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d4f3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d4f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d4f7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46d4fa: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d4fd: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4fe: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d4ff: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d500: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46d503: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d504: call 0x4699be */
  esp -= 4; W32(esp, 0x46d509u); SPILL(); f_4699be(); if (g_unwind) return; RELOAD();
/* 46d509: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d50c: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d50f: mov edi, eax */
  edi = eax;
/* 46d511: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d512: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d513: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d514: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d515: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46d516: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d517: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d518: ret  */
  esp += 4; SPILL(); return;
}

void f_46d519(void) {
  LOAD_REGS();
L_46d519: /* 46d519: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d51a: mov ebp, esp */
  ebp = esp;
/* 46d51c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d51f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46d522: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46d524: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d525: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d528: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d529: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46d52c: fldz  */
  FPUSH(0.0);
/* 46d52e: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46d531: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d534: call 0x4699be */
  esp -= 4; W32(esp, 0x46d539u); SPILL(); f_4699be(); if (g_unwind) return; RELOAD();
/* 46d539: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d53c: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d53f: mov edi, eax */
  edi = eax;
/* 46d541: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d542: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d543: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d544: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d545: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46d546: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d547: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d548: ret  */
  esp += 4; SPILL(); return;
}

void f_46d549(void) {
  LOAD_REGS();
L_46d549: /* 46d549: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d54a: mov ebp, esp */
  ebp = esp;
/* 46d54c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d54f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d550: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d553: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d555: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d556: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d559: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d55a: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d55d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d560: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46d565u); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46d565: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d568: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d56b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d56c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d56d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d570: call 0x467f2f */
  esp -= 4; W32(esp, 0x46d575u); SPILL(); f_467f2f(); if (g_unwind) return; RELOAD();
/* 46d575: fchs  */
  ST0 = -ST0;
/* 46d577: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d57a: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d57d: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d57f: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d582: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d585: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d587: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d58a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d58c: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46d591u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46d591: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d594: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d597: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d599: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d59c: call 0x467ec2 */
  esp -= 4; W32(esp, 0x46d5a1u); SPILL(); f_467ec2(); if (g_unwind) return; RELOAD();
/* 46d5a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d5a4: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46d5a6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d5a9: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46d5ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d5ad: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d5b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d5b1: ret  */
  esp += 4; SPILL(); return;
}

void f_46d5b2(void) {
  LOAD_REGS();
L_46d5b2: /* 46d5b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d5b3: mov ebp, esp */
  ebp = esp;
/* 46d5b5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d5b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d5b9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d5bc: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d5bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d5c0: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d5c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d5c3: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d5c6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d5c9: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46d5ceu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46d5ce: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d5d1: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d5d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d5d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d5d6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d5d9: call 0x467f2f */
  esp -= 4; W32(esp, 0x46d5deu); SPILL(); f_467f2f(); if (g_unwind) return; RELOAD();
/* 46d5de: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d5e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d5e4: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d5e7: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d5e9: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d5ec: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d5ee: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d5f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d5f3: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46d5f8u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46d5f8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d5fb: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d5fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d5ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d600: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d603: call 0x467ec2 */
  esp -= 4; W32(esp, 0x46d608u); SPILL(); f_467ec2(); if (g_unwind) return; RELOAD();
/* 46d608: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d60b: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46d60d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d610: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46d613: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d614: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d617: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d618: ret  */
  esp += 4; SPILL(); return;
}

void f_46d619(void) {
  LOAD_REGS();
L_46d619: /* 46d619: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d61a: mov ebp, esp */
  ebp = esp;
/* 46d61c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d61f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d620: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d623: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d626: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d629: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d62a: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d62c: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d62f: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d632: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d635: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46d63au); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46d63a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d63b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d63c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46d63e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d63f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d640: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d643: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d647: call 0x48ab7a */
  esp -= 4; W32(esp, 0x46d64cu); SPILL(); f_48ab7a(); if (g_unwind) return; RELOAD();
/* 46d64c: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d64f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d651: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d654: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d657: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d659: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46d65eu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46d65e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d65f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d660: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46d662: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d663: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d664: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46d667: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d66a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d66b: call 0x48ab7a */
  esp -= 4; W32(esp, 0x46d670u); SPILL(); f_48ab7a(); if (g_unwind) return; RELOAD();
/* 46d670: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d673: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d676: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46d678: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d67b: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46d67e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d67f: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d682: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d683: ret  */
  esp += 4; SPILL(); return;
}

void f_46d684(void) {
  LOAD_REGS();
L_46d684: /* 46d684: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d685: mov ebp, esp */
  ebp = esp;
/* 46d687: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d68a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d68b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d68e: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d690: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d693: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 46d697: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d69a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d69d: call 0x467c9f */
  esp -= 4; W32(esp, 0x46d6a2u); SPILL(); f_467c9f(); if (g_unwind) return; RELOAD();
/* 46d6a2: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 46d6a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d6a8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d6ab: call 0x467f12 */
  esp -= 4; W32(esp, 0x46d6b0u); SPILL(); f_467f12(); if (g_unwind) return; RELOAD();
/* 46d6b0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46d6b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d6b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d6b4: je 0x46d6c5 */
  if (zf) goto L_46d6c5;
L_46d6b6: /* 46d6b6: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46d6b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d6bc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d6be: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46d6c0: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d6c3: jmp 0x46d737 */
  goto L_46d737;
L_46d6c5: /* 46d6c5: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 46d6c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d6c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d6ca: call 0x469fd9 */
  esp -= 4; W32(esp, 0x46d6cfu); SPILL(); f_469fd9(); if (g_unwind) return; RELOAD();
/* 46d6cf: fst qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0);
/* 46d6d2: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46d6d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d6d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d6da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d6dc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d6df: jp 0x46d6eb */
  if (pf) goto L_46d6eb;
L_46d6e1: /* 46d6e1: fld qword ptr [0x48e360] */
  { double v = F64((uint32_t)(0x48e360u)); FPUSH(v); }
/* 46d6e7: fchs  */
  ST0 = -ST0;
/* 46d6e9: jmp 0x46d720 */
  goto L_46d720;
L_46d6eb: /* 46d6eb: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d6ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d6ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d6f0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d6f3: call 0x467efe */
  esp -= 4; W32(esp, 0x46d6f8u); SPILL(); f_467efe(); if (g_unwind) return; RELOAD();
/* 46d6f8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46d6fa: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d6fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d6fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d6ff: jne 0x46d720 */
  if (!zf) goto L_46d720;
L_46d701: /* 46d701: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d702: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d703: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d706: call 0x48befc */
  esp -= 4; W32(esp, 0x46d70bu); SPILL(); f_48befc(); if (g_unwind) return; RELOAD();
/* 46d70b: fld qword ptr [0x48e280] */
  { double v = F64((uint32_t)(0x48e280u)); FPUSH(v); }
/* 46d711: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d712: fadd qword ptr [0x48e278] */
  ST0 = ST0 + (F64((uint32_t)(0x48e278u)));
/* 46d718: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46d71b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d71c: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 46d71e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_46d720: /* 46d720: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d723: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d726: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46d729: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d72a: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d72d: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46d730: mov edi, eax */
  edi = eax;
/* 46d732: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d733: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d734: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d735: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d736: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46d737: /* 46d737: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d738: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d739: ret  */
  esp += 4; SPILL(); return;
}

void f_46d73a(void) {
  LOAD_REGS();
L_46d73a: /* 46d73a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d73b: mov ebp, esp */
  ebp = esp;
/* 46d73d: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d740: fld qword ptr [0x4c8e98] */
  { double v = F64((uint32_t)(0x4c8e98u)); FPUSH(v); }
/* 46d746: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d749: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d74a: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d74d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46d750: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 46d753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d754: call 0x46d684 */
  esp -= 4; W32(esp, 0x46d759u); SPILL(); f_46d684(); if (g_unwind) return; RELOAD();
/* 46d759: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d75a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d75b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d75c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46d75f: call 0x46a1b3 */
  esp -= 4; W32(esp, 0x46d764u); SPILL(); f_46a1b3(); if (g_unwind) return; RELOAD();
/* 46d764: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d767: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d76a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d76b: ret  */
  esp += 4; SPILL(); return;
}

void f_46d76c(void) {
  LOAD_REGS();
L_46d76c: /* 46d76c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d76d: mov ebp, esp */
  ebp = esp;
/* 46d76f: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d772: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46d775: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46d778: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46d77e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d780: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d783: jp 0x46d7b5 */
  if (pf) goto L_46d7b5;
L_46d785: /* 46d785: fldz  */
  FPUSH(0.0);
/* 46d787: fcomp qword ptr [ecx] */
  fpu_com(ST0, F64((uint32_t)(ecx)));
  FPOP();
/* 46d789: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d78b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d78e: jp 0x46d7b5 */
  if (pf) goto L_46d7b5;
L_46d790: /* 46d790: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46d793: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46d795: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46d797: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d79a: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 46d79e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d7a1: call 0x467cba */
  esp -= 4; W32(esp, 0x46d7a6u); SPILL(); f_467cba(); if (g_unwind) return; RELOAD();
/* 46d7a6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d7a9: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46d7ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d7ae: fldz  */
  FPUSH(0.0);
/* 46d7b0: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d7b3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d7b4: ret  */
  esp += 4; SPILL(); return;
L_46d7b5: /* 46d7b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d7b6: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46d7b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d7ba: call 0x46d684 */
  esp -= 4; W32(esp, 0x46d7bfu); SPILL(); f_46d684(); if (g_unwind) return; RELOAD();
/* 46d7bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d7c0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46d7c3: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46d7c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d7c7: call 0x46db40 */
  esp -= 4; W32(esp, 0x46d7ccu); SPILL(); f_46db40(); if (g_unwind) return; RELOAD();
/* 46d7cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d7cd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46d7d0: call 0x46d619 */
  esp -= 4; W32(esp, 0x46d7d5u); SPILL(); f_46d619(); if (g_unwind) return; RELOAD();
/* 46d7d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d7d8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d7db: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d7dc: ret  */
  esp += 4; SPILL(); return;
}

void f_46d7dd(void) {
  LOAD_REGS();
L_46d7dd: /* 46d7dd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d7de: mov ebp, esp */
  ebp = esp;
/* 46d7e0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d7e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46d7e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d7e5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d7e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46d7e9: lea edi, [ebp - 0x20] */
  edi = (uint32_t)(ebp + 0xffffffe0u);
/* 46d7ec: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d7ed: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d7ee: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d7ef: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d7f0: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46d7f3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46d7f5: mov ebx, esi */
  ebx = esi;
/* 46d7f7: jge 0x46d7fb */
  if ((sf == of)) goto L_46d7fb;
L_46d7f9: /* 46d7f9: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
L_46d7fb: /* 46d7fb: fld1  */
  FPUSH(1.0);
/* 46d7fd: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d800: fldz  */
  FPUSH(0.0);
/* 46d802: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_46d805: /* 46d805: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46d808: je 0x46d816 */
  if (zf) goto L_46d816;
L_46d80a: /* 46d80a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46d80d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d80e: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46d811: call 0x46998b */
  esp -= 4; W32(esp, 0x46d816u); SPILL(); f_46998b(); if (g_unwind) return; RELOAD();
L_46d816: /* 46d816: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ebx = r;
  }
/* 46d818: je 0x46d828 */
  if (zf) goto L_46d828;
L_46d81a: /* 46d81a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46d81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d81e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46d821: call 0x46998b */
  esp -= 4; W32(esp, 0x46d826u); SPILL(); f_46998b(); if (g_unwind) return; RELOAD();
/* 46d826: jmp 0x46d805 */
  goto L_46d805;
L_46d828: /* 46d828: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46d82a: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46d82d: jge 0x46d84a */
  if ((sf == of)) goto L_46d84a;
L_46d82f: /* 46d82f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d830: fld1  */
  FPUSH(1.0);
/* 46d832: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46d835: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 46d838: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d839: fldz  */
  FPUSH(0.0);
/* 46d83b: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 46d83e: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 46d841: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d842: call 0x46d4ec */
  esp -= 4; W32(esp, 0x46d847u); SPILL(); f_46d4ec(); if (g_unwind) return; RELOAD();
/* 46d847: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46d84a: /* 46d84a: mov esi, eax */
  esi = eax;
/* 46d84c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d84f: mov edi, eax */
  edi = eax;
/* 46d851: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d852: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d853: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d854: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46d855: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46d856: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d857: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46d858: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d859: ret  */
  esp += 4; SPILL(); return;
}

void f_46d85a(void) {
  LOAD_REGS();
L_46d85a: /* 46d85a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d85b: mov ebp, esp */
  ebp = esp;
/* 46d85d: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d861: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46d864: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d867: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46d86d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d86f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d872: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46d875: jp 0x46d899 */
  if (pf) goto L_46d899;
L_46d877: /* 46d877: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d879: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d87c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 46d880: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46d882: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d885: call 0x467cba */
  esp -= 4; W32(esp, 0x46d88au); SPILL(); f_467cba(); if (g_unwind) return; RELOAD();
/* 46d88a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d88d: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46d88f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d892: fldz  */
  FPUSH(0.0);
/* 46d894: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d897: jmp 0x46d8c5 */
  goto L_46d8c5;
L_46d899: /* 46d899: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46d89b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d89c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d89d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d8a0: call 0x48befc */
  esp -= 4; W32(esp, 0x46d8a5u); SPILL(); f_48befc(); if (g_unwind) return; RELOAD();
/* 46d8a5: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46d8a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d8a9: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 46d8ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d8ad: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d8b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d8b1: call 0x46a1b3 */
  esp -= 4; W32(esp, 0x46d8b6u); SPILL(); f_46a1b3(); if (g_unwind) return; RELOAD();
/* 46d8b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d8b7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46d8ba: call 0x46d619 */
  esp -= 4; W32(esp, 0x46d8bfu); SPILL(); f_46d619(); if (g_unwind) return; RELOAD();
/* 46d8bf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d8c2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46d8c5: /* 46d8c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d8c6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d8c7: ret  */
  esp += 4; SPILL(); return;
}

void f_46d8c8(void) {
  LOAD_REGS();
L_46d8c8: /* 46d8c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d8c9: mov ebp, esp */
  ebp = esp;
/* 46d8cb: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d8ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d8cf: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d8d2: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d8d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d8d5: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d8d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d8d9: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d8dc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d8df: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46d8e4u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46d8e4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d8e7: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d8ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d8eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d8ec: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d8ef: call 0x467f2f */
  esp -= 4; W32(esp, 0x46d8f4u); SPILL(); f_467f2f(); if (g_unwind) return; RELOAD();
/* 46d8f4: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d8f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d8fa: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d8fc: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d8ff: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d902: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d904: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d907: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d909: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46d90eu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46d90e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d911: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d914: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d916: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d919: call 0x467ec2 */
  esp -= 4; W32(esp, 0x46d91eu); SPILL(); f_467ec2(); if (g_unwind) return; RELOAD();
/* 46d91e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d921: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46d923: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d926: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46d929: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d92a: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d92d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d92e: ret  */
  esp += 4; SPILL(); return;
}

void f_46d92f(void) {
  LOAD_REGS();
L_46d92f: /* 46d92f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d930: mov ebp, esp */
  ebp = esp;
/* 46d932: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d935: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d936: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d939: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d93c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d93d: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d93f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d940: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d943: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d946: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46d94bu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46d94b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d94e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d951: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d952: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d953: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d956: call 0x467ec2 */
  esp -= 4; W32(esp, 0x46d95bu); SPILL(); f_467ec2(); if (g_unwind) return; RELOAD();
/* 46d95b: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46d95e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d961: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46d964: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d966: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46d969: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d96b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d96e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d970: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46d975u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46d975: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d978: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46d97b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d97c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d97d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d980: call 0x467f2f */
  esp -= 4; W32(esp, 0x46d985u); SPILL(); f_467f2f(); if (g_unwind) return; RELOAD();
/* 46d985: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d988: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46d98a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d98d: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46d990: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d991: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d994: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d995: ret  */
  esp += 4; SPILL(); return;
}

void f_46d996(void) {
  LOAD_REGS();
L_46d996: /* 46d996: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46d997: mov ebp, esp */
  ebp = esp;
/* 46d999: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46d99c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d99d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46d9a0: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46d9a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d9a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46d9a5: call 0x469fd9 */
  esp -= 4; W32(esp, 0x46d9aau); SPILL(); f_469fd9(); if (g_unwind) return; RELOAD();
/* 46d9aa: fst qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0);
/* 46d9ad: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46d9b1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d9b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46d9b3: jne 0x46d9c2 */
  if (!zf) goto L_46d9c2;
L_46d9b5: /* 46d9b5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
L_46d9b7: /* 46d9b7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46d9ba: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
L_46d9bc: /* 46d9bc: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46d9bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46d9c0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46d9c1: ret  */
  esp += 4; SPILL(); return;
L_46d9c2: /* 46d9c2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d9c4: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d9c6: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46d9cc: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46d9ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46d9d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46d9d3: jp 0x46d9d7 */
  if (pf) goto L_46d9d7;
L_46d9d5: /* 46d9d5: fchs  */
  ST0 = -ST0;
L_46d9d7: /* 46d9d7: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46d9da: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 46d9dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46d9dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d9de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46d9df: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d9e2: call 0x467f4a */
  esp -= 4; W32(esp, 0x46d9e7u); SPILL(); f_467f4a(); if (g_unwind) return; RELOAD();
/* 46d9e7: fadd qword ptr [ebp - 0xc] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff4u)));
/* 46d9ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46d9ed: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 46d9ef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46d9f1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46d9f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46d9f6: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46d9fbu); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46d9fb: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46d9fe: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 46d9ff: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46da01: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46da02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46da03: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46da05: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 46da06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46da07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46da08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46da09: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46da0c: call 0x467f4a */
  esp -= 4; W32(esp, 0x46da11u); SPILL(); f_467f4a(); if (g_unwind) return; RELOAD();
/* 46da11: fldz  */
  FPUSH(0.0);
/* 46da13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46da16: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* 46da18: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46da1b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46da1d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46da20: jp 0x46da39 */
  if (pf) goto L_46da39;
L_46da22: /* 46da22: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 46da24: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 46da26: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46da29: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 46da2b: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 46da2e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46da30: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46da32: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46da34: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 46da37: jmp 0x46d9bc */
  goto L_46d9bc;
L_46da39: /* 46da39: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46da3f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46da41: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46da43: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46da45: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46da48: fdivr qword ptr [esi + 8] */
  ST0 = (F64((uint32_t)(esi + 0x8u))) / ST0;
/* 46da4b: jp 0x46d9b7 */
  if (pf) goto L_46d9b7;
L_46da51: /* 46da51: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46da54: fchs  */
  ST0 = -ST0;
/* 46da56: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46da58: fchs  */
  ST0 = -ST0;
/* 46da5a: jmp 0x46d9bc */
  goto L_46d9bc;
}

void f_46da5f(void) {
  LOAD_REGS();
L_46da5f: /* 46da5f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46da60: mov ebp, esp */
  ebp = esp;
/* 46da62: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46da65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46da66: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46da69: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46da6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46da6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46da6e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46da71: call 0x48bf14 */
  esp -= 4; W32(esp, 0x46da76u); SPILL(); f_48bf14(); if (g_unwind) return; RELOAD();
/* 46da76: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46da79: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46da7b: fld1  */
  FPUSH(1.0);
/* 46da7d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46da80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46da81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46da82: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46da85: call 0x467f2f */
  esp -= 4; W32(esp, 0x46da8au); SPILL(); f_467f2f(); if (g_unwind) return; RELOAD();
/* 46da8a: fld qword ptr [0x4c8e80] */
  { double v = F64((uint32_t)(0x4c8e80u)); FPUSH(v); }
/* 46da90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46da93: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46da96: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46da99: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46da9b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46da9d: fst qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 46daa0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46daa2: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46daa4: fld1  */
  FPUSH(1.0);
/* 46daa6: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 46daa8: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 46daab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46daad: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 46daaf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46dab1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46dab3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dab6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46dab8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46daba: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46dabfu); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46dabf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46dac2: fmul qword ptr [ebp - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 46dac5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dac6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dac7: fmul qword ptr [ebp - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 46daca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46dacb: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46dacd: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46dad0: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46dad3: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46dad6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46dad7: ret  */
  esp += 4; SPILL(); return;
}

void f_46dad8(void) {
  LOAD_REGS();
L_46dad8: /* 46dad8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46dad9: mov ebp, esp */
  ebp = esp;
/* 46dadb: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dade: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46dae1: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46dae4: fchs  */
  ST0 = -ST0;
/* 46dae6: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46dae9: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46daeb: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46daee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46daef: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46daf2: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46daf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46daf6: call 0x46da5f */
  esp -= 4; W32(esp, 0x46dafbu); SPILL(); f_46da5f(); if (g_unwind) return; RELOAD();
/* 46dafb: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46dafe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46db01: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46db03: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46db04: fld qword ptr [ebp - 0x20] */
  { double v = F64((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 46db07: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46db08: fchs  */
  ST0 = -ST0;
/* 46db0a: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46db0d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46db0e: ret  */
  esp += 4; SPILL(); return;
}

void f_46db0f(void) {
  LOAD_REGS();
L_46db0f: /* 46db0f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46db10: mov ebp, esp */
  ebp = esp;
/* 46db12: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46db15: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46db18: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46db1a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46db1d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46db1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46db20: fsub qword ptr [eax] */
  ST0 = ST0 - (F64((uint32_t)(eax)));
/* 46db22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46db23: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46db26: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46db29: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46db2b: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46db2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46db31: fchs  */
  ST0 = -ST0;
/* 46db33: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46db36: mov edi, eax */
  edi = eax;
/* 46db38: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db39: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db3a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db3b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46db3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46db3e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46db3f: ret  */
  esp += 4; SPILL(); return;
}

void f_46db40(void) {
  LOAD_REGS();
L_46db40: /* 46db40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46db41: mov ebp, esp */
  ebp = esp;
/* 46db43: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46db46: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46db49: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46db4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46db4c: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46db4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46db50: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46db53: fldz  */
  FPUSH(0.0);
/* 46db55: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46db58: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46db5b: call 0x46998b */
  esp -= 4; W32(esp, 0x46db60u); SPILL(); f_46998b(); if (g_unwind) return; RELOAD();
/* 46db60: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46db63: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46db66: mov edi, eax */
  edi = eax;
/* 46db68: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db69: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db6a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db6b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46db6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46db6e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46db6f: ret  */
  esp += 4; SPILL(); return;
}

void f_46db70(void) {
  LOAD_REGS();
L_46db70: /* 46db70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46db71: mov ebp, esp */
  ebp = esp;
/* 46db73: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46db76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46db77: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46db7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46db7b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46db7e: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46db81: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db82: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db83: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db84: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46db87: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db88: call 0x469afc */
  esp -= 4; W32(esp, 0x46db8du); SPILL(); f_469afc(); if (g_unwind) return; RELOAD();
/* 46db8d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46db90: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46db93: mov edi, eax */
  edi = eax;
/* 46db95: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db96: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db97: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db98: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46db99: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46db9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46db9b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46db9c: ret  */
  esp += 4; SPILL(); return;
}

void f_46db9d(void) {
  LOAD_REGS();
L_46db9d: /* 46db9d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46db9e: mov ebp, esp */
  ebp = esp;
/* 46dba0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dba3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46dba6: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46dba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dba9: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46dbac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46dbad: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46dbb0: fldz  */
  FPUSH(0.0);
/* 46dbb2: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46dbb5: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dbb8: call 0x469afc */
  esp -= 4; W32(esp, 0x46dbbdu); SPILL(); f_469afc(); if (g_unwind) return; RELOAD();
/* 46dbbd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46dbc0: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46dbc3: mov edi, eax */
  edi = eax;
/* 46dbc5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46dbc6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46dbc7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46dbc8: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46dbc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46dbca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46dbcb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46dbcc: ret  */
  esp += 4; SPILL(); return;
}

void f_46dbcd(void) {
  LOAD_REGS();
L_46dbcd: /* 46dbcd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46dbd1: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46dbd4: fchs  */
  ST0 = -ST0;
/* 46dbd6: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46dbd8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46dbdc: fchs  */
  ST0 = -ST0;
/* 46dbde: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46dbe0: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46dbe3: ret  */
  esp += 4; SPILL(); return;
}

void f_46dbe4(void) {
  LOAD_REGS();
L_46dbe4: /* 46dbe4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46dbe8: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46dbeb: fchs  */
  ST0 = -ST0;
/* 46dbed: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46dbef: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46dbf3: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46dbf5: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46dbf8: ret  */
  esp += 4; SPILL(); return;
}

void f_46dbf9(void) {
  LOAD_REGS();
L_46dbf9: /* 46dbf9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46dbfa: mov ebp, esp */
  ebp = esp;
/* 46dbfc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dbff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dc00: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46dc03: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dc05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc06: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dc09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc0a: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dc0d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc10: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46dc15u); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46dc15: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc18: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46dc1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc1d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc20: call 0x467e17 */
  esp -= 4; W32(esp, 0x46dc25u); SPILL(); f_467e17(); if (g_unwind) return; RELOAD();
/* 46dc25: fchs  */
  ST0 = -ST0;
/* 46dc27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46dc2a: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46dc2d: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dc2f: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dc32: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dc35: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46dc37: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46dc3c: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46dc41u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46dc41: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc44: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46dc47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc49: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc4c: call 0x467daa */
  esp -= 4; W32(esp, 0x46dc51u); SPILL(); f_467daa(); if (g_unwind) return; RELOAD();
/* 46dc51: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46dc54: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46dc56: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46dc59: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46dc5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46dc5d: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46dc60: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46dc61: ret  */
  esp += 4; SPILL(); return;
}

void f_46dc62(void) {
  LOAD_REGS();
L_46dc62: /* 46dc62: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46dc63: mov ebp, esp */
  ebp = esp;
/* 46dc65: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dc68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dc69: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46dc6c: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dc6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc70: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dc72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc73: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dc76: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc79: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46dc7eu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46dc7e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc81: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46dc84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dc86: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dc89: call 0x467e17 */
  esp -= 4; W32(esp, 0x46dc8eu); SPILL(); f_467e17(); if (g_unwind) return; RELOAD();
/* 46dc8e: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46dc91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46dc94: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dc97: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dc99: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dc9c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46dc9e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dca1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46dca3: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46dca8u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46dca8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dcab: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46dcae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dcaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dcb0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dcb3: call 0x467daa */
  esp -= 4; W32(esp, 0x46dcb8u); SPILL(); f_467daa(); if (g_unwind) return; RELOAD();
/* 46dcb8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46dcbb: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46dcbd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46dcc0: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46dcc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46dcc4: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46dcc7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46dcc8: ret  */
  esp += 4; SPILL(); return;
}

void f_46dcc9(void) {
  LOAD_REGS();
L_46dcc9: /* 46dcc9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46dcca: mov ebp, esp */
  ebp = esp;
/* 46dccc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dccf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dcd0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46dcd3: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dcd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dcd6: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dcd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dcda: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dcdc: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46dcdf: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dce2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dce5: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46dceau); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46dcea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dceb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dcec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46dcee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dcef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dcf0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dcf3: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46dcf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46dcf7: call 0x48a851 */
  esp -= 4; W32(esp, 0x46dcfcu); SPILL(); f_48a851(); if (g_unwind) return; RELOAD();
/* 46dcfc: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dcff: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46dd01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46dd04: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dd07: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46dd09: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46dd0eu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46dd0e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dd0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dd10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46dd12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dd13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dd14: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dd17: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46dd1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46dd1b: call 0x48a851 */
  esp -= 4; W32(esp, 0x46dd20u); SPILL(); f_48a851(); if (g_unwind) return; RELOAD();
/* 46dd20: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46dd23: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46dd26: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46dd28: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46dd2b: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46dd2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46dd2f: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46dd32: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46dd33: ret  */
  esp += 4; SPILL(); return;
}

void f_46dd34(void) {
  LOAD_REGS();
L_46dd34: /* 46dd34: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46dd35: mov ebp, esp */
  ebp = esp;
/* 46dd37: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dd3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dd3b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46dd3e: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dd40: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dd43: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 46dd47: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dd4a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dd4d: call 0x467e32 */
  esp -= 4; W32(esp, 0x46dd52u); SPILL(); f_467e32(); if (g_unwind) return; RELOAD();
/* 46dd52: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 46dd55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46dd58: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dd5b: call 0x467dfa */
  esp -= 4; W32(esp, 0x46dd60u); SPILL(); f_467dfa(); if (g_unwind) return; RELOAD();
/* 46dd60: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46dd62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dd63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dd64: je 0x46dd75 */
  if (zf) goto L_46dd75;
L_46dd66: /* 46dd66: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46dd69: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46dd6c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46dd6e: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46dd70: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46dd73: jmp 0x46dde7 */
  goto L_46dde7;
L_46dd75: /* 46dd75: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 46dd78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46dd79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dd7a: call 0x46a2c7 */
  esp -= 4; W32(esp, 0x46dd7fu); SPILL(); f_46a2c7(); if (g_unwind) return; RELOAD();
/* 46dd7f: fst qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0);
/* 46dd82: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46dd88: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dd89: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46dd8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46dd8c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46dd8f: jp 0x46dd9b */
  if (pf) goto L_46dd9b;
L_46dd91: /* 46dd91: fld qword ptr [0x48e2e0] */
  { double v = F64((uint32_t)(0x48e2e0u)); FPUSH(v); }
/* 46dd97: fchs  */
  ST0 = -ST0;
/* 46dd99: jmp 0x46ddd0 */
  goto L_46ddd0;
L_46dd9b: /* 46dd9b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46dd9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dd9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dda0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dda3: call 0x467de6 */
  esp -= 4; W32(esp, 0x46dda8u); SPILL(); f_467de6(); if (g_unwind) return; RELOAD();
/* 46dda8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ddaa: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46ddad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ddae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ddaf: jne 0x46ddd0 */
  if (!zf) goto L_46ddd0;
L_46ddb1: /* 46ddb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ddb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ddb3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46ddb6: call 0x48befc */
  esp -= 4; W32(esp, 0x46ddbbu); SPILL(); f_48befc(); if (g_unwind) return; RELOAD();
/* 46ddbb: fld qword ptr [0x48e280] */
  { double v = F64((uint32_t)(0x48e280u)); FPUSH(v); }
/* 46ddc1: fadd qword ptr [0x48e278] */
  ST0 = ST0 + (F64((uint32_t)(0x48e278u)));
/* 46ddc7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ddc8: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 46ddcb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ddcc: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 46ddce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_46ddd0: /* 46ddd0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46ddd3: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46ddd6: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46ddd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ddda: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dddd: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46dde0: mov edi, eax */
  edi = eax;
/* 46dde2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46dde3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46dde4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46dde5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46dde6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46dde7: /* 46dde7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46dde8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46dde9: ret  */
  esp += 4; SPILL(); return;
}

void f_46ddea(void) {
  LOAD_REGS();
L_46ddea: /* 46ddea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ddeb: mov ebp, esp */
  ebp = esp;
/* 46dded: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46ddf0: fld qword ptr [0x4c8e98] */
  { double v = F64((uint32_t)(0x4c8e98u)); FPUSH(v); }
/* 46ddf6: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46ddf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ddfa: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46ddfd: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46de00: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 46de03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46de04: call 0x46dd34 */
  esp -= 4; W32(esp, 0x46de09u); SPILL(); f_46dd34(); if (g_unwind) return; RELOAD();
/* 46de09: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46de0a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46de0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46de0c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46de0f: call 0x46a1b3 */
  esp -= 4; W32(esp, 0x46de14u); SPILL(); f_46a1b3(); if (g_unwind) return; RELOAD();
/* 46de14: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46de17: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46de1a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46de1b: ret  */
  esp += 4; SPILL(); return;
}

void f_46de1c(void) {
  LOAD_REGS();
L_46de1c: /* 46de1c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46de1d: mov ebp, esp */
  ebp = esp;
/* 46de1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46de20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46de21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46de22: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46de25: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46de27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46de28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46de29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46de2a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46de2d: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46de32u); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46de32: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 46de35: fmul qword ptr [edi] */
  ST0 = ST0 * (F64((uint32_t)(edi)));
/* 46de37: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46de3a: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46de3c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46de3f: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46de44u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46de44: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46de47: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46de48: fmul qword ptr [edi] */
  ST0 = ST0 * (F64((uint32_t)(edi)));
/* 46de4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46de4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46de4c: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46de4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46de4f: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46de52: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46de55: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46de56: ret  */
  esp += 4; SPILL(); return;
}

void f_46de57(void) {
  LOAD_REGS();
L_46de57: /* 46de57: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46de5b: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46de5d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46de61: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46de63: fldz  */
  FPUSH(0.0);
/* 46de65: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46de68: ret  */
  esp += 4; SPILL(); return;
}

void f_46de69(void) {
  LOAD_REGS();
L_46de69: /* 46de69: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46de6a: mov ebp, esp */
  ebp = esp;
/* 46de6c: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46de6f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46de72: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46de75: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46de7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46de7d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46de80: jp 0x46deb2 */
  if (pf) goto L_46deb2;
L_46de82: /* 46de82: fldz  */
  FPUSH(0.0);
/* 46de84: fcomp qword ptr [ecx] */
  fpu_com(ST0, F64((uint32_t)(ecx)));
  FPOP();
/* 46de86: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46de88: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46de8b: jp 0x46deb2 */
  if (pf) goto L_46deb2;
L_46de8d: /* 46de8d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46de90: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46de92: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46de94: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46de97: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 46de9b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46de9e: call 0x467e96 */
  esp -= 4; W32(esp, 0x46dea3u); SPILL(); f_467e96(); if (g_unwind) return; RELOAD();
/* 46dea3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46dea6: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46dea8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46deab: fldz  */
  FPUSH(0.0);
/* 46dead: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46deb0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46deb1: ret  */
  esp += 4; SPILL(); return;
L_46deb2: /* 46deb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46deb3: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46deb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46deb7: call 0x46dd34 */
  esp -= 4; W32(esp, 0x46debcu); SPILL(); f_46dd34(); if (g_unwind) return; RELOAD();
/* 46debc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46debd: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46dec0: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46dec3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46dec4: call 0x46db40 */
  esp -= 4; W32(esp, 0x46dec9u); SPILL(); f_46db40(); if (g_unwind) return; RELOAD();
/* 46dec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46deca: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46decd: call 0x46dcc9 */
  esp -= 4; W32(esp, 0x46ded2u); SPILL(); f_46dcc9(); if (g_unwind) return; RELOAD();
/* 46ded2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46ded5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46ded8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ded9: ret  */
  esp += 4; SPILL(); return;
}

void f_46deda(void) {
  LOAD_REGS();
L_46deda: /* 46deda: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46dedb: mov ebp, esp */
  ebp = esp;
/* 46dedd: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dee0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46dee1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dee2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46dee5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46dee6: lea edi, [ebp - 0x20] */
  edi = (uint32_t)(ebp + 0xffffffe0u);
/* 46dee9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46deea: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46deeb: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46deec: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46deed: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46def0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46def2: mov ebx, esi */
  ebx = esi;
/* 46def4: jge 0x46def8 */
  if ((sf == of)) goto L_46def8;
L_46def6: /* 46def6: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
L_46def8: /* 46def8: fld1  */
  FPUSH(1.0);
/* 46defa: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46defd: fldz  */
  FPUSH(0.0);
/* 46deff: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_46df02: /* 46df02: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46df05: je 0x46df13 */
  if (zf) goto L_46df13;
L_46df07: /* 46df07: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46df0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46df0b: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46df0e: call 0x46998b */
  esp -= 4; W32(esp, 0x46df13u); SPILL(); f_46998b(); if (g_unwind) return; RELOAD();
L_46df13: /* 46df13: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ebx = r;
  }
/* 46df15: je 0x46df25 */
  if (zf) goto L_46df25;
L_46df17: /* 46df17: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46df1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46df1b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46df1e: call 0x46998b */
  esp -= 4; W32(esp, 0x46df23u); SPILL(); f_46998b(); if (g_unwind) return; RELOAD();
/* 46df23: jmp 0x46df02 */
  goto L_46df02;
L_46df25: /* 46df25: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46df27: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46df2a: jge 0x46df47 */
  if ((sf == of)) goto L_46df47;
L_46df2c: /* 46df2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46df2d: fld1  */
  FPUSH(1.0);
/* 46df2f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46df32: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 46df35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46df36: fldz  */
  FPUSH(0.0);
/* 46df38: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 46df3b: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 46df3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46df3f: call 0x46db70 */
  esp -= 4; W32(esp, 0x46df44u); SPILL(); f_46db70(); if (g_unwind) return; RELOAD();
/* 46df44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46df47: /* 46df47: mov esi, eax */
  esi = eax;
/* 46df49: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46df4c: mov edi, eax */
  edi = eax;
/* 46df4e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46df4f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46df50: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46df51: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46df52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46df53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46df54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46df55: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46df56: ret  */
  esp += 4; SPILL(); return;
}

void f_46df57(void) {
  LOAD_REGS();
L_46df57: /* 46df57: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46df58: mov ebp, esp */
  ebp = esp;
/* 46df5a: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46df5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46df5e: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46df61: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46df64: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46df6a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46df6c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46df6f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46df72: jp 0x46df96 */
  if (pf) goto L_46df96;
L_46df74: /* 46df74: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46df76: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46df79: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 46df7d: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46df7f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46df82: call 0x467e96 */
  esp -= 4; W32(esp, 0x46df87u); SPILL(); f_467e96(); if (g_unwind) return; RELOAD();
/* 46df87: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46df8a: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46df8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46df8f: fldz  */
  FPUSH(0.0);
/* 46df91: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46df94: jmp 0x46dfc2 */
  goto L_46dfc2;
L_46df96: /* 46df96: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46df98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46df99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46df9a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46df9d: call 0x48befc */
  esp -= 4; W32(esp, 0x46dfa2u); SPILL(); f_48befc(); if (g_unwind) return; RELOAD();
/* 46dfa2: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46dfa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46dfa6: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 46dfa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dfaa: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dfad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46dfae: call 0x46a1b3 */
  esp -= 4; W32(esp, 0x46dfb3u); SPILL(); f_46a1b3(); if (g_unwind) return; RELOAD();
/* 46dfb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46dfb4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46dfb7: call 0x46dcc9 */
  esp -= 4; W32(esp, 0x46dfbcu); SPILL(); f_46dcc9(); if (g_unwind) return; RELOAD();
/* 46dfbc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46dfbf: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46dfc2: /* 46dfc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46dfc3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46dfc4: ret  */
  esp += 4; SPILL(); return;
}

void f_46dfc5(void) {
  LOAD_REGS();
L_46dfc5: /* 46dfc5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46dfc6: mov ebp, esp */
  ebp = esp;
/* 46dfc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46dfcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46dfcc: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46dfcf: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dfd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dfd2: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dfd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dfd6: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dfd9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dfdc: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46dfe1u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46dfe1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dfe4: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46dfe7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dfe8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46dfe9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46dfec: call 0x467e17 */
  esp -= 4; W32(esp, 0x46dff1u); SPILL(); f_467e17(); if (g_unwind) return; RELOAD();
/* 46dff1: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46dff4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46dff7: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46dff9: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46dffc: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46dfff: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46e001: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e004: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46e006: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46e00bu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46e00b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e00e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46e011: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e012: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e013: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e016: call 0x467daa */
  esp -= 4; W32(esp, 0x46e01bu); SPILL(); f_467daa(); if (g_unwind) return; RELOAD();
/* 46e01b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46e01e: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46e020: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46e023: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46e026: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e027: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46e02a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e02b: ret  */
  esp += 4; SPILL(); return;
}

void f_46e02c(void) {
  LOAD_REGS();
L_46e02c: /* 46e02c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46e02d: mov ebp, esp */
  ebp = esp;
/* 46e02f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e032: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e033: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46e036: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46e039: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e03a: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46e03c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e03d: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46e040: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e043: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46e048u); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46e048: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e04b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46e04e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e04f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e050: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e053: call 0x467daa */
  esp -= 4; W32(esp, 0x46e058u); SPILL(); f_467daa(); if (g_unwind) return; RELOAD();
/* 46e058: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46e05b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46e05e: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46e061: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46e063: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46e066: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46e068: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e06b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46e06d: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46e072u); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46e072: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e075: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46e078: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e079: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e07a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e07d: call 0x467e17 */
  esp -= 4; W32(esp, 0x46e082u); SPILL(); f_467e17(); if (g_unwind) return; RELOAD();
/* 46e082: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46e085: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46e087: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46e08a: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46e08d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e08e: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46e091: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e092: ret  */
  esp += 4; SPILL(); return;
}

void f_46e093(void) {
  LOAD_REGS();
L_46e093: /* 46e093: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46e094: mov ebp, esp */
  ebp = esp;
/* 46e096: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e099: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e09a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46e09d: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46e0a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e0a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e0a2: call 0x46a2c7 */
  esp -= 4; W32(esp, 0x46e0a7u); SPILL(); f_46a2c7(); if (g_unwind) return; RELOAD();
/* 46e0a7: fst qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0);
/* 46e0aa: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e0ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e0af: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e0b0: jne 0x46e0bf */
  if (!zf) goto L_46e0bf;
L_46e0b2: /* 46e0b2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
L_46e0b4: /* 46e0b4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46e0b7: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
L_46e0b9: /* 46e0b9: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46e0bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e0bd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e0be: ret  */
  esp += 4; SPILL(); return;
L_46e0bf: /* 46e0bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46e0c1: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46e0c3: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46e0c9: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46e0cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46e0cd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46e0d0: jp 0x46e0d4 */
  if (pf) goto L_46e0d4;
L_46e0d2: /* 46e0d2: fchs  */
  ST0 = -ST0;
L_46e0d4: /* 46e0d4: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46e0d7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 46e0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e0da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e0db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e0dc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e0df: call 0x467e6f */
  esp -= 4; W32(esp, 0x46e0e4u); SPILL(); f_467e6f(); if (g_unwind) return; RELOAD();
/* 46e0e4: fadd qword ptr [ebp - 0xc] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff4u)));
/* 46e0e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46e0ea: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 46e0ec: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46e0ee: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e0f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46e0f3: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46e0f8u); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46e0f8: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46e0fb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 46e0fc: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46e0fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e0ff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e100: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46e102: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 46e103: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e104: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e105: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e106: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e109: call 0x467e6f */
  esp -= 4; W32(esp, 0x46e10eu); SPILL(); f_467e6f(); if (g_unwind) return; RELOAD();
/* 46e10e: fldz  */
  FPUSH(0.0);
/* 46e110: fcomp qword ptr [esi] */
  fpu_com(ST0, F64((uint32_t)(esi)));
  FPOP();
/* 46e112: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46e115: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46e118: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46e11a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46e11d: jp 0x46e136 */
  if (pf) goto L_46e136;
L_46e11f: /* 46e11f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 46e121: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 46e123: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46e126: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 46e128: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 46e12b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46e12d: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46e12f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46e131: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* 46e134: jmp 0x46e0b9 */
  goto L_46e0b9;
L_46e136: /* 46e136: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46e13c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46e13e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46e140: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46e142: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46e145: fdivr qword ptr [esi + 8] */
  ST0 = (F64((uint32_t)(esi + 0x8u))) / ST0;
/* 46e148: jp 0x46e0b4 */
  if (pf) goto L_46e0b4;
L_46e14e: /* 46e14e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46e151: fchs  */
  ST0 = -ST0;
/* 46e153: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46e155: fchs  */
  ST0 = -ST0;
/* 46e157: jmp 0x46e0b9 */
  goto L_46e0b9;
}

void f_46e15c(void) {
  LOAD_REGS();
L_46e15c: /* 46e15c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46e15d: mov ebp, esp */
  ebp = esp;
/* 46e15f: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e162: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e163: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46e166: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 46e169: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e16a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e16b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e16e: call 0x48bf14 */
  esp -= 4; W32(esp, 0x46e173u); SPILL(); f_48bf14(); if (g_unwind) return; RELOAD();
/* 46e173: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46e176: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 46e178: fld1  */
  FPUSH(1.0);
/* 46e17a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e17d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e17e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e17f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e182: call 0x467e17 */
  esp -= 4; W32(esp, 0x46e187u); SPILL(); f_467e17(); if (g_unwind) return; RELOAD();
/* 46e187: fld qword ptr [0x4c8e80] */
  { double v = F64((uint32_t)(0x4c8e80u)); FPUSH(v); }
/* 46e18d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46e190: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46e193: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46e196: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46e198: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46e19a: fst qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 46e19d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46e19f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46e1a1: fld1  */
  FPUSH(1.0);
/* 46e1a3: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 46e1a5: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 46e1a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46e1aa: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 46e1ac: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46e1ae: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46e1b0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46e1b3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46e1b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46e1b7: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46e1bcu); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46e1bc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46e1bf: fmul qword ptr [ebp - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 46e1c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e1c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e1c4: fmul qword ptr [ebp - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 46e1c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e1c8: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46e1ca: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46e1cd: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46e1d0: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46e1d3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e1d4: ret  */
  esp += 4; SPILL(); return;
}

void f_46e1d5(void) {
  LOAD_REGS();
L_46e1d5: /* 46e1d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46e1d6: mov ebp, esp */
  ebp = esp;
/* 46e1d8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e1db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46e1de: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46e1e1: fchs  */
  ST0 = -ST0;
/* 46e1e3: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46e1e6: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46e1e8: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46e1eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e1ec: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46e1ef: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46e1f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e1f3: call 0x46e15c */
  esp -= 4; W32(esp, 0x46e1f8u); SPILL(); f_46e15c(); if (g_unwind) return; RELOAD();
/* 46e1f8: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46e1fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46e1fe: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46e200: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e201: fld qword ptr [ebp - 0x20] */
  { double v = F64((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 46e204: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e205: fchs  */
  ST0 = -ST0;
/* 46e207: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46e20a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e20b: ret  */
  esp += 4; SPILL(); return;
}

void f_46e20c(void) {
  LOAD_REGS();
L_46e20c: /* 46e20c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e20d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e20e: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 46e212: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e213: call 0x461028 */
  esp -= 4; W32(esp, 0x46e218u); SPILL(); hle_strlen(); RELOAD();
/* 46e218: mov esi, eax */
  esi = eax;
/* 46e21a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46e21b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e21c: call 0x4620da */
  esp -= 4; W32(esp, 0x46e221u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46e221: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46e223: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e224: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e225: mov ecx, eax */
  ecx = eax;
/* 46e227: jbe 0x46e232 */
  if ((cf | zf)) goto L_46e232;
L_46e229: /* 46e229: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 46e22b: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 46e22d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 46e22e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 46e22f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 46e230: jne 0x46e229 */
  if (!zf) goto L_46e229;
L_46e232: /* 46e232: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e233: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e234: ret  */
  esp += 4; SPILL(); return;
}

void f_46e235(void) {
  LOAD_REGS();
L_46e235: /* 46e235: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 46e23a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46e23fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46e23f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e242: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e243: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e245: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e248: call 0x4612ba */
  esp -= 4; W32(esp, 0x46e24du); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46e24d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e251: mov ecx, 0x4d08d0 */
  ecx = 0x4d08d0u;
/* 46e256: call 0x464006 */
  esp -= 4; W32(esp, 0x46e25bu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 46e25b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46e25e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e25f: call 0x488d6c */
  esp -= 4; W32(esp, 0x46e264u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46e264: mov esi, eax */
  esi = eax;
/* 46e266: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e268: jne 0x46e2bc */
  if (!zf) goto L_46e2bc;
L_46e26a: /* 46e26a: mov eax, dword ptr [0x4d10a8] */
  eax = R32((uint32_t)(0x4d10a8u));
/* 46e26f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e271: je 0x46e277 */
  if (zf) goto L_46e277;
L_46e273: /* 46e273: mov esi, eax */
  esi = eax;
/* 46e275: jmp 0x46e2bc */
  goto L_46e2bc;
L_46e277: /* 46e277: push 0x4d10a8 */
  { uint32_t v = 0x4d10a8u; esp -= 4; W32(esp, v); }
/* 46e27c: call 0x46b344 */
  esp -= 4; W32(esp, 0x46e281u); SPILL(); f_46b344(); if (g_unwind) return; RELOAD();
/* 46e281: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e284: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e285: jne 0x46e2a3 */
  if (!zf) goto L_46e2a3;
L_46e287: /* 46e287: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 46e28c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46e28f: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46e295u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46e295: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 46e29a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46e29d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e29e: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46e2a3u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46e2a3: /* 46e2a3: mov eax, dword ptr [0x4d10a8] */
  eax = R32((uint32_t)(0x4d10a8u));
/* 46e2a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e2a9: mov edi, eax */
  edi = eax;
/* 46e2ab: mov ecx, edi */
  ecx = edi;
/* 46e2ad: mov esi, eax */
  esi = eax;
/* 46e2af: call 0x461292 */
  esp -= 4; W32(esp, 0x46e2b4u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46e2b4: mov ecx, edi */
  ecx = edi;
/* 46e2b6: call 0x488de4 */
  esp -= 4; W32(esp, 0x46e2bbu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 46e2bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46e2bc: /* 46e2bc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e2c0: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e2c3: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46e2c8u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46e2c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46e2cb: mov eax, esi */
  eax = esi;
/* 46e2cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e2ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46e2d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e2d6: ret  */
  esp += 4; SPILL(); return;
}

void f_46e2d7(void) {
  LOAD_REGS();
L_46e2d7: /* 46e2d7: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 46e2dc: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46e2e1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46e2e1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e2e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e2e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e2e7: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e2ea: call 0x4612ba */
  esp -= 4; W32(esp, 0x46e2efu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46e2ef: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e2f3: mov ecx, 0x4d08c8 */
  ecx = 0x4d08c8u;
/* 46e2f8: call 0x464006 */
  esp -= 4; W32(esp, 0x46e2fdu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 46e2fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46e300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e301: call 0x488d6c */
  esp -= 4; W32(esp, 0x46e306u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46e306: mov esi, eax */
  esi = eax;
/* 46e308: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e30a: jne 0x46e35e */
  if (!zf) goto L_46e35e;
L_46e30c: /* 46e30c: mov eax, dword ptr [0x4d10ac] */
  eax = R32((uint32_t)(0x4d10acu));
/* 46e311: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e313: je 0x46e319 */
  if (zf) goto L_46e319;
L_46e315: /* 46e315: mov esi, eax */
  esi = eax;
/* 46e317: jmp 0x46e35e */
  goto L_46e35e;
L_46e319: /* 46e319: push 0x4d10ac */
  { uint32_t v = 0x4d10acu; esp -= 4; W32(esp, v); }
/* 46e31e: call 0x46b38d */
  esp -= 4; W32(esp, 0x46e323u); SPILL(); f_46b38d(); if (g_unwind) return; RELOAD();
/* 46e323: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e326: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e327: jne 0x46e345 */
  if (!zf) goto L_46e345;
L_46e329: /* 46e329: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 46e32e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46e331: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46e337u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46e337: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 46e33c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46e33f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e340: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46e345u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46e345: /* 46e345: mov eax, dword ptr [0x4d10ac] */
  eax = R32((uint32_t)(0x4d10acu));
/* 46e34a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e34b: mov edi, eax */
  edi = eax;
/* 46e34d: mov ecx, edi */
  ecx = edi;
/* 46e34f: mov esi, eax */
  esi = eax;
/* 46e351: call 0x461292 */
  esp -= 4; W32(esp, 0x46e356u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46e356: mov ecx, edi */
  ecx = edi;
/* 46e358: call 0x488de4 */
  esp -= 4; W32(esp, 0x46e35du); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 46e35d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46e35e: /* 46e35e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e362: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e365: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46e36au); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46e36a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46e36d: mov eax, esi */
  eax = esi;
/* 46e36f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e370: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46e377: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e378: ret  */
  esp += 4; SPILL(); return;
}

void f_46e379(void) {
  LOAD_REGS();
L_46e379: /* 46e379: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 46e37e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46e383u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46e383: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e386: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e387: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e389: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e38c: call 0x4612ba */
  esp -= 4; W32(esp, 0x46e391u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46e391: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e395: mov ecx, 0x4d0870 */
  ecx = 0x4d0870u;
/* 46e39a: call 0x464006 */
  esp -= 4; W32(esp, 0x46e39fu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 46e39f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46e3a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e3a3: call 0x488d6c */
  esp -= 4; W32(esp, 0x46e3a8u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46e3a8: mov esi, eax */
  esi = eax;
/* 46e3aa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e3ac: jne 0x46e400 */
  if (!zf) goto L_46e400;
L_46e3ae: /* 46e3ae: mov eax, dword ptr [0x4d10b0] */
  eax = R32((uint32_t)(0x4d10b0u));
/* 46e3b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e3b5: je 0x46e3bb */
  if (zf) goto L_46e3bb;
L_46e3b7: /* 46e3b7: mov esi, eax */
  esi = eax;
/* 46e3b9: jmp 0x46e400 */
  goto L_46e400;
L_46e3bb: /* 46e3bb: push 0x4d10b0 */
  { uint32_t v = 0x4d10b0u; esp -= 4; W32(esp, v); }
/* 46e3c0: call 0x46b3d6 */
  esp -= 4; W32(esp, 0x46e3c5u); SPILL(); f_46b3d6(); if (g_unwind) return; RELOAD();
/* 46e3c5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e3c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e3c9: jne 0x46e3e7 */
  if (!zf) goto L_46e3e7;
L_46e3cb: /* 46e3cb: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 46e3d0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46e3d3: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46e3d9u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46e3d9: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 46e3de: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46e3e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e3e2: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46e3e7u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46e3e7: /* 46e3e7: mov eax, dword ptr [0x4d10b0] */
  eax = R32((uint32_t)(0x4d10b0u));
/* 46e3ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e3ed: mov edi, eax */
  edi = eax;
/* 46e3ef: mov ecx, edi */
  ecx = edi;
/* 46e3f1: mov esi, eax */
  esi = eax;
/* 46e3f3: call 0x461292 */
  esp -= 4; W32(esp, 0x46e3f8u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46e3f8: mov ecx, edi */
  ecx = edi;
/* 46e3fa: call 0x488de4 */
  esp -= 4; W32(esp, 0x46e3ffu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 46e3ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46e400: /* 46e400: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e404: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e407: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46e40cu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46e40c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46e40f: mov eax, esi */
  eax = esi;
/* 46e411: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e412: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46e419: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e41a: ret  */
  esp += 4; SPILL(); return;
}

void f_46e41b(void) {
  LOAD_REGS();
L_46e41b: /* 46e41b: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 46e420: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46e425u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46e425: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e429: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e42b: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e42e: call 0x4612ba */
  esp -= 4; W32(esp, 0x46e433u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46e433: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e437: mov ecx, 0x4d0884 */
  ecx = 0x4d0884u;
/* 46e43c: call 0x464006 */
  esp -= 4; W32(esp, 0x46e441u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 46e441: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46e444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e445: call 0x488d6c */
  esp -= 4; W32(esp, 0x46e44au); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46e44a: mov esi, eax */
  esi = eax;
/* 46e44c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e44e: jne 0x46e4a2 */
  if (!zf) goto L_46e4a2;
L_46e450: /* 46e450: mov eax, dword ptr [0x4d10b4] */
  eax = R32((uint32_t)(0x4d10b4u));
/* 46e455: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e457: je 0x46e45d */
  if (zf) goto L_46e45d;
L_46e459: /* 46e459: mov esi, eax */
  esi = eax;
/* 46e45b: jmp 0x46e4a2 */
  goto L_46e4a2;
L_46e45d: /* 46e45d: push 0x4d10b4 */
  { uint32_t v = 0x4d10b4u; esp -= 4; W32(esp, v); }
/* 46e462: call 0x46b269 */
  esp -= 4; W32(esp, 0x46e467u); SPILL(); f_46b269(); if (g_unwind) return; RELOAD();
/* 46e467: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e46a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e46b: jne 0x46e489 */
  if (!zf) goto L_46e489;
L_46e46d: /* 46e46d: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 46e472: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46e475: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46e47bu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46e47b: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 46e480: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46e483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e484: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46e489u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46e489: /* 46e489: mov eax, dword ptr [0x4d10b4] */
  eax = R32((uint32_t)(0x4d10b4u));
/* 46e48e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e48f: mov edi, eax */
  edi = eax;
/* 46e491: mov ecx, edi */
  ecx = edi;
/* 46e493: mov esi, eax */
  esi = eax;
/* 46e495: call 0x461292 */
  esp -= 4; W32(esp, 0x46e49au); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46e49a: mov ecx, edi */
  ecx = edi;
/* 46e49c: call 0x488de4 */
  esp -= 4; W32(esp, 0x46e4a1u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 46e4a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46e4a2: /* 46e4a2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e4a6: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e4a9: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46e4aeu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46e4ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46e4b1: mov eax, esi */
  eax = esi;
/* 46e4b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e4b4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46e4bb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e4bc: ret  */
  esp += 4; SPILL(); return;
}

void f_46e4bd(void) {
  LOAD_REGS();
L_46e4bd: /* 46e4bd: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 46e4c2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46e4c7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46e4c7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e4ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e4cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e4cd: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e4d0: call 0x4612ba */
  esp -= 4; W32(esp, 0x46e4d5u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46e4d5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e4d9: mov ecx, 0x4d08c4 */
  ecx = 0x4d08c4u;
/* 46e4de: call 0x464006 */
  esp -= 4; W32(esp, 0x46e4e3u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 46e4e3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46e4e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e4e7: call 0x488d6c */
  esp -= 4; W32(esp, 0x46e4ecu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46e4ec: mov esi, eax */
  esi = eax;
/* 46e4ee: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e4f0: jne 0x46e544 */
  if (!zf) goto L_46e544;
L_46e4f2: /* 46e4f2: mov eax, dword ptr [0x4d10b8] */
  eax = R32((uint32_t)(0x4d10b8u));
/* 46e4f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e4f9: je 0x46e4ff */
  if (zf) goto L_46e4ff;
L_46e4fb: /* 46e4fb: mov esi, eax */
  esi = eax;
/* 46e4fd: jmp 0x46e544 */
  goto L_46e544;
L_46e4ff: /* 46e4ff: push 0x4d10b8 */
  { uint32_t v = 0x4d10b8u; esp -= 4; W32(esp, v); }
/* 46e504: call 0x46b2b2 */
  esp -= 4; W32(esp, 0x46e509u); SPILL(); f_46b2b2(); if (g_unwind) return; RELOAD();
/* 46e509: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e50c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e50d: jne 0x46e52b */
  if (!zf) goto L_46e52b;
L_46e50f: /* 46e50f: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 46e514: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46e517: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46e51du); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46e51d: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 46e522: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46e525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e526: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46e52bu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46e52b: /* 46e52b: mov eax, dword ptr [0x4d10b8] */
  eax = R32((uint32_t)(0x4d10b8u));
/* 46e530: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e531: mov edi, eax */
  edi = eax;
/* 46e533: mov ecx, edi */
  ecx = edi;
/* 46e535: mov esi, eax */
  esi = eax;
/* 46e537: call 0x461292 */
  esp -= 4; W32(esp, 0x46e53cu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46e53c: mov ecx, edi */
  ecx = edi;
/* 46e53e: call 0x488de4 */
  esp -= 4; W32(esp, 0x46e543u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 46e543: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46e544: /* 46e544: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e548: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e54b: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46e550u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46e550: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46e553: mov eax, esi */
  eax = esi;
/* 46e555: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e556: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46e55d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e55e: ret  */
  esp += 4; SPILL(); return;
}

void f_46e55f(void) {
  LOAD_REGS();
L_46e55f: /* 46e55f: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 46e564: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46e569u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46e569: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e56d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e56f: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e572: call 0x4612ba */
  esp -= 4; W32(esp, 0x46e577u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46e577: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e57b: mov ecx, 0x4d085c */
  ecx = 0x4d085cu;
/* 46e580: call 0x464006 */
  esp -= 4; W32(esp, 0x46e585u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 46e585: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46e588: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e589: call 0x488d6c */
  esp -= 4; W32(esp, 0x46e58eu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46e58e: mov esi, eax */
  esi = eax;
/* 46e590: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e592: jne 0x46e5e6 */
  if (!zf) goto L_46e5e6;
L_46e594: /* 46e594: mov eax, dword ptr [0x4d10bc] */
  eax = R32((uint32_t)(0x4d10bcu));
/* 46e599: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e59b: je 0x46e5a1 */
  if (zf) goto L_46e5a1;
L_46e59d: /* 46e59d: mov esi, eax */
  esi = eax;
/* 46e59f: jmp 0x46e5e6 */
  goto L_46e5e6;
L_46e5a1: /* 46e5a1: push 0x4d10bc */
  { uint32_t v = 0x4d10bcu; esp -= 4; W32(esp, v); }
/* 46e5a6: call 0x46b2fb */
  esp -= 4; W32(esp, 0x46e5abu); SPILL(); f_46b2fb(); if (g_unwind) return; RELOAD();
/* 46e5ab: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e5ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e5af: jne 0x46e5cd */
  if (!zf) goto L_46e5cd;
L_46e5b1: /* 46e5b1: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 46e5b6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46e5b9: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46e5bfu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46e5bf: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 46e5c4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46e5c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e5c8: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46e5cdu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46e5cd: /* 46e5cd: mov eax, dword ptr [0x4d10bc] */
  eax = R32((uint32_t)(0x4d10bcu));
/* 46e5d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e5d3: mov edi, eax */
  edi = eax;
/* 46e5d5: mov ecx, edi */
  ecx = edi;
/* 46e5d7: mov esi, eax */
  esi = eax;
/* 46e5d9: call 0x461292 */
  esp -= 4; W32(esp, 0x46e5deu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46e5de: mov ecx, edi */
  ecx = edi;
/* 46e5e0: call 0x488de4 */
  esp -= 4; W32(esp, 0x46e5e5u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 46e5e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46e5e6: /* 46e5e6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e5ea: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e5ed: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46e5f2u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46e5f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46e5f5: mov eax, esi */
  eax = esi;
/* 46e5f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e5f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46e5ff: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e600: ret  */
  esp += 4; SPILL(); return;
}

void f_46e601(void) {
  LOAD_REGS();
L_46e601: /* 46e601: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 46e606: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46e60bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46e60b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e60e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e60f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e611: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e614: call 0x4612ba */
  esp -= 4; W32(esp, 0x46e619u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46e619: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e61d: mov ecx, 0x4d0ecc */
  ecx = 0x4d0eccu;
/* 46e622: call 0x464006 */
  esp -= 4; W32(esp, 0x46e627u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 46e627: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46e62a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e62b: call 0x488d6c */
  esp -= 4; W32(esp, 0x46e630u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46e630: mov esi, eax */
  esi = eax;
/* 46e632: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e634: jne 0x46e688 */
  if (!zf) goto L_46e688;
L_46e636: /* 46e636: mov eax, dword ptr [0x4d10c0] */
  eax = R32((uint32_t)(0x4d10c0u));
/* 46e63b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e63d: je 0x46e643 */
  if (zf) goto L_46e643;
L_46e63f: /* 46e63f: mov esi, eax */
  esi = eax;
/* 46e641: jmp 0x46e688 */
  goto L_46e688;
L_46e643: /* 46e643: push 0x4d10c0 */
  { uint32_t v = 0x4d10c0u; esp -= 4; W32(esp, v); }
/* 46e648: call 0x464d32 */
  esp -= 4; W32(esp, 0x46e64du); SPILL(); f_464d32(); if (g_unwind) return; RELOAD();
/* 46e64d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e650: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e651: jne 0x46e66f */
  if (!zf) goto L_46e66f;
L_46e653: /* 46e653: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 46e658: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46e65b: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46e661u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46e661: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 46e666: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46e669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e66a: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46e66fu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46e66f: /* 46e66f: mov eax, dword ptr [0x4d10c0] */
  eax = R32((uint32_t)(0x4d10c0u));
/* 46e674: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e675: mov edi, eax */
  edi = eax;
/* 46e677: mov ecx, edi */
  ecx = edi;
/* 46e679: mov esi, eax */
  esi = eax;
/* 46e67b: call 0x461292 */
  esp -= 4; W32(esp, 0x46e680u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46e680: mov ecx, edi */
  ecx = edi;
/* 46e682: call 0x488de4 */
  esp -= 4; W32(esp, 0x46e687u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 46e687: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46e688: /* 46e688: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e68c: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e68f: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46e694u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46e694: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46e697: mov eax, esi */
  eax = esi;
/* 46e699: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e69a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46e6a1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e6a2: ret  */
  esp += 4; SPILL(); return;
}

void f_46e6a3(void) {
  LOAD_REGS();
L_46e6a3: /* 46e6a3: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 46e6a8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46e6adu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46e6ad: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46e6b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e6b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e6b3: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e6b6: call 0x4612ba */
  esp -= 4; W32(esp, 0x46e6bbu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46e6bb: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e6bf: mov ecx, 0x4d0ebc */
  ecx = 0x4d0ebcu;
/* 46e6c4: call 0x464006 */
  esp -= 4; W32(esp, 0x46e6c9u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 46e6c9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46e6cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e6cd: call 0x488d6c */
  esp -= 4; W32(esp, 0x46e6d2u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46e6d2: mov esi, eax */
  esi = eax;
/* 46e6d4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e6d6: jne 0x46e72a */
  if (!zf) goto L_46e72a;
L_46e6d8: /* 46e6d8: mov eax, dword ptr [0x4d10c4] */
  eax = R32((uint32_t)(0x4d10c4u));
/* 46e6dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46e6df: je 0x46e6e5 */
  if (zf) goto L_46e6e5;
L_46e6e1: /* 46e6e1: mov esi, eax */
  esi = eax;
/* 46e6e3: jmp 0x46e72a */
  goto L_46e72a;
L_46e6e5: /* 46e6e5: push 0x4d10c4 */
  { uint32_t v = 0x4d10c4u; esp -= 4; W32(esp, v); }
/* 46e6ea: call 0x464dfe */
  esp -= 4; W32(esp, 0x46e6efu); SPILL(); f_464dfe(); if (g_unwind) return; RELOAD();
/* 46e6ef: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e6f2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46e6f3: jne 0x46e711 */
  if (!zf) goto L_46e711;
L_46e6f5: /* 46e6f5: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 46e6fa: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46e6fd: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46e703u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46e703: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 46e708: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46e70b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46e70c: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46e711u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46e711: /* 46e711: mov eax, dword ptr [0x4d10c4] */
  eax = R32((uint32_t)(0x4d10c4u));
/* 46e716: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e717: mov edi, eax */
  edi = eax;
/* 46e719: mov ecx, edi */
  ecx = edi;
/* 46e71b: mov esi, eax */
  esi = eax;
/* 46e71d: call 0x461292 */
  esp -= 4; W32(esp, 0x46e722u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46e722: mov ecx, edi */
  ecx = edi;
/* 46e724: call 0x488de4 */
  esp -= 4; W32(esp, 0x46e729u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 46e729: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46e72a: /* 46e72a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46e72e: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46e731: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46e736u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46e736: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46e739: mov eax, esi */
  eax = esi;
/* 46e73b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e73c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46e743: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46e744: ret  */
  esp += 4; SPILL(); return;
}

void f_46e745(void) {
  LOAD_REGS();
L_46e745: /* 46e745: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e747: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e748: mov edi, ecx */
  edi = ecx;
/* 46e74a: xor ebx, ebx */
  ebx = 0;
/* 46e74c: cmp byte ptr [edi + 4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46e74f: jne 0x46e756 */
  if (!zf) goto L_46e756;
L_46e751: /* 46e751: call 0x46c732 */
  esp -= 4; W32(esp, 0x46e756u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_46e756: /* 46e756: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 46e75a: cmp byte ptr [esi + 4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46e75d: jne 0x46e766 */
  if (!zf) goto L_46e766;
L_46e75f: /* 46e75f: mov ecx, esi */
  ecx = esi;
/* 46e761: call 0x46c732 */
  esp -= 4; W32(esp, 0x46e766u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_46e766: /* 46e766: cmp dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e768: jne 0x46e776 */
  if (!zf) goto L_46e776;
L_46e76a: /* 46e76a: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e76c: je 0x46e77a */
  if (zf) goto L_46e77a;
L_46e76e: /* 46e76e: xor eax, eax */
  eax = 0;
L_46e770: /* 46e770: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e771: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e773: ret 4 */
  esp += 8; SPILL(); return;
L_46e776: /* 46e776: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e778: je 0x46e76e */
  if (zf) goto L_46e76e;
L_46e77a: /* 46e77a: xor eax, eax */
  eax = 0;
/* 46e77c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46e77d: jmp 0x46e770 */
  goto L_46e770;
}

void f_46e77f(void) {
  LOAD_REGS();
L_46e77f: /* 46e77f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e781: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e782: mov edi, ecx */
  edi = ecx;
/* 46e784: xor ebx, ebx */
  ebx = 0;
/* 46e786: cmp byte ptr [edi + 4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46e789: jne 0x46e790 */
  if (!zf) goto L_46e790;
L_46e78b: /* 46e78b: call 0x46c779 */
  esp -= 4; W32(esp, 0x46e790u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_46e790: /* 46e790: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 46e794: cmp byte ptr [esi + 4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46e797: jne 0x46e7a0 */
  if (!zf) goto L_46e7a0;
L_46e799: /* 46e799: mov ecx, esi */
  ecx = esi;
/* 46e79b: call 0x46c779 */
  esp -= 4; W32(esp, 0x46e7a0u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_46e7a0: /* 46e7a0: cmp dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e7a2: jne 0x46e7b0 */
  if (!zf) goto L_46e7b0;
L_46e7a4: /* 46e7a4: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e7a6: je 0x46e7b4 */
  if (zf) goto L_46e7b4;
L_46e7a8: /* 46e7a8: xor eax, eax */
  eax = 0;
L_46e7aa: /* 46e7aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e7ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e7ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e7ad: ret 4 */
  esp += 8; SPILL(); return;
L_46e7b0: /* 46e7b0: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46e7b2: je 0x46e7a8 */
  if (zf) goto L_46e7a8;
L_46e7b4: /* 46e7b4: xor eax, eax */
  eax = 0;
/* 46e7b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46e7b7: jmp 0x46e7aa */
  goto L_46e7aa;
}

void f_46e7b9(void) {
  LOAD_REGS();
L_46e7b9: /* 46e7b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46e7bb: call 0x467a94 */
  esp -= 4; W32(esp, 0x46e7c0u); SPILL(); f_467a94(); if (g_unwind) return; RELOAD();
/* 46e7c0: ret  */
  esp += 4; SPILL(); return;
}

void f_46e7c1(void) {
  LOAD_REGS();
L_46e7c1: /* 46e7c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e7c2: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46e7c6: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e7c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e7ca: mov esi, ecx */
  esi = ecx;
/* 46e7cc: je 0x46e7f2 */
  if (zf) goto L_46e7f2;
L_46e7ce: /* 46e7ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e7cf: push 0x462325 */
  { uint32_t v = 0x462325u; esp -= 4; W32(esp, v); }
/* 46e7d4: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46e7d7: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46e7d9: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 46e7db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e7dc: call 0x48be30 */
  esp -= 4; W32(esp, 0x46e7e1u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46e7e1: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e7e4: je 0x46e7ed */
  if (zf) goto L_46e7ed;
L_46e7e6: /* 46e7e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e7e7: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46e7ecu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46e7ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e7ed: /* 46e7ed: mov eax, edi */
  eax = edi;
/* 46e7ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e7f0: jmp 0x46e807 */
  goto L_46e807;
L_46e7f2: /* 46e7f2: mov ecx, esi */
  ecx = esi;
/* 46e7f4: call 0x462325 */
  esp -= 4; W32(esp, 0x46e7f9u); SPILL(); f_462325(); if (g_unwind) return; RELOAD();
/* 46e7f9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e7fc: je 0x46e805 */
  if (zf) goto L_46e805;
L_46e7fe: /* 46e7fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e7ff: call 0x461c65 */
  esp -= 4; W32(esp, 0x46e804u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46e804: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e805: /* 46e805: mov eax, esi */
  eax = esi;
L_46e807: /* 46e807: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e808: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e809: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46e80c(void) {
  LOAD_REGS();
L_46e80c: /* 46e80c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e80d: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46e811: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e814: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e815: mov esi, ecx */
  esi = ecx;
/* 46e817: je 0x46e83d */
  if (zf) goto L_46e83d;
L_46e819: /* 46e819: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e81a: push 0x461d2b */
  { uint32_t v = 0x461d2bu; esp -= 4; W32(esp, v); }
/* 46e81f: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46e822: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46e824: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 46e826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e827: call 0x48be30 */
  esp -= 4; W32(esp, 0x46e82cu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46e82c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e82f: je 0x46e838 */
  if (zf) goto L_46e838;
L_46e831: /* 46e831: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e832: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46e837u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46e837: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e838: /* 46e838: mov eax, edi */
  eax = edi;
/* 46e83a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e83b: jmp 0x46e852 */
  goto L_46e852;
L_46e83d: /* 46e83d: mov ecx, esi */
  ecx = esi;
/* 46e83f: call 0x461d2b */
  esp -= 4; W32(esp, 0x46e844u); SPILL(); f_461d2b(); if (g_unwind) return; RELOAD();
/* 46e844: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e847: je 0x46e850 */
  if (zf) goto L_46e850;
L_46e849: /* 46e849: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e84a: call 0x461c65 */
  esp -= 4; W32(esp, 0x46e84fu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46e84f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e850: /* 46e850: mov eax, esi */
  eax = esi;
L_46e852: /* 46e852: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e853: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e854: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46e857(void) {
  LOAD_REGS();
L_46e857: /* 46e857: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e858: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46e85c: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e85f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e860: mov esi, ecx */
  esi = ecx;
/* 46e862: je 0x46e888 */
  if (zf) goto L_46e888;
L_46e864: /* 46e864: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e865: push 0x461360 */
  { uint32_t v = 0x461360u; esp -= 4; W32(esp, v); }
/* 46e86a: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46e86d: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46e86f: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 46e871: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e872: call 0x48be30 */
  esp -= 4; W32(esp, 0x46e877u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46e877: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e87a: je 0x46e883 */
  if (zf) goto L_46e883;
L_46e87c: /* 46e87c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e87d: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46e882u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46e882: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e883: /* 46e883: mov eax, edi */
  eax = edi;
/* 46e885: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e886: jmp 0x46e89d */
  goto L_46e89d;
L_46e888: /* 46e888: mov ecx, esi */
  ecx = esi;
/* 46e88a: call 0x461360 */
  esp -= 4; W32(esp, 0x46e88fu); SPILL(); f_461360(); if (g_unwind) return; RELOAD();
/* 46e88f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e892: je 0x46e89b */
  if (zf) goto L_46e89b;
L_46e894: /* 46e894: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e895: call 0x461c65 */
  esp -= 4; W32(esp, 0x46e89au); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46e89a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e89b: /* 46e89b: mov eax, esi */
  eax = esi;
L_46e89d: /* 46e89d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e89e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e89f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46e8a2(void) {
  LOAD_REGS();
L_46e8a2: /* 46e8a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e8a3: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46e8a7: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e8aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e8ab: mov esi, ecx */
  esi = ecx;
/* 46e8ad: je 0x46e8d3 */
  if (zf) goto L_46e8d3;
L_46e8af: /* 46e8af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e8b0: push 0x46b227 */
  { uint32_t v = 0x46b227u; esp -= 4; W32(esp, v); }
/* 46e8b5: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46e8b8: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46e8ba: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 46e8bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e8bd: call 0x48be30 */
  esp -= 4; W32(esp, 0x46e8c2u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46e8c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e8c5: je 0x46e8ce */
  if (zf) goto L_46e8ce;
L_46e8c7: /* 46e8c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e8c8: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46e8cdu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46e8cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e8ce: /* 46e8ce: mov eax, edi */
  eax = edi;
/* 46e8d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e8d1: jmp 0x46e8e8 */
  goto L_46e8e8;
L_46e8d3: /* 46e8d3: mov ecx, esi */
  ecx = esi;
/* 46e8d5: call 0x46b227 */
  esp -= 4; W32(esp, 0x46e8dau); SPILL(); f_46b227(); if (g_unwind) return; RELOAD();
/* 46e8da: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e8dd: je 0x46e8e6 */
  if (zf) goto L_46e8e6;
L_46e8df: /* 46e8df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e8e0: call 0x461c65 */
  esp -= 4; W32(esp, 0x46e8e5u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46e8e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e8e6: /* 46e8e6: mov eax, esi */
  eax = esi;
L_46e8e8: /* 46e8e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e8e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e8ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46e8ed(void) {
  LOAD_REGS();
L_46e8ed: /* 46e8ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e8ee: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46e8f2: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e8f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e8f6: mov esi, ecx */
  esi = ecx;
/* 46e8f8: je 0x46e91e */
  if (zf) goto L_46e91e;
L_46e8fa: /* 46e8fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e8fb: push 0x46b23d */
  { uint32_t v = 0x46b23du; esp -= 4; W32(esp, v); }
/* 46e900: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46e903: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46e905: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 46e907: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e908: call 0x48be30 */
  esp -= 4; W32(esp, 0x46e90du); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46e90d: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e910: je 0x46e919 */
  if (zf) goto L_46e919;
L_46e912: /* 46e912: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e913: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46e918u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46e918: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e919: /* 46e919: mov eax, edi */
  eax = edi;
/* 46e91b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e91c: jmp 0x46e933 */
  goto L_46e933;
L_46e91e: /* 46e91e: mov ecx, esi */
  ecx = esi;
/* 46e920: call 0x46b23d */
  esp -= 4; W32(esp, 0x46e925u); SPILL(); f_46b23d(); if (g_unwind) return; RELOAD();
/* 46e925: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e928: je 0x46e931 */
  if (zf) goto L_46e931;
L_46e92a: /* 46e92a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e92b: call 0x461c65 */
  esp -= 4; W32(esp, 0x46e930u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46e930: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e931: /* 46e931: mov eax, esi */
  eax = esi;
L_46e933: /* 46e933: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e934: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e935: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46e938(void) {
  LOAD_REGS();
L_46e938: /* 46e938: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e939: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46e93d: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e941: mov esi, ecx */
  esi = ecx;
/* 46e943: je 0x46e969 */
  if (zf) goto L_46e969;
L_46e945: /* 46e945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e946: push 0x46b253 */
  { uint32_t v = 0x46b253u; esp -= 4; W32(esp, v); }
/* 46e94b: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46e94e: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46e950: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 46e952: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e953: call 0x48be30 */
  esp -= 4; W32(esp, 0x46e958u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46e958: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e95b: je 0x46e964 */
  if (zf) goto L_46e964;
L_46e95d: /* 46e95d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46e95e: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46e963u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46e963: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e964: /* 46e964: mov eax, edi */
  eax = edi;
/* 46e966: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46e967: jmp 0x46e97e */
  goto L_46e97e;
L_46e969: /* 46e969: mov ecx, esi */
  ecx = esi;
/* 46e96b: call 0x46b253 */
  esp -= 4; W32(esp, 0x46e970u); SPILL(); f_46b253(); if (g_unwind) return; RELOAD();
/* 46e970: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e973: je 0x46e97c */
  if (zf) goto L_46e97c;
L_46e975: /* 46e975: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e976: call 0x461c65 */
  esp -= 4; W32(esp, 0x46e97bu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46e97b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e97c: /* 46e97c: mov eax, esi */
  eax = esi;
L_46e97e: /* 46e97e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e97f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e980: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46e983(void) {
  LOAD_REGS();
L_46e983: /* 46e983: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e984: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46e988: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e98b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e98c: je 0x46e9b0 */
  if (zf) goto L_46e9b0;
L_46e98e: /* 46e98e: push 0x465136 */
  { uint32_t v = 0x465136u; esp -= 4; W32(esp, v); }
/* 46e993: lea esi, [ecx - 8] */
  esi = (uint32_t)(ecx + 0xfffffff8u);
/* 46e996: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46e998: add ecx, -4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46e99b: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 46e99d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e99e: call 0x48be30 */
  esp -= 4; W32(esp, 0x46e9a3u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46e9a3: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e9a6: je 0x46e9c6 */
  if (zf) goto L_46e9c6;
L_46e9a8: /* 46e9a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e9a9: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46e9aeu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46e9ae: jmp 0x46e9c5 */
  goto L_46e9c5;
L_46e9b0: /* 46e9b0: lea esi, [ecx - 4] */
  esi = (uint32_t)(ecx + 0xfffffffcu);
/* 46e9b3: mov ecx, esi */
  ecx = esi;
/* 46e9b5: call 0x465136 */
  esp -= 4; W32(esp, 0x46e9bau); SPILL(); f_465136(); if (g_unwind) return; RELOAD();
/* 46e9ba: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e9bd: je 0x46e9c6 */
  if (zf) goto L_46e9c6;
L_46e9bf: /* 46e9bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e9c0: call 0x461c65 */
  esp -= 4; W32(esp, 0x46e9c5u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46e9c5: /* 46e9c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46e9c6: /* 46e9c6: mov eax, esi */
  eax = esi;
/* 46e9c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46e9c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46e9ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46e9cd(void) {
  LOAD_REGS();
L_46e9cd: /* 46e9cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46e9ce: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46e9d2: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e9d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e9d6: je 0x46e9fa */
  if (zf) goto L_46e9fa;
L_46e9d8: /* 46e9d8: push 0x46a73e */
  { uint32_t v = 0x46a73eu; esp -= 4; W32(esp, v); }
/* 46e9dd: lea esi, [ecx - 8] */
  esi = (uint32_t)(ecx + 0xfffffff8u);
/* 46e9e0: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46e9e2: add ecx, -4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46e9e5: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 46e9e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46e9e8: call 0x48be30 */
  esp -= 4; W32(esp, 0x46e9edu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46e9ed: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46e9f0: je 0x46ea10 */
  if (zf) goto L_46ea10;
L_46e9f2: /* 46e9f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46e9f3: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46e9f8u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46e9f8: jmp 0x46ea0f */
  goto L_46ea0f;
L_46e9fa: /* 46e9fa: lea esi, [ecx - 4] */
  esi = (uint32_t)(ecx + 0xfffffffcu);
/* 46e9fd: mov ecx, esi */
  ecx = esi;
/* 46e9ff: call 0x46a73e */
  esp -= 4; W32(esp, 0x46ea04u); SPILL(); f_46a73e(); if (g_unwind) return; RELOAD();
/* 46ea04: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ea07: je 0x46ea10 */
  if (zf) goto L_46ea10;
L_46ea09: /* 46ea09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ea0a: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ea0fu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46ea0f: /* 46ea0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ea10: /* 46ea10: mov eax, esi */
  eax = esi;
/* 46ea12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ea13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ea14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ea17(void) {
  LOAD_REGS();
L_46ea17: /* 46ea17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ea18: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46ea1c: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ea1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ea20: je 0x46ea44 */
  if (zf) goto L_46ea44;
L_46ea22: /* 46ea22: push 0x46a753 */
  { uint32_t v = 0x46a753u; esp -= 4; W32(esp, v); }
/* 46ea27: lea esi, [ecx - 8] */
  esi = (uint32_t)(ecx + 0xfffffff8u);
/* 46ea2a: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46ea2c: add ecx, -4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46ea2f: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 46ea31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ea32: call 0x48be30 */
  esp -= 4; W32(esp, 0x46ea37u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46ea37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ea3a: je 0x46ea5a */
  if (zf) goto L_46ea5a;
L_46ea3c: /* 46ea3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ea3d: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ea42u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ea42: jmp 0x46ea59 */
  goto L_46ea59;
L_46ea44: /* 46ea44: lea esi, [ecx - 4] */
  esi = (uint32_t)(ecx + 0xfffffffcu);
/* 46ea47: mov ecx, esi */
  ecx = esi;
/* 46ea49: call 0x46a753 */
  esp -= 4; W32(esp, 0x46ea4eu); SPILL(); f_46a753(); if (g_unwind) return; RELOAD();
/* 46ea4e: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ea51: je 0x46ea5a */
  if (zf) goto L_46ea5a;
L_46ea53: /* 46ea53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ea54: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ea59u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46ea59: /* 46ea59: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ea5a: /* 46ea5a: mov eax, esi */
  eax = esi;
/* 46ea5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ea5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ea5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ea61(void) {
  LOAD_REGS();
L_46ea61: /* 46ea61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ea62: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46ea66: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ea69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ea6a: je 0x46ea8e */
  if (zf) goto L_46ea8e;
L_46ea6c: /* 46ea6c: push 0x467c1a */
  { uint32_t v = 0x467c1au; esp -= 4; W32(esp, v); }
/* 46ea71: lea esi, [ecx - 0xc] */
  esi = (uint32_t)(ecx + 0xfffffff4u);
/* 46ea74: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46ea76: add ecx, -8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46ea79: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 46ea7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ea7c: call 0x48be30 */
  esp -= 4; W32(esp, 0x46ea81u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46ea81: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ea84: je 0x46eaa4 */
  if (zf) goto L_46eaa4;
L_46ea86: /* 46ea86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ea87: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ea8cu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ea8c: jmp 0x46eaa3 */
  goto L_46eaa3;
L_46ea8e: /* 46ea8e: lea esi, [ecx - 8] */
  esi = (uint32_t)(ecx + 0xfffffff8u);
/* 46ea91: mov ecx, esi */
  ecx = esi;
/* 46ea93: call 0x467c1a */
  esp -= 4; W32(esp, 0x46ea98u); SPILL(); f_467c1a(); if (g_unwind) return; RELOAD();
/* 46ea98: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ea9b: je 0x46eaa4 */
  if (zf) goto L_46eaa4;
L_46ea9d: /* 46ea9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ea9e: call 0x461c65 */
  esp -= 4; W32(esp, 0x46eaa3u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46eaa3: /* 46eaa3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46eaa4: /* 46eaa4: mov eax, esi */
  eax = esi;
/* 46eaa6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46eaa7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46eaa8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46eaab(void) {
  LOAD_REGS();
L_46eaab: /* 46eaab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46eaac: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46eab0: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eab3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eab4: je 0x46ead8 */
  if (zf) goto L_46ead8;
L_46eab6: /* 46eab6: push 0x46a768 */
  { uint32_t v = 0x46a768u; esp -= 4; W32(esp, v); }
/* 46eabb: lea esi, [ecx - 0xc] */
  esi = (uint32_t)(ecx + 0xfffffff4u);
/* 46eabe: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46eac0: add ecx, -8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46eac3: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 46eac5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46eac6: call 0x48be30 */
  esp -= 4; W32(esp, 0x46eacbu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46eacb: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eace: je 0x46eaee */
  if (zf) goto L_46eaee;
L_46ead0: /* 46ead0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ead1: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ead6u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ead6: jmp 0x46eaed */
  goto L_46eaed;
L_46ead8: /* 46ead8: lea esi, [ecx - 8] */
  esi = (uint32_t)(ecx + 0xfffffff8u);
/* 46eadb: mov ecx, esi */
  ecx = esi;
/* 46eadd: call 0x46a768 */
  esp -= 4; W32(esp, 0x46eae2u); SPILL(); f_46a768(); if (g_unwind) return; RELOAD();
/* 46eae2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eae5: je 0x46eaee */
  if (zf) goto L_46eaee;
L_46eae7: /* 46eae7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eae8: call 0x461c65 */
  esp -= 4; W32(esp, 0x46eaedu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46eaed: /* 46eaed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46eaee: /* 46eaee: mov eax, esi */
  eax = esi;
/* 46eaf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46eaf1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46eaf2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46eaf5(void) {
  LOAD_REGS();
L_46eaf5: /* 46eaf5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46eaf6: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46eafa: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eafd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eafe: je 0x46eb22 */
  if (zf) goto L_46eb22;
L_46eb00: /* 46eb00: push 0x46a77d */
  { uint32_t v = 0x46a77du; esp -= 4; W32(esp, v); }
/* 46eb05: lea esi, [ecx - 0xc] */
  esi = (uint32_t)(ecx + 0xfffffff4u);
/* 46eb08: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46eb0a: add ecx, -8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46eb0d: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 46eb0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46eb10: call 0x48be30 */
  esp -= 4; W32(esp, 0x46eb15u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46eb15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eb18: je 0x46eb38 */
  if (zf) goto L_46eb38;
L_46eb1a: /* 46eb1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eb1b: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46eb20u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46eb20: jmp 0x46eb37 */
  goto L_46eb37;
L_46eb22: /* 46eb22: lea esi, [ecx - 8] */
  esi = (uint32_t)(ecx + 0xfffffff8u);
/* 46eb25: mov ecx, esi */
  ecx = esi;
/* 46eb27: call 0x46a77d */
  esp -= 4; W32(esp, 0x46eb2cu); SPILL(); f_46a77d(); if (g_unwind) return; RELOAD();
/* 46eb2c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eb2f: je 0x46eb38 */
  if (zf) goto L_46eb38;
L_46eb31: /* 46eb31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eb32: call 0x461c65 */
  esp -= 4; W32(esp, 0x46eb37u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46eb37: /* 46eb37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46eb38: /* 46eb38: mov eax, esi */
  eax = esi;
/* 46eb3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46eb3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46eb3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46eb3f(void) {
  LOAD_REGS();
L_46eb3f: /* 46eb3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46eb40: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46eb44: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eb47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eb48: je 0x46eb6c */
  if (zf) goto L_46eb6c;
L_46eb4a: /* 46eb4a: push 0x46a792 */
  { uint32_t v = 0x46a792u; esp -= 4; W32(esp, v); }
/* 46eb4f: lea esi, [ecx - 0x10] */
  esi = (uint32_t)(ecx + 0xfffffff0u);
/* 46eb52: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46eb54: add ecx, -0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46eb57: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 46eb59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46eb5a: call 0x48be30 */
  esp -= 4; W32(esp, 0x46eb5fu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46eb5f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eb62: je 0x46eb82 */
  if (zf) goto L_46eb82;
L_46eb64: /* 46eb64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eb65: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46eb6au); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46eb6a: jmp 0x46eb81 */
  goto L_46eb81;
L_46eb6c: /* 46eb6c: lea esi, [ecx - 0xc] */
  esi = (uint32_t)(ecx + 0xfffffff4u);
/* 46eb6f: mov ecx, esi */
  ecx = esi;
/* 46eb71: call 0x46a792 */
  esp -= 4; W32(esp, 0x46eb76u); SPILL(); f_46a792(); if (g_unwind) return; RELOAD();
/* 46eb76: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eb79: je 0x46eb82 */
  if (zf) goto L_46eb82;
L_46eb7b: /* 46eb7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eb7c: call 0x461c65 */
  esp -= 4; W32(esp, 0x46eb81u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46eb81: /* 46eb81: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46eb82: /* 46eb82: mov eax, esi */
  eax = esi;
/* 46eb84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46eb85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46eb86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46eb89(void) {
  LOAD_REGS();
L_46eb89: /* 46eb89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46eb8a: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46eb8e: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eb91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eb92: je 0x46ebb6 */
  if (zf) goto L_46ebb6;
L_46eb94: /* 46eb94: push 0x46a7a5 */
  { uint32_t v = 0x46a7a5u; esp -= 4; W32(esp, v); }
/* 46eb99: lea esi, [ecx - 0x10] */
  esi = (uint32_t)(ecx + 0xfffffff0u);
/* 46eb9c: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46eb9e: add ecx, -0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46eba1: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 46eba3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46eba4: call 0x48be30 */
  esp -= 4; W32(esp, 0x46eba9u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46eba9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ebac: je 0x46ebcc */
  if (zf) goto L_46ebcc;
L_46ebae: /* 46ebae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ebaf: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ebb4u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ebb4: jmp 0x46ebcb */
  goto L_46ebcb;
L_46ebb6: /* 46ebb6: lea esi, [ecx - 0xc] */
  esi = (uint32_t)(ecx + 0xfffffff4u);
/* 46ebb9: mov ecx, esi */
  ecx = esi;
/* 46ebbb: call 0x46a7a5 */
  esp -= 4; W32(esp, 0x46ebc0u); SPILL(); f_46a7a5(); if (g_unwind) return; RELOAD();
/* 46ebc0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ebc3: je 0x46ebcc */
  if (zf) goto L_46ebcc;
L_46ebc5: /* 46ebc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ebc6: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ebcbu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46ebcb: /* 46ebcb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ebcc: /* 46ebcc: mov eax, esi */
  eax = esi;
/* 46ebce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ebcf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ebd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ebd3(void) {
  LOAD_REGS();
L_46ebd3: /* 46ebd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ebd4: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46ebd8: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ebdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ebdc: je 0x46ec00 */
  if (zf) goto L_46ec00;
L_46ebde: /* 46ebde: push 0x46a7b8 */
  { uint32_t v = 0x46a7b8u; esp -= 4; W32(esp, v); }
/* 46ebe3: lea esi, [ecx - 0x10] */
  esi = (uint32_t)(ecx + 0xfffffff0u);
/* 46ebe6: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 46ebe8: add ecx, -0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46ebeb: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 46ebed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ebee: call 0x48be30 */
  esp -= 4; W32(esp, 0x46ebf3u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46ebf3: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ebf6: je 0x46ec16 */
  if (zf) goto L_46ec16;
L_46ebf8: /* 46ebf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ebf9: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ebfeu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ebfe: jmp 0x46ec15 */
  goto L_46ec15;
L_46ec00: /* 46ec00: lea esi, [ecx - 0xc] */
  esi = (uint32_t)(ecx + 0xfffffff4u);
/* 46ec03: mov ecx, esi */
  ecx = esi;
/* 46ec05: call 0x46a7b8 */
  esp -= 4; W32(esp, 0x46ec0au); SPILL(); f_46a7b8(); if (g_unwind) return; RELOAD();
/* 46ec0a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ec0d: je 0x46ec16 */
  if (zf) goto L_46ec16;
L_46ec0f: /* 46ec0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ec10: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ec15u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_46ec15: /* 46ec15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ec16: /* 46ec16: mov eax, esi */
  eax = esi;
/* 46ec18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ec19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ec1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ec1d(void) {
  LOAD_REGS();
L_46ec1d: /* 46ec1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ec1f: call 0x4615e2 */
  esp -= 4; W32(esp, 0x46ec24u); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 46ec24: ret  */
  esp += 4; SPILL(); return;
}

void f_46ec25(void) {
  LOAD_REGS();
L_46ec25: /* 46ec25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ec27: call 0x462024 */
  esp -= 4; W32(esp, 0x46ec2cu); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 46ec2c: ret  */
  esp += 4; SPILL(); return;
}

void f_46ec2d(void) {
  LOAD_REGS();
L_46ec2d: /* 46ec2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ec2f: call 0x461fa1 */
  esp -= 4; W32(esp, 0x46ec34u); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 46ec34: ret  */
  esp += 4; SPILL(); return;
}

void f_46ec35(void) {
  LOAD_REGS();
L_46ec35: /* 46ec35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ec37: call 0x46bc30 */
  esp -= 4; W32(esp, 0x46ec3cu); SPILL(); f_46bc30(); if (g_unwind) return; RELOAD();
/* 46ec3c: ret  */
  esp += 4; SPILL(); return;
}

void f_46ec3d(void) {
  LOAD_REGS();
L_46ec3d: /* 46ec3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ec3f: call 0x46bcda */
  esp -= 4; W32(esp, 0x46ec44u); SPILL(); f_46bcda(); if (g_unwind) return; RELOAD();
/* 46ec44: ret  */
  esp += 4; SPILL(); return;
}

void f_46ec45(void) {
  LOAD_REGS();
L_46ec45: /* 46ec45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ec47: call 0x46bd84 */
  esp -= 4; W32(esp, 0x46ec4cu); SPILL(); f_46bd84(); if (g_unwind) return; RELOAD();
/* 46ec4c: ret  */
  esp += 4; SPILL(); return;
}

void f_46ec4d(void) {
  LOAD_REGS();
L_46ec4d: /* 46ec4d: jmp 0x46be2e */
  SPILL(); f_46be2e(); return;
}

void f_46ec52(void) {
  LOAD_REGS();
L_46ec52: /* 46ec52: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ec53: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46ec57: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ec5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ec5b: mov esi, ecx */
  esi = ecx;
/* 46ec5d: je 0x46ec83 */
  if (zf) goto L_46ec83;
L_46ec5f: /* 46ec5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ec60: push 0x46ec4d */
  { uint32_t v = 0x46ec4du; esp -= 4; W32(esp, v); }
/* 46ec65: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46ec68: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46ec6a: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 46ec6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ec6d: call 0x48be30 */
  esp -= 4; W32(esp, 0x46ec72u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46ec72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ec75: je 0x46ec7e */
  if (zf) goto L_46ec7e;
L_46ec77: /* 46ec77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ec78: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ec7du); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ec7d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ec7e: /* 46ec7e: mov eax, edi */
  eax = edi;
/* 46ec80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ec81: jmp 0x46ec98 */
  goto L_46ec98;
L_46ec83: /* 46ec83: mov ecx, esi */
  ecx = esi;
/* 46ec85: call 0x46be2e */
  esp -= 4; W32(esp, 0x46ec8au); SPILL(); f_46be2e(); if (g_unwind) return; RELOAD();
/* 46ec8a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ec8d: je 0x46ec96 */
  if (zf) goto L_46ec96;
L_46ec8f: /* 46ec8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ec90: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ec95u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46ec95: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ec96: /* 46ec96: mov eax, esi */
  eax = esi;
L_46ec98: /* 46ec98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ec99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ec9a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ec9d(void) {
  LOAD_REGS();
L_46ec9d: /* 46ec9d: jmp 0x46be44 */
  SPILL(); f_46be44(); return;
}

void f_46eca2(void) {
  LOAD_REGS();
L_46eca2: /* 46eca2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46eca3: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46eca7: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ecaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ecab: mov esi, ecx */
  esi = ecx;
/* 46ecad: je 0x46ecd3 */
  if (zf) goto L_46ecd3;
L_46ecaf: /* 46ecaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ecb0: push 0x46ec9d */
  { uint32_t v = 0x46ec9du; esp -= 4; W32(esp, v); }
/* 46ecb5: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46ecb8: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46ecba: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 46ecbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ecbd: call 0x48be30 */
  esp -= 4; W32(esp, 0x46ecc2u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46ecc2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ecc5: je 0x46ecce */
  if (zf) goto L_46ecce;
L_46ecc7: /* 46ecc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ecc8: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46eccdu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46eccd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ecce: /* 46ecce: mov eax, edi */
  eax = edi;
/* 46ecd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ecd1: jmp 0x46ece8 */
  goto L_46ece8;
L_46ecd3: /* 46ecd3: mov ecx, esi */
  ecx = esi;
/* 46ecd5: call 0x46be44 */
  esp -= 4; W32(esp, 0x46ecdau); SPILL(); f_46be44(); if (g_unwind) return; RELOAD();
/* 46ecda: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ecdd: je 0x46ece6 */
  if (zf) goto L_46ece6;
L_46ecdf: /* 46ecdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ece0: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ece5u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46ece5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ece6: /* 46ece6: mov eax, esi */
  eax = esi;
L_46ece8: /* 46ece8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ece9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ecea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46eced(void) {
  LOAD_REGS();
L_46eced: /* 46eced: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ecee: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46ecf2: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ecf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ecf6: mov esi, ecx */
  esi = ecx;
/* 46ecf8: je 0x46ed1e */
  if (zf) goto L_46ed1e;
L_46ecfa: /* 46ecfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ecfb: push 0x46ed38 */
  { uint32_t v = 0x46ed38u; esp -= 4; W32(esp, v); }
/* 46ed00: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46ed03: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46ed05: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 46ed07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ed08: call 0x48be30 */
  esp -= 4; W32(esp, 0x46ed0du); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46ed0d: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ed10: je 0x46ed19 */
  if (zf) goto L_46ed19;
L_46ed12: /* 46ed12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ed13: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ed18u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ed18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ed19: /* 46ed19: mov eax, edi */
  eax = edi;
/* 46ed1b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ed1c: jmp 0x46ed33 */
  goto L_46ed33;
L_46ed1e: /* 46ed1e: mov ecx, esi */
  ecx = esi;
/* 46ed20: call 0x46be5a */
  esp -= 4; W32(esp, 0x46ed25u); SPILL(); f_46be5a(); if (g_unwind) return; RELOAD();
/* 46ed25: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ed28: je 0x46ed31 */
  if (zf) goto L_46ed31;
L_46ed2a: /* 46ed2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ed2b: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ed30u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46ed30: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ed31: /* 46ed31: mov eax, esi */
  eax = esi;
L_46ed33: /* 46ed33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ed34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ed35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ed38(void) {
  LOAD_REGS();
L_46ed38: /* 46ed38: jmp 0x46be5a */
  SPILL(); f_46be5a(); return;
}

void f_46ed3d(void) {
  LOAD_REGS();
L_46ed3d: /* 46ed3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ed3f: call 0x46be70 */
  esp -= 4; W32(esp, 0x46ed44u); SPILL(); f_46be70(); if (g_unwind) return; RELOAD();
/* 46ed44: ret  */
  esp += 4; SPILL(); return;
}

void f_46ed45(void) {
  LOAD_REGS();
L_46ed45: /* 46ed45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ed47: call 0x46bf1a */
  esp -= 4; W32(esp, 0x46ed4cu); SPILL(); f_46bf1a(); if (g_unwind) return; RELOAD();
/* 46ed4c: ret  */
  esp += 4; SPILL(); return;
}

void f_46ed4d(void) {
  LOAD_REGS();
L_46ed4d: /* 46ed4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ed4f: call 0x46bfc4 */
  esp -= 4; W32(esp, 0x46ed54u); SPILL(); f_46bfc4(); if (g_unwind) return; RELOAD();
/* 46ed54: ret  */
  esp += 4; SPILL(); return;
}

void f_46ed55(void) {
  LOAD_REGS();
L_46ed55: /* 46ed55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ed57: call 0x46c06e */
  esp -= 4; W32(esp, 0x46ed5cu); SPILL(); f_46c06e(); if (g_unwind) return; RELOAD();
/* 46ed5c: ret  */
  esp += 4; SPILL(); return;
}

void f_46ed5d(void) {
  LOAD_REGS();
L_46ed5d: /* 46ed5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ed5f: call 0x46c118 */
  esp -= 4; W32(esp, 0x46ed64u); SPILL(); f_46c118(); if (g_unwind) return; RELOAD();
/* 46ed64: ret  */
  esp += 4; SPILL(); return;
}

void f_46ed65(void) {
  LOAD_REGS();
L_46ed65: /* 46ed65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ed67: call 0x46c1ec */
  esp -= 4; W32(esp, 0x46ed6cu); SPILL(); f_46c1ec(); if (g_unwind) return; RELOAD();
/* 46ed6c: ret  */
  esp += 4; SPILL(); return;
}

void f_46ed6d(void) {
  LOAD_REGS();
L_46ed6d: /* 46ed6d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ed6e: mov ebp, esp */
  ebp = esp;
/* 46ed70: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46ed73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ed74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ed75: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* 46ed77: mov edi, ecx */
  edi = ecx;
/* 46ed79: call 0x461d6f */
  esp -= 4; W32(esp, 0x46ed7eu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 46ed7e: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 46ed81: cmp esi, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ed84: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ed85: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46ed88: je 0x46ee44 */
  if (zf) goto L_46ee44;
L_46ed8e: /* 46ed8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_46ed8f: /* 46ed8f: xor eax, eax */
  eax = 0;
/* 46ed91: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 46ed94: cmp ax, word ptr [ebp - 4] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46ed98: je 0x46eda5 */
  if (zf) goto L_46eda5;
L_46ed9a: /* 46ed9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ed9b: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 46ed9e: call 0x46b41f */
  esp -= 4; W32(esp, 0x46eda3u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 46eda3: jmp 0x46ee19 */
  goto L_46ee19;
L_46eda5: /* 46eda5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46eda6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46eda7: cmp esi, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46edaa: je 0x46ee26 */
  if (zf) goto L_46ee26;
L_46edac: /* 46edac: xor eax, eax */
  eax = 0;
/* 46edae: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 46edb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46edb2: call 0x488a88 */
  esp -= 4; W32(esp, 0x46edb7u); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 46edb7: and byte ptr [ebp + 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x20u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x20u), r);
  }
/* 46edbb: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 46edbd: cmp bl, 0x45 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x45u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46edc0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46edc1: mov byte ptr [ebp - 8], bl */
  W8((uint32_t)(ebp + 0xfffffff8u), (ebx & 0xffu));
/* 46edc4: je 0x46edd5 */
  if (zf) goto L_46edd5;
L_46edc6: /* 46edc6: cmp bl, 0x4f */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46edc9: je 0x46edd5 */
  if (zf) goto L_46edd5;
L_46edcb: /* 46edcb: cmp bl, 0x51 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x51u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46edce: je 0x46edd5 */
  if (zf) goto L_46edd5;
L_46edd0: /* 46edd0: cmp bl, 0x23 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x23u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46edd3: jne 0x46edee */
  if (!zf) goto L_46edee;
L_46edd5: /* 46edd5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46edd6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46edd7: cmp esi, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46edda: je 0x46ee2b */
  if (zf) goto L_46ee2b;
L_46eddc: /* 46eddc: xor eax, eax */
  eax = 0;
/* 46edde: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 46ede1: mov byte ptr [ebp + 0x20], bl */
  W8((uint32_t)(ebp + 0x20u), (ebx & 0xffu));
/* 46ede4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ede5: call 0x488a88 */
  esp -= 4; W32(esp, 0x46edeau); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 46edea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46edeb: mov byte ptr [ebp - 8], al */
  W8((uint32_t)(ebp + 0xfffffff8u), (eax & 0xffu));
L_46edee: /* 46edee: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 46edf1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 46edf3: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 46edf6: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46edf9: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 46edfc: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 46edff: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46ee02: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ee05: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46ee08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ee09: mov ecx, edi */
  ecx = edi;
/* 46ee0b: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x46ee0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46ee0e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46ee10: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ee13: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 46ee16: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_46ee19: /* 46ee19: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46ee1a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46ee1b: cmp esi, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ee1e: jne 0x46ed8f */
  if (!zf) goto L_46ed8f;
L_46ee24: /* 46ee24: jmp 0x46ee43 */
  goto L_46ee43;
L_46ee26: /* 46ee26: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 46ee29: jmp 0x46ee3b */
  goto L_46ee3b;
L_46ee2b: /* 46ee2b: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 46ee2e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 46ee31: call 0x46b41f */
  esp -= 4; W32(esp, 0x46ee36u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 46ee36: movsx ax, bl */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu))) & 0xffffu);
/* 46ee3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_46ee3b: /* 46ee3b: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 46ee3e: call 0x46b41f */
  esp -= 4; W32(esp, 0x46ee43u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
L_46ee43: /* 46ee43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_46ee44: /* 46ee44: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46ee47: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46ee4a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46ee4c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 46ee4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ee50: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46ee53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ee54: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ee55: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_46ee58(void) {
  LOAD_REGS();
L_46ee58: /* 46ee58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ee59: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46ee5d: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ee60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ee61: mov esi, ecx */
  esi = ecx;
/* 46ee63: je 0x46ee89 */
  if (zf) goto L_46ee89;
L_46ee65: /* 46ee65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ee66: push 0x46c296 */
  { uint32_t v = 0x46c296u; esp -= 4; W32(esp, v); }
/* 46ee6b: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46ee6e: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46ee70: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 46ee72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ee73: call 0x48be30 */
  esp -= 4; W32(esp, 0x46ee78u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46ee78: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ee7b: je 0x46ee84 */
  if (zf) goto L_46ee84;
L_46ee7d: /* 46ee7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ee7e: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ee83u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ee83: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ee84: /* 46ee84: mov eax, edi */
  eax = edi;
/* 46ee86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ee87: jmp 0x46ee9e */
  goto L_46ee9e;
L_46ee89: /* 46ee89: mov ecx, esi */
  ecx = esi;
/* 46ee8b: call 0x46c296 */
  esp -= 4; W32(esp, 0x46ee90u); SPILL(); f_46c296(); if (g_unwind) return; RELOAD();
/* 46ee90: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ee93: je 0x46ee9c */
  if (zf) goto L_46ee9c;
L_46ee95: /* 46ee95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ee96: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ee9bu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46ee9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ee9c: /* 46ee9c: mov eax, esi */
  eax = esi;
L_46ee9e: /* 46ee9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ee9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46eea0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46eea3(void) {
  LOAD_REGS();
L_46eea3: /* 46eea3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46eea4: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46eea8: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eeab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eeac: mov esi, ecx */
  esi = ecx;
/* 46eeae: je 0x46eed4 */
  if (zf) goto L_46eed4;
L_46eeb0: /* 46eeb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46eeb1: push 0x46c2ac */
  { uint32_t v = 0x46c2acu; esp -= 4; W32(esp, v); }
/* 46eeb6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46eeb9: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46eebb: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 46eebd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eebe: call 0x48be30 */
  esp -= 4; W32(esp, 0x46eec3u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46eec3: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eec6: je 0x46eecf */
  if (zf) goto L_46eecf;
L_46eec8: /* 46eec8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46eec9: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46eeceu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46eece: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46eecf: /* 46eecf: mov eax, edi */
  eax = edi;
/* 46eed1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46eed2: jmp 0x46eee9 */
  goto L_46eee9;
L_46eed4: /* 46eed4: mov ecx, esi */
  ecx = esi;
/* 46eed6: call 0x46c2ac */
  esp -= 4; W32(esp, 0x46eedbu); SPILL(); f_46c2ac(); if (g_unwind) return; RELOAD();
/* 46eedb: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eede: je 0x46eee7 */
  if (zf) goto L_46eee7;
L_46eee0: /* 46eee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eee1: call 0x461c65 */
  esp -= 4; W32(esp, 0x46eee6u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46eee6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46eee7: /* 46eee7: mov eax, esi */
  eax = esi;
L_46eee9: /* 46eee9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46eeea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46eeeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46eeee(void) {
  LOAD_REGS();
L_46eeee: /* 46eeee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46eeef: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46eef3: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46eef6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46eef7: mov esi, ecx */
  esi = ecx;
/* 46eef9: je 0x46ef1f */
  if (zf) goto L_46ef1f;
L_46eefb: /* 46eefb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46eefc: push 0x46c2c2 */
  { uint32_t v = 0x46c2c2u; esp -= 4; W32(esp, v); }
/* 46ef01: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46ef04: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46ef06: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 46ef08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ef09: call 0x48be30 */
  esp -= 4; W32(esp, 0x46ef0eu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46ef0e: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ef11: je 0x46ef1a */
  if (zf) goto L_46ef1a;
L_46ef13: /* 46ef13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ef14: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ef19u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ef19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ef1a: /* 46ef1a: mov eax, edi */
  eax = edi;
/* 46ef1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ef1d: jmp 0x46ef34 */
  goto L_46ef34;
L_46ef1f: /* 46ef1f: mov ecx, esi */
  ecx = esi;
/* 46ef21: call 0x46c2c2 */
  esp -= 4; W32(esp, 0x46ef26u); SPILL(); f_46c2c2(); if (g_unwind) return; RELOAD();
/* 46ef26: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ef29: je 0x46ef32 */
  if (zf) goto L_46ef32;
L_46ef2b: /* 46ef2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ef2c: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ef31u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46ef31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ef32: /* 46ef32: mov eax, esi */
  eax = esi;
L_46ef34: /* 46ef34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ef35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ef36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ef39(void) {
  LOAD_REGS();
L_46ef39: /* 46ef39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ef3b: call 0x46c2d8 */
  esp -= 4; W32(esp, 0x46ef40u); SPILL(); f_46c2d8(); if (g_unwind) return; RELOAD();
/* 46ef40: ret  */
  esp += 4; SPILL(); return;
}

void f_46ef41(void) {
  LOAD_REGS();
L_46ef41: /* 46ef41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ef43: call 0x46c3a3 */
  esp -= 4; W32(esp, 0x46ef48u); SPILL(); f_46c3a3(); if (g_unwind) return; RELOAD();
/* 46ef48: ret  */
  esp += 4; SPILL(); return;
}

void f_46ef49(void) {
  LOAD_REGS();
L_46ef49: /* 46ef49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ef4b: call 0x46c467 */
  esp -= 4; W32(esp, 0x46ef50u); SPILL(); f_46c467(); if (g_unwind) return; RELOAD();
/* 46ef50: ret  */
  esp += 4; SPILL(); return;
}

void f_46ef51(void) {
  LOAD_REGS();
L_46ef51: /* 46ef51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ef53: call 0x46c52b */
  esp -= 4; W32(esp, 0x46ef58u); SPILL(); f_46c52b(); if (g_unwind) return; RELOAD();
/* 46ef58: ret  */
  esp += 4; SPILL(); return;
}

void f_46ef59(void) {
  LOAD_REGS();
L_46ef59: /* 46ef59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ef5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46ef5c: mov esi, ecx */
  esi = ecx;
/* 46ef5e: call 0x4624b0 */
  esp -= 4; W32(esp, 0x46ef63u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 46ef63: mov eax, esi */
  eax = esi;
/* 46ef65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ef66: ret  */
  esp += 4; SPILL(); return;
}

void f_46ef67(void) {
  LOAD_REGS();
L_46ef67: /* 46ef67: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46ef6b: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ef6f: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 46ef72: jb 0x46ef79 */
  if (cf) goto L_46ef79;
L_46ef74: /* 46ef74: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ef77: jmp 0x46ef7c */
  goto L_46ef7c;
L_46ef79: /* 46ef79: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_46ef7c: /* 46ef7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46ef7d: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46ef81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ef82: call 0x46ac10 */
  esp -= 4; W32(esp, 0x46ef87u); SPILL(); f_46ac10(); if (g_unwind) return; RELOAD();
/* 46ef87: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46ef8a(void) {
  LOAD_REGS();
L_46ef8a: /* 46ef8a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46ef8e: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ef92: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 46ef95: jb 0x46ef9c */
  if (cf) goto L_46ef9c;
L_46ef97: /* 46ef97: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ef9a: jmp 0x46ef9f */
  goto L_46ef9f;
L_46ef9c: /* 46ef9c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_46ef9f: /* 46ef9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46efa0: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46efa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46efa5: call 0x46ae88 */
  esp -= 4; W32(esp, 0x46efaau); SPILL(); f_46ae88(); if (g_unwind) return; RELOAD();
/* 46efaa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46efad(void) {
  LOAD_REGS();
L_46efad: /* 46efad: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46efb1: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46efb5: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 46efb8: jb 0x46efbf */
  if (cf) goto L_46efbf;
L_46efba: /* 46efba: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46efbd: jmp 0x46efc2 */
  goto L_46efc2;
L_46efbf: /* 46efbf: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_46efc2: /* 46efc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46efc3: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46efc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46efc8: call 0x46aefa */
  esp -= 4; W32(esp, 0x46efcdu); SPILL(); f_46aefa(); if (g_unwind) return; RELOAD();
/* 46efcd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46efd0(void) {
  LOAD_REGS();
L_46efd0: /* 46efd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46efd4: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46efd8: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 46efdb: jb 0x46efe2 */
  if (cf) goto L_46efe2;
L_46efdd: /* 46efdd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46efe0: jmp 0x46efe5 */
  goto L_46efe5;
L_46efe2: /* 46efe2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_46efe5: /* 46efe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46efe6: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46efea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46efeb: call 0x46af6a */
  esp -= 4; W32(esp, 0x46eff0u); SPILL(); f_46af6a(); if (g_unwind) return; RELOAD();
/* 46eff0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46eff3(void) {
  LOAD_REGS();
L_46eff3: /* 46eff3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46eff7: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46effb: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 46effe: jb 0x46f005 */
  if (cf) goto L_46f005;
L_46f000: /* 46f000: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46f003: jmp 0x46f008 */
  goto L_46f008;
L_46f005: /* 46f005: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_46f008: /* 46f008: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46f009: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46f00d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f00e: call 0x46ad40 */
  esp -= 4; W32(esp, 0x46f013u); SPILL(); f_46ad40(); if (g_unwind) return; RELOAD();
/* 46f013: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46f016(void) {
  LOAD_REGS();
L_46f016: /* 46f016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f017: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46f01b: mov esi, ecx */
  esi = ecx;
/* 46f01d: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46f023u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46f023: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f025: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46f029: mov ecx, esi */
  ecx = esi;
/* 46f02b: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46f02f: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46f033: call 0x46aff8 */
  esp -= 4; W32(esp, 0x46f038u); SPILL(); f_46aff8(); if (g_unwind) return; RELOAD();
/* 46f038: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f039: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46f03c(void) {
  LOAD_REGS();
L_46f03c: /* 46f03c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f03d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46f03f: mov esi, ecx */
  esi = ecx;
/* 46f041: call 0x4624b0 */
  esp -= 4; W32(esp, 0x46f046u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 46f046: mov eax, esi */
  eax = esi;
/* 46f048: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f049: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f04c(void) {
  LOAD_REGS();
L_46f04c: /* 46f04c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46f04d: mov ebp, esp */
  ebp = esp;
/* 46f04f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f050: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46f053: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f054: call 0x46adc2 */
  esp -= 4; W32(esp, 0x46f059u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 46f059: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46f05c: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46f05f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46f061: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f062: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f065(void) {
  LOAD_REGS();
L_46f065: /* 46f065: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46f066: mov ebp, esp */
  ebp = esp;
/* 46f068: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f069: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46f06c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f06d: call 0x46adf7 */
  esp -= 4; W32(esp, 0x46f072u); SPILL(); f_46adf7(); if (g_unwind) return; RELOAD();
/* 46f072: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46f075: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46f078: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46f07a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f07b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f07e(void) {
  LOAD_REGS();
L_46f07e: /* 46f07e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46f082: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46f086: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 46f089: jb 0x46f090 */
  if (cf) goto L_46f090;
L_46f08b: /* 46f08b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46f08e: jmp 0x46f093 */
  goto L_46f093;
L_46f090: /* 46f090: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_46f093: /* 46f093: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46f094: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46f098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f099: call 0x46ab73 */
  esp -= 4; W32(esp, 0x46f09eu); SPILL(); f_46ab73(); if (g_unwind) return; RELOAD();
/* 46f09e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46f0a1(void) {
  LOAD_REGS();
L_46f0a1: /* 46f0a1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46f0a5: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46f0a9: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 46f0ac: jb 0x46f0b3 */
  if (cf) goto L_46f0b3;
L_46f0ae: /* 46f0ae: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46f0b1: jmp 0x46f0b6 */
  goto L_46f0b6;
L_46f0b3: /* 46f0b3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_46f0b6: /* 46f0b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46f0b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f0b8: push dword ptr [ecx + 0x14] */
  { uint32_t v = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, v); }
/* 46f0bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46f0bd: call 0x46aff8 */
  esp -= 4; W32(esp, 0x46f0c2u); SPILL(); f_46aff8(); if (g_unwind) return; RELOAD();
/* 46f0c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f0c5(void) {
  LOAD_REGS();
L_46f0c5: /* 46f0c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46f0c6: mov ebp, esp */
  ebp = esp;
/* 46f0c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f0c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f0ca: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46f0cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f0ce: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 46f0d1: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46f0d4: mov ebx, ecx */
  ebx = ecx;
/* 46f0d6: jae 0x46f0dd */
  if (!cf) goto L_46f0dd;
L_46f0d8: /* 46f0d8: call 0x487763 */
  esp -= 4; W32(esp, 0x46f0ddu); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_46f0dd: /* 46f0dd: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 46f0e0: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46f0e2: cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46f0e5: jae 0x46f0ea */
  if (!cf) goto L_46f0ea;
L_46f0e7: /* 46f0e7: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_46f0ea: /* 46f0ea: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46f0ee: jb 0x46f0f5 */
  if (cf) goto L_46f0f5;
L_46f0f0: /* 46f0f0: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 46f0f3: jmp 0x46f0f8 */
  goto L_46f0f8;
L_46f0f5: /* 46f0f5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_46f0f8: /* 46f0f8: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 46f0fb: lea eax, [esi + edi*2] */
  eax = (uint32_t)(esi + edi*2);
/* 46f0fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f0ff: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46f102: mov ecx, ebx */
  ecx = ebx;
/* 46f104: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f107: call 0x46aff8 */
  esp -= 4; W32(esp, 0x46f10cu); SPILL(); f_46aff8(); if (g_unwind) return; RELOAD();
/* 46f10c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f10d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f10e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f10f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46f110: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_46f113(void) {
  LOAD_REGS();
L_46f113: /* 46f113: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f114: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f118: mov esi, ecx */
  esi = ecx;
/* 46f11a: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46f120u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46f120: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f122: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46f126: mov ecx, esi */
  ecx = esi;
/* 46f128: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 46f12b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46f12d: call 0x46aff8 */
  esp -= 4; W32(esp, 0x46f132u); SPILL(); f_46aff8(); if (g_unwind) return; RELOAD();
/* 46f132: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f133: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f136(void) {
  LOAD_REGS();
L_46f136: /* 46f136: mov eax, 0x48c327 */
  eax = 0x48c327u;
/* 46f13b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f140u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f140: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46f143: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f144: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f145: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f146: mov esi, ecx */
  esi = ecx;
/* 46f148: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46f14b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46f14e: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x46f154u); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 46f154: xor edi, edi */
  edi = 0;
/* 46f156: mov ebx, eax */
  ebx = eax;
/* 46f158: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 46f15b: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 46f15e: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 46f161: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 46f164: call 0x4887f7 */
  esp -= 4; W32(esp, 0x46f169u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 46f169: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 46f16c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f16d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f16e: push dword ptr [ebx + 8] */
  { uint32_t v = R32((uint32_t)(ebx + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f171: call 0x46e20c */
  esp -= 4; W32(esp, 0x46f176u); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 46f176: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46f179: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46f17c: call 0x4887f7 */
  esp -= 4; W32(esp, 0x46f181u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 46f181: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 46f184: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f185: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f186: push 0x4c8c60 */
  { uint32_t v = 0x4c8c60u; esp -= 4; W32(esp, v); }
/* 46f18b: call 0x46e20c */
  esp -= 4; W32(esp, 0x46f190u); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 46f190: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46f193: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 46f196: call 0x4887f7 */
  esp -= 4; W32(esp, 0x46f19bu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 46f19b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 46f19e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f19f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f1a0: push 0x4c8c68 */
  { uint32_t v = 0x4c8c68u; esp -= 4; W32(esp, v); }
/* 46f1a5: call 0x46e20c */
  esp -= 4; W32(esp, 0x46f1aau); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 46f1aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f1ad: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 46f1b0: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 46f1b2: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 46f1b4: mov byte ptr [esi + 0xc], al */
  W8((uint32_t)(esi + 0xcu), (eax & 0xffu));
/* 46f1b7: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 46f1ba: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 46f1bc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46f1bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f1c0: mov byte ptr [esi + 0xd], al */
  W8((uint32_t)(esi + 0xdu), (eax & 0xffu));
/* 46f1c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f1c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f1cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f1cc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f1cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f1d0(void) {
  LOAD_REGS();
L_46f1d0: /* 46f1d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f1d3: call 0x468754 */
  esp -= 4; W32(esp, 0x46f1d8u); SPILL(); f_468754(); if (g_unwind) return; RELOAD();
/* 46f1d8: xor edi, edi */
  edi = 0;
/* 46f1da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f1db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f1dc: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46f1e1u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_46f1e1(); return;
}

void f_46f1e1(void) {
  LOAD_REGS();
L_46f1e1: /* 46f1e1: mov eax, 0x48c331 */
  eax = 0x48c331u;
/* 46f1e6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f1ebu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f1eb: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46f1ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f1ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f1f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f1f1: mov esi, ecx */
  esi = ecx;
/* 46f1f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46f1f6: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46f1f9: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x46f1ffu); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 46f1ff: xor ebx, ebx */
  ebx = 0;
/* 46f201: mov edi, eax */
  edi = eax;
/* 46f203: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 46f206: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 46f209: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 46f20c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f20f: call 0x4887f7 */
  esp -= 4; W32(esp, 0x46f214u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 46f214: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 46f217: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f218: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f219: push dword ptr [edi + 8] */
  { uint32_t v = R32((uint32_t)(edi + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f21c: call 0x46e20c */
  esp -= 4; W32(esp, 0x46f221u); SPILL(); f_46e20c(); if (g_unwind) return; RELOAD();
/* 46f221: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46f224: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46f227: call 0x4887f7 */
  esp -= 4; W32(esp, 0x46f22cu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 46f22c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 46f22f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46f232: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f233: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f234: push 0x4c8c60 */
  { uint32_t v = 0x4c8c60u; esp -= 4; W32(esp, v); }
/* 46f239: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 46f23c: call 0x467d22 */
  esp -= 4; W32(esp, 0x46f241u); SPILL(); f_467d22(); if (g_unwind) return; RELOAD();
/* 46f241: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46f244: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 46f247: call 0x4887f7 */
  esp -= 4; W32(esp, 0x46f24cu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 46f24c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 46f24f: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 46f252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f253: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f254: push 0x4c8c68 */
  { uint32_t v = 0x4c8c68u; esp -= 4; W32(esp, v); }
/* 46f259: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 46f25c: call 0x467d22 */
  esp -= 4; W32(esp, 0x46f261u); SPILL(); f_467d22(); if (g_unwind) return; RELOAD();
/* 46f261: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 46f264: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 46f266: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 46f269: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46f26c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f26d: call 0x461d6f */
  esp -= 4; W32(esp, 0x46f272u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 46f272: mov word ptr [esi + 0xc], ax */
  W16((uint32_t)(esi + 0xcu), (eax & 0xffffu));
/* 46f276: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 46f279: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 46f27c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f27d: call 0x461d6f */
  esp -= 4; W32(esp, 0x46f282u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 46f282: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f283: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f284: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f287: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f288: mov word ptr [esi + 0xe], ax */
  W16((uint32_t)(esi + 0xeu), (eax & 0xffffu));
/* 46f28c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f28d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f294: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f295: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f296: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f299(void) {
  LOAD_REGS();
L_46f299: /* 46f299: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f29c: call 0x468754 */
  esp -= 4; W32(esp, 0x46f2a1u); SPILL(); f_468754(); if (g_unwind) return; RELOAD();
/* 46f2a1: xor ebx, ebx */
  ebx = 0;
/* 46f2a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f2a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f2a5: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46f2aau); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_46f2aa(); return;
}

void f_46f2aa(void) {
  LOAD_REGS();
L_46f2aa: /* 46f2aa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46f2ab: mov ebp, esp */
  ebp = esp;
/* 46f2ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f2ae: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 46f2b1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46f2b3: jbe 0x46f2cb */
  if ((cf | zf)) goto L_46f2cb;
L_46f2b5: /* 46f2b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f2b6: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_46f2b9: /* 46f2b9: xor eax, eax */
  eax = 0;
/* 46f2bb: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 46f2bd: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 46f2c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f2c1: call 0x46c6ef */
  esp -= 4; W32(esp, 0x46f2c6u); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
/* 46f2c6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46f2c7: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 46f2c8: jne 0x46f2b9 */
  if (!zf) goto L_46f2b9;
L_46f2ca: /* 46f2ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_46f2cb: /* 46f2cb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46f2ce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46f2d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46f2d3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 46f2d6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46f2d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f2da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46f2db: ret  */
  esp += 4; SPILL(); return;
}

void f_46f2dc(void) {
  LOAD_REGS();
L_46f2dc: /* 46f2dc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46f2dd: mov ebp, esp */
  ebp = esp;
/* 46f2df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f2e0: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 46f2e3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46f2e5: jbe 0x46f303 */
  if ((cf | zf)) goto L_46f303;
L_46f2e7: /* 46f2e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f2e8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_46f2eb: /* 46f2eb: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 46f2ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f2ef: call 0x461d6f */
  esp -= 4; W32(esp, 0x46f2f4u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 46f2f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f2f5: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 46f2f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f2f9: call 0x46b41f */
  esp -= 4; W32(esp, 0x46f2feu); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 46f2fe: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46f2ff: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 46f300: jne 0x46f2eb */
  if (!zf) goto L_46f2eb;
L_46f302: /* 46f302: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_46f303: /* 46f303: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46f306: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46f309: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46f30b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 46f30e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46f311: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f312: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46f313: ret  */
  esp += 4; SPILL(); return;
}

void f_46f314(void) {
  LOAD_REGS();
L_46f314: /* 46f314: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46f315: mov ebp, esp */
  ebp = esp;
/* 46f317: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f318: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 46f31b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46f31d: jbe 0x46f337 */
  if ((cf | zf)) goto L_46f337;
L_46f31f: /* 46f31f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f320: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_46f323: /* 46f323: xor eax, eax */
  eax = 0;
/* 46f325: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 46f328: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 46f32b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f32c: call 0x46b41f */
  esp -= 4; W32(esp, 0x46f331u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 46f331: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46f332: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46f333: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 46f334: jne 0x46f323 */
  if (!zf) goto L_46f323;
L_46f336: /* 46f336: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_46f337: /* 46f337: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46f33a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46f33d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46f33f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 46f342: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46f345: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f346: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46f347: ret  */
  esp += 4; SPILL(); return;
}

void f_46f348(void) {
  LOAD_REGS();
L_46f348: /* 46f348: mov eax, 0x48c27c */
  eax = 0x48c27cu;
/* 46f34d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f352u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f353: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f354: mov esi, ecx */
  esi = ecx;
/* 46f356: xor eax, eax */
  eax = 0;
/* 46f358: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46f35b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 46f35e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f35f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f362: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46f365: mov dword ptr [esi], 0x4c6d18 */
  W32((uint32_t)(esi), 0x4c6d18u);
/* 46f36b: call 0x4623d2 */
  esp -= 4; W32(esp, 0x46f370u); SPILL(); f_4623d2(); if (g_unwind) return; RELOAD();
/* 46f370: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f373: mov eax, esi */
  eax = esi;
/* 46f375: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f376: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f37d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f37e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f381(void) {
  LOAD_REGS();
L_46f381: /* 46f381: mov eax, 0x48c122 */
  eax = 0x48c122u;
/* 46f386: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f38bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f38b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f38c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f38d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46f390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f391: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f396u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f396: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f39a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f39b: call 0x46587a */
  esp -= 4; W32(esp, 0x46f3a0u); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 46f3a0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f3a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f3a5: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46f3a8: mov esi, eax */
  esi = eax;
/* 46f3aa: call 0x461389 */
  esp -= 4; W32(esp, 0x46f3afu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f3af: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46f3b2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f3b4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f3b7: mov ecx, esi */
  ecx = esi;
/* 46f3b9: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x46f3bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46f3bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f3bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f3c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f3c7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f3c8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46f3cb(void) {
  LOAD_REGS();
L_46f3cb: /* 46f3cb: mov eax, 0x48c122 */
  eax = 0x48c122u;
/* 46f3d0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f3d5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f3d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f3d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f3d7: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46f3da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f3db: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f3e0u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f3e0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f3e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f3e5: call 0x46587a */
  esp -= 4; W32(esp, 0x46f3eau); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 46f3ea: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f3ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f3ef: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46f3f2: mov esi, eax */
  esi = eax;
/* 46f3f4: call 0x461389 */
  esp -= 4; W32(esp, 0x46f3f9u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f3f9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f3fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f3fe: mov ecx, esi */
  ecx = esi;
/* 46f400: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x46f403u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46f403: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f406: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f407: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f40e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f40f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f412(void) {
  LOAD_REGS();
L_46f412: /* 46f412: mov eax, 0x48c122 */
  eax = 0x48c122u;
/* 46f417: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f41cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f41c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f41d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f41e: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46f421: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f422: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f427u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f427: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f42b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f42c: call 0x46591c */
  esp -= 4; W32(esp, 0x46f431u); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 46f431: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f435: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f436: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46f439: mov esi, eax */
  esi = eax;
/* 46f43b: call 0x461389 */
  esp -= 4; W32(esp, 0x46f440u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f440: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46f443: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f445: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f448: mov ecx, esi */
  ecx = esi;
/* 46f44a: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x46f44du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46f44d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f450: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f451: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f458: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f459: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46f45c(void) {
  LOAD_REGS();
L_46f45c: /* 46f45c: mov eax, 0x48c122 */
  eax = 0x48c122u;
/* 46f461: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f466u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f466: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f467: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f468: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46f46b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f46c: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f471u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f471: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f475: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f476: call 0x46591c */
  esp -= 4; W32(esp, 0x46f47bu); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 46f47b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f47f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f480: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46f483: mov esi, eax */
  esi = eax;
/* 46f485: call 0x461389 */
  esp -= 4; W32(esp, 0x46f48au); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f48a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f48d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f48f: mov ecx, esi */
  ecx = esi;
/* 46f491: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x46f494u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46f494: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f497: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f498: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f49f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f4a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f4a3(void) {
  LOAD_REGS();
L_46f4a3: /* 46f4a3: mov eax, 0x48c122 */
  eax = 0x48c122u;
/* 46f4a8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f4adu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f4ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f4ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f4af: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46f4b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f4b3: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f4b8u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f4b8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f4bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f4bd: call 0x4659be */
  esp -= 4; W32(esp, 0x46f4c2u); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 46f4c2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f4c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f4c7: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46f4ca: mov esi, eax */
  esi = eax;
/* 46f4cc: call 0x461389 */
  esp -= 4; W32(esp, 0x46f4d1u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f4d1: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46f4d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f4d6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f4d9: mov ecx, esi */
  ecx = esi;
/* 46f4db: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x46f4deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46f4de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f4e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f4e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f4e9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f4ea: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46f4ed(void) {
  LOAD_REGS();
L_46f4ed: /* 46f4ed: mov eax, 0x48c122 */
  eax = 0x48c122u;
/* 46f4f2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f4f7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f4f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f4f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f4f9: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 46f4fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f4fd: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f502u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f502: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f507: call 0x4659be */
  esp -= 4; W32(esp, 0x46f50cu); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 46f50c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f510: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f511: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46f514: mov esi, eax */
  esi = eax;
/* 46f516: call 0x461389 */
  esp -= 4; W32(esp, 0x46f51bu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f51b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f51e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f520: mov ecx, esi */
  ecx = esi;
/* 46f522: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x46f525u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46f525: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f528: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f529: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f530: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f531: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f534(void) {
  LOAD_REGS();
L_46f534: /* 46f534: mov eax, 0x48c34b */
  eax = 0x48c34bu;
/* 46f539: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f53eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f53e: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46f541: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f542: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f543: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f544: mov esi, ecx */
  esi = ecx;
/* 46f546: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46f549: xor ebx, ebx */
  ebx = 0;
/* 46f54b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f54c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f54f: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46f552: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46f555: call 0x462178 */
  esp -= 4; W32(esp, 0x46f55au); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46f55a: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f55d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f560: je 0x46f5e8 */
  if (zf) goto L_46f5e8;
L_46f566: /* 46f566: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46f569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f56a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f56c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f56f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f571: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f576u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f577: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46f57b: call 0x46e235 */
  esp -= 4; W32(esp, 0x46f580u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46f580: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f581: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46f584: mov edi, eax */
  edi = eax;
/* 46f586: call 0x461389 */
  esp -= 4; W32(esp, 0x46f58bu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f58b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f58d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46f590: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f593: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46f595: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46f598: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46f59b: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46f59e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46f5a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f5a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f5a3: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46f5a6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46f5a9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 46f5ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f5ad: mov ecx, edi */
  ecx = edi;
/* 46f5af: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46f5b3: call 0x468be3 */
  esp -= 4; W32(esp, 0x46f5b8u); SPILL(); f_468be3(); if (g_unwind) return; RELOAD();
/* 46f5b8: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f5ba: je 0x46f5e8 */
  if (zf) goto L_46f5e8;
L_46f5bc: /* 46f5bc: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46f5c3: jmp 0x46f5e8 */
  goto L_46f5e8;
L_46f5e8: /* 46f5e8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f5ea: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f5ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f5ee: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f5f1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f5f3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f5f6: call 0x461453 */
  esp -= 4; W32(esp, 0x46f5fbu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46f5fb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f5ff: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f602: call 0x462246 */
  esp -= 4; W32(esp, 0x46f607u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46f607: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f60a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f60b: mov eax, esi */
  eax = esi;
/* 46f60d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f60e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f615: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f616: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f617: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f5c5(void) {
  LOAD_REGS();
L_46f5c5: /* 46f5c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f5c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46f5ca: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46f5cd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f5cf: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46f5d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46f5d4: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46f5d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f5d8: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46f5ddu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46f5dd: mov eax, 0x46f5e3 */
  eax = 0x46f5e3u;
/* 46f5e2: ret  */
  esp += 4; SPILL(); return;
}

void f_46f5e3(void) {
  LOAD_REGS();
L_46f5e3: /* 46f5e3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f5e6: xor ebx, ebx */
  ebx = 0;
/* 46f5e8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f5ea: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f5ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f5ee: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f5f1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f5f3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f5f6: call 0x461453 */
  esp -= 4; W32(esp, 0x46f5fbu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f5e3u: guest_unwind_done(); RELOAD(); goto L_46f5e3; } return; } RELOAD();
/* 46f5fb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f5ff: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f602: call 0x462246 */
  esp -= 4; W32(esp, 0x46f607u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f5e3u: guest_unwind_done(); RELOAD(); goto L_46f5e3; } return; } RELOAD();
/* 46f607: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f60a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f60b: mov eax, esi */
  eax = esi;
/* 46f60d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f60e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f615: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f616: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f617: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f61a(void) {
  LOAD_REGS();
L_46f61a: /* 46f61a: mov eax, 0x48c365 */
  eax = 0x48c365u;
/* 46f61f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f624u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f624: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46f627: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f629: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f62a: mov esi, ecx */
  esi = ecx;
/* 46f62c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46f62f: xor ebx, ebx */
  ebx = 0;
/* 46f631: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f632: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 46f635: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46f638: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46f63b: call 0x462178 */
  esp -= 4; W32(esp, 0x46f640u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46f640: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f643: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f646: je 0x46f6ee */
  if (zf) goto L_46f6ee;
L_46f64c: /* 46f64c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46f64f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f650: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f652: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f655: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f657: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f65cu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f65c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f65d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46f661: call 0x46e235 */
  esp -= 4; W32(esp, 0x46f666u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46f666: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f667: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46f66a: mov edi, eax */
  edi = eax;
/* 46f66c: call 0x461389 */
  esp -= 4; W32(esp, 0x46f671u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f671: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 46f673: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46f676: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 46f67a: and eax, 0xe00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 46f67f: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46f684: je 0x46f691 */
  if (zf) goto L_46f691;
L_46f686: /* 46f686: cmp eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46f68b: movsx edx, word ptr [ebp + 8] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x8u)));
/* 46f68f: jne 0x46f695 */
  if (!zf) goto L_46f695;
L_46f691: /* 46f691: movzx edx, word ptr [ebp + 8] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0x8u)));
L_46f695: /* 46f695: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46f698: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46f69a: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46f69d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46f69e: mov byte ptr [ebp + 8], cl */
  W8((uint32_t)(ebp + 0x8u), (ecx & 0xffu));
/* 46f6a1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f6a4: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46f6a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f6a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f6a9: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 46f6ac: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 46f6af: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46f6b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f6b3: mov ecx, edi */
  ecx = edi;
/* 46f6b5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46f6b9: call 0x468c04 */
  esp -= 4; W32(esp, 0x46f6beu); SPILL(); f_468c04(); if (g_unwind) return; RELOAD();
/* 46f6be: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f6c0: je 0x46f6ee */
  if (zf) goto L_46f6ee;
L_46f6c2: /* 46f6c2: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46f6c9: jmp 0x46f6ee */
  goto L_46f6ee;
L_46f6ee: /* 46f6ee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f6f0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f6f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f6f4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f6f7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f6f9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f6fc: call 0x461453 */
  esp -= 4; W32(esp, 0x46f701u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46f701: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f705: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 46f708: call 0x462246 */
  esp -= 4; W32(esp, 0x46f70du); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46f70d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f710: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f711: mov eax, esi */
  eax = esi;
/* 46f713: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f714: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f71b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f71c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f71d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f6cb(void) {
  LOAD_REGS();
L_46f6cb: /* 46f6cb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f6ce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46f6d0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46f6d3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f6d5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46f6d8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46f6da: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46f6dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f6de: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46f6e3u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46f6e3: mov eax, 0x46f6e9 */
  eax = 0x46f6e9u;
/* 46f6e8: ret  */
  esp += 4; SPILL(); return;
}

void f_46f6e9(void) {
  LOAD_REGS();
L_46f6e9: /* 46f6e9: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f6ec: xor ebx, ebx */
  ebx = 0;
/* 46f6ee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f6f0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f6f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f6f4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f6f7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f6f9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f6fc: call 0x461453 */
  esp -= 4; W32(esp, 0x46f701u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f6e9u: guest_unwind_done(); RELOAD(); goto L_46f6e9; } return; } RELOAD();
/* 46f701: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f705: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 46f708: call 0x462246 */
  esp -= 4; W32(esp, 0x46f70du); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f6e9u: guest_unwind_done(); RELOAD(); goto L_46f6e9; } return; } RELOAD();
/* 46f70d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f710: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f711: mov eax, esi */
  eax = esi;
/* 46f713: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f714: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f71b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f71c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f71d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f720(void) {
  LOAD_REGS();
L_46f720: /* 46f720: mov eax, 0x48c37f */
  eax = 0x48c37fu;
/* 46f725: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f72au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f72a: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46f72d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f72e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f72f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f730: mov esi, ecx */
  esi = ecx;
/* 46f732: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46f735: xor ebx, ebx */
  ebx = 0;
/* 46f737: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f738: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f73b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46f73e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46f741: call 0x462178 */
  esp -= 4; W32(esp, 0x46f746u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46f746: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f749: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f74c: je 0x46f7d6 */
  if (zf) goto L_46f7d6;
L_46f752: /* 46f752: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46f755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f756: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f758: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f75b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f75d: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f762u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f762: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f763: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46f767: call 0x46e235 */
  esp -= 4; W32(esp, 0x46f76cu); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46f76c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f76d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46f770: mov edi, eax */
  edi = eax;
/* 46f772: call 0x461389 */
  esp -= 4; W32(esp, 0x46f777u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f777: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f779: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46f77c: movzx edx, word ptr [ebp + 8] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0x8u)));
/* 46f780: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46f782: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46f785: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46f786: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46f789: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46f78c: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46f78f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f790: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f791: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46f794: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46f797: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 46f79a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f79b: mov ecx, edi */
  ecx = edi;
/* 46f79d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46f7a1: call 0x468c25 */
  esp -= 4; W32(esp, 0x46f7a6u); SPILL(); f_468c25(); if (g_unwind) return; RELOAD();
/* 46f7a6: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f7a8: je 0x46f7d6 */
  if (zf) goto L_46f7d6;
L_46f7aa: /* 46f7aa: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46f7b1: jmp 0x46f7d6 */
  goto L_46f7d6;
L_46f7d6: /* 46f7d6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f7d8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f7db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f7dc: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f7df: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f7e1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f7e4: call 0x461453 */
  esp -= 4; W32(esp, 0x46f7e9u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46f7e9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f7ed: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f7f0: call 0x462246 */
  esp -= 4; W32(esp, 0x46f7f5u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46f7f5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f7f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f7f9: mov eax, esi */
  eax = esi;
/* 46f7fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f7fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f803: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f804: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f805: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f7b3(void) {
  LOAD_REGS();
L_46f7b3: /* 46f7b3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f7b6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46f7b8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46f7bb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f7bd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46f7c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46f7c2: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46f7c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f7c6: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46f7cbu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46f7cb: mov eax, 0x46f7d1 */
  eax = 0x46f7d1u;
/* 46f7d0: ret  */
  esp += 4; SPILL(); return;
}

void f_46f7d1(void) {
  LOAD_REGS();
L_46f7d1: /* 46f7d1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f7d4: xor ebx, ebx */
  ebx = 0;
/* 46f7d6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f7d8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f7db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f7dc: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f7df: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f7e1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f7e4: call 0x461453 */
  esp -= 4; W32(esp, 0x46f7e9u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f7d1u: guest_unwind_done(); RELOAD(); goto L_46f7d1; } return; } RELOAD();
/* 46f7e9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f7ed: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f7f0: call 0x462246 */
  esp -= 4; W32(esp, 0x46f7f5u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f7d1u: guest_unwind_done(); RELOAD(); goto L_46f7d1; } return; } RELOAD();
/* 46f7f5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f7f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f7f9: mov eax, esi */
  eax = esi;
/* 46f7fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f7fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f803: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f804: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f805: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f808(void) {
  LOAD_REGS();
L_46f808: /* 46f808: mov eax, 0x48c399 */
  eax = 0x48c399u;
/* 46f80d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f812u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f812: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46f815: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f816: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f817: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f818: mov esi, ecx */
  esi = ecx;
/* 46f81a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46f81d: xor ebx, ebx */
  ebx = 0;
/* 46f81f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f820: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f823: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46f826: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46f829: call 0x462178 */
  esp -= 4; W32(esp, 0x46f82eu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46f82e: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f831: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f834: je 0x46f8bc */
  if (zf) goto L_46f8bc;
L_46f83a: /* 46f83a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46f83d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f83e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f840: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f843: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f845: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f84au); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f84a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f84b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46f84f: call 0x46e235 */
  esp -= 4; W32(esp, 0x46f854u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46f854: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f855: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46f858: mov edi, eax */
  edi = eax;
/* 46f85a: call 0x461389 */
  esp -= 4; W32(esp, 0x46f85fu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f85f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f861: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46f864: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f867: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46f869: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46f86c: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46f86f: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46f872: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46f875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f876: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f877: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46f87a: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46f87d: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 46f880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f881: mov ecx, edi */
  ecx = edi;
/* 46f883: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46f887: call 0x468c04 */
  esp -= 4; W32(esp, 0x46f88cu); SPILL(); f_468c04(); if (g_unwind) return; RELOAD();
/* 46f88c: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f88e: je 0x46f8bc */
  if (zf) goto L_46f8bc;
L_46f890: /* 46f890: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46f897: jmp 0x46f8bc */
  goto L_46f8bc;
L_46f8bc: /* 46f8bc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f8be: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f8c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f8c2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f8c5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f8c7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f8ca: call 0x461453 */
  esp -= 4; W32(esp, 0x46f8cfu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46f8cf: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f8d3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f8d6: call 0x462246 */
  esp -= 4; W32(esp, 0x46f8dbu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46f8db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f8de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f8df: mov eax, esi */
  eax = esi;
/* 46f8e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f8e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f8e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f8ea: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f8eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f899(void) {
  LOAD_REGS();
L_46f899: /* 46f899: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f89c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46f89e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46f8a1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f8a3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46f8a6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46f8a8: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46f8ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f8ac: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46f8b1u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46f8b1: mov eax, 0x46f8b7 */
  eax = 0x46f8b7u;
/* 46f8b6: ret  */
  esp += 4; SPILL(); return;
}

void f_46f8b7(void) {
  LOAD_REGS();
L_46f8b7: /* 46f8b7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f8ba: xor ebx, ebx */
  ebx = 0;
/* 46f8bc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f8be: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f8c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f8c2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f8c5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f8c7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f8ca: call 0x461453 */
  esp -= 4; W32(esp, 0x46f8cfu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f8b7u: guest_unwind_done(); RELOAD(); goto L_46f8b7; } return; } RELOAD();
/* 46f8cf: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f8d3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f8d6: call 0x462246 */
  esp -= 4; W32(esp, 0x46f8dbu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f8b7u: guest_unwind_done(); RELOAD(); goto L_46f8b7; } return; } RELOAD();
/* 46f8db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f8de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f8df: mov eax, esi */
  eax = esi;
/* 46f8e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f8e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f8e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f8ea: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f8eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f8ee(void) {
  LOAD_REGS();
L_46f8ee: /* 46f8ee: mov eax, 0x48c3b3 */
  eax = 0x48c3b3u;
/* 46f8f3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f8f8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f8f8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46f8fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f8fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f8fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f8fe: mov esi, ecx */
  esi = ecx;
/* 46f900: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46f903: xor ebx, ebx */
  ebx = 0;
/* 46f905: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f906: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f909: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46f90c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46f90f: call 0x462178 */
  esp -= 4; W32(esp, 0x46f914u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46f914: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f917: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f91a: je 0x46f9a2 */
  if (zf) goto L_46f9a2;
L_46f920: /* 46f920: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46f923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f924: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f926: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f929: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f92b: call 0x464a5a */
  esp -= 4; W32(esp, 0x46f930u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46f930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f931: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46f935: call 0x46e235 */
  esp -= 4; W32(esp, 0x46f93au); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46f93a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46f93b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46f93e: mov edi, eax */
  edi = eax;
/* 46f940: call 0x461389 */
  esp -= 4; W32(esp, 0x46f945u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46f945: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f947: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46f94a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46f94d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46f94f: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46f952: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46f955: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46f958: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46f95b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f95c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46f95d: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46f960: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46f963: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 46f966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f967: mov ecx, edi */
  ecx = edi;
/* 46f969: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46f96d: call 0x468c25 */
  esp -= 4; W32(esp, 0x46f972u); SPILL(); f_468c25(); if (g_unwind) return; RELOAD();
/* 46f972: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f974: je 0x46f9a2 */
  if (zf) goto L_46f9a2;
L_46f976: /* 46f976: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46f97d: jmp 0x46f9a2 */
  goto L_46f9a2;
L_46f9a2: /* 46f9a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f9a4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f9a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f9a8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f9ab: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f9ad: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f9b0: call 0x461453 */
  esp -= 4; W32(esp, 0x46f9b5u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46f9b5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f9b9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f9bc: call 0x462246 */
  esp -= 4; W32(esp, 0x46f9c1u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46f9c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f9c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f9c5: mov eax, esi */
  eax = esi;
/* 46f9c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f9c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f9cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f9d0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f9d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f97f(void) {
  LOAD_REGS();
L_46f97f: /* 46f97f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f982: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46f984: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46f987: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f989: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46f98c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46f98e: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46f991: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46f992: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46f997u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46f997: mov eax, 0x46f99d */
  eax = 0x46f99du;
/* 46f99c: ret  */
  esp += 4; SPILL(); return;
}

void f_46f99d(void) {
  LOAD_REGS();
L_46f99d: /* 46f99d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46f9a0: xor ebx, ebx */
  ebx = 0;
/* 46f9a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46f9a4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46f9a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f9a8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46f9ab: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46f9ad: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46f9b0: call 0x461453 */
  esp -= 4; W32(esp, 0x46f9b5u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f99du: guest_unwind_done(); RELOAD(); goto L_46f99d; } return; } RELOAD();
/* 46f9b5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46f9b9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f9bc: call 0x462246 */
  esp -= 4; W32(esp, 0x46f9c1u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46f99du: guest_unwind_done(); RELOAD(); goto L_46f99d; } return; } RELOAD();
/* 46f9c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46f9c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46f9c5: mov eax, esi */
  eax = esi;
/* 46f9c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46f9c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46f9cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46f9d0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46f9d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46f9d4(void) {
  LOAD_REGS();
L_46f9d4: /* 46f9d4: mov eax, 0x48c3cd */
  eax = 0x48c3cdu;
/* 46f9d9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46f9deu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46f9de: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46f9e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46f9e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f9e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46f9e4: mov esi, ecx */
  esi = ecx;
/* 46f9e6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46f9e9: xor ebx, ebx */
  ebx = 0;
/* 46f9eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46f9ec: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46f9ef: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46f9f2: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46f9f5: call 0x462178 */
  esp -= 4; W32(esp, 0x46f9fau); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46f9fa: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46f9fd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fa00: je 0x46fa8b */
  if (zf) goto L_46fa8b;
L_46fa06: /* 46fa06: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46fa09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fa0a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fa0c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fa0f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fa11: call 0x464a5a */
  esp -= 4; W32(esp, 0x46fa16u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46fa16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fa17: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46fa1b: call 0x46e235 */
  esp -= 4; W32(esp, 0x46fa20u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46fa20: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46fa21: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46fa24: mov edi, eax */
  edi = eax;
/* 46fa26: call 0x461389 */
  esp -= 4; W32(esp, 0x46fa2bu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46fa2b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46fa2e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fa30: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46fa33: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46fa36: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46fa38: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46fa3b: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46fa3e: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46fa41: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46fa44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fa45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fa46: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46fa49: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46fa4c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 46fa4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fa50: mov ecx, edi */
  ecx = edi;
/* 46fa52: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46fa56: call 0x468a7e */
  esp -= 4; W32(esp, 0x46fa5bu); SPILL(); f_468a7e(); if (g_unwind) return; RELOAD();
/* 46fa5b: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fa5d: je 0x46fa8b */
  if (zf) goto L_46fa8b;
L_46fa5f: /* 46fa5f: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46fa66: jmp 0x46fa8b */
  goto L_46fa8b;
L_46fa8b: /* 46fa8b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fa8d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fa90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fa91: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fa94: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fa96: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fa99: call 0x461453 */
  esp -= 4; W32(esp, 0x46fa9eu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46fa9e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46faa2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46faa5: call 0x462246 */
  esp -= 4; W32(esp, 0x46faaau); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46faaa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46faad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46faae: mov eax, esi */
  eax = esi;
/* 46fab0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fab1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fab8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fab9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46faba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46fa68(void) {
  LOAD_REGS();
L_46fa68: /* 46fa68: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fa6b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46fa6d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46fa70: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fa72: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46fa75: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46fa77: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46fa7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fa7b: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46fa80u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46fa80: mov eax, 0x46fa86 */
  eax = 0x46fa86u;
/* 46fa85: ret  */
  esp += 4; SPILL(); return;
}

void f_46fa86(void) {
  LOAD_REGS();
L_46fa86: /* 46fa86: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fa89: xor ebx, ebx */
  ebx = 0;
/* 46fa8b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fa8d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fa90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fa91: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fa94: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fa96: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fa99: call 0x461453 */
  esp -= 4; W32(esp, 0x46fa9eu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fa86u: guest_unwind_done(); RELOAD(); goto L_46fa86; } return; } RELOAD();
/* 46fa9e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46faa2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46faa5: call 0x462246 */
  esp -= 4; W32(esp, 0x46faaau); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fa86u: guest_unwind_done(); RELOAD(); goto L_46fa86; } return; } RELOAD();
/* 46faaa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46faad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46faae: mov eax, esi */
  eax = esi;
/* 46fab0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fab1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fab8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fab9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46faba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46fabd(void) {
  LOAD_REGS();
L_46fabd: /* 46fabd: mov eax, 0x48c3e7 */
  eax = 0x48c3e7u;
/* 46fac2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46fac7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46fac7: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46faca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46facb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46facc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46facd: mov esi, ecx */
  esi = ecx;
/* 46facf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46fad2: xor ebx, ebx */
  ebx = 0;
/* 46fad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fad5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fad8: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46fadb: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46fade: call 0x462178 */
  esp -= 4; W32(esp, 0x46fae3u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46fae3: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fae6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fae9: je 0x46fb74 */
  if (zf) goto L_46fb74;
L_46faef: /* 46faef: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46faf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46faf3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46faf5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46faf8: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fafa: call 0x464a5a */
  esp -= 4; W32(esp, 0x46faffu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46faff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fb00: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46fb04: call 0x46e235 */
  esp -= 4; W32(esp, 0x46fb09u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46fb09: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46fb0a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46fb0d: mov edi, eax */
  edi = eax;
/* 46fb0f: call 0x461389 */
  esp -= 4; W32(esp, 0x46fb14u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46fb14: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46fb17: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fb19: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46fb1c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46fb1f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46fb21: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46fb24: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46fb27: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46fb2a: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46fb2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fb2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fb2f: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46fb32: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46fb35: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 46fb38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fb39: mov ecx, edi */
  ecx = edi;
/* 46fb3b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46fb3f: call 0x468c46 */
  esp -= 4; W32(esp, 0x46fb44u); SPILL(); f_468c46(); if (g_unwind) return; RELOAD();
/* 46fb44: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fb46: je 0x46fb74 */
  if (zf) goto L_46fb74;
L_46fb48: /* 46fb48: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46fb4f: jmp 0x46fb74 */
  goto L_46fb74;
L_46fb74: /* 46fb74: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fb76: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fb79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fb7a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fb7d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fb7f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fb82: call 0x461453 */
  esp -= 4; W32(esp, 0x46fb87u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46fb87: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fb8b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fb8e: call 0x462246 */
  esp -= 4; W32(esp, 0x46fb93u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46fb93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fb96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46fb97: mov eax, esi */
  eax = esi;
/* 46fb99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fb9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fba1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fba2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46fba3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46fb51(void) {
  LOAD_REGS();
L_46fb51: /* 46fb51: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fb54: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46fb56: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46fb59: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fb5b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46fb5e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46fb60: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46fb63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fb64: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46fb69u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46fb69: mov eax, 0x46fb6f */
  eax = 0x46fb6fu;
/* 46fb6e: ret  */
  esp += 4; SPILL(); return;
}

void f_46fb6f(void) {
  LOAD_REGS();
L_46fb6f: /* 46fb6f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fb72: xor ebx, ebx */
  ebx = 0;
/* 46fb74: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fb76: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fb79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fb7a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fb7d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fb7f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fb82: call 0x461453 */
  esp -= 4; W32(esp, 0x46fb87u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fb6fu: guest_unwind_done(); RELOAD(); goto L_46fb6f; } return; } RELOAD();
/* 46fb87: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fb8b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fb8e: call 0x462246 */
  esp -= 4; W32(esp, 0x46fb93u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fb6fu: guest_unwind_done(); RELOAD(); goto L_46fb6f; } return; } RELOAD();
/* 46fb93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fb96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46fb97: mov eax, esi */
  eax = esi;
/* 46fb99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fb9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fba1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fba2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46fba3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46fba6(void) {
  LOAD_REGS();
L_46fba6: /* 46fba6: mov eax, 0x48c401 */
  eax = 0x48c401u;
/* 46fbab: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46fbb0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46fbb0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46fbb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fbb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fbb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46fbb6: mov esi, ecx */
  esi = ecx;
/* 46fbb8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46fbbb: xor ebx, ebx */
  ebx = 0;
/* 46fbbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fbbe: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fbc1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46fbc4: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46fbc7: call 0x462178 */
  esp -= 4; W32(esp, 0x46fbccu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46fbcc: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fbcf: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fbd2: je 0x46fc5f */
  if (zf) goto L_46fc5f;
L_46fbd8: /* 46fbd8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46fbdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fbdc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fbde: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fbe1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fbe3: call 0x464a5a */
  esp -= 4; W32(esp, 0x46fbe8u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46fbe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fbe9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46fbed: call 0x46e235 */
  esp -= 4; W32(esp, 0x46fbf2u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46fbf2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46fbf3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46fbf6: mov edi, eax */
  edi = eax;
/* 46fbf8: call 0x461389 */
  esp -= 4; W32(esp, 0x46fbfdu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46fbfd: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 46fc00: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fc02: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46fc05: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46fc07: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46fc0a: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46fc0d: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46fc10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fc11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fc12: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46fc15: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46fc18: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46fc1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fc1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fc1d: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46fc20: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 46fc23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fc24: mov ecx, edi */
  ecx = edi;
/* 46fc26: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46fc2a: call 0x468c6a */
  esp -= 4; W32(esp, 0x46fc2fu); SPILL(); f_468c6a(); if (g_unwind) return; RELOAD();
/* 46fc2f: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fc31: je 0x46fc5f */
  if (zf) goto L_46fc5f;
L_46fc33: /* 46fc33: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46fc3a: jmp 0x46fc5f */
  goto L_46fc5f;
L_46fc5f: /* 46fc5f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fc61: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fc64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fc65: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fc68: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fc6a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fc6d: call 0x461453 */
  esp -= 4; W32(esp, 0x46fc72u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46fc72: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fc76: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fc79: call 0x462246 */
  esp -= 4; W32(esp, 0x46fc7eu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46fc7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fc81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46fc82: mov eax, esi */
  eax = esi;
/* 46fc84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fc85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fc8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fc8d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46fc8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46fc3c(void) {
  LOAD_REGS();
L_46fc3c: /* 46fc3c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fc3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46fc41: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46fc44: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fc46: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46fc49: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46fc4b: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46fc4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fc4f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46fc54u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46fc54: mov eax, 0x46fc5a */
  eax = 0x46fc5au;
/* 46fc59: ret  */
  esp += 4; SPILL(); return;
}

void f_46fc5a(void) {
  LOAD_REGS();
L_46fc5a: /* 46fc5a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fc5d: xor ebx, ebx */
  ebx = 0;
/* 46fc5f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fc61: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fc64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fc65: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fc68: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fc6a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fc6d: call 0x461453 */
  esp -= 4; W32(esp, 0x46fc72u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fc5au: guest_unwind_done(); RELOAD(); goto L_46fc5a; } return; } RELOAD();
/* 46fc72: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fc76: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fc79: call 0x462246 */
  esp -= 4; W32(esp, 0x46fc7eu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fc5au: guest_unwind_done(); RELOAD(); goto L_46fc5a; } return; } RELOAD();
/* 46fc7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fc81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46fc82: mov eax, esi */
  eax = esi;
/* 46fc84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fc85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fc8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fc8d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46fc8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46fc91(void) {
  LOAD_REGS();
L_46fc91: /* 46fc91: mov eax, 0x48c41b */
  eax = 0x48c41bu;
/* 46fc96: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46fc9bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46fc9b: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46fc9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fc9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fca0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46fca1: mov esi, ecx */
  esi = ecx;
/* 46fca3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46fca6: xor ebx, ebx */
  ebx = 0;
/* 46fca8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fca9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fcac: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46fcaf: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46fcb2: call 0x462178 */
  esp -= 4; W32(esp, 0x46fcb7u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46fcb7: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fcba: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fcbd: je 0x46fd4a */
  if (zf) goto L_46fd4a;
L_46fcc3: /* 46fcc3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46fcc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fcc7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fcc9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fccc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fcce: call 0x464a5a */
  esp -= 4; W32(esp, 0x46fcd3u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46fcd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fcd4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46fcd8: call 0x46e235 */
  esp -= 4; W32(esp, 0x46fcddu); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46fcdd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46fcde: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46fce1: mov edi, eax */
  edi = eax;
/* 46fce3: call 0x461389 */
  esp -= 4; W32(esp, 0x46fce8u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46fce8: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 46fceb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fced: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46fcf0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46fcf2: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46fcf5: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46fcf8: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46fcfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fcfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fcfd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46fd00: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46fd03: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46fd06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fd07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fd08: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46fd0b: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 46fd0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fd0f: mov ecx, edi */
  ecx = edi;
/* 46fd11: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46fd15: call 0x468c6a */
  esp -= 4; W32(esp, 0x46fd1au); SPILL(); f_468c6a(); if (g_unwind) return; RELOAD();
/* 46fd1a: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fd1c: je 0x46fd4a */
  if (zf) goto L_46fd4a;
L_46fd1e: /* 46fd1e: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46fd25: jmp 0x46fd4a */
  goto L_46fd4a;
L_46fd4a: /* 46fd4a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fd4c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fd4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fd50: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fd53: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fd55: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fd58: call 0x461453 */
  esp -= 4; W32(esp, 0x46fd5du); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46fd5d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fd61: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fd64: call 0x462246 */
  esp -= 4; W32(esp, 0x46fd69u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46fd69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fd6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46fd6d: mov eax, esi */
  eax = esi;
/* 46fd6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fd70: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fd77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fd78: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46fd79: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46fd27(void) {
  LOAD_REGS();
L_46fd27: /* 46fd27: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fd2a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46fd2c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46fd2f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fd31: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46fd34: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46fd36: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46fd39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fd3a: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46fd3fu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46fd3f: mov eax, 0x46fd45 */
  eax = 0x46fd45u;
/* 46fd44: ret  */
  esp += 4; SPILL(); return;
}

void f_46fd45(void) {
  LOAD_REGS();
L_46fd45: /* 46fd45: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fd48: xor ebx, ebx */
  ebx = 0;
/* 46fd4a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fd4c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fd4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fd50: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fd53: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fd55: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fd58: call 0x461453 */
  esp -= 4; W32(esp, 0x46fd5du); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fd45u: guest_unwind_done(); RELOAD(); goto L_46fd45; } return; } RELOAD();
/* 46fd5d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fd61: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fd64: call 0x462246 */
  esp -= 4; W32(esp, 0x46fd69u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fd45u: guest_unwind_done(); RELOAD(); goto L_46fd45; } return; } RELOAD();
/* 46fd69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fd6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46fd6d: mov eax, esi */
  eax = esi;
/* 46fd6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fd70: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fd77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fd78: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46fd79: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46fd7c(void) {
  LOAD_REGS();
L_46fd7c: /* 46fd7c: mov eax, 0x48c435 */
  eax = 0x48c435u;
/* 46fd81: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46fd86u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46fd86: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46fd89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fd8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fd8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46fd8c: mov esi, ecx */
  esi = ecx;
/* 46fd8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46fd91: xor ebx, ebx */
  ebx = 0;
/* 46fd93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fd94: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fd97: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46fd9a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46fd9d: call 0x462178 */
  esp -= 4; W32(esp, 0x46fda2u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46fda2: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fda5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fda8: je 0x46fe35 */
  if (zf) goto L_46fe35;
L_46fdae: /* 46fdae: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46fdb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fdb2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fdb4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fdb7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fdb9: call 0x464a5a */
  esp -= 4; W32(esp, 0x46fdbeu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46fdbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fdbf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46fdc3: call 0x46e235 */
  esp -= 4; W32(esp, 0x46fdc8u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46fdc8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46fdc9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46fdcc: mov edi, eax */
  edi = eax;
/* 46fdce: call 0x461389 */
  esp -= 4; W32(esp, 0x46fdd3u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46fdd3: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 46fdd6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fdd8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46fddb: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46fddd: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46fde0: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46fde3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46fde6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fde7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fde8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46fdeb: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46fdee: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46fdf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fdf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fdf3: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46fdf6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 46fdf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fdfa: mov ecx, edi */
  ecx = edi;
/* 46fdfc: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46fe00: call 0x468c90 */
  esp -= 4; W32(esp, 0x46fe05u); SPILL(); f_468c90(); if (g_unwind) return; RELOAD();
/* 46fe05: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fe07: je 0x46fe35 */
  if (zf) goto L_46fe35;
L_46fe09: /* 46fe09: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46fe10: jmp 0x46fe35 */
  goto L_46fe35;
L_46fe35: /* 46fe35: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fe37: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fe3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fe3b: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fe3e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fe40: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fe43: call 0x461453 */
  esp -= 4; W32(esp, 0x46fe48u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46fe48: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fe4c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fe4f: call 0x462246 */
  esp -= 4; W32(esp, 0x46fe54u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46fe54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fe57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46fe58: mov eax, esi */
  eax = esi;
/* 46fe5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fe5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fe62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fe63: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46fe64: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46fe12(void) {
  LOAD_REGS();
L_46fe12: /* 46fe12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fe15: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46fe17: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46fe1a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fe1c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46fe1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46fe21: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46fe24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fe25: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46fe2au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46fe2a: mov eax, 0x46fe30 */
  eax = 0x46fe30u;
/* 46fe2f: ret  */
  esp += 4; SPILL(); return;
}

void f_46fe30(void) {
  LOAD_REGS();
L_46fe30: /* 46fe30: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fe33: xor ebx, ebx */
  ebx = 0;
/* 46fe35: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fe37: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fe3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fe3b: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46fe3e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fe40: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fe43: call 0x461453 */
  esp -= 4; W32(esp, 0x46fe48u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fe30u: guest_unwind_done(); RELOAD(); goto L_46fe30; } return; } RELOAD();
/* 46fe48: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fe4c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fe4f: call 0x462246 */
  esp -= 4; W32(esp, 0x46fe54u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46fe30u: guest_unwind_done(); RELOAD(); goto L_46fe30; } return; } RELOAD();
/* 46fe54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fe57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46fe58: mov eax, esi */
  eax = esi;
/* 46fe5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46fe5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46fe62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46fe63: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46fe64: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46fe67(void) {
  LOAD_REGS();
L_46fe67: /* 46fe67: mov eax, 0x48c44f */
  eax = 0x48c44fu;
/* 46fe6c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46fe71u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46fe71: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46fe74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46fe75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fe76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46fe77: mov esi, ecx */
  esi = ecx;
/* 46fe79: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46fe7c: xor ebx, ebx */
  ebx = 0;
/* 46fe7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46fe7f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46fe82: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46fe85: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 46fe88: call 0x462178 */
  esp -= 4; W32(esp, 0x46fe8du); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46fe8d: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46fe90: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46fe93: je 0x46ff1b */
  if (zf) goto L_46ff1b;
L_46fe99: /* 46fe99: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 46fe9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fe9d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fe9f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46fea2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46fea4: call 0x464a5a */
  esp -= 4; W32(esp, 0x46fea9u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46fea9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46feaa: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46feae: call 0x46e235 */
  esp -= 4; W32(esp, 0x46feb3u); SPILL(); f_46e235(); if (g_unwind) return; RELOAD();
/* 46feb3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46feb4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46feb7: mov edi, eax */
  edi = eax;
/* 46feb9: call 0x461389 */
  esp -= 4; W32(esp, 0x46febeu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46febe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46fec0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46fec3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46fec6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46fec8: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46fecb: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 46fece: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46fed1: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46fed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46fed6: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 46fed9: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 46fedc: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 46fedf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46fee0: mov ecx, edi */
  ecx = edi;
/* 46fee2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 46fee6: call 0x468aa2 */
  esp -= 4; W32(esp, 0x46feebu); SPILL(); f_468aa2(); if (g_unwind) return; RELOAD();
/* 46feeb: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46feed: je 0x46ff1b */
  if (zf) goto L_46ff1b;
L_46feef: /* 46feef: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 46fef6: jmp 0x46ff1b */
  goto L_46ff1b;
L_46ff1b: /* 46ff1b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ff1d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46ff20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ff21: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46ff24: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46ff26: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46ff29: call 0x461453 */
  esp -= 4; W32(esp, 0x46ff2eu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46ff2e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46ff32: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46ff35: call 0x462246 */
  esp -= 4; W32(esp, 0x46ff3au); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46ff3a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46ff3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ff3e: mov eax, esi */
  eax = esi;
/* 46ff40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ff41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46ff48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ff49: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ff4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46fef8(void) {
  LOAD_REGS();
L_46fef8: /* 46fef8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 46fefb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46fefd: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46ff00: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46ff02: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46ff05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46ff07: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46ff0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ff0b: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46ff10u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46ff10: mov eax, 0x46ff16 */
  eax = 0x46ff16u;
/* 46ff15: ret  */
  esp += 4; SPILL(); return;
}

void f_46ff16(void) {
  LOAD_REGS();
L_46ff16: /* 46ff16: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 46ff19: xor ebx, ebx */
  ebx = 0;
/* 46ff1b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ff1d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46ff20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ff21: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46ff24: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46ff26: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46ff29: call 0x461453 */
  esp -= 4; W32(esp, 0x46ff2eu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46ff16u: guest_unwind_done(); RELOAD(); goto L_46ff16; } return; } RELOAD();
/* 46ff2e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46ff32: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46ff35: call 0x462246 */
  esp -= 4; W32(esp, 0x46ff3au); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46ff16u: guest_unwind_done(); RELOAD(); goto L_46ff16; } return; } RELOAD();
/* 46ff3a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46ff3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ff3e: mov eax, esi */
  eax = esi;
/* 46ff40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ff41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46ff48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ff49: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ff4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ff4d(void) {
  LOAD_REGS();
L_46ff4d: /* 46ff4d: mov eax, 0x48c461 */
  eax = 0x48c461u;
/* 46ff52: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46ff57u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46ff57: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46ff5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ff5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ff5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ff5d: mov esi, ecx */
  esi = ecx;
/* 46ff5f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46ff62: xor ebx, ebx */
  ebx = 0;
/* 46ff64: xor edi, edi */
  edi = 0;
/* 46ff66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ff67: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 46ff6a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 46ff6d: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 46ff70: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 46ff73: call 0x462178 */
  esp -= 4; W32(esp, 0x46ff78u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46ff78: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46ff7b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46ff7e: je 0x46ffcd */
  if (zf) goto L_46ffcd;
L_46ff80: /* 46ff80: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ff83: je 0x46ffcd */
  if (zf) goto L_46ffcd;
L_46ff85: /* 46ff85: or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_46ff89: /* 46ff89: cmp dword ptr [ebp - 0x18], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ff8d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46ff90: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46ff94: jne 0x46ff9d */
  if (!zf) goto L_46ff9d;
L_46ff96: /* 46ff96: call 0x46567c */
  esp -= 4; W32(esp, 0x46ff9bu); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
/* 46ff9b: jmp 0x46ffa2 */
  goto L_46ffa2;
L_46ff9d: /* 46ff9d: call 0x465c50 */
  esp -= 4; W32(esp, 0x46ffa2u); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
L_46ffa2: /* 46ffa2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ffa5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 46ffa8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46ffab: je 0x46ffcd */
  if (zf) goto L_46ffcd;
L_46ffad: /* 46ffad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ffaf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ffb2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46ffb5: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46ffb9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 46ffbd: call 0x46186f */
  esp -= 4; W32(esp, 0x46ffc2u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 46ffc2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ffc5: jne 0x470034 */
  if (!zf) goto L_470034;
L_46ffc7: /* 46ffc7: or edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 46ffca: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_46ffcd: /* 46ffcd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ffcf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ffd2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46ffd4: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46ffd7: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 46ffda: jne 0x46ffdf */
  if (!zf) goto L_46ffdf;
L_46ffdc: /* 46ffdc: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_46ffdf: /* 46ffdf: mov eax, edi */
  eax = edi;
/* 46ffe1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ffe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ffe3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ffe5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46ffe8: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46ffea: call 0x461453 */
  esp -= 4; W32(esp, 0x46ffefu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46ffef: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fff3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 46fff6: call 0x462246 */
  esp -= 4; W32(esp, 0x46fffbu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46fffb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fffe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ffff: mov eax, esi */
  eax = esi;
/* 470001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470002: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470009: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47000a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47000b: ret 4 */
  esp += 8; SPILL(); return;
L_470034: /* 470034: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470037: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 47003b: jmp 0x46ff89 */
  goto L_46ff89;
}

void f_47000e(void) {
  LOAD_REGS();
L_47000e: /* 47000e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 470011: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470013: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470016: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470018: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47001b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47001d: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470021: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470026u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470026: mov eax, 0x47002c */
  eax = 0x47002cu;
/* 47002b: ret  */
  esp += 4; SPILL(); return;
}

void f_47002c(void) {
  LOAD_REGS();
  goto L_47002c;
L_46ff89: /* 46ff89: cmp dword ptr [ebp - 0x18], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ff8d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46ff90: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46ff94: jne 0x46ff9d */
  if (!zf) goto L_46ff9d;
L_46ff96: /* 46ff96: call 0x46567c */
  esp -= 4; W32(esp, 0x46ff9bu); SPILL(); f_46567c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47002cu: guest_unwind_done(); RELOAD(); goto L_47002c; } return; } RELOAD();
/* 46ff9b: jmp 0x46ffa2 */
  goto L_46ffa2;
L_46ff9d: /* 46ff9d: call 0x465c50 */
  esp -= 4; W32(esp, 0x46ffa2u); SPILL(); f_465c50(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47002cu: guest_unwind_done(); RELOAD(); goto L_47002c; } return; } RELOAD();
L_46ffa2: /* 46ffa2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ffa5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 46ffa8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46ffab: je 0x46ffcd */
  if (zf) goto L_46ffcd;
L_46ffad: /* 46ffad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ffaf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ffb2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46ffb5: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46ffb9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 46ffbd: call 0x46186f */
  esp -= 4; W32(esp, 0x46ffc2u); SPILL(); f_46186f(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47002cu: guest_unwind_done(); RELOAD(); goto L_47002c; } return; } RELOAD();
/* 46ffc2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ffc5: jne 0x470034 */
  if (!zf) goto L_470034;
L_46ffc7: /* 46ffc7: or edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 46ffca: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_46ffcd: /* 46ffcd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ffcf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ffd2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46ffd4: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46ffd7: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 46ffda: jne 0x46ffdf */
  if (!zf) goto L_46ffdf;
L_46ffdc: /* 46ffdc: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_46ffdf: /* 46ffdf: mov eax, edi */
  eax = edi;
/* 46ffe1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ffe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ffe3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ffe5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46ffe8: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46ffea: call 0x461453 */
  esp -= 4; W32(esp, 0x46ffefu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47002cu: guest_unwind_done(); RELOAD(); goto L_47002c; } return; } RELOAD();
/* 46ffef: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46fff3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 46fff6: call 0x462246 */
  esp -= 4; W32(esp, 0x46fffbu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47002cu: guest_unwind_done(); RELOAD(); goto L_47002c; } return; } RELOAD();
/* 46fffb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46fffe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ffff: mov eax, esi */
  eax = esi;
/* 470001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470002: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470009: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47000a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47000b: ret 4 */
  esp += 8; SPILL(); return;
L_47002c: /* 47002c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47002f: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 470032: xor ebx, ebx */
  ebx = 0;
L_470034: /* 470034: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470037: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 47003b: jmp 0x46ff89 */
  goto L_46ff89;
}

void f_470040(void) {
  LOAD_REGS();
L_470040: /* 470040: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 470043: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 470045: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470048: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47004a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47004d: xor ebx, ebx */
  ebx = 0;
/* 47004f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470050: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470053: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470054: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470059u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470059: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47005a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47005b: call 0x48bed8 */
  esp -= 4; W32(esp, 0x470060u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
  SPILL(); f_470060(); return;
}

void f_470060(void) {
  LOAD_REGS();
L_470060: /* 470060: mov eax, 0x48c48d */
  eax = 0x48c48du;
/* 470065: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47006au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47006a: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47006d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47006e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47006f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470070: mov esi, ecx */
  esi = ecx;
/* 470072: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470075: xor ebx, ebx */
  ebx = 0;
/* 470077: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470078: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47007b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47007e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 470081: call 0x462178 */
  esp -= 4; W32(esp, 0x470086u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470086: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470089: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47008c: je 0x470112 */
  if (zf) goto L_470112;
L_470092: /* 470092: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470096: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470098: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47009b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47009d: call 0x464a5a */
  esp -= 4; W32(esp, 0x4700a2u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4700a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4700a3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4700a7: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x4700acu); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 4700ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4700ad: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4700b0: mov edi, eax */
  edi = eax;
/* 4700b2: call 0x461389 */
  esp -= 4; W32(esp, 0x4700b7u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4700b7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4700b9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4700bc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4700bf: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4700c1: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 4700c4: xor ecx, ecx */
  ecx = 0;
/* 4700c6: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 4700ca: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 4700cd: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4700d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4700d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4700d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4700d4: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4700d7: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4700da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4700db: mov ecx, edi */
  ecx = edi;
/* 4700dd: call 0x468be3 */
  esp -= 4; W32(esp, 0x4700e2u); SPILL(); f_468be3(); if (g_unwind) return; RELOAD();
/* 4700e2: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4700e4: je 0x470112 */
  if (zf) goto L_470112;
L_4700e6: /* 4700e6: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4700ed: jmp 0x470112 */
  goto L_470112;
L_470112: /* 470112: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470114: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470118: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47011b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47011d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470120: call 0x461453 */
  esp -= 4; W32(esp, 0x470125u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470125: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470129: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47012c: call 0x462246 */
  esp -= 4; W32(esp, 0x470131u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470131: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470134: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470135: mov eax, esi */
  eax = esi;
/* 470137: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470138: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47013f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470140: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470141: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4700ef(void) {
  LOAD_REGS();
L_4700ef: /* 4700ef: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4700f2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4700f4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4700f7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4700f9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4700fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4700fe: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 470101: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470102: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470107u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470107: mov eax, 0x47010d */
  eax = 0x47010du;
/* 47010c: ret  */
  esp += 4; SPILL(); return;
}

void f_47010d(void) {
  LOAD_REGS();
L_47010d: /* 47010d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470110: xor ebx, ebx */
  ebx = 0;
/* 470112: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470114: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470118: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47011b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47011d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470120: call 0x461453 */
  esp -= 4; W32(esp, 0x470125u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47010du: guest_unwind_done(); RELOAD(); goto L_47010d; } return; } RELOAD();
/* 470125: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470129: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47012c: call 0x462246 */
  esp -= 4; W32(esp, 0x470131u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47010du: guest_unwind_done(); RELOAD(); goto L_47010d; } return; } RELOAD();
/* 470131: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470134: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470135: mov eax, esi */
  eax = esi;
/* 470137: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470138: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47013f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470140: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470141: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470144(void) {
  LOAD_REGS();
L_470144: /* 470144: mov eax, 0x48c4a7 */
  eax = 0x48c4a7u;
/* 470149: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47014eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47014e: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470151: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 470155: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470156: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470157: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470158: mov esi, ecx */
  esi = ecx;
/* 47015a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47015d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47015e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470161: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470164: call 0x462178 */
  esp -= 4; W32(esp, 0x470169u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470169: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47016d: cmp byte ptr [ebp - 0x24], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470171: je 0x47021a */
  if (zf) goto L_47021a;
L_470177: /* 470177: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47017a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47017b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47017d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470180: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470182: call 0x464a5a */
  esp -= 4; W32(esp, 0x470187u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470188: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47018c: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x470191u); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 470191: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470192: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470195: mov ebx, eax */
  ebx = eax;
/* 470197: call 0x461389 */
  esp -= 4; W32(esp, 0x47019cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47019c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47019e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4701a1: mov ecx, dword ptr [ecx + esi + 0xc] */
  ecx = R32((uint32_t)(ecx + esi + 0xcu));
/* 4701a5: and ecx, 0xe00 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe00u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4701ab: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4701b1: je 0x4701bf */
  if (zf) goto L_4701bf;
L_4701b3: /* 4701b3: cmp ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4701b9: movsx edi, word ptr [ebp + 8] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x8u)));
/* 4701bd: jne 0x4701c3 */
  if (!zf) goto L_4701c3;
L_4701bf: /* 4701bf: movzx edi, word ptr [ebp + 8] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0x8u)));
L_4701c3: /* 4701c3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4701c6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4701c8: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 4701cb: xor ecx, ecx */
  ecx = 0;
/* 4701cd: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 4701d1: and byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 4701d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4701d6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4701da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4701db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4701dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4701dd: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4701e0: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4701e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4701e4: mov ecx, ebx */
  ecx = ebx;
/* 4701e6: call 0x468c04 */
  esp -= 4; W32(esp, 0x4701ebu); SPILL(); f_468c04(); if (g_unwind) return; RELOAD();
/* 4701eb: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4701ee: je 0x47021a */
  if (zf) goto L_47021a;
L_4701f0: /* 4701f0: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4701f7: jmp 0x47021a */
  goto L_47021a;
L_47021a: /* 47021a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47021c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47021f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470223: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 470225: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470228: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47022a: call 0x461453 */
  esp -= 4; W32(esp, 0x47022fu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47022f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470233: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470236: call 0x462246 */
  esp -= 4; W32(esp, 0x47023bu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 47023b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47023e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47023f: mov eax, esi */
  eax = esi;
/* 470241: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470242: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470249: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47024a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47024b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4701f9(void) {
  LOAD_REGS();
L_4701f9: /* 4701f9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4701fc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4701fe: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 470201: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470203: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 470206: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 470208: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47020b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47020c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x470211u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 470211: mov eax, 0x470217 */
  eax = 0x470217u;
/* 470216: ret  */
  esp += 4; SPILL(); return;
}

void f_470217(void) {
  LOAD_REGS();
L_470217: /* 470217: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47021a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47021c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47021f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470223: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 470225: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 470228: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47022a: call 0x461453 */
  esp -= 4; W32(esp, 0x47022fu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470217u: guest_unwind_done(); RELOAD(); goto L_470217; } return; } RELOAD();
/* 47022f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 470233: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470236: call 0x462246 */
  esp -= 4; W32(esp, 0x47023bu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x470217u: guest_unwind_done(); RELOAD(); goto L_470217; } return; } RELOAD();
/* 47023b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47023e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47023f: mov eax, esi */
  eax = esi;
/* 470241: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 470242: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470249: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47024a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47024b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47024e(void) {
  LOAD_REGS();
L_47024e: /* 47024e: mov eax, 0x48c4c1 */
  eax = 0x48c4c1u;
/* 470253: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470258u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470258: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47025b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47025c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47025d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47025e: mov esi, ecx */
  esi = ecx;
/* 470260: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 470263: xor ebx, ebx */
  ebx = 0;
/* 470265: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470266: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 470269: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47026c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47026f: call 0x462178 */
  esp -= 4; W32(esp, 0x470274u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470274: cmp byte ptr [ebp - 0x2c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470277: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47027a: je 0x470304 */
  if (zf) goto L_470304;
L_470280: /* 470280: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 470283: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470284: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470286: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470289: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47028b: call 0x464a5a */
  esp -= 4; W32(esp, 0x470290u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470291: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470295: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x47029au); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 47029a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47029b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47029e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4702a1: call 0x461389 */
  esp -= 4; W32(esp, 0x4702a6u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4702a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4702a8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4702ab: movzx edi, word ptr [ebp + 8] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0x8u)));
/* 4702af: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4702b1: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 4702b4: xor ecx, ecx */
  ecx = 0;
/* 4702b6: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 4702ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4702bb: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 4702be: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4702c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4702c3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4702c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4702c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4702c8: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4702cb: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 4702ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4702cf: call 0x468c25 */
  esp -= 4; W32(esp, 0x4702d4u); SPILL(); f_468c25(); if (g_unwind) return; RELOAD();
/* 4702d4: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4702d6: je 0x470304 */
  if (zf) goto L_470304;
L_4702d8: /* 4702d8: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4702df: jmp 0x470304 */
  goto L_470304;
L_470304: /* 470304: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470306: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470309: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47030a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47030d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47030f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470312: call 0x461453 */
  esp -= 4; W32(esp, 0x470317u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 470317: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47031b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 47031e: call 0x462246 */
  esp -= 4; W32(esp, 0x470323u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470323: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470326: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470327: mov eax, esi */
  eax = esi;
/* 470329: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47032a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470331: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470332: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470333: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4702e1(void) {
  LOAD_REGS();
L_4702e1: /* 4702e1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4702e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4702e6: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4702e9: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4702eb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4702ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4702f0: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4702f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4702f4: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4702f9u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4702f9: mov eax, 0x4702ff */
  eax = 0x4702ffu;
/* 4702fe: ret  */
  esp += 4; SPILL(); return;
}

void f_4702ff(void) {
  LOAD_REGS();
L_4702ff: /* 4702ff: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 470302: xor ebx, ebx */
  ebx = 0;
/* 470304: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470306: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470309: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47030a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47030d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47030f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470312: call 0x461453 */
  esp -= 4; W32(esp, 0x470317u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4702ffu: guest_unwind_done(); RELOAD(); goto L_4702ff; } return; } RELOAD();
/* 470317: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47031b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 47031e: call 0x462246 */
  esp -= 4; W32(esp, 0x470323u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4702ffu: guest_unwind_done(); RELOAD(); goto L_4702ff; } return; } RELOAD();
/* 470323: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 470326: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 470327: mov eax, esi */
  eax = esi;
/* 470329: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47032a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470331: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470332: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470333: ret 4 */
  esp += 8; SPILL(); return;
}

void f_470336(void) {
  LOAD_REGS();
L_470336: /* 470336: mov eax, 0x48c4db */
  eax = 0x48c4dbu;
/* 47033b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470340u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470340: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470343: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470344: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470345: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 470346: mov esi, ecx */
  esi = ecx;
/* 470348: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47034b: xor ebx, ebx */
  ebx = 0;
/* 47034d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47034e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470351: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470354: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 470357: call 0x462178 */
  esp -= 4; W32(esp, 0x47035cu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 47035c: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47035f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470362: je 0x4703e8 */
  if (zf) goto L_4703e8;
L_470368: /* 470368: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47036b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47036c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47036e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470371: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470373: call 0x464a5a */
  esp -= 4; W32(esp, 0x470378u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 470378: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470379: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47037d: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x470382u); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 470382: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470383: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 470386: mov edi, eax */
  edi = eax;
/* 470388: call 0x461389 */
  esp -= 4; W32(esp, 0x47038du); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47038d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47038f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470392: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 470395: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 470397: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 47039a: xor ecx, ecx */
  ecx = 0;
/* 47039c: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 4703a0: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 4703a3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4703a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4703a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4703a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4703aa: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4703ad: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4703b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4703b1: mov ecx, edi */
  ecx = edi;
/* 4703b3: call 0x468c04 */
  esp -= 4; W32(esp, 0x4703b8u); SPILL(); f_468c04(); if (g_unwind) return; RELOAD();
/* 4703b8: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4703ba: je 0x4703e8 */
  if (zf) goto L_4703e8;
L_4703bc: /* 4703bc: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4703c3: jmp 0x4703e8 */
  goto L_4703e8;
L_4703e8: /* 4703e8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4703ea: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4703ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4703ee: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4703f1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4703f3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4703f6: call 0x461453 */
  esp -= 4; W32(esp, 0x4703fbu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4703fb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4703ff: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470402: call 0x462246 */
  esp -= 4; W32(esp, 0x470407u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 470407: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47040a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47040b: mov eax, esi */
  eax = esi;
/* 47040d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47040e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470415: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470416: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470417: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4703c5(void) {
  LOAD_REGS();
L_4703c5: /* 4703c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4703c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4703ca: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4703cd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4703cf: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4703d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4703d4: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4703d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4703d8: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4703ddu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4703dd: mov eax, 0x4703e3 */
  eax = 0x4703e3u;
/* 4703e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4703e3(void) {
  LOAD_REGS();
L_4703e3: /* 4703e3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4703e6: xor ebx, ebx */
  ebx = 0;
/* 4703e8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4703ea: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4703ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4703ee: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4703f1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4703f3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4703f6: call 0x461453 */
  esp -= 4; W32(esp, 0x4703fbu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4703e3u: guest_unwind_done(); RELOAD(); goto L_4703e3; } return; } RELOAD();
/* 4703fb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4703ff: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470402: call 0x462246 */
  esp -= 4; W32(esp, 0x470407u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4703e3u: guest_unwind_done(); RELOAD(); goto L_4703e3; } return; } RELOAD();
/* 470407: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47040a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47040b: mov eax, esi */
  eax = esi;
/* 47040d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47040e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 470415: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 470416: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 470417: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47041a(void) {
  LOAD_REGS();
L_47041a: /* 47041a: mov eax, 0x48c4f5 */
  eax = 0x48c4f5u;
/* 47041f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x470424u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 470424: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 470427: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 470428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470429: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47042a: mov esi, ecx */
  esi = ecx;
/* 47042c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47042f: xor ebx, ebx */
  ebx = 0;
/* 470431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 470432: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 470435: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 470438: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47043b: call 0x462178 */
  esp -= 4; W32(esp, 0x470440u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 470440: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 470443: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 470446: je 0x4704cc */
  if (zf) goto L_4704cc;
L_47044c: /* 47044c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47044f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470450: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470452: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 470455: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 470457: call 0x464a5a */
  esp -= 4; W32(esp, 0x47045cu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47045c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47045d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 470461: call 0x46e2d7 */
  esp -= 4; W32(esp, 0x470466u); SPILL(); f_46e2d7(); if (g_unwind) return; RELOAD();
/* 470466: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 470467: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47046a: mov edi, eax */
  edi = eax;
/* 47046c: call 0x461389 */
  esp -= 4; W32(esp, 0x470471u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 470471: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 470473: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 470476: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 470479: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47047b: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 47047e: xor ecx, ecx */
  ecx = 0;
/* 470480: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 470484: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* 470487: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47048b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47048c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47048d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47048e: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 470491: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 470494: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 470495: mov ecx, edi */
  ecx = edi;
/* 470497: call 0x468c25 */
  esp -= 4; W32(esp, 0x47049cu); SPILL(); f_468c25(); if (g_unwind) return; RELOAD();
/* 47049c: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47049e: je 0x4704cc */
  if (zf) goto L_4704cc;
L_4704a0: /* 4704a0: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4704a7: jmp 0x4704cc */
  goto L_4704cc;
L_4704cc: /* 4704cc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4704ce: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4704d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4704d2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4704d5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4704d7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4704da: call 0x461453 */
  esp -= 4; W32(esp, 0x4704dfu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4704df: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4704e3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4704e6: call 0x462246 */
  esp -= 4; W32(esp, 0x4704ebu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 4704eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4704ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4704ef: mov eax, esi */
  eax = esi;
/* 4704f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4704f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4704f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4704fa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4704fb: ret 4 */
  esp += 8; SPILL(); return;
}
