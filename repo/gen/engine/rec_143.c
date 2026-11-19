#include "recomp.h"
#include "rec_mod.h"

void f_97e6d0(void) {
  LOAD_REGS();
L_97e6d0: /* 97e6d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e6d1: mov ebp, esp */
  ebp = esp;
/* 97e6d3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97e6d6: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e6dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e6dd: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97e6e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e6e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e6e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e6e3: call 0x97dc10 */
  esp -= 4; W32(esp, 0x97e6e8u); SPILL(); f_97dc10(); if (g_unwind) return; RELOAD();
/* 97e6e8: mov esi, dword ptr [0xcfb078] */
  esi = R32((uint32_t)(0xcfb078u));
/* 97e6ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e6ef: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97e6f3: push 0xb0321c */
  { uint32_t v = 0xb0321cu; esp -= 4; W32(esp, v); }
/* 97e6f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e6f9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97e6fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e6fb: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 97e6fe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 97e701: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e704: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97e705: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97e708: lea eax, [esp + eax + 0x10] */
  eax = (uint32_t)(esp + eax + 0x10u);
/* 97e70c: ja 0x97e803 */
  if ((!cf && !zf)) goto L_97e803;
L_97e712: /* 97e712: jmp dword ptr [ecx*4 + 0x97e8ac] */
  switch (R32((uint32_t)(ecx*4 + 0x97e8acu))) {
    case 0x97e719u: goto L_97e719;
    case 0x97e742u: goto L_97e742;
    case 0x97e76bu: goto L_97e76b;
    case 0x97e791u: goto L_97e791;
    case 0x97e7b7u: goto L_97e7b7;
    case 0x97e7ddu: goto L_97e7dd;
    default: guest_badjump(0x97e712, R32((uint32_t)(ecx*4 + 0x97e8acu))); return;
  }
L_97e719: /* 97e719: push 0xb0320c */
  { uint32_t v = 0xb0320cu; esp -= 4; W32(esp, v); }
/* 97e71e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e71f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97e721u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e721: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 97e724: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 97e728: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e729: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e72a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e72b: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e730u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e730: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e733: mov esi, eax */
  esi = eax;
/* 97e735: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e736: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e737: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e738: call 0x97e8d0 */
  esp -= 4; W32(esp, 0x97e73du); SPILL(); f_97e8d0(); if (g_unwind) return; RELOAD();
/* 97e73d: jmp 0x97e807 */
  goto L_97e807;
L_97e742: /* 97e742: push 0xb03200 */
  { uint32_t v = 0xb03200u; esp -= 4; W32(esp, v); }
/* 97e747: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e748: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97e74au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e74a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97e74d: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 97e751: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e752: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e753: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e754: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e759u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e759: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e75c: mov esi, eax */
  esi = eax;
/* 97e75e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e75f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e760: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e761: call 0x97e910 */
  esp -= 4; W32(esp, 0x97e766u); SPILL(); f_97e910(); if (g_unwind) return; RELOAD();
/* 97e766: jmp 0x97e807 */
  goto L_97e807;
L_97e76b: /* 97e76b: push 0xb031ec */
  { uint32_t v = 0xb031ecu; esp -= 4; W32(esp, v); }
/* 97e770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e771: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97e773u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e773: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97e776: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 97e77a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e77b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e77c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e77d: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e782u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e782: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e785: mov esi, eax */
  esi = eax;
/* 97e787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e788: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e789: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e78a: call 0x97e970 */
  esp -= 4; W32(esp, 0x97e78fu); SPILL(); f_97e970(); if (g_unwind) return; RELOAD();
/* 97e78f: jmp 0x97e807 */
  goto L_97e807;
L_97e791: /* 97e791: push 0xb031dc */
  { uint32_t v = 0xb031dcu; esp -= 4; W32(esp, v); }
/* 97e796: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e797: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97e799u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e799: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 97e79c: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 97e7a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e7a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e7a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e7a3: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e7a8u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e7a8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e7ab: mov esi, eax */
  esi = eax;
/* 97e7ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e7ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e7af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e7b0: call 0x97e9e0 */
  esp -= 4; W32(esp, 0x97e7b5u); SPILL(); f_97e9e0(); if (g_unwind) return; RELOAD();
/* 97e7b5: jmp 0x97e807 */
  goto L_97e807;
L_97e7b7: /* 97e7b7: push 0xb031cc */
  { uint32_t v = 0xb031ccu; esp -= 4; W32(esp, v); }
/* 97e7bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e7bd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97e7bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e7bf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97e7c2: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 97e7c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e7c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e7c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e7c9: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e7ceu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e7ce: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e7d1: mov esi, eax */
  esi = eax;
/* 97e7d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e7d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e7d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e7d6: call 0x97ea50 */
  esp -= 4; W32(esp, 0x97e7dbu); SPILL(); f_97ea50(); if (g_unwind) return; RELOAD();
/* 97e7db: jmp 0x97e807 */
  goto L_97e807;
L_97e7dd: /* 97e7dd: push 0xb031bc */
  { uint32_t v = 0xb031bcu; esp -= 4; W32(esp, v); }
/* 97e7e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e7e3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97e7e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e7e5: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97e7e8: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 97e7ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e7ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e7ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e7ef: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e7f4u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e7f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e7f7: mov esi, eax */
  esi = eax;
/* 97e7f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e7fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e7fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e7fc: call 0x97ea60 */
  esp -= 4; W32(esp, 0x97e801u); SPILL(); f_97ea60(); if (g_unwind) return; RELOAD();
/* 97e801: jmp 0x97e807 */
  goto L_97e807;
L_97e803: /* 97e803: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_97e807: /* 97e807: push 0xb031b8 */
  { uint32_t v = 0xb031b8u; esp -= 4; W32(esp, v); }
/* 97e80c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e80d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e80e: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e813u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e813: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e816: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e817: call 0x97dcd0 */
  esp -= 4; W32(esp, 0x97e81cu); SPILL(); f_97dcd0(); if (g_unwind) return; RELOAD();
/* 97e81c: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 97e81f: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e825: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 97e829: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 97e82c: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 97e830: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 97e833: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 97e837: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 97e83a: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 97e83e: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 97e841: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 97e845: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 97e848: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 97e84c: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 97e84f: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 97e853: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 97e856: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 97e85a: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 97e85d: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 97e861: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 97e864: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 97e868: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 97e86b: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 97e86f: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 97e872: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 97e876: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 97e879: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 97e87d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 97e880: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97e884: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 97e887: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97e88b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 97e88d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e890: push 0xb03168 */
  { uint32_t v = 0xb03168u; esp -= 4; W32(esp, v); }
/* 97e895: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e896: call 0x984180 */
  esp -= 4; W32(esp, 0x97e89bu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97e89b: add esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e8a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e8a2: mov eax, esi */
  eax = esi;
/* 97e8a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e8a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e8a6: mov esp, ebp */
  esp = ebp;
/* 97e8a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e8a9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97e8d0(void) {
  LOAD_REGS();
L_97e8d0: /* 97e8d0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 97e8d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e8d5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97e8d9: push 0xb03238 */
  { uint32_t v = 0xb03238u; esp -= 4; W32(esp, v); }
/* 97e8de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e8df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e8e0: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e8e5u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e8e5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 97e8e9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e8ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e8ed: call 0x97dc20 */
  esp -= 4; W32(esp, 0x97e8f2u); SPILL(); f_97dc20(); if (g_unwind) return; RELOAD();
/* 97e8f2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e8f5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e8f8: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97e8fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e8fe: call 0x984180 */
  esp -= 4; W32(esp, 0x97e903u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97e903: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e906: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e907: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97e910(void) {
  LOAD_REGS();
L_97e910: /* 97e910: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97e914: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e917: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e918: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 97e91c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e91d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e91e: call 0x97dc30 */
  esp -= 4; W32(esp, 0x97e923u); SPILL(); f_97dc30(); if (g_unwind) return; RELOAD();
/* 97e923: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 97e927: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 97e92b: push 0xb03250 */
  { uint32_t v = 0xb03250u; esp -= 4; W32(esp, v); }
/* 97e930: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e931: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e932: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e937u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e937: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97e93b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e93e: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97e942: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 97e946: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97e94a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97e94e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e951: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97e956: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e957: call 0x984180 */
  esp -= 4; W32(esp, 0x97e95cu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97e95c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e95f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e960: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e963: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97e970(void) {
  LOAD_REGS();
L_97e970: /* 97e970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e972: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 97e976: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e977: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 97e97b: push 0xb03238 */
  { uint32_t v = 0xb03238u; esp -= 4; W32(esp, v); }
/* 97e980: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e981: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e982: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e987u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e987: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 97e98b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e98e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e98f: call 0x97dc20 */
  esp -= 4; W32(esp, 0x97e994u); SPILL(); f_97dc20(); if (g_unwind) return; RELOAD();
/* 97e994: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e997: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e99a: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97e99f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e9a0: call 0x984180 */
  esp -= 4; W32(esp, 0x97e9a5u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97e9a5: push 0xb03258 */
  { uint32_t v = 0xb03258u; esp -= 4; W32(esp, v); }
/* 97e9aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e9ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e9ac: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e9b1u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e9b1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e9b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e9b5: call 0x97dc50 */
  esp -= 4; W32(esp, 0x97e9bau); SPILL(); f_97dc50(); if (g_unwind) return; RELOAD();
/* 97e9ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e9bd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e9c0: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97e9c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e9c6: call 0x984180 */
  esp -= 4; W32(esp, 0x97e9cbu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97e9cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e9ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e9cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e9d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e9d1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97e9e0(void) {
  LOAD_REGS();
L_97e9e0: /* 97e9e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e9e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e9e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 97e9e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e9e7: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 97e9eb: push 0xb03238 */
  { uint32_t v = 0xb03238u; esp -= 4; W32(esp, v); }
/* 97e9f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e9f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e9f2: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e9f7u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e9f7: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 97e9fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e9fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e9ff: call 0x97dc20 */
  esp -= 4; W32(esp, 0x97ea04u); SPILL(); f_97dc20(); if (g_unwind) return; RELOAD();
/* 97ea04: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ea07: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ea0a: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ea0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ea10: call 0x984180 */
  esp -= 4; W32(esp, 0x97ea15u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ea15: push 0xb03258 */
  { uint32_t v = 0xb03258u; esp -= 4; W32(esp, v); }
/* 97ea1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ea1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ea1c: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ea21u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ea21: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ea24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ea25: call 0x97dc50 */
  esp -= 4; W32(esp, 0x97ea2au); SPILL(); f_97dc50(); if (g_unwind) return; RELOAD();
/* 97ea2a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ea2d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ea30: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ea35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ea36: call 0x984180 */
  esp -= 4; W32(esp, 0x97ea3bu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ea3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ea3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ea3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ea40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97ea41: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97ea50(void) {
  LOAD_REGS();
L_97ea50: /* 97ea50: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97ea60(void) {
  LOAD_REGS();
L_97ea60: /* 97ea60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97ea61: mov ebp, esp */
  ebp = esp;
/* 97ea63: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97ea66: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ea69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ea6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ea6b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 97ea6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ea6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ea70: call 0x97dcb0 */
  esp -= 4; W32(esp, 0x97ea75u); SPILL(); f_97dcb0(); if (g_unwind) return; RELOAD();
/* 97ea75: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97ea79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ea7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ea7b: call 0x97dc60 */
  esp -= 4; W32(esp, 0x97ea80u); SPILL(); f_97dc60(); if (g_unwind) return; RELOAD();
/* 97ea80: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97ea84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ea85: call 0x97dc80 */
  esp -= 4; W32(esp, 0x97ea8au); SPILL(); f_97dc80(); if (g_unwind) return; RELOAD();
/* 97ea8a: mov esi, eax */
  esi = eax;
/* 97ea8c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ea8e: je 0x97ead6 */
  if (zf) goto L_97ead6;
L_97ea90: /* 97ea90: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 97ea93: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_97ea96: /* 97ea96: push 0xb03260 */
  { uint32_t v = 0xb03260u; esp -= 4; W32(esp, v); }
/* 97ea9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ea9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ea9d: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97eaa2u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97eaa2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 97eaa5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97eaa8: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97eaac: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 97eaaf: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97eab3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 97eab5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97eab8: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97eabd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eabe: call 0x984180 */
  esp -= 4; W32(esp, 0x97eac3u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97eac3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eac6: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97eaca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97eacb: call 0x97dc80 */
  esp -= 4; W32(esp, 0x97ead0u); SPILL(); f_97dc80(); if (g_unwind) return; RELOAD();
/* 97ead0: mov esi, eax */
  esi = eax;
/* 97ead2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ead4: jne 0x97ea96 */
  if (!zf) goto L_97ea96;
L_97ead6: /* 97ead6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ead7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ead8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97ead9: mov esp, ebp */
  esp = ebp;
/* 97eadb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97eadc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97eae0(void) {
  LOAD_REGS();
L_97eae0: /* 97eae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97eae1: mov ebp, esp */
  ebp = esp;
/* 97eae3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97eae6: sub esp, 0x434 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x434u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97eaec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eaed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eaee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eaef: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 97eaf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eaf3: call 0x979ef0 */
  esp -= 4; W32(esp, 0x97eaf8u); SPILL(); f_979ef0(); if (g_unwind) return; RELOAD();
/* 97eaf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eaf9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 97eafd: call 0x979ee0 */
  esp -= 4; W32(esp, 0x97eb02u); SPILL(); f_979ee0(); if (g_unwind) return; RELOAD();
/* 97eb02: mov ebx, dword ptr [0xcfb078] */
  ebx = R32((uint32_t)(0xcfb078u));
/* 97eb08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eb09: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 97eb0d: push 0xb0334c */
  { uint32_t v = 0xb0334cu; esp -= 4; W32(esp, v); }
/* 97eb12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eb13: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97eb15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97eb15: lea esi, [esp + eax + 0x4c] */
  esi = (uint32_t)(esp + eax + 0x4cu);
/* 97eb19: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 97eb1d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eb20: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97eb23: jne 0x97eb2c */
  if (!zf) goto L_97eb2c;
L_97eb25: /* 97eb25: push 0xb03334 */
  { uint32_t v = 0xb03334u; esp -= 4; W32(esp, v); }
/* 97eb2a: jmp 0x97eb3d */
  goto L_97eb3d;
L_97eb2c: /* 97eb2c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97eb2f: jne 0x97eb38 */
  if (!zf) goto L_97eb38;
L_97eb31: /* 97eb31: push 0xb0331c */
  { uint32_t v = 0xb0331cu; esp -= 4; W32(esp, v); }
/* 97eb36: jmp 0x97eb3d */
  goto L_97eb3d;
L_97eb38: /* 97eb38: push 0xb032fc */
  { uint32_t v = 0xb032fcu; esp -= 4; W32(esp, v); }
L_97eb3d: /* 97eb3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eb3e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97eb40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97eb40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eb43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eb44: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97eb46: call 0x979f00 */
  esp -= 4; W32(esp, 0x97eb4bu); SPILL(); f_979f00(); if (g_unwind) return; RELOAD();
/* 97eb4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97eb4d: je 0x97eb5b */
  if (zf) goto L_97eb5b;
L_97eb4f: /* 97eb4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eb50: push 0xb032ec */
  { uint32_t v = 0xb032ecu; esp -= 4; W32(esp, v); }
/* 97eb55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eb56: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97eb58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97eb58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97eb5b: /* 97eb5b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 97eb5e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97eb61: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 97eb65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97eb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97eb67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eb68: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97eb6du); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97eb6d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 97eb70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eb73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97eb75: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 97eb79: je 0x97eb84 */
  if (zf) goto L_97eb84;
L_97eb7b: /* 97eb7b: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97eb7e: jne 0x97ed27 */
  if (!zf) goto L_97ed27;
L_97eb84: /* 97eb84: push 0xb032e0 */
  { uint32_t v = 0xb032e0u; esp -= 4; W32(esp, v); }
/* 97eb89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eb8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eb8b: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97eb90u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97eb90: mov ebx, eax */
  ebx = eax;
/* 97eb92: push 0xb032d8 */
  { uint32_t v = 0xb032d8u; esp -= 4; W32(esp, v); }
/* 97eb97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eb98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eb99: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97eb9eu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97eb9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eba1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eba2: call 0x979f60 */
  esp -= 4; W32(esp, 0x97eba7u); SPILL(); f_979f60(); if (g_unwind) return; RELOAD();
/* 97eba7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ebaa: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ebad: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ebb2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ebb3: call 0x984180 */
  esp -= 4; W32(esp, 0x97ebb8u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ebb8: push 0xb032d0 */
  { uint32_t v = 0xb032d0u; esp -= 4; W32(esp, v); }
/* 97ebbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ebbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ebbf: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ebc4u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ebc4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ebc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ebc8: call 0x979f70 */
  esp -= 4; W32(esp, 0x97ebcdu); SPILL(); f_979f70(); if (g_unwind) return; RELOAD();
/* 97ebcd: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ebd0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ebd3: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ebd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ebd9: call 0x984180 */
  esp -= 4; W32(esp, 0x97ebdeu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ebde: push 0xb032c4 */
  { uint32_t v = 0xb032c4u; esp -= 4; W32(esp, v); }
/* 97ebe3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ebe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ebe5: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ebeau); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ebea: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ebed: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97ebf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ebf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ebf3: call 0x979f40 */
  esp -= 4; W32(esp, 0x97ebf8u); SPILL(); f_979f40(); if (g_unwind) return; RELOAD();
/* 97ebf8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97ebfc: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ebff: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97ec03: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97ec07: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97ec0b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97ec0f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ec12: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97ec17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ec18: call 0x984180 */
  esp -= 4; W32(esp, 0x97ec1du); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ec1d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ec20: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 97ec24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ec25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ec26: call 0x979f80 */
  esp -= 4; W32(esp, 0x97ec2bu); SPILL(); f_979f80(); if (g_unwind) return; RELOAD();
/* 97ec2b: push 0xb032bc */
  { uint32_t v = 0xb032bcu; esp -= 4; W32(esp, v); }
/* 97ec30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ec31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ec32: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ec37u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ec37: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 97ec3b: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ec3e: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 97ec42: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 97ec46: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 97ec4a: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 97ec4e: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 97ec52: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 97ec56: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97ec5a: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 97ec5e: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97ec62: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 97ec66: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ec69: push 0xb0329c */
  { uint32_t v = 0xb0329cu; esp -= 4; W32(esp, v); }
/* 97ec6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ec6f: call 0x984180 */
  esp -= 4; W32(esp, 0x97ec74u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ec74: push 0xb03290 */
  { uint32_t v = 0xb03290u; esp -= 4; W32(esp, v); }
/* 97ec79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ec7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ec7b: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ec80u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ec80: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ec83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ec84: call 0x979fe0 */
  esp -= 4; W32(esp, 0x97ec89u); SPILL(); f_979fe0(); if (g_unwind) return; RELOAD();
/* 97ec89: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ec8c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ec8f: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ec94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ec95: call 0x984180 */
  esp -= 4; W32(esp, 0x97ec9au); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ec9a: push 0xb03284 */
  { uint32_t v = 0xb03284u; esp -= 4; W32(esp, v); }
/* 97ec9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eca1: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97eca6u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97eca6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eca9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ecaa: call 0x979ff0 */
  esp -= 4; W32(esp, 0x97ecafu); SPILL(); f_979ff0(); if (g_unwind) return; RELOAD();
/* 97ecaf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ecb2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ecb5: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ecba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ecbb: call 0x984180 */
  esp -= 4; W32(esp, 0x97ecc0u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ecc0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ecc3: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97ecc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ecc8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ecc9: call 0x97a000 */
  esp -= 4; W32(esp, 0x97ecceu); SPILL(); f_97a000(); if (g_unwind) return; RELOAD();
/* 97ecce: push 0xb03278 */
  { uint32_t v = 0xb03278u; esp -= 4; W32(esp, v); }
/* 97ecd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ecd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ecd5: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ecdau); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ecda: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97ecde: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ece1: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97ece5: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97ece9: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97eced: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97ecf1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ecf4: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97ecf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ecfa: call 0x984180 */
  esp -= 4; W32(esp, 0x97ecffu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ecff: push 0xb03268 */
  { uint32_t v = 0xb03268u; esp -= 4; W32(esp, v); }
/* 97ed04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ed05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ed06: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ed0bu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ed0b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ed0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ed0f: call 0x97a020 */
  esp -= 4; W32(esp, 0x97ed14u); SPILL(); f_97a020(); if (g_unwind) return; RELOAD();
/* 97ed14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ed15: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97ed1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ed1b: call 0x984180 */
  esp -= 4; W32(esp, 0x97ed20u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ed20: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 97ed24: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97ed27: /* 97ed27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ed28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ed29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97ed2a: mov esp, ebp */
  esp = ebp;
/* 97ed2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97ed2d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97ed30(void) {
  LOAD_REGS();
L_97ed30: /* 97ed30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97ed31: mov ebp, esp */
  ebp = esp;
/* 97ed33: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97ed36: sub esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ed3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ed3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ed3e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 97ed41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ed42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ed43: call 0x97a4d0 */
  esp -= 4; W32(esp, 0x97ed48u); SPILL(); f_97a4d0(); if (g_unwind) return; RELOAD();
/* 97ed48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ed49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ed4a: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x97ed4fu); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 97ed4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ed50: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 97ed54: push 0xb0336c */
  { uint32_t v = 0xb0336cu; esp -= 4; W32(esp, v); }
/* 97ed59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ed5a: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97ed60u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97ed60: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ed63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ed64: lea edi, [esp + eax + 0x1c] */
  edi = (uint32_t)(esp + eax + 0x1cu);
/* 97ed68: call 0x97a570 */
  esp -= 4; W32(esp, 0x97ed6du); SPILL(); f_97a570(); if (g_unwind) return; RELOAD();
/* 97ed6d: mov ebx, eax */
  ebx = eax;
/* 97ed6f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ed71: je 0x97edb6 */
  if (zf) goto L_97edb6;
L_97ed73: /* 97ed73: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97ed77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ed78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ed79: call 0x97a590 */
  esp -= 4; W32(esp, 0x97ed7eu); SPILL(); f_97a590(); if (g_unwind) return; RELOAD();
/* 97ed7e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97ed82: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ed85: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97ed89: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97ed8d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97ed91: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97ed95: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ed98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ed99: call 0x97a580 */
  esp -= 4; W32(esp, 0x97ed9eu); SPILL(); f_97a580(); if (g_unwind) return; RELOAD();
/* 97ed9e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97eda1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97eda4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eda5: push 0xb03114 */
  { uint32_t v = 0xb03114u; esp -= 4; W32(esp, v); }
/* 97edaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97edab: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97edb1u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97edb1: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97edb4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_97edb6: /* 97edb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97edb7: call 0x97a5e0 */
  esp -= 4; W32(esp, 0x97edbcu); SPILL(); f_97a5e0(); if (g_unwind) return; RELOAD();
/* 97edbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97edbe: je 0x97edd0 */
  if (zf) goto L_97edd0;
L_97edc0: /* 97edc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97edc1: push 0xb0335c */
  { uint32_t v = 0xb0335cu; esp -= 4; W32(esp, v); }
/* 97edc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97edc7: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97edcdu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97edcd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97edd0: /* 97edd0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97edd3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 97edd6: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 97edda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97eddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eddc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eddd: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ede2u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ede2: mov ebx, eax */
  ebx = eax;
/* 97ede4: push 0xb031b8 */
  { uint32_t v = 0xb031b8u; esp -= 4; W32(esp, v); }
/* 97ede9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97edea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97edeb: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97edf0u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97edf0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97edf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97edf4: call 0x97a540 */
  esp -= 4; W32(esp, 0x97edf9u); SPILL(); f_97a540(); if (g_unwind) return; RELOAD();
/* 97edf9: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 97edfc: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ee02: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 97ee06: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 97ee09: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 97ee0d: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 97ee10: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 97ee14: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 97ee17: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 97ee1b: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 97ee1e: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 97ee22: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 97ee25: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 97ee29: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 97ee2c: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 97ee30: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 97ee33: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 97ee37: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 97ee3a: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 97ee3e: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 97ee41: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 97ee45: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 97ee48: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 97ee4c: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 97ee4f: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 97ee53: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 97ee56: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 97ee5a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 97ee5d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97ee61: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 97ee64: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97ee68: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 97ee6a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ee6d: push 0xb03168 */
  { uint32_t v = 0xb03168u; esp -= 4; W32(esp, v); }
/* 97ee72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ee73: call 0x984180 */
  esp -= 4; W32(esp, 0x97ee78u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ee78: add esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ee7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ee7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ee80: mov eax, ebx */
  eax = ebx;
/* 97ee82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97ee83: mov esp, ebp */
  esp = ebp;
/* 97ee85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97ee86: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97ee90(void) {
  LOAD_REGS();
L_97ee90: /* 97ee90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97ee91: mov ebp, esp */
  ebp = esp;
/* 97ee93: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97ee96: sub esp, 0x414 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97ee9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ee9d: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97eea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eea1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eea2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eea3: call 0x97ad40 */
  esp -= 4; W32(esp, 0x97eea8u); SPILL(); f_97ad40(); if (g_unwind) return; RELOAD();
/* 97eea8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eea9: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 97eead: call 0x97ad30 */
  esp -= 4; W32(esp, 0x97eeb2u); SPILL(); f_97ad30(); if (g_unwind) return; RELOAD();
/* 97eeb2: mov esi, dword ptr [0xcfb078] */
  esi = R32((uint32_t)(0xcfb078u));
/* 97eeb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eeb9: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 97eebd: push 0xb034b4 */
  { uint32_t v = 0xb034b4u; esp -= 4; W32(esp, v); }
/* 97eec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eec3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97eec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97eec5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eec8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97eeca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eecb: lea edi, [esp + eax + 0x28] */
  edi = (uint32_t)(esp + eax + 0x28u);
/* 97eecf: call 0x97ad50 */
  esp -= 4; W32(esp, 0x97eed4u); SPILL(); f_97ad50(); if (g_unwind) return; RELOAD();
/* 97eed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eed5: push 0xb034a8 */
  { uint32_t v = 0xb034a8u; esp -= 4; W32(esp, v); }
/* 97eeda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eedb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97eeddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97eedd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eee0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97eee2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eee3: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 97eee5: call 0x97ad60 */
  esp -= 4; W32(esp, 0x97eeeau); SPILL(); f_97ad60(); if (g_unwind) return; RELOAD();
/* 97eeea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97eeec: je 0x97ef04 */
  if (zf) goto L_97ef04;
L_97eeee: /* 97eeee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97eef0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97eef1: call 0x97ad50 */
  esp -= 4; W32(esp, 0x97eef6u); SPILL(); f_97ad50(); if (g_unwind) return; RELOAD();
/* 97eef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97eef7: push 0xb0349c */
  { uint32_t v = 0xb0349cu; esp -= 4; W32(esp, v); }
/* 97eefc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97eefd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x97eeffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97eeff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ef02: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_97ef04: /* 97ef04: cmp dword ptr [esp + 0x1c], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97ef09: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97ef0c: jne 0x97ef3b */
  if (!zf) goto L_97ef3b;
L_97ef0e: /* 97ef0e: push 0xb03484 */
  { uint32_t v = 0xb03484u; esp -= 4; W32(esp, v); }
/* 97ef13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ef14: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97ef1au); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97ef1a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 97ef1d: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 97ef21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ef22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ef23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ef24: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ef29u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ef29: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ef2c: mov edi, eax */
  edi = eax;
/* 97ef2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ef2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ef30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ef31: call 0x97f290 */
  esp -= 4; W32(esp, 0x97ef36u); SPILL(); f_97f290(); if (g_unwind) return; RELOAD();
/* 97ef36: jmp 0x97f0fc */
  goto L_97f0fc;
L_97ef3b: /* 97ef3b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 97ef3f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97ef42: jne 0x97ef71 */
  if (!zf) goto L_97ef71;
L_97ef44: /* 97ef44: push 0xb03474 */
  { uint32_t v = 0xb03474u; esp -= 4; W32(esp, v); }
/* 97ef49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ef4a: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97ef50u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97ef50: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97ef53: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 97ef57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ef58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ef59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ef5a: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ef5fu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ef5f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ef62: mov edi, eax */
  edi = eax;
/* 97ef64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ef65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ef66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ef67: call 0x97f420 */
  esp -= 4; W32(esp, 0x97ef6cu); SPILL(); f_97f420(); if (g_unwind) return; RELOAD();
/* 97ef6c: jmp 0x97f0fc */
  goto L_97f0fc;
L_97ef71: /* 97ef71: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97ef74: jne 0x97efa3 */
  if (!zf) goto L_97efa3;
L_97ef76: /* 97ef76: push 0xb03460 */
  { uint32_t v = 0xb03460u; esp -= 4; W32(esp, v); }
/* 97ef7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ef7c: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97ef82u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97ef82: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97ef85: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 97ef89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ef8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ef8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ef8c: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ef91u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ef91: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ef94: mov edi, eax */
  edi = eax;
/* 97ef96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ef97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ef98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ef99: call 0x97f5f0 */
  esp -= 4; W32(esp, 0x97ef9eu); SPILL(); f_97f5f0(); if (g_unwind) return; RELOAD();
/* 97ef9e: jmp 0x97f0fc */
  goto L_97f0fc;
L_97efa3: /* 97efa3: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97efa6: jne 0x97efd5 */
  if (!zf) goto L_97efd5;
L_97efa8: /* 97efa8: push 0xb0344c */
  { uint32_t v = 0xb0344cu; esp -= 4; W32(esp, v); }
/* 97efad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97efae: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97efb4u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97efb4: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 97efb7: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 97efbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97efbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97efbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97efbe: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97efc3u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97efc3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97efc6: mov edi, eax */
  edi = eax;
/* 97efc8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97efc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97efca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97efcb: call 0x97f860 */
  esp -= 4; W32(esp, 0x97efd0u); SPILL(); f_97f860(); if (g_unwind) return; RELOAD();
/* 97efd0: jmp 0x97f0fc */
  goto L_97f0fc;
L_97efd5: /* 97efd5: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97efd8: jne 0x97f007 */
  if (!zf) goto L_97f007;
L_97efda: /* 97efda: push 0xb03438 */
  { uint32_t v = 0xb03438u; esp -= 4; W32(esp, v); }
/* 97efdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97efe0: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97efe6u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97efe6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97efe9: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 97efed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97efee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97efef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97eff0: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97eff5u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97eff5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97eff8: mov edi, eax */
  edi = eax;
/* 97effa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97effb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97effc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97effd: call 0x97f2a0 */
  esp -= 4; W32(esp, 0x97f002u); SPILL(); f_97f2a0(); if (g_unwind) return; RELOAD();
/* 97f002: jmp 0x97f0fc */
  goto L_97f0fc;
L_97f007: /* 97f007: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97f00a: jne 0x97f039 */
  if (!zf) goto L_97f039;
L_97f00c: /* 97f00c: push 0xb03428 */
  { uint32_t v = 0xb03428u; esp -= 4; W32(esp, v); }
/* 97f011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f012: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97f018u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97f018: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97f01b: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 97f01f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f021: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f022: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f027u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f027: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f02a: mov edi, eax */
  edi = eax;
/* 97f02c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f02d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f02e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f02f: call 0x97f2b0 */
  esp -= 4; W32(esp, 0x97f034u); SPILL(); f_97f2b0(); if (g_unwind) return; RELOAD();
/* 97f034: jmp 0x97f0fc */
  goto L_97f0fc;
L_97f039: /* 97f039: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97f03c: jne 0x97f06b */
  if (!zf) goto L_97f06b;
L_97f03e: /* 97f03e: push 0xb03414 */
  { uint32_t v = 0xb03414u; esp -= 4; W32(esp, v); }
/* 97f043: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f044: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97f04au); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97f04a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 97f04d: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 97f051: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f052: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f053: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f054: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f059u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f059: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f05c: mov edi, eax */
  edi = eax;
/* 97f05e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f05f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f061: call 0x97f8f0 */
  esp -= 4; W32(esp, 0x97f066u); SPILL(); f_97f8f0(); if (g_unwind) return; RELOAD();
/* 97f066: jmp 0x97f0fc */
  goto L_97f0fc;
L_97f06b: /* 97f06b: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97f06e: jne 0x97f09a */
  if (!zf) goto L_97f09a;
L_97f070: /* 97f070: push 0xb03400 */
  { uint32_t v = 0xb03400u; esp -= 4; W32(esp, v); }
/* 97f075: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f076: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97f07cu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97f07c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97f07f: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 97f083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f084: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f085: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f086: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f08bu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f08b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f08e: mov edi, eax */
  edi = eax;
/* 97f090: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f091: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f092: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f093: call 0x97fac0 */
  esp -= 4; W32(esp, 0x97f098u); SPILL(); f_97fac0(); if (g_unwind) return; RELOAD();
/* 97f098: jmp 0x97f0fc */
  goto L_97f0fc;
L_97f09a: /* 97f09a: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97f09d: jne 0x97f0c9 */
  if (!zf) goto L_97f0c9;
L_97f09f: /* 97f09f: push 0xb033ec */
  { uint32_t v = 0xb033ecu; esp -= 4; W32(esp, v); }
/* 97f0a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f0a5: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97f0abu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97f0ab: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97f0ae: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 97f0b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f0b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f0b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f0b5: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f0bau); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f0ba: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f0bd: mov edi, eax */
  edi = eax;
/* 97f0bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f0c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f0c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f0c2: call 0x97fcd0 */
  esp -= 4; W32(esp, 0x97f0c7u); SPILL(); f_97fcd0(); if (g_unwind) return; RELOAD();
/* 97f0c7: jmp 0x97f0fc */
  goto L_97f0fc;
L_97f0c9: /* 97f0c9: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97f0cc: jne 0x97f0f8 */
  if (!zf) goto L_97f0f8;
L_97f0ce: /* 97f0ce: push 0xb033dc */
  { uint32_t v = 0xb033dcu; esp -= 4; W32(esp, v); }
/* 97f0d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f0d4: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97f0dau); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97f0da: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 97f0dd: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 97f0e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f0e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f0e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f0e4: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f0e9u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f0e9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f0ec: mov edi, eax */
  edi = eax;
/* 97f0ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f0ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f0f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f0f1: call 0x97fda0 */
  esp -= 4; W32(esp, 0x97f0f6u); SPILL(); f_97fda0(); if (g_unwind) return; RELOAD();
/* 97f0f6: jmp 0x97f0fc */
  goto L_97f0fc;
L_97f0f8: /* 97f0f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
L_97f0fc: /* 97f0fc: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f101: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97f103: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f104: call 0x97ad90 */
  esp -= 4; W32(esp, 0x97f109u); SPILL(); f_97ad90(); if (g_unwind) return; RELOAD();
/* 97f109: push 0xb033d4 */
  { uint32_t v = 0xb033d4u; esp -= 4; W32(esp, v); }
/* 97f10e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f10f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f110: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f115u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f115: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97f119: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f11c: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97f120: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97f124: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97f128: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97f12c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f12f: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97f134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f135: call 0x984180 */
  esp -= 4; W32(esp, 0x97f13au); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f13a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f13d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97f141: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f142: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97f144: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f145: call 0x97ad90 */
  esp -= 4; W32(esp, 0x97f14au); SPILL(); f_97ad90(); if (g_unwind) return; RELOAD();
/* 97f14a: push 0xb033cc */
  { uint32_t v = 0xb033ccu; esp -= 4; W32(esp, v); }
/* 97f14f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f151: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f156u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f156: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97f15a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f15d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97f161: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97f165: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97f169: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97f16d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f170: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97f175: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f176: call 0x984180 */
  esp -= 4; W32(esp, 0x97f17bu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f17b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f17e: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97f182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f183: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97f185: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f186: call 0x97adc0 */
  esp -= 4; W32(esp, 0x97f18bu); SPILL(); f_97adc0(); if (g_unwind) return; RELOAD();
/* 97f18b: push 0xb033bc */
  { uint32_t v = 0xb033bcu; esp -= 4; W32(esp, v); }
/* 97f190: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f191: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f192: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f197u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f197: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97f19b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f19e: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97f1a2: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97f1a6: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97f1aa: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97f1ae: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f1b1: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97f1b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f1b7: call 0x984180 */
  esp -= 4; W32(esp, 0x97f1bcu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f1bc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f1bf: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f1c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f1c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97f1c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f1c7: call 0x97adc0 */
  esp -= 4; W32(esp, 0x97f1ccu); SPILL(); f_97adc0(); if (g_unwind) return; RELOAD();
/* 97f1cc: push 0xb033ac */
  { uint32_t v = 0xb033acu; esp -= 4; W32(esp, v); }
/* 97f1d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f1d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f1d3: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f1d8u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f1d8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97f1dc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f1df: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97f1e3: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97f1e7: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97f1eb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97f1ef: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f1f2: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97f1f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f1f8: call 0x984180 */
  esp -= 4; W32(esp, 0x97f1fdu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f1fd: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f200: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97f204: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f205: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97f207: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f208: call 0x97adf0 */
  esp -= 4; W32(esp, 0x97f20du); SPILL(); f_97adf0(); if (g_unwind) return; RELOAD();
/* 97f20d: push 0xb03398 */
  { uint32_t v = 0xb03398u; esp -= 4; W32(esp, v); }
/* 97f212: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f214: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f219u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f219: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97f21d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f220: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97f224: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97f228: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97f22c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97f230: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f233: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97f238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f239: call 0x984180 */
  esp -= 4; W32(esp, 0x97f23eu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f23e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f241: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97f245: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f246: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97f248: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f249: call 0x97adf0 */
  esp -= 4; W32(esp, 0x97f24eu); SPILL(); f_97adf0(); if (g_unwind) return; RELOAD();
/* 97f24e: push 0xb03384 */
  { uint32_t v = 0xb03384u; esp -= 4; W32(esp, v); }
/* 97f253: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f255: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f25au); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f25a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97f25e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f261: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97f265: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97f269: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97f26d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 97f271: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f274: push 0xb03240 */
  { uint32_t v = 0xb03240u; esp -= 4; W32(esp, v); }
/* 97f279: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f27a: call 0x984180 */
  esp -= 4; W32(esp, 0x97f27fu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f27f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f282: mov eax, edi */
  eax = edi;
/* 97f284: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97f285: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97f286: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97f287: mov esp, ebp */
  esp = ebp;
/* 97f289: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97f28a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97f290(void) {
  LOAD_REGS();
L_97f290: /* 97f290: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97f2a0(void) {
  LOAD_REGS();
L_97f2a0: /* 97f2a0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97f2b0(void) {
  LOAD_REGS();
L_97f2b0: /* 97f2b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97f2b1: mov ebp, esp */
  ebp = esp;
/* 97f2b3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97f2b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f2b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f2b8: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97f2bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f2bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f2bd: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97f2c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f2c2: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97f2c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f2c5: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 97f2cd: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f2d2u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f2d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f2d4: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 97f2d7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97f2da: je 0x97f300 */
  if (zf) goto L_97f300;
L_97f2dc: /* 97f2dc: push 0xb034d8 */
  { uint32_t v = 0xb034d8u; esp -= 4; W32(esp, v); }
/* 97f2e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f2e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f2e3: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f2e8u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f2e8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97f2ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f2ef: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f2f2: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f2f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f2f8: call 0x984180 */
  esp -= 4; W32(esp, 0x97f2fdu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f2fd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f300: /* 97f300: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97f304: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f305: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 97f307: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f308: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f30du); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f30d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f30f: je 0x97f335 */
  if (zf) goto L_97f335;
L_97f311: /* 97f311: push 0xb034d4 */
  { uint32_t v = 0xb034d4u; esp -= 4; W32(esp, v); }
/* 97f316: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f318: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f31du); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f31d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97f321: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f324: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f327: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f32c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f32d: call 0x984180 */
  esp -= 4; W32(esp, 0x97f332u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f332: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f335: /* 97f335: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97f339: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f33a: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 97f33c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f33d: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f342u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f344: je 0x97f36a */
  if (zf) goto L_97f36a;
L_97f346: /* 97f346: push 0xb034d0 */
  { uint32_t v = 0xb034d0u; esp -= 4; W32(esp, v); }
/* 97f34b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f34c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f34d: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f352u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f352: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97f356: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f359: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f35c: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f362: call 0x984180 */
  esp -= 4; W32(esp, 0x97f367u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f367: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f36a: /* 97f36a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97f36e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f36f: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 97f371: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f372: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f377u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f377: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f379: je 0x97f39f */
  if (zf) goto L_97f39f;
L_97f37b: /* 97f37b: push 0xb034cc */
  { uint32_t v = 0xb034ccu; esp -= 4; W32(esp, v); }
/* 97f380: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f381: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f382: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f387u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f387: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97f38b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f38e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f391: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f396: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f397: call 0x984180 */
  esp -= 4; W32(esp, 0x97f39cu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f39c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f39f: /* 97f39f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97f3a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f3a4: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 97f3a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f3a7: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f3acu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f3ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f3ae: je 0x97f3d4 */
  if (zf) goto L_97f3d4;
L_97f3b0: /* 97f3b0: push 0xb034c8 */
  { uint32_t v = 0xb034c8u; esp -= 4; W32(esp, v); }
/* 97f3b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f3b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f3b7: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f3bcu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f3bc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97f3c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f3c3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f3c6: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f3cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f3cc: call 0x984180 */
  esp -= 4; W32(esp, 0x97f3d1u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f3d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f3d4: /* 97f3d4: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97f3d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f3d9: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 97f3db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f3dc: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f3e1u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f3e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f3e3: je 0x97f409 */
  if (zf) goto L_97f409;
L_97f3e5: /* 97f3e5: push 0xb034c4 */
  { uint32_t v = 0xb034c4u; esp -= 4; W32(esp, v); }
/* 97f3ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f3eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f3ec: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f3f1u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f3f1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97f3f5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f3f8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f3fb: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f401: call 0x984180 */
  esp -= 4; W32(esp, 0x97f406u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f406: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f409: /* 97f409: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97f40a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97f40b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97f40c: mov esp, ebp */
  esp = ebp;
/* 97f40e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97f40f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97f420(void) {
  LOAD_REGS();
L_97f420: /* 97f420: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97f421: mov ebp, esp */
  ebp = esp;
/* 97f423: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97f426: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f429: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f42a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97f42d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f42e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f42f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f433: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f434: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97f436: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f437: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 97f43f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 97f447: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f44cu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f44c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f44e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 97f451: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97f454: je 0x97f47a */
  if (zf) goto L_97f47a;
L_97f456: /* 97f456: push 0xb03530 */
  { uint32_t v = 0xb03530u; esp -= 4; W32(esp, v); }
/* 97f45b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f45c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f45d: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f462u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f462: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f466: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f469: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f46c: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f472: call 0x984180 */
  esp -= 4; W32(esp, 0x97f477u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f477: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f47a: /* 97f47a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97f47e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f47f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97f481: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f482: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f487u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f487: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f489: je 0x97f4af */
  if (zf) goto L_97f4af;
L_97f48b: /* 97f48b: push 0xb03524 */
  { uint32_t v = 0xb03524u; esp -= 4; W32(esp, v); }
/* 97f490: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f491: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f492: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f497u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f497: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f49b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f49e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f4a1: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f4a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f4a7: call 0x984180 */
  esp -= 4; W32(esp, 0x97f4acu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f4ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f4af: /* 97f4af: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97f4b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f4b4: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97f4b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f4b7: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f4bcu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f4bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f4be: je 0x97f4e4 */
  if (zf) goto L_97f4e4;
L_97f4c0: /* 97f4c0: push 0xb03514 */
  { uint32_t v = 0xb03514u; esp -= 4; W32(esp, v); }
/* 97f4c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f4c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f4c7: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f4ccu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f4cc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f4d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f4d3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f4d6: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f4db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f4dc: call 0x984180 */
  esp -= 4; W32(esp, 0x97f4e1u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f4e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f4e4: /* 97f4e4: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f4e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f4e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97f4eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f4ec: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f4f1u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f4f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f4f3: je 0x97f519 */
  if (zf) goto L_97f519;
L_97f4f5: /* 97f4f5: push 0xb03504 */
  { uint32_t v = 0xb03504u; esp -= 4; W32(esp, v); }
/* 97f4fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f4fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f4fc: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f501u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f501: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f505: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f508: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f50b: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f511: call 0x984180 */
  esp -= 4; W32(esp, 0x97f516u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f516: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f519: /* 97f519: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97f51d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f51e: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 97f520: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f521: call 0x97ae80 */
  esp -= 4; W32(esp, 0x97f526u); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 97f526: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f528: je 0x97f549 */
  if (zf) goto L_97f549;
L_97f52a: /* 97f52a: push 0xb034fc */
  { uint32_t v = 0xb034fcu; esp -= 4; W32(esp, v); }
/* 97f52f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f531: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f536u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f536: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 97f53a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f53b: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97f540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f541: call 0x984180 */
  esp -= 4; W32(esp, 0x97f546u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f546: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f549: /* 97f549: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97f54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f54e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 97f550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f551: call 0x97ae80 */
  esp -= 4; W32(esp, 0x97f556u); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 97f556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f558: je 0x97f579 */
  if (zf) goto L_97f579;
L_97f55a: /* 97f55a: push 0xb034f0 */
  { uint32_t v = 0xb034f0u; esp -= 4; W32(esp, v); }
/* 97f55f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f561: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f566u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f566: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 97f56a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f56b: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97f570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f571: call 0x984180 */
  esp -= 4; W32(esp, 0x97f576u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f576: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f579: /* 97f579: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97f57d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f57e: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 97f580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f581: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f586u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f588: je 0x97f5ae */
  if (zf) goto L_97f5ae;
L_97f58a: /* 97f58a: push 0xb034e8 */
  { uint32_t v = 0xb034e8u; esp -= 4; W32(esp, v); }
/* 97f58f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f591: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f596u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f596: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f59a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f59d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f5a0: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f5a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f5a6: call 0x984180 */
  esp -= 4; W32(esp, 0x97f5abu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f5ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f5ae: /* 97f5ae: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f5b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f5b3: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97f5b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f5b6: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f5bbu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f5bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f5bd: je 0x97f5e3 */
  if (zf) goto L_97f5e3;
L_97f5bf: /* 97f5bf: push 0xb034dc */
  { uint32_t v = 0xb034dcu; esp -= 4; W32(esp, v); }
/* 97f5c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f5c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f5c6: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f5cbu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f5cb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f5cf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f5d2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f5d5: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f5da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f5db: call 0x984180 */
  esp -= 4; W32(esp, 0x97f5e0u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f5e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f5e3: /* 97f5e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97f5e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97f5e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97f5e6: mov esp, ebp */
  esp = ebp;
/* 97f5e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97f5e9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97f5f0(void) {
  LOAD_REGS();
L_97f5f0: /* 97f5f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97f5f1: mov ebp, esp */
  ebp = esp;
/* 97f5f3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97f5f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f5f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f5fa: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97f5fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f5fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f5ff: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f603: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f604: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97f606: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f607: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 97f60f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 97f617: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f61cu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f61c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f61e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 97f621: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97f624: je 0x97f64a */
  if (zf) goto L_97f64a;
L_97f626: /* 97f626: push 0xb035e0 */
  { uint32_t v = 0xb035e0u; esp -= 4; W32(esp, v); }
/* 97f62b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f62c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f62d: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f632u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f632: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f636: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f639: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f63c: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f641: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f642: call 0x984180 */
  esp -= 4; W32(esp, 0x97f647u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f647: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f64a: /* 97f64a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97f64e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f64f: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 97f651: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f652: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f657u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f657: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f659: je 0x97f67f */
  if (zf) goto L_97f67f;
L_97f65b: /* 97f65b: push 0xb035d0 */
  { uint32_t v = 0xb035d0u; esp -= 4; W32(esp, v); }
/* 97f660: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f661: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f662: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f667u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f667: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f66b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f66e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f671: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f677: call 0x984180 */
  esp -= 4; W32(esp, 0x97f67cu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f67c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f67f: /* 97f67f: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97f683: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f684: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 97f686: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f687: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f68cu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f68c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f68e: je 0x97f6b4 */
  if (zf) goto L_97f6b4;
L_97f690: /* 97f690: push 0xb035bc */
  { uint32_t v = 0xb035bcu; esp -= 4; W32(esp, v); }
/* 97f695: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f697: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f69cu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f69c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f6a0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f6a3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f6a6: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f6ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f6ac: call 0x984180 */
  esp -= 4; W32(esp, 0x97f6b1u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f6b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f6b4: /* 97f6b4: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f6b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f6b9: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 97f6bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f6bc: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f6c1u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f6c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f6c3: je 0x97f6e9 */
  if (zf) goto L_97f6e9;
L_97f6c5: /* 97f6c5: push 0xb035a8 */
  { uint32_t v = 0xb035a8u; esp -= 4; W32(esp, v); }
/* 97f6ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f6cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f6cc: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f6d1u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f6d1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f6d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f6d8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f6db: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f6e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f6e1: call 0x984180 */
  esp -= 4; W32(esp, 0x97f6e6u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f6e6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f6e9: /* 97f6e9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97f6ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f6ee: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 97f6f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f6f1: call 0x97ae80 */
  esp -= 4; W32(esp, 0x97f6f6u); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 97f6f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f6f8: je 0x97f719 */
  if (zf) goto L_97f719;
L_97f6fa: /* 97f6fa: push 0xb03598 */
  { uint32_t v = 0xb03598u; esp -= 4; W32(esp, v); }
/* 97f6ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f701: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f706u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f706: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 97f70a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f70b: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97f710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f711: call 0x984180 */
  esp -= 4; W32(esp, 0x97f716u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f716: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f719: /* 97f719: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f71d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f71e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97f720: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f721: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f726u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f726: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f728: je 0x97f74e */
  if (zf) goto L_97f74e;
L_97f72a: /* 97f72a: push 0xb03588 */
  { uint32_t v = 0xb03588u; esp -= 4; W32(esp, v); }
/* 97f72f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f731: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f736u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f736: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f73a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f73d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f740: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f745: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f746: call 0x984180 */
  esp -= 4; W32(esp, 0x97f74bu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f74b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f74e: /* 97f74e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97f752: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f753: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97f755: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f756: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f75bu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f75b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f75d: je 0x97f783 */
  if (zf) goto L_97f783;
L_97f75f: /* 97f75f: push 0xb03578 */
  { uint32_t v = 0xb03578u; esp -= 4; W32(esp, v); }
/* 97f764: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f765: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f766: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f76bu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f76b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f76f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f772: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f775: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f77a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f77b: call 0x984180 */
  esp -= 4; W32(esp, 0x97f780u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f780: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f783: /* 97f783: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97f787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f788: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97f78a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f78b: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f790u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f790: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f792: je 0x97f7b8 */
  if (zf) goto L_97f7b8;
L_97f794: /* 97f794: push 0xb03568 */
  { uint32_t v = 0xb03568u; esp -= 4; W32(esp, v); }
/* 97f799: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f79a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f79b: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f7a0u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f7a0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f7a4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f7a7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f7aa: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f7af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f7b0: call 0x984180 */
  esp -= 4; W32(esp, 0x97f7b5u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f7b5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f7b8: /* 97f7b8: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f7bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f7bd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97f7bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f7c0: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f7c5u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f7c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f7c7: je 0x97f7ed */
  if (zf) goto L_97f7ed;
L_97f7c9: /* 97f7c9: push 0xb03558 */
  { uint32_t v = 0xb03558u; esp -= 4; W32(esp, v); }
/* 97f7ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f7cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f7d0: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f7d5u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f7d5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f7d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f7dc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f7df: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f7e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f7e5: call 0x984180 */
  esp -= 4; W32(esp, 0x97f7eau); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f7ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f7ed: /* 97f7ed: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97f7f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f7f2: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97f7f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f7f5: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f7fau); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f7fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f7fc: je 0x97f822 */
  if (zf) goto L_97f822;
L_97f7fe: /* 97f7fe: push 0xb03548 */
  { uint32_t v = 0xb03548u; esp -= 4; W32(esp, v); }
/* 97f803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f804: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f805: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f80au); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f80a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f80e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f811: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f814: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f819: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f81a: call 0x984180 */
  esp -= 4; W32(esp, 0x97f81fu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f81f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f822: /* 97f822: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97f826: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f827: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* 97f829: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f82a: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f82fu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f82f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f831: je 0x97f857 */
  if (zf) goto L_97f857;
L_97f833: /* 97f833: push 0xb0353c */
  { uint32_t v = 0xb0353cu; esp -= 4; W32(esp, v); }
/* 97f838: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f839: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f83a: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f83fu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f83f: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f843: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f846: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f849: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f84e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f84f: call 0x984180 */
  esp -= 4; W32(esp, 0x97f854u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f854: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f857: /* 97f857: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97f858: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97f859: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97f85a: mov esp, ebp */
  esp = ebp;
/* 97f85c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97f85d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97f860(void) {
  LOAD_REGS();
L_97f860: /* 97f860: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f861: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f862: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97f866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f867: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f868: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97f86c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f86d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97f86f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f870: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 97f878: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f87du); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f87d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f87f: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 97f883: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 97f887: je 0x97f8ad */
  if (zf) goto L_97f8ad;
L_97f889: /* 97f889: push 0xb035fc */
  { uint32_t v = 0xb035fcu; esp -= 4; W32(esp, v); }
/* 97f88e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f88f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f890: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f895u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f895: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97f899: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f89c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f89f: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f8a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f8a5: call 0x984180 */
  esp -= 4; W32(esp, 0x97f8aau); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f8aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f8ad: /* 97f8ad: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97f8b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f8b2: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97f8b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f8b5: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f8bau); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f8ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f8bc: je 0x97f8e2 */
  if (zf) goto L_97f8e2;
L_97f8be: /* 97f8be: push 0xb035f0 */
  { uint32_t v = 0xb035f0u; esp -= 4; W32(esp, v); }
/* 97f8c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f8c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f8c5: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f8cau); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f8ca: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97f8ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f8d1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f8d4: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f8d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f8da: call 0x984180 */
  esp -= 4; W32(esp, 0x97f8dfu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f8df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f8e2: /* 97f8e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97f8e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97f8e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97f8e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 97f8e6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97f8f0(void) {
  LOAD_REGS();
L_97f8f0: /* 97f8f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97f8f1: mov ebp, esp */
  ebp = esp;
/* 97f8f3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97f8f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97f8f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f8fa: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97f8fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f8fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f8ff: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f903: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f904: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97f906: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f907: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 97f90f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 97f917: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f91cu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f91c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f91e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 97f921: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97f924: je 0x97f94a */
  if (zf) goto L_97f94a;
L_97f926: /* 97f926: push 0xb03530 */
  { uint32_t v = 0xb03530u; esp -= 4; W32(esp, v); }
/* 97f92b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f92c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f92d: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f932u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f932: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f936: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f939: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f93c: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f941: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f942: call 0x984180 */
  esp -= 4; W32(esp, 0x97f947u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f947: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f94a: /* 97f94a: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97f94e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f94f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97f951: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f952: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f957u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f957: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f959: je 0x97f97f */
  if (zf) goto L_97f97f;
L_97f95b: /* 97f95b: push 0xb03524 */
  { uint32_t v = 0xb03524u; esp -= 4; W32(esp, v); }
/* 97f960: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f962: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f967u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f967: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f96b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f96e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f971: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f976: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f977: call 0x984180 */
  esp -= 4; W32(esp, 0x97f97cu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f97c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f97f: /* 97f97f: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97f983: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97f984: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97f986: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f987: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f98cu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f98c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f98e: je 0x97f9b4 */
  if (zf) goto L_97f9b4;
L_97f990: /* 97f990: push 0xb03514 */
  { uint32_t v = 0xb03514u; esp -= 4; W32(esp, v); }
/* 97f995: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f997: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f99cu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f99c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f9a0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f9a3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f9a6: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f9ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f9ac: call 0x984180 */
  esp -= 4; W32(esp, 0x97f9b1u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f9b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f9b4: /* 97f9b4: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97f9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97f9b9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97f9bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f9bc: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97f9c1u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97f9c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f9c3: je 0x97f9e9 */
  if (zf) goto L_97f9e9;
L_97f9c5: /* 97f9c5: push 0xb03504 */
  { uint32_t v = 0xb03504u; esp -= 4; W32(esp, v); }
/* 97f9ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97f9cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f9cc: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97f9d1u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97f9d1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97f9d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97f9d8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97f9db: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97f9e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97f9e1: call 0x984180 */
  esp -= 4; W32(esp, 0x97f9e6u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97f9e6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97f9e9: /* 97f9e9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97f9ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97f9ee: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 97f9f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97f9f1: call 0x97ae80 */
  esp -= 4; W32(esp, 0x97f9f6u); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 97f9f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97f9f8: je 0x97fa19 */
  if (zf) goto L_97fa19;
L_97f9fa: /* 97f9fa: push 0xb034fc */
  { uint32_t v = 0xb034fcu; esp -= 4; W32(esp, v); }
/* 97f9ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fa00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fa01: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fa06u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fa06: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 97fa0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97fa0b: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97fa10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fa11: call 0x984180 */
  esp -= 4; W32(esp, 0x97fa16u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fa16: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fa19: /* 97fa19: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97fa1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fa1e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 97fa20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fa21: call 0x97ae80 */
  esp -= 4; W32(esp, 0x97fa26u); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 97fa26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fa28: je 0x97fa49 */
  if (zf) goto L_97fa49;
L_97fa2a: /* 97fa2a: push 0xb034f0 */
  { uint32_t v = 0xb034f0u; esp -= 4; W32(esp, v); }
/* 97fa2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fa30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fa31: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fa36u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fa36: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 97fa3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fa3b: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97fa40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fa41: call 0x984180 */
  esp -= 4; W32(esp, 0x97fa46u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fa46: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fa49: /* 97fa49: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97fa4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97fa4e: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 97fa50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fa51: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fa56u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fa56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fa58: je 0x97fa7e */
  if (zf) goto L_97fa7e;
L_97fa5a: /* 97fa5a: push 0xb034e8 */
  { uint32_t v = 0xb034e8u; esp -= 4; W32(esp, v); }
/* 97fa5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fa60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fa61: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fa66u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fa66: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fa6a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fa6d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fa70: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fa75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fa76: call 0x984180 */
  esp -= 4; W32(esp, 0x97fa7bu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fa7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fa7e: /* 97fa7e: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97fa82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fa83: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97fa85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fa86: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fa8bu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fa8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fa8d: je 0x97fab3 */
  if (zf) goto L_97fab3;
L_97fa8f: /* 97fa8f: push 0xb034dc */
  { uint32_t v = 0xb034dcu; esp -= 4; W32(esp, v); }
/* 97fa94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fa95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fa96: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fa9bu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fa9b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fa9f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97faa2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97faa5: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97faaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97faab: call 0x984180 */
  esp -= 4; W32(esp, 0x97fab0u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fab0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fab3: /* 97fab3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97fab4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97fab5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97fab6: mov esp, ebp */
  esp = ebp;
/* 97fab8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97fab9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97fac0(void) {
  LOAD_REGS();
L_97fac0: /* 97fac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97fac1: mov ebp, esp */
  ebp = esp;
/* 97fac3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97fac6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97fac9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97faca: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97facd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97face: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97facf: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97fad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fad4: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 97fad6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fad7: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 97fadf: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 97fae7: call 0x97ae20 */
  esp -= 4; W32(esp, 0x97faecu); SPILL(); f_97ae20(); if (g_unwind) return; RELOAD();
/* 97faec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97faee: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 97faf1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97faf4: je 0x97fb15 */
  if (zf) goto L_97fb15;
L_97faf6: /* 97faf6: push 0xb03690 */
  { uint32_t v = 0xb03690u; esp -= 4; W32(esp, v); }
/* 97fafb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fafc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fafd: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fb02u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fb02: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 97fb06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fb07: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97fb0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fb0d: call 0x984180 */
  esp -= 4; W32(esp, 0x97fb12u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fb12: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fb15: /* 97fb15: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97fb19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97fb1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97fb1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fb1d: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fb22u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fb22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fb24: je 0x97fb4a */
  if (zf) goto L_97fb4a;
L_97fb26: /* 97fb26: push 0xb0367c */
  { uint32_t v = 0xb0367cu; esp -= 4; W32(esp, v); }
/* 97fb2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fb2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fb2d: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fb32u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fb32: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fb36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fb39: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fb3c: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fb41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fb42: call 0x984180 */
  esp -= 4; W32(esp, 0x97fb47u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fb47: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fb4a: /* 97fb4a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97fb4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fb4f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97fb51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fb52: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fb57u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fb57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fb59: je 0x97fb7f */
  if (zf) goto L_97fb7f;
L_97fb5b: /* 97fb5b: push 0xb03668 */
  { uint32_t v = 0xb03668u; esp -= 4; W32(esp, v); }
/* 97fb60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fb61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fb62: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fb67u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fb67: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fb6b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fb6e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fb71: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fb76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fb77: call 0x984180 */
  esp -= 4; W32(esp, 0x97fb7cu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fb7c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fb7f: /* 97fb7f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97fb83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fb84: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97fb86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fb87: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fb8cu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fb8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fb8e: je 0x97fbb4 */
  if (zf) goto L_97fbb4;
L_97fb90: /* 97fb90: push 0xb03658 */
  { uint32_t v = 0xb03658u; esp -= 4; W32(esp, v); }
/* 97fb95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fb96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fb97: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fb9cu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fb9c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fba0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fba3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fba6: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fbab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fbac: call 0x984180 */
  esp -= 4; W32(esp, 0x97fbb1u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fbb1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fbb4: /* 97fbb4: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97fbb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97fbb9: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97fbbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fbbc: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fbc1u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fbc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fbc3: je 0x97fbe9 */
  if (zf) goto L_97fbe9;
L_97fbc5: /* 97fbc5: push 0xb03648 */
  { uint32_t v = 0xb03648u; esp -= 4; W32(esp, v); }
/* 97fbca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fbcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fbcc: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fbd1u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fbd1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fbd5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fbd8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fbdb: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fbe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fbe1: call 0x984180 */
  esp -= 4; W32(esp, 0x97fbe6u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fbe6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fbe9: /* 97fbe9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97fbed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fbee: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* 97fbf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fbf1: call 0x97ae20 */
  esp -= 4; W32(esp, 0x97fbf6u); SPILL(); f_97ae20(); if (g_unwind) return; RELOAD();
/* 97fbf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fbf8: je 0x97fc19 */
  if (zf) goto L_97fc19;
L_97fbfa: /* 97fbfa: push 0xb0363c */
  { uint32_t v = 0xb0363cu; esp -= 4; W32(esp, v); }
/* 97fbff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fc00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fc01: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fc06u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fc06: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 97fc0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fc0b: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97fc10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fc11: call 0x984180 */
  esp -= 4; W32(esp, 0x97fc16u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fc16: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fc19: /* 97fc19: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97fc1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97fc1e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 97fc20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fc21: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fc26u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fc26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fc28: je 0x97fc4e */
  if (zf) goto L_97fc4e;
L_97fc2a: /* 97fc2a: push 0xb03628 */
  { uint32_t v = 0xb03628u; esp -= 4; W32(esp, v); }
/* 97fc2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fc30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fc31: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fc36u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fc36: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fc3a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fc3d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fc40: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fc45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fc46: call 0x984180 */
  esp -= 4; W32(esp, 0x97fc4bu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fc4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fc4e: /* 97fc4e: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97fc52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fc53: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97fc55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fc56: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fc5bu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fc5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fc5d: je 0x97fc83 */
  if (zf) goto L_97fc83;
L_97fc5f: /* 97fc5f: push 0xb03618 */
  { uint32_t v = 0xb03618u; esp -= 4; W32(esp, v); }
/* 97fc64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fc65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fc66: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fc6bu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fc6b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fc6f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fc72: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fc75: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fc7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fc7b: call 0x984180 */
  esp -= 4; W32(esp, 0x97fc80u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fc80: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fc83: /* 97fc83: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97fc87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fc88: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 97fc8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fc8b: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fc90u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fc90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fc92: je 0x97fcb8 */
  if (zf) goto L_97fcb8;
L_97fc94: /* 97fc94: push 0xb03608 */
  { uint32_t v = 0xb03608u; esp -= 4; W32(esp, v); }
/* 97fc99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fc9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fc9b: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fca0u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fca0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97fca4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fca7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fcaa: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fcaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fcb0: call 0x984180 */
  esp -= 4; W32(esp, 0x97fcb5u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fcb5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fcb8: /* 97fcb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97fcb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97fcba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97fcbb: mov esp, ebp */
  esp = ebp;
/* 97fcbd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97fcbe: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97fcd0(void) {
  LOAD_REGS();
L_97fcd0: /* 97fcd0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97fcd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fcd4: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 97fcd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fcd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fcda: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97fcde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fcdf: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 97fce1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fce2: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 97fcea: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 97fcf2: call 0x97ae80 */
  esp -= 4; W32(esp, 0x97fcf7u); SPILL(); f_97ae80(); if (g_unwind) return; RELOAD();
/* 97fcf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fcf9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 97fcfd: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 97fd01: je 0x97fd22 */
  if (zf) goto L_97fd22;
L_97fd03: /* 97fd03: push 0xb036a4 */
  { uint32_t v = 0xb036a4u; esp -= 4; W32(esp, v); }
/* 97fd08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fd09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fd0a: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fd0fu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fd0f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 97fd13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fd14: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97fd19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fd1a: call 0x984180 */
  esp -= 4; W32(esp, 0x97fd1fu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fd1f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fd22: /* 97fd22: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97fd26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97fd27: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97fd29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fd2a: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fd2fu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fd2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fd31: je 0x97fd57 */
  if (zf) goto L_97fd57;
L_97fd33: /* 97fd33: push 0xb035f0 */
  { uint32_t v = 0xb035f0u; esp -= 4; W32(esp, v); }
/* 97fd38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fd39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fd3a: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fd3fu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fd3f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97fd43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fd46: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fd49: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fd4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fd4f: call 0x984180 */
  esp -= 4; W32(esp, 0x97fd54u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fd54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fd57: /* 97fd57: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97fd5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fd5c: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97fd5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fd5f: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fd64u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fd64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fd66: je 0x97fd8c */
  if (zf) goto L_97fd8c;
L_97fd68: /* 97fd68: push 0xb0369c */
  { uint32_t v = 0xb0369cu; esp -= 4; W32(esp, v); }
/* 97fd6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fd6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fd6f: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fd74u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fd74: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97fd78: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fd7b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fd7e: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fd83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fd84: call 0x984180 */
  esp -= 4; W32(esp, 0x97fd89u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fd89: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fd8c: /* 97fd8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97fd8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97fd8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97fd8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fd92: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97fda0(void) {
  LOAD_REGS();
L_97fda0: /* 97fda0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97fda1: mov ebp, esp */
  ebp = esp;
/* 97fda3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 97fda6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fda7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fda8: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97fdab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fdac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fdad: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97fdb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fdb2: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97fdb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fdb5: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 97fdbd: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fdc2u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fdc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fdc4: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 97fdc7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97fdca: je 0x97fdf0 */
  if (zf) goto L_97fdf0;
L_97fdcc: /* 97fdcc: push 0xb03768 */
  { uint32_t v = 0xb03768u; esp -= 4; W32(esp, v); }
/* 97fdd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fdd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fdd3: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fdd8u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fdd8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97fddc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fddf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fde2: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fde7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fde8: call 0x984180 */
  esp -= 4; W32(esp, 0x97fdedu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fded: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fdf0: /* 97fdf0: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97fdf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fdf5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97fdf7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fdf8: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fdfdu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fdfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fdff: je 0x97fe25 */
  if (zf) goto L_97fe25;
L_97fe01: /* 97fe01: push 0xb03758 */
  { uint32_t v = 0xb03758u; esp -= 4; W32(esp, v); }
/* 97fe06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fe07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fe08: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fe0du); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fe0d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97fe11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fe14: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fe17: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fe1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fe1d: call 0x984180 */
  esp -= 4; W32(esp, 0x97fe22u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fe22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fe25: /* 97fe25: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97fe29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97fe2a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 97fe2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fe2d: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fe32u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fe32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fe34: je 0x97fe5a */
  if (zf) goto L_97fe5a;
L_97fe36: /* 97fe36: push 0xb03748 */
  { uint32_t v = 0xb03748u; esp -= 4; W32(esp, v); }
/* 97fe3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fe3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fe3d: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fe42u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fe42: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97fe46: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fe49: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fe4c: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fe51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fe52: call 0x984180 */
  esp -= 4; W32(esp, 0x97fe57u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fe57: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fe5a: /* 97fe5a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97fe5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fe5f: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97fe61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fe62: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fe67u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fe67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fe69: je 0x97fe8f */
  if (zf) goto L_97fe8f;
L_97fe6b: /* 97fe6b: push 0xb03738 */
  { uint32_t v = 0xb03738u; esp -= 4; W32(esp, v); }
/* 97fe70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fe71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fe72: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fe77u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fe77: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97fe7b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fe7e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fe81: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fe86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fe87: call 0x984180 */
  esp -= 4; W32(esp, 0x97fe8cu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fe8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fe8f: /* 97fe8f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97fe93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97fe94: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 97fe96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fe97: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fe9cu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fe9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fe9e: je 0x97fec4 */
  if (zf) goto L_97fec4;
L_97fea0: /* 97fea0: push 0xb03728 */
  { uint32_t v = 0xb03728u; esp -= 4; W32(esp, v); }
/* 97fea5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fea7: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97feacu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97feac: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97feb0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97feb3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97feb6: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97febb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97febc: call 0x984180 */
  esp -= 4; W32(esp, 0x97fec1u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fec1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fec4: /* 97fec4: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97fec8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97fec9: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 97fecb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97fecc: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97fed1u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97fed1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97fed3: je 0x97fef9 */
  if (zf) goto L_97fef9;
L_97fed5: /* 97fed5: push 0xb03718 */
  { uint32_t v = 0xb03718u; esp -= 4; W32(esp, v); }
/* 97feda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97fedb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fedc: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97fee1u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97fee1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97fee5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fee8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97feeb: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fef1: call 0x984180 */
  esp -= 4; W32(esp, 0x97fef6u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97fef6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97fef9: /* 97fef9: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97fefd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97fefe: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 97ff00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ff01: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97ff06u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97ff06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ff08: je 0x97ff2e */
  if (zf) goto L_97ff2e;
L_97ff0a: /* 97ff0a: push 0xb03708 */
  { uint32_t v = 0xb03708u; esp -= 4; W32(esp, v); }
/* 97ff0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ff10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ff11: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ff16u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ff16: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97ff1a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ff1d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ff20: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ff25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ff26: call 0x984180 */
  esp -= 4; W32(esp, 0x97ff2bu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ff2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97ff2e: /* 97ff2e: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97ff32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ff33: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 97ff35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ff36: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97ff3bu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97ff3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ff3d: je 0x97ff63 */
  if (zf) goto L_97ff63;
L_97ff3f: /* 97ff3f: push 0xb036f8 */
  { uint32_t v = 0xb036f8u; esp -= 4; W32(esp, v); }
/* 97ff44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ff45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ff46: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ff4bu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ff4b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97ff4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ff52: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ff55: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ff5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ff5b: call 0x984180 */
  esp -= 4; W32(esp, 0x97ff60u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ff60: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97ff63: /* 97ff63: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97ff67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ff68: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 97ff6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ff6b: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97ff70u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97ff70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ff72: je 0x97ff98 */
  if (zf) goto L_97ff98;
L_97ff74: /* 97ff74: push 0xb036e8 */
  { uint32_t v = 0xb036e8u; esp -= 4; W32(esp, v); }
/* 97ff79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ff7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ff7b: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ff80u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ff80: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97ff84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ff87: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ff8a: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ff8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ff90: call 0x984180 */
  esp -= 4; W32(esp, 0x97ff95u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ff95: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97ff98: /* 97ff98: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97ff9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ff9d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97ff9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ffa0: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97ffa5u); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97ffa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ffa7: je 0x97ffcd */
  if (zf) goto L_97ffcd;
L_97ffa9: /* 97ffa9: push 0xb036d8 */
  { uint32_t v = 0xb036d8u; esp -= 4; W32(esp, v); }
/* 97ffae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ffaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ffb0: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ffb5u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ffb5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97ffb9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97ffbc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97ffbf: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97ffc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ffc5: call 0x984180 */
  esp -= 4; W32(esp, 0x97ffcau); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ffca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97ffcd: /* 97ffcd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97ffd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ffd2: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 97ffd4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ffd5: call 0x97aee0 */
  esp -= 4; W32(esp, 0x97ffdau); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 97ffda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ffdc: je 0x980002 */
  if (zf) goto L_980002;
L_97ffde: /* 97ffde: push 0xb036c8 */
  { uint32_t v = 0xb036c8u; esp -= 4; W32(esp, v); }
/* 97ffe3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ffe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ffe5: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97ffeau); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97ffea: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97ffee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97fff1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97fff4: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 97fff9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97fffa: call 0x984180 */
  esp -= 4; W32(esp, 0x97ffffu); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 97ffff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_980002: /* 980002: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 980006: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980007: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 980009: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98000a: call 0x97aee0 */
  esp -= 4; W32(esp, 0x98000fu); SPILL(); f_97aee0(); if (g_unwind) return; RELOAD();
/* 98000f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980011: je 0x980037 */
  if (zf) goto L_980037;
L_980013: /* 980013: push 0xb036b8 */
  { uint32_t v = 0xb036b8u; esp -= 4; W32(esp, v); }
/* 980018: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980019: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98001a: call 0x9840c0 */
  esp -= 4; W32(esp, 0x98001fu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 98001f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 980023: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980026: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 980029: push 0xb03230 */
  { uint32_t v = 0xb03230u; esp -= 4; W32(esp, v); }
/* 98002e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98002f: call 0x984180 */
  esp -= 4; W32(esp, 0x980034u); SPILL(); f_984180(); if (g_unwind) return; RELOAD();
/* 980034: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_980037: /* 980037: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980038: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980039: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98003a: mov esp, ebp */
  esp = ebp;
/* 98003c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98003d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_980040(void) {
  LOAD_REGS();
L_980040: /* 980040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980041: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 980045: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980046: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980047: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 98004a: push 0xb037c0 */
  { uint32_t v = 0xb037c0u; esp -= 4; W32(esp, v); }
/* 98004f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980050: call 0x982640 */
  esp -= 4; W32(esp, 0x980055u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980055: mov esi, eax */
  esi = eax;
/* 980057: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980059: jne 0x980061 */
  if (!zf) goto L_980061;
L_98005b: /* 98005b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98005c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98005d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98005e: ret 0xc */
  esp += 16; SPILL(); return;
L_980061: /* 980061: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 980065: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980067: je 0x980071 */
  if (zf) goto L_980071;
L_980069: /* 980069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98006a: call 0x99c770 */
  esp -= 4; W32(esp, 0x98006fu); SPILL(); f_99c770(); if (g_unwind) return; RELOAD();
/* 98006f: jmp 0x980073 */
  goto L_980073;
L_980071: /* 980071: xor eax, eax */
  eax = 0;
L_980073: /* 980073: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980074: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980075: call 0x97b9d0 */
  esp -= 4; W32(esp, 0x98007au); SPILL(); f_97b9d0(); if (g_unwind) return; RELOAD();
/* 98007a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98007c: mov esi, eax */
  esi = eax;
/* 98007e: je 0x9800a0 */
  if (zf) goto L_9800a0;
L_980080: /* 980080: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 980082: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 980085: jne 0x980099 */
  if (!zf) goto L_980099;
L_980087: /* 980087: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980088: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980089: call 0x980230 */
  esp -= 4; W32(esp, 0x98008eu); SPILL(); f_980230(); if (g_unwind) return; RELOAD();
/* 98008e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980090: je 0x980099 */
  if (zf) goto L_980099;
L_980092: /* 980092: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980093: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980094: call 0x97c960 */
  esp -= 4; W32(esp, 0x980099u); SPILL(); f_97c960(); if (g_unwind) return; RELOAD();
L_980099: /* 980099: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98009c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98009e: jne 0x980080 */
  if (!zf) goto L_980080;
L_9800a0: /* 9800a0: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 9800a3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9800a5: je 0x9800c7 */
  if (zf) goto L_9800c7;
L_9800a7: /* 9800a7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9800a9: cmp dword ptr [eax], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9800ac: jne 0x9800c0 */
  if (!zf) goto L_9800c0;
L_9800ae: /* 9800ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9800af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9800b0: call 0x9804a0 */
  esp -= 4; W32(esp, 0x9800b5u); SPILL(); f_9804a0(); if (g_unwind) return; RELOAD();
/* 9800b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9800b7: je 0x9800c0 */
  if (zf) goto L_9800c0;
L_9800b9: /* 9800b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9800ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9800bb: call 0x97ca20 */
  esp -= 4; W32(esp, 0x9800c0u); SPILL(); f_97ca20(); if (g_unwind) return; RELOAD();
L_9800c0: /* 9800c0: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 9800c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9800c5: jne 0x9800a7 */
  if (!zf) goto L_9800a7;
L_9800c7: /* 9800c7: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 9800ca: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9800cc: je 0x9800f0 */
  if (zf) goto L_9800f0;
L_9800ce: /* 9800ce: mov edi, edi */
  edi = edi;
L_9800d0: /* 9800d0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9800d2: cmp dword ptr [eax], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9800d5: jne 0x9800e9 */
  if (!zf) goto L_9800e9;
L_9800d7: /* 9800d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9800d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9800d9: call 0x980630 */
  esp -= 4; W32(esp, 0x9800deu); SPILL(); f_980630(); if (g_unwind) return; RELOAD();
/* 9800de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9800e0: je 0x9800e9 */
  if (zf) goto L_9800e9;
L_9800e2: /* 9800e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9800e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9800e4: call 0x97cba0 */
  esp -= 4; W32(esp, 0x9800e9u); SPILL(); f_97cba0(); if (g_unwind) return; RELOAD();
L_9800e9: /* 9800e9: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 9800ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9800ee: jne 0x9800d0 */
  if (!zf) goto L_9800d0;
L_9800f0: /* 9800f0: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 9800f3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9800f5: je 0x980117 */
  if (zf) goto L_980117;
L_9800f7: /* 9800f7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9800f9: cmp dword ptr [eax], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9800fc: jne 0x980110 */
  if (!zf) goto L_980110;
L_9800fe: /* 9800fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9800ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980100: call 0x980750 */
  esp -= 4; W32(esp, 0x980105u); SPILL(); f_980750(); if (g_unwind) return; RELOAD();
/* 980105: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980107: je 0x980110 */
  if (zf) goto L_980110;
L_980109: /* 980109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98010a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98010b: call 0x97cae0 */
  esp -= 4; W32(esp, 0x980110u); SPILL(); f_97cae0(); if (g_unwind) return; RELOAD();
L_980110: /* 980110: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 980113: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980115: jne 0x9800f7 */
  if (!zf) goto L_9800f7;
L_980117: /* 980117: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 98011a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98011c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 980120: je 0x98017d */
  if (zf) goto L_98017d;
L_980122: /* 980122: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_980123: /* 980123: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 980127: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 980129: cmp dword ptr [edi], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98012c: jne 0x98016d */
  if (!zf) goto L_98016d;
L_98012e: /* 98012e: push 0xb037b8 */
  { uint32_t v = 0xb037b8u; esp -= 4; W32(esp, v); }
/* 980133: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980134: call 0x982640 */
  esp -= 4; W32(esp, 0x980139u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980139: push 0xb037b0 */
  { uint32_t v = 0xb037b0u; esp -= 4; W32(esp, v); }
/* 98013e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98013f: mov ebx, eax */
  ebx = eax;
/* 980141: call 0x982640 */
  esp -= 4; W32(esp, 0x980146u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980146: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980147: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980148: mov ebp, eax */
  ebp = eax;
/* 98014a: call 0x97c390 */
  esp -= 4; W32(esp, 0x98014fu); SPILL(); f_97c390(); if (g_unwind) return; RELOAD();
/* 98014f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 980150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980151: mov edi, eax */
  edi = eax;
/* 980153: call 0x97c390 */
  esp -= 4; W32(esp, 0x980158u); SPILL(); f_97c390(); if (g_unwind) return; RELOAD();
/* 980158: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98015a: je 0x980169 */
  if (zf) goto L_980169;
L_98015c: /* 98015c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98015e: je 0x980169 */
  if (zf) goto L_980169;
L_980160: /* 980160: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 980162: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980163: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980164: call 0x97a8b0 */
  esp -= 4; W32(esp, 0x980169u); SPILL(); f_97a8b0(); if (g_unwind) return; RELOAD();
L_980169: /* 980169: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_98016d: /* 98016d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 980171: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 980174: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980176: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98017a: jne 0x980123 */
  if (!zf) goto L_980123;
L_98017c: /* 98017c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_98017d: /* 98017d: push 0xb037a8 */
  { uint32_t v = 0xb037a8u; esp -= 4; W32(esp, v); }
/* 980182: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980183: call 0x982640 */
  esp -= 4; W32(esp, 0x980188u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980188: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98018a: je 0x980193 */
  if (zf) goto L_980193;
L_98018c: /* 98018c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98018d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98018e: call 0x97c940 */
  esp -= 4; W32(esp, 0x980193u); SPILL(); f_97c940(); if (g_unwind) return; RELOAD();
L_980193: /* 980193: push 0xb037a0 */
  { uint32_t v = 0xb037a0u; esp -= 4; W32(esp, v); }
/* 980198: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980199: call 0x982640 */
  esp -= 4; W32(esp, 0x98019eu); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 98019e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9801a0: je 0x9801bd */
  if (zf) goto L_9801bd;
L_9801a2: /* 9801a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9801a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9801a5: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x9801abu); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 9801ab: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9801af: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9801b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9801b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9801b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9801b8: call 0x97c950 */
  esp -= 4; W32(esp, 0x9801bdu); SPILL(); f_97c950(); if (g_unwind) return; RELOAD();
L_9801bd: /* 9801bd: push 0xb03794 */
  { uint32_t v = 0xb03794u; esp -= 4; W32(esp, v); }
/* 9801c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9801c3: call 0x982640 */
  esp -= 4; W32(esp, 0x9801c8u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9801c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9801ca: je 0x9801d3 */
  if (zf) goto L_9801d3;
L_9801cc: /* 9801cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9801cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9801ce: call 0x97c930 */
  esp -= 4; W32(esp, 0x9801d3u); SPILL(); f_97c930(); if (g_unwind) return; RELOAD();
L_9801d3: /* 9801d3: push 0xb03788 */
  { uint32_t v = 0xb03788u; esp -= 4; W32(esp, v); }
/* 9801d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9801d9: call 0x982640 */
  esp -= 4; W32(esp, 0x9801deu); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9801de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9801e0: je 0x9801fd */
  if (zf) goto L_9801fd;
L_9801e2: /* 9801e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9801e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9801e5: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x9801ebu); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 9801eb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9801ef: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9801f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9801f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9801f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9801f8: call 0x97d130 */
  esp -= 4; W32(esp, 0x9801fdu); SPILL(); f_97d130(); if (g_unwind) return; RELOAD();
L_9801fd: /* 9801fd: push 0xb03778 */
  { uint32_t v = 0xb03778u; esp -= 4; W32(esp, v); }
/* 980202: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980203: call 0x982640 */
  esp -= 4; W32(esp, 0x980208u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98020a: je 0x980227 */
  if (zf) goto L_980227;
L_98020c: /* 98020c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98020e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98020f: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x980215u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 980215: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 980219: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98021d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980220: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980221: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980222: call 0x97d140 */
  esp -= 4; W32(esp, 0x980227u); SPILL(); f_97d140(); if (g_unwind) return; RELOAD();
L_980227: /* 980227: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980228: mov eax, esi */
  eax = esi;
/* 98022a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98022b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98022c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_980230(void) {
  LOAD_REGS();
L_980230: /* 980230: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 980233: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980234: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980235: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980236: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98023a: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 98023d: push 0xb037c0 */
  { uint32_t v = 0xb037c0u; esp -= 4; W32(esp, v); }
/* 980242: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980243: call 0x982640 */
  esp -= 4; W32(esp, 0x980248u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980248: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980249: call 0x97d150 */
  esp -= 4; W32(esp, 0x98024eu); SPILL(); f_97d150(); if (g_unwind) return; RELOAD();
/* 98024e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980250: mov ebx, eax */
  ebx = eax;
/* 980252: je 0x980274 */
  if (zf) goto L_980274;
L_980254: /* 980254: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 980256: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 980259: jne 0x98026d */
  if (!zf) goto L_98026d;
L_98025b: /* 98025b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98025c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98025d: call 0x980330 */
  esp -= 4; W32(esp, 0x980262u); SPILL(); f_980330(); if (g_unwind) return; RELOAD();
/* 980262: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980264: je 0x98026d */
  if (zf) goto L_98026d;
L_980266: /* 980266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980267: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980268: call 0x97d4d0 */
  esp -= 4; W32(esp, 0x98026du); SPILL(); f_97d4d0(); if (g_unwind) return; RELOAD();
L_98026d: /* 98026d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 980270: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980272: jne 0x980254 */
  if (!zf) goto L_980254;
L_980274: /* 980274: push 0xb037a8 */
  { uint32_t v = 0xb037a8u; esp -= 4; W32(esp, v); }
/* 980279: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98027a: call 0x982640 */
  esp -= 4; W32(esp, 0x98027fu); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 98027f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980281: je 0x98028a */
  if (zf) goto L_98028a;
L_980283: /* 980283: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980284: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980285: call 0x97d490 */
  esp -= 4; W32(esp, 0x98028au); SPILL(); f_97d490(); if (g_unwind) return; RELOAD();
L_98028a: /* 98028a: push 0xb037a0 */
  { uint32_t v = 0xb037a0u; esp -= 4; W32(esp, v); }
/* 98028f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980290: call 0x982640 */
  esp -= 4; W32(esp, 0x980295u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980295: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980297: je 0x9802b4 */
  if (zf) goto L_9802b4;
L_980299: /* 980299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98029b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98029c: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x9802a2u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 9802a2: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9802a6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9802aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9802ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9802ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9802af: call 0x97d4a0 */
  esp -= 4; W32(esp, 0x9802b4u); SPILL(); f_97d4a0(); if (g_unwind) return; RELOAD();
L_9802b4: /* 9802b4: push 0xb037c4 */
  { uint32_t v = 0xb037c4u; esp -= 4; W32(esp, v); }
/* 9802b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9802ba: call 0x982640 */
  esp -= 4; W32(esp, 0x9802bfu); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9802bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9802c1: je 0x98031e */
  if (zf) goto L_98031e;
L_9802c3: /* 9802c3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9802c7: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 9802c9: xor esi, esi */
  esi = 0;
/* 9802cb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9802cd: je 0x980309 */
  if (zf) goto L_980309;
L_9802cf: /* 9802cf: nop  */
L_9802d0: /* 9802d0: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9802d3: jge 0x980309 */
  if ((sf == of)) goto L_980309;
L_9802d5: /* 9802d5: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 9802d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9802da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9802db: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x9802e1u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 9802e1: fstp dword ptr [esp + esi*4 + 0x18] */
  WF32((uint32_t)(esp + esi*4 + 0x18u), ST0); FPOP();
/* 9802e5: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9802e9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9802ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9802f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9802f1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9802f3: je 0x980304 */
  if (zf) goto L_980304;
L_9802f5: /* 9802f5: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 9802f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9802fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9802fb: call 0x9828f0 */
  esp -= 4; W32(esp, 0x980300u); SPILL(); f_9828f0(); if (g_unwind) return; RELOAD();
/* 980300: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_980304: /* 980304: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 980307: jne 0x9802d0 */
  if (!zf) goto L_9802d0;
L_980309: /* 980309: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98030d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 980311: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 980315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980316: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980317: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980318: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980319: call 0x97d4b0 */
  esp -= 4; W32(esp, 0x98031eu); SPILL(); f_97d4b0(); if (g_unwind) return; RELOAD();
L_98031e: /* 98031e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98031f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980320: mov eax, ebx */
  eax = ebx;
/* 980322: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980323: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980326: ret 8 */
  esp += 12; SPILL(); return;
}

void f_980330(void) {
  LOAD_REGS();
L_980330: /* 980330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980331: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 980332: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980333: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 980337: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 98033a: push 0xb037c0 */
  { uint32_t v = 0xb037c0u; esp -= 4; W32(esp, v); }
/* 98033f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980340: xor ebx, ebx */
  ebx = 0;
/* 980342: call 0x982640 */
  esp -= 4; W32(esp, 0x980347u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980347: push 0xb03804 */
  { uint32_t v = 0xb03804u; esp -= 4; W32(esp, v); }
/* 98034c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98034d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 980351: call 0x982640 */
  esp -= 4; W32(esp, 0x980356u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980356: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980358: jne 0x980360 */
  if (!zf) goto L_980360;
L_98035a: /* 98035a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98035b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98035c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98035d: ret 8 */
  esp += 12; SPILL(); return;
L_980360: /* 980360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980361: mov edi, 0xb037fc */
  edi = 0xb037fcu;
/* 980366: mov esi, eax */
  esi = eax;
/* 980368: mov ecx, 7 */
  ecx = 0x7u;
/* 98036d: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 98036f: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980371: jne 0x980390 */
  if (!zf) goto L_980390;
L_980373: /* 980373: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 980377: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 980379: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98037a: call 0x97da50 */
  esp -= 4; W32(esp, 0x98037fu); SPILL(); f_97da50(); if (g_unwind) return; RELOAD();
/* 98037f: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 980382: mov ebx, eax */
  ebx = eax;
/* 980384: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980385: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980386: call 0x97dd30 */
  esp -= 4; W32(esp, 0x98038bu); SPILL(); f_97dd30(); if (g_unwind) return; RELOAD();
/* 98038b: jmp 0x98047a */
  goto L_98047a;
L_980390: /* 980390: mov edi, 0xb037f8 */
  edi = 0xb037f8u;
/* 980395: mov esi, eax */
  esi = eax;
/* 980397: mov ecx, 4 */
  ecx = 0x4u;
/* 98039c: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 98039e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 9803a0: jne 0x9803c7 */
  if (!zf) goto L_9803c7;
L_9803a2: /* 9803a2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9803a6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9803a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9803a9: call 0x97da50 */
  esp -= 4; W32(esp, 0x9803aeu); SPILL(); f_97da50(); if (g_unwind) return; RELOAD();
/* 9803ae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9803b1: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 9803b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9803b5: mov ebx, eax */
  ebx = eax;
/* 9803b7: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9803ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9803bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9803bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9803bd: call 0x97dd40 */
  esp -= 4; W32(esp, 0x9803c2u); SPILL(); f_97dd40(); if (g_unwind) return; RELOAD();
/* 9803c2: jmp 0x98047a */
  goto L_98047a;
L_9803c7: /* 9803c7: mov edi, 0xb037ec */
  edi = 0xb037ecu;
/* 9803cc: mov esi, eax */
  esi = eax;
/* 9803ce: mov ecx, 9 */
  ecx = 0x9u;
/* 9803d3: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9803d5: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 9803d7: jne 0x980400 */
  if (!zf) goto L_980400;
L_9803d9: /* 9803d9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
L_9803db: /* 9803db: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9803df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9803e0: call 0x97da50 */
  esp -= 4; W32(esp, 0x9803e5u); SPILL(); f_97da50(); if (g_unwind) return; RELOAD();
/* 9803e5: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 9803e8: mov ebx, eax */
  ebx = eax;
/* 9803ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9803eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9803ec: call 0x97dd30 */
  esp -= 4; W32(esp, 0x9803f1u); SPILL(); f_97dd30(); if (g_unwind) return; RELOAD();
/* 9803f1: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 9803f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9803f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9803f6: call 0x97dd60 */
  esp -= 4; W32(esp, 0x9803fbu); SPILL(); f_97dd60(); if (g_unwind) return; RELOAD();
/* 9803fb: jmp 0x98047a */
  goto L_98047a;
L_980400: /* 980400: mov edi, 0xb037e4 */
  edi = 0xb037e4u;
/* 980405: mov esi, eax */
  esi = eax;
/* 980407: mov ecx, 6 */
  ecx = 0x6u;
/* 98040c: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 98040e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980410: jne 0x980416 */
  if (!zf) goto L_980416;
L_980412: /* 980412: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 980414: jmp 0x9803db */
  goto L_9803db;
L_980416: /* 980416: mov edi, 0xb037dc */
  edi = 0xb037dcu;
/* 98041b: mov esi, eax */
  esi = eax;
/* 98041d: mov ecx, 6 */
  ecx = 0x6u;
/* 980422: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 980424: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980426: jne 0x980438 */
  if (!zf) goto L_980438;
L_980428: /* 980428: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98042c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 98042e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98042f: call 0x97da50 */
  esp -= 4; W32(esp, 0x980434u); SPILL(); f_97da50(); if (g_unwind) return; RELOAD();
/* 980434: mov ebx, eax */
  ebx = eax;
/* 980436: jmp 0x98047a */
  goto L_98047a;
L_980438: /* 980438: mov edi, 0xb037d4 */
  edi = 0xb037d4u;
/* 98043d: mov esi, eax */
  esi = eax;
/* 98043f: mov ecx, 7 */
  ecx = 0x7u;
/* 980444: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 980446: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980448: jne 0x980488 */
  if (!zf) goto L_980488;
L_98044a: /* 98044a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98044e: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 980450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980451: call 0x97da50 */
  esp -= 4; W32(esp, 0x980456u); SPILL(); f_97da50(); if (g_unwind) return; RELOAD();
/* 980456: mov ebx, eax */
  ebx = eax;
/* 980458: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 98045b: xor esi, esi */
  esi = 0;
/* 98045d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98045f: jle 0x98047a */
  if ((zf || sf != of)) goto L_98047a;
L_980461: /* 980461: xor edi, edi */
  edi = 0;
L_980463: /* 980463: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 980466: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 980468: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980469: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98046a: call 0x97dd70 */
  esp -= 4; W32(esp, 0x98046fu); SPILL(); f_97dd70(); if (g_unwind) return; RELOAD();
/* 98046f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 980472: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 980473: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 980476: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 980478: jl 0x980463 */
  if ((sf != of)) goto L_980463;
L_98047a: /* 98047a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98047c: je 0x980488 */
  if (zf) goto L_980488;
L_98047e: /* 98047e: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 980481: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 980482: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980483: call 0x97de10 */
  esp -= 4; W32(esp, 0x980488u); SPILL(); f_97de10(); if (g_unwind) return; RELOAD();
L_980488: /* 980488: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980489: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98048a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98048b: mov eax, ebx */
  eax = ebx;
/* 98048d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98048e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9804a0(void) {
  LOAD_REGS();
L_9804a0: /* 9804a0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9804a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9804a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9804a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9804a6: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9804aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9804ab: push 0xb037c0 */
  { uint32_t v = 0xb037c0u; esp -= 4; W32(esp, v); }
/* 9804b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9804b1: mov ebx, 1 */
  ebx = 0x1u;
/* 9804b6: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 9804be: call 0x982640 */
  esp -= 4; W32(esp, 0x9804c3u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9804c3: push 0xb03844 */
  { uint32_t v = 0xb03844u; esp -= 4; W32(esp, v); }
/* 9804c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9804c9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 9804cd: call 0x982640 */
  esp -= 4; W32(esp, 0x9804d2u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9804d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9804d4: je 0x9804e5 */
  if (zf) goto L_9804e5;
L_9804d6: /* 9804d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9804d7: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 9804db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9804dc: call 0x97c330 */
  esp -= 4; W32(esp, 0x9804e1u); SPILL(); f_97c330(); if (g_unwind) return; RELOAD();
/* 9804e1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_9804e5: /* 9804e5: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 9804e8: push 0xb03804 */
  { uint32_t v = 0xb03804u; esp -= 4; W32(esp, v); }
/* 9804ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9804ee: call 0x982640 */
  esp -= 4; W32(esp, 0x9804f3u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9804f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9804f5: je 0x980538 */
  if (zf) goto L_980538;
L_9804f7: /* 9804f7: mov edi, 0xb03834 */
  edi = 0xb03834u;
/* 9804fc: mov esi, eax */
  esi = eax;
/* 9804fe: mov ecx, 0xe */
  ecx = 0xeu;
/* 980503: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 980505: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980507: jne 0x980510 */
  if (!zf) goto L_980510;
L_980509: /* 980509: mov ebx, 1 */
  ebx = 0x1u;
/* 98050e: jmp 0x98055c */
  goto L_98055c;
L_980510: /* 980510: mov edi, 0xb03824 */
  edi = 0xb03824u;
/* 980515: mov esi, eax */
  esi = eax;
/* 980517: mov ecx, 0xe */
  ecx = 0xeu;
/* 98051c: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 98051e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980520: je 0x980557 */
  if (zf) goto L_980557;
L_980522: /* 980522: mov esi, eax */
  esi = eax;
/* 980524: mov edi, 0xb0380c */
  edi = 0xb0380cu;
/* 980529: mov ecx, 0x16 */
  ecx = 0x16u;
/* 98052e: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 980530: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980532: jne 0x98055c */
  if (!zf) goto L_98055c;
L_980534: /* 980534: xor ebx, ebx */
  ebx = 0;
/* 980536: jmp 0x98055c */
  goto L_98055c;
L_980538: /* 980538: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98053c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98053e: je 0x980548 */
  if (zf) goto L_980548;
L_980540: /* 980540: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980542: je 0x980557 */
  if (zf) goto L_980557;
L_980544: /* 980544: xor ebx, ebx */
  ebx = 0;
/* 980546: jmp 0x98055c */
  goto L_98055c;
L_980548: /* 980548: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98054a: je 0x980620 */
  if (zf) goto L_980620;
L_980550: /* 980550: mov ebx, 1 */
  ebx = 0x1u;
/* 980555: jmp 0x98055c */
  goto L_98055c;
L_980557: /* 980557: mov ebx, 2 */
  ebx = 0x2u;
L_98055c: /* 98055c: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 980560: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980561: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980562: call 0x979cf0 */
  esp -= 4; W32(esp, 0x980567u); SPILL(); f_979cf0(); if (g_unwind) return; RELOAD();
/* 980567: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980569: mov edi, eax */
  edi = eax;
/* 98056b: je 0x980603 */
  if (zf) goto L_980603;
L_980571: /* 980571: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 980574: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 980577: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980578: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980579: call 0x97a0f0 */
  esp -= 4; W32(esp, 0x98057eu); SPILL(); f_97a0f0(); if (g_unwind) return; RELOAD();
/* 98057e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 980581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980582: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980583: call 0x97a110 */
  esp -= 4; W32(esp, 0x980588u); SPILL(); f_97a110(); if (g_unwind) return; RELOAD();
/* 980588: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 98058b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98058c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98058d: call 0x97a120 */
  esp -= 4; W32(esp, 0x980592u); SPILL(); f_97a120(); if (g_unwind) return; RELOAD();
/* 980592: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 980595: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 980598: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 98059c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 98059f: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9805a3: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 9805a6: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 9805a9: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 9805ad: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9805b1: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9805b5: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9805b9: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 9805bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9805bd: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 9805c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9805c2: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 9805c6: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9805ca: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 9805ce: call 0x97a130 */
  esp -= 4; W32(esp, 0x9805d3u); SPILL(); f_97a130(); if (g_unwind) return; RELOAD();
/* 9805d3: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9805d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9805d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9805d8: call 0x97a160 */
  esp -= 4; W32(esp, 0x9805ddu); SPILL(); f_97a160(); if (g_unwind) return; RELOAD();
/* 9805dd: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 9805e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9805e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9805e2: call 0x97a170 */
  esp -= 4; W32(esp, 0x9805e7u); SPILL(); f_97a170(); if (g_unwind) return; RELOAD();
/* 9805e7: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 9805ea: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9805ed: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 9805f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9805f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9805f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9805f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9805f4: call 0x97a180 */
  esp -= 4; W32(esp, 0x9805f9u); SPILL(); f_97a180(); if (g_unwind) return; RELOAD();
/* 9805f9: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 9805fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9805fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9805fe: call 0x97a1a0 */
  esp -= 4; W32(esp, 0x980603u); SPILL(); f_97a1a0(); if (g_unwind) return; RELOAD();
L_980603: /* 980603: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 980607: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980609: je 0x980612 */
  if (zf) goto L_980612;
L_98060b: /* 98060b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98060c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98060d: call 0x97a0c0 */
  esp -= 4; W32(esp, 0x980612u); SPILL(); f_97a0c0(); if (g_unwind) return; RELOAD();
L_980612: /* 980612: mov eax, edi */
  eax = edi;
/* 980614: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980616: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 980617: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980618: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98061b: ret 8 */
  esp += 12; SPILL(); return;
L_980620: /* 980620: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980621: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980622: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 980623: xor eax, eax */
  eax = 0;
/* 980625: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980626: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980629: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98061e(void) {
  LOAD_REGS();
L_98061e: /* 98061e: mov edi, edi */
  edi = edi;
/* 980620: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980621: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980622: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 980623: xor eax, eax */
  eax = 0;
/* 980625: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980626: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980629: ret 8 */
  esp += 12; SPILL(); return;
}

void f_980630(void) {
  LOAD_REGS();
L_980630: /* 980630: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 980633: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980634: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980635: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 980639: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98063a: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 98063d: push 0xb037c0 */
  { uint32_t v = 0xb037c0u; esp -= 4; W32(esp, v); }
/* 980642: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980643: call 0x982640 */
  esp -= 4; W32(esp, 0x980648u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980648: push 0xb03858 */
  { uint32_t v = 0xb03858u; esp -= 4; W32(esp, v); }
/* 98064d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98064e: mov ebx, eax */
  ebx = eax;
/* 980650: call 0x982640 */
  esp -= 4; W32(esp, 0x980655u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980655: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980656: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98065a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98065b: call 0x97c350 */
  esp -= 4; W32(esp, 0x980660u); SPILL(); f_97c350(); if (g_unwind) return; RELOAD();
/* 980660: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980662: jne 0x98066d */
  if (!zf) goto L_98066d;
L_980664: /* 980664: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980665: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980666: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980667: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98066a: ret 8 */
  esp += 12; SPILL(); return;
L_98066d: /* 98066d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98066e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98066f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980670: call 0x97a2a0 */
  esp -= 4; W32(esp, 0x980675u); SPILL(); f_97a2a0(); if (g_unwind) return; RELOAD();
/* 980675: push 0xb037a8 */
  { uint32_t v = 0xb037a8u; esp -= 4; W32(esp, v); }
/* 98067a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98067b: mov edi, eax */
  edi = eax;
/* 98067d: call 0x982640 */
  esp -= 4; W32(esp, 0x980682u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980682: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980684: je 0x98068d */
  if (zf) goto L_98068d;
L_980686: /* 980686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980687: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980688: call 0x97a720 */
  esp -= 4; W32(esp, 0x98068du); SPILL(); f_97a720(); if (g_unwind) return; RELOAD();
L_98068d: /* 98068d: push 0xb037a0 */
  { uint32_t v = 0xb037a0u; esp -= 4; W32(esp, v); }
/* 980692: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980693: call 0x982640 */
  esp -= 4; W32(esp, 0x980698u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980698: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98069a: je 0x9806b7 */
  if (zf) goto L_9806b7;
L_98069c: /* 98069c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98069e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98069f: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x9806a5u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 9806a5: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9806a9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9806ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9806b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9806b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9806b2: call 0x97a730 */
  esp -= 4; W32(esp, 0x9806b7u); SPILL(); f_97a730(); if (g_unwind) return; RELOAD();
L_9806b7: /* 9806b7: push 0xb03850 */
  { uint32_t v = 0xb03850u; esp -= 4; W32(esp, v); }
/* 9806bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9806bd: call 0x982640 */
  esp -= 4; W32(esp, 0x9806c2u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9806c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9806c4: je 0x9806cd */
  if (zf) goto L_9806cd;
L_9806c6: /* 9806c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9806c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9806c8: call 0x97a870 */
  esp -= 4; W32(esp, 0x9806cdu); SPILL(); f_97a870(); if (g_unwind) return; RELOAD();
L_9806cd: /* 9806cd: push 0xb037c4 */
  { uint32_t v = 0xb037c4u; esp -= 4; W32(esp, v); }
/* 9806d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9806d3: call 0x982640 */
  esp -= 4; W32(esp, 0x9806d8u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9806d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9806da: je 0x98073a */
  if (zf) goto L_98073a;
L_9806dc: /* 9806dc: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9806e0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 9806e2: xor esi, esi */
  esi = 0;
/* 9806e4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9806e6: je 0x980725 */
  if (zf) goto L_980725;
L_9806e8: /* 9806e8: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9806eb: jge 0x980725 */
  if ((sf == of)) goto L_980725;
L_9806ed: /* 9806ed: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9806f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9806f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9806f3: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x9806f9u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 9806f9: fstp dword ptr [esp + esi*4 + 0x14] */
  WF32((uint32_t)(esp + esi*4 + 0x14u), ST0); FPOP();
/* 9806fd: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 980701: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 980705: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980708: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 980709: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98070b: je 0x980720 */
  if (zf) goto L_980720;
L_98070d: /* 98070d: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 980711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980713: call 0x9828f0 */
  esp -= 4; W32(esp, 0x980718u); SPILL(); f_9828f0(); if (g_unwind) return; RELOAD();
/* 980718: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98071c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_980720: /* 980720: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 980723: jne 0x9806e8 */
  if (!zf) goto L_9806e8;
L_980725: /* 980725: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 980729: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98072d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 980731: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980732: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980734: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980735: call 0x97a790 */
  esp -= 4; W32(esp, 0x98073au); SPILL(); f_97a790(); if (g_unwind) return; RELOAD();
L_98073a: /* 98073a: mov eax, edi */
  eax = edi;
/* 98073c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98073d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98073e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98073f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980742: ret 8 */
  esp += 12; SPILL(); return;
}

void f_980750(void) {
  LOAD_REGS();
L_980750: /* 980750: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 980753: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980754: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 980755: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980756: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980757: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98075b: mov ebp, dword ptr [edi + 8] */
  ebp = R32((uint32_t)(edi + 0x8u));
/* 98075e: push 0xb037c0 */
  { uint32_t v = 0xb037c0u; esp -= 4; W32(esp, v); }
/* 980763: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980764: xor ebx, ebx */
  ebx = 0;
/* 980766: call 0x982640 */
  esp -= 4; W32(esp, 0x98076bu); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 98076b: push 0xb03804 */
  { uint32_t v = 0xb03804u; esp -= 4; W32(esp, v); }
/* 980770: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980771: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 980775: call 0x982640 */
  esp -= 4; W32(esp, 0x98077au); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 98077a: mov esi, eax */
  esi = eax;
/* 98077c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98077e: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 980782: jne 0x98078e */
  if (!zf) goto L_98078e;
L_980784: /* 980784: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980785: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980786: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 980787: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980788: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98078b: ret 8 */
  esp += 12; SPILL(); return;
L_98078e: /* 98078e: push 0xb037b8 */
  { uint32_t v = 0xb037b8u; esp -= 4; W32(esp, v); }
/* 980793: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980794: call 0x982640 */
  esp -= 4; W32(esp, 0x980799u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980799: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98079b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98079f: jne 0x9807ab */
  if (!zf) goto L_9807ab;
L_9807a1: /* 9807a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9807a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9807a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9807a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9807a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9807a8: ret 8 */
  esp += 12; SPILL(); return;
L_9807ab: /* 9807ab: mov edi, 0xb038c0 */
  edi = 0xb038c0u;
/* 9807b0: mov ecx, 0xe */
  ecx = 0xeu;
/* 9807b5: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9807b7: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 9807b9: jne 0x9807ce */
  if (!zf) goto L_9807ce;
L_9807bb: /* 9807bb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9807bf: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9807c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9807c2: call 0x97a950 */
  esp -= 4; W32(esp, 0x9807c7u); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 9807c7: mov ebx, eax */
  ebx = eax;
/* 9807c9: jmp 0x980bab */
  goto L_980bab;
L_9807ce: /* 9807ce: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9807d2: mov edi, 0xb038b8 */
  edi = 0xb038b8u;
/* 9807d7: mov esi, eax */
  esi = eax;
/* 9807d9: mov ecx, 6 */
  ecx = 0x6u;
/* 9807de: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9807e0: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 9807e2: jne 0x9807eb */
  if (!zf) goto L_9807eb;
L_9807e4: /* 9807e4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 9807e6: jmp 0x98098d */
  goto L_98098d;
L_9807eb: /* 9807eb: mov edi, 0xb038ac */
  edi = 0xb038acu;
/* 9807f0: mov esi, eax */
  esi = eax;
/* 9807f2: mov ecx, 9 */
  ecx = 0x9u;
/* 9807f7: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9807f9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 9807fb: jne 0x9808a4 */
  if (!zf) goto L_9808a4;
L_980801: /* 980801: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 980805: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 980807: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980808: call 0x97a950 */
  esp -= 4; W32(esp, 0x98080du); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 98080d: mov ecx, dword ptr [ebp + 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xa4u));
/* 980813: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980814: mov ebx, eax */
  ebx = eax;
/* 980816: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 980818: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980819: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98081eu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98081e: mov edx, dword ptr [ebp + 0x8c] */
  edx = R32((uint32_t)(ebp + 0x8cu));
/* 980824: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980825: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 980827: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980828: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98082du); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98082d: mov eax, dword ptr [ebp + 0xa8] */
  eax = R32((uint32_t)(ebp + 0xa8u));
/* 980833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980834: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 980836: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980837: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98083cu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98083c: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* 980842: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980843: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 980845: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980846: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98084bu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98084b: mov edx, dword ptr [ebp + 0xb8] */
  edx = R32((uint32_t)(ebp + 0xb8u));
/* 980851: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980852: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 980854: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980855: call 0x97b780 */
  esp -= 4; W32(esp, 0x98085au); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 98085a: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 98085d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98085e: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 980860: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980861: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980866u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980866: mov ecx, dword ptr [ebp + 0x48] */
  ecx = R32((uint32_t)(ebp + 0x48u));
/* 980869: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98086a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98086c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98086d: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980872u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980872: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 980875: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980876: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 980878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980879: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98087eu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98087e: mov eax, dword ptr [ebp + 0xac] */
  eax = R32((uint32_t)(ebp + 0xacu));
/* 980884: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980885: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* 980887: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980888: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98088du); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98088d: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 980890: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980891: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 980893: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980894: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980899u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980899: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 98089c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98089d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98089f: jmp 0x980ba5 */
  goto L_980ba5;
L_9808a4: /* 9808a4: mov edi, 0xb038a0 */
  edi = 0xb038a0u;
/* 9808a9: mov esi, eax */
  esi = eax;
/* 9808ab: mov ecx, 0xa */
  ecx = 0xau;
/* 9808b0: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9808b2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 9808b4: jne 0x9808db */
  if (!zf) goto L_9808db;
L_9808b6: /* 9808b6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9808ba: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9808bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9808bd: call 0x97a950 */
  esp -= 4; W32(esp, 0x9808c2u); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 9808c2: mov ecx, dword ptr [ebp + 0x48] */
  ecx = R32((uint32_t)(ebp + 0x48u));
/* 9808c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9808c6: mov ebx, eax */
  ebx = eax;
/* 9808c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9808ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9808cb: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x9808d0u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 9808d0: mov edx, dword ptr [ebp + 0x54] */
  edx = R32((uint32_t)(ebp + 0x54u));
/* 9808d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9808d4: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9808d6: jmp 0x980ba5 */
  goto L_980ba5;
L_9808db: /* 9808db: mov edi, 0xb03894 */
  edi = 0xb03894u;
/* 9808e0: mov esi, eax */
  esi = eax;
/* 9808e2: mov ecx, 0xa */
  ecx = 0xau;
/* 9808e7: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9808e9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 9808eb: jne 0x980900 */
  if (!zf) goto L_980900;
L_9808ed: /* 9808ed: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9808f1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9808f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9808f4: call 0x97a950 */
  esp -= 4; W32(esp, 0x9808f9u); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 9808f9: mov ebx, eax */
  ebx = eax;
/* 9808fb: jmp 0x980bab */
  goto L_980bab;
L_980900: /* 980900: mov edi, 0xb0388c */
  edi = 0xb0388cu;
/* 980905: mov esi, eax */
  esi = eax;
/* 980907: mov ecx, 5 */
  ecx = 0x5u;
/* 98090c: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 98090e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980910: jne 0x980979 */
  if (!zf) goto L_980979;
L_980912: /* 980912: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 980916: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 980918: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980919: call 0x97a950 */
  esp -= 4; W32(esp, 0x98091eu); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 98091e: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 980924: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980925: mov ebx, eax */
  ebx = eax;
/* 980927: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 980929: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98092a: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98092fu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98092f: mov edx, dword ptr [ebp + 0x90] */
  edx = R32((uint32_t)(ebp + 0x90u));
/* 980935: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980936: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 980938: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980939: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98093eu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98093e: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* 980944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980945: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 980947: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980948: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98094du); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98094d: mov ecx, dword ptr [ebp + 0x98] */
  ecx = R32((uint32_t)(ebp + 0x98u));
/* 980953: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980954: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 980956: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980957: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98095cu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98095c: mov edx, dword ptr [ebp + 0x9c] */
  edx = R32((uint32_t)(ebp + 0x9cu));
/* 980962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980963: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 980965: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980966: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x98096bu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 98096b: mov eax, dword ptr [ebp + 0xa0] */
  eax = R32((uint32_t)(ebp + 0xa0u));
/* 980971: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980972: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 980974: jmp 0x980ba5 */
  goto L_980ba5;
L_980979: /* 980979: mov edi, 0xb03880 */
  edi = 0xb03880u;
/* 98097e: mov esi, eax */
  esi = eax;
/* 980980: mov ecx, 0xa */
  ecx = 0xau;
/* 980985: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 980987: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980989: jne 0x980a04 */
  if (!zf) goto L_980a04;
L_98098b: /* 98098b: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
L_98098d: /* 98098d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 980991: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980992: call 0x97a950 */
  esp -= 4; W32(esp, 0x980997u); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 980997: mov ecx, dword ptr [ebp + 0x48] */
  ecx = R32((uint32_t)(ebp + 0x48u));
/* 98099a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98099b: mov ebx, eax */
  ebx = eax;
/* 98099d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98099f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9809a0: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x9809a5u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 9809a5: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 9809a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9809a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9809ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9809ac: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x9809b1u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 9809b1: mov eax, dword ptr [ebp + 0x54] */
  eax = R32((uint32_t)(ebp + 0x54u));
/* 9809b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9809b5: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9809b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9809b8: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x9809bdu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 9809bd: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* 9809c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9809c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9809c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9809c4: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x9809c9u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 9809c9: mov edx, dword ptr [ebp + 0x84] */
  edx = R32((uint32_t)(ebp + 0x84u));
/* 9809cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9809d0: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 9809d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9809d3: call 0x97b780 */
  esp -= 4; W32(esp, 0x9809d8u); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 9809d8: mov eax, dword ptr [ebp + 0x88] */
  eax = R32((uint32_t)(ebp + 0x88u));
/* 9809de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9809df: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9809e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9809e2: call 0x97b780 */
  esp -= 4; W32(esp, 0x9809e7u); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 9809e7: mov ecx, dword ptr [ebp + 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xa4u));
/* 9809ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9809ee: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 9809f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9809f1: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x9809f6u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 9809f6: mov edx, dword ptr [ebp + 0x8c] */
  edx = R32((uint32_t)(ebp + 0x8cu));
/* 9809fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9809fd: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 9809ff: jmp 0x980ba5 */
  goto L_980ba5;
L_980a04: /* 980a04: mov edi, 0xb03874 */
  edi = 0xb03874u;
/* 980a09: mov esi, eax */
  esi = eax;
/* 980a0b: mov ecx, 9 */
  ecx = 0x9u;
/* 980a10: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 980a12: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980a14: jne 0x980aae */
  if (!zf) goto L_980aae;
L_980a1a: /* 980a1a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 980a1e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 980a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980a21: call 0x97a950 */
  esp -= 4; W32(esp, 0x980a26u); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 980a26: mov ecx, dword ptr [ebp + 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xb0u));
/* 980a2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980a2d: mov ebx, eax */
  ebx = eax;
/* 980a2f: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 980a31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a32: call 0x97b740 */
  esp -= 4; W32(esp, 0x980a37u); SPILL(); f_97b740(); if (g_unwind) return; RELOAD();
/* 980a37: mov edx, dword ptr [ebp + 0x48] */
  edx = R32((uint32_t)(ebp + 0x48u));
/* 980a3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980a3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 980a3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a3e: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980a43u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980a43: mov eax, dword ptr [ebp + 0x4c] */
  eax = R32((uint32_t)(ebp + 0x4cu));
/* 980a46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980a47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 980a49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a4a: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980a4fu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980a4f: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 980a52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980a53: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 980a55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a56: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980a5bu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980a5b: mov edx, dword ptr [ebp + 0x6c] */
  edx = R32((uint32_t)(ebp + 0x6cu));
/* 980a5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980a5f: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 980a61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a62: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980a67u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980a67: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 980a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980a6e: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* 980a70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a71: call 0x97b740 */
  esp -= 4; W32(esp, 0x980a76u); SPILL(); f_97b740(); if (g_unwind) return; RELOAD();
/* 980a76: mov ecx, dword ptr [ebp + 0x50] */
  ecx = R32((uint32_t)(ebp + 0x50u));
/* 980a79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980a7a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 980a7c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a7d: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980a82u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980a82: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 980a85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980a86: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 980a88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a89: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980a8eu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980a8e: mov eax, dword ptr [ebp + 0x70] */
  eax = R32((uint32_t)(ebp + 0x70u));
/* 980a91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980a92: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 980a94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980a95: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980a9au); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980a9a: mov ecx, dword ptr [ebp + 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xb8u));
/* 980aa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980aa1: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 980aa3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980aa4: call 0x97b780 */
  esp -= 4; W32(esp, 0x980aa9u); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 980aa9: jmp 0x980bab */
  goto L_980bab;
L_980aae: /* 980aae: mov edi, 0xb03868 */
  edi = 0xb03868u;
/* 980ab3: mov esi, eax */
  esi = eax;
/* 980ab5: mov ecx, 9 */
  ecx = 0x9u;
/* 980aba: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 980abc: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980abe: jne 0x980af4 */
  if (!zf) goto L_980af4;
L_980ac0: /* 980ac0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 980ac4: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 980ac6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980ac7: call 0x97a950 */
  esp -= 4; W32(esp, 0x980accu); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 980acc: mov ecx, dword ptr [ebp + 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xb8u));
/* 980ad2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980ad3: mov ebx, eax */
  ebx = eax;
/* 980ad5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 980ad7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980ad8: call 0x97b780 */
  esp -= 4; W32(esp, 0x980addu); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 980add: mov edx, dword ptr [ebp + 0x54] */
  edx = R32((uint32_t)(ebp + 0x54u));
/* 980ae0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980ae1: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 980ae3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980ae4: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980ae9u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980ae9: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 980aec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980aed: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 980aef: jmp 0x980ba5 */
  goto L_980ba5;
L_980af4: /* 980af4: mov edi, 0xb03860 */
  edi = 0xb03860u;
/* 980af9: mov esi, eax */
  esi = eax;
/* 980afb: mov ecx, 8 */
  ecx = 0x8u;
/* 980b00: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 980b02: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 980b04: jne 0x980c21 */
  if (!zf) goto L_980c21;
L_980b0a: /* 980b0a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 980b0e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 980b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980b11: call 0x97a950 */
  esp -= 4; W32(esp, 0x980b16u); SPILL(); f_97a950(); if (g_unwind) return; RELOAD();
/* 980b16: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 980b19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980b1a: mov ebx, eax */
  ebx = eax;
/* 980b1c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 980b1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b1f: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b24u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b24: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 980b27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980b28: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 980b2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b2b: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b30u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b30: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 980b33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980b34: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 980b36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b37: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b3cu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b3c: mov ecx, dword ptr [ebp + 0x60] */
  ecx = R32((uint32_t)(ebp + 0x60u));
/* 980b3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980b40: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 980b42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b43: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b48u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b48: mov edx, dword ptr [ebp + 0x64] */
  edx = R32((uint32_t)(ebp + 0x64u));
/* 980b4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980b4c: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 980b4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b4f: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b54u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b54: mov eax, dword ptr [ebp + 0x68] */
  eax = R32((uint32_t)(ebp + 0x68u));
/* 980b57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980b58: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 980b5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b5b: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b60u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b60: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 980b63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980b64: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 980b66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b67: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b6cu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b6c: mov edx, dword ptr [ebp + 0x70] */
  edx = R32((uint32_t)(ebp + 0x70u));
/* 980b6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980b70: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 980b72: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b73: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b78u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b78: mov eax, dword ptr [ebp + 0x74] */
  eax = R32((uint32_t)(ebp + 0x74u));
/* 980b7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980b7c: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 980b7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b7f: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b84u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b84: mov ecx, dword ptr [ebp + 0x78] */
  ecx = R32((uint32_t)(ebp + 0x78u));
/* 980b87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980b88: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 980b8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b8b: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b90u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b90: mov edx, dword ptr [ebp + 0x7c] */
  edx = R32((uint32_t)(ebp + 0x7cu));
/* 980b93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980b94: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 980b96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980b97: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980b9cu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 980b9c: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 980ba2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980ba3: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
L_980ba5: /* 980ba5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980ba6: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x980babu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
L_980bab: /* 980bab: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980bad: je 0x980c21 */
  if (zf) goto L_980c21;
L_980baf: /* 980baf: xor esi, esi */
  esi = 0;
/* 980bb1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_980bb4: /* 980bb4: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 980bb7: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 980bba: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 980bbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980bbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980bc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980bc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980bc2: call 0x97b650 */
  esp -= 4; W32(esp, 0x980bc7u); SPILL(); f_97b650(); if (g_unwind) return; RELOAD();
/* 980bc7: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 980bca: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 980bcd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 980bd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980bd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980bd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980bd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980bd4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980bd5: call 0x97b680 */
  esp -= 4; W32(esp, 0x980bdau); SPILL(); f_97b680(); if (g_unwind) return; RELOAD();
/* 980bda: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 980bdd: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 980be0: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 980be3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980be4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980be5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980be6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980be7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980be8: call 0x97b6b0 */
  esp -= 4; W32(esp, 0x980bedu); SPILL(); f_97b6b0(); if (g_unwind) return; RELOAD();
/* 980bed: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 980bee: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 980bf1: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 980bf4: jl 0x980bb4 */
  if ((sf != of)) goto L_980bb4;
L_980bf6: /* 980bf6: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 980bfa: push 0xb037b0 */
  { uint32_t v = 0xb037b0u; esp -= 4; W32(esp, v); }
/* 980bff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980c00: call 0x982640 */
  esp -= 4; W32(esp, 0x980c05u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 980c05: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 980c09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 980c0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980c0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980c0d: mov esi, eax */
  esi = eax;
/* 980c0f: call 0x97b620 */
  esp -= 4; W32(esp, 0x980c14u); SPILL(); f_97b620(); if (g_unwind) return; RELOAD();
/* 980c14: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 980c16: je 0x980c21 */
  if (zf) goto L_980c21;
L_980c18: /* 980c18: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 980c1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980c1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980c1c: call 0x97b620 */
  esp -= 4; W32(esp, 0x980c21u); SPILL(); f_97b620(); if (g_unwind) return; RELOAD();
L_980c21: /* 980c21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980c22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980c23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 980c24: mov eax, ebx */
  eax = ebx;
/* 980c26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980c27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980c2a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_980c30(void) {
  LOAD_REGS();
L_980c30: /* 980c30: sub esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 980c36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980c37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980c38: xor esi, esi */
  esi = 0;
/* 980c3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980c3b: xor eax, eax */
  eax = 0;
/* 980c3d: mov dword ptr [esp + 0xc], 0xb038f8 */
  W32((uint32_t)(esp + 0xcu), 0xb038f8u);
/* 980c45: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 980c49: mov dword ptr [esp + 0x14], 0x980da0 */
  W32((uint32_t)(esp + 0x14u), 0x980da0u);
/* 980c51: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 980c55: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 980c59: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 980c5d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 980c61: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 980c65: mov dword ptr [esp + 0x2c], 0xb038f0 */
  W32((uint32_t)(esp + 0x2cu), 0xb038f0u);
/* 980c6d: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 980c71: mov dword ptr [esp + 0x34], 0x981040 */
  W32((uint32_t)(esp + 0x34u), 0x981040u);
/* 980c79: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 980c7d: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 980c81: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 980c85: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 980c89: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 980c8d: mov dword ptr [esp + 0x4c], 0xb038e8 */
  W32((uint32_t)(esp + 0x4cu), 0xb038e8u);
/* 980c95: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 980c99: mov dword ptr [esp + 0x54], 0x981340 */
  W32((uint32_t)(esp + 0x54u), 0x981340u);
/* 980ca1: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 980ca5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 980ca9: mov dword ptr [esp + 0x60], esi */
  W32((uint32_t)(esp + 0x60u), esi);
/* 980cad: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 980cb1: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 980cb5: mov dword ptr [esp + 0x6c], 0xb038e0 */
  W32((uint32_t)(esp + 0x6cu), 0xb038e0u);
/* 980cbd: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
/* 980cc1: mov dword ptr [esp + 0x74], 0x9821a0 */
  W32((uint32_t)(esp + 0x74u), 0x9821a0u);
/* 980cc9: mov dword ptr [esp + 0x78], esi */
  W32((uint32_t)(esp + 0x78u), esi);
/* 980ccd: mov dword ptr [esp + 0x7c], esi */
  W32((uint32_t)(esp + 0x7cu), esi);
/* 980cd1: mov dword ptr [esp + 0x80], esi */
  W32((uint32_t)(esp + 0x80u), esi);
/* 980cd8: mov dword ptr [esp + 0x84], esi */
  W32((uint32_t)(esp + 0x84u), esi);
/* 980cdf: mov dword ptr [esp + 0x88], esi */
  W32((uint32_t)(esp + 0x88u), esi);
/* 980ce6: mov dword ptr [esp + 0x8c], 0xb038d0 */
  W32((uint32_t)(esp + 0x8cu), 0xb038d0u);
/* 980cf1: mov dword ptr [esp + 0x90], esi */
  W32((uint32_t)(esp + 0x90u), esi);
/* 980cf8: mov dword ptr [esp + 0x94], 0x982240 */
  W32((uint32_t)(esp + 0x94u), 0x982240u);
/* 980d03: mov dword ptr [esp + 0x98], esi */
  W32((uint32_t)(esp + 0x98u), esi);
/* 980d0a: mov dword ptr [esp + 0x9c], esi */
  W32((uint32_t)(esp + 0x9cu), esi);
/* 980d11: mov dword ptr [esp + 0xa0], esi */
  W32((uint32_t)(esp + 0xa0u), esi);
/* 980d18: mov dword ptr [esp + 0xa4], esi */
  W32((uint32_t)(esp + 0xa4u), esi);
/* 980d1f: mov dword ptr [esp + 0xa8], esi */
  W32((uint32_t)(esp + 0xa8u), esi);
/* 980d26: mov dword ptr [esp + 0xac], esi */
  W32((uint32_t)(esp + 0xacu), esi);
/* 980d2d: mov dword ptr [esp + 0xb0], 2 */
  W32((uint32_t)(esp + 0xb0u), 0x2u);
/* 980d38: mov ecx, 6 */
  ecx = 0x6u;
/* 980d3d: lea edi, [esp + 0xb4] */
  edi = (uint32_t)(esp + 0xb4u);
/* 980d44: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 980d46: mov edi, dword ptr [esp + 0xd0] */
  edi = R32((uint32_t)(esp + 0xd0u));
/* 980d4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980d4e: call 0x983f80 */
  esp -= 4; W32(esp, 0x980d53u); SPILL(); f_983f80(); if (g_unwind) return; RELOAD();
/* 980d53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980d54: call 0x983ed0 */
  esp -= 4; W32(esp, 0x980d59u); SPILL(); f_983ed0(); if (g_unwind) return; RELOAD();
/* 980d59: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 980d5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980d61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980d62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980d63: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 980d65: call 0x982310 */
  esp -= 4; W32(esp, 0x980d6au); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 980d6a: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 980d71: mov ebx, eax */
  ebx = eax;
/* 980d73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980d74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980d75: call 0x9825b0 */
  esp -= 4; W32(esp, 0x980d7au); SPILL(); f_9825b0(); if (g_unwind) return; RELOAD();
/* 980d7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980d7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980d7c: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 980d80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980d81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980d82: call 0x983940 */
  esp -= 4; W32(esp, 0x980d87u); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 980d87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980d88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980d89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980d8a: add esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980d90: ret 8 */
  esp += 12; SPILL(); return;
}

void f_980da0(void) {
  LOAD_REGS();
L_980da0: /* 980da0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 980da3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980da4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980da5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980da6: xor esi, esi */
  esi = 0;
/* 980da8: xor eax, eax */
  eax = 0;
/* 980daa: mov dword ptr [esp + 0xc], 0xb03904 */
  W32((uint32_t)(esp + 0xcu), 0xb03904u);
/* 980db2: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 980db6: mov dword ptr [esp + 0x14], 0x980e30 */
  W32((uint32_t)(esp + 0x14u), 0x980e30u);
/* 980dbe: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 980dc2: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 980dc6: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 980dca: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 980dce: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 980dd2: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 980dd6: mov dword ptr [esp + 0x30], 2 */
  W32((uint32_t)(esp + 0x30u), 0x2u);
/* 980dde: mov ecx, 6 */
  ecx = 0x6u;
/* 980de3: lea edi, [esp + 0x34] */
  edi = (uint32_t)(esp + 0x34u);
/* 980de7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 980de9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 980ded: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 980df3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980df4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980df6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980df7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 980df9: call 0x982310 */
  esp -= 4; W32(esp, 0x980dfeu); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 980dfe: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 980e02: mov ebx, eax */
  ebx = eax;
/* 980e04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980e05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980e06: call 0x9825b0 */
  esp -= 4; W32(esp, 0x980e0bu); SPILL(); f_9825b0(); if (g_unwind) return; RELOAD();
/* 980e0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980e0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980e0d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 980e11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980e12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980e13: call 0x983940 */
  esp -= 4; W32(esp, 0x980e18u); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 980e18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980e19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980e1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980e1b: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980e1e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_980e30(void) {
  LOAD_REGS();
L_980e30: /* 980e30: sub esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 980e36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980e37: mov eax, 0x983090 */
  eax = 0x983090u;
/* 980e3c: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 980e40: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 980e44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980e45: xor esi, esi */
  esi = 0;
/* 980e47: mov eax, 0x9831b0 */
  eax = 0x9831b0u;
/* 980e4c: mov ebx, 1 */
  ebx = 0x1u;
/* 980e51: mov ecx, 3 */
  ecx = 0x3u;
/* 980e56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980e57: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 980e5b: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 980e5f: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 980e63: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 980e67: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 980e6e: xor eax, eax */
  eax = 0;
/* 980e70: mov dword ptr [esp + 0xc], 0xb03238 */
  W32((uint32_t)(esp + 0xcu), 0xb03238u);
/* 980e78: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 980e7c: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 980e80: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 980e84: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 980e88: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 980e8c: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 980e90: mov dword ptr [esp + 0x2c], 0xb03258 */
  W32((uint32_t)(esp + 0x2cu), 0xb03258u);
/* 980e98: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 980e9c: mov dword ptr [esp + 0x38], 4 */
  W32((uint32_t)(esp + 0x38u), 0x4u);
/* 980ea4: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 980ea8: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 980eac: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 980eb0: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 980eb4: mov dword ptr [esp + 0x4c], 0xb03250 */
  W32((uint32_t)(esp + 0x4cu), 0xb03250u);
/* 980ebc: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 980ec0: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 980ec4: mov dword ptr [esp + 0x60], esi */
  W32((uint32_t)(esp + 0x60u), esi);
/* 980ec8: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 980ecc: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 980ed0: mov dword ptr [esp + 0x6c], 0xb03260 */
  W32((uint32_t)(esp + 0x6cu), 0xb03260u);
/* 980ed8: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 980edc: mov dword ptr [esp + 0x78], 0x18 */
  W32((uint32_t)(esp + 0x78u), 0x18u);
/* 980ee4: mov dword ptr [esp + 0x80], esi */
  W32((uint32_t)(esp + 0x80u), esi);
/* 980eeb: mov dword ptr [esp + 0x84], esi */
  W32((uint32_t)(esp + 0x84u), esi);
/* 980ef2: mov dword ptr [esp + 0x88], 0x980fc0 */
  W32((uint32_t)(esp + 0x88u), 0x980fc0u);
/* 980efd: mov dword ptr [esp + 0x8c], 0xb031b8 */
  W32((uint32_t)(esp + 0x8cu), 0xb031b8u);
/* 980f08: mov dword ptr [esp + 0x90], ebx */
  W32((uint32_t)(esp + 0x90u), ebx);
/* 980f0f: mov dword ptr [esp + 0x98], 0x24 */
  W32((uint32_t)(esp + 0x98u), 0x24u);
/* 980f1a: mov dword ptr [esp + 0x9c], 0x10 */
  W32((uint32_t)(esp + 0x9cu), 0x10u);
/* 980f25: mov dword ptr [esp + 0xa0], esi */
  W32((uint32_t)(esp + 0xa0u), esi);
/* 980f2c: mov dword ptr [esp + 0xa4], esi */
  W32((uint32_t)(esp + 0xa4u), esi);
/* 980f33: mov dword ptr [esp + 0xa8], esi */
  W32((uint32_t)(esp + 0xa8u), esi);
/* 980f3a: mov dword ptr [esp + 0xac], esi */
  W32((uint32_t)(esp + 0xacu), esi);
/* 980f41: mov dword ptr [esp + 0xb0], 2 */
  W32((uint32_t)(esp + 0xb0u), 0x2u);
/* 980f4c: mov ecx, 6 */
  ecx = 0x6u;
/* 980f51: lea edi, [esp + 0xb4] */
  edi = (uint32_t)(esp + 0xb4u);
/* 980f58: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 980f5a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 980f5c: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x980f62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 980f62: mov edi, eax */
  edi = eax;
/* 980f64: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 980f66: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 980f69: mov dword ptr [edi + 0x14], ebx */
  W32((uint32_t)(edi + 0x14u), ebx);
/* 980f6c: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x980f72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 980f72: mov esi, dword ptr [esp + 0xd0] */
  esi = R32((uint32_t)(esp + 0xd0u));
/* 980f79: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 980f7c: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 980f82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 980f83: push 0x981020 */
  { uint32_t v = 0x981020u; esp -= 4; W32(esp, v); }
/* 980f88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980f89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980f8a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 980f8c: call 0x982310 */
  esp -= 4; W32(esp, 0x980f91u); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 980f91: mov ecx, dword ptr [esp + 0xd4] */
  ecx = R32((uint32_t)(esp + 0xd4u));
/* 980f98: mov ebx, eax */
  ebx = eax;
/* 980f9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 980f9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980f9c: call 0x9825b0 */
  esp -= 4; W32(esp, 0x980fa1u); SPILL(); f_9825b0(); if (g_unwind) return; RELOAD();
/* 980fa1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 980fa2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 980fa3: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 980fa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 980fa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980fa9: call 0x983940 */
  esp -= 4; W32(esp, 0x980faeu); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 980fae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 980faf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 980fb0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 980fb1: add esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 980fb7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_980fc0(void) {
  LOAD_REGS();
L_980fc0: /* 980fc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 980fc1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 980fc5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 980fc8: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 980fcb: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 980fce: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 980fd1: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 980fd4: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 980fd6: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 980fd9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 980fdc: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 980fdf: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 980fe2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 980fe5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 980fe6: mov ecx, eax */
  ecx = eax;
/* 980fe8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 980feb: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 980fee: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 980ff0: jl 0x98100b */
  if ((sf != of)) goto L_98100b;
L_980ff2: /* 980ff2: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 980ff5: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 980ff7: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 980ffa: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 980ffd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 981000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 981001: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 981002: call dword ptr [0xb021ac] */
  { uint32_t t = R32((uint32_t)(0xb021acu)); esp -= 4; W32(esp, 0x981008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 981008: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
L_98100b: /* 98100b: xor eax, eax */
  eax = 0;
/* 98100d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98100e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_981020(void) {
  LOAD_REGS();
L_981020: /* 981020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 981021: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 981025: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 981028: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 981029: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x98102fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98102f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 981030: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x981036u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 981036: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 981037: ret 4 */
  esp += 8; SPILL(); return;
}

void f_981040(void) {
  LOAD_REGS();
L_981040: /* 981040: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 981043: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 981044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 981045: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 981046: xor esi, esi */
  esi = 0;
/* 981048: xor eax, eax */
  eax = 0;
/* 98104a: mov dword ptr [esp + 0xc], 0xb032e0 */
  W32((uint32_t)(esp + 0xcu), 0xb032e0u);
/* 981052: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 981056: mov dword ptr [esp + 0x14], 0x9810d0 */
  W32((uint32_t)(esp + 0x14u), 0x9810d0u);
/* 98105e: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 981062: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 981066: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98106a: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98106e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 981072: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 981076: mov dword ptr [esp + 0x30], 2 */
  W32((uint32_t)(esp + 0x30u), 0x2u);
/* 98107e: mov ecx, 6 */
  ecx = 0x6u;
/* 981083: lea edi, [esp + 0x34] */
  edi = (uint32_t)(esp + 0x34u);
/* 981087: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 981089: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 98108d: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 981093: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 981094: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 981095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 981096: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 981097: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 981099: call 0x982310 */
  esp -= 4; W32(esp, 0x98109eu); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 98109e: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 9810a2: mov ebx, eax */
  ebx = eax;
/* 9810a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9810a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9810a6: call 0x9825b0 */
  esp -= 4; W32(esp, 0x9810abu); SPILL(); f_9825b0(); if (g_unwind) return; RELOAD();
/* 9810ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9810ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9810ad: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9810b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9810b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9810b3: call 0x983940 */
  esp -= 4; W32(esp, 0x9810b8u); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 9810b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9810b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9810ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9810bb: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9810be: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9810d0(void) {
  LOAD_REGS();
L_9810d0: /* 9810d0: sub esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9810d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9810d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9810d8: mov eax, 1 */
  eax = 0x1u;
/* 9810dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9810de: xor esi, esi */
  esi = 0;
/* 9810e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9810e1: mov ecx, 0x983090 */
  ecx = 0x983090u;
/* 9810e6: mov edi, 3 */
  edi = 0x3u;
/* 9810eb: mov edx, 0x9831b0 */
  edx = 0x9831b0u;
/* 9810f0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9810f4: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9810f8: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 9810fc: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 981100: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 981104: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 981108: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 98110c: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 981113: mov dword ptr [esp + 0x98], ecx */
  W32((uint32_t)(esp + 0x98u), ecx);
/* 98111a: mov dword ptr [esp + 0xb4], eax */
  W32((uint32_t)(esp + 0xb4u), eax);
/* 981121: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 981128: mov dword ptr [esp + 0xd4], eax */
  W32((uint32_t)(esp + 0xd4u), eax);
/* 98112f: mov dword ptr [esp + 0xe0], edi */
  W32((uint32_t)(esp + 0xe0u), edi);
/* 981136: mov dword ptr [esp + 0xf4], eax */
  W32((uint32_t)(esp + 0xf4u), eax);
/* 98113d: xor eax, eax */
  eax = 0;
/* 98113f: mov dword ptr [esp + 0x10], 0xb032c4 */
  W32((uint32_t)(esp + 0x10u), 0xb032c4u);
/* 981147: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98114b: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 98114f: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 981153: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 981157: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 98115b: mov dword ptr [esp + 0x30], 0xb032d8 */
  W32((uint32_t)(esp + 0x30u), 0xb032d8u);
/* 981163: mov dword ptr [esp + 0x3c], 0xc */
  W32((uint32_t)(esp + 0x3cu), 0xcu);
/* 98116b: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 98116f: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 981173: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 981177: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 98117b: mov dword ptr [esp + 0x50], 0xb032d0 */
  W32((uint32_t)(esp + 0x50u), 0xb032d0u);
/* 981183: mov dword ptr [esp + 0x5c], 0x10 */
  W32((uint32_t)(esp + 0x5cu), 0x10u);
/* 98118b: mov dword ptr [esp + 0x60], esi */
  W32((uint32_t)(esp + 0x60u), esi);
/* 98118f: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 981193: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 981197: mov dword ptr [esp + 0x6c], esi */
  W32((uint32_t)(esp + 0x6cu), esi);
/* 98119b: mov dword ptr [esp + 0x70], 0xb032bc */
  W32((uint32_t)(esp + 0x70u), 0xb032bcu);
/* 9811a3: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 9811a7: mov dword ptr [esp + 0x7c], 0x14 */
  W32((uint32_t)(esp + 0x7cu), 0x14u);
/* 9811af: mov dword ptr [esp + 0x80], 6 */
  W32((uint32_t)(esp + 0x80u), 0x6u);
/* 9811ba: mov dword ptr [esp + 0x84], esi */
  W32((uint32_t)(esp + 0x84u), esi);
/* 9811c1: mov dword ptr [esp + 0x88], esi */
  W32((uint32_t)(esp + 0x88u), esi);
/* 9811c8: mov dword ptr [esp + 0x8c], esi */
  W32((uint32_t)(esp + 0x8cu), esi);
/* 9811cf: mov dword ptr [esp + 0x90], 0xb03290 */
  W32((uint32_t)(esp + 0x90u), 0xb03290u);
/* 9811da: mov dword ptr [esp + 0x9c], 0x2c */
  W32((uint32_t)(esp + 0x9cu), 0x2cu);
/* 9811e5: mov dword ptr [esp + 0xa0], esi */
  W32((uint32_t)(esp + 0xa0u), esi);
/* 9811ec: mov dword ptr [esp + 0xa4], esi */
  W32((uint32_t)(esp + 0xa4u), esi);
/* 9811f3: mov dword ptr [esp + 0xa8], esi */
  W32((uint32_t)(esp + 0xa8u), esi);
/* 9811fa: mov dword ptr [esp + 0xac], esi */
  W32((uint32_t)(esp + 0xacu), esi);
/* 981201: mov dword ptr [esp + 0xb0], 0xb03284 */
  W32((uint32_t)(esp + 0xb0u), 0xb03284u);
/* 98120c: mov dword ptr [esp + 0xbc], 0x30 */
  W32((uint32_t)(esp + 0xbcu), 0x30u);
/* 981217: mov dword ptr [esp + 0xc0], esi */
  W32((uint32_t)(esp + 0xc0u), esi);
/* 98121e: mov dword ptr [esp + 0xc4], esi */
  W32((uint32_t)(esp + 0xc4u), esi);
/* 981225: mov dword ptr [esp + 0xc8], esi */
  W32((uint32_t)(esp + 0xc8u), esi);
/* 98122c: mov dword ptr [esp + 0xcc], esi */
  W32((uint32_t)(esp + 0xccu), esi);
/* 981233: mov dword ptr [esp + 0xd0], 0xb03278 */
  W32((uint32_t)(esp + 0xd0u), 0xb03278u);
/* 98123e: mov dword ptr [esp + 0xd8], edx */
  W32((uint32_t)(esp + 0xd8u), edx);
/* 981245: mov dword ptr [esp + 0xdc], 0x34 */
  W32((uint32_t)(esp + 0xdcu), 0x34u);
/* 981250: mov dword ptr [esp + 0xe4], esi */
  W32((uint32_t)(esp + 0xe4u), esi);
/* 981257: mov dword ptr [esp + 0xe8], esi */
  W32((uint32_t)(esp + 0xe8u), esi);
/* 98125e: mov dword ptr [esp + 0xec], esi */
  W32((uint32_t)(esp + 0xecu), esi);
/* 981265: mov dword ptr [esp + 0xf0], 0xb03268 */
  W32((uint32_t)(esp + 0xf0u), 0xb03268u);
/* 981270: mov dword ptr [esp + 0xf8], 0x982bf0 */
  W32((uint32_t)(esp + 0xf8u), 0x982bf0u);
/* 98127b: mov dword ptr [esp + 0xfc], 0x40 */
  W32((uint32_t)(esp + 0xfcu), 0x40u);
/* 981286: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98128d: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 981294: mov dword ptr [esp + 0x108], esi */
  W32((uint32_t)(esp + 0x108u), esi);
/* 98129b: mov dword ptr [esp + 0x10c], esi */
  W32((uint32_t)(esp + 0x10cu), esi);
/* 9812a2: mov dword ptr [esp + 0x110], esi */
  W32((uint32_t)(esp + 0x110u), esi);
/* 9812a9: mov dword ptr [esp + 0x114], 2 */
  W32((uint32_t)(esp + 0x114u), 0x2u);
/* 9812b4: mov ecx, 6 */
  ecx = 0x6u;
/* 9812b9: lea edi, [esp + 0x118] */
  edi = (uint32_t)(esp + 0x118u);
/* 9812c0: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 9812c2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9812c4: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x9812cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9812ca: mov ebx, dword ptr [esp + 0x134] */
  ebx = R32((uint32_t)(esp + 0x134u));
/* 9812d1: mov ecx, dword ptr [0xb021a4] */
  ecx = R32((uint32_t)(0xb021a4u));
/* 9812d7: mov edi, eax */
  edi = eax;
/* 9812d9: mov eax, dword ptr [ebx + 0x408] */
  eax = R32((uint32_t)(ebx + 0x408u));
/* 9812df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9812e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9812e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9812e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9812e3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9812e5: call 0x982310 */
  esp -= 4; W32(esp, 0x9812eau); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 9812ea: mov edx, dword ptr [esp + 0x138] */
  edx = R32((uint32_t)(esp + 0x138u));
/* 9812f1: mov ebp, eax */
  ebp = eax;
/* 9812f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9812f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9812f5: call 0x9825b0 */
  esp -= 4; W32(esp, 0x9812fau); SPILL(); f_9825b0(); if (g_unwind) return; RELOAD();
/* 9812fa: mov eax, 0x3f800000 */
  eax = 0x3f800000u;
/* 9812ff: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 981302: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 981305: mov dword ptr [edi + 0x38], eax */
  W32((uint32_t)(edi + 0x38u), eax);
/* 981308: mov eax, 0x3ecccccd */
  eax = 0x3ecccccdu;
/* 98130d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98130e: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 981311: mov dword ptr [edi + 0x20], eax */
  W32((uint32_t)(edi + 0x20u), eax);
/* 981314: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 981317: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 981318: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 98131c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98131d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98131e: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
/* 981321: mov dword ptr [edi + 0x2c], esi */
  W32((uint32_t)(edi + 0x2cu), esi);
/* 981324: mov dword ptr [edi + 0x34], esi */
  W32((uint32_t)(edi + 0x34u), esi);
/* 981327: mov dword ptr [edi + 0x3c], esi */
  W32((uint32_t)(edi + 0x3cu), esi);
/* 98132a: mov dword ptr [edi + 0x40], esi */
  W32((uint32_t)(edi + 0x40u), esi);
/* 98132d: call 0x983940 */
  esp -= 4; W32(esp, 0x981332u); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 981332: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 981333: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 981334: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 981335: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 981336: add esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98133c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_981340(void) {
  LOAD_REGS();
L_981340: /* 981340: sub esp, 0x740 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x740u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 981346: xor eax, eax */
  eax = 0;
/* 981348: mov edx, 3 */
  edx = 0x3u;
/* 98134d: mov ecx, 1 */
  ecx = 0x1u;
/* 981352: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 981353: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 981354: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 981355: mov esi, 0x9831b0 */
  esi = 0x9831b0u;
/* 98135a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98135e: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 981362: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 981366: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 98136a: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 981371: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 981378: mov edx, 0x983090 */
  edx = 0x983090u;
/* 98137d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98137e: mov dword ptr [esp + 0x10], 0xb033d4 */
  W32((uint32_t)(esp + 0x10u), 0xb033d4u);
/* 981386: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98138a: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98138e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 981392: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 981396: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98139a: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 98139e: mov dword ptr [esp + 0x30], 0xb033cc */
  W32((uint32_t)(esp + 0x30u), 0xb033ccu);
/* 9813a6: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 9813aa: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 9813ae: mov dword ptr [esp + 0x3c], 0xc */
  W32((uint32_t)(esp + 0x3cu), 0xcu);
/* 9813b6: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 9813ba: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 9813be: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 9813c2: mov dword ptr [esp + 0x50], 0xb033bc */
  W32((uint32_t)(esp + 0x50u), 0xb033bcu);
/* 9813ca: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 9813ce: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 9813d2: mov dword ptr [esp + 0x5c], 0x18 */
  W32((uint32_t)(esp + 0x5cu), 0x18u);
/* 9813da: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 9813de: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 9813e2: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 9813e6: mov dword ptr [esp + 0x70], 0xb033ac */
  W32((uint32_t)(esp + 0x70u), 0xb033acu);
/* 9813ee: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 9813f2: mov dword ptr [esp + 0x78], esi */
  W32((uint32_t)(esp + 0x78u), esi);
/* 9813f6: mov dword ptr [esp + 0x7c], 0x24 */
  W32((uint32_t)(esp + 0x7cu), 0x24u);
/* 9813fe: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 981405: mov dword ptr [esp + 0x88], eax */
  W32((uint32_t)(esp + 0x88u), eax);
/* 98140c: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 981413: mov dword ptr [esp + 0x90], 0xb03398 */
  W32((uint32_t)(esp + 0x90u), 0xb03398u);
/* 98141e: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 981425: mov dword ptr [esp + 0x98], esi */
  W32((uint32_t)(esp + 0x98u), esi);
/* 98142c: mov dword ptr [esp + 0x9c], 0x30 */
  W32((uint32_t)(esp + 0x9cu), 0x30u);
/* 981437: mov dword ptr [esp + 0xa4], eax */
  W32((uint32_t)(esp + 0xa4u), eax);
/* 98143e: mov dword ptr [esp + 0xa8], eax */
  W32((uint32_t)(esp + 0xa8u), eax);
/* 981445: mov dword ptr [esp + 0xac], eax */
  W32((uint32_t)(esp + 0xacu), eax);
/* 98144c: mov dword ptr [esp + 0xb0], 0xb03384 */
  W32((uint32_t)(esp + 0xb0u), 0xb03384u);
/* 981457: mov dword ptr [esp + 0xb4], ecx */
  W32((uint32_t)(esp + 0xb4u), ecx);
/* 98145e: mov dword ptr [esp + 0xb8], esi */
  W32((uint32_t)(esp + 0xb8u), esi);
/* 981465: mov dword ptr [esp + 0xbc], 0x3c */
  W32((uint32_t)(esp + 0xbcu), 0x3cu);
/* 981470: mov dword ptr [esp + 0xc4], eax */
  W32((uint32_t)(esp + 0xc4u), eax);
/* 981477: mov dword ptr [esp + 0xc8], eax */
  W32((uint32_t)(esp + 0xc8u), eax);
/* 98147e: mov dword ptr [esp + 0xcc], eax */
  W32((uint32_t)(esp + 0xccu), eax);
/* 981485: mov dword ptr [esp + 0xd0], 0xb035e0 */
  W32((uint32_t)(esp + 0xd0u), 0xb035e0u);
/* 981490: mov dword ptr [esp + 0xd4], ecx */
  W32((uint32_t)(esp + 0xd4u), ecx);
/* 981497: mov dword ptr [esp + 0xd8], edx */
  W32((uint32_t)(esp + 0xd8u), edx);
/* 98149e: mov dword ptr [esp + 0xdc], 0x8c */
  W32((uint32_t)(esp + 0xdcu), 0x8cu);
/* 9814a9: mov dword ptr [esp + 0xe0], eax */
  W32((uint32_t)(esp + 0xe0u), eax);
/* 9814b0: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 9814b7: mov dword ptr [esp + 0xe8], eax */
  W32((uint32_t)(esp + 0xe8u), eax);
/* 9814be: mov dword ptr [esp + 0xec], eax */
  W32((uint32_t)(esp + 0xecu), eax);
/* 9814c5: mov dword ptr [esp + 0xf0], 0xb035d0 */
  W32((uint32_t)(esp + 0xf0u), 0xb035d0u);
/* 9814d0: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 9814d7: mov dword ptr [esp + 0xf8], edx */
  W32((uint32_t)(esp + 0xf8u), edx);
/* 9814de: mov dword ptr [esp + 0xfc], 0xa4 */
  W32((uint32_t)(esp + 0xfcu), 0xa4u);
/* 9814e9: mov dword ptr [esp + 0x100], eax */
  W32((uint32_t)(esp + 0x100u), eax);
/* 9814f0: mov dword ptr [esp + 0x104], eax */
  W32((uint32_t)(esp + 0x104u), eax);
/* 9814f7: mov dword ptr [esp + 0x108], eax */
  W32((uint32_t)(esp + 0x108u), eax);
/* 9814fe: mov dword ptr [esp + 0x10c], eax */
  W32((uint32_t)(esp + 0x10cu), eax);
/* 981505: mov dword ptr [esp + 0x110], 0xb035bc */
  W32((uint32_t)(esp + 0x110u), 0xb035bcu);
/* 981510: mov dword ptr [esp + 0x114], ecx */
  W32((uint32_t)(esp + 0x114u), ecx);
/* 981517: mov dword ptr [esp + 0x118], edx */
  W32((uint32_t)(esp + 0x118u), edx);
/* 98151e: mov dword ptr [esp + 0x11c], 0x90 */
  W32((uint32_t)(esp + 0x11cu), 0x90u);
/* 981529: mov dword ptr [esp + 0x120], eax */
  W32((uint32_t)(esp + 0x120u), eax);
/* 981530: mov dword ptr [esp + 0x124], eax */
  W32((uint32_t)(esp + 0x124u), eax);
/* 981537: mov dword ptr [esp + 0x128], eax */
  W32((uint32_t)(esp + 0x128u), eax);
/* 98153e: mov dword ptr [esp + 0x12c], eax */
  W32((uint32_t)(esp + 0x12cu), eax);
/* 981545: mov edi, 0x982bf0 */
  edi = 0x982bf0u;
/* 98154a: mov esi, 0x54 */
  esi = 0x54u;
/* 98154f: mov ebp, 0x58 */
  ebp = 0x58u;
/* 981554: mov ebx, 0x6c */
  ebx = 0x6cu;
/* 981559: mov dword ptr [esp + 0x130], 0xb035a8 */
  W32((uint32_t)(esp + 0x130u), 0xb035a8u);
/* 981564: mov dword ptr [esp + 0x134], ecx */
  W32((uint32_t)(esp + 0x134u), ecx);
/* 98156b: mov dword ptr [esp + 0x138], edx */
  W32((uint32_t)(esp + 0x138u), edx);
/* 981572: mov dword ptr [esp + 0x13c], 0xa8 */
  W32((uint32_t)(esp + 0x13cu), 0xa8u);
/* 98157d: mov dword ptr [esp + 0x140], eax */
  W32((uint32_t)(esp + 0x140u), eax);
/* 981584: mov dword ptr [esp + 0x144], eax */
  W32((uint32_t)(esp + 0x144u), eax);
/* 98158b: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 981592: mov dword ptr [esp + 0x14c], eax */
  W32((uint32_t)(esp + 0x14cu), eax);
/* 981599: mov dword ptr [esp + 0x150], 0xb03598 */
  W32((uint32_t)(esp + 0x150u), 0xb03598u);
/* 9815a4: mov dword ptr [esp + 0x154], ecx */
  W32((uint32_t)(esp + 0x154u), ecx);
/* 9815ab: mov dword ptr [esp + 0x158], edi */
  W32((uint32_t)(esp + 0x158u), edi);
/* 9815b2: mov dword ptr [esp + 0x15c], 0xb8 */
  W32((uint32_t)(esp + 0x15cu), 0xb8u);
/* 9815bd: mov dword ptr [esp + 0x160], eax */
  W32((uint32_t)(esp + 0x160u), eax);
/* 9815c4: mov dword ptr [esp + 0x164], eax */
  W32((uint32_t)(esp + 0x164u), eax);
/* 9815cb: mov dword ptr [esp + 0x168], eax */
  W32((uint32_t)(esp + 0x168u), eax);
/* 9815d2: mov dword ptr [esp + 0x16c], eax */
  W32((uint32_t)(esp + 0x16cu), eax);
/* 9815d9: mov dword ptr [esp + 0x170], 0xb03588 */
  W32((uint32_t)(esp + 0x170u), 0xb03588u);
/* 9815e4: mov dword ptr [esp + 0x174], ecx */
  W32((uint32_t)(esp + 0x174u), ecx);
/* 9815eb: mov dword ptr [esp + 0x178], edx */
  W32((uint32_t)(esp + 0x178u), edx);
/* 9815f2: mov dword ptr [esp + 0x17c], 0x48 */
  W32((uint32_t)(esp + 0x17cu), 0x48u);
/* 9815fd: mov dword ptr [esp + 0x180], eax */
  W32((uint32_t)(esp + 0x180u), eax);
/* 981604: mov dword ptr [esp + 0x184], eax */
  W32((uint32_t)(esp + 0x184u), eax);
/* 98160b: mov dword ptr [esp + 0x188], eax */
  W32((uint32_t)(esp + 0x188u), eax);
/* 981612: mov dword ptr [esp + 0x18c], eax */
  W32((uint32_t)(esp + 0x18cu), eax);
/* 981619: mov dword ptr [esp + 0x190], 0xb03578 */
  W32((uint32_t)(esp + 0x190u), 0xb03578u);
/* 981624: mov dword ptr [esp + 0x194], ecx */
  W32((uint32_t)(esp + 0x194u), ecx);
/* 98162b: mov dword ptr [esp + 0x198], edx */
  W32((uint32_t)(esp + 0x198u), edx);
/* 981632: mov dword ptr [esp + 0x19c], 0x4c */
  W32((uint32_t)(esp + 0x19cu), 0x4cu);
/* 98163d: mov dword ptr [esp + 0x1a0], eax */
  W32((uint32_t)(esp + 0x1a0u), eax);
/* 981644: mov dword ptr [esp + 0x1a4], eax */
  W32((uint32_t)(esp + 0x1a4u), eax);
/* 98164b: mov dword ptr [esp + 0x1a8], eax */
  W32((uint32_t)(esp + 0x1a8u), eax);
/* 981652: mov dword ptr [esp + 0x1ac], eax */
  W32((uint32_t)(esp + 0x1acu), eax);
/* 981659: mov dword ptr [esp + 0x1b0], 0xb03568 */
  W32((uint32_t)(esp + 0x1b0u), 0xb03568u);
/* 981664: mov dword ptr [esp + 0x1b4], ecx */
  W32((uint32_t)(esp + 0x1b4u), ecx);
/* 98166b: mov dword ptr [esp + 0x1b8], edx */
  W32((uint32_t)(esp + 0x1b8u), edx);
/* 981672: mov dword ptr [esp + 0x1bc], esi */
  W32((uint32_t)(esp + 0x1bcu), esi);
/* 981679: mov dword ptr [esp + 0x1c0], eax */
  W32((uint32_t)(esp + 0x1c0u), eax);
/* 981680: mov dword ptr [esp + 0x1c4], eax */
  W32((uint32_t)(esp + 0x1c4u), eax);
/* 981687: mov dword ptr [esp + 0x1c8], eax */
  W32((uint32_t)(esp + 0x1c8u), eax);
/* 98168e: mov dword ptr [esp + 0x1cc], eax */
  W32((uint32_t)(esp + 0x1ccu), eax);
/* 981695: mov dword ptr [esp + 0x1d0], 0xb03558 */
  W32((uint32_t)(esp + 0x1d0u), 0xb03558u);
/* 9816a0: mov dword ptr [esp + 0x1d4], ecx */
  W32((uint32_t)(esp + 0x1d4u), ecx);
/* 9816a7: mov dword ptr [esp + 0x1d8], edx */
  W32((uint32_t)(esp + 0x1d8u), edx);
/* 9816ae: mov dword ptr [esp + 0x1dc], ebp */
  W32((uint32_t)(esp + 0x1dcu), ebp);
/* 9816b5: mov dword ptr [esp + 0x1e0], eax */
  W32((uint32_t)(esp + 0x1e0u), eax);
/* 9816bc: mov dword ptr [esp + 0x1e4], eax */
  W32((uint32_t)(esp + 0x1e4u), eax);
/* 9816c3: mov dword ptr [esp + 0x1e8], eax */
  W32((uint32_t)(esp + 0x1e8u), eax);
/* 9816ca: mov dword ptr [esp + 0x1ec], eax */
  W32((uint32_t)(esp + 0x1ecu), eax);
/* 9816d1: mov dword ptr [esp + 0x1f0], 0xb03548 */
  W32((uint32_t)(esp + 0x1f0u), 0xb03548u);
/* 9816dc: mov dword ptr [esp + 0x1f4], ecx */
  W32((uint32_t)(esp + 0x1f4u), ecx);
/* 9816e3: mov dword ptr [esp + 0x1f8], edx */
  W32((uint32_t)(esp + 0x1f8u), edx);
/* 9816ea: mov dword ptr [esp + 0x1fc], ebx */
  W32((uint32_t)(esp + 0x1fcu), ebx);
/* 9816f1: mov dword ptr [esp + 0x200], eax */
  W32((uint32_t)(esp + 0x200u), eax);
/* 9816f8: mov dword ptr [esp + 0x204], eax */
  W32((uint32_t)(esp + 0x204u), eax);
/* 9816ff: mov dword ptr [esp + 0x208], eax */
  W32((uint32_t)(esp + 0x208u), eax);
/* 981706: mov dword ptr [esp + 0x20c], eax */
  W32((uint32_t)(esp + 0x20cu), eax);
/* 98170d: mov dword ptr [esp + 0x210], 0xb0353c */
  W32((uint32_t)(esp + 0x210u), 0xb0353cu);
/* 981718: mov dword ptr [esp + 0x214], ecx */
  W32((uint32_t)(esp + 0x214u), ecx);
/* 98171f: mov dword ptr [esp + 0x218], edx */
  W32((uint32_t)(esp + 0x218u), edx);
/* 981726: mov dword ptr [esp + 0x21c], 0xac */
  W32((uint32_t)(esp + 0x21cu), 0xacu);
/* 981731: mov dword ptr [esp + 0x220], eax */
  W32((uint32_t)(esp + 0x220u), eax);
/* 981738: mov dword ptr [esp + 0x224], eax */
  W32((uint32_t)(esp + 0x224u), eax);
/* 98173f: mov dword ptr [esp + 0x228], eax */
  W32((uint32_t)(esp + 0x228u), eax);
/* 981746: mov dword ptr [esp + 0x22c], eax */
  W32((uint32_t)(esp + 0x22cu), eax);
/* 98174d: mov dword ptr [esp + 0x230], 0xb03530 */
  W32((uint32_t)(esp + 0x230u), 0xb03530u);
/* 981758: mov dword ptr [esp + 0x234], ecx */
  W32((uint32_t)(esp + 0x234u), ecx);
/* 98175f: mov dword ptr [esp + 0x238], edx */
  W32((uint32_t)(esp + 0x238u), edx);
/* 981766: mov dword ptr [esp + 0x23c], 0x48 */
  W32((uint32_t)(esp + 0x23cu), 0x48u);
/* 981771: mov dword ptr [esp + 0x240], eax */
  W32((uint32_t)(esp + 0x240u), eax);
/* 981778: mov dword ptr [esp + 0x244], eax */
  W32((uint32_t)(esp + 0x244u), eax);
/* 98177f: mov dword ptr [esp + 0x248], eax */
  W32((uint32_t)(esp + 0x248u), eax);
/* 981786: mov dword ptr [esp + 0x24c], eax */
  W32((uint32_t)(esp + 0x24cu), eax);
/* 98178d: mov dword ptr [esp + 0x250], 0xb03524 */
  W32((uint32_t)(esp + 0x250u), 0xb03524u);
/* 981798: mov dword ptr [esp + 0x254], ecx */
  W32((uint32_t)(esp + 0x254u), ecx);
/* 98179f: mov dword ptr [esp + 0x258], edx */
  W32((uint32_t)(esp + 0x258u), edx);
/* 9817a6: mov dword ptr [esp + 0x25c], 0x4c */
  W32((uint32_t)(esp + 0x25cu), 0x4cu);
/* 9817b1: mov dword ptr [esp + 0x260], eax */
  W32((uint32_t)(esp + 0x260u), eax);
/* 9817b8: mov dword ptr [esp + 0x264], eax */
  W32((uint32_t)(esp + 0x264u), eax);
/* 9817bf: mov dword ptr [esp + 0x268], eax */
  W32((uint32_t)(esp + 0x268u), eax);
/* 9817c6: mov dword ptr [esp + 0x26c], eax */
  W32((uint32_t)(esp + 0x26cu), eax);
/* 9817cd: mov dword ptr [esp + 0x270], 0xb03514 */
  W32((uint32_t)(esp + 0x270u), 0xb03514u);
/* 9817d8: mov dword ptr [esp + 0x274], ecx */
  W32((uint32_t)(esp + 0x274u), ecx);
/* 9817df: mov dword ptr [esp + 0x278], edx */
  W32((uint32_t)(esp + 0x278u), edx);
/* 9817e6: mov dword ptr [esp + 0x27c], esi */
  W32((uint32_t)(esp + 0x27cu), esi);
/* 9817ed: mov dword ptr [esp + 0x280], eax */
  W32((uint32_t)(esp + 0x280u), eax);
/* 9817f4: mov dword ptr [esp + 0x284], eax */
  W32((uint32_t)(esp + 0x284u), eax);
/* 9817fb: mov dword ptr [esp + 0x288], eax */
  W32((uint32_t)(esp + 0x288u), eax);
/* 981802: mov dword ptr [esp + 0x28c], eax */
  W32((uint32_t)(esp + 0x28cu), eax);
/* 981809: mov dword ptr [esp + 0x290], 0xb03504 */
  W32((uint32_t)(esp + 0x290u), 0xb03504u);
/* 981814: mov dword ptr [esp + 0x294], ecx */
  W32((uint32_t)(esp + 0x294u), ecx);
/* 98181b: mov dword ptr [esp + 0x298], edx */
  W32((uint32_t)(esp + 0x298u), edx);
/* 981822: mov dword ptr [esp + 0x29c], ebp */
  W32((uint32_t)(esp + 0x29cu), ebp);
/* 981829: mov dword ptr [esp + 0x2a0], eax */
  W32((uint32_t)(esp + 0x2a0u), eax);
/* 981830: mov dword ptr [esp + 0x2a4], eax */
  W32((uint32_t)(esp + 0x2a4u), eax);
/* 981837: mov dword ptr [esp + 0x2a8], eax */
  W32((uint32_t)(esp + 0x2a8u), eax);
/* 98183e: mov dword ptr [esp + 0x2ac], eax */
  W32((uint32_t)(esp + 0x2acu), eax);
/* 981845: mov dword ptr [esp + 0x2b0], 0xb034fc */
  W32((uint32_t)(esp + 0x2b0u), 0xb034fcu);
/* 981850: mov dword ptr [esp + 0x2b4], ecx */
  W32((uint32_t)(esp + 0x2b4u), ecx);
/* 981857: mov dword ptr [esp + 0x2b8], edi */
  W32((uint32_t)(esp + 0x2b8u), edi);
/* 98185e: mov dword ptr [esp + 0x2bc], 0x84 */
  W32((uint32_t)(esp + 0x2bcu), 0x84u);
/* 981869: mov dword ptr [esp + 0x2c0], eax */
  W32((uint32_t)(esp + 0x2c0u), eax);
/* 981870: mov dword ptr [esp + 0x2c4], eax */
  W32((uint32_t)(esp + 0x2c4u), eax);
/* 981877: mov dword ptr [esp + 0x2c8], eax */
  W32((uint32_t)(esp + 0x2c8u), eax);
/* 98187e: mov dword ptr [esp + 0x2cc], eax */
  W32((uint32_t)(esp + 0x2ccu), eax);
/* 981885: mov dword ptr [esp + 0x2d0], 0xb034f0 */
  W32((uint32_t)(esp + 0x2d0u), 0xb034f0u);
/* 981890: mov dword ptr [esp + 0x2d4], ecx */
  W32((uint32_t)(esp + 0x2d4u), ecx);
/* 981897: mov dword ptr [esp + 0x2d8], edi */
  W32((uint32_t)(esp + 0x2d8u), edi);
/* 98189e: mov dword ptr [esp + 0x2dc], 0x88 */
  W32((uint32_t)(esp + 0x2dcu), 0x88u);
/* 9818a9: mov dword ptr [esp + 0x2e0], eax */
  W32((uint32_t)(esp + 0x2e0u), eax);
/* 9818b0: mov dword ptr [esp + 0x2e4], eax */
  W32((uint32_t)(esp + 0x2e4u), eax);
/* 9818b7: mov dword ptr [esp + 0x2e8], eax */
  W32((uint32_t)(esp + 0x2e8u), eax);
/* 9818be: mov dword ptr [esp + 0x2ec], eax */
  W32((uint32_t)(esp + 0x2ecu), eax);
/* 9818c5: mov dword ptr [esp + 0x2f0], 0xb034e8 */
  W32((uint32_t)(esp + 0x2f0u), 0xb034e8u);
/* 9818d0: mov dword ptr [esp + 0x2f4], ecx */
  W32((uint32_t)(esp + 0x2f4u), ecx);
/* 9818d7: mov dword ptr [esp + 0x2f8], edx */
  W32((uint32_t)(esp + 0x2f8u), edx);
/* 9818de: mov dword ptr [esp + 0x2fc], 0xa4 */
  W32((uint32_t)(esp + 0x2fcu), 0xa4u);
/* 9818e9: mov dword ptr [esp + 0x300], eax */
  W32((uint32_t)(esp + 0x300u), eax);
/* 9818f0: mov dword ptr [esp + 0x304], eax */
  W32((uint32_t)(esp + 0x304u), eax);
/* 9818f7: mov dword ptr [esp + 0x308], eax */
  W32((uint32_t)(esp + 0x308u), eax);
/* 9818fe: mov dword ptr [esp + 0x30c], eax */
  W32((uint32_t)(esp + 0x30cu), eax);
/* 981905: mov dword ptr [esp + 0x310], 0xb034dc */
  W32((uint32_t)(esp + 0x310u), 0xb034dcu);
/* 981910: mov dword ptr [esp + 0x314], ecx */
  W32((uint32_t)(esp + 0x314u), ecx);
/* 981917: mov dword ptr [esp + 0x318], edx */
  W32((uint32_t)(esp + 0x318u), edx);
/* 98191e: mov dword ptr [esp + 0x31c], 0x8c */
  W32((uint32_t)(esp + 0x31cu), 0x8cu);
/* 981929: mov dword ptr [esp + 0x320], eax */
  W32((uint32_t)(esp + 0x320u), eax);
/* 981930: mov dword ptr [esp + 0x324], eax */
  W32((uint32_t)(esp + 0x324u), eax);
/* 981937: mov dword ptr [esp + 0x328], eax */
  W32((uint32_t)(esp + 0x328u), eax);
/* 98193e: mov dword ptr [esp + 0x32c], eax */
  W32((uint32_t)(esp + 0x32cu), eax);
/* 981945: mov dword ptr [esp + 0x330], 0xb034d8 */
  W32((uint32_t)(esp + 0x330u), 0xb034d8u);
/* 981950: mov dword ptr [esp + 0x334], ecx */
  W32((uint32_t)(esp + 0x334u), ecx);
/* 981957: mov dword ptr [esp + 0x338], edx */
  W32((uint32_t)(esp + 0x338u), edx);
/* 98195e: mov dword ptr [esp + 0x33c], 0x8c */
  W32((uint32_t)(esp + 0x33cu), 0x8cu);
/* 981969: mov dword ptr [esp + 0x340], eax */
  W32((uint32_t)(esp + 0x340u), eax);
/* 981970: mov dword ptr [esp + 0x344], eax */
  W32((uint32_t)(esp + 0x344u), eax);
/* 981977: mov dword ptr [esp + 0x348], eax */
  W32((uint32_t)(esp + 0x348u), eax);
/* 98197e: mov dword ptr [esp + 0x34c], eax */
  W32((uint32_t)(esp + 0x34cu), eax);
/* 981985: mov dword ptr [esp + 0x350], 0xb034d4 */
  W32((uint32_t)(esp + 0x350u), 0xb034d4u);
/* 981990: mov dword ptr [esp + 0x354], ecx */
  W32((uint32_t)(esp + 0x354u), ecx);
/* 981997: mov dword ptr [esp + 0x358], edx */
  W32((uint32_t)(esp + 0x358u), edx);
/* 98199e: mov dword ptr [esp + 0x35c], 0x90 */
  W32((uint32_t)(esp + 0x35cu), 0x90u);
/* 9819a9: mov dword ptr [esp + 0x360], eax */
  W32((uint32_t)(esp + 0x360u), eax);
/* 9819b0: mov dword ptr [esp + 0x364], eax */
  W32((uint32_t)(esp + 0x364u), eax);
/* 9819b7: mov dword ptr [esp + 0x368], eax */
  W32((uint32_t)(esp + 0x368u), eax);
/* 9819be: mov dword ptr [esp + 0x36c], eax */
  W32((uint32_t)(esp + 0x36cu), eax);
/* 9819c5: mov dword ptr [esp + 0x370], 0xb034d0 */
  W32((uint32_t)(esp + 0x370u), 0xb034d0u);
/* 9819d0: mov dword ptr [esp + 0x374], ecx */
  W32((uint32_t)(esp + 0x374u), ecx);
/* 9819d7: mov dword ptr [esp + 0x378], edx */
  W32((uint32_t)(esp + 0x378u), edx);
/* 9819de: mov dword ptr [esp + 0x37c], 0x94 */
  W32((uint32_t)(esp + 0x37cu), 0x94u);
/* 9819e9: mov dword ptr [esp + 0x380], eax */
  W32((uint32_t)(esp + 0x380u), eax);
/* 9819f0: mov dword ptr [esp + 0x384], eax */
  W32((uint32_t)(esp + 0x384u), eax);
/* 9819f7: mov dword ptr [esp + 0x388], eax */
  W32((uint32_t)(esp + 0x388u), eax);
/* 9819fe: mov dword ptr [esp + 0x38c], eax */
  W32((uint32_t)(esp + 0x38cu), eax);
/* 981a05: mov dword ptr [esp + 0x390], 0xb034cc */
  W32((uint32_t)(esp + 0x390u), 0xb034ccu);
/* 981a10: mov dword ptr [esp + 0x394], ecx */
  W32((uint32_t)(esp + 0x394u), ecx);
/* 981a17: mov dword ptr [esp + 0x398], edx */
  W32((uint32_t)(esp + 0x398u), edx);
/* 981a1e: mov dword ptr [esp + 0x39c], 0x98 */
  W32((uint32_t)(esp + 0x39cu), 0x98u);
/* 981a29: mov dword ptr [esp + 0x3a0], eax */
  W32((uint32_t)(esp + 0x3a0u), eax);
/* 981a30: mov dword ptr [esp + 0x3a4], eax */
  W32((uint32_t)(esp + 0x3a4u), eax);
/* 981a37: mov dword ptr [esp + 0x3a8], eax */
  W32((uint32_t)(esp + 0x3a8u), eax);
/* 981a3e: mov dword ptr [esp + 0x3ac], eax */
  W32((uint32_t)(esp + 0x3acu), eax);
/* 981a45: mov dword ptr [esp + 0x3b0], 0xb034c8 */
  W32((uint32_t)(esp + 0x3b0u), 0xb034c8u);
/* 981a50: mov dword ptr [esp + 0x3b4], ecx */
  W32((uint32_t)(esp + 0x3b4u), ecx);
/* 981a57: mov dword ptr [esp + 0x3b8], edx */
  W32((uint32_t)(esp + 0x3b8u), edx);
/* 981a5e: mov dword ptr [esp + 0x3bc], 0x9c */
  W32((uint32_t)(esp + 0x3bcu), 0x9cu);
/* 981a69: mov dword ptr [esp + 0x3c0], eax */
  W32((uint32_t)(esp + 0x3c0u), eax);
/* 981a70: mov dword ptr [esp + 0x3c4], eax */
  W32((uint32_t)(esp + 0x3c4u), eax);
/* 981a77: mov dword ptr [esp + 0x3c8], eax */
  W32((uint32_t)(esp + 0x3c8u), eax);
/* 981a7e: mov dword ptr [esp + 0x3cc], eax */
  W32((uint32_t)(esp + 0x3ccu), eax);
/* 981a85: mov dword ptr [esp + 0x3d0], 0xb034c4 */
  W32((uint32_t)(esp + 0x3d0u), 0xb034c4u);
/* 981a90: mov dword ptr [esp + 0x3d4], ecx */
  W32((uint32_t)(esp + 0x3d4u), ecx);
/* 981a97: mov dword ptr [esp + 0x3d8], edx */
  W32((uint32_t)(esp + 0x3d8u), edx);
/* 981a9e: mov dword ptr [esp + 0x3dc], 0xa0 */
  W32((uint32_t)(esp + 0x3dcu), 0xa0u);
/* 981aa9: mov dword ptr [esp + 0x3e0], eax */
  W32((uint32_t)(esp + 0x3e0u), eax);
/* 981ab0: mov dword ptr [esp + 0x3e4], eax */
  W32((uint32_t)(esp + 0x3e4u), eax);
/* 981ab7: mov dword ptr [esp + 0x3e8], eax */
  W32((uint32_t)(esp + 0x3e8u), eax);
/* 981abe: mov dword ptr [esp + 0x3ec], eax */
  W32((uint32_t)(esp + 0x3ecu), eax);
/* 981ac5: mov dword ptr [esp + 0x3f0], 0xb035fc */
  W32((uint32_t)(esp + 0x3f0u), 0xb035fcu);
/* 981ad0: mov dword ptr [esp + 0x3f4], ecx */
  W32((uint32_t)(esp + 0x3f4u), ecx);
/* 981ad7: mov dword ptr [esp + 0x3f8], edx */
  W32((uint32_t)(esp + 0x3f8u), edx);
/* 981ade: mov dword ptr [esp + 0x3fc], 0x48 */
  W32((uint32_t)(esp + 0x3fcu), 0x48u);
/* 981ae9: mov dword ptr [esp + 0x400], eax */
  W32((uint32_t)(esp + 0x400u), eax);
/* 981af0: mov dword ptr [esp + 0x404], eax */
  W32((uint32_t)(esp + 0x404u), eax);
/* 981af7: mov dword ptr [esp + 0x408], eax */
  W32((uint32_t)(esp + 0x408u), eax);
/* 981afe: mov dword ptr [esp + 0x40c], eax */
  W32((uint32_t)(esp + 0x40cu), eax);
/* 981b05: mov dword ptr [esp + 0x410], 0xb035f0 */
  W32((uint32_t)(esp + 0x410u), 0xb035f0u);
/* 981b10: mov dword ptr [esp + 0x414], ecx */
  W32((uint32_t)(esp + 0x414u), ecx);
/* 981b17: mov dword ptr [esp + 0x418], edx */
  W32((uint32_t)(esp + 0x418u), edx);
/* 981b1e: mov dword ptr [esp + 0x41c], esi */
  W32((uint32_t)(esp + 0x41cu), esi);
/* 981b25: mov dword ptr [esp + 0x420], eax */
  W32((uint32_t)(esp + 0x420u), eax);
/* 981b2c: mov dword ptr [esp + 0x424], eax */
  W32((uint32_t)(esp + 0x424u), eax);
/* 981b33: mov dword ptr [esp + 0x428], eax */
  W32((uint32_t)(esp + 0x428u), eax);
/* 981b3a: mov dword ptr [esp + 0x42c], eax */
  W32((uint32_t)(esp + 0x42cu), eax);
/* 981b41: mov dword ptr [esp + 0x430], 0xb03690 */
  W32((uint32_t)(esp + 0x430u), 0xb03690u);
/* 981b4c: mov dword ptr [esp + 0x434], ecx */
  W32((uint32_t)(esp + 0x434u), ecx);
/* 981b53: mov dword ptr [esp + 0x438], edi */
  W32((uint32_t)(esp + 0x438u), edi);
/* 981b5a: mov dword ptr [esp + 0x43c], 0xb0 */
  W32((uint32_t)(esp + 0x43cu), 0xb0u);
/* 981b65: mov dword ptr [esp + 0x440], eax */
  W32((uint32_t)(esp + 0x440u), eax);
/* 981b6c: mov dword ptr [esp + 0x444], eax */
  W32((uint32_t)(esp + 0x444u), eax);
/* 981b73: mov dword ptr [esp + 0x448], eax */
  W32((uint32_t)(esp + 0x448u), eax);
/* 981b7a: mov dword ptr [esp + 0x44c], eax */
  W32((uint32_t)(esp + 0x44cu), eax);
/* 981b81: mov dword ptr [esp + 0x450], 0xb0367c */
  W32((uint32_t)(esp + 0x450u), 0xb0367cu);
/* 981b8c: mov dword ptr [esp + 0x454], ecx */
  W32((uint32_t)(esp + 0x454u), ecx);
/* 981b93: mov dword ptr [esp + 0x458], edx */
  W32((uint32_t)(esp + 0x458u), edx);
/* 981b9a: mov dword ptr [esp + 0x45c], 0x48 */
  W32((uint32_t)(esp + 0x45cu), 0x48u);
/* 981ba5: mov dword ptr [esp + 0x460], eax */
  W32((uint32_t)(esp + 0x460u), eax);
/* 981bac: mov dword ptr [esp + 0x464], eax */
  W32((uint32_t)(esp + 0x464u), eax);
/* 981bb3: mov dword ptr [esp + 0x468], eax */
  W32((uint32_t)(esp + 0x468u), eax);
/* 981bba: mov dword ptr [esp + 0x46c], eax */
  W32((uint32_t)(esp + 0x46cu), eax);
/* 981bc1: mov dword ptr [esp + 0x470], 0xb03668 */
  W32((uint32_t)(esp + 0x470u), 0xb03668u);
/* 981bcc: mov dword ptr [esp + 0x474], ecx */
  W32((uint32_t)(esp + 0x474u), ecx);
/* 981bd3: mov dword ptr [esp + 0x478], edx */
  W32((uint32_t)(esp + 0x478u), edx);
/* 981bda: mov dword ptr [esp + 0x47c], 0x4c */
  W32((uint32_t)(esp + 0x47cu), 0x4cu);
/* 981be5: mov dword ptr [esp + 0x480], eax */
  W32((uint32_t)(esp + 0x480u), eax);
/* 981bec: mov dword ptr [esp + 0x484], eax */
  W32((uint32_t)(esp + 0x484u), eax);
/* 981bf3: mov dword ptr [esp + 0x488], eax */
  W32((uint32_t)(esp + 0x488u), eax);
/* 981bfa: mov dword ptr [esp + 0x48c], eax */
  W32((uint32_t)(esp + 0x48cu), eax);
/* 981c01: mov dword ptr [esp + 0x490], 0xb03658 */
  W32((uint32_t)(esp + 0x490u), 0xb03658u);
/* 981c0c: mov dword ptr [esp + 0x494], ecx */
  W32((uint32_t)(esp + 0x494u), ecx);
/* 981c13: mov dword ptr [esp + 0x498], edx */
  W32((uint32_t)(esp + 0x498u), edx);
/* 981c1a: mov dword ptr [esp + 0x49c], esi */
  W32((uint32_t)(esp + 0x49cu), esi);
/* 981c21: mov dword ptr [esp + 0x4a0], eax */
  W32((uint32_t)(esp + 0x4a0u), eax);
/* 981c28: mov dword ptr [esp + 0x4a4], eax */
  W32((uint32_t)(esp + 0x4a4u), eax);
/* 981c2f: mov dword ptr [esp + 0x4a8], eax */
  W32((uint32_t)(esp + 0x4a8u), eax);
/* 981c36: mov dword ptr [esp + 0x4ac], eax */
  W32((uint32_t)(esp + 0x4acu), eax);
/* 981c3d: mov dword ptr [esp + 0x4b0], 0xb03648 */
  W32((uint32_t)(esp + 0x4b0u), 0xb03648u);
/* 981c48: mov dword ptr [esp + 0x4b4], ecx */
  W32((uint32_t)(esp + 0x4b4u), ecx);
/* 981c4f: mov dword ptr [esp + 0x4b8], edx */
  W32((uint32_t)(esp + 0x4b8u), edx);
/* 981c56: mov dword ptr [esp + 0x4bc], ebx */
  W32((uint32_t)(esp + 0x4bcu), ebx);
/* 981c5d: mov dword ptr [esp + 0x4c0], eax */
  W32((uint32_t)(esp + 0x4c0u), eax);
/* 981c64: mov dword ptr [esp + 0x4c4], eax */
  W32((uint32_t)(esp + 0x4c4u), eax);
/* 981c6b: mov dword ptr [esp + 0x4c8], eax */
  W32((uint32_t)(esp + 0x4c8u), eax);
/* 981c72: mov dword ptr [esp + 0x4cc], eax */
  W32((uint32_t)(esp + 0x4ccu), eax);
/* 981c79: mov dword ptr [esp + 0x4d0], 0xb0363c */
  W32((uint32_t)(esp + 0x4d0u), 0xb0363cu);
/* 981c84: mov dword ptr [esp + 0x4d4], ecx */
  W32((uint32_t)(esp + 0x4d4u), ecx);
/* 981c8b: mov dword ptr [esp + 0x4d8], edi */
  W32((uint32_t)(esp + 0x4d8u), edi);
/* 981c92: mov dword ptr [esp + 0x4dc], 0xb4 */
  W32((uint32_t)(esp + 0x4dcu), 0xb4u);
/* 981c9d: mov dword ptr [esp + 0x4e0], eax */
  W32((uint32_t)(esp + 0x4e0u), eax);
/* 981ca4: mov dword ptr [esp + 0x4e4], eax */
  W32((uint32_t)(esp + 0x4e4u), eax);
/* 981cab: mov dword ptr [esp + 0x4e8], eax */
  W32((uint32_t)(esp + 0x4e8u), eax);
/* 981cb2: mov dword ptr [esp + 0x4ec], eax */
  W32((uint32_t)(esp + 0x4ecu), eax);
/* 981cb9: mov dword ptr [esp + 0x4f0], 0xb03628 */
  W32((uint32_t)(esp + 0x4f0u), 0xb03628u);
/* 981cc4: mov dword ptr [esp + 0x4f4], ecx */
  W32((uint32_t)(esp + 0x4f4u), ecx);
/* 981ccb: mov dword ptr [esp + 0x4f8], edx */
  W32((uint32_t)(esp + 0x4f8u), edx);
/* 981cd2: mov dword ptr [esp + 0x4fc], 0x50 */
  W32((uint32_t)(esp + 0x4fcu), 0x50u);
/* 981cdd: mov dword ptr [esp + 0x500], eax */
  W32((uint32_t)(esp + 0x500u), eax);
/* 981ce4: mov dword ptr [esp + 0x504], eax */
  W32((uint32_t)(esp + 0x504u), eax);
/* 981ceb: mov dword ptr [esp + 0x508], eax */
  W32((uint32_t)(esp + 0x508u), eax);
/* 981cf2: mov dword ptr [esp + 0x50c], eax */
  W32((uint32_t)(esp + 0x50cu), eax);
/* 981cf9: mov dword ptr [esp + 0x510], 0xb03618 */
  W32((uint32_t)(esp + 0x510u), 0xb03618u);
/* 981d04: mov dword ptr [esp + 0x514], ecx */
  W32((uint32_t)(esp + 0x514u), ecx);
/* 981d0b: mov dword ptr [esp + 0x518], edx */
  W32((uint32_t)(esp + 0x518u), edx);
/* 981d12: mov dword ptr [esp + 0x51c], ebp */
  W32((uint32_t)(esp + 0x51cu), ebp);
/* 981d19: mov dword ptr [esp + 0x520], eax */
  W32((uint32_t)(esp + 0x520u), eax);
/* 981d20: mov dword ptr [esp + 0x524], eax */
  W32((uint32_t)(esp + 0x524u), eax);
/* 981d27: mov dword ptr [esp + 0x528], eax */
  W32((uint32_t)(esp + 0x528u), eax);
/* 981d2e: mov dword ptr [esp + 0x52c], eax */
  W32((uint32_t)(esp + 0x52cu), eax);
/* 981d35: mov dword ptr [esp + 0x530], 0xb03608 */
  W32((uint32_t)(esp + 0x530u), 0xb03608u);
/* 981d40: mov dword ptr [esp + 0x534], ecx */
  W32((uint32_t)(esp + 0x534u), ecx);
/* 981d47: mov dword ptr [esp + 0x538], edx */
  W32((uint32_t)(esp + 0x538u), edx);
/* 981d4e: mov dword ptr [esp + 0x53c], 0x70 */
  W32((uint32_t)(esp + 0x53cu), 0x70u);
/* 981d59: mov dword ptr [esp + 0x540], eax */
  W32((uint32_t)(esp + 0x540u), eax);
/* 981d60: mov dword ptr [esp + 0x544], eax */
  W32((uint32_t)(esp + 0x544u), eax);
/* 981d67: mov dword ptr [esp + 0x548], eax */
  W32((uint32_t)(esp + 0x548u), eax);
/* 981d6e: mov dword ptr [esp + 0x54c], eax */
  W32((uint32_t)(esp + 0x54cu), eax);
/* 981d75: mov dword ptr [esp + 0x550], 0xb036a4 */
  W32((uint32_t)(esp + 0x550u), 0xb036a4u);
/* 981d80: mov dword ptr [esp + 0x554], ecx */
  W32((uint32_t)(esp + 0x554u), ecx);
/* 981d87: mov dword ptr [esp + 0x558], edi */
  W32((uint32_t)(esp + 0x558u), edi);
/* 981d8e: mov dword ptr [esp + 0x55c], 0xb8 */
  W32((uint32_t)(esp + 0x55cu), 0xb8u);
/* 981d99: mov dword ptr [esp + 0x560], eax */
  W32((uint32_t)(esp + 0x560u), eax);
/* 981da0: mov dword ptr [esp + 0x564], eax */
  W32((uint32_t)(esp + 0x564u), eax);
/* 981da7: mov dword ptr [esp + 0x568], eax */
  W32((uint32_t)(esp + 0x568u), eax);
/* 981dae: mov dword ptr [esp + 0x56c], eax */
  W32((uint32_t)(esp + 0x56cu), eax);
/* 981db5: mov dword ptr [esp + 0x570], 0xb035f0 */
  W32((uint32_t)(esp + 0x570u), 0xb035f0u);
/* 981dc0: mov dword ptr [esp + 0x574], ecx */
  W32((uint32_t)(esp + 0x574u), ecx);
/* 981dc7: mov dword ptr [esp + 0x578], edx */
  W32((uint32_t)(esp + 0x578u), edx);
/* 981dce: mov dword ptr [esp + 0x57c], esi */
  W32((uint32_t)(esp + 0x57cu), esi);
/* 981dd5: mov dword ptr [esp + 0x580], eax */
  W32((uint32_t)(esp + 0x580u), eax);
/* 981ddc: mov dword ptr [esp + 0x584], eax */
  W32((uint32_t)(esp + 0x584u), eax);
/* 981de3: mov dword ptr [esp + 0x588], eax */
  W32((uint32_t)(esp + 0x588u), eax);
/* 981dea: mov dword ptr [esp + 0x58c], eax */
  W32((uint32_t)(esp + 0x58cu), eax);
/* 981df1: mov dword ptr [esp + 0x590], 0xb0369c */
  W32((uint32_t)(esp + 0x590u), 0xb0369cu);
/* 981dfc: mov dword ptr [esp + 0x594], ecx */
  W32((uint32_t)(esp + 0x594u), ecx);
/* 981e03: mov dword ptr [esp + 0x598], edx */
  W32((uint32_t)(esp + 0x598u), edx);
/* 981e0a: mov dword ptr [esp + 0x59c], ebx */
  W32((uint32_t)(esp + 0x59cu), ebx);
/* 981e11: mov dword ptr [esp + 0x5a0], eax */
  W32((uint32_t)(esp + 0x5a0u), eax);
/* 981e18: mov dword ptr [esp + 0x5a4], eax */
  W32((uint32_t)(esp + 0x5a4u), eax);
/* 981e1f: mov dword ptr [esp + 0x5a8], eax */
  W32((uint32_t)(esp + 0x5a8u), eax);
/* 981e26: mov dword ptr [esp + 0x5ac], eax */
  W32((uint32_t)(esp + 0x5acu), eax);
/* 981e2d: mov dword ptr [esp + 0x5b0], 0xb03768 */
  W32((uint32_t)(esp + 0x5b0u), 0xb03768u);
/* 981e38: mov dword ptr [esp + 0x5b4], ecx */
  W32((uint32_t)(esp + 0x5b4u), ecx);
/* 981e3f: mov dword ptr [esp + 0x5b8], edx */
  W32((uint32_t)(esp + 0x5b8u), edx);
/* 981e46: mov dword ptr [esp + 0x5bc], esi */
  W32((uint32_t)(esp + 0x5bcu), esi);
/* 981e4d: mov dword ptr [esp + 0x5c0], eax */
  W32((uint32_t)(esp + 0x5c0u), eax);
/* 981e54: mov dword ptr [esp + 0x5c4], eax */
  W32((uint32_t)(esp + 0x5c4u), eax);
/* 981e5b: mov dword ptr [esp + 0x5c8], eax */
  W32((uint32_t)(esp + 0x5c8u), eax);
/* 981e62: mov dword ptr [esp + 0x5cc], eax */
  W32((uint32_t)(esp + 0x5ccu), eax);
/* 981e69: mov dword ptr [esp + 0x5d0], 0xb03758 */
  W32((uint32_t)(esp + 0x5d0u), 0xb03758u);
/* 981e74: mov dword ptr [esp + 0x5d4], ecx */
  W32((uint32_t)(esp + 0x5d4u), ecx);
/* 981e7b: mov dword ptr [esp + 0x5d8], edx */
  W32((uint32_t)(esp + 0x5d8u), edx);
/* 981e82: mov dword ptr [esp + 0x5dc], ebp */
  W32((uint32_t)(esp + 0x5dcu), ebp);
/* 981e89: mov dword ptr [esp + 0x5e0], eax */
  W32((uint32_t)(esp + 0x5e0u), eax);
/* 981e90: mov dword ptr [esp + 0x5e4], eax */
  W32((uint32_t)(esp + 0x5e4u), eax);
/* 981e97: mov dword ptr [esp + 0x5e8], eax */
  W32((uint32_t)(esp + 0x5e8u), eax);
/* 981e9e: mov dword ptr [esp + 0x5ec], eax */
  W32((uint32_t)(esp + 0x5ecu), eax);
/* 981ea5: mov dword ptr [esp + 0x5f0], 0xb03748 */
  W32((uint32_t)(esp + 0x5f0u), 0xb03748u);
/* 981eb0: mov dword ptr [esp + 0x5f4], ecx */
  W32((uint32_t)(esp + 0x5f4u), ecx);
/* 981eb7: mov dword ptr [esp + 0x5f8], edx */
  W32((uint32_t)(esp + 0x5f8u), edx);
/* 981ebe: mov dword ptr [esp + 0x5fc], 0x5c */
  W32((uint32_t)(esp + 0x5fcu), 0x5cu);
/* 981ec9: mov dword ptr [esp + 0x600], eax */
  W32((uint32_t)(esp + 0x600u), eax);
/* 981ed0: mov dword ptr [esp + 0x604], eax */
  W32((uint32_t)(esp + 0x604u), eax);
/* 981ed7: mov dword ptr [esp + 0x608], eax */
  W32((uint32_t)(esp + 0x608u), eax);
/* 981ede: mov dword ptr [esp + 0x60c], eax */
  W32((uint32_t)(esp + 0x60cu), eax);
/* 981ee5: mov dword ptr [esp + 0x610], 0xb03738 */
  W32((uint32_t)(esp + 0x610u), 0xb03738u);
/* 981ef0: mov dword ptr [esp + 0x614], ecx */
  W32((uint32_t)(esp + 0x614u), ecx);
/* 981ef7: mov dword ptr [esp + 0x618], edx */
  W32((uint32_t)(esp + 0x618u), edx);
/* 981efe: mov dword ptr [esp + 0x61c], ebx */
  W32((uint32_t)(esp + 0x61cu), ebx);
/* 981f05: mov dword ptr [esp + 0x620], eax */
  W32((uint32_t)(esp + 0x620u), eax);
/* 981f0c: mov dword ptr [esp + 0x624], eax */
  W32((uint32_t)(esp + 0x624u), eax);
/* 981f13: mov dword ptr [esp + 0x628], eax */
  W32((uint32_t)(esp + 0x628u), eax);
/* 981f1a: mov dword ptr [esp + 0x62c], eax */
  W32((uint32_t)(esp + 0x62cu), eax);
/* 981f21: mov dword ptr [esp + 0x634], ecx */
  W32((uint32_t)(esp + 0x634u), ecx);
/* 981f28: mov dword ptr [esp + 0x654], ecx */
  W32((uint32_t)(esp + 0x654u), ecx);
/* 981f2f: mov dword ptr [esp + 0x674], ecx */
  W32((uint32_t)(esp + 0x674u), ecx);
/* 981f36: mov dword ptr [esp + 0x694], ecx */
  W32((uint32_t)(esp + 0x694u), ecx);
/* 981f3d: mov dword ptr [esp + 0x6b4], ecx */
  W32((uint32_t)(esp + 0x6b4u), ecx);
/* 981f44: mov dword ptr [esp + 0x6d4], ecx */
  W32((uint32_t)(esp + 0x6d4u), ecx);
/* 981f4b: mov dword ptr [esp + 0x6f4], ecx */
  W32((uint32_t)(esp + 0x6f4u), ecx);
/* 981f52: mov dword ptr [esp + 0x714], ecx */
  W32((uint32_t)(esp + 0x714u), ecx);
/* 981f59: mov dword ptr [esp + 0x630], 0xb03728 */
  W32((uint32_t)(esp + 0x630u), 0xb03728u);
/* 981f64: mov dword ptr [esp + 0x638], edx */
  W32((uint32_t)(esp + 0x638u), edx);
/* 981f6b: mov dword ptr [esp + 0x63c], 0x70 */
  W32((uint32_t)(esp + 0x63cu), 0x70u);
/* 981f76: mov dword ptr [esp + 0x640], eax */
  W32((uint32_t)(esp + 0x640u), eax);
/* 981f7d: mov dword ptr [esp + 0x644], eax */
  W32((uint32_t)(esp + 0x644u), eax);
/* 981f84: mov dword ptr [esp + 0x648], eax */
  W32((uint32_t)(esp + 0x648u), eax);
/* 981f8b: mov dword ptr [esp + 0x64c], eax */
  W32((uint32_t)(esp + 0x64cu), eax);
/* 981f92: mov dword ptr [esp + 0x650], 0xb03718 */
  W32((uint32_t)(esp + 0x650u), 0xb03718u);
/* 981f9d: mov dword ptr [esp + 0x658], edx */
  W32((uint32_t)(esp + 0x658u), edx);
/* 981fa4: mov dword ptr [esp + 0x65c], 0x74 */
  W32((uint32_t)(esp + 0x65cu), 0x74u);
/* 981faf: mov dword ptr [esp + 0x660], eax */
  W32((uint32_t)(esp + 0x660u), eax);
/* 981fb6: mov dword ptr [esp + 0x664], eax */
  W32((uint32_t)(esp + 0x664u), eax);
/* 981fbd: mov dword ptr [esp + 0x668], eax */
  W32((uint32_t)(esp + 0x668u), eax);
/* 981fc4: mov dword ptr [esp + 0x66c], eax */
  W32((uint32_t)(esp + 0x66cu), eax);
/* 981fcb: mov dword ptr [esp + 0x670], 0xb03708 */
  W32((uint32_t)(esp + 0x670u), 0xb03708u);
/* 981fd6: mov dword ptr [esp + 0x678], edx */
  W32((uint32_t)(esp + 0x678u), edx);
/* 981fdd: mov dword ptr [esp + 0x67c], 0x60 */
  W32((uint32_t)(esp + 0x67cu), 0x60u);
/* 981fe8: mov dword ptr [esp + 0x680], eax */
  W32((uint32_t)(esp + 0x680u), eax);
/* 981fef: mov dword ptr [esp + 0x684], eax */
  W32((uint32_t)(esp + 0x684u), eax);
/* 981ff6: mov dword ptr [esp + 0x688], eax */
  W32((uint32_t)(esp + 0x688u), eax);
/* 981ffd: mov dword ptr [esp + 0x68c], eax */
  W32((uint32_t)(esp + 0x68cu), eax);
/* 982004: mov dword ptr [esp + 0x690], 0xb036f8 */
  W32((uint32_t)(esp + 0x690u), 0xb036f8u);
/* 98200f: mov dword ptr [esp + 0x698], edx */
  W32((uint32_t)(esp + 0x698u), edx);
/* 982016: mov dword ptr [esp + 0x69c], 0x64 */
  W32((uint32_t)(esp + 0x69cu), 0x64u);
/* 982021: mov dword ptr [esp + 0x6a0], eax */
  W32((uint32_t)(esp + 0x6a0u), eax);
/* 982028: mov dword ptr [esp + 0x6a4], eax */
  W32((uint32_t)(esp + 0x6a4u), eax);
/* 98202f: mov dword ptr [esp + 0x6a8], eax */
  W32((uint32_t)(esp + 0x6a8u), eax);
/* 982036: mov dword ptr [esp + 0x6ac], eax */
  W32((uint32_t)(esp + 0x6acu), eax);
/* 98203d: mov dword ptr [esp + 0x6b0], 0xb036e8 */
  W32((uint32_t)(esp + 0x6b0u), 0xb036e8u);
/* 982048: mov dword ptr [esp + 0x6b8], edx */
  W32((uint32_t)(esp + 0x6b8u), edx);
/* 98204f: mov dword ptr [esp + 0x6bc], 0x68 */
  W32((uint32_t)(esp + 0x6bcu), 0x68u);
/* 98205a: mov dword ptr [esp + 0x6c0], eax */
  W32((uint32_t)(esp + 0x6c0u), eax);
/* 982061: mov dword ptr [esp + 0x6c4], eax */
  W32((uint32_t)(esp + 0x6c4u), eax);
/* 982068: mov dword ptr [esp + 0x6c8], eax */
  W32((uint32_t)(esp + 0x6c8u), eax);
/* 98206f: mov dword ptr [esp + 0x6cc], eax */
  W32((uint32_t)(esp + 0x6ccu), eax);
/* 982076: mov dword ptr [esp + 0x6d0], 0xb036d8 */
  W32((uint32_t)(esp + 0x6d0u), 0xb036d8u);
/* 982081: mov dword ptr [esp + 0x6d8], edx */
  W32((uint32_t)(esp + 0x6d8u), edx);
/* 982088: mov dword ptr [esp + 0x6dc], 0x78 */
  W32((uint32_t)(esp + 0x6dcu), 0x78u);
/* 982093: mov dword ptr [esp + 0x6e0], eax */
  W32((uint32_t)(esp + 0x6e0u), eax);
/* 98209a: mov dword ptr [esp + 0x6e4], eax */
  W32((uint32_t)(esp + 0x6e4u), eax);
/* 9820a1: mov dword ptr [esp + 0x6e8], eax */
  W32((uint32_t)(esp + 0x6e8u), eax);
/* 9820a8: mov dword ptr [esp + 0x6ec], eax */
  W32((uint32_t)(esp + 0x6ecu), eax);
/* 9820af: mov dword ptr [esp + 0x6f0], 0xb036c8 */
  W32((uint32_t)(esp + 0x6f0u), 0xb036c8u);
/* 9820ba: mov dword ptr [esp + 0x6f8], edx */
  W32((uint32_t)(esp + 0x6f8u), edx);
/* 9820c1: mov dword ptr [esp + 0x6fc], 0x7c */
  W32((uint32_t)(esp + 0x6fcu), 0x7cu);
/* 9820cc: mov dword ptr [esp + 0x700], eax */
  W32((uint32_t)(esp + 0x700u), eax);
/* 9820d3: mov dword ptr [esp + 0x704], eax */
  W32((uint32_t)(esp + 0x704u), eax);
/* 9820da: mov dword ptr [esp + 0x708], eax */
  W32((uint32_t)(esp + 0x708u), eax);
/* 9820e1: mov dword ptr [esp + 0x70c], eax */
  W32((uint32_t)(esp + 0x70cu), eax);
/* 9820e8: mov dword ptr [esp + 0x710], 0xb036b8 */
  W32((uint32_t)(esp + 0x710u), 0xb036b8u);
/* 9820f3: mov dword ptr [esp + 0x718], edx */
  W32((uint32_t)(esp + 0x718u), edx);
/* 9820fa: mov dword ptr [esp + 0x71c], 0x80 */
  W32((uint32_t)(esp + 0x71cu), 0x80u);
/* 982105: mov dword ptr [esp + 0x720], eax */
  W32((uint32_t)(esp + 0x720u), eax);
/* 98210c: mov dword ptr [esp + 0x724], eax */
  W32((uint32_t)(esp + 0x724u), eax);
/* 982113: mov dword ptr [esp + 0x728], eax */
  W32((uint32_t)(esp + 0x728u), eax);
/* 98211a: mov dword ptr [esp + 0x72c], eax */
  W32((uint32_t)(esp + 0x72cu), eax);
/* 982121: mov dword ptr [esp + 0x730], eax */
  W32((uint32_t)(esp + 0x730u), eax);
/* 982128: mov dword ptr [esp + 0x734], 2 */
  W32((uint32_t)(esp + 0x734u), 0x2u);
/* 982133: mov ecx, 6 */
  ecx = 0x6u;
/* 982138: lea edi, [esp + 0x738] */
  edi = (uint32_t)(esp + 0x738u);
/* 98213f: push 0xbc */
  { uint32_t v = 0xbcu; esp -= 4; W32(esp, v); }
/* 982144: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 982146: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x98214cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98214c: mov edi, dword ptr [esp + 0x754] */
  edi = R32((uint32_t)(esp + 0x754u));
/* 982153: mov ecx, dword ptr [0xb021a4] */
  ecx = R32((uint32_t)(0xb021a4u));
/* 982159: mov esi, eax */
  esi = eax;
/* 98215b: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 982161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982162: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982163: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982164: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982165: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 982167: call 0x982310 */
  esp -= 4; W32(esp, 0x98216cu); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 98216c: mov edx, dword ptr [esp + 0x758] */
  edx = R32((uint32_t)(esp + 0x758u));
/* 982173: mov ebx, eax */
  ebx = eax;
/* 982175: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982176: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982177: call 0x9825b0 */
  esp -= 4; W32(esp, 0x98217cu); SPILL(); f_9825b0(); if (g_unwind) return; RELOAD();
/* 98217c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98217d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98217e: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 982182: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982184: call 0x983940 */
  esp -= 4; W32(esp, 0x982189u); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 982189: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98218a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98218b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98218c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98218d: add esp, 0x740 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x740u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982193: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9821a0(void) {
  LOAD_REGS();
L_9821a0: /* 9821a0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9821a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9821a4: xor eax, eax */
  eax = 0;
/* 9821a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9821a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9821a8: mov dword ptr [esp + 0xc], 0xb031b8 */
  W32((uint32_t)(esp + 0xcu), 0xb031b8u);
/* 9821b0: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 9821b8: mov dword ptr [esp + 0x14], 0x9831b0 */
  W32((uint32_t)(esp + 0x14u), 0x9831b0u);
/* 9821c0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9821c4: mov dword ptr [esp + 0x1c], 0x10 */
  W32((uint32_t)(esp + 0x1cu), 0x10u);
/* 9821cc: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9821d0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9821d4: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 9821d8: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9821dc: mov dword ptr [esp + 0x30], 2 */
  W32((uint32_t)(esp + 0x30u), 0x2u);
/* 9821e4: mov ecx, 6 */
  ecx = 0x6u;
/* 9821e9: lea edi, [esp + 0x34] */
  edi = (uint32_t)(esp + 0x34u);
/* 9821ed: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 9821ef: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9821f1: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x9821f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9821f7: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 9821fb: mov ecx, dword ptr [0xb021a4] */
  ecx = R32((uint32_t)(0xb021a4u));
/* 982201: mov esi, eax */
  esi = eax;
/* 982203: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 982209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98220a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98220b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98220c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98220d: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 98220f: call 0x982310 */
  esp -= 4; W32(esp, 0x982214u); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 982214: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 982218: mov ebx, eax */
  ebx = eax;
/* 98221a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98221b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98221c: call 0x9825b0 */
  esp -= 4; W32(esp, 0x982221u); SPILL(); f_9825b0(); if (g_unwind) return; RELOAD();
/* 982221: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982222: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982223: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 982227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982228: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982229: call 0x983940 */
  esp -= 4; W32(esp, 0x98222eu); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 98222e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98222f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982230: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982231: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982234: ret 8 */
  esp += 12; SPILL(); return;
}

void f_982240(void) {
  LOAD_REGS();
L_982240: /* 982240: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 982243: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982244: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 982248: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982249: xor eax, eax */
  eax = 0;
/* 98224b: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 982253: mov dword ptr [esp + 0xc], 2 */
  W32((uint32_t)(esp + 0xcu), 0x2u);
/* 98225b: mov ecx, 6 */
  ecx = 0x6u;
/* 982260: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 982264: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 982266: mov eax, dword ptr [esi + 0x408] */
  eax = R32((uint32_t)(esi + 0x408u));
/* 98226c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98226d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98226f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 982271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982272: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 982274: call 0x982310 */
  esp -= 4; W32(esp, 0x982279u); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 982279: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98227d: mov edi, eax */
  edi = eax;
/* 98227f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982280: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982281: call 0x9825b0 */
  esp -= 4; W32(esp, 0x982286u); SPILL(); f_9825b0(); if (g_unwind) return; RELOAD();
/* 982286: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982287: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 982289: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 98228d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98228e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98228f: call 0x983940 */
  esp -= 4; W32(esp, 0x982294u); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 982294: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982295: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982296: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982299: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9822a0(void) {
  LOAD_REGS();
L_9822a0: /* 9822a0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9822a3: xor edx, edx */
  edx = 0;
/* 9822a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9822a6: xor eax, eax */
  eax = 0;
/* 9822a8: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 9822ac: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9822b0: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9822b4: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9822b8: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9822bc: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 9822c0: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 9822c4: mov dword ptr [esp + 4], 0xb03910 */
  W32((uint32_t)(esp + 0x4u), 0xb03910u);
/* 9822cc: mov dword ptr [esp + 0xc], 0x980c30 */
  W32((uint32_t)(esp + 0xcu), 0x980c30u);
/* 9822d4: mov dword ptr [esp + 0x28], 2 */
  W32((uint32_t)(esp + 0x28u), 0x2u);
/* 9822dc: mov ecx, 6 */
  ecx = 0x6u;
/* 9822e1: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 9822e5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 9822e7: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 9822eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9822ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9822ed: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 9822f1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 9822f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9822f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9822f7: call 0x983940 */
  esp -= 4; W32(esp, 0x9822fcu); SPILL(); f_983940(); if (g_unwind) return; RELOAD();
/* 9822fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9822fd: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982300: ret 8 */
  esp += 12; SPILL(); return;
}

void f_982310(void) {
  LOAD_REGS();
L_982310: /* 982310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982311: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 982313: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x982319u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982319: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98231d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 982321: mov esi, eax */
  esi = eax;
/* 982323: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 982327: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 982329: xor eax, eax */
  eax = 0;
/* 98232b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 98232e: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 982331: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 982335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982336: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982337: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 98233a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 98233d: call 0x982480 */
  esp -= 4; W32(esp, 0x982342u); SPILL(); f_982480(); if (g_unwind) return; RELOAD();
/* 982342: mov eax, esi */
  eax = esi;
/* 982344: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982345: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_982350(void) {
  LOAD_REGS();
L_982350: /* 982350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982351: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 982355: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982356: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 982359: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98235b: je 0x982391 */
  if (zf) goto L_982391;
L_98235d: /* 98235d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98235e: mov edi, edi */
  edi = edi;
L_982360: /* 982360: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 982362: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 982364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982365: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x98236bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98236b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 98236d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 982370: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982371: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x982377u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982377: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 982379: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98237a: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x982380u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982380: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 982383: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982384: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x98238au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98238a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98238c: mov esi, edi */
  esi = edi;
/* 98238e: jne 0x982360 */
  if (!zf) goto L_982360;
L_982390: /* 982390: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_982391: /* 982391: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 982394: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982396: je 0x9823a2 */
  if (zf) goto L_9823a2;
L_982398: /* 982398: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98239b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98239d: je 0x9823a2 */
  if (zf) goto L_9823a2;
L_98239f: /* 98239f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9823a0: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x9823a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9823a2: /* 9823a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9823a3: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9823a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9823a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9823aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9823ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9823b0(void) {
  LOAD_REGS();
L_9823b0: /* 9823b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9823b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9823b5: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 9823b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9823ba: je 0x9823d9 */
  if (zf) goto L_9823d9;
L_9823bc: /* 9823bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9823bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9823c0: /* 9823c0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9823c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9823c3: call 0x982350 */
  esp -= 4; W32(esp, 0x9823c8u); SPILL(); f_982350(); if (g_unwind) return; RELOAD();
/* 9823c8: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 9823cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9823cc: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9823d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9823d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9823d4: mov esi, edi */
  esi = edi;
/* 9823d6: jne 0x9823c0 */
  if (!zf) goto L_9823c0;
L_9823d8: /* 9823d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_9823d9: /* 9823d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9823da: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9823e0(void) {
  LOAD_REGS();
L_9823e0: /* 9823e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9823e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9823e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9823e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9823e4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9823e6: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9823ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9823ec: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9823ee: mov esi, eax */
  esi = eax;
/* 9823f0: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9823f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9823f6: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 9823fa: mov ebp, eax */
  ebp = eax;
/* 9823fc: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9823ff: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 982401: mov edi, ebx */
  edi = ebx;
/* 982403: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 982405: not ecx */
  ecx = ~ecx;
/* 982407: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982408: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x98240eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98240e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 982410: mov ecx, ebx */
  ecx = ebx;
/* 982412: mov edx, eax */
  edx = eax;
L_982414: /* 982414: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 982416: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 982417: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 982419: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98241a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98241c: jne 0x982414 */
  if (!zf) goto L_982414;
L_98241e: /* 98241e: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 982422: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 982425: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 982427: mov edi, ebx */
  edi = ebx;
/* 982429: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 98242b: not ecx */
  ecx = ~ecx;
/* 98242d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98242e: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x982434u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982434: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 982437: mov ecx, ebx */
  ecx = ebx;
/* 982439: mov edx, eax */
  edx = eax;
/* 98243b: nop  */
/* 98243c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_982440: /* 982440: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 982442: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 982443: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 982445: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 982446: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 982448: jne 0x982440 */
  if (!zf) goto L_982440;
L_98244a: /* 98244a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98244e: mov dword ptr [ebp], esi */
  W32((uint32_t)(ebp), esi);
/* 982451: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 982454: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982456: jne 0x982465 */
  if (!zf) goto L_982465;
L_982458: /* 982458: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982459: mov dword ptr [ecx + 0x10], ebp */
  W32((uint32_t)(ecx + 0x10u), ebp);
/* 98245c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98245d: mov dword ptr [ebp + 4], eax */
  W32((uint32_t)(ebp + 0x4u), eax);
/* 982460: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982461: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982462: ret 0xc */
  esp += 16; SPILL(); return;
L_982465: /* 982465: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982466: mov dword ptr [ebp + 4], eax */
  W32((uint32_t)(ebp + 0x4u), eax);
/* 982469: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98246a: mov dword ptr [ecx + 0x10], ebp */
  W32((uint32_t)(ecx + 0x10u), ebp);
/* 98246d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98246e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98246f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_982480(void) {
  LOAD_REGS();
L_982480: /* 982480: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982481: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 982485: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982487: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982488: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98248c: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 982490: je 0x9824d5 */
  if (zf) goto L_9824d5;
L_982492: /* 982492: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 982495: je 0x9824d5 */
  if (zf) goto L_9824d5;
L_982497: /* 982497: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 98249b: nop  */
/* 98249c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9824a0: /* 9824a0: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 9824a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9824a5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9824a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9824aa: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 9824ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9824af: call 0x9824e0 */
  esp -= 4; W32(esp, 0x9824b4u); SPILL(); f_9824e0(); if (g_unwind) return; RELOAD();
/* 9824b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9824b6: je 0x9824d5 */
  if (zf) goto L_9824d5;
L_9824b8: /* 9824b8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9824bc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9824c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9824c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9824c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9824c3: call 0x9823e0 */
  esp -= 4; W32(esp, 0x9824c8u); SPILL(); f_9823e0(); if (g_unwind) return; RELOAD();
/* 9824c8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9824cc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9824d0: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9824d3: jne 0x9824a0 */
  if (!zf) goto L_9824a0;
L_9824d5: /* 9824d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9824d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9824d7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9824e0(void) {
  LOAD_REGS();
L_9824e0: /* 9824e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9824e1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 9824e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9824e6: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 9824e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9824e9: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 9824ef: nop  */
L_9824f0: /* 9824f0: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 9824f5: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9824f8: jle 0x982507 */
  if ((zf || sf != of)) goto L_982507;
L_9824fa: /* 9824fa: movsx ecx, byte ptr [esi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 9824fd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9824ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982500: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x982502u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982502: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982505: jmp 0x982519 */
  goto L_982519;
L_982507: /* 982507: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 98250c: movsx edx, byte ptr [esi] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 98250f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 982511: xor eax, eax */
  eax = 0;
/* 982513: mov al, byte ptr [ecx + edx*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2))) & 0xffu);
/* 982516: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_982519: /* 982519: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98251b: je 0x982520 */
  if (zf) goto L_982520;
L_98251d: /* 98251d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98251e: jmp 0x9824f0 */
  goto L_9824f0;
L_982520: /* 982520: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
L_982522: /* 982522: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 982528: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98252b: jle 0x98253a */
  if ((zf || sf != of)) goto L_98253a;
L_98252d: /* 98252d: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 982530: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 982532: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982533: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x982535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982535: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982538: jmp 0x98254c */
  goto L_98254c;
L_98253a: /* 98253a: movsx ecx, byte ptr [esi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 98253d: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 982543: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 982545: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 982549: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_98254c: /* 98254c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98254e: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 982550: jne 0x982559 */
  if (!zf) goto L_982559;
L_982552: /* 982552: cmp al, 0x3d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 982554: je 0x982565 */
  if (zf) goto L_982565;
L_982556: /* 982556: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 982557: jmp 0x982522 */
  goto L_982522;
L_982559: /* 982559: cmp al, 0x3d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98255b: je 0x982565 */
  if (zf) goto L_982565;
L_98255d: /* 98255d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98255e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98255f: xor eax, eax */
  eax = 0;
/* 982561: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982562: ret 0xc */
  esp += 16; SPILL(); return;
L_982565: /* 982565: mov byte ptr [esi], 0 */
  W8((uint32_t)(esi), 0x0u);
/* 982568: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 98256b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98256c: cmp al, 0x22 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98256e: je 0x98257c */
  if (zf) goto L_98257c;
L_982570: /* 982570: cmp al, 0x27 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x27u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 982572: je 0x98257c */
  if (zf) goto L_98257c;
L_982574: /* 982574: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982575: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982576: xor eax, eax */
  eax = 0;
/* 982578: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982579: ret 0xc */
  esp += 16; SPILL(); return;
L_98257c: /* 98257c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 982580: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 982581: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* 982583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982584: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 982586: call dword ptr [0xcfb0e4] */
  esp -= 4; W32(esp, 0x98258cu); SPILL(); f_407106(); if (g_unwind) return; /* MSVCR70!strchr */ RELOAD();
/* 98258c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98258f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982591: jne 0x982599 */
  if (!zf) goto L_982599;
L_982593: /* 982593: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982594: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982595: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982596: ret 0xc */
  esp += 16; SPILL(); return;
L_982599: /* 982599: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98259d: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* 9825a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9825a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9825a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9825a3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 9825a5: mov eax, 1 */
  eax = 0x1u;
/* 9825aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9825ab: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9825b0(void) {
  LOAD_REGS();
L_9825b0: /* 9825b0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9825b2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9825b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9825b8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 9825bc: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9825c0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9825c2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 9825c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9825c7: jne 0x9825d2 */
  if (!zf) goto L_9825d2;
L_9825c9: /* 9825c9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 9825cc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9825cf: ret 8 */
  esp += 12; SPILL(); return;
L_9825d2: /* 9825d2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9825d5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 9825d8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9825e0(void) {
  LOAD_REGS();
L_9825e0: /* 9825e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9825e4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 9825e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9825e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9825ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9825eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9825ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9825ed: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9825f1: je 0x98262c */
  if (zf) goto L_98262c;
L_9825f3: /* 9825f3: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9825f7: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 9825fb: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 9825ff: jmp 0x982605 */
  goto L_982605;
L_982601: /* 982601: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_982605: /* 982605: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 982607: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982608: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982609: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98260a: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x98260cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98260c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98260e: jne 0x98262e */
  if (!zf) goto L_98262e;
L_982610: /* 982610: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982611: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982612: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982614: call 0x9825e0 */
  esp -= 4; W32(esp, 0x982619u); SPILL(); f_9825e0(); if (g_unwind) return; RELOAD();
/* 982619: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98261b: jne 0x98262e */
  if (!zf) goto L_98262e;
L_98261d: /* 98261d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 982621: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 982624: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982626: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 98262a: jne 0x982601 */
  if (!zf) goto L_982601;
L_98262c: /* 98262c: xor eax, eax */
  eax = 0;
L_98262e: /* 98262e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98262f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982630: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982631: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982632: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_982640(void) {
  LOAD_REGS();
L_982640: /* 982640: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 982644: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982645: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982647: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982648: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* 98264b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98264d: je 0x982694 */
  if (zf) goto L_982694;
L_98264f: /* 98264f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
L_982653: /* 982653: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 982655: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 982658: mov esi, edx */
  esi = edx;
/* 98265a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_982660: /* 982660: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 982662: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 982664: cmp bl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 982666: jne 0x982684 */
  if (!zf) goto L_982684;
L_982668: /* 982668: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98266a: je 0x982680 */
  if (zf) goto L_982680;
L_98266c: /* 98266c: mov bl, byte ptr [eax + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 98266f: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 982671: cmp bl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 982674: jne 0x982684 */
  if (!zf) goto L_982684;
L_982676: /* 982676: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 982679: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98267c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98267e: jne 0x982660 */
  if (!zf) goto L_982660;
L_982680: /* 982680: xor eax, eax */
  eax = 0;
/* 982682: jmp 0x982689 */
  goto L_982689;
L_982684: /* 982684: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 982686: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_982689: /* 982689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98268b: je 0x98269d */
  if (zf) goto L_98269d;
L_98268d: /* 98268d: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 982690: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982692: jne 0x982653 */
  if (!zf) goto L_982653;
L_982694: /* 982694: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982695: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982696: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982697: xor eax, eax */
  eax = 0;
/* 982699: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98269a: ret 8 */
  esp += 12; SPILL(); return;
L_98269d: /* 98269d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 9826a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9826a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9826a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9826a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9826a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9826b0(void) {
  LOAD_REGS();
L_9826b0: /* 9826b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9826b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9826b5: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 9826b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9826ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9826bb: call 0x982640 */
  esp -= 4; W32(esp, 0x9826c0u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 9826c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9826c2: je 0x982709 */
  if (zf) goto L_982709;
L_9826c4: /* 9826c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9826c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9826c6: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 9826ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9826d0: /* 9826d0: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 9826d2: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 9826d4: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 9826d6: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9826d8: jne 0x9826f8 */
  if (!zf) goto L_9826f8;
L_9826da: /* 9826da: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9826dc: je 0x9826f4 */
  if (zf) goto L_9826f4;
L_9826de: /* 9826de: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 9826e1: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 9826e4: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 9826e6: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9826e8: jne 0x9826f8 */
  if (!zf) goto L_9826f8;
L_9826ea: /* 9826ea: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9826ed: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9826f0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9826f2: jne 0x9826d0 */
  if (!zf) goto L_9826d0;
L_9826f4: /* 9826f4: xor eax, eax */
  eax = 0;
/* 9826f6: jmp 0x9826fd */
  goto L_9826fd;
L_9826f8: /* 9826f8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 9826fa: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_9826fd: /* 9826fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9826ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982700: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982701: jne 0x982709 */
  if (!zf) goto L_982709;
L_982703: /* 982703: mov eax, edi */
  eax = edi;
/* 982705: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982706: ret 0xc */
  esp += 16; SPILL(); return;
L_982709: /* 982709: xor eax, eax */
  eax = 0;
/* 98270b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98270c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_982710(void) {
  LOAD_REGS();
L_982710: /* 982710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982711: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 982715: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 982718: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98271a: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 98271e: je 0x98276e */
  if (zf) goto L_98276e;
L_982720: /* 982720: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982721: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 982725: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982726: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 98272a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98272b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98272c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 982730: jmp 0x982736 */
  goto L_982736;
L_982732: /* 982732: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_982736: /* 982736: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982738: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 98273a: je 0x982745 */
  if (zf) goto L_982745;
L_98273c: /* 98273c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 982740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982741: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982742: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982743: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x982745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_982745: /* 982745: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982746: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982747: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982749: call 0x982710 */
  esp -= 4; W32(esp, 0x98274eu); SPILL(); f_982710(); if (g_unwind) return; RELOAD();
/* 98274e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982750: jne 0x98275b */
  if (!zf) goto L_98275b;
L_982752: /* 982752: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 982756: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982757: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982759: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x98275bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_98275b: /* 98275b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98275f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 982762: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982764: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 982768: jne 0x982732 */
  if (!zf) goto L_982732;
L_98276a: /* 98276a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98276b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98276c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98276d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_98276e: /* 98276e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 98276f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_982780(void) {
  LOAD_REGS();
L_982780: /* 982780: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 982782: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x982788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982788: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98278c: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 982790: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 982792: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 982799: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 98279b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9827a0(void) {
  LOAD_REGS();
L_9827a0: /* 9827a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9827a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9827a5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9827a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9827a8: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 9827aa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9827ac: jne 0x9827b5 */
  if (!zf) goto L_9827b5;
L_9827ae: /* 9827ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9827af: xor eax, eax */
  eax = 0;
/* 9827b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9827b2: ret 4 */
  esp += 8; SPILL(); return;
L_9827b5: /* 9827b5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9827b7: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9827ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9827bb: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 9827bd: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9827c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9827c3: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 9827c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9827c8: je 0x9827f5 */
  if (zf) goto L_9827f5;
L_9827ca: /* 9827ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9827d0: /* 9827d0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 9827d2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9827d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9827d8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9827da: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9827dc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9827de: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9827e0: jne 0x9827e9 */
  if (!zf) goto L_9827e9;
L_9827e2: /* 9827e2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9827e4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9827e7: jmp 0x9827ee */
  goto L_9827ee;
L_9827e9: /* 9827e9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9827ec: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_9827ee: /* 9827ee: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 9827f1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9827f3: jne 0x9827d0 */
  if (!zf) goto L_9827d0;
L_9827f5: /* 9827f5: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 9827f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9827f9: jne 0x982802 */
  if (!zf) goto L_982802;
L_9827fb: /* 9827fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9827fc: xor eax, eax */
  eax = 0;
/* 9827fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9827ff: ret 4 */
  esp += 8; SPILL(); return;
L_982802: /* 982802: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 982804: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982805: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982806: ret 4 */
  esp += 8; SPILL(); return;
}

void f_982810(void) {
  LOAD_REGS();
L_982810: /* 982810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 982814: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 982816: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982818: je 0x982831 */
  if (zf) goto L_982831;
L_98281a: /* 98281a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98281b: nop  */
/* 98281c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_982820: /* 982820: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 982823: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982824: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x98282au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98282a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98282c: mov eax, esi */
  eax = esi;
/* 98282e: jne 0x982820 */
  if (!zf) goto L_982820;
L_982830: /* 982830: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_982831: /* 982831: ret 4 */
  esp += 8; SPILL(); return;
}

void f_982840(void) {
  LOAD_REGS();
L_982840: /* 982840: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 982844: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982845: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982846: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982847: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982848: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 98284c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98284d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98284e: call 0x982780 */
  esp -= 4; W32(esp, 0x982853u); SPILL(); f_982780(); if (g_unwind) return; RELOAD();
/* 982853: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 982857: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982858: call 0x9827a0 */
  esp -= 4; W32(esp, 0x98285du); SPILL(); f_9827a0(); if (g_unwind) return; RELOAD();
/* 98285d: mov edi, eax */
  edi = eax;
/* 98285f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982861: je 0x9828bd */
  if (zf) goto L_9828bd;
L_982863: /* 982863: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 982867: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 98286b: nop  */
/* 98286c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_982870: /* 982870: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982872: call 0x982640 */
  esp -= 4; W32(esp, 0x982877u); SPILL(); f_982640(); if (g_unwind) return; RELOAD();
/* 982877: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982879: je 0x9828ad */
  if (zf) goto L_9828ad;
L_98287b: /* 98287b: mov esi, ebp */
  esi = ebp;
/* 98287d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_982880: /* 982880: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 982882: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 982884: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 982886: jne 0x9828a4 */
  if (!zf) goto L_9828a4;
L_982888: /* 982888: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98288a: je 0x9828a0 */
  if (zf) goto L_9828a0;
L_98288c: /* 98288c: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 98288f: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 982891: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 982894: jne 0x9828a4 */
  if (!zf) goto L_9828a4;
L_982896: /* 982896: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 982899: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98289c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98289e: jne 0x982880 */
  if (!zf) goto L_982880;
L_9828a0: /* 9828a0: xor eax, eax */
  eax = 0;
/* 9828a2: jmp 0x9828a9 */
  goto L_9828a9;
L_9828a4: /* 9828a4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 9828a6: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_9828a9: /* 9828a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9828ab: je 0x9828d0 */
  if (zf) goto L_9828d0;
L_9828ad: /* 9828ad: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 9828b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9828b2: call 0x9827a0 */
  esp -= 4; W32(esp, 0x9828b7u); SPILL(); f_9827a0(); if (g_unwind) return; RELOAD();
/* 9828b7: mov edi, eax */
  edi = eax;
/* 9828b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9828bb: jne 0x982870 */
  if (!zf) goto L_982870;
L_9828bd: /* 9828bd: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9828c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9828c2: call 0x982810 */
  esp -= 4; W32(esp, 0x9828c7u); SPILL(); f_982810(); if (g_unwind) return; RELOAD();
/* 9828c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9828c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9828c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9828ca: xor eax, eax */
  eax = 0;
/* 9828cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9828cd: ret 0xc */
  esp += 16; SPILL(); return;
L_9828d0: /* 9828d0: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9828d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9828d5: call 0x982810 */
  esp -= 4; W32(esp, 0x9828dau); SPILL(); f_982810(); if (g_unwind) return; RELOAD();
/* 9828da: mov eax, edi */
  eax = edi;
/* 9828dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9828dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9828de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9828df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9828e0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9828f0(void) {
  LOAD_REGS();
L_9828f0: /* 9828f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9828f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9828f2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9828f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9828f7: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 9828fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_982900: /* 982900: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 982905: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 982908: jle 0x982917 */
  if ((zf || sf != of)) goto L_982917;
L_98290a: /* 98290a: movsx ecx, byte ptr [esi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 98290d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98290f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982910: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x982912u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982912: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982915: jmp 0x982929 */
  goto L_982929;
L_982917: /* 982917: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 98291c: movsx edx, byte ptr [esi] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 98291f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 982921: xor eax, eax */
  eax = 0;
/* 982923: mov al, byte ptr [ecx + edx*2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*2))) & 0xffu);
/* 982926: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_982929: /* 982929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98292b: je 0x982930 */
  if (zf) goto L_982930;
L_98292d: /* 98292d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98292e: jmp 0x982900 */
  goto L_982900;
L_982930: /* 982930: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 982934: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 982936: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 982938: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98293a: je 0x98298b */
  if (zf) goto L_98298b;
L_98293c: /* 98293c: cmp al, 0x2c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98293e: je 0x98294b */
  if (zf) goto L_98294b;
L_982940: /* 982940: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982941: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982942: mov eax, 1 */
  eax = 0x1u;
/* 982947: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982948: ret 8 */
  esp += 12; SPILL(); return;
L_98294b: /* 98294b: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 982951: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 982953: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 982954: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 982957: jle 0x982966 */
  if ((zf || sf != of)) goto L_982966;
L_982959: /* 982959: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 98295c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98295e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98295f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x982961u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982961: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982964: jmp 0x982978 */
  goto L_982978;
L_982966: /* 982966: movsx ecx, byte ptr [esi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 982969: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 98296f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 982971: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 982975: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_982978: /* 982978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98297a: jne 0x98294b */
  if (!zf) goto L_98294b;
L_98297c: /* 98297c: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 98297e: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 982980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982981: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 982983: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982984: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 982987: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982988: ret 8 */
  esp += 12; SPILL(); return;
L_98298b: /* 98298b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98298c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98298d: xor eax, eax */
  eax = 0;
/* 98298f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982990: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9829a0(void) {
  LOAD_REGS();
L_9829a0: /* 9829a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9829a4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9829a8: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9829ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9829af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9829b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9829b1: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 9829b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9829b5: mov edi, dword ptr [esp + 0x418] */
  edi = R32((uint32_t)(esp + 0x418u));
/* 9829bc: mov ebx, dword ptr [edi + 0x1018] */
  ebx = R32((uint32_t)(edi + 0x1018u));
/* 9829c2: mov ebp, dword ptr [edi + 0x101c] */
  ebp = R32((uint32_t)(edi + 0x101cu));
/* 9829c8: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9829ca: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 9829cf: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9829d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9829d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9829d5: call 0x9836b0 */
  esp -= 4; W32(esp, 0x9829dau); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 9829da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9829dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9829df: jne 0x982aa8 */
  if (!zf) goto L_982aa8;
L_9829e5: /* 9829e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9829e6: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 9829ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9829eb: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 9829ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9829f0: call dword ptr [0xcfb0c0] */
  esp -= 4; W32(esp, 0x9829f6u); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 9829f6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9829f8: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9829fc: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 982a00: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982a03: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 982a05: jne 0x982a35 */
  if (!zf) goto L_982a35;
L_982a07: /* 982a07: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 982a0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982a0c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982a0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982a0e: push 0xb03944 */
  { uint32_t v = 0xb03944u; esp -= 4; W32(esp, v); }
/* 982a13: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 982a19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982a1a: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982a20u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982a20: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982a23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982a24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982a25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982a26: mov eax, 2 */
  eax = 0x2u;
/* 982a2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982a2c: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982a32: ret 0xc */
  esp += 16; SPILL(); return;
L_982a35: /* 982a35: mov esi, dword ptr [0xcfb0b0] */
  esi = R32((uint32_t)(0xcfb0b0u));
/* 982a3b: nop  */
/* 982a3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_982a40: /* 982a40: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 982a46: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 982a49: jle 0x982a5c */
  if ((zf || sf != of)) goto L_982a5c;
L_982a4b: /* 982a4b: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 982a4e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 982a50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982a51: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x982a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982a53: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 982a57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982a5a: jmp 0x982a6d */
  goto L_982a6d;
L_982a5c: /* 982a5c: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 982a5f: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 982a64: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 982a66: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 982a6a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_982a6d: /* 982a6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982a6f: je 0x982a78 */
  if (zf) goto L_982a78;
L_982a71: /* 982a71: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 982a72: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 982a76: jmp 0x982a40 */
  goto L_982a40;
L_982a78: /* 982a78: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 982a7b: je 0x982aa6 */
  if (zf) goto L_982aa6;
L_982a7d: /* 982a7d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982a7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982a7f: push 0xb03918 */
  { uint32_t v = 0xb03918u; esp -= 4; W32(esp, v); }
/* 982a84: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 982a8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982a8b: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982a91u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982a91: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982a94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982a95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982a96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982a97: mov eax, 2 */
  eax = 0x2u;
/* 982a9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982a9d: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982aa3: ret 0xc */
  esp += 16; SPILL(); return;
L_982aa6: /* 982aa6: xor eax, eax */
  eax = 0;
L_982aa8: /* 982aa8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982aa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982aaa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982aab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982aac: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982ab2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_982ac0(void) {
  LOAD_REGS();
L_982ac0: /* 982ac0: sub esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 982ac6: mov edx, dword ptr [esp + 0x418] */
  edx = R32((uint32_t)(esp + 0x418u));
/* 982acd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982ace: mov ebx, dword ptr [edx + 0xc] */
  ebx = R32((uint32_t)(edx + 0xcu));
/* 982ad1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982ad2: mov ebp, dword ptr [esp + 0x41c] */
  ebp = R32((uint32_t)(esp + 0x41cu));
/* 982ad9: mov eax, dword ptr [ebp + 0x1018] */
  eax = R32((uint32_t)(ebp + 0x1018u));
/* 982adf: mov ecx, dword ptr [ebp + 0x101c] */
  ecx = R32((uint32_t)(ebp + 0x101cu));
/* 982ae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982ae6: mov esi, dword ptr [esp + 0x428] */
  esi = R32((uint32_t)(esp + 0x428u));
/* 982aed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982aee: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 982af2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 982af7: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 982afb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982afc: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* 982b00: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 982b02: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982b03: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 982b07: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 982b0b: xor esi, esi */
  esi = 0;
/* 982b0d: call 0x9836b0 */
  esp -= 4; W32(esp, 0x982b12u); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 982b12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982b15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982b17: jne 0x982bda */
  if (!zf) goto L_982bda;
L_982b1d: /* 982b1d: mov al, byte ptr [esp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 982b21: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 982b23: je 0x982b66 */
  if (zf) goto L_982b66;
L_982b25: /* 982b25: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 982b2c: cmp esi, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 982b2f: jae 0x982b66 */
  if (!cf) goto L_982b66;
L_982b31: /* 982b31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 982b33: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 982b37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982b38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982b39: call dword ptr [0xcfb0c0] */
  esp -= 4; W32(esp, 0x982b3fu); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 982b3f: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 982b42: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 982b46: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982b49: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 982b4a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 982b4c: je 0x982ba7 */
  if (zf) goto L_982ba7;
L_982b4e: /* 982b4e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 982b52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982b53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982b54: call 0x9828f0 */
  esp -= 4; W32(esp, 0x982b59u); SPILL(); f_9828f0(); if (g_unwind) return; RELOAD();
/* 982b59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982b5b: jne 0x982ba7 */
  if (!zf) goto L_982ba7;
L_982b5d: /* 982b5d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 982b61: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 982b64: jne 0x982b25 */
  if (!zf) goto L_982b25;
L_982b66: /* 982b66: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 982b6d: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 982b70: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 982b72: jae 0x982bd8 */
  if (!cf) goto L_982bd8;
L_982b74: /* 982b74: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 982b78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982b79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982b7a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 982b7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982b80: push 0xb039ac */
  { uint32_t v = 0xb039acu; esp -= 4; W32(esp, v); }
/* 982b85: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 982b8b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982b8c: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982b92u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982b92: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982b95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982b96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982b97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982b98: mov eax, 2 */
  eax = 0x2u;
/* 982b9d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982b9e: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982ba4: ret 0xc */
  esp += 16; SPILL(); return;
L_982ba7: /* 982ba7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 982bab: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 982baf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982bb1: push 0xb03978 */
  { uint32_t v = 0xb03978u; esp -= 4; W32(esp, v); }
/* 982bb6: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 982bbc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982bbd: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982bc3u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982bc3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982bc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982bc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982bc8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982bc9: mov eax, 2 */
  eax = 0x2u;
/* 982bce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982bcf: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982bd5: ret 0xc */
  esp += 16; SPILL(); return;
L_982bd8: /* 982bd8: xor eax, eax */
  eax = 0;
L_982bda: /* 982bda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982bdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982bdc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982bdd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982bde: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982be4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_982bf0(void) {
  LOAD_REGS();
L_982bf0: /* 982bf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 982bf4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 982bf8: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 982bfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982bff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982c01: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 982c04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982c05: mov edi, dword ptr [esp + 0x418] */
  edi = R32((uint32_t)(esp + 0x418u));
/* 982c0c: mov ebx, dword ptr [edi + 0x1018] */
  ebx = R32((uint32_t)(edi + 0x1018u));
/* 982c12: mov ebp, dword ptr [edi + 0x101c] */
  ebp = R32((uint32_t)(edi + 0x101cu));
/* 982c18: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 982c1a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 982c1f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 982c23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982c24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982c25: call 0x9836b0 */
  esp -= 4; W32(esp, 0x982c2au); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 982c2a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982c2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982c2f: jne 0x982cf8 */
  if (!zf) goto L_982cf8;
L_982c35: /* 982c35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982c36: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 982c3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982c3b: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 982c3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982c40: call dword ptr [0xcfb0c0] */
  esp -= 4; W32(esp, 0x982c46u); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 982c46: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 982c48: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 982c4c: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 982c50: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982c53: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 982c55: jne 0x982c85 */
  if (!zf) goto L_982c85;
L_982c57: /* 982c57: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 982c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982c5c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982c5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982c5e: push 0xb039e4 */
  { uint32_t v = 0xb039e4u; esp -= 4; W32(esp, v); }
/* 982c63: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 982c69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982c6a: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982c70u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982c70: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982c73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982c74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982c75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982c76: mov eax, 2 */
  eax = 0x2u;
/* 982c7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982c7c: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982c82: ret 0xc */
  esp += 16; SPILL(); return;
L_982c85: /* 982c85: mov esi, dword ptr [0xcfb0b0] */
  esi = R32((uint32_t)(0xcfb0b0u));
/* 982c8b: nop  */
/* 982c8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_982c90: /* 982c90: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 982c96: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 982c99: jle 0x982cac */
  if ((zf || sf != of)) goto L_982cac;
L_982c9b: /* 982c9b: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 982c9e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 982ca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982ca1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x982ca3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982ca3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 982ca7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982caa: jmp 0x982cbd */
  goto L_982cbd;
L_982cac: /* 982cac: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 982caf: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 982cb4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 982cb6: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 982cba: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_982cbd: /* 982cbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982cbf: je 0x982cc8 */
  if (zf) goto L_982cc8;
L_982cc1: /* 982cc1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 982cc2: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 982cc6: jmp 0x982c90 */
  goto L_982c90;
L_982cc8: /* 982cc8: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 982ccb: je 0x982cf6 */
  if (zf) goto L_982cf6;
L_982ccd: /* 982ccd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982cce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982ccf: push 0xb03918 */
  { uint32_t v = 0xb03918u; esp -= 4; W32(esp, v); }
/* 982cd4: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 982cda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982cdb: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982ce1u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982ce1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982ce4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982ce5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982ce6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982ce7: mov eax, 2 */
  eax = 0x2u;
/* 982cec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982ced: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982cf3: ret 0xc */
  esp += 16; SPILL(); return;
L_982cf6: /* 982cf6: xor eax, eax */
  eax = 0;
L_982cf8: /* 982cf8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982cf9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982cfa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982cfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982cfc: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982d02: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_982d10(void) {
  LOAD_REGS();
L_982d10: /* 982d10: sub esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 982d16: mov edx, dword ptr [esp + 0x418] */
  edx = R32((uint32_t)(esp + 0x418u));
/* 982d1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982d1e: mov ebx, dword ptr [edx + 0xc] */
  ebx = R32((uint32_t)(edx + 0xcu));
/* 982d21: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982d22: mov ebp, dword ptr [esp + 0x41c] */
  ebp = R32((uint32_t)(esp + 0x41cu));
/* 982d29: mov eax, dword ptr [ebp + 0x1018] */
  eax = R32((uint32_t)(ebp + 0x1018u));
/* 982d2f: mov ecx, dword ptr [ebp + 0x101c] */
  ecx = R32((uint32_t)(ebp + 0x101cu));
/* 982d35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982d36: mov esi, dword ptr [esp + 0x428] */
  esi = R32((uint32_t)(esp + 0x428u));
/* 982d3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982d3e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 982d42: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 982d47: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 982d4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982d4c: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* 982d50: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 982d52: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982d53: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 982d57: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 982d5b: xor esi, esi */
  esi = 0;
/* 982d5d: call 0x9836b0 */
  esp -= 4; W32(esp, 0x982d62u); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 982d62: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982d65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982d67: jne 0x982e2a */
  if (!zf) goto L_982e2a;
L_982d6d: /* 982d6d: mov al, byte ptr [esp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 982d71: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 982d73: je 0x982db6 */
  if (zf) goto L_982db6;
L_982d75: /* 982d75: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 982d7c: cmp esi, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 982d7f: jae 0x982db6 */
  if (!cf) goto L_982db6;
L_982d81: /* 982d81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 982d83: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 982d87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982d88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982d89: call dword ptr [0xcfb0c0] */
  esp -= 4; W32(esp, 0x982d8fu); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 982d8f: mov dword ptr [ebx + esi*4], eax */
  W32((uint32_t)(ebx + esi*4), eax);
/* 982d92: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 982d96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982d99: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 982d9a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 982d9c: je 0x982df7 */
  if (zf) goto L_982df7;
L_982d9e: /* 982d9e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 982da2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982da3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982da4: call 0x9828f0 */
  esp -= 4; W32(esp, 0x982da9u); SPILL(); f_9828f0(); if (g_unwind) return; RELOAD();
/* 982da9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982dab: jne 0x982df7 */
  if (!zf) goto L_982df7;
L_982dad: /* 982dad: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 982db1: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 982db4: jne 0x982d75 */
  if (!zf) goto L_982d75;
L_982db6: /* 982db6: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 982dbd: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 982dc0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 982dc2: jae 0x982e28 */
  if (!cf) goto L_982e28;
L_982dc4: /* 982dc4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 982dc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982dca: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 982dce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982dcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982dd0: push 0xb03a3c */
  { uint32_t v = 0xb03a3cu; esp -= 4; W32(esp, v); }
/* 982dd5: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 982ddb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982ddc: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982de2u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982de2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982de5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982de6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982de7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982de8: mov eax, 2 */
  eax = 0x2u;
/* 982ded: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982dee: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982df4: ret 0xc */
  esp += 16; SPILL(); return;
L_982df7: /* 982df7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 982dfb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 982dff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982e01: push 0xb03a10 */
  { uint32_t v = 0xb03a10u; esp -= 4; W32(esp, v); }
/* 982e06: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 982e0c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982e0d: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982e13u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982e16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982e17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982e18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982e19: mov eax, 2 */
  eax = 0x2u;
/* 982e1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982e1f: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982e25: ret 0xc */
  esp += 16; SPILL(); return;
L_982e28: /* 982e28: xor eax, eax */
  eax = 0;
L_982e2a: /* 982e2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982e2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982e2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982e2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982e2e: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982e34: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_982e40(void) {
  LOAD_REGS();
L_982e40: /* 982e40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 982e44: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 982e48: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 982e4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982e4f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982e50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982e51: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 982e54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982e55: mov edi, dword ptr [esp + 0x418] */
  edi = R32((uint32_t)(esp + 0x418u));
/* 982e5c: mov ebx, dword ptr [edi + 0x1018] */
  ebx = R32((uint32_t)(edi + 0x1018u));
/* 982e62: mov ebp, dword ptr [edi + 0x101c] */
  ebp = R32((uint32_t)(edi + 0x101cu));
/* 982e68: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 982e6a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 982e6f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 982e73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982e74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982e75: call 0x9836b0 */
  esp -= 4; W32(esp, 0x982e7au); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 982e7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982e7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982e7f: jne 0x982f48 */
  if (!zf) goto L_982f48;
L_982e85: /* 982e85: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 982e89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982e8a: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 982e8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982e8f: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x982e95u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 982e95: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 982e97: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 982e9b: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 982e9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982ea2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 982ea4: jne 0x982ed4 */
  if (!zf) goto L_982ed4;
L_982ea6: /* 982ea6: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 982eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982eab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982eac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982ead: push 0xb03a6c */
  { uint32_t v = 0xb03a6cu; esp -= 4; W32(esp, v); }
/* 982eb2: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 982eb8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982eb9: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982ebfu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982ebf: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982ec2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982ec3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982ec4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982ec5: mov eax, 2 */
  eax = 0x2u;
/* 982eca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982ecb: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982ed1: ret 0xc */
  esp += 16; SPILL(); return;
L_982ed4: /* 982ed4: mov esi, dword ptr [0xcfb0b0] */
  esi = R32((uint32_t)(0xcfb0b0u));
/* 982eda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_982ee0: /* 982ee0: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 982ee6: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 982ee9: jle 0x982efc */
  if ((zf || sf != of)) goto L_982efc;
L_982eeb: /* 982eeb: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 982eee: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 982ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982ef1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x982ef3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 982ef3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 982ef7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982efa: jmp 0x982f0d */
  goto L_982f0d;
L_982efc: /* 982efc: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 982eff: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 982f04: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 982f06: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 982f0a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_982f0d: /* 982f0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982f0f: je 0x982f18 */
  if (zf) goto L_982f18;
L_982f11: /* 982f11: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 982f12: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 982f16: jmp 0x982ee0 */
  goto L_982ee0;
L_982f18: /* 982f18: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 982f1b: je 0x982f46 */
  if (zf) goto L_982f46;
L_982f1d: /* 982f1d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982f1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982f1f: push 0xb03918 */
  { uint32_t v = 0xb03918u; esp -= 4; W32(esp, v); }
/* 982f24: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 982f2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982f2b: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x982f31u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 982f31: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982f34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982f35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982f36: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982f37: mov eax, 2 */
  eax = 0x2u;
/* 982f3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982f3d: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982f43: ret 0xc */
  esp += 16; SPILL(); return;
L_982f46: /* 982f46: xor eax, eax */
  eax = 0;
L_982f48: /* 982f48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 982f49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 982f4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 982f4b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 982f4c: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982f52: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_982f60(void) {
  LOAD_REGS();
L_982f60: /* 982f60: sub esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 982f66: mov edx, dword ptr [esp + 0x418] */
  edx = R32((uint32_t)(esp + 0x418u));
/* 982f6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982f6e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982f6f: mov ebp, dword ptr [esp + 0x41c] */
  ebp = R32((uint32_t)(esp + 0x41cu));
/* 982f76: mov eax, dword ptr [ebp + 0x1018] */
  eax = R32((uint32_t)(ebp + 0x1018u));
/* 982f7c: mov ecx, dword ptr [ebp + 0x101c] */
  ecx = R32((uint32_t)(ebp + 0x101cu));
/* 982f82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 982f83: mov esi, dword ptr [esp + 0x428] */
  esi = R32((uint32_t)(esp + 0x428u));
/* 982f8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 982f8b: mov edi, dword ptr [edx + 0xc] */
  edi = R32((uint32_t)(edx + 0xcu));
/* 982f8e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 982f92: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 982f97: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 982f9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982f9c: lea ebx, [esp + 0x28] */
  ebx = (uint32_t)(esp + 0x28u);
/* 982fa0: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 982fa2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 982fa3: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 982fa7: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 982fab: xor esi, esi */
  esi = 0;
/* 982fad: call 0x9836b0 */
  esp -= 4; W32(esp, 0x982fb2u); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 982fb2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982fb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982fb7: jne 0x983078 */
  if (!zf) goto L_983078;
L_982fbd: /* 982fbd: mov al, byte ptr [esp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 982fc1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 982fc3: je 0x983004 */
  if (zf) goto L_983004;
L_982fc5: /* 982fc5: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 982fcc: cmp esi, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 982fcf: jae 0x983004 */
  if (!cf) goto L_983004;
L_982fd1: /* 982fd1: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 982fd5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 982fd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 982fd7: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x982fddu); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 982fdd: fstp dword ptr [edi + esi*4] */
  WF32((uint32_t)(edi + esi*4), ST0); FPOP();
/* 982fe0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 982fe4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 982fe7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 982fe8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 982fea: je 0x983045 */
  if (zf) goto L_983045;
L_982fec: /* 982fec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 982ff0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 982ff1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 982ff2: call 0x9828f0 */
  esp -= 4; W32(esp, 0x982ff7u); SPILL(); f_9828f0(); if (g_unwind) return; RELOAD();
/* 982ff7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 982ff9: jne 0x983045 */
  if (!zf) goto L_983045;
L_982ffb: /* 982ffb: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 982fff: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983002: jne 0x982fc5 */
  if (!zf) goto L_982fc5;
L_983004: /* 983004: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 98300b: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 98300e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 983010: jae 0x983076 */
  if (!cf) goto L_983076;
L_983012: /* 983012: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 983016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983017: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983018: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98301c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98301d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98301e: push 0xb03ac4 */
  { uint32_t v = 0xb03ac4u; esp -= 4; W32(esp, v); }
/* 983023: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 983029: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98302a: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983030u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983030: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983033: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983034: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983035: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983036: mov eax, 2 */
  eax = 0x2u;
/* 98303b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98303c: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983042: ret 0xc */
  esp += 16; SPILL(); return;
L_983045: /* 983045: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 983049: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98304d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98304e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98304f: push 0xb03a98 */
  { uint32_t v = 0xb03a98u; esp -= 4; W32(esp, v); }
/* 983054: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 98305a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98305b: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983061u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983061: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983066: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983067: mov eax, 2 */
  eax = 0x2u;
/* 98306c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98306d: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983073: ret 0xc */
  esp += 16; SPILL(); return;
L_983076: /* 983076: xor eax, eax */
  eax = 0;
L_983078: /* 983078: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983079: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98307a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98307b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98307c: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983082: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_983090(void) {
  LOAD_REGS();
L_983090: /* 983090: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 983094: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 983098: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98309e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98309f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9830a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9830a1: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 9830a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9830a5: mov edi, dword ptr [esp + 0x418] */
  edi = R32((uint32_t)(esp + 0x418u));
/* 9830ac: mov ebx, dword ptr [edi + 0x1018] */
  ebx = R32((uint32_t)(edi + 0x1018u));
/* 9830b2: mov ebp, dword ptr [edi + 0x101c] */
  ebp = R32((uint32_t)(edi + 0x101cu));
/* 9830b8: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9830ba: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 9830bf: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 9830c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9830c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9830c5: call 0x9836b0 */
  esp -= 4; W32(esp, 0x9830cau); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 9830ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9830cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9830cf: jne 0x983198 */
  if (!zf) goto L_983198;
L_9830d5: /* 9830d5: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 9830d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9830da: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 9830de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9830df: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x9830e5u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 9830e5: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 9830e7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9830eb: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9830ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9830f2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9830f4: jne 0x983124 */
  if (!zf) goto L_983124;
L_9830f6: /* 9830f6: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 9830fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9830fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9830fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9830fd: push 0xb03af4 */
  { uint32_t v = 0xb03af4u; esp -= 4; W32(esp, v); }
/* 983102: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 983108: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983109: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x98310fu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 98310f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983112: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983113: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983114: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983115: mov eax, 2 */
  eax = 0x2u;
/* 98311a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98311b: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983121: ret 0xc */
  esp += 16; SPILL(); return;
L_983124: /* 983124: mov esi, dword ptr [0xcfb0b0] */
  esi = R32((uint32_t)(0xcfb0b0u));
/* 98312a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_983130: /* 983130: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 983136: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 983139: jle 0x98314c */
  if ((zf || sf != of)) goto L_98314c;
L_98313b: /* 98313b: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 98313e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 983140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983141: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x983143u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 983143: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 983147: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98314a: jmp 0x98315d */
  goto L_98315d;
L_98314c: /* 98314c: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 98314f: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 983154: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 983156: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 98315a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_98315d: /* 98315d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98315f: je 0x983168 */
  if (zf) goto L_983168;
L_983161: /* 983161: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 983162: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 983166: jmp 0x983130 */
  goto L_983130;
L_983168: /* 983168: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98316b: je 0x983196 */
  if (zf) goto L_983196;
L_98316d: /* 98316d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98316e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98316f: push 0xb03918 */
  { uint32_t v = 0xb03918u; esp -= 4; W32(esp, v); }
/* 983174: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98317a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98317b: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983181u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983181: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983184: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983185: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983186: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983187: mov eax, 2 */
  eax = 0x2u;
/* 98318c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98318d: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983193: ret 0xc */
  esp += 16; SPILL(); return;
L_983196: /* 983196: xor eax, eax */
  eax = 0;
L_983198: /* 983198: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983199: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98319a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98319b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98319c: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9831a2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9831b0(void) {
  LOAD_REGS();
L_9831b0: /* 9831b0: sub esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9831b6: mov edx, dword ptr [esp + 0x418] */
  edx = R32((uint32_t)(esp + 0x418u));
/* 9831bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9831be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9831bf: mov ebp, dword ptr [esp + 0x41c] */
  ebp = R32((uint32_t)(esp + 0x41cu));
/* 9831c6: mov eax, dword ptr [ebp + 0x1018] */
  eax = R32((uint32_t)(ebp + 0x1018u));
/* 9831cc: mov ecx, dword ptr [ebp + 0x101c] */
  ecx = R32((uint32_t)(ebp + 0x101cu));
/* 9831d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9831d3: mov esi, dword ptr [esp + 0x428] */
  esi = R32((uint32_t)(esp + 0x428u));
/* 9831da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9831db: mov edi, dword ptr [edx + 0xc] */
  edi = R32((uint32_t)(edx + 0xcu));
/* 9831de: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9831e2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 9831e7: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9831eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9831ec: lea ebx, [esp + 0x28] */
  ebx = (uint32_t)(esp + 0x28u);
/* 9831f0: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9831f2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9831f3: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 9831f7: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 9831fb: xor esi, esi */
  esi = 0;
/* 9831fd: call 0x9836b0 */
  esp -= 4; W32(esp, 0x983202u); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 983202: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983205: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983207: jne 0x9832c8 */
  if (!zf) goto L_9832c8;
L_98320d: /* 98320d: mov al, byte ptr [esp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 983211: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983213: je 0x983254 */
  if (zf) goto L_983254;
L_983215: /* 983215: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 98321c: cmp esi, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98321f: jae 0x983254 */
  if (!cf) goto L_983254;
L_983221: /* 983221: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 983225: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983226: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 983227: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x98322du); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 98322d: fstp dword ptr [edi + esi*4] */
  WF32((uint32_t)(edi + esi*4), ST0); FPOP();
/* 983230: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 983234: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983237: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 983238: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98323a: je 0x983295 */
  if (zf) goto L_983295;
L_98323c: /* 98323c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 983240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983241: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983242: call 0x9828f0 */
  esp -= 4; W32(esp, 0x983247u); SPILL(); f_9828f0(); if (g_unwind) return; RELOAD();
/* 983247: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983249: jne 0x983295 */
  if (!zf) goto L_983295;
L_98324b: /* 98324b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98324f: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 983252: jne 0x983215 */
  if (!zf) goto L_983215;
L_983254: /* 983254: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 98325b: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 98325e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 983260: jae 0x9832c6 */
  if (!cf) goto L_9832c6;
L_983262: /* 983262: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 983266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983267: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983268: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98326c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98326d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98326e: push 0xb03b54 */
  { uint32_t v = 0xb03b54u; esp -= 4; W32(esp, v); }
/* 983273: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 983279: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98327a: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983280u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983280: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983283: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983285: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983286: mov eax, 2 */
  eax = 0x2u;
/* 98328b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98328c: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983292: ret 0xc */
  esp += 16; SPILL(); return;
L_983295: /* 983295: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 983299: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98329d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98329e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98329f: push 0xb03b24 */
  { uint32_t v = 0xb03b24u; esp -= 4; W32(esp, v); }
/* 9832a4: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9832aa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9832ab: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x9832b1u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 9832b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9832b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9832b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9832b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9832b7: mov eax, 2 */
  eax = 0x2u;
/* 9832bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9832bd: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9832c3: ret 0xc */
  esp += 16; SPILL(); return;
L_9832c6: /* 9832c6: xor eax, eax */
  eax = 0;
L_9832c8: /* 9832c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9832c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9832ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9832cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9832cc: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9832d2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9832e0(void) {
  LOAD_REGS();
L_9832e0: /* 9832e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9832e4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9832e8: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9832ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9832ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9832f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9832f1: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 9832f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9832f5: mov edi, dword ptr [esp + 0x418] */
  edi = R32((uint32_t)(esp + 0x418u));
/* 9832fc: mov ebx, dword ptr [edi + 0x1018] */
  ebx = R32((uint32_t)(edi + 0x1018u));
/* 983302: mov ebp, dword ptr [edi + 0x101c] */
  ebp = R32((uint32_t)(edi + 0x101cu));
/* 983308: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98330a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 98330f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 983313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983314: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983315: call 0x9836b0 */
  esp -= 4; W32(esp, 0x98331au); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 98331a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98331d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98331f: jne 0x9833e8 */
  if (!zf) goto L_9833e8;
L_983325: /* 983325: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 983329: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98332a: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 98332e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98332f: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x983335u); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 983335: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 983337: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 98333b: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 98333f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983342: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 983344: jne 0x983374 */
  if (!zf) goto L_983374;
L_983346: /* 983346: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 98334a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98334b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98334c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98334d: push 0xb03b88 */
  { uint32_t v = 0xb03b88u; esp -= 4; W32(esp, v); }
/* 983352: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 983358: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983359: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x98335fu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 98335f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983362: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983363: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983364: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983365: mov eax, 2 */
  eax = 0x2u;
/* 98336a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98336b: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983371: ret 0xc */
  esp += 16; SPILL(); return;
L_983374: /* 983374: mov esi, dword ptr [0xcfb0b0] */
  esi = R32((uint32_t)(0xcfb0b0u));
/* 98337a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_983380: /* 983380: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 983386: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 983389: jle 0x98339c */
  if ((zf || sf != of)) goto L_98339c;
L_98338b: /* 98338b: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 98338e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 983390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983391: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x983393u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 983393: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 983397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98339a: jmp 0x9833ad */
  goto L_9833ad;
L_98339c: /* 98339c: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 98339f: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 9833a4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 9833a6: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 9833aa: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_9833ad: /* 9833ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9833af: je 0x9833b8 */
  if (zf) goto L_9833b8;
L_9833b1: /* 9833b1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9833b2: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9833b6: jmp 0x983380 */
  goto L_983380;
L_9833b8: /* 9833b8: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9833bb: je 0x9833e6 */
  if (zf) goto L_9833e6;
L_9833bd: /* 9833bd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9833be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9833bf: push 0xb03918 */
  { uint32_t v = 0xb03918u; esp -= 4; W32(esp, v); }
/* 9833c4: add edi, 0x1028 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9833ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9833cb: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x9833d1u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 9833d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9833d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9833d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9833d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9833d7: mov eax, 2 */
  eax = 0x2u;
/* 9833dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9833dd: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9833e3: ret 0xc */
  esp += 16; SPILL(); return;
L_9833e6: /* 9833e6: xor eax, eax */
  eax = 0;
L_9833e8: /* 9833e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9833e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9833ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9833eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9833ec: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9833f2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_983400(void) {
  LOAD_REGS();
L_983400: /* 983400: sub esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 983406: mov edx, dword ptr [esp + 0x418] */
  edx = R32((uint32_t)(esp + 0x418u));
/* 98340d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98340e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98340f: mov ebp, dword ptr [esp + 0x41c] */
  ebp = R32((uint32_t)(esp + 0x41cu));
/* 983416: mov eax, dword ptr [ebp + 0x1018] */
  eax = R32((uint32_t)(ebp + 0x1018u));
/* 98341c: mov ecx, dword ptr [ebp + 0x101c] */
  ecx = R32((uint32_t)(ebp + 0x101cu));
/* 983422: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983423: mov esi, dword ptr [esp + 0x428] */
  esi = R32((uint32_t)(esp + 0x428u));
/* 98342a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98342b: mov edi, dword ptr [edx + 0xc] */
  edi = R32((uint32_t)(edx + 0xcu));
/* 98342e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 983432: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 983437: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 98343b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98343c: lea ebx, [esp + 0x28] */
  ebx = (uint32_t)(esp + 0x28u);
/* 983440: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 983442: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 983443: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 983447: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98344b: xor esi, esi */
  esi = 0;
/* 98344d: call 0x9836b0 */
  esp -= 4; W32(esp, 0x983452u); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 983452: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983455: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983457: jne 0x983518 */
  if (!zf) goto L_983518;
L_98345d: /* 98345d: mov al, byte ptr [esp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 983461: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 983463: je 0x9834a4 */
  if (zf) goto L_9834a4;
L_983465: /* 983465: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 98346c: cmp esi, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98346f: jae 0x9834a4 */
  if (!cf) goto L_9834a4;
L_983471: /* 983471: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 983475: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983476: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 983477: call dword ptr [0xcfb0bc] */
  esp -= 4; W32(esp, 0x98347du); SPILL(); f_41771e(); if (g_unwind) return; /* MSVCR70!strtod */ RELOAD();
/* 98347d: fstp qword ptr [edi + esi*8] */
  WF64((uint32_t)(edi + esi*8), ST0); FPOP();
/* 983480: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 983484: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983487: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 983488: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98348a: je 0x9834e5 */
  if (zf) goto L_9834e5;
L_98348c: /* 98348c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 983490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983492: call 0x9828f0 */
  esp -= 4; W32(esp, 0x983497u); SPILL(); f_9828f0(); if (g_unwind) return; RELOAD();
/* 983497: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 983499: jne 0x9834e5 */
  if (!zf) goto L_9834e5;
L_98349b: /* 98349b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98349f: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 9834a2: jne 0x983465 */
  if (!zf) goto L_983465;
L_9834a4: /* 9834a4: mov ecx, dword ptr [esp + 0x428] */
  ecx = R32((uint32_t)(esp + 0x428u));
/* 9834ab: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 9834ae: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9834b0: jae 0x983516 */
  if (!cf) goto L_983516;
L_9834b2: /* 9834b2: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9834b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9834b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9834b8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9834bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9834bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9834be: push 0xb03be8 */
  { uint32_t v = 0xb03be8u; esp -= 4; W32(esp, v); }
/* 9834c3: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9834c9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9834ca: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x9834d0u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 9834d0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9834d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9834d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9834d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9834d6: mov eax, 2 */
  eax = 0x2u;
/* 9834db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9834dc: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9834e2: ret 0xc */
  esp += 16; SPILL(); return;
L_9834e5: /* 9834e5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9834e9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9834ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9834ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9834ef: push 0xb03bb8 */
  { uint32_t v = 0xb03bb8u; esp -= 4; W32(esp, v); }
/* 9834f4: add ebp, 0x1028 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9834fa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9834fb: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983501u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983501: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983504: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983505: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983506: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983507: mov eax, 2 */
  eax = 0x2u;
/* 98350c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98350d: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983513: ret 0xc */
  esp += 16; SPILL(); return;
L_983516: /* 983516: xor eax, eax */
  eax = 0;
L_983518: /* 983518: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983519: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98351a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98351b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98351c: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983522: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_983530(void) {
  LOAD_REGS();
L_983530: /* 983530: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 983534: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 983537: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 98353a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98353e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98353f: add edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 983543: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983545: call 0x9836b0 */
  esp -= 4; W32(esp, 0x98354au); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 98354a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98354d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_983550(void) {
  LOAD_REGS();
L_983550: /* 983550: sub esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 983556: mov eax, dword ptr [esp + 0x410] */
  eax = R32((uint32_t)(esp + 0x410u));
/* 98355d: mov ecx, dword ptr [eax + 0x1018] */
  ecx = R32((uint32_t)(eax + 0x1018u));
/* 983563: mov edx, dword ptr [eax + 0x101c] */
  edx = R32((uint32_t)(eax + 0x101cu));
/* 983569: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98356a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98356b: mov ebp, dword ptr [esp + 0x41c] */
  ebp = R32((uint32_t)(esp + 0x41cu));
/* 983572: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 983575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 983576: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 983577: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 98357b: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 983580: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 983584: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 983588: mov edx, dword ptr [esp + 0x42c] */
  edx = R32((uint32_t)(esp + 0x42cu));
/* 98358f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983590: xor edi, edi */
  edi = 0;
/* 983592: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 983593: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 983597: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 983599: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98359d: call 0x9836b0 */
  esp -= 4; W32(esp, 0x9835a2u); SPILL(); f_9836b0(); if (g_unwind) return; RELOAD();
/* 9835a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9835a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9835a7: jne 0x983695 */
  if (!zf) goto L_983695;
L_9835ad: /* 9835ad: mov al, byte ptr [esp + 0x1c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x1cu))) & 0xffu);
/* 9835b1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9835b3: je 0x983616 */
  if (zf) goto L_983616;
L_9835b5: /* 9835b5: cmp edi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9835b8: jae 0x983616 */
  if (!cf) goto L_983616;
L_9835ba: /* 9835ba: push 0xafe3e8 */
  { uint32_t v = 0xafe3e8u; esp -= 4; W32(esp, v); }
/* 9835bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9835c0: call dword ptr [0xcfb128] */
  esp -= 4; W32(esp, 0x9835c6u); SPILL(); f_430091(); if (g_unwind) return; /* MSVCR70!strtok */ RELOAD();
/* 9835c6: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9835c9: xor eax, eax */
  eax = 0;
/* 9835cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 9835ce: mov edi, esi */
  edi = esi;
/* 9835d0: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9835d2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9835d5: not ecx */
  ecx = ~ecx;
/* 9835d7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9835d8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9835da: ja 0x983657 */
  if ((!cf && !zf)) goto L_983657;
L_9835dc: /* 9835dc: mov edx, ebx */
  edx = ebx;
/* 9835de: mov eax, esi */
  eax = esi;
/* 9835e0: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_9835e2: /* 9835e2: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 9835e4: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* 9835e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9835e8: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9835ea: jne 0x9835e2 */
  if (!zf) goto L_9835e2;
L_9835ec: /* 9835ec: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 9835ef: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 9835f1: mov edi, esi */
  edi = esi;
/* 9835f3: mov ecx, 0xffffffff */
  ecx = 0xffffffffu;
/* 9835f8: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 9835fa: not ecx */
  ecx = ~ecx;
/* 9835fc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9835fd: mov al, byte ptr [esi + ecx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx + 0x1u))) & 0xffu);
/* 983601: lea esi, [esi + ecx + 1] */
  esi = (uint32_t)(esi + ecx + 0x1u);
/* 983605: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 983609: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98360b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98360c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98360e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 983612: mov edi, ecx */
  edi = ecx;
/* 983614: jne 0x9835b5 */
  if (!zf) goto L_9835b5;
L_983616: /* 983616: mov ebp, dword ptr [ebp + 0x10] */
  ebp = R32((uint32_t)(ebp + 0x10u));
/* 983619: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98361b: jae 0x983693 */
  if (!cf) goto L_983693;
L_98361d: /* 98361d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 983621: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 983625: mov edx, dword ptr [esp + 0x420] */
  edx = R32((uint32_t)(esp + 0x420u));
/* 98362c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98362d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98362e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98362f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 983630: add edx, 0x1028 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 983636: push 0xb03c54 */
  { uint32_t v = 0xb03c54u; esp -= 4; W32(esp, v); }
/* 98363b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98363c: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x983642u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 983642: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983645: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983646: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983647: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983648: mov eax, 2 */
  eax = 0x2u;
/* 98364d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98364e: add esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983654: ret 0xc */
  esp += 16; SPILL(); return;
L_983657: /* 983657: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 98365a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 98365e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 983662: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983663: mov edx, dword ptr [esp + 0x424] */
  edx = R32((uint32_t)(esp + 0x424u));
/* 98366a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98366b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98366c: add edx, 0x1028 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1028u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 983672: push 0xb03c1c */
  { uint32_t v = 0xb03c1cu; esp -= 4; W32(esp, v); }
/* 983677: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 983678: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x98367eu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 98367e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983681: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983683: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983684: mov eax, 2 */
  eax = 0x2u;
/* 983689: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98368a: add esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 983690: ret 0xc */
  esp += 16; SPILL(); return;
L_983693: /* 983693: xor eax, eax */
  eax = 0;
L_983695: /* 983695: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 983696: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 983697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 983698: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 983699: add esp, 0x40c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98369f: ret 0xc */
  esp += 16; SPILL(); return;
}
