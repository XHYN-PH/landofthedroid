#include "recomp.h"
#include "rec_mod.h"

void f_f8d6b8(void) {
  LOAD_REGS();
L_f8d6b8: /* f8d6b8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* f8d6bf: nop  */
L_f8d6c0: /* f8d6c0: cmp ebx, dword ptr [esi + 0x1e0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8d6c6: jge 0xf8d8c8 */
  if ((sf == of)) goto L_f8d8c8;
L_f8d6cc: /* f8d6cc: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f8d6d2: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f8d6d8: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8d6db: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f8d6dd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8d6df: mov byte ptr [ebp - 0x11], dl */
  W8((uint32_t)(ebp + 0xffffffefu), (edx & 0xffu));
/* f8d6e2: jge 0xf8d87e */
  if ((sf == of)) goto L_f8d87e;
L_f8d6e8: /* f8d6e8: mov edx, dword ptr [esi + 0x1dc] */
  edx = R32((uint32_t)(esi + 0x1dcu));
/* f8d6ee: xor ecx, ecx */
  ecx = 0;
/* f8d6f0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8d6f2: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f8d6f5: xor edx, edx */
  edx = 0;
/* f8d6f7: mov edi, ecx */
  edi = ecx;
/* f8d6f9: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f8d6ff: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8d701: je 0xf8d752 */
  if (zf) goto L_f8d752;
L_f8d703: /* f8d703: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8d705: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xf8d708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d708: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d70a: jne 0xf8d750 */
  if (!zf) goto L_f8d750;
L_f8d70c: /* f8d70c: fild dword ptr [esi + 0x1e4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f8d712: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* f8d718: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f8d71e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8d721: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d722: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d725: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f8d729: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8d72b: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8d731: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8d737: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8d73b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8d73e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d741: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d743: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d744: mov ecx, esi */
  ecx = esi;
/* f8d746: call 0xf717a3 */
  esp -= 4; W32(esp, 0xf8d74bu); SPILL(); f_f717a3(); if (g_unwind) return; RELOAD();
/* f8d74b: jmp 0xf8d87e */
  goto L_f8d87e;
L_f8d750: /* f8d750: xor edx, edx */
  edx = 0;
L_f8d752: /* f8d752: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8d754: je 0xf8d833 */
  if (zf) goto L_f8d833;
L_f8d75a: /* f8d75a: mov al, byte ptr [esi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8d75d: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8d75f: je 0xf8d769 */
  if (zf) goto L_f8d769;
L_f8d761: /* f8d761: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8d763: jne 0xf8d82d */
  if (!zf) goto L_f8d82d;
L_f8d769: /* f8d769: cmp dword ptr [esi + 0x1d4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1d4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8d76f: jne 0xf8d7e8 */
  if (!zf) goto L_f8d7e8;
L_f8d771: /* f8d771: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d774: mov eax, esp */
  eax = esp;
/* f8d776: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f8d779: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d77c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f8d77e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* f8d781: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f8d784: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f8d787: mov eax, esp */
  eax = esp;
/* f8d789: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f8d78c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d78d: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* f8d793: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf8d799u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f8d799: fild dword ptr [esi + 0x1e4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f8d79f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* f8d7a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d7a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8d7aa: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f8d7af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8d7b1: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f8d7b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d7b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d7ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d7bd: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f8d7c1: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8d7c7: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8d7cd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8d7d1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8d7d4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d7d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d7d8: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8d7db: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* f8d7de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d7df: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf8d7e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d7e2: mov byte ptr [esi + 0x30], 3 */
  W8((uint32_t)(esi + 0x30u), 0x3u);
/* f8d7e6: jmp 0xf8d83d */
  goto L_f8d83d;
L_f8d7e8: /* f8d7e8: mov edx, dword ptr [esi + 0x1d0] */
  edx = R32((uint32_t)(esi + 0x1d0u));
/* f8d7ee: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8d7f1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8d7f3: mov dword ptr [ecx + 0x58], edx */
  W32((uint32_t)(ecx + 0x58u), edx);
/* f8d7f6: fild dword ptr [esi + 0x1e4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f8d7fc: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* f8d802: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d805: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f8d809: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8d80f: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8d815: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8d819: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8d81c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d81f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d820: mov edx, dword ptr [esi + 0x1d4] */
  edx = R32((uint32_t)(esi + 0x1d4u));
/* f8d826: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d827: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xf8d82du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8d82d: /* f8d82d: mov byte ptr [esi + 0x30], 3 */
  W8((uint32_t)(esi + 0x30u), 0x3u);
/* f8d831: jmp 0xf8d83d */
  goto L_f8d83d;
L_f8d833: /* f8d833: cmp byte ptr [esi + 0x30], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8d837: jne 0xf8d83d */
  if (!zf) goto L_f8d83d;
L_f8d839: /* f8d839: mov byte ptr [esi + 0x30], 2 */
  W8((uint32_t)(esi + 0x30u), 0x2u);
L_f8d83d: /* f8d83d: fild dword ptr [esi + 0x1e4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f8d843: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* f8d849: mov edx, dword ptr [esi + 0x1d8] */
  edx = R32((uint32_t)(esi + 0x1d8u));
/* f8d84f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8d851: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d854: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f8d858: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f8d85a: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8d860: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8d866: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8d86a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8d86d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d871: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8d874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d876: mov ecx, esi */
  ecx = esi;
/* f8d878: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0xf8d87eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8d87e: /* f8d87e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8d881: mov eax, dword ptr [esi + 0x1e4] */
  eax = R32((uint32_t)(esi + 0x1e4u));
/* f8d887: mov dl, byte ptr [ebp - 0x11] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* f8d88a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8d88c: mov byte ptr [esi + 0x30], dl */
  W8((uint32_t)(esi + 0x30u), (edx & 0xffu));
/* f8d88f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f8d892: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f8d893: jmp 0xf8d6c0 */
  goto L_f8d6c0;
L_f8d8c8: /* f8d8c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d8cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d8cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d8cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d8d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d8d5: mov esp, ebp */
  esp = ebp;
/* f8d8d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d8d8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8d898(void) {
  LOAD_REGS();
L_f8d898: /* f8d898: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8d89b: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8d8a0: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* f8d8a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d8a4: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* f8d8a7: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d8acu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8d8ac(); return;
}

void f_f8d8ac(void) {
  LOAD_REGS();
L_f8d8ac: /* f8d8ac: push 0xfa4b80 */
  { uint32_t v = 0xfa4b80u; esp -= 4; W32(esp, v); }
/* f8d8b1: push 0xfb9bd4 */
  { uint32_t v = 0xfb9bd4u; esp -= 4; W32(esp, v); }
/* f8d8b6: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8d8bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8d8bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d8bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d8c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d8c3: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d8c8u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8d8c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d8cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d8cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d8cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d8d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d8d5: mov esp, ebp */
  esp = ebp;
/* f8d8d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d8d8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8d9c0(void) {
  LOAD_REGS();
L_f8d9c0: /* f8d9c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8d9c1: mov ebp, esp */
  ebp = esp;
/* f8d9c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8d9c5: push 0xf9a4c0 */
  { uint32_t v = 0xf9a4c0u; esp -= 4; W32(esp, v); }
/* f8d9ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8d9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d9d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8d9d8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8d9dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8d9dd: mov esi, ecx */
  esi = ecx;
/* f8d9df: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8d9e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d9e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8d9e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8d9ee: je 0xf8dcf7 */
  if (zf) goto L_f8dcf7;
L_f8d9f4: /* f8d9f4: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8d9fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d9fc: je 0xf8dcf7 */
  if (zf) goto L_f8dcf7;
L_f8da02: /* f8da02: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8da08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8da0a: je 0xf8dcf7 */
  if (zf) goto L_f8dcf7;
L_f8da10: /* f8da10: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8da12: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8da15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8da15: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8da18: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8da1a: mov ecx, esi */
  ecx = esi;
/* f8da1c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8da1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8da1f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8da22: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8da24: mov ecx, esi */
  ecx = esi;
/* f8da26: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8da2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8da2c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8da2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8da31: mov ecx, esi */
  ecx = esi;
/* f8da33: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8da39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8da39: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8da3c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8da3f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8da42: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8da45: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8da48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8da49: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f8da4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8da4d: xor ecx, ecx */
  ecx = 0;
/* f8da4f: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8da52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8da53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8da54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8da55: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f8da5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8da5c: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf8da61u); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f8da61: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8da67: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8da6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8da6e: fidiv dword ptr [esi + 0x1e8] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esi + 0x1e8u)));
/* f8da74: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8da77: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf8da7du); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f8da7d: fld dword ptr [esi + 0xb4] */
  { double v = F32((uint32_t)(esi + 0xb4u)); FPUSH(v); }
/* f8da83: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8da86: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* f8da8c: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8da91u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8da91: fild dword ptr [esi + 0x1dc] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1dcu)); FPUSH(v); }
/* f8da97: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8da9a: mov al, byte ptr [esi + 0x1f0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1f0u))) & 0xffu);
/* f8daa0: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8daa2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8daa5: je 0xf8db03 */
  if (zf) goto L_f8db03;
L_f8daa7: /* f8daa7: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f8daaa: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f8dab0: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f8dab2: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8dab7u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8dab7: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f8dabd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dabe: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8dac3u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8dac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dac4: mov ecx, esi */
  ecx = esi;
/* f8dac6: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf8dac9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8dac9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8dacb: je 0xf8db00 */
  if (zf) goto L_f8db00;
L_f8dacd: /* f8dacd: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f8dad0: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f8dad6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8dad7: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8dadd: fidiv dword ptr [esi + 0x1e8] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esi + 0x1e8u)));
/* f8dae3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dae6: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf8daecu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f8daec: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f8daf2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8daf5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8daf7: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* f8dafa: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f8dafd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_f8db00: /* f8db00: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_f8db03: /* f8db03: xor eax, eax */
  eax = 0;
L_f8db05: /* f8db05: cmp eax, dword ptr [esi + 0x1e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8db0b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f8db0e: jge 0xf8dcf7 */
  if ((sf == of)) goto L_f8dcf7;
L_f8db14: /* f8db14: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f8db1a: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8db1d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f8db1f: cmp eax, dword ptr [esi + 0x1ec] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1ecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8db25: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f8db28: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8db2b: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* f8db2e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8db31: jge 0xf8dcaa */
  if ((sf == of)) goto L_f8dcaa;
L_f8db37: /* f8db37: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8db3a: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* f8db3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8db3f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8db42: jp 0xf8db4b */
  if (pf) goto L_f8db4b;
L_f8db44: /* f8db44: mov edi, 1 */
  edi = 0x1u;
/* f8db49: jmp 0xf8db4d */
  goto L_f8db4d;
L_f8db4b: /* f8db4b: xor edi, edi */
  edi = 0;
L_f8db4d: /* f8db4d: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f8db53: xor edx, edx */
  edx = 0;
/* f8db55: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8db57: je 0xf8dba5 */
  if (zf) goto L_f8dba5;
L_f8db59: /* f8db59: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8db5b: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xf8db5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8db5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8db60: jne 0xf8dba3 */
  if (!zf) goto L_f8dba3;
L_f8db62: /* f8db62: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f8db68: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* f8db6e: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f8db74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8db75: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8db78: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8db7c: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f8db82: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8db85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8db86: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8db89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8db8a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8db8d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8db90: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8db95u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8db95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8db96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8db97: mov ecx, esi */
  ecx = esi;
/* f8db99: call 0xf717a3 */
  esp -= 4; W32(esp, 0xf8db9eu); SPILL(); f_f717a3(); if (g_unwind) return; RELOAD();
/* f8db9e: jmp 0xf8dcaa */
  goto L_f8dcaa;
L_f8dba3: /* f8dba3: xor edx, edx */
  edx = 0;
L_f8dba5: /* f8dba5: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8dba7: je 0xf8dc6c */
  if (zf) goto L_f8dc6c;
L_f8dbad: /* f8dbad: cmp byte ptr [esi + 0x30], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8dbb1: jne 0xf8dc68 */
  if (!zf) goto L_f8dc68;
L_f8dbb7: /* f8dbb7: mov eax, dword ptr [esi + 0x1d4] */
  eax = R32((uint32_t)(esi + 0x1d4u));
/* f8dbbd: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8dbbf: jne 0xf8dc33 */
  if (!zf) goto L_f8dc33;
L_f8dbc1: /* f8dbc1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8dbc4: mov eax, esp */
  eax = esp;
/* f8dbc6: mov dword ptr [ebp - 0x28], esp */
  W32((uint32_t)(ebp + 0xffffffd8u), esp);
/* f8dbc9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8dbcc: mov ecx, esp */
  ecx = esp;
/* f8dbce: mov dword ptr [ebp - 0x28], esp */
  W32((uint32_t)(ebp + 0xffffffd8u), esp);
/* f8dbd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8dbd2: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* f8dbd8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f8dbda: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* f8dbdd: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f8dbe0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f8dbe3: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf8dbe9u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f8dbe9: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f8dbef: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f8dbf5: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* f8dbfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8dbfd: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f8dbff: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f8dc04: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f8dc09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8dc0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8dc0d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8dc10: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8dc14: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f8dc1a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dc1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dc1e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8dc21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8dc22: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8dc25: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* f8dc28: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dc2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dc2c: mov ecx, ebx */
  ecx = ebx;
/* f8dc2e: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf8dc31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8dc31: jmp 0xf8dc68 */
  goto L_f8dc68;
L_f8dc33: /* f8dc33: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f8dc39: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* f8dc3f: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f8dc45: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f8dc47: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8dc4a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8dc4e: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f8dc54: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dc57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8dc58: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8dc5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8dc5c: mov ecx, ebx */
  ecx = ebx;
/* f8dc5e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dc61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dc62: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf8dc68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8dc68: /* f8dc68: mov byte ptr [esi + 0x30], 1 */
  W8((uint32_t)(esi + 0x30u), 0x1u);
L_f8dc6c: /* f8dc6c: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f8dc72: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* f8dc78: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f8dc7e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f8dc80: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8dc83: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8dc87: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f8dc8d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dc90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8dc91: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8dc94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8dc95: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dc98: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8dc9b: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8dca0u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8dca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dca1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8dca2: mov ecx, esi */
  ecx = esi;
/* f8dca4: call dword ptr [edi + 0xc4] */
  { uint32_t t = R32((uint32_t)(edi + 0xc4u)); esp -= 4; W32(esp, 0xf8dcaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8dcaa: /* f8dcaa: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* f8dcad: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8dcb0: mov ecx, dword ptr [esi + 0x1e8] */
  ecx = R32((uint32_t)(esi + 0x1e8u));
/* f8dcb6: mov byte ptr [esi + 0x30], al */
  W8((uint32_t)(esi + 0x30u), (eax & 0xffu));
/* f8dcb9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8dcbc: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f8dcbe: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8dcc1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f8dcc2: jmp 0xf8db05 */
  goto L_f8db05;
L_f8dcf7: /* f8dcf7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8dcfa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8dcfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8dcfc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8dd03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8dd04: mov esp, ebp */
  esp = ebp;
/* f8dd06: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8dd07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8dcc7(void) {
  LOAD_REGS();
L_f8dcc7: /* f8dcc7: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8dcca: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8dccf: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f8dcd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dcd3: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f8dcd6: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8dcdbu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8dcdb(); return;
}

void f_f8dcdb(void) {
  LOAD_REGS();
L_f8dcdb: /* f8dcdb: push 0xfa4bb0 */
  { uint32_t v = 0xfa4bb0u; esp -= 4; W32(esp, v); }
/* f8dce0: push 0xfb9bdc */
  { uint32_t v = 0xfb9bdcu; esp -= 4; W32(esp, v); }
/* f8dce5: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8dcebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8dceb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8dcee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8dcf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8dcf2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8dcf7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8dcf7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8dcfa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8dcfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8dcfc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8dd03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8dd04: mov esp, ebp */
  esp = ebp;
/* f8dd06: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8dd07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8ddf0(void) {
  LOAD_REGS();
L_f8ddf0: /* f8ddf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8ddf1: mov ebp, esp */
  ebp = esp;
/* f8ddf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8ddf5: push 0xf9a4d0 */
  { uint32_t v = 0xf9a4d0u; esp -= 4; W32(esp, v); }
/* f8ddfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8de00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8de01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8de08: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8de0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8de0c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8de0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8de10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8de11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8de14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8de15: mov esi, ecx */
  esi = ecx;
/* f8de17: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8de1e: call 0xf710d7 */
  esp -= 4; W32(esp, 0xf8de23u); SPILL(); f_f710d7(); if (g_unwind) return; RELOAD();
/* f8de23: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8de27: je 0xf8dfd0 */
  if (zf) goto L_f8dfd0;
L_f8de2d: /* f8de2d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8de2f: mov ecx, esi */
  ecx = esi;
/* f8de31: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8de34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8de34: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8de37: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8de39: mov ecx, esi */
  ecx = esi;
/* f8de3b: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8de3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8de3e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8de41: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8de44: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8de46: mov ecx, esi */
  ecx = esi;
/* f8de48: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8de4b: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8de51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8de51: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8de54: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8de56: mov ecx, esi */
  ecx = esi;
/* f8de58: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8de5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8de5e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8de61: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8de63: mov ecx, esi */
  ecx = esi;
/* f8de65: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8de68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8de68: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8de6b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8de6e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f8de71: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f8de77: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* f8de7a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8de7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8de7d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8de80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8de81: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8de84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8de85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8de86: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8de89: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf8de8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8de8f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8de91: mov ecx, esi */
  ecx = esi;
/* f8de93: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8de99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8de99: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8de9c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8de9e: mov ecx, esi */
  ecx = esi;
/* f8dea0: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8dea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8dea6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8dea9: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f8deaf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8deb1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8deb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8deb4: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8deb7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8deb9: mov ecx, esi */
  ecx = esi;
/* f8debb: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8debeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8debe: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8dec1: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8dec4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8dec7: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8decd: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8ded0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8ded2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8ded3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8ded6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ded7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8deda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8dedb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8dede: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8dedf: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf8dee5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8dee5: mov edx, dword ptr [esi + 0x1f8] */
  edx = R32((uint32_t)(esi + 0x1f8u));
/* f8deeb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8deed: je 0xf8dfd0 */
  if (zf) goto L_f8dfd0;
L_f8def3: /* f8def3: mov eax, dword ptr [edx + 0x210] */
  eax = R32((uint32_t)(edx + 0x210u));
/* f8def9: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8deff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8df01: jle 0xf8df05 */
  if ((zf || sf != of)) goto L_f8df05;
L_f8df03: /* f8df03: mov eax, ecx */
  eax = ecx;
L_f8df05: /* f8df05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8df07: jge 0xf8df10 */
  if ((sf == of)) goto L_f8df10;
L_f8df09: /* f8df09: mov eax, 8 */
  eax = 0x8u;
/* f8df0e: jmp 0xf8df16 */
  goto L_f8df16;
L_f8df10: /* f8df10: jle 0xf8dfd0 */
  if ((zf || sf != of)) goto L_f8dfd0;
L_f8df16: /* f8df16: mov ecx, dword ptr [edx + 0xa0] */
  ecx = R32((uint32_t)(edx + 0xa0u));
/* f8df1c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8df1e: je 0xf8dfd0 */
  if (zf) goto L_f8dfd0;
L_f8df24: /* f8df24: mov edi, dword ptr [edx + 0x1e4] */
  edi = R32((uint32_t)(edx + 0x1e4u));
/* f8df2a: mov edx, dword ptr [ecx + 0xa0] */
  edx = R32((uint32_t)(ecx + 0xa0u));
/* f8df30: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* f8df33: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* f8df39: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f8df3b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f8df3d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8df3f: mov ecx, esi */
  ecx = esi;
/* f8df41: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f8df44: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8df4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8df4a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8df4c: mov ecx, esi */
  ecx = esi;
/* f8df4e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8df51: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8df54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8df54: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8df57: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f8df5a: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8df5fu); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8df5f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8df62: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f8df64: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f8df67: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f8df6a: fcomp dword ptr [ebx + 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x40u)));
  FPOP();
/* f8df6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8df6f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8df72: jne 0xf8df95 */
  if (!zf) goto L_f8df95;
L_f8df74: /* f8df74: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8df76: mov ecx, esi */
  ecx = esi;
/* f8df78: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8df7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8df7e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8df81: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8df84: fsubr dword ptr [ebp + 8] */
  ST0 = (F32((uint32_t)(ebp + 0x8u))) - ST0;
/* f8df87: fsub dword ptr [0xfa4394] */
  ST0 = ST0 - (F32((uint32_t)(0xfa4394u)));
/* f8df8d: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8df92u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8df92: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_f8df95: /* f8df95: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8df97: mov ecx, esi */
  ecx = esi;
/* f8df99: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8df9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8df9f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8dfa2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8dfa4: mov ecx, esi */
  ecx = esi;
/* f8dfa6: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8dfa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8dfa9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8dfac: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f8dfb2: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8dfb5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8dfb8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8dfba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8dfbb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dfbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dfbf: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8dfc2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8dfc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8dfc6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8dfc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8dfca: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8dfd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8dfd0: /* f8dfd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8dfd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8dfd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8dfd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8dfdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8dfdd: mov esp, ebp */
  esp = ebp;
/* f8dfdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8dfe0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8dfe3(void) {
  LOAD_REGS();
L_f8dfe3: /* f8dfe3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8dfe6: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8dfeb: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* f8dfee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8dfef: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f8dff2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8dff7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8dff7(); return;
}

void f_f8dff7(void) {
  LOAD_REGS();
L_f8dff7: /* f8dff7: push 0xfa4be0 */
  { uint32_t v = 0xfa4be0u; esp -= 4; W32(esp, v); }
/* f8dffc: push 0xfb9bf4 */
  { uint32_t v = 0xfb9bf4u; esp -= 4; W32(esp, v); }
/* f8e001: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8e007u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8e007: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8e00a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8e00c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8e00e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8e013u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8e013: guest_badaddr(0xf8e013); return;
}

void f_f8e0b0(void) {
  LOAD_REGS();
L_f8e0b0: /* f8e0b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8e0b1: mov ebp, esp */
  ebp = esp;
/* f8e0b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8e0b5: push 0xf9a4e0 */
  { uint32_t v = 0xf9a4e0u; esp -= 4; W32(esp, v); }
/* f8e0ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8e0c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e0c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8e0c8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8e0cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8e0ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e0cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8e0d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8e0d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8e0d4: xor edi, edi */
  edi = 0;
/* f8e0d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e0d7: mov esi, ecx */
  esi = ecx;
/* f8e0d9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f8e0dc: call 0xf710d7 */
  esp -= 4; W32(esp, 0xf8e0e1u); SPILL(); f_f710d7(); if (g_unwind) return; RELOAD();
/* f8e0e1: mov ecx, dword ptr [esi + 0x214] */
  ecx = R32((uint32_t)(esi + 0x214u));
/* f8e0e7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f8e0ea: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8e0ed: fcomp dword ptr [0xfa4394] */
  fpu_com(ST0, F32((uint32_t)(0xfa4394u)));
  FPOP();
/* f8e0f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8e0f5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8e0f8: jp 0xf8e114 */
  if (pf) goto L_f8e114;
L_f8e0fa: /* f8e0fa: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f8e0fd: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* f8e100: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* f8e103: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f8e106: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f8e108: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* f8e10e: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8e111: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_f8e114: /* f8e114: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8e116: mov ecx, esi */
  ecx = esi;
/* f8e118: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8e11bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e11b: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f8e11e: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* f8e121: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f8e124: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f8e12a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e12c: je 0xf8e140 */
  if (zf) goto L_f8e140;
L_f8e12e: /* f8e12e: fild dword ptr [eax + 0x98] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x98u)); FPUSH(v); }
/* f8e134: fsubr dword ptr [ebp - 0x24] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffdcu))) - ST0;
/* f8e137: fisub dword ptr [eax + 0xa0] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(eax + 0xa0u)));
/* f8e13d: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
L_f8e140: /* f8e140: xor ebx, ebx */
  ebx = 0;
/* f8e142: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e144: mov dword ptr [esi + 0x78], edi */
  W32((uint32_t)(esi + 0x78u), edi);
/* f8e147: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* f8e14e: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* f8e151: je 0xf8e15e */
  if (zf) goto L_f8e15e;
L_f8e153: /* f8e153: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* f8e159: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* f8e15c: jmp 0xf8e161 */
  goto L_f8e161;
L_f8e15e: /* f8e15e: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
L_f8e161: /* f8e161: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f8e164: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* f8e16b: xor eax, eax */
  eax = 0;
L_f8e16d: /* f8e16d: cmp eax, dword ptr [esi + 0x1f4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1f4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8e173: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f8e176: jge 0xf8e34e */
  if ((sf == of)) goto L_f8e34e;
L_f8e17c: /* f8e17c: mov edx, dword ptr [esi + 0x1f0] */
  edx = R32((uint32_t)(esi + 0x1f0u));
/* f8e182: lea edi, [edx + eax*4] */
  edi = (uint32_t)(edx + eax*4);
/* f8e185: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f8e187: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e189: je 0xf8e333 */
  if (zf) goto L_f8e333;
L_f8e18f: /* f8e18f: lea ecx, [eax + 0x1cc] */
  ecx = (uint32_t)(eax + 0x1ccu);
/* f8e195: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf8e19bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f8e19b: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f8e19e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e19f: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* f8e1a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e1a3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8e1a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e1a7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f8e1a9: xor ecx, ecx */
  ecx = 0;
/* f8e1ab: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* f8e1ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e1af: mov ecx, dword ptr [eax + 0xa0] */
  ecx = R32((uint32_t)(eax + 0xa0u));
/* f8e1b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e1b6: call 0xf72211 */
  esp -= 4; W32(esp, 0xf8e1bbu); SPILL(); f_f72211(); if (g_unwind) return; RELOAD();
/* f8e1bb: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8e1c1: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f8e1c4: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* f8e1c7: mov eax, dword ptr [eax + 0xa0] */
  eax = R32((uint32_t)(eax + 0xa0u));
/* f8e1cd: mov edx, dword ptr [eax + 0x98] */
  edx = R32((uint32_t)(eax + 0x98u));
/* f8e1d3: mov ecx, dword ptr [eax + 0xa0] */
  ecx = R32((uint32_t)(eax + 0xa0u));
/* f8e1d9: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8e1db: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8e1de: lea eax, [ecx + edx + 0xa] */
  eax = (uint32_t)(ecx + edx + 0xau);
/* f8e1e2: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* f8e1e5: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f8e1e8: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* f8e1eb: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f8e1ee: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* f8e1f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8e1f3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8e1f6: jne 0xf8e333 */
  if (!zf) goto L_f8e333;
L_f8e1fc: /* f8e1fc: test byte ptr [esi + 0x218], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x218u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8e203: je 0xf8e220 */
  if (zf) goto L_f8e220;
L_f8e205: /* f8e205: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f8e208: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e209: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f8e20c: fidiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* f8e20f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8e212: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf8e218u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f8e218: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8e21b: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f8e21e: jmp 0xf8e227 */
  goto L_f8e227;
L_f8e220: /* f8e220: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_f8e227: /* f8e227: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f8e22d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e22f: je 0xf8e23c */
  if (zf) goto L_f8e23c;
L_f8e231: /* f8e231: mov ecx, dword ptr [eax + 0x98] */
  ecx = R32((uint32_t)(eax + 0x98u));
/* f8e237: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f8e23a: jmp 0xf8e243 */
  goto L_f8e243;
L_f8e23c: /* f8e23c: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_f8e243: /* f8e243: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f8e246: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8e248: jle 0xf8e310 */
  if ((zf || sf != of)) goto L_f8e310;
L_f8e24e: /* f8e24e: mov edx, dword ptr [esi + 0x1f0] */
  edx = R32((uint32_t)(esi + 0x1f0u));
/* f8e254: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f8e257: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* f8e25a: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8e260: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf8e266u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f8e266: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f8e269: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e26a: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* f8e26d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e26e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8e271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e272: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f8e274: xor ecx, ecx */
  ecx = 0;
/* f8e276: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* f8e279: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e27a: mov ecx, dword ptr [eax + 0xa0] */
  ecx = R32((uint32_t)(eax + 0xa0u));
/* f8e280: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e281: call 0xf72211 */
  esp -= 4; W32(esp, 0xf8e286u); SPILL(); f_f72211(); if (g_unwind) return; RELOAD();
/* f8e286: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8e28c: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* f8e28f: mov eax, dword ptr [ecx + 0xa0] */
  eax = R32((uint32_t)(ecx + 0xa0u));
/* f8e295: mov edx, dword ptr [eax + 0xa0] */
  edx = R32((uint32_t)(eax + 0xa0u));
/* f8e29b: mov edi, dword ptr [eax + 0x98] */
  edi = R32((uint32_t)(eax + 0x98u));
/* f8e2a1: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8e2a4: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f8e2a6: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f8e2a8: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8e2ab: lea edx, [edx + eax + 0xa] */
  edx = (uint32_t)(edx + eax + 0xau);
/* f8e2af: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* f8e2b2: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f8e2b5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8e2b7: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f8e2ba: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f8e2bd: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* f8e2c0: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8e2c3: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* f8e2c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e2c7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8e2ca: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8e2cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e2ce: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8e2d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e2d2: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* f8e2d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e2d6: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf8e2dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e2dc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8e2df: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* f8e2e2: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8e2e7u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8e2e7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8e2ea: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f8e2eb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f8e2ee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e2f0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8e2f3: mov ecx, esi */
  ecx = esi;
/* f8e2f5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f8e2f6: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8e2fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e2fc: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f8e2ff: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* f8e302: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* f8e305: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8e308: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* f8e30b: jmp 0xf8e243 */
  goto L_f8e243;
L_f8e310: /* f8e310: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8e313: fsub dword ptr [0xfa4134] */
  ST0 = ST0 - (F32((uint32_t)(0xfa4134u)));
/* f8e319: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f8e31c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* f8e31e: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8e323u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8e323: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* f8e326: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* f8e329: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* f8e330: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
L_f8e333: /* f8e333: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* f8e336: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8e339: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f8e33c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* f8e33f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f8e340: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f8e341: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8e344: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8e347: xor edi, edi */
  edi = 0;
/* f8e349: jmp 0xf8e16d */
  goto L_f8e16d;
L_f8e34e: /* f8e34e: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8e351: jle 0xf8e472 */
  if ((zf || sf != of)) goto L_f8e472;
L_f8e357: /* f8e357: test byte ptr [esi + 0x218], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x218u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8e35e: je 0xf8e37b */
  if (zf) goto L_f8e37b;
L_f8e360: /* f8e360: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f8e363: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e364: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f8e367: fidiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* f8e36a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8e36d: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf8e373u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f8e373: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8e376: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f8e379: jmp 0xf8e37e */
  goto L_f8e37e;
L_f8e37b: /* f8e37b: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
L_f8e37e: /* f8e37e: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f8e384: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e386: je 0xf8e393 */
  if (zf) goto L_f8e393;
L_f8e388: /* f8e388: mov ecx, dword ptr [eax + 0x98] */
  ecx = R32((uint32_t)(eax + 0x98u));
/* f8e38e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f8e391: jmp 0xf8e396 */
  goto L_f8e396;
L_f8e393: /* f8e393: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
L_f8e396: /* f8e396: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8e399: jle 0xf8e463 */
  if ((zf || sf != of)) goto L_f8e463;
L_f8e39f: /* f8e39f: mov edx, dword ptr [esi + 0x1f0] */
  edx = R32((uint32_t)(esi + 0x1f0u));
/* f8e3a5: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f8e3a8: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* f8e3ab: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8e3b1: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf8e3b7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f8e3b7: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f8e3ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e3bb: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* f8e3be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e3bf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8e3c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e3c3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f8e3c5: xor ecx, ecx */
  ecx = 0;
/* f8e3c7: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* f8e3ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e3cb: mov ecx, dword ptr [eax + 0xa0] */
  ecx = R32((uint32_t)(eax + 0xa0u));
/* f8e3d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e3d2: call 0xf72211 */
  esp -= 4; W32(esp, 0xf8e3d7u); SPILL(); f_f72211(); if (g_unwind) return; RELOAD();
/* f8e3d7: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8e3dd: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* f8e3e0: mov eax, dword ptr [ecx + 0xa0] */
  eax = R32((uint32_t)(ecx + 0xa0u));
/* f8e3e6: mov edx, dword ptr [eax + 0xa0] */
  edx = R32((uint32_t)(eax + 0xa0u));
/* f8e3ec: mov edi, dword ptr [eax + 0x98] */
  edi = R32((uint32_t)(eax + 0x98u));
/* f8e3f2: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8e3f5: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f8e3f7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f8e3f9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8e3fc: lea edx, [edx + eax + 0xa] */
  edx = (uint32_t)(edx + eax + 0xau);
/* f8e400: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* f8e403: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* f8e406: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8e408: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f8e40b: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f8e40e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* f8e411: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8e414: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* f8e417: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e418: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8e41b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8e41e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e41f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8e422: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e423: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* f8e426: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e427: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf8e42du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e42d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8e430: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* f8e433: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8e438u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8e438: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8e43b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f8e43c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f8e43f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e441: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8e444: mov ecx, esi */
  ecx = esi;
/* f8e446: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f8e447: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8e44du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e44d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* f8e450: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* f8e453: xor edi, edi */
  edi = 0;
/* f8e455: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* f8e458: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8e45b: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* f8e45e: jmp 0xf8e396 */
  goto L_f8e396;
L_f8e463: /* f8e463: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8e466: fsub dword ptr [0xfa4134] */
  ST0 = ST0 - (F32((uint32_t)(0xfa4134u)));
/* f8e46c: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* f8e46f: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
L_f8e472: /* f8e472: test byte ptr [esi + 0x1ec], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1ecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8e479: je 0xf8e495 */
  if (zf) goto L_f8e495;
L_f8e47b: /* f8e47b: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* f8e481: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e483: je 0xf8e495 */
  if (zf) goto L_f8e495;
L_f8e485: /* f8e485: mov eax, dword ptr [eax + 0x1dc] */
  eax = R32((uint32_t)(eax + 0x1dcu));
/* f8e48b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e48d: je 0xf8e495 */
  if (zf) goto L_f8e495;
L_f8e48f: /* f8e48f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* f8e492: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
L_f8e495: /* f8e495: cmp edi, dword ptr [esi + 0x1f4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1f4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8e49b: jge 0xf8e4b2 */
  if ((sf == of)) goto L_f8e4b2;
L_f8e49d: /* f8e49d: mov edx, dword ptr [esi + 0x1f0] */
  edx = R32((uint32_t)(esi + 0x1f0u));
/* f8e4a3: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* f8e4a6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8e4a9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8e4ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e4ac: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xf8e4afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e4af: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f8e4b0: jmp 0xf8e495 */
  goto L_f8e495;
L_f8e4b2: /* f8e4b2: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f8e4b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e4ba: je 0xf8e4ce */
  if (zf) goto L_f8e4ce;
L_f8e4bc: /* f8e4bc: fild dword ptr [eax + 0xa0] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0xa0u)); FPUSH(v); }
/* f8e4c2: fiadd dword ptr [eax + 0x98] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(eax + 0x98u)));
/* f8e4c8: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* f8e4cb: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
L_f8e4ce: /* f8e4ce: mov esi, dword ptr [esi + 0x1e4] */
  esi = R32((uint32_t)(esi + 0x1e4u));
/* f8e4d4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e4d6: je 0xf8e4e3 */
  if (zf) goto L_f8e4e3;
L_f8e4d8: /* f8e4d8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8e4db: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e4dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e4de: mov ecx, esi */
  ecx = esi;
/* f8e4e0: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xf8e4e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8e4e3: /* f8e4e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8e4e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8e4e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8e4e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8e4ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8e4f0: mov esp, ebp */
  esp = ebp;
/* f8e4f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8e4f3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8e4f6(void) {
  LOAD_REGS();
L_f8e4f6: /* f8e4f6: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* f8e4f9: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8e4fe: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* f8e501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e502: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* f8e505: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8e50au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8e50a(); return;
}

void f_f8e50a(void) {
  LOAD_REGS();
L_f8e50a: /* f8e50a: push 0xfa4c14 */
  { uint32_t v = 0xfa4c14u; esp -= 4; W32(esp, v); }
/* f8e50f: push 0xfb9bfc */
  { uint32_t v = 0xfb9bfcu; esp -= 4; W32(esp, v); }
/* f8e514: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8e51au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8e51a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8e51d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8e51f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8e521: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8e526u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8e526: guest_badaddr(0xf8e526); return;
}

void f_f8e650(void) {
  LOAD_REGS();
L_f8e650: /* f8e650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8e651: mov ebp, esp */
  ebp = esp;
/* f8e653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8e655: push 0xf9a4f0 */
  { uint32_t v = 0xf9a4f0u; esp -= 4; W32(esp, v); }
/* f8e65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8e660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8e668: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8e66b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8e66d: mov esi, ecx */
  esi = ecx;
/* f8e66f: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f8e672: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8e673: xor edi, edi */
  edi = 0;
/* f8e675: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8e677: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8e67a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f8e67d: je 0xf8e86f */
  if (zf) goto L_f8e86f;
L_f8e683: /* f8e683: cmp dword ptr [esi + 0x20c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x20cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e689: je 0xf8e740 */
  if (zf) goto L_f8e740;
L_f8e68f: /* f8e68f: cmp byte ptr [esi + 0x30], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8e693: jne 0xf8e6f0 */
  if (!zf) goto L_f8e6f0;
L_f8e695: /* f8e695: cmp dword ptr [esi + 0x1e4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1e4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e69b: jne 0xf8e6f0 */
  if (!zf) goto L_f8e6f0;
L_f8e69d: /* f8e69d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e69f: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8e6a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e6a2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8e6a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8e6a7: mov ecx, esi */
  ecx = esi;
/* f8e6a9: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8e6acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e6ac: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8e6af: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e6b1: mov ecx, esi */
  ecx = esi;
/* f8e6b3: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8e6b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e6b9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8e6bc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8e6be: mov ecx, esi */
  ecx = esi;
/* f8e6c0: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8e6c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e6c6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8e6c9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f8e6cc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8e6cf: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8e6d2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8e6d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e6d6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8e6d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e6da: xor ecx, ecx */
  ecx = 0;
/* f8e6dc: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8e6df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e6e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e6e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e6e2: mov ecx, dword ptr [esi + 0x20c] */
  ecx = R32((uint32_t)(esi + 0x20cu));
/* f8e6e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e6e9: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf8e6eeu); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f8e6ee: jmp 0xf8e743 */
  goto L_f8e743;
L_f8e6f0: /* f8e6f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8e6f2: mov ecx, esi */
  ecx = esi;
/* f8e6f4: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8e6f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e6f7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8e6fa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e6fc: mov ecx, esi */
  ecx = esi;
/* f8e6fe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8e701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e701: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8e704: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8e706: mov ecx, esi */
  ecx = esi;
/* f8e708: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8e70eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e70e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8e711: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e713: mov ecx, esi */
  ecx = esi;
/* f8e715: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8e71bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e71b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8e71e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8e721: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8e724: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8e727: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8e72a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e72b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8e72e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8e72f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e730: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e731: mov ecx, dword ptr [esi + 0x20c] */
  ecx = R32((uint32_t)(esi + 0x20cu));
/* f8e737: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8e738: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e739: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf8e73eu); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f8e73e: jmp 0xf8e743 */
  goto L_f8e743;
L_f8e740: /* f8e740: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_f8e743: /* f8e743: cmp dword ptr [esi + 0x210], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x210u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e749: je 0xf8e7a0 */
  if (zf) goto L_f8e7a0;
L_f8e74b: /* f8e74b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8e74d: mov ecx, esi */
  ecx = esi;
/* f8e74f: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8e752u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e752: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8e755: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e757: mov ecx, esi */
  ecx = esi;
/* f8e759: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8e75cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e75c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8e75f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8e761: mov ecx, esi */
  ecx = esi;
/* f8e763: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8e769u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e769: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8e76c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8e76e: mov ecx, esi */
  ecx = esi;
/* f8e770: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8e776u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e776: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8e779: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8e77c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8e77f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f8e781: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e782: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8e785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e786: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8e789: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e78a: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f8e790: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e791: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e792: mov ecx, ebx */
  ecx = ebx;
/* f8e794: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0xf8e79au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e79a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f8e7a0: /* f8e7a0: cmp edi, dword ptr [esi + 0x1f4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1f4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8e7a6: jge 0xf8e7fe */
  if ((sf == of)) goto L_f8e7fe;
L_f8e7a8: /* f8e7a8: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8e7ae: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* f8e7b1: cmp eax, dword ptr [esi + 0x1fc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1fcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e7b7: je 0xf8e7fb */
  if (zf) goto L_f8e7fb;
L_f8e7b9: /* f8e7b9: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f8e7bc: cmp eax, dword ptr [edx + 0x108] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e7c2: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f8e7c5: mov byte ptr [eax + 0x30], cl */
  W8((uint32_t)(eax + 0x30u), (ecx & 0xffu));
/* f8e7c8: mov edx, dword ptr [esi + 0x1f0] */
  edx = R32((uint32_t)(esi + 0x1f0u));
/* f8e7ce: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* f8e7d1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8e7d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e7d4: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0xf8e7dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e7da: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8e7e0: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* f8e7e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8e7e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e7e6: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xf8e7e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e7e9: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8e7ef: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* f8e7f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8e7f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e7f5: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xf8e7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8e7fb: /* f8e7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f8e7fc: jmp 0xf8e7a0 */
  goto L_f8e7a0;
L_f8e7fe: /* f8e7fe: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* f8e804: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e806: je 0xf8e86f */
  if (zf) goto L_f8e86f;
L_f8e808: /* f8e808: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8e80b: cmp dword ptr [ecx + 0x104], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x104u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8e811: jne 0xf8e823 */
  if (!zf) goto L_f8e823;
L_f8e813: /* f8e813: mov ecx, dword ptr [esi + 0x1e4] */
  ecx = R32((uint32_t)(esi + 0x1e4u));
/* f8e819: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e81b: jne 0xf8e823 */
  if (!zf) goto L_f8e823;
L_f8e81d: /* f8e81d: mov byte ptr [eax + 0x30], 2 */
  W8((uint32_t)(eax + 0x30u), 0x2u);
/* f8e821: jmp 0xf8e827 */
  goto L_f8e827;
L_f8e823: /* f8e823: mov byte ptr [eax + 0x30], 3 */
  W8((uint32_t)(eax + 0x30u), 0x3u);
L_f8e827: /* f8e827: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8e82d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8e82f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e830: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xf8e836u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e836: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8e83c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8e83e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e83f: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xf8e842u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e842: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8e848: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8e84a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e84b: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xf8e851u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e851: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* f8e857: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* f8e85d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8e85f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e860: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xf8e863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e863: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* f8e869: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8e86c: mov byte ptr [eax + 0x30], cl */
  W8((uint32_t)(eax + 0x30u), (ecx & 0xffu));
L_f8e86f: /* f8e86f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8e872: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8e873: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8e874: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8e87b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8e87c: mov esp, ebp */
  esp = ebp;
/* f8e87e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8e87f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8e882(void) {
  LOAD_REGS();
L_f8e882: /* f8e882: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8e885: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8e88a: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f8e88d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e88e: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f8e891: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8e896u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8e896(); return;
}

void f_f8e896(void) {
  LOAD_REGS();
L_f8e896: /* f8e896: push 0xfa4c4c */
  { uint32_t v = 0xfa4c4cu; esp -= 4; W32(esp, v); }
/* f8e89b: push 0xfb9c04 */
  { uint32_t v = 0xfb9c04u; esp -= 4; W32(esp, v); }
/* f8e8a0: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8e8a6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8e8a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8e8a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8e8ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8e8ad: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8e8b2u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8e8b2: guest_badaddr(0xf8e8b2); return;
}

void f_f8e960(void) {
  LOAD_REGS();
L_f8e960: /* f8e960: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8e961: mov ebp, esp */
  ebp = esp;
/* f8e963: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8e965: push 0xf9a500 */
  { uint32_t v = 0xf9a500u; esp -= 4; W32(esp, v); }
/* f8e96a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8e970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e971: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8e978: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8e97b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e97c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* f8e97f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8e980: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8e981: mov edi, ecx */
  edi = ecx;
/* f8e983: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f8e989: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e98b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8e98e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8e995: je 0xf8e9c6 */
  if (zf) goto L_f8e9c6;
L_f8e997: /* f8e997: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f8e99a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8e99c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e99d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8e99e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xf8e9a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e9a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e9a6: jne 0xf8e9fd */
  if (!zf) goto L_f8e9fd;
L_f8e9a8: /* f8e9a8: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f8e9ae: mov ecx, dword ptr [ecx + 0x1dc] */
  ecx = R32((uint32_t)(ecx + 0x1dcu));
/* f8e9b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e9b6: je 0xf8e9c6 */
  if (zf) goto L_f8e9c6;
L_f8e9b8: /* f8e9b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8e9ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e9bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8e9bc: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf8e9c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e9c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e9c4: jne 0xf8e9fd */
  if (!zf) goto L_f8e9fd;
L_f8e9c6: /* f8e9c6: mov esi, dword ptr [edi + 0x1f4] */
  esi = R32((uint32_t)(edi + 0x1f4u));
/* f8e9cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f8e9d0: /* f8e9d0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8e9d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8e9d3: jle 0xf8e9f2 */
  if ((zf || sf != of)) goto L_f8e9f2;
L_f8e9d5: /* f8e9d5: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f8e9db: mov ecx, dword ptr [eax + esi*4 - 4] */
  ecx = R32((uint32_t)(eax + esi*4 + 0xfffffffcu));
/* f8e9df: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8e9e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8e9e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8e9e5: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf8e9ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8e9eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8e9ed: jne 0xf8e9fd */
  if (!zf) goto L_f8e9fd;
L_f8e9ef: /* f8e9ef: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* f8e9f0: jmp 0xf8e9d0 */
  goto L_f8e9d0;
L_f8e9f2: /* f8e9f2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8e9f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8e9f6: mov ecx, edi */
  ecx = edi;
/* f8e9f8: call 0xf71663 */
  esp -= 4; W32(esp, 0xf8e9fdu); SPILL(); f_f71663(); if (g_unwind) return; RELOAD();
L_f8e9fd: /* f8e9fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ea00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ea01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ea02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ea09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ea0a: mov esp, ebp */
  esp = ebp;
/* f8ea0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ea0d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8ea10(void) {
  LOAD_REGS();
L_f8ea10: /* f8ea10: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8ea13: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ea18: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8ea1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ea1c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8ea1f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ea24u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ea24(); return;
}

void f_f8ea24(void) {
  LOAD_REGS();
L_f8ea24: /* f8ea24: push 0xfa4c7c */
  { uint32_t v = 0xfa4c7cu; esp -= 4; W32(esp, v); }
/* f8ea29: push 0xfb9c0c */
  { uint32_t v = 0xfb9c0cu; esp -= 4; W32(esp, v); }
/* f8ea2e: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ea34u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ea34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ea37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ea39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ea3b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ea40u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8ea40: guest_badaddr(0xf8ea40); return;
}

void f_f8ea90(void) {
  LOAD_REGS();
L_f8ea90: /* f8ea90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8ea91: mov ebp, esp */
  ebp = esp;
/* f8ea93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8ea95: push 0xf9a510 */
  { uint32_t v = 0xf9a510u; esp -= 4; W32(esp, v); }
/* f8ea9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8eaa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8eaa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8eaa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8eaab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8eaac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8eaaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8eab0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8eab1: xor esi, esi */
  esi = 0;
/* f8eab3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8eab6: mov edi, ecx */
  edi = ecx;
/* f8eab8: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f8eabb: jmp 0xf8eac0 */
  goto L_f8eac0;
L_f8eac0: /* f8eac0: cmp esi, dword ptr [edi + 0x1f4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1f4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8eac6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8eac7: jge 0xf8eaf9 */
  if ((sf == of)) goto L_f8eaf9;
L_f8eac9: /* f8eac9: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f8eacf: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8ead2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8ead4: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf8eadau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8eada: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8eadc: je 0xf8eaf6 */
  if (zf) goto L_f8eaf6;
L_f8eade: /* f8eade: mov eax, 1 */
  eax = 0x1u;
/* f8eae3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8eae6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8eaed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8eaee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8eaef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8eaf0: mov esp, ebp */
  esp = ebp;
/* f8eaf2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8eaf3: ret 4 */
  esp += 8; SPILL(); return;
L_f8eaf6: /* f8eaf6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f8eaf7: jmp 0xf8eac0 */
  goto L_f8eac0;
L_f8eaf9: /* f8eaf9: mov ecx, edi */
  ecx = edi;
/* f8eafb: call 0xf7189d */
  esp -= 4; W32(esp, 0xf8eb00u); SPILL(); f_f7189d(); if (g_unwind) return; RELOAD();
/* f8eb00: xor ecx, ecx */
  ecx = 0;
/* f8eb02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8eb04: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f8eb07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8eb08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8eb09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8eb0a: mov eax, ecx */
  eax = ecx;
/* f8eb0c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8eb0f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8eb16: mov esp, ebp */
  esp = ebp;
/* f8eb18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8eb19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8eabd(void) {
  LOAD_REGS();
L_f8eabd: /* f8eabd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f8eac0: /* f8eac0: cmp esi, dword ptr [edi + 0x1f4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1f4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8eac6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8eac7: jge 0xf8eaf9 */
  if ((sf == of)) goto L_f8eaf9;
L_f8eac9: /* f8eac9: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f8eacf: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8ead2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8ead4: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf8eadau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8eada: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8eadc: je 0xf8eaf6 */
  if (zf) goto L_f8eaf6;
L_f8eade: /* f8eade: mov eax, 1 */
  eax = 0x1u;
/* f8eae3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8eae6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8eaed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8eaee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8eaef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8eaf0: mov esp, ebp */
  esp = ebp;
/* f8eaf2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8eaf3: ret 4 */
  esp += 8; SPILL(); return;
L_f8eaf6: /* f8eaf6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f8eaf7: jmp 0xf8eac0 */
  goto L_f8eac0;
L_f8eaf9: /* f8eaf9: mov ecx, edi */
  ecx = edi;
/* f8eafb: call 0xf7189d */
  esp -= 4; W32(esp, 0xf8eb00u); SPILL(); f_f7189d(); if (g_unwind) return; RELOAD();
/* f8eb00: xor ecx, ecx */
  ecx = 0;
/* f8eb02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8eb04: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f8eb07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8eb08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8eb09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8eb0a: mov eax, ecx */
  eax = ecx;
/* f8eb0c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8eb0f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8eb16: mov esp, ebp */
  esp = ebp;
/* f8eb18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8eb19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8eb1c(void) {
  LOAD_REGS();
L_f8eb1c: /* f8eb1c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8eb1f: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8eb24: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8eb27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8eb28: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8eb2b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8eb30u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8eb30(); return;
}

void f_f8eb30(void) {
  LOAD_REGS();
L_f8eb30: /* f8eb30: push 0xfa4cc0 */
  { uint32_t v = 0xfa4cc0u; esp -= 4; W32(esp, v); }
/* f8eb35: push 0xfb9c1c */
  { uint32_t v = 0xfb9c1cu; esp -= 4; W32(esp, v); }
/* f8eb3a: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8eb40u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8eb40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8eb43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8eb45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8eb47: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8eb4cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8eb4c: guest_badaddr(0xf8eb4c); return;
}

void f_f8eb80(void) {
  LOAD_REGS();
L_f8eb80: /* f8eb80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8eb81: mov ebp, esp */
  ebp = esp;
/* f8eb83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8eb85: push 0xf9a520 */
  { uint32_t v = 0xf9a520u; esp -= 4; W32(esp, v); }
/* f8eb8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8eb90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8eb91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8eb98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8eb9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8eb9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8eb9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8eb9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8eba1: mov edi, ecx */
  edi = ecx;
/* f8eba3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8ebaa: xor esi, esi */
  esi = 0;
/* f8ebac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f8ebb0: /* f8ebb0: cmp esi, dword ptr [edi + 0x1f4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1f4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8ebb6: jge 0xf8ebe6 */
  if ((sf == of)) goto L_f8ebe6;
L_f8ebb8: /* f8ebb8: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f8ebbe: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8ebc1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8ebc3: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xf8ebc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ebc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8ebcb: je 0xf8ebe3 */
  if (zf) goto L_f8ebe3;
L_f8ebcd: /* f8ebcd: mov eax, 1 */
  eax = 0x1u;
/* f8ebd2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ebd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ebdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ebdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ebde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ebdf: mov esp, ebp */
  esp = ebp;
/* f8ebe1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ebe2: ret  */
  esp += 4; SPILL(); return;
L_f8ebe3: /* f8ebe3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f8ebe4: jmp 0xf8ebb0 */
  goto L_f8ebb0;
L_f8ebe6: /* f8ebe6: mov ecx, edi */
  ecx = edi;
/* f8ebe8: call 0xf71c12 */
  esp -= 4; W32(esp, 0xf8ebedu); SPILL(); f_f71c12(); if (g_unwind) return; RELOAD();
/* f8ebed: xor ecx, ecx */
  ecx = 0;
/* f8ebef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8ebf1: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f8ebf4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ebf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ebf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ebf7: mov eax, ecx */
  eax = ecx;
/* f8ebf9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ebfc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ec03: mov esp, ebp */
  esp = ebp;
/* f8ec05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ec06: ret  */
  esp += 4; SPILL(); return;
}

void f_f8ec07(void) {
  LOAD_REGS();
L_f8ec07: /* f8ec07: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8ec0a: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ec0f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8ec12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ec13: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8ec16: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ec1bu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ec1b(); return;
}

void f_f8ec1b(void) {
  LOAD_REGS();
L_f8ec1b: /* f8ec1b: push 0xfa4d08 */
  { uint32_t v = 0xfa4d08u; esp -= 4; W32(esp, v); }
/* f8ec20: push 0xfb9c24 */
  { uint32_t v = 0xfb9c24u; esp -= 4; W32(esp, v); }
/* f8ec25: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ec2bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ec2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ec2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ec30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ec32: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ec37u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8ec37: guest_badaddr(0xf8ec37); return;
}

void f_f8ec70(void) {
  LOAD_REGS();
L_f8ec70: /* f8ec70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8ec71: mov ebp, esp */
  ebp = esp;
/* f8ec73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8ec75: push 0xf9a530 */
  { uint32_t v = 0xf9a530u; esp -= 4; W32(esp, v); }
/* f8ec7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8ec80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ec81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8ec88: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8ec8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8ec8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8ec8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8ec90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8ec91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8ec94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ec95: mov esi, ecx */
  esi = ecx;
/* f8ec97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8ec9e: call 0xf710d7 */
  esp -= 4; W32(esp, 0xf8eca3u); SPILL(); f_f710d7(); if (g_unwind) return; RELOAD();
/* f8eca3: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8eca9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8ecab: je 0xf8edb1 */
  if (zf) goto L_f8edb1;
L_f8ecb1: /* f8ecb1: mov eax, dword ptr [esi + 0x230] */
  eax = R32((uint32_t)(esi + 0x230u));
/* f8ecb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8ecb9: je 0xf8edb1 */
  if (zf) goto L_f8edb1;
L_f8ecbf: /* f8ecbf: fld dword ptr [esi + 0x218] */
  { double v = F32((uint32_t)(esi + 0x218u)); FPUSH(v); }
/* f8ecc5: mov al, byte ptr [esi + 0x228] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x228u))) & 0xffu);
/* f8eccb: fcomp dword ptr [0xfa4394] */
  fpu_com(ST0, F32((uint32_t)(0xfa4394u)));
  FPOP();
/* f8ecd1: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8ecd3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8ecd5: je 0xf8edc4 */
  if (zf) goto L_f8edc4;
L_f8ecdb: /* f8ecdb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8ecde: jp 0xf8ecfb */
  if (pf) goto L_f8ecfb;
L_f8ece0: /* f8ece0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8ece2: mov ecx, esi */
  ecx = esi;
/* f8ece4: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8ece7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ece7: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8ecea: fmul dword ptr [esi + 0x218] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x218u)));
/* f8ecf0: mov eax, dword ptr [esi + 0x22c] */
  eax = R32((uint32_t)(esi + 0x22cu));
/* f8ecf6: fstp dword ptr [eax + 0x78] */
  WF32((uint32_t)(eax + 0x78u), ST0); FPOP();
/* f8ecf9: jmp 0xf8ed04 */
  goto L_f8ed04;
L_f8ecfb: /* f8ecfb: mov edx, dword ptr [esi + 0x218] */
  edx = R32((uint32_t)(esi + 0x218u));
/* f8ed01: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
L_f8ed04: /* f8ed04: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ed06: mov ecx, esi */
  ecx = esi;
/* f8ed08: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8ed0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ed0e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ed11: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8ed17: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8ed1a: mov dword ptr [ecx + 0x6c], edx */
  W32((uint32_t)(ecx + 0x6cu), edx);
/* f8ed1d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ed1f: mov ecx, esi */
  ecx = esi;
/* f8ed21: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8ed27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ed27: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ed2a: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8ed30: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8ed33: mov dword ptr [ecx + 0x70], edx */
  W32((uint32_t)(ecx + 0x70u), edx);
/* f8ed36: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ed38: mov ecx, esi */
  ecx = esi;
/* f8ed3a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8ed3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ed3d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ed40: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8ed46: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8ed49: mov dword ptr [ecx + 0x74], edx */
  W32((uint32_t)(ecx + 0x74u), edx);
/* f8ed4c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ed4e: mov ecx, esi */
  ecx = esi;
/* f8ed50: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8ed53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ed53: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ed56: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8ed5c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8ed5f: fsub dword ptr [ecx + 0x78] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x78u)));
/* f8ed62: mov edx, dword ptr [esi + 0x230] */
  edx = R32((uint32_t)(esi + 0x230u));
/* f8ed68: mov ecx, esi */
  ecx = esi;
/* f8ed6a: fstp dword ptr [edx + 0x78] */
  WF32((uint32_t)(edx + 0x78u), ST0); FPOP();
/* f8ed6d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ed6f: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8ed75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ed75: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ed78: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8ed7e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8ed81: fadd dword ptr [ecx + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x78u)));
/* f8ed84: mov edx, dword ptr [esi + 0x230] */
  edx = R32((uint32_t)(esi + 0x230u));
/* f8ed8a: fstp dword ptr [edx + 0x6c] */
  WF32((uint32_t)(edx + 0x6cu), ST0); FPOP();
/* f8ed8d: mov eax, dword ptr [esi + 0x22c] */
  eax = R32((uint32_t)(esi + 0x22cu));
/* f8ed93: mov edx, dword ptr [eax + 0x70] */
  edx = R32((uint32_t)(eax + 0x70u));
/* f8ed96: mov ecx, dword ptr [esi + 0x230] */
  ecx = R32((uint32_t)(esi + 0x230u));
/* f8ed9c: mov dword ptr [ecx + 0x70], edx */
  W32((uint32_t)(ecx + 0x70u), edx);
/* f8ed9f: mov eax, dword ptr [esi + 0x22c] */
  eax = R32((uint32_t)(esi + 0x22cu));
/* f8eda5: mov ecx, dword ptr [esi + 0x230] */
  ecx = R32((uint32_t)(esi + 0x230u));
/* f8edab: mov edx, dword ptr [eax + 0x74] */
  edx = R32((uint32_t)(eax + 0x74u));
/* f8edae: mov dword ptr [ecx + 0x74], edx */
  W32((uint32_t)(ecx + 0x74u), edx);
L_f8edb1: /* f8edb1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8edb4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8edbb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8edbc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8edbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8edbe: mov esp, ebp */
  esp = ebp;
/* f8edc0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8edc1: ret 4 */
  esp += 8; SPILL(); return;
L_f8edc4: /* f8edc4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8edc7: jp 0xf8ede4 */
  if (pf) goto L_f8ede4;
L_f8edc9: /* f8edc9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8edcb: mov ecx, esi */
  ecx = esi;
/* f8edcd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8edd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8edd0: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8edd3: fmul dword ptr [esi + 0x218] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x218u)));
/* f8edd9: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8eddf: fstp dword ptr [ecx + 0x74] */
  WF32((uint32_t)(ecx + 0x74u), ST0); FPOP();
/* f8ede2: jmp 0xf8eded */
  goto L_f8eded;
L_f8ede4: /* f8ede4: mov edx, dword ptr [esi + 0x218] */
  edx = R32((uint32_t)(esi + 0x218u));
/* f8edea: mov dword ptr [ecx + 0x74], edx */
  W32((uint32_t)(ecx + 0x74u), edx);
L_f8eded: /* f8eded: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8edef: mov ecx, esi */
  ecx = esi;
/* f8edf1: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8edf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8edf4: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8edf7: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8edfd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8ee00: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* f8ee03: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ee05: mov ecx, esi */
  ecx = esi;
/* f8ee07: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8ee0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ee0d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ee10: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8ee16: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8ee19: mov dword ptr [ecx + 0x6c], edx */
  W32((uint32_t)(ecx + 0x6cu), edx);
/* f8ee1c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ee1e: mov ecx, esi */
  ecx = esi;
/* f8ee20: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8ee23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ee23: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ee26: mov ecx, dword ptr [esi + 0x230] */
  ecx = R32((uint32_t)(esi + 0x230u));
/* f8ee2c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8ee2f: mov dword ptr [ecx + 0x78], edx */
  W32((uint32_t)(ecx + 0x78u), edx);
/* f8ee32: mov al, byte ptr [esi + 0x228] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x228u))) & 0xffu);
/* f8ee38: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* f8ee3a: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8ee3c: jne 0xf8ee5f */
  if (!zf) goto L_f8ee5f;
L_f8ee3e: /* f8ee3e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ee40: mov ecx, esi */
  ecx = esi;
/* f8ee42: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8ee45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ee45: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ee48: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8ee4e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8ee51: fsub dword ptr [ecx + 0x74] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x74u)));
/* f8ee54: mov edx, dword ptr [esi + 0x230] */
  edx = R32((uint32_t)(esi + 0x230u));
/* f8ee5a: fstp dword ptr [edx + 0x74] */
  WF32((uint32_t)(edx + 0x74u), ST0); FPOP();
/* f8ee5d: jmp 0xf8ee6b */
  goto L_f8ee6b;
L_f8ee5f: /* f8ee5f: mov eax, dword ptr [esi + 0x230] */
  eax = R32((uint32_t)(esi + 0x230u));
/* f8ee65: mov ecx, dword ptr [eax + 0x78] */
  ecx = R32((uint32_t)(eax + 0x78u));
/* f8ee68: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
L_f8ee6b: /* f8ee6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8ee6d: mov ecx, esi */
  ecx = esi;
/* f8ee6f: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8ee75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ee75: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ee78: mov eax, dword ptr [esi + 0x230] */
  eax = R32((uint32_t)(esi + 0x230u));
/* f8ee7e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8ee81: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8ee84: test byte ptr [esi + 0x220], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x220u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8ee8a: mov ecx, esi */
  ecx = esi;
/* f8ee8c: je 0xf8eede */
  if (zf) goto L_f8eede;
L_f8ee8e: /* f8ee8e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8ee90: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8ee96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ee96: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ee99: mov eax, dword ptr [esi + 0x230] */
  eax = R32((uint32_t)(esi + 0x230u));
/* f8ee9f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8eea2: fadd dword ptr [eax + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x74u)));
/* f8eea5: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8eeab: fstp dword ptr [ecx + 0x70] */
  WF32((uint32_t)(ecx + 0x70u), ST0); FPOP();
/* f8eeae: mov al, byte ptr [esi + 0x225] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x225u))) & 0xffu);
/* f8eeb4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8eeb6: jne 0xf8eed3 */
  if (!zf) goto L_f8eed3;
L_f8eeb8: /* f8eeb8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8eeba: mov ecx, esi */
  ecx = esi;
/* f8eebc: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8eec2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8eec2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8eec5: mov eax, dword ptr [esi + 0x230] */
  eax = R32((uint32_t)(esi + 0x230u));
/* f8eecb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8eece: mov dword ptr [eax + 0x70], ecx */
  W32((uint32_t)(eax + 0x70u), ecx);
/* f8eed1: jmp 0xf8ef48 */
  goto L_f8ef48;
L_f8eed3: /* f8eed3: mov edx, dword ptr [esi + 0x22c] */
  edx = R32((uint32_t)(esi + 0x22cu));
/* f8eed9: fld dword ptr [edx + 0x70] */
  { double v = F32((uint32_t)(edx + 0x70u)); FPUSH(v); }
/* f8eedc: jmp 0xf8ef3c */
  goto L_f8ef3c;
L_f8eede: /* f8eede: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8eee0: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8eee6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8eee6: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8eee9: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8eeef: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8eef2: mov dword ptr [ecx + 0x70], edx */
  W32((uint32_t)(ecx + 0x70u), edx);
/* f8eef5: mov al, byte ptr [esi + 0x225] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x225u))) & 0xffu);
/* f8eefb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8eefd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8eeff: mov ecx, esi */
  ecx = esi;
/* f8ef01: jne 0xf8ef23 */
  if (!zf) goto L_f8ef23;
L_f8ef03: /* f8ef03: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8ef09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ef09: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ef0c: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* f8ef12: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8ef15: fadd dword ptr [ecx + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x74u)));
/* f8ef18: mov edx, dword ptr [esi + 0x230] */
  edx = R32((uint32_t)(esi + 0x230u));
/* f8ef1e: fstp dword ptr [edx + 0x70] */
  WF32((uint32_t)(edx + 0x70u), ST0); FPOP();
/* f8ef21: jmp 0xf8ef48 */
  goto L_f8ef48;
L_f8ef23: /* f8ef23: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8ef29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ef29: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8ef2c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8ef2e: mov ecx, esi */
  ecx = esi;
/* f8ef30: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8ef33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ef33: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ef36: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8ef39: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
L_f8ef3c: /* f8ef3c: mov eax, dword ptr [esi + 0x230] */
  eax = R32((uint32_t)(esi + 0x230u));
/* f8ef42: fsub dword ptr [eax + 0x74] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x74u)));
/* f8ef45: fstp dword ptr [eax + 0x70] */
  WF32((uint32_t)(eax + 0x70u), ST0); FPOP();
L_f8ef48: /* f8ef48: fld dword ptr [esi + 0x21c] */
  { double v = F32((uint32_t)(esi + 0x21cu)); FPUSH(v); }
/* f8ef4e: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f8ef54: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8ef56: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8ef59: jne 0xf8edb1 */
  if (!zf) goto L_f8edb1;
L_f8ef5f: /* f8ef5f: mov eax, dword ptr [esi + 0x230] */
  eax = R32((uint32_t)(esi + 0x230u));
/* f8ef65: fld dword ptr [eax + 0x74] */
  { double v = F32((uint32_t)(eax + 0x74u)); FPUSH(v); }
/* f8ef68: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ef6b: fmul dword ptr [esi + 0x21c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x21cu)));
/* f8ef71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ef72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ef73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ef74: fstp dword ptr [eax + 0x74] */
  WF32((uint32_t)(eax + 0x74u), ST0); FPOP();
/* f8ef77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ef7e: mov esp, ebp */
  esp = ebp;
/* f8ef80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ef81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8ef84(void) {
  LOAD_REGS();
L_f8ef84: /* f8ef84: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8ef87: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ef8c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f8ef8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ef90: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f8ef93: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ef98u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ef98(); return;
}

void f_f8ef98(void) {
  LOAD_REGS();
L_f8ef98: /* f8ef98: push 0xfa4d50 */
  { uint32_t v = 0xfa4d50u; esp -= 4; W32(esp, v); }
/* f8ef9d: push 0xfb9c2c */
  { uint32_t v = 0xfb9c2cu; esp -= 4; W32(esp, v); }
/* f8efa2: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8efa8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8efa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8efab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8efad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8efaf: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8efb4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8efb4: guest_badaddr(0xf8efb4); return;
}

void f_f8f0a0(void) {
  LOAD_REGS();
L_f8f0a0: /* f8f0a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8f0a1: mov ebp, esp */
  ebp = esp;
/* f8f0a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8f0a5: push 0xf9a540 */
  { uint32_t v = 0xf9a540u; esp -= 4; W32(esp, v); }
/* f8f0aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8f0b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f0b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8f0b8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8f0bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8f0bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8f0bd: mov esi, ecx */
  esi = ecx;
/* f8f0bf: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f8f0c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8f0c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f0c8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8f0cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8f0d2: je 0xf8f166 */
  if (zf) goto L_f8f166;
L_f8f0d8: /* f8f0d8: test byte ptr [esi + 0x1e0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1e0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f0df: je 0xf8f11b */
  if (zf) goto L_f8f11b;
L_f8f0e1: /* f8f0e1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8f0e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f0e5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8f0e8: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* f8f0eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8f0ec: push 0xfb9c34 */
  { uint32_t v = 0xfb9c34u; esp -= 4; W32(esp, v); }
/* f8f0f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f0f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f0f4: call 0xf72211 */
  esp -= 4; W32(esp, 0xf8f0f9u); SPILL(); f_f72211(); if (g_unwind) return; RELOAD();
/* f8f0f9: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8f0ff: mov ecx, dword ptr [eax + 0xa4] */
  ecx = R32((uint32_t)(eax + 0xa4u));
/* f8f105: mov edx, dword ptr [eax + 0x9c] */
  edx = R32((uint32_t)(eax + 0x9cu));
/* f8f10b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f8f10e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8f110: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8f112: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f8f115: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8f118: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
L_f8f11b: /* f8f11b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8f11e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8f11f: mov ecx, esi */
  ecx = esi;
/* f8f121: call 0xf711fe */
  esp -= 4; W32(esp, 0xf8f126u); SPILL(); f_f711fe(); if (g_unwind) return; RELOAD();
/* f8f126: mov eax, dword ptr [esi + 0x1dc] */
  eax = R32((uint32_t)(esi + 0x1dcu));
/* f8f12c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8f12e: je 0xf8f166 */
  if (zf) goto L_f8f166;
L_f8f130: /* f8f130: test byte ptr [esi + 0x1e0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1e0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f137: mov ecx, esi */
  ecx = esi;
/* f8f139: je 0xf8f179 */
  if (zf) goto L_f8f179;
L_f8f13b: /* f8f13b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f13d: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8f143u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f143: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8f146: mov ecx, dword ptr [esi + 0x1dc] */
  ecx = R32((uint32_t)(esi + 0x1dcu));
/* f8f14c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8f14e: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8f151u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f151: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8f154: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8f157: mov eax, dword ptr [esi + 0x1dc] */
  eax = R32((uint32_t)(esi + 0x1dcu));
/* f8f15d: fsub dword ptr [0xfa4134] */
  ST0 = ST0 - (F32((uint32_t)(0xfa4134u)));
/* f8f163: fstp dword ptr [eax + 0x6c] */
  WF32((uint32_t)(eax + 0x6cu), ST0); FPOP();
L_f8f166: /* f8f166: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8f169: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8f170: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8f171: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8f172: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8f173: mov esp, ebp */
  esp = ebp;
/* f8f175: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8f176: ret 4 */
  esp += 8; SPILL(); return;
L_f8f179: /* f8f179: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f17b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8f181u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f181: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8f184: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8f18a: fild dword ptr [eax + 0x98] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x98u)); FPUSH(v); }
/* f8f190: mov ecx, dword ptr [esi + 0x1dc] */
  ecx = R32((uint32_t)(esi + 0x1dcu));
/* f8f196: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* f8f199: fstp dword ptr [ecx + 0x70] */
  WF32((uint32_t)(ecx + 0x70u), ST0); FPOP();
/* f8f19c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f19e: mov ecx, esi */
  ecx = esi;
/* f8f1a0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8f1a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f1a3: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8f1a6: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8f1ac: fild dword ptr [eax + 0x98] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x98u)); FPUSH(v); }
/* f8f1b2: mov ecx, esi */
  ecx = esi;
/* f8f1b4: fsubr dword ptr [ebp + 8] */
  ST0 = (F32((uint32_t)(ebp + 0x8u))) - ST0;
/* f8f1b7: fisub dword ptr [eax + 0xa0] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(eax + 0xa0u)));
/* f8f1bd: mov eax, dword ptr [esi + 0x1dc] */
  eax = R32((uint32_t)(esi + 0x1dcu));
/* f8f1c3: fstp dword ptr [eax + 0x74] */
  WF32((uint32_t)(eax + 0x74u), ST0); FPOP();
/* f8f1c6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f1c8: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8f1ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f1ce: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8f1d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f1d3: mov ecx, esi */
  ecx = esi;
/* f8f1d5: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8f1d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f1d8: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8f1db: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8f1de: mov ecx, dword ptr [esi + 0x1dc] */
  ecx = R32((uint32_t)(esi + 0x1dcu));
/* f8f1e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8f1e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8f1e6: fsub dword ptr [0xfa4dbc] */
  ST0 = ST0 - (F32((uint32_t)(0xfa4dbcu)));
/* f8f1ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8f1ed: fstp dword ptr [ecx + 0x6c] */
  WF32((uint32_t)(ecx + 0x6cu), ST0); FPOP();
/* f8f1f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8f1f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8f1fa: mov esp, ebp */
  esp = ebp;
/* f8f1fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8f1fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8f200(void) {
  LOAD_REGS();
L_f8f200: /* f8f200: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8f203: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8f208: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f8f20b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f20c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f8f20f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8f214u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8f214(); return;
}

void f_f8f214(void) {
  LOAD_REGS();
L_f8f214: /* f8f214: push 0xfa4d88 */
  { uint32_t v = 0xfa4d88u; esp -= 4; W32(esp, v); }
/* f8f219: push 0xfb9c40 */
  { uint32_t v = 0xfb9c40u; esp -= 4; W32(esp, v); }
/* f8f21e: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8f224u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8f224: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8f227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f22b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8f230u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8f230: guest_badaddr(0xf8f230); return;
}

void f_f8f2b0(void) {
  LOAD_REGS();
L_f8f2b0: /* f8f2b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8f2b1: mov ebp, esp */
  ebp = esp;
/* f8f2b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8f2b5: push 0xf9a550 */
  { uint32_t v = 0xf9a550u; esp -= 4; W32(esp, v); }
/* f8f2ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8f2c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f2c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8f2c8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8f2cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8f2cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8f2cd: mov esi, ecx */
  esi = ecx;
/* f8f2cf: mov cl, byte ptr [esi + 0x58] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f8f2d2: xor eax, eax */
  eax = 0;
/* f8f2d4: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f2d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f2d8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8f2db: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* f8f2de: je 0xf8f38e */
  if (zf) goto L_f8f38e;
L_f8f2e4: /* f8f2e4: mov edi, dword ptr [esi + 0xa0] */
  edi = R32((uint32_t)(esi + 0xa0u));
/* f8f2ea: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8f2ec: je 0xf8f38e */
  if (zf) goto L_f8f38e;
L_f8f2f2: /* f8f2f2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8f2f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8f2f6: mov ecx, esi */
  ecx = esi;
/* f8f2f8: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* f8f2fe: call 0xf71019 */
  esp -= 4; W32(esp, 0xf8f303u); SPILL(); f_f71019(); if (g_unwind) return; RELOAD();
/* f8f303: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8f304: mov ecx, esi */
  ecx = esi;
/* f8f306: mov dword ptr [esi + 0xa0], edi */
  W32((uint32_t)(esi + 0xa0u), edi);
/* f8f30c: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf8f311u); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f8f311: test byte ptr [esi + 0x1f8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f318: je 0xf8f38e */
  if (zf) goto L_f8f38e;
L_f8f31a: /* f8f31a: movzx eax, byte ptr [esi + 0x1f0] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x1f0u)));
/* f8f321: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* f8f324: je 0xf8f3a1 */
  if (zf) goto L_f8f3a1;
L_f8f326: /* f8f326: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f8f327: jne 0xf8f38e */
  if (!zf) goto L_f8f38e;
L_f8f329: /* f8f329: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f32b: mov ecx, esi */
  ecx = esi;
/* f8f32d: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8f333u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f333: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8f336: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f338: mov ecx, esi */
  ecx = esi;
/* f8f33a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8f33du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f33d: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8f340: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f8f346: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f348: mov ecx, esi */
  ecx = esi;
/* f8f34a: fmul dword ptr [esi + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1f4u)));
/* f8f350: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8f353: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8f356: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8f359u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f359: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f35b: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8f35e: mov ecx, esi */
  ecx = esi;
/* f8f360: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8f366u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f366: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8f369: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8f36c: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8f372: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8f375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f376: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8f379: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f37a: xor ecx, ecx */
  ecx = 0;
/* f8f37c: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8f37f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8f380: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f381: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_f8f382: /* f8f382: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f8f388: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8f389: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf8f38eu); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
L_f8f38e: /* f8f38e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8f391: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8f392: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8f393: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8f39a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8f39b: mov esp, ebp */
  esp = ebp;
/* f8f39d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8f39e: ret 4 */
  esp += 8; SPILL(); return;
L_f8f3a1: /* f8f3a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f3a3: mov ecx, esi */
  ecx = esi;
/* f8f3a5: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8f3abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f3ab: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8f3ae: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f3b0: mov ecx, esi */
  ecx = esi;
/* f8f3b2: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8f3b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f3b5: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8f3b8: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f8f3be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f3c0: mov ecx, esi */
  ecx = esi;
/* f8f3c2: fmul dword ptr [esi + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1f4u)));
/* f8f3c8: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8f3cb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8f3ce: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8f3d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f3d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f3d3: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8f3d6: mov ecx, esi */
  ecx = esi;
/* f8f3d8: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8f3deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f3de: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8f3e1: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8f3e7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8f3ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8f3ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f3ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8f3f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8f3f2: xor edx, edx */
  edx = 0;
/* f8f3f4: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8f3f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f3f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f3f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8f3fa: jmp 0xf8f382 */
  goto L_f8f382;
}

void f_f8f3fc(void) {
  LOAD_REGS();
L_f8f3fc: /* f8f3fc: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8f3ff: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8f404: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f8f407: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f408: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f8f40b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8f410u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8f410(); return;
}

void f_f8f410(void) {
  LOAD_REGS();
L_f8f410: /* f8f410: push 0xfa4dc0 */
  { uint32_t v = 0xfa4dc0u; esp -= 4; W32(esp, v); }
/* f8f415: push 0xfb9c50 */
  { uint32_t v = 0xfb9c50u; esp -= 4; W32(esp, v); }
/* f8f41a: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8f420u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8f420: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8f423: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f425: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f427: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8f42cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8f42c: guest_badaddr(0xf8f42c); return;
}

void f_f8f490(void) {
  LOAD_REGS();
L_f8f490: /* f8f490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8f491: mov ebp, esp */
  ebp = esp;
/* f8f493: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8f495: push 0xf9a560 */
  { uint32_t v = 0xf9a560u; esp -= 4; W32(esp, v); }
/* f8f49a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8f4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f4a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8f4a8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8f4ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8f4ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8f4ad: mov esi, ecx */
  esi = ecx;
/* f8f4af: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f4b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f4b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8f4b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8f4be: je 0xf8f579 */
  if (zf) goto L_f8f579;
L_f8f4c4: /* f8f4c4: cmp dword ptr [esi + 0x1d0], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1d0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8f4cb: jl 0xf8f579 */
  if ((sf != of)) goto L_f8f579;
L_f8f4d1: /* f8f4d1: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8f4d7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8f4da: je 0xf8f579 */
  if (zf) goto L_f8f579;
L_f8f4e0: /* f8f4e0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* f8f4e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8f4e5: je 0xf8f579 */
  if (zf) goto L_f8f579;
L_f8f4eb: /* f8f4eb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f4ed: mov ecx, esi */
  ecx = esi;
/* f8f4ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8f4f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f4f2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8f4f5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8f4f8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f4fa: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f8f4fd: mov ecx, esi */
  ecx = esi;
/* f8f4ff: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8f502u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f502: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8f505: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8f508: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f8f50b: movzx eax, byte ptr [esi + 0x1f0] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x1f0u)));
/* f8f512: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* f8f515: je 0xf8f58a */
  if (zf) goto L_f8f58a;
L_f8f517: /* f8f517: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f8f518: jne 0xf8f579 */
  if (!zf) goto L_f8f579;
L_f8f51a: /* f8f51a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8f51d: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8f523: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f8f529: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8f52c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f8f52e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8f530: fmul dword ptr [esi + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1f4u)));
/* f8f536: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f538: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f53a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8f53d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f53e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f8f541: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f542: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8f548u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f548: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8f54b: fadd dword ptr [esi + 0x1fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1fcu)));
/* f8f551: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8f557: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* f8f55a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8f55c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f55e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f55f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8f562: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f563: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8f566: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f567: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8f56a: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f8f570: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_f8f573: /* f8f573: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8f579u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8f579: /* f8f579: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8f57c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8f57d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8f57e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8f585: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8f586: mov esp, ebp */
  esp = ebp;
/* f8f588: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8f589: ret  */
  esp += 4; SPILL(); return;
L_f8f58a: /* f8f58a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8f58d: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8f593: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f8f599: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f8f59b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8f59e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8f5a0: fmul dword ptr [esi + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1f4u)));
/* f8f5a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f5a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f5aa: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8f5ad: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f8f5b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f5b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f5b2: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8f5b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f5b8: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8f5bb: fadd dword ptr [esi + 0x1fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1fcu)));
/* f8f5c1: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8f5c7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* f8f5ca: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8f5cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f5cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8f5d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f5d2: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8f5d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f5d6: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8f5d9: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f8f5df: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8f5e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f5e3: jmp 0xf8f573 */
  goto L_f8f573;
}

void f_f8f5e5(void) {
  LOAD_REGS();
L_f8f5e5: /* f8f5e5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8f5e8: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8f5ed: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f8f5f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f5f1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f8f5f4: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8f5f9u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8f5f9(); return;
}

void f_f8f5f9(void) {
  LOAD_REGS();
L_f8f5f9: /* f8f5f9: push 0xfa4df0 */
  { uint32_t v = 0xfa4df0u; esp -= 4; W32(esp, v); }
/* f8f5fe: push 0xfb9c60 */
  { uint32_t v = 0xfb9c60u; esp -= 4; W32(esp, v); }
/* f8f603: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8f609u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8f609: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8f60c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f60e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f610: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8f615u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8f615: guest_badaddr(0xf8f615); return;
}

void f_f8f690(void) {
  LOAD_REGS();
L_f8f690: /* f8f690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8f691: mov ebp, esp */
  ebp = esp;
/* f8f693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8f695: push 0xf9a570 */
  { uint32_t v = 0xf9a570u; esp -= 4; W32(esp, v); }
/* f8f69a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8f6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f6a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8f6a8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8f6ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8f6ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8f6ad: mov esi, ecx */
  esi = ecx;
/* f8f6af: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8f6b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8f6b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f6b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8f6b8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8f6bf: jne 0xf8f6d9 */
  if (!zf) goto L_f8f6d9;
L_f8f6c1: /* f8f6c1: mov eax, 1 */
  eax = 0x1u;
/* f8f6c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8f6c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8f6d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8f6d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8f6d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8f6d3: mov esp, ebp */
  esp = ebp;
/* f8f6d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8f6d6: ret 4 */
  esp += 8; SPILL(); return;
L_f8f6d9: /* f8f6d9: movzx eax, byte ptr [esi + 0x1f0] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x1f0u)));
/* f8f6e0: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* f8f6e3: je 0xf8f73c */
  if (zf) goto L_f8f73c;
L_f8f6e5: /* f8f6e5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f8f6e6: jne 0xf8f6c1 */
  if (!zf) goto L_f8f6c1;
L_f8f6e8: /* f8f6e8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f6ea: mov ecx, esi */
  ecx = esi;
/* f8f6ec: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8f6f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f6f2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8f6f5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f6f7: mov ecx, esi */
  ecx = esi;
/* f8f6f9: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8f6fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f6fc: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f8f6ff: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f8f705: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f707: mov ecx, esi */
  ecx = esi;
/* f8f709: fmul dword ptr [esi + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1f4u)));
/* f8f70f: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f8f712: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8f715: fadd dword ptr [esi + 0x1fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1fcu)));
/* f8f71b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8f71e: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8f724u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f724: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f726: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8f729: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8f72c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f8f72f: mov ecx, esi */
  ecx = esi;
/* f8f731: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8f734u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f734: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f8f737: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8f73a: jmp 0xf8f78e */
  goto L_f8f78e;
L_f8f73c: /* f8f73c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f73e: mov ecx, esi */
  ecx = esi;
/* f8f740: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8f746u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f746: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8f749: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8f74c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f74e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8f751: mov ecx, esi */
  ecx = esi;
/* f8f753: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8f756u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f756: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f8f759: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8f75c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f75e: mov ecx, esi */
  ecx = esi;
/* f8f760: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8f763: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8f769u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f769: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f76b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8f76e: mov ecx, esi */
  ecx = esi;
/* f8f770: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8f773u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f773: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f8f776: fsub dword ptr [esi + 0x1fc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1fcu)));
/* f8f77c: fmul dword ptr [esi + 0x1f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1f4u)));
/* f8f782: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8f785: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8f788: fadd dword ptr [esi + 0x1fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x1fcu)));
L_f8f78e: /* f8f78e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8f791: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8f794: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8f796: jne 0xf8f82b */
  if (!zf) goto L_f8f82b;
L_f8f79c: /* f8f79c: test byte ptr [esi + 0x1f8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f7a3: jne 0xf8f82b */
  if (!zf) goto L_f8f82b;
L_f8f7a9: /* f8f7a9: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8f7ac: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f8f7b2: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* f8f7b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8f7b7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f7ba: jne 0xf8f82b */
  if (!zf) goto L_f8f82b;
L_f8f7bc: /* f8f7bc: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f8f7c2: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* f8f7c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8f7c7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8f7ca: jp 0xf8f82b */
  if (pf) goto L_f8f82b;
L_f8f7cc: /* f8f7cc: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* f8f7d2: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* f8f7d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8f7d7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f7da: jne 0xf8f82b */
  if (!zf) goto L_f8f82b;
L_f8f7dc: /* f8f7dc: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* f8f7e2: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* f8f7e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8f7e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8f7ea: jp 0xf8f82b */
  if (pf) goto L_f8f82b;
L_f8f7ec: /* f8f7ec: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* f8f7ee: mov ecx, esi */
  ecx = esi;
/* f8f7f0: call 0xf716a4 */
  esp -= 4; W32(esp, 0xf8f7f5u); SPILL(); f_f716a4(); if (g_unwind) return; RELOAD();
/* f8f7f5: mov ecx, dword ptr [esi + 0x17c] */
  ecx = R32((uint32_t)(esi + 0x17cu));
/* f8f7fb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8f7fd: je 0xf8f811 */
  if (zf) goto L_f8f811;
L_f8f7ff: /* f8f7ff: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8f801: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xf8f804u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f804: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8f806: jne 0xf8f811 */
  if (!zf) goto L_f8f811;
L_f8f808: /* f8f808: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f809: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8f80a: mov ecx, esi */
  ecx = esi;
/* f8f80c: call 0xf7157d */
  esp -= 4; W32(esp, 0xf8f811u); SPILL(); f_f7157d(); if (g_unwind) return; RELOAD();
L_f8f811: /* f8f811: xor ecx, ecx */
  ecx = 0;
/* f8f813: mov cl, byte ptr [esi + 0x9c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9cu))) & 0xffu);
/* f8f819: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f81a: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8f81d: call 0xf71f87 */
  esp -= 4; W32(esp, 0xf8f822u); SPILL(); f_f71f87(); if (g_unwind) return; RELOAD();
/* f8f822: or dword ptr [esi + 0x58], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x58u), r);
  }
/* f8f826: jmp 0xf8f6c1 */
  goto L_f8f6c1;
L_f8f82b: /* f8f82b: test byte ptr [esi + 0x58], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8f82f: jne 0xf8f6c1 */
  if (!zf) goto L_f8f6c1;
L_f8f835: /* f8f835: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8f836: mov ecx, esi */
  ecx = esi;
/* f8f838: call 0xf7189d */
  esp -= 4; W32(esp, 0xf8f83du); SPILL(); f_f7189d(); if (g_unwind) return; RELOAD();
/* f8f83d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8f840: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8f841: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8f842: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8f849: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8f84a: mov esp, ebp */
  esp = ebp;
/* f8f84c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8f84d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8f850(void) {
  LOAD_REGS();
L_f8f850: /* f8f850: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8f853: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8f858: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f8f85b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f85c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f8f85f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8f864u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8f864(); return;
}

void f_f8f864(void) {
  LOAD_REGS();
L_f8f864: /* f8f864: push 0xfa4e4c */
  { uint32_t v = 0xfa4e4cu; esp -= 4; W32(esp, v); }
/* f8f869: push 0xfb9ccc */
  { uint32_t v = 0xfb9cccu; esp -= 4; W32(esp, v); }
/* f8f86e: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8f874u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8f874: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8f877: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f879: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f87b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8f880u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8f880: guest_badaddr(0xf8f880); return;
}

void f_f8f910(void) {
  LOAD_REGS();
L_f8f910: /* f8f910: and dword ptr [ecx + 0x58], 0xffffffbf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x58u))); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x58u), r);
  }
/* f8f914: jmp 0xf71c12 */
  SPILL(); f_f71c12(); return;
}

void f_f8f930(void) {
  LOAD_REGS();
L_f8f930: /* f8f930: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8f931: mov ebp, esp */
  ebp = esp;
/* f8f933: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8f935: push 0xf9a580 */
  { uint32_t v = 0xf9a580u; esp -= 4; W32(esp, v); }
/* f8f93a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8f940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f941: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8f948: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8f94b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8f94e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8f94f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8f950: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8f951: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8f954: mov esi, ecx */
  esi = ecx;
/* f8f956: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8f959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8f95a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f95b: mov ecx, esi */
  ecx = esi;
/* f8f95d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8f964: call 0xf7201d */
  esp -= 4; W32(esp, 0xf8f969u); SPILL(); f_f7201d(); if (g_unwind) return; RELOAD();
/* f8f969: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8f96c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8f96e: jne 0xf8f988 */
  if (!zf) goto L_f8f988;
L_f8f970: /* f8f970: mov eax, 1 */
  eax = 0x1u;
/* f8f975: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8f978: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8f97f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8f980: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8f981: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8f982: mov esp, ebp */
  esp = ebp;
/* f8f984: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8f985: ret 8 */
  esp += 12; SPILL(); return;
L_f8f988: /* f8f988: cmp byte ptr [esi + 0x30], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8f98c: jne 0xf8fa63 */
  if (!zf) goto L_f8fa63;
L_f8f992: /* f8f992: movzx eax, byte ptr [esi + 0x1f0] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x1f0u)));
/* f8f999: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* f8f99c: je 0xf8f9c9 */
  if (zf) goto L_f8f9c9;
L_f8f99e: /* f8f99e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f8f99f: jne 0xf8fa08 */
  if (!zf) goto L_f8fa08;
L_f8f9a1: /* f8f9a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f9a3: mov ecx, esi */
  ecx = esi;
/* f8f9a5: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8f9abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f9ab: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* f8f9ae: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f9b0: mov ecx, esi */
  ecx = esi;
/* f8f9b2: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8f9b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f9b5: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8f9b8: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8f9bb: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f8f9c1: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* f8f9c4: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* f8f9c7: jmp 0xf8f9ef */
  goto L_f8f9ef;
L_f8f9c9: /* f8f9c9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8f9cb: mov ecx, esi */
  ecx = esi;
/* f8f9cd: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8f9d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f9d3: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* f8f9d6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8f9d8: mov ecx, esi */
  ecx = esi;
/* f8f9da: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8f9ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8f9dd: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8f9e0: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8f9e3: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* f8f9e9: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* f8f9ec: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
L_f8f9ef: /* f8f9ef: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f8f9f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8f9f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8f9f7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8f9fa: call 0xf7214e */
  esp -= 4; W32(esp, 0xf8f9ffu); SPILL(); f_f7214e(); if (g_unwind) return; RELOAD();
/* f8f9ff: fstp dword ptr [esi + 0x1f4] */
  WF32((uint32_t)(esi + 0x1f4u), ST0); FPOP();
/* f8fa05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8fa08: /* f8fa08: fld dword ptr [esi + 0x220] */
  { double v = F32((uint32_t)(esi + 0x220u)); FPUSH(v); }
/* f8fa0e: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f8fa14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8fa16: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8fa19: jne 0xf8fa47 */
  if (!zf) goto L_f8fa47;
L_f8fa1b: /* f8fa1b: mov edx, dword ptr [esi + 0x220] */
  edx = R32((uint32_t)(esi + 0x220u));
/* f8fa21: fld dword ptr [0xfa4394] */
  { double v = F32((uint32_t)(0xfa4394u)); FPUSH(v); }
/* f8fa27: fsub dword ptr [esi + 0x220] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x220u)));
/* f8fa2d: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f8fa33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8fa34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fa35: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8fa38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fa39: call 0xf7214e */
  esp -= 4; W32(esp, 0xf8fa3eu); SPILL(); f_f7214e(); if (g_unwind) return; RELOAD();
/* f8fa3e: fstp dword ptr [esi + 0x1f4] */
  WF32((uint32_t)(esi + 0x1f4u), ST0); FPOP();
/* f8fa44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8fa47: /* f8fa47: mov ecx, esi */
  ecx = esi;
/* f8fa49: call 0xf720ae */
  esp -= 4; W32(esp, 0xf8fa4eu); SPILL(); f_f720ae(); if (g_unwind) return; RELOAD();
/* f8fa4e: xor eax, eax */
  eax = 0;
/* f8fa50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8fa53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8fa5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8fa5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8fa5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8fa5d: mov esp, ebp */
  esp = ebp;
/* f8fa5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8fa60: ret 8 */
  esp += 12; SPILL(); return;
L_f8fa63: /* f8fa63: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* f8fa66: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8fa69: and eax, 0xffffffbf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f8fa6c: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* f8fa6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8fa70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8fa71: xor eax, eax */
  eax = 0;
/* f8fa73: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8fa7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8fa7b: mov esp, ebp */
  esp = ebp;
/* f8fa7d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8fa7e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8fa81(void) {
  LOAD_REGS();
L_f8fa81: /* f8fa81: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8fa84: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8fa89: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8fa8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8fa8d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8fa90: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8fa95u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8fa95(); return;
}

void f_f8fa95(void) {
  LOAD_REGS();
L_f8fa95: /* f8fa95: push 0xfa4e8c */
  { uint32_t v = 0xfa4e8cu; esp -= 4; W32(esp, v); }
/* f8fa9a: push 0xfb9cd4 */
  { uint32_t v = 0xfb9cd4u; esp -= 4; W32(esp, v); }
/* f8fa9f: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8faa5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8faa5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8faa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8faaa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8faac: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8fab1u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8fab1: guest_badaddr(0xf8fab1); return;
}

void f_f8fb30(void) {
  LOAD_REGS();
L_f8fb30: /* f8fb30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8fb31: mov ebp, esp */
  ebp = esp;
/* f8fb33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8fb35: push 0xf9a590 */
  { uint32_t v = 0xf9a590u; esp -= 4; W32(esp, v); }
/* f8fb3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8fb40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fb41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8fb48: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8fb4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8fb4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8fb4d: mov esi, ecx */
  esi = ecx;
/* f8fb4f: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f8fb51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8fb52: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f8fb55: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f8fb5b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8fb5e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8fb65: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8fb6au); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8fb6a: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f8fb70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fb71: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8fb76u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8fb76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fb77: mov ecx, esi */
  ecx = esi;
/* f8fb79: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf8fb7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fb7c: xor ebx, ebx */
  ebx = 0;
/* f8fb7e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8fb80: jne 0xf8fb97 */
  if (!zf) goto L_f8fb97;
L_f8fb82: /* f8fb82: xor eax, eax */
  eax = 0;
/* f8fb84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8fb87: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8fb8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8fb8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8fb90: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8fb91: mov esp, ebp */
  esp = ebp;
/* f8fb93: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8fb94: ret 4 */
  esp += 8; SPILL(); return;
L_f8fb97: /* f8fb97: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8fb9a: jne 0xf8fc0b */
  if (!zf) goto L_f8fc0b;
L_f8fb9c: /* f8fb9c: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8fb9f: xor eax, eax */
  eax = 0;
/* f8fba1: mov al, byte ptr [esi + 0x9c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9cu))) & 0xffu);
/* f8fba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fba8: call 0xf71f87 */
  esp -= 4; W32(esp, 0xf8fbadu); SPILL(); f_f71f87(); if (g_unwind) return; RELOAD();
/* f8fbad: mov ecx, dword ptr [0xfba360] */
  ecx = R32((uint32_t)(0xfba360u));
/* f8fbb3: mov edi, dword ptr [0xfce334] */
  edi = R32((uint32_t)(0xfce334u));
/* f8fbb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8fbba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fbbb: mov ecx, esi */
  ecx = esi;
/* f8fbbd: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* f8fbc0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf8fbc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fbc2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fbc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8fbc5: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f8fbc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fbc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fbca: mov ecx, esi */
  ecx = esi;
/* f8fbcc: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf8fbcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fbcf: mov edx, dword ptr [0xfba404] */
  edx = R32((uint32_t)(0xfba404u));
/* f8fbd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8fbd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8fbd7: mov ecx, esi */
  ecx = esi;
/* f8fbd9: mov byte ptr [ebp + 0xb], 3 */
  W8((uint32_t)(ebp + 0xbu), 0x3u);
/* f8fbdd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf8fbdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fbdf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fbe1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8fbe2: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* f8fbe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fbe6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fbe7: mov ecx, esi */
  ecx = esi;
/* f8fbe9: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf8fbecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fbec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fbee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8fbef: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* f8fbf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fbf3: mov eax, dword ptr [0xfba4a4] */
  eax = R32((uint32_t)(0xfba4a4u));
/* f8fbf8: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* f8fbfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fbff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fc00: mov ecx, esi */
  ecx = esi;
/* f8fc02: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* f8fc05: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* f8fc08: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf8fc0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8fc0b: /* f8fc0b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8fc0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8fc0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8fc10: mov eax, 1 */
  eax = 0x1u;
/* f8fc15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8fc1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8fc1d: mov esp, ebp */
  esp = ebp;
/* f8fc1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8fc20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8fc23(void) {
  LOAD_REGS();
L_f8fc23: /* f8fc23: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8fc26: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8fc2b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8fc2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8fc2f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8fc32: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8fc37u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8fc37(); return;
}

void f_f8fc37(void) {
  LOAD_REGS();
L_f8fc37: /* f8fc37: push 0xfa4ec8 */
  { uint32_t v = 0xfa4ec8u; esp -= 4; W32(esp, v); }
/* f8fc3c: push 0xfb9cec */
  { uint32_t v = 0xfb9cecu; esp -= 4; W32(esp, v); }
/* f8fc41: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8fc47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8fc47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8fc4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8fc4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8fc4e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8fc53u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8fc53: guest_badaddr(0xf8fc53); return;
}

void f_f8fcb0(void) {
  LOAD_REGS();
L_f8fcb0: /* f8fcb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8fcb1: mov ebp, esp */
  ebp = esp;
/* f8fcb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8fcb5: push 0xf9a5a0 */
  { uint32_t v = 0xf9a5a0u; esp -= 4; W32(esp, v); }
/* f8fcba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8fcc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fcc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8fcc8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8fccb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8fccc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8fccd: mov esi, ecx */
  esi = ecx;
/* f8fccf: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8fcd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8fcd4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8fcd7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8fcde: je 0xf8fd43 */
  if (zf) goto L_f8fd43;
L_f8fce0: /* f8fce0: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8fce6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8fce8: je 0xf8fd43 */
  if (zf) goto L_f8fd43;
L_f8fcea: /* f8fcea: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8fced: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8fcee: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf8fcf3u); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f8fcf3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8fcf5: mov ecx, esi */
  ecx = esi;
/* f8fcf7: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8fcfau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fcfa: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8fcfd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fcff: mov ecx, esi */
  ecx = esi;
/* f8fd01: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8fd04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fd04: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8fd07: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8fd09: mov ecx, esi */
  ecx = esi;
/* f8fd0b: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8fd11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fd11: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8fd14: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fd16: mov ecx, esi */
  ecx = esi;
/* f8fd18: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8fd1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fd1e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8fd21: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8fd24: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8fd27: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8fd2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fd2b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8fd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fd2f: xor ecx, ecx */
  ecx = 0;
/* f8fd31: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8fd34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8fd35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fd36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fd37: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f8fd3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8fd3e: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf8fd43u); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
L_f8fd43: /* f8fd43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8fd46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8fd47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8fd48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8fd4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8fd50: mov esp, ebp */
  esp = ebp;
/* f8fd52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8fd53: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8fd56(void) {
  LOAD_REGS();
L_f8fd56: /* f8fd56: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8fd59: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8fd5e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* f8fd61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fd62: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* f8fd65: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8fd6au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8fd6a(); return;
}

void f_f8fd6a(void) {
  LOAD_REGS();
L_f8fd6a: /* f8fd6a: push 0xfa4f08 */
  { uint32_t v = 0xfa4f08u; esp -= 4; W32(esp, v); }
/* f8fd6f: push 0xfb9d04 */
  { uint32_t v = 0xfb9d04u; esp -= 4; W32(esp, v); }
/* f8fd74: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8fd7au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8fd7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8fd7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8fd7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8fd81: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8fd86u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8fd86: guest_badaddr(0xf8fd86); return;
}

void f_f8fdd0(void) {
  LOAD_REGS();
L_f8fdd0: /* f8fdd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8fdd1: mov ebp, esp */
  ebp = esp;
/* f8fdd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8fdd5: push 0xf9a5b0 */
  { uint32_t v = 0xf9a5b0u; esp -= 4; W32(esp, v); }
/* f8fdda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8fde0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fde1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8fde8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8fdeb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8fdee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8fdef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8fdf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8fdf1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8fdf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fdf5: mov esi, ecx */
  esi = ecx;
/* f8fdf7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8fdfe: call 0xf710d7 */
  esp -= 4; W32(esp, 0xf8fe03u); SPILL(); f_f710d7(); if (g_unwind) return; RELOAD();
/* f8fe03: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8fe07: je 0xf8ffa5 */
  if (zf) goto L_f8ffa5;
L_f8fe0d: /* f8fe0d: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8fe13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8fe15: je 0xf8ffa5 */
  if (zf) goto L_f8ffa5;
L_f8fe1b: /* f8fe1b: mov ecx, dword ptr [eax + 0x1ec] */
  ecx = R32((uint32_t)(eax + 0x1ecu));
/* f8fe21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8fe23: je 0xf8ffa5 */
  if (zf) goto L_f8ffa5;
L_f8fe29: /* f8fe29: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fe2b: mov ecx, esi */
  ecx = esi;
/* f8fe2d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8fe30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fe30: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8fe33: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8fe36: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fe38: mov ecx, esi */
  ecx = esi;
/* f8fe3a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8fe3d: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8fe40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fe40: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8fe43: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8fe46: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fe48: mov ecx, esi */
  ecx = esi;
/* f8fe4a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8fe4d: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8fe53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fe53: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8fe56: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8fe58: mov ecx, esi */
  ecx = esi;
/* f8fe5a: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8fe60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fe60: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8fe63: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8fe69: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8fe6c: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* f8fe6f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8fe72: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8fe75: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8fe77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fe78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fe79: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8fe7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8fe7d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8fe80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fe81: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* f8fe83: fsubr dword ptr [ebp - 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffecu))) - ST0;
/* f8fe86: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8fe89: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8fe8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fe8f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fe91: mov ecx, esi */
  ecx = esi;
/* f8fe93: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8fe99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fe99: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8fe9c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8fe9e: mov ecx, esi */
  ecx = esi;
/* f8fea0: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8fea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fea6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8fea9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8feac: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f8feb2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8feb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8feb5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8feb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8feb9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f8febc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8febd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8febe: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8fec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fec4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8fec6: mov ecx, esi */
  ecx = esi;
/* f8fec8: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8feceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fece: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8fed1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8fed3: mov ecx, esi */
  ecx = esi;
/* f8fed5: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8fedbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8fedb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8fede: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8fee1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8fee4: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* f8fee7: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f8feed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8feef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8fef0: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8fef3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8fef4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8fef7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8fef8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8fef9: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8feffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8feff: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8ff05: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8ff07: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8ff0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ff0a: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8ff0d: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8ff13: fild dword ptr [eax + 0x1e0] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x1e0u)); FPUSH(v); }
/* f8ff19: fidiv dword ptr [eax + 0x1ec] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(eax + 0x1ecu)));
/* f8ff1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* f8ff21: fst dword ptr [esi + 0x204] */
  WF32((uint32_t)(esi + 0x204u), ST0);
/* f8ff27: fcomp dword ptr [0xfa4ac0] */
  fpu_com(ST0, F32((uint32_t)(0xfa4ac0u)));
  FPOP();
/* f8ff2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8ff2f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8ff32: jp 0xf8ff3e */
  if (pf) goto L_f8ff3e;
L_f8ff34: /* f8ff34: mov dword ptr [esi + 0x204], 0x41400000 */
  W32((uint32_t)(esi + 0x204u), 0x41400000u);
L_f8ff3e: /* f8ff3e: fsub dword ptr [esi + 0x204] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x204u)));
/* f8ff44: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8ff4a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8ff4c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ff4f: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8ff55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ff55: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8ff58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ff59: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8ff5c: fmul dword ptr [esi + 0x200] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x200u)));
/* f8ff62: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8ff65: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf8ff6bu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f8ff6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8ff6d: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8ff70: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8ff73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ff76: mov ecx, esi */
  ecx = esi;
/* f8ff78: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f8ff7b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8ff7e: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8ff84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ff84: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8ff8a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8ff8d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8ff90: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8ff92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8ff93: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8ff96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8ff97: mov edx, dword ptr [esi + 0x204] */
  edx = R32((uint32_t)(esi + 0x204u));
/* f8ff9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8ff9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8ff9f: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf8ffa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8ffa5: /* f8ffa5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ffa8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ffa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ffaa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ffb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ffb2: mov esp, ebp */
  esp = ebp;
/* f8ffb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ffb5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8ffb8(void) {
  LOAD_REGS();
L_f8ffb8: /* f8ffb8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8ffbb: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ffc0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f8ffc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ffc4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f8ffc7: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ffccu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ffcc(); return;
}

void f_f8ffcc(void) {
  LOAD_REGS();
L_f8ffcc: /* f8ffcc: push 0xfa4f44 */
  { uint32_t v = 0xfa4f44u; esp -= 4; W32(esp, v); }
/* f8ffd1: push 0xfb9d0c */
  { uint32_t v = 0xfb9d0cu; esp -= 4; W32(esp, v); }
/* f8ffd6: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ffdcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ffdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ffdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ffe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ffe3: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ffe8u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8ffe8: guest_badaddr(0xf8ffe8); return;
}

void f_f90080(void) {
  LOAD_REGS();
L_f90080: /* f90080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f90081: mov ebp, esp */
  ebp = esp;
/* f90083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f90085: push 0xf9a5c0 */
  { uint32_t v = 0xf9a5c0u; esp -= 4; W32(esp, v); }
/* f9008a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f90090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f90098: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9009b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9009c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9009d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9009e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f900a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f900a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f900a5: mov esi, ecx */
  esi = ecx;
/* f900a7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f900ae: call 0xf711fe */
  esp -= 4; W32(esp, 0xf900b3u); SPILL(); f_f711fe(); if (g_unwind) return; RELOAD();
/* f900b3: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f900b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f900bb: je 0xf900e2 */
  if (zf) goto L_f900e2;
L_f900bd: /* f900bd: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* f900c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f900c1: xor eax, eax */
  eax = 0;
/* f900c3: mov al, byte ptr [esi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f900c6: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* f900c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f900ca: push 0xfb9d1c */
  { uint32_t v = 0xfb9d1cu; esp -= 4; W32(esp, v); }
/* f900cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f900d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f900d1: call 0xf72211 */
  esp -= 4; W32(esp, 0xf900d6u); SPILL(); f_f72211(); if (g_unwind) return; RELOAD();
/* f900d6: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f900d9: fmul qword ptr [0xfa4fe0] */
  ST0 = ST0 * (F64((uint32_t)(0xfa4fe0u)));
/* f900df: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
L_f900e2: /* f900e2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f900e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f900e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f900e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f900ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f900ef: mov esp, ebp */
  esp = ebp;
/* f900f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f900f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f900f5(void) {
  LOAD_REGS();
L_f900f5: /* f900f5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f900f8: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f900fd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f90100: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90101: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f90104: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90109u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f90109(); return;
}

void f_f900f8(void) {
  LOAD_REGS();
L_f900f8: /* f900f8: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f900fd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f90100: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90101: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f90104: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90109u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f90109(); return;
}

void f_f90109(void) {
  LOAD_REGS();
L_f90109: /* f90109: push 0xfa4f88 */
  { uint32_t v = 0xfa4f88u; esp -= 4; W32(esp, v); }
/* f9010e: push 0xfb9d20 */
  { uint32_t v = 0xfb9d20u; esp -= 4; W32(esp, v); }
/* f90113: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf90119u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f90119: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9011c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9011e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90120: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90125u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f90125: guest_badaddr(0xf90125); return;
}

void f_f90160(void) {
  LOAD_REGS();
L_f90160: /* f90160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f90161: mov ebp, esp */
  ebp = esp;
/* f90163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f90165: push 0xf9a5d0 */
  { uint32_t v = 0xf9a5d0u; esp -= 4; W32(esp, v); }
/* f9016a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f90170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f90178: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9017b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9017c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9017d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9017e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f90181: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f90184: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f90185: mov esi, ecx */
  esi = ecx;
/* f90187: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f9018e: call 0xf71212 */
  esp -= 4; W32(esp, 0xf90193u); SPILL(); f_f71212(); if (g_unwind) return; RELOAD();
/* f90193: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90195: jne 0xf901aa */
  if (!zf) goto L_f901aa;
L_f90197: /* f90197: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9019a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f901a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f901a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f901a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f901a4: mov esp, ebp */
  esp = ebp;
/* f901a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f901a7: ret 4 */
  esp += 8; SPILL(); return;
L_f901aa: /* f901aa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f901ac: jne 0xf90240 */
  if (!zf) goto L_f90240;
L_f901b2: /* f901b2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f901b5: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* f901bb: mov dword ptr [esi + 0x1d0], eax */
  W32((uint32_t)(esi + 0x1d0u), eax);
/* f901c1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f901c3: mov ecx, esi */
  ecx = esi;
/* f901c5: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf901cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f901cb: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f901ce: xor ecx, ecx */
  ecx = 0;
/* f901d0: mov edi, 0x40 */
  edi = 0x40u;
/* f901d5: jmp 0xf901e0 */
  goto L_f901e0;
L_f901e0: /* f901e0: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f901e6: cmp ecx, dword ptr [eax + 0x284] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f901ec: jge 0xf90258 */
  if ((sf == of)) goto L_f90258;
L_f901ee: /* f901ee: mov edx, dword ptr [eax + 0x280] */
  edx = R32((uint32_t)(eax + 0x280u));
/* f901f4: fadd dword ptr [edx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + ecx*4)));
/* f901f7: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f901fa: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f90200: fsub dword ptr [0xfa4dbc] */
  ST0 = ST0 - (F32((uint32_t)(0xfa4dbcu)));
/* f90206: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* f90208: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f9020a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9020c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9020f: jne 0xf90234 */
  if (!zf) goto L_f90234;
L_f90211: /* f90211: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f90217: fadd dword ptr [0xfa4dbc] */
  ST0 = ST0 + (F32((uint32_t)(0xfa4dbcu)));
/* f9021d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* f9021f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f90221: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90223: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f90226: jp 0xf90234 */
  if (pf) goto L_f90234;
L_f90228: /* f90228: or dword ptr [esi + 0x58], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x58u), r);
  }
/* f9022b: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
L_f90231: /* f90231: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f90232: jmp 0xf901e0 */
  goto L_f901e0;
L_f90234: /* f90234: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* f9023a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f9023c: jl 0xf90231 */
  if ((sf != of)) goto L_f90231;
L_f9023e: /* f9023e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f90240: /* f90240: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f90243: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f90244: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f90245: mov eax, 1 */
  eax = 0x1u;
/* f9024a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f90251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f90252: mov esp, ebp */
  esp = ebp;
/* f90254: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f90255: ret 4 */
  esp += 8; SPILL(); return;
L_f90258: /* f90258: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9025a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f9025c: mov ecx, esi */
  ecx = esi;
/* f9025e: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf90264u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90264: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f90267: xor edx, edx */
  edx = 0;
/* f90269: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f90270: /* f90270: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f90276: cmp edx, dword ptr [ecx + 0x284] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9027c: jge 0xf9023e */
  if ((sf == of)) goto L_f9023e;
L_f9027e: /* f9027e: fld dword ptr [0xfa5054] */
  { double v = F32((uint32_t)(0xfa5054u)); FPUSH(v); }
/* f90284: mov ebx, dword ptr [esi + 0x28] */
  ebx = R32((uint32_t)(esi + 0x28u));
/* f90287: fadd st(1) */
  ST0 = ST0 + STI(1);
/* f90289: fcomp dword ptr [ebx + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0xa8u)));
  FPOP();
/* f9028f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90291: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f90294: jp 0xf9035b */
  if (pf) goto L_f9035b;
L_f9029a: /* f9029a: mov eax, dword ptr [ecx + 0x280] */
  eax = R32((uint32_t)(ecx + 0x280u));
/* f902a0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f902a2: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* f902a5: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* f902a8: fsub dword ptr [0xfa5054] */
  ST0 = ST0 - (F32((uint32_t)(0xfa5054u)));
/* f902ae: fcomp dword ptr [ebx + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0xa8u)));
  FPOP();
/* f902b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f902b6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f902b9: jne 0xf9035b */
  if (!zf) goto L_f9035b;
L_f902bf: /* f902bf: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* f902c1: fcomp dword ptr [0xfa5050] */
  fpu_com(ST0, F32((uint32_t)(0xfa5050u)));
  FPOP();
/* f902c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f902c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f902cc: jne 0xf9035b */
  if (!zf) goto L_f9035b;
L_f902d2: /* f902d2: mov dword ptr [esi + 0x1d4], edx */
  W32((uint32_t)(esi + 0x1d4u), edx);
/* f902d8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f902da: mov eax, dword ptr [ecx + 0x29c] */
  eax = R32((uint32_t)(ecx + 0x29cu));
/* f902e0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f902e2: jne 0xf90311 */
  if (!zf) goto L_f90311;
L_f902e4: /* f902e4: mov eax, dword ptr [ecx + 0x2a0] */
  eax = R32((uint32_t)(ecx + 0x2a0u));
/* f902ea: mov edx, eax */
  edx = eax;
/* f902ec: not edx */
  edx = ~edx;
/* f902ee: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f902f0: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f902f3: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f902f5: mov dword ptr [ecx + 0x2a0], edx */
  W32((uint32_t)(ecx + 0x2a0u), edx);
/* f902fb: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f90301: test byte ptr [eax + 0x2a0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x2a0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90308: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f9030b: je 0xf9032c */
  if (zf) goto L_f9032c;
L_f9030d: /* f9030d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f9030f: jmp 0xf9032e */
  goto L_f9032e;
L_f90311: /* f90311: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f90314: je 0xf90333 */
  if (zf) goto L_f90333;
L_f90316: /* f90316: mov dword ptr [ecx + 0x29c], edx */
  W32((uint32_t)(ecx + 0x29cu), edx);
/* f9031c: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f90322: and dword ptr [eax + 0x2a0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2a0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x2a0u), r);
  }
/* f90329: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
L_f9032c: /* f9032c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
L_f9032e: /* f9032e: call 0xf71f87 */
  esp -= 4; W32(esp, 0xf90333u); SPILL(); f_f71f87(); if (g_unwind) return; RELOAD();
L_f90333: /* f90333: mov ecx, dword ptr [0xfba458] */
  ecx = R32((uint32_t)(0xfba458u));
/* f90339: mov esi, dword ptr [esi + 0x1cc] */
  esi = R32((uint32_t)(esi + 0x1ccu));
/* f9033f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90341: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90342: mov ecx, esi */
  ecx = esi;
/* f90344: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf9034au); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f9034a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9034c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9034e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90351: mov ecx, esi */
  ecx = esi;
/* f90353: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf90356u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90356: jmp 0xf90240 */
  goto L_f90240;
L_f9035b: /* f9035b: mov eax, dword ptr [ecx + 0x280] */
  eax = R32((uint32_t)(ecx + 0x280u));
/* f90361: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* f90364: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f90365: jmp 0xf90270 */
  goto L_f90270;
}

void f_f901d7(void) {
  LOAD_REGS();
L_f901d7: /* f901d7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* f901de: mov edi, edi */
  edi = edi;
L_f901e0: /* f901e0: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f901e6: cmp ecx, dword ptr [eax + 0x284] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f901ec: jge 0xf90258 */
  if ((sf == of)) goto L_f90258;
L_f901ee: /* f901ee: mov edx, dword ptr [eax + 0x280] */
  edx = R32((uint32_t)(eax + 0x280u));
/* f901f4: fadd dword ptr [edx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + ecx*4)));
/* f901f7: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f901fa: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f90200: fsub dword ptr [0xfa4dbc] */
  ST0 = ST0 - (F32((uint32_t)(0xfa4dbcu)));
/* f90206: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* f90208: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f9020a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9020c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9020f: jne 0xf90234 */
  if (!zf) goto L_f90234;
L_f90211: /* f90211: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f90217: fadd dword ptr [0xfa4dbc] */
  ST0 = ST0 + (F32((uint32_t)(0xfa4dbcu)));
/* f9021d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* f9021f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f90221: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90223: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f90226: jp 0xf90234 */
  if (pf) goto L_f90234;
L_f90228: /* f90228: or dword ptr [esi + 0x58], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x58u), r);
  }
/* f9022b: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
L_f90231: /* f90231: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f90232: jmp 0xf901e0 */
  goto L_f901e0;
L_f90234: /* f90234: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* f9023a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f9023c: jl 0xf90231 */
  if ((sf != of)) goto L_f90231;
L_f9023e: /* f9023e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f90240: /* f90240: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f90243: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f90244: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f90245: mov eax, 1 */
  eax = 0x1u;
/* f9024a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f90251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f90252: mov esp, ebp */
  esp = ebp;
/* f90254: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f90255: ret 4 */
  esp += 8; SPILL(); return;
L_f90258: /* f90258: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9025a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f9025c: mov ecx, esi */
  ecx = esi;
/* f9025e: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf90264u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90264: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f90267: xor edx, edx */
  edx = 0;
/* f90269: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f90270: /* f90270: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f90276: cmp edx, dword ptr [ecx + 0x284] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9027c: jge 0xf9023e */
  if ((sf == of)) goto L_f9023e;
L_f9027e: /* f9027e: fld dword ptr [0xfa5054] */
  { double v = F32((uint32_t)(0xfa5054u)); FPUSH(v); }
/* f90284: mov ebx, dword ptr [esi + 0x28] */
  ebx = R32((uint32_t)(esi + 0x28u));
/* f90287: fadd st(1) */
  ST0 = ST0 + STI(1);
/* f90289: fcomp dword ptr [ebx + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0xa8u)));
  FPOP();
/* f9028f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90291: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f90294: jp 0xf9035b */
  if (pf) goto L_f9035b;
L_f9029a: /* f9029a: mov eax, dword ptr [ecx + 0x280] */
  eax = R32((uint32_t)(ecx + 0x280u));
/* f902a0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f902a2: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* f902a5: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* f902a8: fsub dword ptr [0xfa5054] */
  ST0 = ST0 - (F32((uint32_t)(0xfa5054u)));
/* f902ae: fcomp dword ptr [ebx + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0xa8u)));
  FPOP();
/* f902b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f902b6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f902b9: jne 0xf9035b */
  if (!zf) goto L_f9035b;
L_f902bf: /* f902bf: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* f902c1: fcomp dword ptr [0xfa5050] */
  fpu_com(ST0, F32((uint32_t)(0xfa5050u)));
  FPOP();
/* f902c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f902c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f902cc: jne 0xf9035b */
  if (!zf) goto L_f9035b;
L_f902d2: /* f902d2: mov dword ptr [esi + 0x1d4], edx */
  W32((uint32_t)(esi + 0x1d4u), edx);
/* f902d8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f902da: mov eax, dword ptr [ecx + 0x29c] */
  eax = R32((uint32_t)(ecx + 0x29cu));
/* f902e0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f902e2: jne 0xf90311 */
  if (!zf) goto L_f90311;
L_f902e4: /* f902e4: mov eax, dword ptr [ecx + 0x2a0] */
  eax = R32((uint32_t)(ecx + 0x2a0u));
/* f902ea: mov edx, eax */
  edx = eax;
/* f902ec: not edx */
  edx = ~edx;
/* f902ee: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f902f0: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f902f3: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f902f5: mov dword ptr [ecx + 0x2a0], edx */
  W32((uint32_t)(ecx + 0x2a0u), edx);
/* f902fb: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f90301: test byte ptr [eax + 0x2a0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x2a0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90308: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f9030b: je 0xf9032c */
  if (zf) goto L_f9032c;
L_f9030d: /* f9030d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f9030f: jmp 0xf9032e */
  goto L_f9032e;
L_f90311: /* f90311: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f90314: je 0xf90333 */
  if (zf) goto L_f90333;
L_f90316: /* f90316: mov dword ptr [ecx + 0x29c], edx */
  W32((uint32_t)(ecx + 0x29cu), edx);
/* f9031c: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f90322: and dword ptr [eax + 0x2a0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2a0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x2a0u), r);
  }
/* f90329: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
L_f9032c: /* f9032c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
L_f9032e: /* f9032e: call 0xf71f87 */
  esp -= 4; W32(esp, 0xf90333u); SPILL(); f_f71f87(); if (g_unwind) return; RELOAD();
L_f90333: /* f90333: mov ecx, dword ptr [0xfba458] */
  ecx = R32((uint32_t)(0xfba458u));
/* f90339: mov esi, dword ptr [esi + 0x1cc] */
  esi = R32((uint32_t)(esi + 0x1ccu));
/* f9033f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90341: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90342: mov ecx, esi */
  ecx = esi;
/* f90344: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf9034au); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f9034a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9034c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9034e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90351: mov ecx, esi */
  ecx = esi;
/* f90353: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf90356u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90356: jmp 0xf90240 */
  goto L_f90240;
L_f9035b: /* f9035b: mov eax, dword ptr [ecx + 0x280] */
  eax = R32((uint32_t)(ecx + 0x280u));
/* f90361: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* f90364: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f90365: jmp 0xf90270 */
  goto L_f90270;
}

void f_f9036a(void) {
  LOAD_REGS();
L_f9036a: /* f9036a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f9036d: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f90372: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f90375: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90376: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f90379: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9037eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f9037e(); return;
}

void f_f9037e(void) {
  LOAD_REGS();
L_f9037e: /* f9037e: push 0xfa4ff0 */
  { uint32_t v = 0xfa4ff0u; esp -= 4; W32(esp, v); }
/* f90383: push 0xfb9d28 */
  { uint32_t v = 0xfb9d28u; esp -= 4; W32(esp, v); }
/* f90388: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf9038eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f9038e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f90391: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90393: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90395: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9039au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9039a: guest_badaddr(0xf9039a); return;
}

void f_f90430(void) {
  LOAD_REGS();
L_f90430: /* f90430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f90431: mov ebp, esp */
  ebp = esp;
/* f90433: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f90435: push 0xf9a5e0 */
  { uint32_t v = 0xf9a5e0u; esp -= 4; W32(esp, v); }
/* f9043a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f90440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90441: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f90448: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9044b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f9044e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9044f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f90450: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f90451: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f90454: mov esi, ecx */
  esi = ecx;
/* f90456: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f90459: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9045a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9045b: mov ecx, esi */
  ecx = esi;
/* f9045d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f90464: call 0xf7201d */
  esp -= 4; W32(esp, 0xf90469u); SPILL(); f_f7201d(); if (g_unwind) return; RELOAD();
/* f90469: cmp byte ptr [esi + 0x30], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f9046d: jne 0xf90561 */
  if (!zf) goto L_f90561;
L_f90473: /* f90473: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* f90479: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f9047b: jl 0xf90561 */
  if ((sf != of)) goto L_f90561;
L_f90481: /* f90481: mov edx, dword ptr [esi + 0x1cc] */
  edx = R32((uint32_t)(esi + 0x1ccu));
/* f90487: cmp eax, dword ptr [edx + 0x284] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9048d: jge 0xf90561 */
  if ((sf == of)) goto L_f90561;
L_f90493: /* f90493: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f90495: mov ecx, esi */
  ecx = esi;
/* f90497: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf9049du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9049d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* f904a0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f904a3: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* f904a6: xor eax, eax */
  eax = 0;
L_f904a8: /* f904a8: cmp eax, dword ptr [esi + 0x1d0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f904ae: jge 0xf904c8 */
  if ((sf == of)) goto L_f904c8;
L_f904b0: /* f904b0: mov edx, dword ptr [esi + 0x1cc] */
  edx = R32((uint32_t)(esi + 0x1ccu));
/* f904b6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f904b9: mov ecx, dword ptr [edx + 0x280] */
  ecx = R32((uint32_t)(edx + 0x280u));
/* f904bf: fadd dword ptr [ecx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4)));
/* f904c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f904c3: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* f904c6: jmp 0xf904a8 */
  goto L_f904a8;
L_f904c8: /* f904c8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f904ca: mov ecx, esi */
  ecx = esi;
/* f904cc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf904cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f904cf: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f904d2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f904d4: mov ecx, esi */
  ecx = esi;
/* f904d6: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf904dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f904dc: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f904df: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f904e2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f904e5: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* f904e8: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f904ee: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* f904f1: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* f904f4: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f904fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f904fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f904ff: jp 0xf9050b */
  if (pf) goto L_f9050b;
L_f90501: /* f90501: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f90503: fld dword ptr [0xfa4138] */
  { double v = F32((uint32_t)(0xfa4138u)); FPUSH(v); }
/* f90509: jmp 0xf9051c */
  goto L_f9051c;
L_f9050b: /* f9050b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f9050e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* f90510: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90512: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f90515: jp 0xf9051c */
  if (pf) goto L_f9051c;
L_f90517: /* f90517: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f90519: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
L_f9051c: /* f9051c: mov edx, dword ptr [esi + 0x1cc] */
  edx = R32((uint32_t)(esi + 0x1ccu));
/* f90522: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* f90528: mov ecx, dword ptr [edx + 0x280] */
  ecx = R32((uint32_t)(edx + 0x280u));
/* f9052e: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* f90531: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* f90537: mov esi, dword ptr [esi + 0x1cc] */
  esi = R32((uint32_t)(esi + 0x1ccu));
/* f9053d: mov edx, dword ptr [0xfba494] */
  edx = R32((uint32_t)(0xfba494u));
/* f90543: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90545: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90546: mov ecx, esi */
  ecx = esi;
/* f90548: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f9054b: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf90551u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f90551: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f90553: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90555: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* f90558: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9055a: mov ecx, esi */
  ecx = esi;
/* f9055c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf9055fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9055f: jmp 0xf9056f */
  goto L_f9056f;
L_f90561: /* f90561: and dword ptr [esi + 0x58], 0xffffffbf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x58u), r);
  }
/* f90565: mov dword ptr [esi + 0x1d0], 0xffffffff */
  W32((uint32_t)(esi + 0x1d0u), 0xffffffffu);
L_f9056f: /* f9056f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f90572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f90573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f90574: xor eax, eax */
  eax = 0;
/* f90576: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9057d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9057e: mov esp, ebp */
  esp = ebp;
/* f90580: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f90581: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f90584(void) {
  LOAD_REGS();
L_f90584: /* f90584: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f90587: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f9058c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f9058f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90590: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f90593: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90598u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f90598(); return;
}

void f_f90598(void) {
  LOAD_REGS();
L_f90598: /* f90598: push 0xfa5058 */
  { uint32_t v = 0xfa5058u; esp -= 4; W32(esp, v); }
/* f9059d: push 0xfb9d38 */
  { uint32_t v = 0xfb9d38u; esp -= 4; W32(esp, v); }
/* f905a2: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf905a8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f905a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f905ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f905ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f905af: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf905b4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f905b4: guest_badaddr(0xf905b4); return;
}

void f_f90630(void) {
  LOAD_REGS();
L_f90630: /* f90630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f90631: mov ebp, esp */
  ebp = esp;
/* f90633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f90635: push 0xf9a5f0 */
  { uint32_t v = 0xf9a5f0u; esp -= 4; W32(esp, v); }
/* f9063a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f90640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f90648: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9064b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9064c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9064d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9064e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f90651: mov esi, ecx */
  esi = ecx;
/* f90653: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f9065a: call 0xf71960 */
  esp -= 4; W32(esp, 0xf9065fu); SPILL(); f_f71960(); if (g_unwind) return; RELOAD();
/* f9065f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f90661: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* f90664: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf9066au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9066a: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f9066d: xor ecx, ecx */
  ecx = 0;
/* f9066f: nop  */
L_f90670: /* f90670: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f90676: cmp ecx, dword ptr [eax + 0x284] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9067c: jge 0xf906c2 */
  if ((sf == of)) goto L_f906c2;
L_f9067e: /* f9067e: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f90681: jne 0xf906e3 */
  if (!zf) goto L_f906e3;
L_f90683: /* f90683: mov edx, dword ptr [eax + 0x280] */
  edx = R32((uint32_t)(eax + 0x280u));
/* f90689: fadd dword ptr [edx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + ecx*4)));
/* f9068c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f9068f: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f90695: fsub dword ptr [0xfa4dbc] */
  ST0 = ST0 - (F32((uint32_t)(0xfa4dbcu)));
/* f9069b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* f9069d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f9069f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f906a1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f906a4: jne 0xf906bf */
  if (!zf) goto L_f906bf;
L_f906a6: /* f906a6: fld dword ptr [edx + 0xa8] */
  { double v = F32((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* f906ac: fadd dword ptr [0xfa4dbc] */
  ST0 = ST0 + (F32((uint32_t)(0xfa4dbcu)));
/* f906b2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* f906b4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f906b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f906b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f906bb: jp 0xf906bf */
  if (pf) goto L_f906bf;
L_f906bd: /* f906bd: mov edi, ecx */
  edi = ecx;
L_f906bf: /* f906bf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f906c0: jmp 0xf90670 */
  goto L_f90670;
L_f906c2: /* f906c2: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f906c5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f906c7: jne 0xf906e5 */
  if (!zf) goto L_f906e5;
L_f906c9: /* f906c9: mov dword ptr [esi + 0x7c], 0 */
  W32((uint32_t)(esi + 0x7cu), 0x0u);
/* f906d0: xor eax, eax */
  eax = 0;
/* f906d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f906d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f906dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f906dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f906de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f906df: mov esp, ebp */
  esp = ebp;
/* f906e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f906e2: ret  */
  esp += 4; SPILL(); return;
L_f906e3: /* f906e3: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f906e5: /* f906e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f906e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f906e9: mov dword ptr [esi + 0x7c], 5 */
  W32((uint32_t)(esi + 0x7cu), 0x5u);
/* f906f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f906f1: xor eax, eax */
  eax = 0;
/* f906f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f906fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f906fb: mov esp, ebp */
  esp = ebp;
/* f906fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f906fe: ret  */
  esp += 4; SPILL(); return;
}

void f_f906ff(void) {
  LOAD_REGS();
L_f906ff: /* f906ff: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f90702: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f90707: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f9070a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9070b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f9070e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90713u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f90713(); return;
}

void f_f90713(void) {
  LOAD_REGS();
L_f90713: /* f90713: push 0xfa50b0 */
  { uint32_t v = 0xfa50b0u; esp -= 4; W32(esp, v); }
/* f90718: push 0xfb9d40 */
  { uint32_t v = 0xfb9d40u; esp -= 4; W32(esp, v); }
/* f9071d: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf90723u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f90723: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f90726: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90728: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9072a: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9072fu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9072f: guest_badaddr(0xf9072f); return;
}

void f_f90770(void) {
  LOAD_REGS();
L_f90770: /* f90770: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* f90776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90777: mov ecx, esi */
  ecx = esi;
/* f90779: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* f9077f: call dword ptr [0xfce52c] */
  esp -= 4; W32(esp, 0xf90785u); SPILL(); f_6c4566(); if (g_unwind) return; /* Engine!?RemapChar@UFont@@QAEGG@Z */ RELOAD();
/* f90785: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f90788: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* f9078b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9078d: jge 0xf907a2 */
  if ((sf == of)) goto L_f907a2;
L_f9078f: /* f9078f: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f90792: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* f90795: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* f90798: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f9079b: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* f9079d: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f907a0: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_f907a2: /* f907a2: ret  */
  esp += 4; SPILL(); return;
}

void f_f907c0(void) {
  LOAD_REGS();
L_f907c0: /* f907c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f907c1: mov ebp, esp */
  ebp = esp;
/* f907c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f907c5: push 0xf9a600 */
  { uint32_t v = 0xf9a600u; esp -= 4; W32(esp, v); }
/* f907ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f907d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f907d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f907d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f907db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f907dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f907dd: mov esi, ecx */
  esi = ecx;
/* f907df: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f907e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f907e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f907e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f907ee: je 0xf9087a */
  if (zf) goto L_f9087a;
L_f907f4: /* f907f4: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f907fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f907fc: je 0xf9087a */
  if (zf) goto L_f9087a;
L_f907fe: /* f907fe: test byte ptr [esi + 0x248], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x248u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90805: jne 0xf9088d */
  if (!zf) goto L_f9088d;
L_f9080b: /* f9080b: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* f90811: mov eax, dword ptr [esi + 0x238] */
  eax = R32((uint32_t)(esi + 0x238u));
/* f90817: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f90819: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f9081a: mov ecx, 0 */
  ecx = 0x0u;
/* f9081f: sets cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* f90822: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f90823: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f90825: cmp dword ptr [esi + 0x1d8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1d8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f9082b: je 0xf9084c */
  if (zf) goto L_f9084c;
L_f9082d: /* f9082d: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f90833: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90835: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* f9083b: je 0xf9084c */
  if (zf) goto L_f9084c;
L_f9083d: /* f9083d: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f90843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f90845: jle 0xf9084c */
  if ((zf || sf != of)) goto L_f9084c;
L_f90847: /* f90847: call 0xf71438 */
  esp -= 4; W32(esp, 0xf9084cu); SPILL(); f_f71438(); if (g_unwind) return; RELOAD();
L_f9084c: /* f9084c: mov edx, dword ptr [esi + 0x238] */
  edx = R32((uint32_t)(esi + 0x238u));
/* f90852: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f90855: mov edi, dword ptr [esi + 0x1ec] */
  edi = R32((uint32_t)(esi + 0x1ecu));
/* f9085b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f9085c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9085d: mov ecx, esi */
  ecx = esi;
/* f9085f: mov dword ptr [esi + 0x1ec], edx */
  W32((uint32_t)(esi + 0x1ecu), edx);
/* f90865: mov dword ptr [esi + 0x1dc], 0xffffffff */
  W32((uint32_t)(esi + 0x1dcu), 0xffffffffu);
/* f9086f: call 0xf7107d */
  esp -= 4; W32(esp, 0xf90874u); SPILL(); f_f7107d(); if (g_unwind) return; RELOAD();
/* f90874: mov dword ptr [esi + 0x1ec], edi */
  W32((uint32_t)(esi + 0x1ecu), edi);
L_f9087a: /* f9087a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9087d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f90884: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f90885: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f90886: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f90887: mov esp, ebp */
  esp = ebp;
/* f90889: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9088a: ret 4 */
  esp += 8; SPILL(); return;
L_f9088d: /* f9088d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f90890: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f90896: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90897: mov ecx, esi */
  ecx = esi;
/* f90899: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f9089f: mov dword ptr [esi + 0x1dc], 0xffffffff */
  W32((uint32_t)(esi + 0x1dcu), 0xffffffffu);
/* f908a9: call 0xf7107d */
  esp -= 4; W32(esp, 0xf908aeu); SPILL(); f_f7107d(); if (g_unwind) return; RELOAD();
/* f908ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f908b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f908b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f908b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f908ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f908bb: mov esp, ebp */
  esp = ebp;
/* f908bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f908be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f908c1(void) {
  LOAD_REGS();
L_f908c1: /* f908c1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f908c4: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f908c9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f908cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f908cd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f908d0: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf908d5u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f908d5(); return;
}

void f_f908d5(void) {
  LOAD_REGS();
L_f908d5: /* f908d5: push 0xfa5108 */
  { uint32_t v = 0xfa5108u; esp -= 4; W32(esp, v); }
/* f908da: push 0xfb9d7c */
  { uint32_t v = 0xfb9d7cu; esp -= 4; W32(esp, v); }
/* f908df: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf908e5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f908e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f908e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f908ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f908ec: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf908f1u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f908f1: guest_badaddr(0xf908f1); return;
}

void f_f90950(void) {
  LOAD_REGS();
L_f90950: /* f90950: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90952: je 0xf90979 */
  if (zf) goto L_f90979;
L_f90954: /* f90954: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* f90957: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90959: je 0xf90979 */
  if (zf) goto L_f90979;
L_f9095b: /* f9095b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f9095e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90960: je 0xf90979 */
  if (zf) goto L_f90979;
L_f90962: /* f90962: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f90965: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90967: je 0xf90979 */
  if (zf) goto L_f90979;
L_f90969: /* f90969: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* f9096c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f9096e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90970: je 0xf90979 */
  if (zf) goto L_f90979;
L_f90972: /* f90972: fild dword ptr [eax + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* f90978: ret  */
  esp += 4; SPILL(); return;
L_f90979: /* f90979: fld dword ptr [0xfa4138] */
  { double v = F32((uint32_t)(0xfa4138u)); FPUSH(v); }
/* f9097f: ret  */
  esp += 4; SPILL(); return;
}

void f_f90990(void) {
  LOAD_REGS();
L_f90990: /* f90990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f90991: mov ebp, esp */
  ebp = esp;
/* f90993: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f90995: push 0xf9a62b */
  { uint32_t v = 0xf9a62bu; esp -= 4; W32(esp, v); }
/* f9099a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f909a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f909a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f909a8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f909ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f909ae: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f909b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f909b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f909b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f909b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f909b5: mov edi, ecx */
  edi = ecx;
/* f909b7: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f909ba: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f909bd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f909c0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f909c7: jne 0xf909de */
  if (!zf) goto L_f909de;
L_f909c9: /* f909c9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f909cc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f909cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f909cf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f909d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f909d3: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f909d8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf909deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f909de: /* f909de: push 0xfba534 */
  { uint32_t v = 0xfba534u; esp -= 4; W32(esp, v); }
/* f909e3: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f909e6: call dword ptr [0xfce430] */
  esp -= 4; W32(esp, 0xf909ecu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* f909ec: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f909ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f909f0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f909f4: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf909fau); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f909fa: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f909fd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f90a01: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf90a07u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f90a07: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* f90a0a: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f90a10: fcomp dword ptr [edi + 0xb4] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xb4u)));
  FPOP();
/* f90a16: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90a18: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f90a1b: jnp 0xf90bda */
  if (!pf) goto L_f90bda;
L_f90a21: /* f90a21: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* f90a27: fcomp dword ptr [edi + 0xbc] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xbcu)));
  FPOP();
/* f90a2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90a2f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90a32: je 0xf90bda */
  if (zf) goto L_f90bda;
L_f90a38: /* f90a38: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* f90a3e: fcomp dword ptr [edi + 0xb8] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xb8u)));
  FPOP();
/* f90a44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90a46: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f90a49: jnp 0xf90bda */
  if (!pf) goto L_f90bda;
L_f90a4f: /* f90a4f: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* f90a55: fcomp dword ptr [edi + 0xc0] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xc0u)));
  FPOP();
/* f90a5b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90a5d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90a60: je 0xf90bda */
  if (zf) goto L_f90bda;
L_f90a66: /* f90a66: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* f90a6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90a6e: je 0xf90bda */
  if (zf) goto L_f90bda;
L_f90a74: /* f90a74: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* f90a7a: fsub dword ptr [edi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xb8u)));
/* f90a80: call 0xf979dc */
  esp -= 4; W32(esp, 0xf90a85u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f90a85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f90a86: idiv dword ptr [edi + 0x1e4] */
  { int32_t d = (int32_t)R32((uint32_t)(edi + 0x1e4u)); if (!d) d = (int32_t)guest_divzero(0xf90a86);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* f90a8c: add eax, dword ptr [edi + 0x1d8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1d8u)));
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f90a92: js 0xf90bda */
  if (sf) goto L_f90bda;
L_f90a98: /* f90a98: mov ecx, dword ptr [edi + 0x210] */
  ecx = R32((uint32_t)(edi + 0x210u));
/* f90a9e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f90a9f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f90aa1: jg 0xf90bda */
  if ((!zf && sf == of)) goto L_f90bda;
L_f90aa7: /* f90aa7: mov edx, dword ptr [edi + 0x20c] */
  edx = R32((uint32_t)(edi + 0x20cu));
/* f90aad: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* f90ab0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f90ab2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90ab3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f90ab6: call dword ptr [0xfce320] */
  esp -= 4; W32(esp, 0xf90abcu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* f90abc: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f90abf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f90ac3: call 0xf90950 */
  esp -= 4; W32(esp, 0xf90ac8u); SPILL(); f_f90950(); if (g_unwind) return; RELOAD();
/* f90ac8: call 0xf979dc */
  esp -= 4; W32(esp, 0xf90acdu); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f90acd: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* f90ad3: mov ecx, dword ptr [ecx + 0x84] */
  ecx = R32((uint32_t)(ecx + 0x84u));
/* f90ad9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90ada: call 0xf71a14 */
  esp -= 4; W32(esp, 0xf90adfu); SPILL(); f_f71a14(); if (g_unwind) return; RELOAD();
/* f90adf: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* f90ae5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f90ae8: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f90aeb: mov ebx, eax */
  ebx = eax;
/* f90aed: xor ecx, ecx */
  ecx = 0;
L_f90aef: /* f90aef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90af1: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* f90af4: je 0xf90afb */
  if (zf) goto L_f90afb;
L_f90af6: /* f90af6: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* f90af9: jmp 0xf90afd */
  goto L_f90afd;
L_f90afb: /* f90afb: xor eax, eax */
  eax = 0;
L_f90afd: /* f90afd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f90aff: jge 0xf90bcd */
  if ((sf == of)) goto L_f90bcd;
L_f90b05: /* f90b05: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f90b08: mov ax, word ptr [eax + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx*2))) & 0xffffu);
/* f90b0c: cmp ax, 0x1b */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* f90b10: jne 0xf90b18 */
  if (!zf) goto L_f90b18;
L_f90b12: /* f90b12: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f90b15: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f90b16: jmp 0xf90aef */
  goto L_f90aef;
L_f90b18: /* f90b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90b19: mov ecx, ebx */
  ecx = ebx;
/* f90b1b: xor esi, esi */
  esi = 0;
/* f90b1d: call dword ptr [0xfce52c] */
  esp -= 4; W32(esp, 0xf90b23u); SPILL(); f_6c4566(); if (g_unwind) return; /* Engine!?RemapChar@UFont@@QAEGG@Z */ RELOAD();
/* f90b23: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* f90b26: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* f90b29: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f90b2b: jge 0xf90b3a */
  if ((sf == of)) goto L_f90b3a;
L_f90b2d: /* f90b2d: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* f90b30: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* f90b33: mov esi, dword ptr [edx + ecx*4 + 8] */
  esi = R32((uint32_t)(edx + ecx*4 + 0x8u));
/* f90b37: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
L_f90b3a: /* f90b3a: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* f90b3d: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* f90b40: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f90b42: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f90b45: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f90b48: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f90b4b: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f90b4e: fcomp dword ptr [ecx + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xa8u)));
  FPOP();
/* f90b54: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f90b57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90b59: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90b5c: jne 0xf90bed */
  if (!zf) goto L_f90bed;
L_f90b62: /* f90b62: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* f90b65: mov ebx, 0x20 */
  ebx = 0x20u;
/* f90b6a: cmp word ptr [esi + ecx*2], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + ecx*2))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* f90b6e: je 0xf90bcd */
  if (zf) goto L_f90bcd;
L_f90b70: /* f90b70: mov edx, ecx */
  edx = ecx;
L_f90b72: /* f90b72: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f90b74: jle 0xf90b80 */
  if ((zf || sf != of)) goto L_f90b80;
L_f90b76: /* f90b76: cmp word ptr [esi + edx*2 - 2], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + edx*2 + 0xfffffffeu))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* f90b7b: je 0xf90b80 */
  if (zf) goto L_f90b80;
L_f90b7d: /* f90b7d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f90b7e: jmp 0xf90b72 */
  goto L_f90b72;
L_f90b80: /* f90b80: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_f90b83: /* f90b83: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90b85: je 0xf90b8c */
  if (zf) goto L_f90b8c;
L_f90b87: /* f90b87: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f90b8a: jmp 0xf90b8e */
  goto L_f90b8e;
L_f90b8c: /* f90b8c: xor eax, eax */
  eax = 0;
L_f90b8e: /* f90b8e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f90b8f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f90b91: jge 0xf90b9d */
  if ((sf == of)) goto L_f90b9d;
L_f90b93: /* f90b93: cmp word ptr [esi + ecx*2 + 2], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + ecx*2 + 0x2u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* f90b98: je 0xf90b9d */
  if (zf) goto L_f90b9d;
L_f90b9a: /* f90b9a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f90b9b: jmp 0xf90b83 */
  goto L_f90b83;
L_f90b9d: /* f90b9d: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f90b9f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f90ba0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90ba1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90ba2: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* f90ba5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90ba6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f90ba9: call dword ptr [0xfce42c] */
  esp -= 4; W32(esp, 0xf90bafu); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* f90baf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f90bb2: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* f90bb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90bb6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* f90bba: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf90bc0u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f90bc0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f90bc3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f90bc7: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf90bcdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_f90bcd: /* f90bcd: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f90bd0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f90bd4: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf90bdau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_f90bda: /* f90bda: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f90bdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f90bde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f90bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f90be6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f90be7: mov esp, ebp */
  esp = ebp;
/* f90be9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f90bea: ret 8 */
  esp += 12; SPILL(); return;
L_f90bed: /* f90bed: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f90bf0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f90bf1: jmp 0xf90aef */
  goto L_f90aef;
}

void f_f90bf6(void) {
  LOAD_REGS();
L_f90bf6: /* f90bf6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f90bf9: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f90bfe: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* f90c01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90c02: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f90c05: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90c0au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f90c0a(); return;
}

void f_f90c0a(void) {
  LOAD_REGS();
L_f90c0a: /* f90c0a: push 0xfa5140 */
  { uint32_t v = 0xfa5140u; esp -= 4; W32(esp, v); }
/* f90c0f: push 0xfb9d8c */
  { uint32_t v = 0xfb9d8cu; esp -= 4; W32(esp, v); }
/* f90c14: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf90c1au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f90c1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f90c1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90c1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90c21: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90c26u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f90c26: guest_badaddr(0xf90c26); return;
}

void f_f90ce0(void) {
  LOAD_REGS();
L_f90ce0: /* f90ce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f90ce1: mov ebp, esp */
  ebp = esp;
/* f90ce3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f90ce5: push 0xf9a640 */
  { uint32_t v = 0xf9a640u; esp -= 4; W32(esp, v); }
/* f90cea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f90cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90cf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f90cf8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f90cfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f90cfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f90cfd: mov esi, ecx */
  esi = ecx;
/* f90cff: test byte ptr [esi + 0x1f0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90d06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f90d07: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f90d0a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f90d11: je 0xf90d2a */
  if (zf) goto L_f90d2a;
L_f90d13: /* f90d13: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f90d15: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf90d1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90d1b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f90d1e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f90d21: fld dword ptr [ecx + 0x40] */
  { double v = F32((uint32_t)(ecx + 0x40u)); FPUSH(v); }
/* f90d24: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f90d27: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
L_f90d2a: /* f90d2a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f90d2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90d2e: mov ecx, esi */
  ecx = esi;
/* f90d30: call 0xf710d7 */
  esp -= 4; W32(esp, 0xf90d35u); SPILL(); f_f710d7(); if (g_unwind) return; RELOAD();
/* f90d35: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f90d38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f90d39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f90d3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f90d41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f90d42: mov esp, ebp */
  esp = ebp;
/* f90d44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f90d45: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f90d48(void) {
  LOAD_REGS();
L_f90d48: /* f90d48: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f90d4b: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f90d50: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f90d53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90d54: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f90d57: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90d5cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f90d5c(); return;
}

void f_f90d5c(void) {
  LOAD_REGS();
L_f90d5c: /* f90d5c: push 0xfa51a0 */
  { uint32_t v = 0xfa51a0u; esp -= 4; W32(esp, v); }
/* f90d61: push 0xfb9d94 */
  { uint32_t v = 0xfb9d94u; esp -= 4; W32(esp, v); }
/* f90d66: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf90d6cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f90d6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f90d6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90d71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f90d73: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf90d78u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f90d78: guest_badaddr(0xf90d78); return;
}

void f_f90db0(void) {
  LOAD_REGS();
L_f90db0: /* f90db0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f90db1: mov ebp, esp */
  ebp = esp;
/* f90db3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f90db5: push 0xf9a650 */
  { uint32_t v = 0xf9a650u; esp -= 4; W32(esp, v); }
/* f90dba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f90dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90dc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f90dc8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f90dcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f90dcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f90dcd: mov esi, ecx */
  esi = ecx;
/* f90dcf: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90dd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f90dd4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f90dd7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f90dde: je 0xf9119e */
  if (zf) goto L_f9119e;
L_f90de4: /* f90de4: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f90dea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90dec: je 0xf9119e */
  if (zf) goto L_f9119e;
L_f90df2: /* f90df2: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f90df8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90dfa: je 0xf9119e */
  if (zf) goto L_f9119e;
L_f90e00: /* f90e00: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f90e03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f90e05: je 0xf9119e */
  if (zf) goto L_f9119e;
L_f90e0b: /* f90e0b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f90e0d: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf90e10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90e10: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f90e13: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f90e15: mov ecx, esi */
  ecx = esi;
/* f90e17: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf90e1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90e1a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f90e1d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f90e1f: mov ecx, esi */
  ecx = esi;
/* f90e21: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf90e27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90e27: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f90e2a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f90e2c: mov ecx, esi */
  ecx = esi;
/* f90e2e: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf90e34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90e34: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f90e37: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f90e3a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f90e3d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f90e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90e41: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f90e44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90e45: xor ecx, ecx */
  ecx = 0;
/* f90e47: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f90e4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90e4b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f90e4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90e4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90e50: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f90e56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f90e57: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf90e5cu); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f90e5c: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f90e62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f90e64: jg 0xf90e85 */
  if ((!zf && sf == of)) goto L_f90e85;
L_f90e66: /* f90e66: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f90e6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90e6d: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f90e73: fidiv dword ptr [esi + 0x1e8] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esi + 0x1e8u)));
/* f90e79: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f90e7c: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf90e82u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f90e82: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f90e85: /* f90e85: fld dword ptr [esi + 0xb4] */
  { double v = F32((uint32_t)(esi + 0xb4u)); FPUSH(v); }
/* f90e8b: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* f90e91: call 0xf979dc */
  esp -= 4; W32(esp, 0xf90e96u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f90e96: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f90e9c: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f90ea2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f90ea5: call 0xf979dc */
  esp -= 4; W32(esp, 0xf90eaau); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f90eaa: mov ebx, dword ptr [esi + 0x208] */
  ebx = R32((uint32_t)(esi + 0x208u));
/* f90eb0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90eb3: mov edi, eax */
  edi = eax;
/* f90eb5: je 0xf90ed7 */
  if (zf) goto L_f90ed7;
L_f90eb7: /* f90eb7: mov ecx, dword ptr [esi + 0x1e8] */
  ecx = R32((uint32_t)(esi + 0x1e8u));
/* f90ebd: imul ecx, dword ptr [esi + 0x1e0] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x1e0u)));
  ecx = (uint32_t)r;
  }
/* f90ec4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f90ec6: jge 0xf90ed7 */
  if ((sf == of)) goto L_f90ed7;
L_f90ec8: /* f90ec8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f90eca: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f90ecd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f90ece: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f90ed0: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f90ed2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f90ed4: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_f90ed7: /* f90ed7: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90eda: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* f90ee1: je 0xf90f02 */
  if (zf) goto L_f90f02;
L_f90ee3: /* f90ee3: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* f90ee9: mov edx, dword ptr [esi + 0x1e8] */
  edx = R32((uint32_t)(esi + 0x1e8u));
/* f90eef: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* f90ef2: mov eax, edi */
  eax = edi;
/* f90ef4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f90ef6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f90ef7: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xf90ef7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* f90ef9: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* f90efc: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* f90eff: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_f90f02: /* f90f02: fild dword ptr [esi + 0x1dc] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1dcu)); FPUSH(v); }
/* f90f08: mov al, byte ptr [esi + 0x1f0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1f0u))) & 0xffu);
/* f90f0e: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f90f10: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f90f13: je 0xf90f72 */
  if (zf) goto L_f90f72;
L_f90f15: /* f90f15: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f90f18: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f90f1e: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f90f20: call 0xf979dc */
  esp -= 4; W32(esp, 0xf90f25u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f90f25: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f90f2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90f2c: call 0xf979dc */
  esp -= 4; W32(esp, 0xf90f31u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f90f31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f90f32: mov ecx, esi */
  ecx = esi;
/* f90f34: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf90f37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90f37: xor ebx, ebx */
  ebx = 0;
/* f90f39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f90f3b: je 0xf90f74 */
  if (zf) goto L_f90f74;
L_f90f3d: /* f90f3d: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f90f40: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* f90f46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90f47: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f90f4d: fidiv dword ptr [esi + 0x1e8] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esi + 0x1e8u)));
/* f90f53: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f90f56: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf90f5cu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f90f5c: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f90f62: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f90f65: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f90f67: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* f90f6a: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f90f6d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f90f70: jmp 0xf90f74 */
  goto L_f90f74;
L_f90f72: /* f90f72: xor ebx, ebx */
  ebx = 0;
L_f90f74: /* f90f74: xor ecx, ecx */
  ecx = 0;
/* f90f76: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f90f79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f90f80: /* f90f80: cmp ecx, dword ptr [esi + 0x1e0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f90f86: jge 0xf9119e */
  if ((sf == of)) goto L_f9119e;
L_f90f8c: /* f90f8c: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f90f8f: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f90f95: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f90f97: mov byte ptr [ebp - 0x11], dl */
  W8((uint32_t)(ebp + 0xffffffefu), (edx & 0xffu));
/* f90f9a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f90f9b: idiv dword ptr [esi + 0x1ec] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x1ecu)); if (!d) d = (int32_t)guest_divzero(0xf90f9b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* f90fa1: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* f90fa4: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f90fa7: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f90faa: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* f90fad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f90faf: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f90fb2: jp 0xf90fbb */
  if (pf) goto L_f90fbb;
L_f90fb4: /* f90fb4: mov edi, 1 */
  edi = 0x1u;
/* f90fb9: jmp 0xf90fbd */
  goto L_f90fbd;
L_f90fbb: /* f90fbb: xor edi, edi */
  edi = 0;
L_f90fbd: /* f90fbd: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f90fc3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f90fc5: je 0xf91017 */
  if (zf) goto L_f91017;
L_f90fc7: /* f90fc7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f90fc9: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xf90fccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f90fcc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f90fce: jne 0xf91017 */
  if (!zf) goto L_f91017;
L_f90fd0: /* f90fd0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f90fd3: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* f90fd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f90fda: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f90fdd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f90fe0: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f90fe6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f90fe9: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f90fef: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f90ff3: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f90ff9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f90ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f90ffd: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f91000: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f91001: call 0xf979dc */
  esp -= 4; W32(esp, 0xf91006u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f91006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91007: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9100a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9100b: mov ecx, esi */
  ecx = esi;
/* f9100d: call 0xf717a3 */
  esp -= 4; W32(esp, 0xf91012u); SPILL(); f_f717a3(); if (g_unwind) return; RELOAD();
/* f91012: jmp 0xf91121 */
  goto L_f91121;
L_f91017: /* f91017: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f91019: je 0xf910dd */
  if (zf) goto L_f910dd;
L_f9101f: /* f9101f: cmp byte ptr [esi + 0x30], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f91023: jne 0xf910d9 */
  if (!zf) goto L_f910d9;
L_f91029: /* f91029: mov eax, dword ptr [esi + 0x1d4] */
  eax = R32((uint32_t)(esi + 0x1d4u));
/* f9102f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f91031: jne 0xf910a3 */
  if (!zf) goto L_f910a3;
L_f91033: /* f91033: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91036: mov eax, esp */
  eax = esp;
/* f91038: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* f9103b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9103e: mov ecx, esp */
  ecx = esp;
/* f91040: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* f91043: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91044: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* f9104a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f9104c: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f9104f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* f91052: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* f91055: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf9105bu); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f9105b: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f91061: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f91067: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* f9106d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f91070: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f91072: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f91073: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f91078: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f9107d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9107e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9107f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91082: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91086: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f9108c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9108f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91090: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f91093: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f91096: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* f91099: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9109a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9109d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9109e: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf910a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f910a1: jmp 0xf910d9 */
  goto L_f910d9;
L_f910a3: /* f910a3: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f910a9: mov edi, dword ptr [esi + 0xb8] */
  edi = R32((uint32_t)(esi + 0xb8u));
/* f910af: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f910b5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f910b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f910ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f910bd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f910c1: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f910c7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f910ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f910cb: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f910ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f910cf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f910d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f910d3: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf910d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f910d9: /* f910d9: mov byte ptr [esi + 0x30], 1 */
  W8((uint32_t)(esi + 0x30u), 0x1u);
L_f910dd: /* f910dd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f910e0: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* f910e6: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f910e8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f910eb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f910ee: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f910f4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f910f7: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f910fd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91101: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f91107: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9110a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9110b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f9110e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9110f: call 0xf979dc */
  esp -= 4; W32(esp, 0xf91114u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f91114: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f91117: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91118: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f91119: mov ecx, esi */
  ecx = esi;
/* f9111b: call dword ptr [edi + 0xc4] */
  { uint32_t t = R32((uint32_t)(edi + 0xc4u)); esp -= 4; W32(esp, 0xf91121u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f91121: /* f91121: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* f91124: mov byte ptr [esi + 0x30], al */
  W8((uint32_t)(esi + 0x30u), (eax & 0xffu));
/* f91127: test byte ptr [esi + 0x208], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x208u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9112e: jne 0xf9114c */
  if (!zf) goto L_f9114c;
L_f91130: /* f91130: mov ecx, dword ptr [esi + 0x1e8] */
  ecx = R32((uint32_t)(esi + 0x1e8u));
/* f91136: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f91139: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f9113b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f9113e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f91141: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f91142: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f91145: mov ecx, eax */
  ecx = eax;
/* f91147: jmp 0xf90f80 */
  goto L_f90f80;
L_f9114c: /* f9114c: fild dword ptr [esi + 0x1e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e8u)); FPUSH(v); }
/* f91152: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f91155: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* f91158: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9115du); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9115d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f91160: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f91163: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f91164: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f91167: mov ecx, eax */
  ecx = eax;
/* f91169: jmp 0xf90f80 */
  goto L_f90f80;
L_f9119e: /* f9119e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f911a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f911a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f911a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f911aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f911ab: mov esp, ebp */
  esp = ebp;
/* f911ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f911ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f9116e(void) {
  LOAD_REGS();
L_f9116e: /* f9116e: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* f91171: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f91176: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* f91179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9117a: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* f9117d: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf91182u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f91182(); return;
}

void f_f91182(void) {
  LOAD_REGS();
L_f91182: /* f91182: push 0xfa51d4 */
  { uint32_t v = 0xfa51d4u; esp -= 4; W32(esp, v); }
/* f91187: push 0xfb9d9c */
  { uint32_t v = 0xfb9d9cu; esp -= 4; W32(esp, v); }
/* f9118c: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf91192u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f91192: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91195: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91197: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91199: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9119eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f9119e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f911a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f911a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f911a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f911aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f911ab: mov esp, ebp */
  esp = ebp;
/* f911ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f911ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f912d0(void) {
  LOAD_REGS();
L_f912d0: /* f912d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f912d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f912d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f912d5: mov esi, ecx */
  esi = ecx;
/* f912d7: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf912ddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f912dd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* f912e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f912e3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* f912e5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* f912e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f912e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f91300(void) {
  LOAD_REGS();
L_f91300: /* f91300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f91304: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91307: mov esi, ecx */
  esi = ecx;
/* f91309: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* f9130b: je 0xf9131e */
  if (zf) goto L_f9131e;
L_f9130d: /* f9130d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* f91310: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f91313: call 0xf71537 */
  esp -= 4; W32(esp, 0xf91318u); SPILL(); f_f71537(); if (g_unwind) return; RELOAD();
/* f91318: mov eax, esi */
  eax = esi;
/* f9131a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9131b: ret 4 */
  esp += 8; SPILL(); return;
L_f9131e: /* f9131e: xor eax, eax */
  eax = 0;
/* f91320: mov ecx, esi */
  ecx = esi;
/* f91322: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f91325: call 0xf71537 */
  esp -= 4; W32(esp, 0xf9132au); SPILL(); f_f71537(); if (g_unwind) return; RELOAD();
/* f9132a: mov eax, esi */
  eax = esi;
/* f9132c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9132d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f91340(void) {
  LOAD_REGS();
L_f91340: /* f91340: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f91343: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* f91346: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* f91349: jmp 0xf71537 */
  SPILL(); f_f71537(); return;
}

void f_f91360(void) {
  LOAD_REGS();
L_f91360: /* f91360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f91364: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91366: je 0xf9137f */
  if (zf) goto L_f9137f;
L_f91368: /* f91368: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* f9136b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9136d: je 0xf9137f */
  if (zf) goto L_f9137f;
L_f9136f: /* f9136f: nop  */
L_f91370: /* f91370: cmp ecx, 0xfc89f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfc89f8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f91376: je 0xf91381 */
  if (zf) goto L_f91381;
L_f91378: /* f91378: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* f9137b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9137d: jne 0xf91370 */
  if (!zf) goto L_f91370;
L_f9137f: /* f9137f: xor eax, eax */
  eax = 0;
L_f91381: /* f91381: ret  */
  esp += 4; SPILL(); return;
}

void f_f913a0(void) {
  LOAD_REGS();
L_f913a0: /* f913a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f913a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* f913a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f913a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f913a8: je 0xf913cd */
  if (zf) goto L_f913cd;
L_f913aa: /* f913aa: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* f913ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f913af: je 0xf913bf */
  if (zf) goto L_f913bf;
L_f913b1: /* f913b1: cmp eax, 0xfbafa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfbafa8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f913b6: je 0xf913f5 */
  if (zf) goto L_f913f5;
L_f913b8: /* f913b8: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f913bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f913bd: jne 0xf913b1 */
  if (!zf) goto L_f913b1;
L_f913bf: /* f913bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f913c1: mov ecx, esi */
  ecx = esi;
/* f913c3: call dword ptr [0xfce434] */
  esp -= 4; W32(esp, 0xf913c9u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* f913c9: mov edi, eax */
  edi = eax;
/* f913cb: jmp 0xf913d2 */
  goto L_f913d2;
L_f913cd: /* f913cd: mov edi, 0xfb9de0 */
  edi = 0xfb9de0u;
L_f913d2: /* f913d2: mov ecx, 0xfbafa8 */
  ecx = 0xfbafa8u;
/* f913d7: call dword ptr [0xfce41c] */
  esp -= 4; W32(esp, 0xf913ddu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f913dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f913de: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f913e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f913e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f913e6: push 0xfb9dec */
  { uint32_t v = 0xfb9decu; esp -= 4; W32(esp, v); }
/* f913eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f913ec: call dword ptr [0xfce414] */
  esp -= 4; W32(esp, 0xf913f2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f913f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f913f5: /* f913f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f913f6: mov eax, esi */
  eax = esi;
/* f913f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f913f9: ret  */
  esp += 4; SPILL(); return;
}

void f_f91420(void) {
  LOAD_REGS();
L_f91420: /* f91420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91421: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* f91425: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f91428: je 0xf9144d */
  if (zf) goto L_f9144d;
L_f9142a: /* f9142a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* f9142d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9142f: je 0xf9143f */
  if (zf) goto L_f9143f;
L_f91431: /* f91431: cmp eax, 0xfc3bf0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfc3bf0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f91436: je 0xf91475 */
  if (zf) goto L_f91475;
L_f91438: /* f91438: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f9143b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9143d: jne 0xf91431 */
  if (!zf) goto L_f91431;
L_f9143f: /* f9143f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91441: mov ecx, esi */
  ecx = esi;
/* f91443: call dword ptr [0xfce434] */
  esp -= 4; W32(esp, 0xf91449u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* f91449: mov edi, eax */
  edi = eax;
/* f9144b: jmp 0xf91452 */
  goto L_f91452;
L_f9144d: /* f9144d: mov edi, 0xfb9e1c */
  edi = 0xfb9e1cu;
L_f91452: /* f91452: mov ecx, 0xfc3bf0 */
  ecx = 0xfc3bf0u;
/* f91457: call dword ptr [0xfce41c] */
  esp -= 4; W32(esp, 0xf9145du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f9145d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9145e: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f91463: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f91465: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f91466: push 0xfb9e28 */
  { uint32_t v = 0xfb9e28u; esp -= 4; W32(esp, v); }
/* f9146b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9146c: call dword ptr [0xfce414] */
  esp -= 4; W32(esp, 0xf91472u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f91472: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f91475: /* f91475: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f91476: mov eax, esi */
  eax = esi;
/* f91478: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f91479: ret  */
  esp += 4; SPILL(); return;
}

void f_f914a0(void) {
  LOAD_REGS();
L_f914a0: /* f914a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f914a2: push 0xf9a671 */
  { uint32_t v = 0xf9a671u; esp -= 4; W32(esp, v); }
/* f914a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f914ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f914ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f914b5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f914b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f914b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f914ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f914bb: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* f914bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f914c0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* f914c4: call 0xf7165e */
  esp -= 4; W32(esp, 0xf914c9u); SPILL(); f_f7165e(); if (g_unwind) return; RELOAD();
/* f914c9: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* f914cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f914ce: mov ecx, edi */
  ecx = edi;
/* f914d0: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* f914d8: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf914deu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f914de: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f914e1: lea ebx, [esi + 0x10] */
  ebx = (uint32_t)(esi + 0x10u);
/* f914e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f914e5: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* f914e8: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* f914eb: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf914f1u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f914f1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f914f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f914f6: mov ecx, esi */
  ecx = esi;
/* f914f8: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf914feu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f914fe: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f91502: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* f91506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91507: mov ecx, ebx */
  ecx = ebx;
/* f91509: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f9150c: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf91512u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f91512: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* f91516: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* f9151e: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf91524u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f91524: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f91528: mov dword ptr [esp + 0x30], 0xffffffff */
  W32((uint32_t)(esp + 0x30u), 0xffffffffu);
/* f91530: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf91536u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f91536: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* f9153a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9153b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9153c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9153d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f91544: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91547: ret  */
  esp += 4; SPILL(); return;
}

void f_f91580(void) {
  LOAD_REGS();
L_f91580: /* f91580: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f91582: push 0xf9a698 */
  { uint32_t v = 0xf9a698u; esp -= 4; W32(esp, v); }
/* f91587: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f9158d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9158e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f91595: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91598: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91599: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* f9159d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9159e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9159f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f915a3: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf915a9u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f915a9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f915ac: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* f915b0: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* f915b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f915b5: mov ecx, esi */
  ecx = esi;
/* f915b7: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* f915bf: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf915c5u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f915c5: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* f915c8: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* f915cc: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* f915cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f915d0: mov ecx, edi */
  ecx = edi;
/* f915d2: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf915d8u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f915d8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f915dc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f915e0: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* f915e3: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* f915eb: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf915f1u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f915f1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f915f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f915f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f915f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f915fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91601: ret  */
  esp += 4; SPILL(); return;
}

void f_f91640(void) {
  LOAD_REGS();
L_f91640: /* f91640: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f91641: mov ebp, esp */
  ebp = esp;
/* f91643: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f91645: push 0xf9a6b9 */
  { uint32_t v = 0xf9a6b9u; esp -= 4; W32(esp, v); }
/* f9164a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f91650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91651: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f91658: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9165b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9165c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9165d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f91660: xor ebx, ebx */
  ebx = 0;
/* f91662: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f91664: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f91665: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f91668: mov edi, ecx */
  edi = ecx;
/* f9166a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f9166d: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f91673: /* f91673: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* f91676: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f91678: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f9167e: /* f9167e: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f91681: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f91683: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f91689: /* f91689: cmp dword ptr [eax + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f9168c: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f91692: /* f91692: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* f91695: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f91697: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f9169d: /* f9169d: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* f916a0: mov byte ptr [esi + 0x50], 1 */
  W8((uint32_t)(esi + 0x50u), 0x1u);
L_f916a4: /* f916a4: cmp ebx, dword ptr [edi + 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f916a7: jge 0xf916cf */
  if ((sf == of)) goto L_f916cf;
L_f916a9: /* f916a9: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* f916ac: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* f916af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f916b1: jne 0xf91718 */
  if (!zf) goto L_f91718;
L_f916b3: /* f916b3: mov edx, dword ptr [0xfce418] */
  edx = R32((uint32_t)(0xfce418u));
/* f916b9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f916bb: push 0xfb970c */
  { uint32_t v = 0xfb970cu; esp -= 4; W32(esp, v); }
/* f916c0: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* f916c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f916c6: call dword ptr [0xfce438] */
  esp -= 4; W32(esp, 0xf916ccu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* f916cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f916cf: /* f916cf: test byte ptr [edi + 0x150], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x150u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f916d6: jne 0xf918c5 */
  if (!zf) goto L_f918c5;
L_f916dc: /* f916dc: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* f916df: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* f916e2: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* f916e5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f916e7: test byte ptr [eax + 0x38], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x38u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f916eb: jne 0xf918c5 */
  if (!zf) goto L_f918c5;
L_f916f1: /* f916f1: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* f916f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f916f9: je 0xf91721 */
  if (zf) goto L_f91721;
L_f916fb: /* f916fb: mov eax, dword ptr [eax + 0x7c] */
  eax = R32((uint32_t)(eax + 0x7cu));
/* f916fe: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* f91704: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* f91707: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* f9170d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* f91710: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f91713: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* f91716: jmp 0xf91732 */
  goto L_f91732;
L_f91718: /* f91718: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f9171a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9171b: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xf9171eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9171e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f9171f: jmp 0xf916a4 */
  goto L_f916a4;
L_f91721: /* f91721: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* f91727: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f91729: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* f9172f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_f91732: /* f91732: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f91734: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f91737: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f9173a: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* f9173d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f91740: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91742: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* f91745: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* f91748: je 0xf918d8 */
  if (zf) goto L_f918d8;
L_f9174e: /* f9174e: mov ebx, dword ptr [esi + 0x60] */
  ebx = R32((uint32_t)(esi + 0x60u));
/* f91751: mov byte ptr [ebp + 8], 0xff */
  W8((uint32_t)(ebp + 0x8u), 0xffu);
/* f91755: mov byte ptr [ebp + 9], 0xff */
  W8((uint32_t)(ebp + 0x9u), 0xffu);
/* f91759: mov byte ptr [ebp + 0xa], 0xff */
  W8((uint32_t)(ebp + 0xau), 0xffu);
/* f9175d: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* f91761: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f91764: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* f91767: mov eax, 0x66666667 */
  eax = 0x66666667u;
/* f9176c: imul ebx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* f9176e: sar edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f91771: mov ecx, edx */
  ecx = edx;
/* f91773: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f91776: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f91778: cmp ebx, 0x280 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x280u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9177e: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* f91781: mov byte ptr [esi + 0x50], 5 */
  W8((uint32_t)(esi + 0x50u), 0x5u);
/* f91785: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f91788: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f9178b: jge 0xf91794 */
  if ((sf == of)) goto L_f91794;
L_f9178d: /* f9178d: mov dword ptr [ebp + 8], 0x3f800000 */
  W32((uint32_t)(ebp + 0x8u), 0x3f800000u);
L_f91794: /* f91794: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f9179a: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9179fu); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9179f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f917a1: jge 0xf917ac */
  if ((sf == of)) goto L_f917ac;
L_f917a3: /* f917a3: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f917aa: jmp 0xf917b6 */
  goto L_f917b6;
L_f917ac: /* f917ac: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f917ae: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f917b1: jl 0xf917b6 */
  if ((sf != of)) goto L_f917b6;
L_f917b3: /* f917b3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
L_f917b6: /* f917b6: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f917bc: mov ebx, dword ptr [esi + 0x64] */
  ebx = R32((uint32_t)(esi + 0x64u));
/* f917bf: call 0xf979dc */
  esp -= 4; W32(esp, 0xf917c4u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f917c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f917c6: jge 0xf917d1 */
  if ((sf == of)) goto L_f917d1;
L_f917c8: /* f917c8: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* f917cf: jmp 0xf917db */
  goto L_f917db;
L_f917d1: /* f917d1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f917d3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f917d6: jl 0xf917db */
  if ((sf != of)) goto L_f917db;
L_f917d8: /* f917d8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_f917db: /* f917db: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f917de: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f917e0: mov ecx, ebx */
  ecx = ebx;
/* f917e2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf917e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f917e5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f917e8: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f917eb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* f917ed: mov ecx, ebx */
  ecx = ebx;
/* f917ef: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* f917f2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f917f5: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf917f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f917f8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f917fb: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f917fe: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* f91801: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f91804: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f91807: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* f9180a: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f9180d: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* f9180f: call 0xf979dc */
  esp -= 4; W32(esp, 0xf91814u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f91814: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f91817: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* f9181a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f9181d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* f91820: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* f91822: call 0xf979dc */
  esp -= 4; W32(esp, 0xf91827u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f91827: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f91829: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* f9182f: fstp dword ptr [edi + 0xa8] */
  WF32((uint32_t)(edi + 0xa8u), ST0); FPOP();
/* f91835: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* f9183b: mov dword ptr [edi + 0xb0], ecx */
  W32((uint32_t)(edi + 0xb0u), ecx);
/* f91841: fstp dword ptr [edi + 0xac] */
  WF32((uint32_t)(edi + 0xacu), ST0); FPOP();
/* f91847: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9184a: xor ecx, ecx */
  ecx = 0;
/* f9184c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f9184f: mov eax, esp */
  eax = esp;
/* f91851: mov dword ptr [edi + 0xb4], edx */
  W32((uint32_t)(edi + 0xb4u), edx);
/* f91857: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* f9185a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9185d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f9185f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f91862: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f91865: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* f91868: mov eax, esp */
  eax = esp;
/* f9186a: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* f9186d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9186e: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* f91871: call dword ptr [0xfce530] */
  esp -= 4; W32(esp, 0xf91877u); SPILL(); f_6c3e7c(); if (g_unwind) return; /* Engine!?Plane@FColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f91877: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f91879: mov ecx, ebx */
  ecx = ebx;
/* f9187b: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf9187eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9187e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f91881: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* f91883: mov ecx, ebx */
  ecx = ebx;
/* f91885: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf91888u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91888: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f9188b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9188e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f91891: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* f91894: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91895: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f91898: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9189a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9189d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f918a1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f918a4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f918a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f918a9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f918ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f918ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f918af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f918b0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f918b3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f918b7: mov ecx, esi */
  ecx = esi;
/* f918b9: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f918bc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f918bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f918c0: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf918c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f918c3: jmp 0xf918d8 */
  goto L_f918d8;
L_f918c5: /* f918c5: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* f918cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f918cd: je 0xf918d8 */
  if (zf) goto L_f918d8;
L_f918cf: /* f918cf: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* f918d2: mov dl, byte ptr [eax + 0x7c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x7cu))) & 0xffu);
/* f918d5: mov byte ptr [ecx + 0x50], dl */
  W8((uint32_t)(ecx + 0x50u), (edx & 0xffu));
L_f918d8: /* f918d8: test byte ptr [edi + 0x114], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x114u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f918df: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f918e5: /* f918e5: xor eax, eax */
  eax = 0;
/* f918e7: push 0xfb9738 */
  { uint32_t v = 0xfb9738u; esp -= 4; W32(esp, v); }
/* f918ec: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f918ef: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* f918f2: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* f918f5: call dword ptr [0xfce430] */
  esp -= 4; W32(esp, 0xf918fbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* f918fb: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* f918fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f918ff: mov ecx, edi */
  ecx = edi;
/* f91901: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f91905: call 0xf716bd */
  esp -= 4; W32(esp, 0xf9190au); SPILL(); f_f716bd(); if (g_unwind) return; RELOAD();
/* f9190a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f9190d: mov ebx, eax */
  ebx = eax;
/* f9190f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f91913: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf91919u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f91919: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9191b: je 0xf91934 */
  if (zf) goto L_f91934;
L_f9191d: /* f9191d: push 0x320 */
  { uint32_t v = 0x320u; esp -= 4; W32(esp, v); }
/* f91922: mov ecx, ebx */
  ecx = ebx;
/* f91924: call 0xf71a14 */
  esp -= 4; W32(esp, 0xf91929u); SPILL(); f_f71a14(); if (g_unwind) return; RELOAD();
/* f91929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9192b: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f91931: /* f91931: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
L_f91934: /* f91934: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f91936: push 0xfb9754 */
  { uint32_t v = 0xfb9754u; esp -= 4; W32(esp, v); }
/* f9193b: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* f9193e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9193f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f91942: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f91945: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91946: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f9194b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f91950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91951: mov ecx, esi */
  ecx = esi;
/* f91953: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf91959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91959: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9195c: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* f9195f: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f91962: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91965: fsubr dword ptr [esi + 0x40] */
  ST0 = (F32((uint32_t)(esi + 0x40u))) - ST0;
/* f91968: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9196du); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9196d: mov ebx, eax */
  ebx = eax;
/* f9196f: mov eax, dword ptr [edi + 0x110] */
  eax = R32((uint32_t)(edi + 0x110u));
/* f91975: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91977: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f9197a: je 0xf91a93 */
  if (zf) goto L_f91a93;
L_f91980: /* f91980: test byte ptr [edi + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f91987: jne 0xf91a93 */
  if (!zf) goto L_f91a93;
L_f9198d: /* f9198d: xor ecx, ecx */
  ecx = 0;
/* f9198f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91992: mov eax, esp */
  eax = esp;
/* f91994: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f91997: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f91999: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f9199c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f9199f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* f919a2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f919a5: mov edx, esp */
  edx = esp;
/* f919a7: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* f919aa: mov byte ptr [ebp - 0x1b], cl */
  W8((uint32_t)(ebp + 0xffffffe5u), (ecx & 0xffu));
/* f919ad: mov byte ptr [ebp - 0x1a], cl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ecx & 0xffu));
/* f919b0: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f919b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f919b4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f919b7: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* f919bb: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf919c1u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f919c1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f919c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f919c7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f919c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f919cb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f919ce: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f919d3: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f919d8: lea edx, [ebx + ecx] */
  edx = (uint32_t)(ebx + ecx);
/* f919db: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f919de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f919e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f919e2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f919e5: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f919e8: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* f919eb: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f919ee: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f919f2: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f919f5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f919f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f919f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f919fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f919fc: mov ecx, esi */
  ecx = esi;
/* f919fe: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf91a01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91a01: mov ecx, dword ptr [edi + 0x110] */
  ecx = R32((uint32_t)(edi + 0x110u));
/* f91a07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91a09: call dword ptr [0xfce434] */
  esp -= 4; W32(esp, 0xf91a0fu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* f91a0f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f91a12: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f91a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91a15: lea eax, [ebx + edx] */
  eax = (uint32_t)(ebx + edx);
/* f91a18: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f91a1b: push 0xfb9758 */
  { uint32_t v = 0xfb9758u; esp -= 4; W32(esp, v); }
/* f91a20: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f91a23: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91a26: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91a29: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91a2d: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91a30: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91a33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f91a34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91a36: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f91a38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91a39: call dword ptr [ecx + 0xac] */
  { uint32_t t = R32((uint32_t)(ecx + 0xacu)); esp -= 4; W32(esp, 0xf91a3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91a3f: mov al, byte ptr [edi + 0x114] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x114u))) & 0xffu);
/* f91a45: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91a48: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f91a4a: je 0xf91a93 */
  if (zf) goto L_f91a93;
L_f91a4c: /* f91a4c: mov eax, dword ptr [edi + 0x110] */
  eax = R32((uint32_t)(edi + 0x110u));
/* f91a52: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* f91a58: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* f91a5e: fsub dword ptr [eax + 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xa8u)));
/* f91a64: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f91a66: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91a69: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91a6d: fld dword ptr [eax + 0xac] */
  { double v = F32((uint32_t)(eax + 0xacu)); FPUSH(v); }
/* f91a73: fsub dword ptr [eax + 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xa4u)));
/* f91a79: mov eax, dword ptr [eax + 0xa4] */
  eax = R32((uint32_t)(eax + 0xa4u));
/* f91a7f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91a82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91a83: mov ecx, dword ptr [edi + 0x218] */
  ecx = R32((uint32_t)(edi + 0x218u));
/* f91a89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91a8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91a8b: mov ecx, esi */
  ecx = esi;
/* f91a8d: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf91a93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f91a93: /* f91a93: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f91a96: mov al, byte ptr [edi + 0xb8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xb8u))) & 0xffu);
/* f91a9c: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f91a9e: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f91aa0: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f91aa3: jne 0xf91cbb */
  if (!zf) goto L_f91cbb;
L_f91aa9: /* f91aa9: xor ecx, ecx */
  ecx = 0;
/* f91aab: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91aae: mov eax, esp */
  eax = esp;
/* f91ab0: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f91ab3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f91ab5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f91ab8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f91abb: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* f91abe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91ac1: mov edx, esp */
  edx = esp;
/* f91ac3: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* f91ac6: mov byte ptr [ebp - 0x1b], cl */
  W8((uint32_t)(ebp + 0xffffffe5u), (ecx & 0xffu));
/* f91ac9: mov byte ptr [ebp - 0x1a], cl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ecx & 0xffu));
/* f91acc: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f91acf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f91ad0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f91ad3: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* f91ad7: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf91addu); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f91add: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f91ae0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f91ae3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f91ae5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91ae7: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f91aea: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f91aef: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f91af4: lea edx, [ebx + ecx] */
  edx = (uint32_t)(ebx + ecx);
/* f91af7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f91afa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91afc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91afe: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f91b01: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91b04: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* f91b07: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91b0a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91b0e: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91b11: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91b14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91b15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91b17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f91b18: mov ecx, esi */
  ecx = esi;
/* f91b1a: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf91b1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91b1d: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* f91b23: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91b25: je 0xf91b7b */
  if (zf) goto L_f91b7b;
L_f91b27: /* f91b27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91b29: call dword ptr [0xfce434] */
  esp -= 4; W32(esp, 0xf91b2fu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* f91b2f: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* f91b35: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* f91b38: movzx ecx, byte ptr [ecx + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x30u)));
/* f91b3c: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* f91b3f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f91b42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f91b43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91b44: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f91b47: mov edx, eax */
  edx = eax;
/* f91b49: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f91b4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f91b4c: lea edx, [ebx + ecx] */
  edx = (uint32_t)(ebx + ecx);
/* f91b4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f91b52: push 0xfb976c */
  { uint32_t v = 0xfb976cu; esp -= 4; W32(esp, v); }
/* f91b57: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* f91b5a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91b5d: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91b60: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91b64: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91b67: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91b6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91b6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91b6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91b6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91b70: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf91b76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91b76: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91b79: jmp 0xf91bad */
  goto L_f91bad;
L_f91b7b: /* f91b7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f91b7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f91b80: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* f91b83: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f91b86: push 0xfb9798 */
  { uint32_t v = 0xfb9798u; esp -= 4; W32(esp, v); }
/* f91b8b: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f91b8e: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91b91: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91b94: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91b98: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91b9b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91b9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91b9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91ba1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91ba3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91ba4: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf91baau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91baa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f91bad: /* f91bad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f91bb0: xor ecx, ecx */
  ecx = 0;
/* f91bb2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91bb5: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f91bb7: mov eax, esp */
  eax = esp;
/* f91bb9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f91bbb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f91bbe: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f91bc1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* f91bc4: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f91bc7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91bca: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* f91bcd: mov byte ptr [ebp - 0x1b], cl */
  W8((uint32_t)(ebp + 0xffffffe5u), (ecx & 0xffu));
/* f91bd0: mov byte ptr [ebp - 0x1a], cl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ecx & 0xffu));
/* f91bd3: mov ecx, esp */
  ecx = esp;
/* f91bd5: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f91bd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91bd9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f91bdc: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f91bdf: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* f91be3: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf91be9u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f91be9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f91bec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f91bef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f91bf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91bf3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f91bf6: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f91bfb: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f91c00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91c02: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* f91c05: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f91c08: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f91c0b: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91c0e: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* f91c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91c13: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91c16: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91c1a: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91c1d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91c21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91c23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91c24: mov ecx, esi */
  ecx = esi;
/* f91c26: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf91c29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91c29: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* f91c2f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91c31: je 0xf91c8a */
  if (zf) goto L_f91c8a;
L_f91c33: /* f91c33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91c35: call dword ptr [0xfce434] */
  esp -= 4; W32(esp, 0xf91c3bu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* f91c3b: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* f91c41: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f91c44: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* f91c47: movzx ecx, byte ptr [ecx + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x30u)));
/* f91c4b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f91c4d: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* f91c50: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f91c53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91c54: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f91c57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91c58: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f91c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91c5c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f91c5f: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f91c61: push 0xfb97b4 */
  { uint32_t v = 0xfb97b4u; esp -= 4; W32(esp, v); }
/* f91c66: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91c69: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* f91c6c: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91c6f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91c73: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91c76: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91c79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91c7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91c7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91c7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91c7f: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf91c85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91c85: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91c88: jmp 0xf91cbb */
  goto L_f91cbb;
L_f91c8a: /* f91c8a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f91c8d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f91c90: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f91c92: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f91c94: push 0xfb97e0 */
  { uint32_t v = 0xfb97e0u; esp -= 4; W32(esp, v); }
/* f91c99: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91c9c: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* f91c9f: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91ca2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91ca6: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91ca9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91cac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91cad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91caf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91cb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91cb2: call dword ptr [ecx + 0xac] */
  { uint32_t t = R32((uint32_t)(ecx + 0xacu)); esp -= 4; W32(esp, 0xf91cb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91cb8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f91cbb: /* f91cbb: mov ebx, dword ptr [edi + 0x58] */
  ebx = R32((uint32_t)(edi + 0x58u));
/* f91cbe: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91cc0: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f91cc6: /* f91cc6: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* f91ccc: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f91cce: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f91cd4: /* f91cd4: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f91cd6: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f91cdc: /* f91cdc: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* f91ce3: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f91cea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f91cf0: /* f91cf0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91cf2: je 0xf91e31 */
  if (zf) goto L_f91e31;
L_f91cf8: /* f91cf8: xor ecx, ecx */
  ecx = 0;
/* f91cfa: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91cfd: mov eax, esp */
  eax = esp;
/* f91cff: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f91d01: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f91d04: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f91d07: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* f91d0a: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f91d0d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91d10: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* f91d13: mov byte ptr [ebp - 0x1b], cl */
  W8((uint32_t)(ebp + 0xffffffe5u), (ecx & 0xffu));
/* f91d16: mov byte ptr [ebp - 0x1a], cl */
  W8((uint32_t)(ebp + 0xffffffe6u), (ecx & 0xffu));
/* f91d19: mov ecx, esp */
  ecx = esp;
/* f91d1b: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f91d1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91d1f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f91d22: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* f91d26: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf91d2cu); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f91d2c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f91d2f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f91d32: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f91d35: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f91d37: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f91d3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91d3c: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f91d41: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f91d46: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f91d48: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f91d4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91d4d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f91d50: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91d53: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* f91d56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91d58: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91d5b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91d5f: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91d62: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91d65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91d68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91d69: mov ecx, esi */
  ecx = esi;
/* f91d6b: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf91d6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91d6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91d70: mov ecx, ebx */
  ecx = ebx;
/* f91d72: call dword ptr [0xfce434] */
  esp -= 4; W32(esp, 0xf91d78u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* f91d78: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* f91d7b: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* f91d7e: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f91d81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91d82: movzx ecx, byte ptr [ebx + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x30u)));
/* f91d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91d87: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* f91d8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91d8e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f91d91: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f91d93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91d94: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f91d97: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f91d99: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f91d9c: push 0xfb97fc */
  { uint32_t v = 0xfb97fcu; esp -= 4; W32(esp, v); }
/* f91da1: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f91da4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f91da7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f91daa: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f91dad: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f91db1: fild dword ptr [esi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* f91db4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f91db7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f91db8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91db9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91dbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f91dbc: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf91dc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f91dc2: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91dc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f91dc6: call 0xf71672 */
  esp -= 4; W32(esp, 0xf91dcbu); SPILL(); f_f71672(); if (g_unwind) return; RELOAD();
/* f91dcb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91dce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f91dd0: je 0xf91de3 */
  if (zf) goto L_f91de3;
L_f91dd2: /* f91dd2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f91dd3: call 0xf71672 */
  esp -= 4; W32(esp, 0xf91dd8u); SPILL(); f_f71672(); if (g_unwind) return; RELOAD();
/* f91dd8: mov ebx, dword ptr [eax + 0x1e4] */
  ebx = R32((uint32_t)(eax + 0x1e4u));
/* f91dde: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91de1: jmp 0xf91de5 */
  goto L_f91de5;
L_f91de3: /* f91de3: xor ebx, ebx */
  ebx = 0;
L_f91de5: /* f91de5: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f91de8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f91deb: fadd dword ptr [0xfa5054] */
  ST0 = ST0 + (F32((uint32_t)(0xfa5054u)));
/* f91df1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f91df4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f91df6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f91df9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f91dfc: jmp 0xf91cf0 */
  goto L_f91cf0;
L_f91e31: /* f91e31: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f91e34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f91e35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f91e36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f91e3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f91e3e: mov esp, ebp */
  esp = ebp;
/* f91e40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f91e41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f91e01(void) {
  LOAD_REGS();
L_f91e01: /* f91e01: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* f91e04: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f91e09: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f91e0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f91e0d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f91e10: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf91e15u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f91e15(); return;
}

void f_f91e15(void) {
  LOAD_REGS();
L_f91e15: /* f91e15: push 0xfa5210 */
  { uint32_t v = 0xfa5210u; esp -= 4; W32(esp, v); }
/* f91e1a: push 0xfb9820 */
  { uint32_t v = 0xfb9820u; esp -= 4; W32(esp, v); }
/* f91e1f: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf91e25u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f91e25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f91e28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91e2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f91e2c: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf91e31u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f91e31: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f91e34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f91e35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f91e36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f91e3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f91e3e: mov esp, ebp */
  esp = ebp;
/* f91e40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f91e41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f92060(void) {
  LOAD_REGS();
L_f92060: /* f92060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f92062: push 0xf9a6e2 */
  { uint32_t v = 0xf9a6e2u; esp -= 4; W32(esp, v); }
/* f92067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f9206d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9206e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f92075: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f92078: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f92079: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9207a: mov esi, ecx */
  esi = ecx;
/* f9207c: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* f92082: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* f92088: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* f9208c: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f9208f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92091: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92092: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* f92096: je 0xf920aa */
  if (zf) goto L_f920aa;
L_f92098: /* f92098: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f9209a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9209b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f9209f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f920a0: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf920a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f920a6: mov edi, eax */
  edi = eax;
/* f920a8: jmp 0xf920ac */
  goto L_f920ac;
L_f920aa: /* f920aa: xor edi, edi */
  edi = 0;
L_f920ac: /* f920ac: mov ebp, dword ptr [esi + 0x108] */
  ebp = R32((uint32_t)(esi + 0x108u));
/* f920b2: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f920b4: je 0xf921b6 */
  if (zf) goto L_f921b6;
L_f920ba: /* f920ba: mov al, byte ptr [ebp + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x30u))) & 0xffu);
/* f920bd: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f920bf: jne 0xf920fa */
  if (!zf) goto L_f920fa;
L_f920c1: /* f920c1: test byte ptr [ebp + 0x58], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x58u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f920c5: je 0xf920fa */
  if (zf) goto L_f920fa;
L_f920c7: /* f920c7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f920cb: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* f920ce: call 0xf979dc */
  esp -= 4; W32(esp, 0xf920d3u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f920d3: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* f920d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f920d8: call 0xf979dc */
  esp -= 4; W32(esp, 0xf920ddu); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f920dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f920de: mov ecx, ebp */
  ecx = ebp;
/* f920e0: call dword ptr [esi + 0x94] */
  { uint32_t t = R32((uint32_t)(esi + 0x94u)); esp -= 4; W32(esp, 0xf920e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f920e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f920e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f920e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f920e9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* f920ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f920f4: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f920f7: ret 8 */
  esp += 12; SPILL(); return;
L_f920fa: /* f920fa: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f920fc: je 0xf9210b */
  if (zf) goto L_f9210b;
L_f920fe: /* f920fe: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f92100: jne 0xf9210b */
  if (!zf) goto L_f9210b;
L_f92102: /* f92102: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92104: mov ecx, ebp */
  ecx = ebp;
/* f92106: call 0xf716a4 */
  esp -= 4; W32(esp, 0xf9210bu); SPILL(); f_f716a4(); if (g_unwind) return; RELOAD();
L_f9210b: /* f9210b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9210d: je 0xf9213e */
  if (zf) goto L_f9213e;
L_f9210f: /* f9210f: mov al, byte ptr [edi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x30u))) & 0xffu);
/* f92112: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f92114: jne 0xf9213e */
  if (!zf) goto L_f9213e;
L_f92116: /* f92116: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f92118: mov ecx, edi */
  ecx = edi;
/* f9211a: call 0xf716a4 */
  esp -= 4; W32(esp, 0xf9211fu); SPILL(); f_f716a4(); if (g_unwind) return; RELOAD();
/* f9211f: test byte ptr [edi + 0x98], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x98u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f92126: je 0xf9213e */
  if (zf) goto L_f9213e;
L_f92128: /* f92128: cmp dword ptr [esi + 0x108], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x108u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f9212e: je 0xf9213e */
  if (zf) goto L_f9213e;
L_f92130: /* f92130: mov ecx, dword ptr [esi + 0x12c] */
  ecx = R32((uint32_t)(esi + 0x12cu));
/* f92136: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92137: mov ecx, esi */
  ecx = esi;
/* f92139: call 0xf715f0 */
  esp -= 4; W32(esp, 0xf9213eu); SPILL(); f_f715f0(); if (g_unwind) return; RELOAD();
L_f9213e: /* f9213e: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f92141: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92143: mov dword ptr [esi + 0x108], edi */
  W32((uint32_t)(esi + 0x108u), edi);
/* f92149: je 0xf9218c */
  if (zf) goto L_f9218c;
L_f9214b: /* f9214b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9214d: jne 0xf92183 */
  if (!zf) goto L_f92183;
L_f9214f: /* f9214f: push 0xfba52c */
  { uint32_t v = 0xfba52cu; esp -= 4; W32(esp, v); }
/* f92154: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* f92158: call dword ptr [0xfce430] */
  esp -= 4; W32(esp, 0xf9215eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* f9215e: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f92161: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* f92165: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92166: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* f9216a: call 0xf71730 */
  esp -= 4; W32(esp, 0xf9216fu); SPILL(); f_f71730(); if (g_unwind) return; RELOAD();
/* f9216f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* f92173: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* f9217b: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf92181u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f92181: jmp 0xf9218c */
  goto L_f9218c;
L_f92183: /* f92183: add edi, 0x60 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f92186: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92187: call 0xf71730 */
  esp -= 4; W32(esp, 0xf9218cu); SPILL(); f_f71730(); if (g_unwind) return; RELOAD();
L_f9218c: /* f9218c: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* f92192: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92194: je 0xf92255 */
  if (zf) goto L_f92255;
L_f9219a: /* f9219a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f9219c: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xf921a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f921a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f921a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f921a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f921a5: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* f921a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f921b0: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f921b3: ret 8 */
  esp += 12; SPILL(); return;
L_f921b6: /* f921b6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f921b8: je 0xf92255 */
  if (zf) goto L_f92255;
L_f921be: /* f921be: mov dword ptr [esi + 0x108], edi */
  W32((uint32_t)(esi + 0x108u), edi);
/* f921c4: mov al, byte ptr [edi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x30u))) & 0xffu);
/* f921c7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f921c9: jne 0xf921f1 */
  if (!zf) goto L_f921f1;
L_f921cb: /* f921cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f921cd: mov ecx, edi */
  ecx = edi;
/* f921cf: call 0xf716a4 */
  esp -= 4; W32(esp, 0xf921d4u); SPILL(); f_f716a4(); if (g_unwind) return; RELOAD();
/* f921d4: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* f921da: test byte ptr [ecx + 0x98], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x98u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f921e1: je 0xf921f1 */
  if (zf) goto L_f921f1;
L_f921e3: /* f921e3: mov edx, dword ptr [esi + 0x12c] */
  edx = R32((uint32_t)(esi + 0x12cu));
/* f921e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f921ea: mov ecx, esi */
  ecx = esi;
/* f921ec: call 0xf715f0 */
  esp -= 4; W32(esp, 0xf921f1u); SPILL(); f_f715f0(); if (g_unwind) return; RELOAD();
L_f921f1: /* f921f1: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f921f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f921f6: je 0xf92243 */
  if (zf) goto L_f92243;
L_f921f8: /* f921f8: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* f921fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92200: jne 0xf9223a */
  if (!zf) goto L_f9223a;
L_f92202: /* f92202: push 0xfba530 */
  { uint32_t v = 0xfba530u; esp -= 4; W32(esp, v); }
/* f92207: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* f9220b: call dword ptr [0xfce430] */
  esp -= 4; W32(esp, 0xf92211u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* f92211: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f92214: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* f92218: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92219: mov dword ptr [esp + 0x38], 1 */
  W32((uint32_t)(esp + 0x38u), 0x1u);
/* f92221: call 0xf71730 */
  esp -= 4; W32(esp, 0xf92226u); SPILL(); f_f71730(); if (g_unwind) return; RELOAD();
/* f92226: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* f9222a: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* f92232: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf92238u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f92238: jmp 0xf92243 */
  goto L_f92243;
L_f9223a: /* f9223a: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f9223d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9223e: call 0xf71730 */
  esp -= 4; W32(esp, 0xf92243u); SPILL(); f_f71730(); if (g_unwind) return; RELOAD();
L_f92243: /* f92243: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* f92249: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9224b: je 0xf92255 */
  if (zf) goto L_f92255;
L_f9224d: /* f9224d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f9224f: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xf92255u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f92255: /* f92255: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* f92259: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9225a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9225b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9225c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92263: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92266: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f92300(void) {
  LOAD_REGS();
L_f92300: /* f92300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f92301: mov ebp, esp */
  ebp = esp;
/* f92303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f92305: push 0xf9a700 */
  { uint32_t v = 0xf9a700u; esp -= 4; W32(esp, v); }
/* f9230a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f92310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f92318: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9231b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9231c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9231d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f92320: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f92323: xor ebx, ebx */
  ebx = 0;
/* f92325: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* f92328: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f9232b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f9232c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9232d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f92330: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f92333: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f92336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92337: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f9233c: mov edi, ecx */
  edi = ecx;
/* f9233e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f92341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92342: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f92345: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf92348u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92348: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f9234b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f9234e: mov byte ptr [ebp - 0x20], bl */
  W8((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffu));
/* f92351: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f92354: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f92355: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f92358: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* f9235b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9235c: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f92361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92362: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf92365u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92365: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f92368: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f9236b: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* f9236e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f92371: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f92372: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f92375: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f92378: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92379: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f9237e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9237f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf92382u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92382: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f92385: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f92388: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f9238b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f9238e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f9238f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f92392: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f92395: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92396: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f9239b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9239c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf9239fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9239f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f923a2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f923a5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f923a8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f923ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f923ac: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f923af: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f923b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f923b3: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f923b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f923b9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf923bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f923bc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f923bf: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f923c2: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* f923c5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f923c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f923c9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f923cc: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* f923cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f923d0: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f923d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f923d6: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf923d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f923d9: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f923dc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f923dd: mov eax, edx */
  eax = edx;
/* f923df: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f923e2: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f923e5: jne 0xf923fc */
  if (!zf) goto L_f923fc;
L_f923e7: /* f923e7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f923ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f923eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f923ec: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f923ef: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f923f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f923f6: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf923fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f923fc: /* f923fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f923ff: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f92402: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f92405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92406: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f92409: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9240a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f9240d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9240e: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f92411: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92412: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92413: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92414: mov ecx, edi */
  ecx = edi;
/* f92416: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf9241bu); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f9241b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9241e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9241f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92420: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92427: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92428: mov esp, ebp */
  esp = ebp;
/* f9242a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9242b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f9242e(void) {
  LOAD_REGS();
L_f9242e: /* f9242e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f92431: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f92436: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f92439: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9243a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f9243d: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92442u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f92442(); return;
}

void f_f92442(void) {
  LOAD_REGS();
L_f92442: /* f92442: push 0xfa525c */
  { uint32_t v = 0xfa525cu; esp -= 4; W32(esp, v); }
/* f92447: push 0xfb9968 */
  { uint32_t v = 0xfb9968u; esp -= 4; W32(esp, v); }
/* f9244c: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf92452u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f92452: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92455: xor ebx, ebx */
  ebx = 0;
/* f92457: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92458: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92459: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9245eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9245e: guest_badaddr(0xf9245e); return;
}

void f_f924c0(void) {
  LOAD_REGS();
L_f924c0: /* f924c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f924c1: mov ebp, esp */
  ebp = esp;
/* f924c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f924c5: push 0xf9a719 */
  { uint32_t v = 0xf9a719u; esp -= 4; W32(esp, v); }
/* f924ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f924d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f924d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f924d8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f924db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f924dc: mov ebx, dword ptr [0xfce43c] */
  ebx = R32((uint32_t)(0xfce43cu));
/* f924e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f924e3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f924e6: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* f924e9: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f924ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f924ed: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* f924f0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f924f3: mov edi, ecx */
  edi = ecx;
/* f924f5: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f924f8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f924fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f924fc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f92503: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f92506: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f92509: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf9250bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9250b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* f9250e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* f92511: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* f92514: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92518: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* f9251b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf9251du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9251d: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* f92520: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* f92523: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* f92526: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92529: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9252a: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* f9252d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf9252fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9252f: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* f92532: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* f92535: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* f92538: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9253b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9253c: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* f9253f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf92541u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92541: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* f92544: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* f92547: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* f9254a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9254d: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f9254f: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* f92552: ja 0xf9262a */
  if ((!cf && !zf)) goto L_f9262a;
L_f92558: /* f92558: movzx ebx, al */
  ebx = (uint32_t)((eax & 0xffu));
/* f9255b: mov eax, dword ptr [edi + ebx*4 + 0x84] */
  eax = R32((uint32_t)(edi + ebx*4 + 0x84u));
/* f92562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92564: je 0xf9262a */
  if (zf) goto L_f9262a;
L_f9256a: /* f9256a: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* f9256d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9256e: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* f92571: push 0xfb9980 */
  { uint32_t v = 0xfb9980u; esp -= 4; W32(esp, v); }
/* f92576: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92577: call dword ptr [0xfce404] */
  esp -= 4; W32(esp, 0xf9257du); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* f9257d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92580: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* f92583: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* f92586: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92587: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* f9258a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9258b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* f9258e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9258f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f92592: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92593: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f92596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92597: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92598: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92599: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9259a: mov ecx, edi */
  ecx = edi;
/* f9259c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f925a0: call 0xf71e29 */
  esp -= 4; W32(esp, 0xf925a5u); SPILL(); f_f71e29(); if (g_unwind) return; RELOAD();
/* f925a5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f925a8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f925ab: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f925af: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf925b5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f925b5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f925b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f925ba: jne 0xf9262a */
  if (!zf) goto L_f9262a;
L_f925bc: /* f925bc: mov cl, byte ptr [ebx + edi + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edi + 0x38u))) & 0xffu);
/* f925c0: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* f925c3: mov byte ptr [esi + 0x50], cl */
  W8((uint32_t)(esi + 0x50u), (ecx & 0xffu));
/* f925c6: mov edx, dword ptr [edi + ebx*4 + 0x5c] */
  edx = R32((uint32_t)(edi + ebx*4 + 0x5cu));
/* f925ca: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* f925cd: mov ecx, dword ptr [edi + ebx*4 + 0x84] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x84u));
/* f925d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f925d5: call 0xf71a14 */
  esp -= 4; W32(esp, 0xf925dau); SPILL(); f_f71a14(); if (g_unwind) return; RELOAD();
/* f925da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f925dc: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* f925df: je 0xf92618 */
  if (zf) goto L_f92618;
L_f925e1: /* f925e1: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* f925e4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* f925e7: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* f925ea: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* f925ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f925ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f925f0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f925f3: push 0xfb9988 */
  { uint32_t v = 0xfb9988u; esp -= 4; W32(esp, v); }
/* f925f8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f925fb: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f925ff: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* f92602: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* f92605: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f92608: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92609: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* f9260c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9260d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9260e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9260f: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf92615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92615: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f92618: /* f92618: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* f9261b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f9261e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f92621: mov byte ptr [esi + 0x50], al */
  W8((uint32_t)(esi + 0x50u), (eax & 0xffu));
/* f92624: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* f92627: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
L_f9262a: /* f9262a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9262d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9262e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9262f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92636: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92637: mov esp, ebp */
  esp = ebp;
/* f92639: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9263a: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_f9263d(void) {
  LOAD_REGS();
L_f9263d: /* f9263d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f92640: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f92645: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f92648: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92649: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f9264c: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92651u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f92651(); return;
}

void f_f92651(void) {
  LOAD_REGS();
L_f92651: /* f92651: push 0xfa5290 */
  { uint32_t v = 0xfa5290u; esp -= 4; W32(esp, v); }
/* f92656: push 0xfb9990 */
  { uint32_t v = 0xfb9990u; esp -= 4; W32(esp, v); }
/* f9265b: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf92661u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f92661: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92666: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92668: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9266du); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9266d: guest_badaddr(0xf9266d); return;
}

void f_f926e0(void) {
  LOAD_REGS();
L_f926e0: /* f926e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f926e1: mov ebp, esp */
  ebp = esp;
/* f926e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f926e5: push 0xf9a730 */
  { uint32_t v = 0xf9a730u; esp -= 4; W32(esp, v); }
/* f926ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f926f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f926f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f926f8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f926fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f926fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f926fd: mov esi, ecx */
  esi = ecx;
/* f926ff: mov al, byte ptr [esi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f92702: xor ebx, ebx */
  ebx = 0;
/* f92704: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f92706: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92707: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f9270a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f9270d: jne 0xf9276e */
  if (!zf) goto L_f9276e;
L_f9270f: /* f9270f: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f92713: je 0xf9276e */
  if (zf) goto L_f9276e;
L_f92715: /* f92715: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* f92718: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f9271a: je 0xf9274f */
  if (zf) goto L_f9274f;
L_f9271c: /* f9271c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9271d: call 0xf71672 */
  esp -= 4; W32(esp, 0xf92722u); SPILL(); f_f71672(); if (g_unwind) return; RELOAD();
/* f92722: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92725: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92727: je 0xf9274f */
  if (zf) goto L_f9274f;
L_f92729: /* f92729: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9272a: call 0xf71672 */
  esp -= 4; W32(esp, 0xf9272fu); SPILL(); f_f71672(); if (g_unwind) return; RELOAD();
/* f9272f: mov ecx, dword ptr [eax + 0x1e4] */
  ecx = R32((uint32_t)(eax + 0x1e4u));
/* f92735: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92738: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f9273a: mov ecx, esi */
  ecx = esi;
/* f9273c: jne 0xf92747 */
  if (!zf) goto L_f92747;
L_f9273e: /* f9273e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f92740: call 0xf716a4 */
  esp -= 4; W32(esp, 0xf92745u); SPILL(); f_f716a4(); if (g_unwind) return; RELOAD();
/* f92745: jmp 0xf9276e */
  goto L_f9276e;
L_f92747: /* f92747: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92748: call 0xf716a4 */
  esp -= 4; W32(esp, 0xf9274du); SPILL(); f_f716a4(); if (g_unwind) return; RELOAD();
/* f9274d: jmp 0xf9276e */
  goto L_f9276e;
L_f9274f: /* f9274f: mov eax, dword ptr [0xfba404] */
  eax = R32((uint32_t)(0xfba404u));
/* f92754: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92756: mov ecx, esi */
  ecx = esi;
/* f92758: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* f9275b: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf92761u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f92761: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f92763: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92764: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* f92767: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92769: mov ecx, esi */
  ecx = esi;
/* f9276b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf9276eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f9276e: /* f9276e: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f92771: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f92777: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f92779: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9277eu); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9277e: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f92784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92785: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9278au); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9278a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9278b: mov ecx, esi */
  ecx = esi;
/* f9278d: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf92790u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92790: xor ebx, ebx */
  ebx = 0;
/* f92792: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f92794: jne 0xf927a9 */
  if (!zf) goto L_f927a9;
L_f92796: /* f92796: xor eax, eax */
  eax = 0;
/* f92798: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9279b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f927a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f927a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f927a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f927a5: mov esp, ebp */
  esp = ebp;
/* f927a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f927a8: ret  */
  esp += 4; SPILL(); return;
L_f927a9: /* f927a9: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* f927ac: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f927af: jne 0xf928c5 */
  if (!zf) goto L_f928c5;
L_f927b5: /* f927b5: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f927b8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f927ba: je 0xf927ca */
  if (zf) goto L_f927ca;
L_f927bc: /* f927bc: xor edx, edx */
  edx = 0;
/* f927be: mov dl, byte ptr [esi + 0x9c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9cu))) & 0xffu);
/* f927c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f927c5: call 0xf71f87 */
  esp -= 4; W32(esp, 0xf927cau); SPILL(); f_f71f87(); if (g_unwind) return; RELOAD();
L_f927ca: /* f927ca: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* f927d0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f927d2: je 0xf9286c */
  if (zf) goto L_f9286c;
L_f927d8: /* f927d8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f927da: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xf927ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f927dd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f927df: jne 0xf9286c */
  if (!zf) goto L_f9286c;
L_f927e5: /* f927e5: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f927e8: call 0xf72130 */
  esp -= 4; W32(esp, 0xf927edu); SPILL(); f_f72130(); if (g_unwind) return; RELOAD();
/* f927ed: fld dword ptr [edi + 0xc0] */
  { double v = F32((uint32_t)(edi + 0xc0u)); FPUSH(v); }
/* f927f3: fadd dword ptr [edi + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0xbcu)));
/* f927f9: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* f927fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f927fd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f92800: jne 0xf9286c */
  if (!zf) goto L_f9286c;
L_f92802: /* f92802: fild dword ptr [edi + 0xc4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0xc4u)); FPUSH(v); }
/* f92808: fcomp dword ptr [edi + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xa8u)));
  FPOP();
/* f9280e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f92810: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f92813: jp 0xf9286c */
  if (pf) goto L_f9286c;
L_f92815: /* f92815: fild dword ptr [edi + 0xc8] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0xc8u)); FPUSH(v); }
/* f9281b: fcomp dword ptr [edi + 0xac] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xacu)));
  FPOP();
/* f92821: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f92823: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f92826: jp 0xf9286c */
  if (pf) goto L_f9286c;
L_f92828: /* f92828: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92829: mov ecx, esi */
  ecx = esi;
/* f9282b: call 0xf719d8 */
  esp -= 4; W32(esp, 0xf92830u); SPILL(); f_f719d8(); if (g_unwind) return; RELOAD();
/* f92830: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f92833: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f92835: je 0xf928c5 */
  if (zf) goto L_f928c5;
L_f9283b: /* f9283b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* f9283e: mov dword ptr [eax + 0xc4], ecx */
  W32((uint32_t)(eax + 0xc4u), ecx);
/* f92844: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f92847: mov dword ptr [edx + 0xc8], ecx */
  W32((uint32_t)(edx + 0xc8u), ecx);
/* f9284d: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f92850: mov dword ptr [eax + 0xc0], ebx */
  W32((uint32_t)(eax + 0xc0u), ebx);
/* f92856: mov eax, 1 */
  eax = 0x1u;
/* f9285b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9285e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92865: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92866: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92867: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92868: mov esp, ebp */
  esp = ebp;
/* f9286a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9286b: ret  */
  esp += 4; SPILL(); return;
L_f9286c: /* f9286c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9286e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9286f: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f92872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92873: mov eax, dword ptr [0xfba4a4] */
  eax = R32((uint32_t)(0xfba4a4u));
/* f92878: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* f9287e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9287f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92880: mov ecx, esi */
  ecx = esi;
/* f92882: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* f92885: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* f92888: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf9288bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9288b: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f9288e: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f92890: je 0xf928c5 */
  if (zf) goto L_f928c5;
L_f92892: /* f92892: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f92898: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9289du); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9289d: mov dword ptr [edi + 0xc4], eax */
  W32((uint32_t)(edi + 0xc4u), eax);
/* f928a3: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f928a6: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f928ac: call 0xf979dc */
  esp -= 4; W32(esp, 0xf928b1u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f928b1: mov dword ptr [edi + 0xc8], eax */
  W32((uint32_t)(edi + 0xc8u), eax);
/* f928b7: call 0xf72130 */
  esp -= 4; W32(esp, 0xf928bcu); SPILL(); f_f72130(); if (g_unwind) return; RELOAD();
/* f928bc: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f928bf: fstp dword ptr [ecx + 0xc0] */
  WF32((uint32_t)(ecx + 0xc0u), ST0); FPOP();
L_f928c5: /* f928c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f928c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f928c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f928ca: mov eax, 1 */
  eax = 0x1u;
/* f928cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f928d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f928d7: mov esp, ebp */
  esp = ebp;
/* f928d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f928da: ret  */
  esp += 4; SPILL(); return;
}

void f_f928db(void) {
  LOAD_REGS();
L_f928db: /* f928db: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f928de: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f928e3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f928e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f928e7: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f928ea: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf928efu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f928ef(); return;
}

void f_f928ef(void) {
  LOAD_REGS();
L_f928ef: /* f928ef: push 0xfa52c4 */
  { uint32_t v = 0xfa52c4u; esp -= 4; W32(esp, v); }
/* f928f4: push 0xfb9a0c */
  { uint32_t v = 0xfb9a0cu; esp -= 4; W32(esp, v); }
/* f928f9: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf928ffu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f928ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92902: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92904: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92906: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9290bu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9290b: guest_badaddr(0xf9290b); return;
}

void f_f929a0(void) {
  LOAD_REGS();
L_f929a0: /* f929a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f929a1: mov ebp, esp */
  ebp = esp;
/* f929a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f929a5: push 0xf9a749 */
  { uint32_t v = 0xf9a749u; esp -= 4; W32(esp, v); }
/* f929aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f929b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f929b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f929b8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f929bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f929bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f929bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f929be: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f929c1: cmp byte ptr [edi], 9 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f929c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f929c7: mov esi, ecx */
  esi = ecx;
/* f929c9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f929d0: jne 0xf92a0c */
  if (!zf) goto L_f92a0c;
L_f929d2: /* f929d2: test byte ptr [esi + 0x58], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f929d6: jne 0xf92a0c */
  if (!zf) goto L_f92a0c;
L_f929d8: /* f929d8: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f929db: test byte ptr [eax + 0xb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f929e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f929e4: mov ecx, esi */
  ecx = esi;
/* f929e6: je 0xf929ef */
  if (zf) goto L_f929ef;
L_f929e8: /* f929e8: call 0xf7149c */
  esp -= 4; W32(esp, 0xf929edu); SPILL(); f_f7149c(); if (g_unwind) return; RELOAD();
/* f929ed: jmp 0xf929f4 */
  goto L_f929f4;
L_f929ef: /* f929ef: call 0xf71b6d */
  esp -= 4; W32(esp, 0xf929f4u); SPILL(); f_f71b6d(); if (g_unwind) return; RELOAD();
L_f929f4: /* f929f4: mov eax, 1 */
  eax = 0x1u;
/* f929f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f929fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92a03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92a04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92a05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92a06: mov esp, ebp */
  esp = ebp;
/* f92a08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92a09: ret 8 */
  esp += 12; SPILL(); return;
L_f92a0c: /* f92a0c: movzx ecx, word ptr [ebp + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xcu)));
/* f92a10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92a11: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* f92a14: push 0xfb9a2c */
  { uint32_t v = 0xfb9a2cu; esp -= 4; W32(esp, v); }
/* f92a19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92a1a: call dword ptr [0xfce404] */
  esp -= 4; W32(esp, 0xf92a20u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* f92a20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92a23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92a24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92a25: mov ecx, esi */
  ecx = esi;
/* f92a27: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f92a2b: call 0xf72081 */
  esp -= 4; W32(esp, 0xf92a30u); SPILL(); f_f72081(); if (g_unwind) return; RELOAD();
/* f92a30: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f92a33: mov esi, eax */
  esi = eax;
/* f92a35: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f92a39: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf92a3fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f92a3f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f92a42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92a43: mov eax, esi */
  eax = esi;
/* f92a45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92a46: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92a4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92a4e: mov esp, ebp */
  esp = ebp;
/* f92a50: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92a51: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f92a54(void) {
  LOAD_REGS();
L_f92a54: /* f92a54: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f92a57: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f92a5c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f92a5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92a60: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f92a63: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92a68u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f92a68(); return;
}

void f_f92a68(void) {
  LOAD_REGS();
L_f92a68: /* f92a68: push 0xfa5304 */
  { uint32_t v = 0xfa5304u; esp -= 4; W32(esp, v); }
/* f92a6d: push 0xfb9a34 */
  { uint32_t v = 0xfb9a34u; esp -= 4; W32(esp, v); }
/* f92a72: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf92a78u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f92a78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92a7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92a7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92a7f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92a84u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f92a84: guest_badaddr(0xf92a84); return;
}

void f_f92ad0(void) {
  LOAD_REGS();
L_f92ad0: /* f92ad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f92ad1: mov ebp, esp */
  ebp = esp;
/* f92ad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f92ad5: push 0xf9a760 */
  { uint32_t v = 0xf9a760u; esp -= 4; W32(esp, v); }
/* f92ada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f92ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92ae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f92ae8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f92aeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92aec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92aed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f92af0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f92af3: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* f92afa: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f92afd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f92afe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92aff: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f92b02: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f92b05: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f92b08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92b09: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f92b0e: mov edi, ecx */
  edi = ecx;
/* f92b10: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f92b13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92b14: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f92b1b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf92b1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92b1e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f92b21: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f92b24: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* f92b2b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f92b2e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f92b2f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f92b32: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* f92b35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92b36: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f92b3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92b3c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf92b3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92b3f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f92b42: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f92b43: mov eax, edx */
  eax = edx;
/* f92b45: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f92b48: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f92b4b: jne 0xf92b63 */
  if (!zf) goto L_f92b63;
L_f92b4d: /* f92b4d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f92b50: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f92b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92b53: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f92b56: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f92b5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92b5d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf92b63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f92b63: /* f92b63: mov ecx, edi */
  ecx = edi;
L_f92b65: /* f92b65: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f92b68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92b6a: je 0xf92b70 */
  if (zf) goto L_f92b70;
L_f92b6c: /* f92b6c: mov ecx, eax */
  ecx = eax;
/* f92b6e: jmp 0xf92b65 */
  goto L_f92b65;
L_f92b70: /* f92b70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92b71: call 0xf71280 */
  esp -= 4; W32(esp, 0xf92b76u); SPILL(); f_f71280(); if (g_unwind) return; RELOAD();
/* f92b76: mov ecx, eax */
  ecx = eax;
/* f92b78: mov eax, dword ptr [edi + 0xc8] */
  eax = R32((uint32_t)(edi + 0xc8u));
/* f92b7e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92b81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f92b83: jge 0xf92bb2 */
  if ((sf == of)) goto L_f92bb2;
L_f92b85: /* f92b85: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f92b88: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f92b8e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f92b90: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f92b93: jne 0xf92bb2 */
  if (!zf) goto L_f92bb2;
L_f92b95: /* f92b95: lea esi, [ecx + 0x210] */
  esi = (uint32_t)(ecx + 0x210u);
/* f92b9b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f92b9d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f92b9f: mov ecx, esi */
  ecx = esi;
/* f92ba1: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf92ba7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f92ba7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f92ba9: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* f92bac: mov dword ptr [edi + 0xc8], eax */
  W32((uint32_t)(edi + 0xc8u), eax);
L_f92bb2: /* f92bb2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f92bb5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f92bb8: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f92bbe: mov eax, edx */
  eax = edx;
/* f92bc0: mov dword ptr [edi + 0xd0], eax */
  W32((uint32_t)(edi + 0xd0u), eax);
/* f92bc6: mov eax, dword ptr [edi + 0xcc] */
  eax = R32((uint32_t)(edi + 0xccu));
/* f92bcc: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f92bcf: mov dword ptr [edi + 0xcc], eax */
  W32((uint32_t)(edi + 0xccu), eax);
/* f92bd5: mov ecx, eax */
  ecx = eax;
/* f92bd7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f92bd9: mov dword ptr [edi + 0xd4], edx */
  W32((uint32_t)(edi + 0xd4u), edx);
/* f92bdf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f92be2: jne 0xf92bf6 */
  if (!zf) goto L_f92bf6;
L_f92be4: /* f92be4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f92be7: mov edx, ecx */
  edx = ecx;
/* f92be9: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f92beb: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f92bee: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f92bf0: mov dword ptr [edi + 0xcc], edx */
  W32((uint32_t)(edi + 0xccu), edx);
L_f92bf6: /* f92bf6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f92bf9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92bfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92bfb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92c02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92c03: mov esp, ebp */
  esp = ebp;
/* f92c05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92c06: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f92c09(void) {
  LOAD_REGS();
L_f92c09: /* f92c09: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f92c0c: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f92c11: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f92c14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92c15: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f92c18: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92c1du); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f92c1d(); return;
}

void f_f92c1d(void) {
  LOAD_REGS();
L_f92c1d: /* f92c1d: push 0xfa5348 */
  { uint32_t v = 0xfa5348u; esp -= 4; W32(esp, v); }
/* f92c22: push 0xfb9a6c */
  { uint32_t v = 0xfb9a6cu; esp -= 4; W32(esp, v); }
/* f92c27: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf92c2du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f92c2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92c30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92c32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92c34: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92c39u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f92c39: guest_badaddr(0xf92c39); return;
}

void f_f92ca0(void) {
  LOAD_REGS();
L_f92ca0: /* f92ca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f92ca1: mov ebp, esp */
  ebp = esp;
/* f92ca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f92ca5: push 0xf9a770 */
  { uint32_t v = 0xf9a770u; esp -= 4; W32(esp, v); }
/* f92caa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f92cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92cb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f92cb8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f92cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92cbd: mov esi, ecx */
  esi = ecx;
/* f92cbf: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* f92cc5: xor ecx, ecx */
  ecx = 0;
/* f92cc7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f92cc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92cca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f92ccd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* f92cd0: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* f92cd3: jg 0xf92e16 */
  if ((!zf && sf == of)) goto L_f92e16;
L_f92cd9: /* f92cd9: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* f92cdc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f92cde: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f92ce1: je 0xf92ceb */
  if (zf) goto L_f92ceb;
L_f92ce3: /* f92ce3: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* f92ce6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f92ce9: jmp 0xf92cee */
  goto L_f92cee;
L_f92ceb: /* f92ceb: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_f92cee: /* f92cee: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f92cf1: call 0xf71537 */
  esp -= 4; W32(esp, 0xf92cf6u); SPILL(); f_f71537(); if (g_unwind) return; RELOAD();
/* f92cf6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f92cf9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92cfb: je 0xf92e16 */
  if (zf) goto L_f92e16;
L_f92d01: /* f92d01: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* f92d04: mov edx, dword ptr [0xfce3fc] */
  edx = R32((uint32_t)(0xfce3fcu));
/* f92d0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f92d10: /* f92d10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92d12: je 0xf92d1d */
  if (zf) goto L_f92d1d;
L_f92d14: /* f92d14: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f92d16: je 0xf92d2c */
  if (zf) goto L_f92d2c;
L_f92d18: /* f92d18: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f92d1b: jmp 0xf92d10 */
  goto L_f92d10;
L_f92d1d: /* f92d1d: xor eax, eax */
  eax = 0;
/* f92d1f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92d21: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f92d24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92d26: je 0xf92ddb */
  if (zf) goto L_f92ddb;
L_f92d2c: /* f92d2c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92d2e: je 0xf92ddb */
  if (zf) goto L_f92ddb;
L_f92d34: /* f92d34: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* f92d37: and edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f92d3d: cmp edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f92d43: jne 0xf92ddb */
  if (!zf) goto L_f92ddb;
L_f92d49: /* f92d49: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* f92d4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f92d50: /* f92d50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92d52: je 0xf92ddb */
  if (zf) goto L_f92ddb;
L_f92d58: /* f92d58: cmp eax, 0xfbf340 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfbf340u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f92d5d: je 0xf92d64 */
  if (zf) goto L_f92d64;
L_f92d5f: /* f92d5f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f92d62: jmp 0xf92d50 */
  goto L_f92d50;
L_f92d64: /* f92d64: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* f92d67: mov ebx, dword ptr [esi + eax] */
  ebx = R32((uint32_t)(esi + eax));
/* f92d6a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92d6c: je 0xf92ddb */
  if (zf) goto L_f92ddb;
L_f92d6e: /* f92d6e: xor ecx, ecx */
  ecx = 0;
/* f92d70: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_f92d73: /* f92d73: cmp ecx, dword ptr [esi + 0x1d0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f92d79: jge 0xf92d99 */
  if ((sf == of)) goto L_f92d99;
L_f92d7b: /* f92d7b: mov edx, dword ptr [esi + 0x1cc] */
  edx = R32((uint32_t)(esi + 0x1ccu));
/* f92d81: fld dword ptr [ebx + 0x8c] */
  { double v = F32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* f92d87: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* f92d8a: fcomp dword ptr [eax + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x8cu)));
  FPOP();
/* f92d90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f92d92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f92d95: jp 0xf92dc6 */
  if (pf) goto L_f92dc6;
L_f92d97: /* f92d97: mov edi, ecx */
  edi = ecx;
L_f92d99: /* f92d99: add esi, 0x1cc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f92d9f: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f92da2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f92da4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f92da6: mov ecx, esi */
  ecx = esi;
/* f92da8: jne 0xf92dc9 */
  if (!zf) goto L_f92dc9;
L_f92daa: /* f92daa: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf92db0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f92db0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f92db2: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* f92db5: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* f92db8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f92dbb: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f92dbe: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f92dc1: jmp 0xf92cee */
  goto L_f92cee;
L_f92dc6: /* f92dc6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f92dc7: jmp 0xf92d73 */
  goto L_f92d73;
L_f92dc9: /* f92dc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92dca: call dword ptr [0xfce3f4] */
  esp -= 4; W32(esp, 0xf92dd0u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* f92dd0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f92dd2: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* f92dd5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f92dd8: mov dword ptr [edx + edi*4], ebx */
  W32((uint32_t)(edx + edi*4), ebx);
L_f92ddb: /* f92ddb: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* f92dde: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f92de1: jmp 0xf92cee */
  goto L_f92cee;
L_f92e16: /* f92e16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f92e19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92e1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92e1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92e22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92e23: mov esp, ebp */
  esp = ebp;
/* f92e25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92e26: ret  */
  esp += 4; SPILL(); return;
}

void f_f92de6(void) {
  LOAD_REGS();
L_f92de6: /* f92de6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f92de9: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f92dee: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* f92df1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92df2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f92df5: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92dfau); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f92dfa(); return;
}

void f_f92dfa(void) {
  LOAD_REGS();
L_f92dfa: /* f92dfa: push 0xfa5390 */
  { uint32_t v = 0xfa5390u; esp -= 4; W32(esp, v); }
/* f92dff: push 0xfb9a84 */
  { uint32_t v = 0xfb9a84u; esp -= 4; W32(esp, v); }
/* f92e04: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf92e0au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f92e0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92e0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92e0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92e11: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92e16u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f92e16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f92e19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92e1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92e1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92e22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92e23: mov esp, ebp */
  esp = ebp;
/* f92e25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92e26: ret  */
  esp += 4; SPILL(); return;
}

void f_f92ea0(void) {
  LOAD_REGS();
L_f92ea0: /* f92ea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f92ea1: mov ebp, esp */
  ebp = esp;
/* f92ea3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f92ea5: push 0xf9a780 */
  { uint32_t v = 0xf9a780u; esp -= 4; W32(esp, v); }
/* f92eaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f92eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92eb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f92eb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f92ebb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92ebc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92ebd: mov esi, ecx */
  esi = ecx;
/* f92ebf: mov ecx, dword ptr [esi + 0x1e4] */
  ecx = R32((uint32_t)(esi + 0x1e4u));
/* f92ec5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92ec7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92ec8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f92ecb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f92ed2: je 0xf92f00 */
  if (zf) goto L_f92f00;
L_f92ed4: /* f92ed4: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f92ed7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f92ed9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92eda: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f92edd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f92ede: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xf92ee4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f92ee4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f92ee6: je 0xf92f00 */
  if (zf) goto L_f92f00;
L_f92ee8: /* f92ee8: mov eax, 1 */
  eax = 0x1u;
/* f92eed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f92ef0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92ef7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92ef8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92ef9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92efa: mov esp, ebp */
  esp = ebp;
/* f92efc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92efd: ret 8 */
  esp += 12; SPILL(); return;
L_f92f00: /* f92f00: cmp byte ptr [esi + 0x30], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f92f04: jne 0xf92f58 */
  if (!zf) goto L_f92f58;
L_f92f06: /* f92f06: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f92f09: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f92f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f92f0e: mov ecx, esi */
  ecx = esi;
/* f92f10: call 0xf71802 */
  esp -= 4; W32(esp, 0xf92f15u); SPILL(); f_f71802(); if (g_unwind) return; RELOAD();
/* f92f15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f92f18: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92f1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92f20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92f21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92f22: mov esp, ebp */
  esp = ebp;
/* f92f24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92f25: ret 8 */
  esp += 12; SPILL(); return;
L_f92f58: /* f92f58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f92f5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92f5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92f5d: xor eax, eax */
  eax = 0;
/* f92f5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92f66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92f67: mov esp, ebp */
  esp = ebp;
/* f92f69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92f6a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f92f28(void) {
  LOAD_REGS();
L_f92f28: /* f92f28: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f92f2b: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f92f30: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f92f33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92f34: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f92f37: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92f3cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f92f3c(); return;
}

void f_f92f3c(void) {
  LOAD_REGS();
L_f92f3c: /* f92f3c: push 0xfa53f0 */
  { uint32_t v = 0xfa53f0u; esp -= 4; W32(esp, v); }
/* f92f41: push 0xfb9aac */
  { uint32_t v = 0xfb9aacu; esp -= 4; W32(esp, v); }
/* f92f46: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf92f4cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f92f4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f92f4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92f51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f92f53: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf92f58u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f92f58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f92f5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f92f5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f92f5d: xor eax, eax */
  eax = 0;
/* f92f5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f92f66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f92f67: mov esp, ebp */
  esp = ebp;
/* f92f69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f92f6a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f92fb0(void) {
  LOAD_REGS();
L_f92fb0: /* f92fb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f92fb1: mov ebp, esp */
  ebp = esp;
/* f92fb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f92fb5: push 0xf9a790 */
  { uint32_t v = 0xf9a790u; esp -= 4; W32(esp, v); }
/* f92fba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f92fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f92fc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f92fc8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f92fcb: mov eax, dword ptr [ecx + 0x214] */
  eax = R32((uint32_t)(ecx + 0x214u));
/* f92fd1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f92fd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f92fd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f92fd4: xor edi, edi */
  edi = 0;
/* f92fd6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f92fd9: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f92fdc: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f92fdf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_f92fe2: /* f92fe2: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f92fe5: jge 0xf93107 */
  if ((sf == of)) goto L_f93107;
L_f92feb: /* f92feb: lea ebx, [ecx + 0x210] */
  ebx = (uint32_t)(ecx + 0x210u);
/* f92ff1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* f92ff3: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* f92ff6: fld dword ptr [esi + 0xd0] */
  { double v = F32((uint32_t)(esi + 0xd0u)); FPUSH(v); }
/* f92ffc: mov dword ptr [esi + 0xc8], edi */
  W32((uint32_t)(esi + 0xc8u), edi);
/* f93002: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* f93005: fst dword ptr [esi + 0xd0] */
  WF32((uint32_t)(esi + 0xd0u), ST0);
/* f9300b: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f93011: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f93013: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f93016: jp 0xf9309f */
  if (pf) goto L_f9309f;
L_f9301c: /* f9301c: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* f93022: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f93028: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9302a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9302d: jne 0xf9309f */
  if (!zf) goto L_f9309f;
L_f9302f: /* f9302f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f93032: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f93034: je 0xf93044 */
  if (zf) goto L_f93044;
L_f93036: /* f93036: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* f93039: and eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f9303e: xor ecx, ecx */
  ecx = 0;
/* f93040: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* f93042: je 0xf93061 */
  if (zf) goto L_f93061;
L_f93044: /* f93044: mov edx, dword ptr [0xfba4a0] */
  edx = R32((uint32_t)(0xfba4a0u));
/* f9304a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9304c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9304d: mov ecx, esi */
  ecx = esi;
/* f9304f: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf93055u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f93055: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93059: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9305b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9305c: mov ecx, esi */
  ecx = esi;
/* f9305e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf93061u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f93061: /* f93061: test byte ptr [esi + 0xcc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xccu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93068: je 0xf93091 */
  if (zf) goto L_f93091;
L_f9306a: /* f9306a: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* f93070: fadd dword ptr [esi + 0xd0] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xd0u)));
/* f93076: fst dword ptr [esi + 0xd0] */
  WF32((uint32_t)(esi + 0xd0u), ST0);
/* f9307c: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f93082: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f93084: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f93087: jp 0xf9309f */
  if (pf) goto L_f9309f;
L_f93089: /* f93089: mov eax, dword ptr [esi + 0xd4] */
  eax = R32((uint32_t)(esi + 0xd4u));
/* f9308f: jmp 0xf93099 */
  goto L_f93099;
L_f93091: /* f93091: xor eax, eax */
  eax = 0;
/* f93093: mov dword ptr [esi + 0xd4], eax */
  W32((uint32_t)(esi + 0xd4u), eax);
L_f93099: /* f93099: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
L_f9309f: /* f9309f: fld dword ptr [esi + 0xd4] */
  { double v = F32((uint32_t)(esi + 0xd4u)); FPUSH(v); }
/* f930a5: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f930ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f930ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f930b0: jp 0xf930ce */
  if (pf) goto L_f930ce;
L_f930b2: /* f930b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f930b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f930b5: mov ecx, ebx */
  ecx = ebx;
/* f930b7: mov dword ptr [esi + 0xc8], 0xffffffff */
  W32((uint32_t)(esi + 0xc8u), 0xffffffffu);
/* f930c1: call 0xf71a73 */
  esp -= 4; W32(esp, 0xf930c6u); SPILL(); f_f71a73(); if (g_unwind) return; RELOAD();
/* f930c6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f930c9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* f930ca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f930cb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_f930ce: /* f930ce: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f930d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f930d2: jmp 0xf92fe2 */
  goto L_f92fe2;
L_f93107: /* f93107: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9310a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9310b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9310c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f93113: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f93114: mov esp, ebp */
  esp = ebp;
/* f93116: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f93117: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f930d7(void) {
  LOAD_REGS();
L_f930d7: /* f930d7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f930da: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f930df: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* f930e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f930e3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f930e6: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf930ebu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f930eb(); return;
}

void f_f930eb(void) {
  LOAD_REGS();
L_f930eb: /* f930eb: push 0xfa5444 */
  { uint32_t v = 0xfa5444u; esp -= 4; W32(esp, v); }
/* f930f0: push 0xfb9afc */
  { uint32_t v = 0xfb9afcu; esp -= 4; W32(esp, v); }
/* f930f5: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf930fbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f930fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f930fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93102: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf93107u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f93107: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9310a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9310b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9310c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f93113: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f93114: mov esp, ebp */
  esp = ebp;
/* f93116: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f93117: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f93180(void) {
  LOAD_REGS();
L_f93180: /* f93180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f93181: mov ebp, esp */
  ebp = esp;
/* f93183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f93185: push 0xf9a7a0 */
  { uint32_t v = 0xf9a7a0u; esp -= 4; W32(esp, v); }
/* f9318a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f93190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f93198: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9319b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9319c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9319d: mov esi, ecx */
  esi = ecx;
/* f9319f: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f931a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f931a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f931a7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f931ae: je 0xf9327c */
  if (zf) goto L_f9327c;
L_f931b4: /* f931b4: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f931ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f931bc: je 0xf9327c */
  if (zf) goto L_f9327c;
L_f931c2: /* f931c2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f931c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f931c6: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf931cbu); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f931cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f931cd: mov ecx, esi */
  ecx = esi;
/* f931cf: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf931d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f931d2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f931d5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f931d7: mov ecx, esi */
  ecx = esi;
/* f931d9: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf931dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f931dc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f931df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f931e1: mov ecx, esi */
  ecx = esi;
/* f931e3: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf931e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f931e9: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f931ec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f931ee: mov ecx, esi */
  ecx = esi;
/* f931f0: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf931f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f931f6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f931f9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f931fc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f931ff: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f93202: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93203: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f93206: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93207: xor ecx, ecx */
  ecx = 0;
/* f93209: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f9320c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9320d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9320e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9320f: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f93215: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f93216: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf9321bu); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f9321b: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f93221: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf93227u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f93227: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93229: mov ecx, esi */
  ecx = esi;
/* f9322b: mov edi, eax */
  edi = eax;
/* f9322d: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf93230u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93230: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f93233: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f93235: mov ecx, esi */
  ecx = esi;
/* f93237: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf9323au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9323a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f9323d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9323f: mov ecx, esi */
  ecx = esi;
/* f93241: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf93247u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93247: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f9324a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9324c: mov ecx, esi */
  ecx = esi;
/* f9324e: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf93254u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93254: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f93257: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9325a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f9325d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f93260: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93261: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f93263: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93264: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f93267: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93268: xor edx, edx */
  edx = 0;
/* f9326a: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f9326d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9326e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9326f: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f93275: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f93277: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf9327cu); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
L_f9327c: /* f9327c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9327f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f93280: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f93281: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f93288: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f93289: mov esp, ebp */
  esp = ebp;
/* f9328b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9328c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f9328f(void) {
  LOAD_REGS();
L_f9328f: /* f9328f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f93292: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f93297: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f9329a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9329b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f9329e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf932a3u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f932a3(); return;
}

void f_f932a3(void) {
  LOAD_REGS();
L_f932a3: /* f932a3: push 0xfa548c */
  { uint32_t v = 0xfa548cu; esp -= 4; W32(esp, v); }
/* f932a8: push 0xfb9b38 */
  { uint32_t v = 0xfb9b38u; esp -= 4; W32(esp, v); }
/* f932ad: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf932b3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f932b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f932b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f932b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f932ba: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf932bfu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f932bf: guest_badaddr(0xf932bf); return;
}

void f_f93310(void) {
  LOAD_REGS();
L_f93310: /* f93310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f93311: mov ebp, esp */
  ebp = esp;
/* f93313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f93315: push 0xf9a7b0 */
  { uint32_t v = 0xf9a7b0u; esp -= 4; W32(esp, v); }
/* f9331a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f93320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f93328: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9332b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9332c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9332d: mov esi, ecx */
  esi = ecx;
/* f9332f: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f93332: xor ebx, ebx */
  ebx = 0;
/* f93334: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93336: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93337: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f9333a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f9333d: je 0xf93515 */
  if (zf) goto L_f93515;
L_f93343: /* f93343: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f93346: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93347: call 0xf71366 */
  esp -= 4; W32(esp, 0xf9334cu); SPILL(); f_f71366(); if (g_unwind) return; RELOAD();
/* f9334c: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f93352: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f93354: je 0xf93515 */
  if (zf) goto L_f93515;
L_f9335a: /* f9335a: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* f93360: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93362: je 0xf9336c */
  if (zf) goto L_f9336c;
L_f93364: /* f93364: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93366: je 0xf93515 */
  if (zf) goto L_f93515;
L_f9336c: /* f9336c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f9336e: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf93371u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93371: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f93377: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f93379: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f9337c: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9337f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f93382: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf93385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93385: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f93388: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9338b: test byte ptr [esi + 0x1e0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1e0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93392: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f93395: je 0xf933cb */
  if (zf) goto L_f933cb;
L_f93397: /* f93397: cmp byte ptr [esi + 0x30], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f9339b: jne 0xf933b3 */
  if (!zf) goto L_f933b3;
L_f9339d: /* f9339d: mov al, 0xc8 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xc8u) & 0xffu);
/* f9339f: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* f933a2: mov byte ptr [ebp + 9], al */
  W8((uint32_t)(ebp + 0x9u), (eax & 0xffu));
/* f933a5: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* f933a8: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* f933ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f933ae: mov dword ptr [edi + 0x58], eax */
  W32((uint32_t)(edi + 0x58u), eax);
/* f933b1: jmp 0xf933c7 */
  goto L_f933c7;
L_f933b3: /* f933b3: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* f933b5: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* f933b8: mov byte ptr [ebp + 9], al */
  W8((uint32_t)(ebp + 0x9u), (eax & 0xffu));
/* f933bb: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* f933be: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* f933c1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f933c4: mov dword ptr [edi + 0x58], ecx */
  W32((uint32_t)(edi + 0x58u), ecx);
L_f933c7: /* f933c7: mov byte ptr [edi + 0x50], 5 */
  W8((uint32_t)(edi + 0x50u), 0x5u);
L_f933cb: /* f933cb: test byte ptr [esi + 0x1e0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1e0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f933d2: je 0xf93403 */
  if (zf) goto L_f93403;
L_f933d4: /* f933d4: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f933da: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* f933e0: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f933e6: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* f933ec: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f933ef: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f933f2: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f933f8: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f933fe: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f93401: jmp 0xf93446 */
  goto L_f93446;
L_f93403: /* f93403: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93405: mov ecx, esi */
  ecx = esi;
/* f93407: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf9340au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9340a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f9340d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f93410: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93412: mov ecx, esi */
  ecx = esi;
/* f93414: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f93417: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf9341au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9341a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f9341d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f93420: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93422: mov ecx, esi */
  ecx = esi;
/* f93424: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f93427: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf9342du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9342d: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f93430: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f93433: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93435: mov ecx, esi */
  ecx = esi;
/* f93437: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f9343a: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf93440u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93440: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f93443: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
L_f93446: /* f93446: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f93449: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f9344c: fcomp dword ptr [ebp - 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd4u)));
  FPOP();
/* f9344f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f93451: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f93454: jp 0xf9345e */
  if (pf) goto L_f9345e;
L_f93456: /* f93456: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f93459: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f9345c: jmp 0xf93464 */
  goto L_f93464;
L_f9345e: /* f9345e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f93461: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_f93464: /* f93464: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f93467: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* f9346a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9346c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f9346f: jp 0xf93479 */
  if (pf) goto L_f93479;
L_f93471: /* f93471: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f93474: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f93477: jmp 0xf9347f */
  goto L_f9347f;
L_f93479: /* f93479: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f9347c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_f9347f: /* f9347f: mov al, byte ptr [esi + 0x1dc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1dcu))) & 0xffu);
/* f93485: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f93487: jne 0xf93528 */
  if (!zf) goto L_f93528;
L_f9348d: /* f9348d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93490: mov eax, esp */
  eax = esp;
/* f93492: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* f93495: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93498: mov edx, esp */
  edx = esp;
/* f9349a: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* f9349d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9349e: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* f934a1: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f934a3: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f934a6: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* f934a9: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* f934ac: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf934b2u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f934b2: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f934b5: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f934b8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f934bb: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f934be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f934bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f934c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f934c1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f934c4: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f934ca: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f934cc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f934d0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* f934d3: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* f934d6: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f934dc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f934df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f934e0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f934e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f934e4: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f934e7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f934ea: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f934f0: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f934f3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f934f7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f934fa: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* f934fd: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f93503: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f93506: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_f93509: /* f93509: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f9350f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93510: mov ecx, edi */
  ecx = edi;
/* f93512: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf93515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f93515: /* f93515: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f93518: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9351f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f93520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f93521: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f93522: mov esp, ebp */
  esp = ebp;
/* f93524: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f93525: ret 4 */
  esp += 8; SPILL(); return;
L_f93528: /* f93528: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f9352a: jne 0xf93560 */
  if (!zf) goto L_f93560;
L_f9352c: /* f9352c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9352f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f93532: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f93534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93535: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f93538: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93539: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f9353c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9353d: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f93543: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93545: mov ecx, edi */
  ecx = edi;
/* f93547: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf9354du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9354d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f93550: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f93557: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f93558: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f93559: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9355a: mov esp, ebp */
  esp = ebp;
/* f9355c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9355d: ret 4 */
  esp += 8; SPILL(); return;
L_f93560: /* f93560: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f93562: jne 0xf93598 */
  if (!zf) goto L_f93598;
L_f93564: /* f93564: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f93567: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f9356a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f9356c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9356d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f93570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93571: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f93574: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93575: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f9357b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9357c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9357d: mov ecx, edi */
  ecx = edi;
/* f9357f: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0xf93585u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93585: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f93588: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9358f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f93590: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f93591: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f93592: mov esp, ebp */
  esp = ebp;
/* f93594: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f93595: ret 4 */
  esp += 8; SPILL(); return;
L_f93598: /* f93598: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f9359a: jne 0xf935d0 */
  if (!zf) goto L_f935d0;
L_f9359c: /* f9359c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9359f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f935a2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f935a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f935a5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f935a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f935a9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f935ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f935ad: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f935b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f935b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f935b5: mov ecx, edi */
  ecx = edi;
/* f935b7: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xf935bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f935bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f935c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f935c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f935c2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f935c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f935ca: mov esp, ebp */
  esp = ebp;
/* f935cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f935cd: ret 4 */
  esp += 8; SPILL(); return;
L_f935d0: /* f935d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f935d3: mov eax, esp */
  eax = esp;
/* f935d5: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* f935d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f935db: mov ecx, esp */
  ecx = esp;
/* f935dd: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* f935e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f935e1: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* f935e4: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f935e6: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f935e9: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* f935ec: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* f935ef: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf935f5u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f935f5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f935f8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f935fb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f935fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f935fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f935ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93600: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f93601: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f93602: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93603: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f93606: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93607: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f9360a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9360b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9360c: jmp 0xf93509 */
  goto L_f93509;
}
