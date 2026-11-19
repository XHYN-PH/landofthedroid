#include "recomp.h"
#include "rec_mod.h"

void f_520130(void) {
  LOAD_REGS();
L_520130: /* 520130: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 520132: push 0x5577d0 */
  { uint32_t v = 0x5577d0u; esp -= 4; W32(esp, v); }
/* 520137: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52013d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52013e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520145: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520149: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52014a: xor edi, edi */
  edi = 0;
/* 52014c: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 520150: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 520154: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 520158: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 52015c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52015f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520162: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520165: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520166: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520169: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 52016d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52016e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52016f: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 520173: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x52017au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52017a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 52017d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 52017e: mov eax, edx */
  eax = edx;
/* 520180: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 520183: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 520186: jne 0x520197 */
  if (!zf) goto L_520197;
L_520188: /* 520188: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 52018b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52018c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52018d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52018e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520191: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x520197u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_520197: /* 520197: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52019b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 52019f: jne 0x5201a6 */
  if (!zf) goto L_5201a6;
L_5201a1: /* 5201a1: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5201a6: /* 5201a6: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 5201a9: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 5201ad: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 5201af: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5201b1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5201b5: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 5201bd: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 5201c1: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 5201c5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5201cau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5201ca: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 5201ce: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 5201d6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5201dbu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5201db: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5201df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5201e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5201e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5201e8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5201eb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520220(void) {
  LOAD_REGS();
L_520220: /* 520220: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 520222: push 0x5577f0 */
  { uint32_t v = 0x5577f0u; esp -= 4; W32(esp, v); }
/* 520227: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52022d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52022e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520235: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520238: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520239: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52023a: xor edi, edi */
  edi = 0;
/* 52023c: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 520240: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 520244: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 520248: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 52024c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52024f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520252: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520255: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520256: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520259: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 52025d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52025e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52025f: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 520263: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x52026au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52026a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52026d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520270: mov dword ptr [esp + 0x24], 0x302 */
  W32((uint32_t)(esp + 0x24u), 0x302u);
/* 520278: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 52027b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52027c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52027f: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 520283: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520285: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x52028cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52028c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 52028f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 520290: mov eax, edx */
  eax = edx;
/* 520292: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 520295: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 520298: jne 0x5202a9 */
  if (!zf) goto L_5202a9;
L_52029a: /* 52029a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 52029d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52029e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52029f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5202a0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5202a3: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5202a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5202a9: /* 5202a9: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5202ad: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5202b1: jne 0x5202b8 */
  if (!zf) goto L_5202b8;
L_5202b3: /* 5202b3: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5202b8: /* 5202b8: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5202bc: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 5202c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5202c3: push 0x5a652c */
  { uint32_t v = 0x5a652cu; esp -= 4; W32(esp, v); }
/* 5202c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5202c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5202ca: call 0x4e30df */
  esp -= 4; W32(esp, 0x5202cfu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5202cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5202d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5202d4: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5202d8: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 5202e0: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 5202e4: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 5202e8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5202edu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5202ed: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 5202f1: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 5202f9: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5202feu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5202fe: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 520302: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520303: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 520304: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52030b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52030e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520360(void) {
  LOAD_REGS();
L_520360: /* 520360: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 520362: push 0x557810 */
  { uint32_t v = 0x557810u; esp -= 4; W32(esp, v); }
/* 520367: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52036d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52036e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520375: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520379: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52037a: xor edi, edi */
  edi = 0;
/* 52037c: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 520380: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 520384: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 520388: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 52038c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52038f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520392: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520395: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520396: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520399: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 52039d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52039e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52039f: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 5203a3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5203aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5203aa: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5203ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5203ae: mov eax, edx */
  eax = edx;
/* 5203b0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5203b3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5203b6: jne 0x5203c7 */
  if (!zf) goto L_5203c7;
L_5203b8: /* 5203b8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5203bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5203bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5203bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5203be: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5203c1: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5203c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5203c7: /* 5203c7: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5203cb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5203cf: jne 0x5203d6 */
  if (!zf) goto L_5203d6;
L_5203d1: /* 5203d1: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5203d6: /* 5203d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5203d7: push 0x5a6538 */
  { uint32_t v = 0x5a6538u; esp -= 4; W32(esp, v); }
/* 5203dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5203dd: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5203e2u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5203e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5203e5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5203e7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5203eb: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 5203f3: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 5203f7: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 5203fb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520400u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520400: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 520404: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 52040c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520411u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520411: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 520415: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 520417: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52041e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520421: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520470(void) {
  LOAD_REGS();
L_520470: /* 520470: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 520472: push 0x557850 */
  { uint32_t v = 0x557850u; esp -= 4; W32(esp, v); }
/* 520477: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52047d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52047e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520485: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520488: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520489: xor ebx, ebx */
  ebx = 0;
/* 52048b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52048c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52048d: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 520491: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 520495: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 520499: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 52049d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5204a0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5204a3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5204a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5204a7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5204aa: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 5204ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5204af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5204b0: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 5204b4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5204bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5204bb: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5204bf: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 5204c3: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 5204c7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5204ca: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5204cd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5204d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5204d1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5204d4: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 5204d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5204d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5204da: mov byte ptr [esp + 0x40], 1 */
  W8((uint32_t)(esp + 0x40u), 0x1u);
/* 5204df: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5204e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5204e6: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 5204ea: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 5204ee: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5204f2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5204f5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5204f8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5204fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5204fc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5204ff: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 520503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520505: mov byte ptr [esp + 0x40], 2 */
  W8((uint32_t)(esp + 0x40u), 0x2u);
/* 52050a: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520511u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520511: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 520514: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 520515: mov eax, edx */
  eax = edx;
/* 520517: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 52051a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 52051d: jne 0x52052e */
  if (!zf) goto L_52052e;
L_52051f: /* 52051f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520522: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520523: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520524: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520525: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520528: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x52052eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52052e: /* 52052e: cmp dword ptr [esp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520532: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 520536: jne 0x52053d */
  if (!zf) goto L_52053d;
L_520538: /* 520538: mov edx, 0x5ed66c */
  edx = 0x5ed66cu;
L_52053d: /* 52053d: cmp dword ptr [esp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520541: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 520545: jne 0x52054c */
  if (!zf) goto L_52054c;
L_520547: /* 520547: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_52054c: /* 52054c: cmp dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520550: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 520554: jne 0x52055b */
  if (!zf) goto L_52055b;
L_520556: /* 520556: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_52055b: /* 52055b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52055c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52055d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52055e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52055f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520560: call 0x4e43db */
  esp -= 4; W32(esp, 0x520565u); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 520565: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 520569: mov edi, eax */
  edi = eax;
/* 52056b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52056d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520570: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520572: je 0x5205ad */
  if (zf) goto L_5205ad;
L_520574: /* 520574: cmp word ptr [edi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 520577: je 0x520585 */
  if (zf) goto L_520585;
L_520579: /* 520579: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52057a: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52057fu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52057f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520582: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520583: jmp 0x520587 */
  goto L_520587;
L_520585: /* 520585: xor eax, eax */
  eax = 0;
L_520587: /* 520587: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 520589: mov ecx, esi */
  ecx = esi;
/* 52058b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52058e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 520591: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520596u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520596: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 520599: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52059b: je 0x5205ad */
  if (zf) goto L_5205ad;
L_52059d: /* 52059d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52059f: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 5205a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5205a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5205a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5205a5: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x5205aau); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 5205aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5205ad: /* 5205ad: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5205af: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 5205b3: mov byte ptr [esp + 0x3c], 3 */
  W8((uint32_t)(esp + 0x3cu), 0x3u);
/* 5205b8: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5205bc: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5205c0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5205c5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5205c5: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5205c9: mov byte ptr [esp + 0x38], 1 */
  W8((uint32_t)(esp + 0x38u), 0x1u);
/* 5205ce: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5205d3u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5205d3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5205d5: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 5205d9: mov byte ptr [esp + 0x3c], 4 */
  W8((uint32_t)(esp + 0x3cu), 0x4u);
/* 5205de: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 5205e2: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 5205e6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5205ebu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5205eb: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 5205ef: mov byte ptr [esp + 0x38], bl */
  W8((uint32_t)(esp + 0x38u), (ebx & 0xffu));
/* 5205f3: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5205f8u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5205f8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5205fa: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 5205fe: mov dword ptr [esp + 0x3c], 5 */
  W32((uint32_t)(esp + 0x3cu), 0x5u);
/* 520606: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 52060a: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 52060e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520613u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520613: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 520617: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* 52061f: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520624u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520624: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 520628: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520629: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52062a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52062b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 520632: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520635: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5206c0(void) {
  LOAD_REGS();
L_5206c0: /* 5206c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5206c2: push 0x557880 */
  { uint32_t v = 0x557880u; esp -= 4; W32(esp, v); }
/* 5206c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5206cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5206ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5206d5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5206d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5206d9: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 5206dd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5206e0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5206e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5206e4: xor edi, edi */
  edi = 0;
/* 5206e6: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 5206ea: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5206ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5206ee: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5206f1: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 5206f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5206f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5206f7: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5206feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5206fe: push 0x5f5da0 */
  { uint32_t v = 0x5f5da0u; esp -= 4; W32(esp, v); }
/* 520703: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 520707: call 0x4e13de */
  esp -= 4; W32(esp, 0x52070cu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 52070c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52070f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520712: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520715: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520716: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520719: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 52071d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52071e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52071f: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 520723: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x52072au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52072a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52072d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520730: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 520734: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520737: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520738: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52073b: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 52073f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520741: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520748u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520748: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52074b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 52074e: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 520752: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520755: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520756: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520759: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 52075d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52075e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52075f: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520766u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520766: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 52076a: and eax, 0xff87bf7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff87bf7au);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 52076f: je 0x520780 */
  if (zf) goto L_520780;
L_520771: /* 520771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520772: push 0x5a6588 */
  { uint32_t v = 0x5a6588u; esp -= 4; W32(esp, v); }
/* 520777: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520778: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x52077du); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 52077d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_520780: /* 520780: cmp dword ptr [esp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520784: jne 0x52078f */
  if (!zf) goto L_52078f;
L_520786: /* 520786: call 0x4e280b */
  esp -= 4; W32(esp, 0x52078bu); SPILL(); f_4e280b(); if (g_unwind) return; RELOAD();
/* 52078b: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_52078f: /* 52078f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 520793: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520795: je 0x5207b0 */
  if (zf) goto L_5207b0;
L_520797: /* 520797: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 520798: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52079a: je 0x5207b0 */
  if (zf) goto L_5207b0;
L_52079c: /* 52079c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5207a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5207a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5207a3: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 5207a7: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5207acu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5207ac: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5207ae: jmp 0x5207b2 */
  goto L_5207b2;
L_5207b0: /* 5207b0: xor eax, eax */
  eax = 0;
L_5207b2: /* 5207b2: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 5207b6: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 5207ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5207bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5207bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5207bd: and ecx, 0x784085 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x784085u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5207c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5207c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5207c5: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 5207c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5207ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5207cb: call 0x4e335a */
  esp -= 4; W32(esp, 0x5207d0u); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 5207d0: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 5207d4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5207d7: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 5207d9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5207db: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 5207df: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* 5207e7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 5207eb: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 5207ef: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5207f4u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5207f4: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 5207f8: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 520800: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520805u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520805: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 520809: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52080a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52080b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 520812: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520815: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520880(void) {
  LOAD_REGS();
L_520880: /* 520880: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 520882: push 0x5578a0 */
  { uint32_t v = 0x5578a0u; esp -= 4; W32(esp, v); }
/* 520887: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52088d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52088e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520895: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520899: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52089a: xor edi, edi */
  edi = 0;
/* 52089c: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 5208a0: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 5208a4: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 5208a8: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 5208ac: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5208af: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5208b2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5208b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5208b6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5208b9: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 5208bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5208be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5208bf: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 5208c3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5208cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5208ca: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5208cd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5208d0: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 5208d4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5208d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5208d8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5208db: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 5208df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5208e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5208e1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5208e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5208e8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5208eb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5208ee: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 5208f2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5208f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5208f6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5208f9: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 5208fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5208fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5208ff: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520906u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520906: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 520909: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 52090a: mov eax, edx */
  eax = edx;
/* 52090c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 52090f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 520912: jne 0x520923 */
  if (!zf) goto L_520923;
L_520914: /* 520914: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520917: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520918: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520919: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52091a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52091d: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x520923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_520923: /* 520923: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520927: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52092b: jne 0x520932 */
  if (!zf) goto L_520932;
L_52092d: /* 52092d: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_520932: /* 520932: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 520936: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 52093a: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 52093c: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 52093e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52093f: and ecx, 0x2000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 520945: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 520948: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 520949: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52094a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52094b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52094c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52094d: call 0x4e302b */
  esp -= 4; W32(esp, 0x520952u); SPILL(); f_4e302b(); if (g_unwind) return; RELOAD();
/* 520952: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 520956: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520959: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 52095b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52095d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 520961: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 520969: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 52096d: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 520971: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520976u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520976: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 52097a: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 520982: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520987u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520987: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 52098b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52098c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52098d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 520994: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520997: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5209f0(void) {
  LOAD_REGS();
L_5209f0: /* 5209f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5209f2: push 0x5578c0 */
  { uint32_t v = 0x5578c0u; esp -= 4; W32(esp, v); }
/* 5209f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5209fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5209fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520a05: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520a08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520a09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520a0a: xor edi, edi */
  edi = 0;
/* 520a0c: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 520a10: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 520a14: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 520a18: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 520a1c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 520a1f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520a22: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520a25: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520a26: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520a29: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 520a2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520a2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520a2f: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 520a33: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520a3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520a3a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 520a3d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520a40: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 520a44: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520a47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520a48: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520a4b: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 520a4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520a51: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520a58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520a58: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 520a5b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 520a5c: mov eax, edx */
  eax = edx;
/* 520a5e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 520a61: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 520a64: jne 0x520a75 */
  if (!zf) goto L_520a75;
L_520a66: /* 520a66: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520a69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520a6a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520a6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520a6c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520a6f: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x520a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_520a75: /* 520a75: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520a79: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 520a7d: jne 0x520a84 */
  if (!zf) goto L_520a84;
L_520a7f: /* 520a7f: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_520a84: /* 520a84: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 520a88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520a89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520a8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520a8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 520a8c: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x520a91u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 520a91: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 520a95: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520a98: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 520a9a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 520a9c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 520aa0: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 520aa8: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 520aac: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 520ab0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520ab5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520ab5: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 520ab9: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 520ac1: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520ac6u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520ac6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 520aca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520acb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 520acc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 520ad3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520ad6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520b20(void) {
  LOAD_REGS();
L_520b20: /* 520b20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 520b21: mov ebp, esp */
  ebp = esp;
/* 520b23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 520b25: push 0x5578d0 */
  { uint32_t v = 0x5578d0u; esp -= 4; W32(esp, v); }
/* 520b2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 520b30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520b31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520b38: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520b3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 520b3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 520b40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520b42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520b43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 520b46: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 520b4d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 520b50: je 0x520b5a */
  if (zf) goto L_520b5a;
L_520b52: /* 520b52: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 520b55: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 520b58: jmp 0x520b61 */
  goto L_520b61;
L_520b5a: /* 520b5a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_520b61: /* 520b61: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 520b64: call 0x4e1839 */
  esp -= 4; W32(esp, 0x520b69u); SPILL(); f_4e1839(); if (g_unwind) return; RELOAD();
/* 520b69: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 520b6c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 520b6e: je 0x520baa */
  if (zf) goto L_520baa;
L_520b70: /* 520b70: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 520b73: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 520b76: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 520b7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 520b7c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 520b7f: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 520b82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 520b83: call 0x4e26df */
  esp -= 4; W32(esp, 0x520b88u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 520b88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520b8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 520b8d: jne 0x520ba2 */
  if (!zf) goto L_520ba2;
L_520b8f: /* 520b8f: mov eax, esi */
  eax = esi;
/* 520b91: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 520b94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 520b9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520b9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 520b9d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 520b9e: mov esp, ebp */
  esp = ebp;
/* 520ba0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 520ba1: ret  */
  esp += 4; SPILL(); return;
L_520ba2: /* 520ba2: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 520ba5: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 520ba8: jmp 0x520b61 */
  goto L_520b61;
L_520baa: /* 520baa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 520bad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520bae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 520baf: xor eax, eax */
  eax = 0;
/* 520bb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 520bb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 520bb9: mov esp, ebp */
  esp = ebp;
/* 520bbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 520bbc: ret  */
  esp += 4; SPILL(); return;
}

void f_520bbd(void) {
  LOAD_REGS();
L_520bbd: /* 520bbd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 520bc0: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 520bc5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 520bc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 520bc9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 520bcc: call 0x554df6 */
  esp -= 4; W32(esp, 0x520bd1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_520bd1(); return;
}

void f_520bd1(void) {
  LOAD_REGS();
L_520bd1: /* 520bd1: push 0x56c03c */
  { uint32_t v = 0x56c03cu; esp -= 4; W32(esp, v); }
/* 520bd6: push 0x5a680c */
  { uint32_t v = 0x5a680cu; esp -= 4; W32(esp, v); }
/* 520bdb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x520be0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 520be0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520be3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 520be5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 520be7: call 0x554df6 */
  esp -= 4; W32(esp, 0x520becu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_520bec: guest_badaddr(0x520bec); return;
}

void f_520c30(void) {
  LOAD_REGS();
L_520c30: /* 520c30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 520c32: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 520c38: push 0x5578e8 */
  { uint32_t v = 0x5578e8u; esp -= 4; W32(esp, v); }
/* 520c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520c3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520c45: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520c48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520c49: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 520c4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520c4b: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 520c4f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 520c52: mov ebp, ecx */
  ebp = ecx;
/* 520c54: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 520c56: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520c59: cmp ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520c5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520c5d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520c60: je 0x520c6d */
  if (zf) goto L_520c6d;
L_520c62: /* 520c62: add eax, -5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520c65: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520c68: jmp 0x520cec */
  goto L_520cec;
L_520c6d: /* 520c6d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 520c6f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520c72: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520c75: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 520c77: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520c7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 520c7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520c7d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520c80: call 0x4e161d */
  esp -= 4; W32(esp, 0x520c85u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 520c85: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520c88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520c89: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 520c8d: call 0x4e13de */
  esp -= 4; W32(esp, 0x520c92u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 520c92: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 520c95: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 520c98: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 520ca0: je 0x520cae */
  if (zf) goto L_520cae;
L_520ca2: /* 520ca2: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 520ca5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 520ca6: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 520ca9: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 520cac: jne 0x520ca2 */
  if (!zf) goto L_520ca2;
L_520cae: /* 520cae: inc dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 520cb1: mov eax, dword ptr [0x5b215c] */
  eax = R32((uint32_t)(0x5b215cu));
/* 520cb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 520cb8: je 0x520cdb */
  if (zf) goto L_520cdb;
L_520cba: /* 520cba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520cbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520cbc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520cbf: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 520cc3: mov ecx, esp */
  ecx = esp;
/* 520cc5: mov dword ptr [esp + 0x40], esp */
  W32((uint32_t)(esp + 0x40u), esp);
/* 520cc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 520cca: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x520ccfu); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 520ccf: mov ecx, dword ptr [0x5b215c] */
  ecx = R32((uint32_t)(0x5b215cu));
/* 520cd5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 520cd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520cd8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 520cd9: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x520cdbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_520cdb: /* 520cdb: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 520cdf: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 520ce7: call 0x4e1217 */
  esp -= 4; W32(esp, 0x520cecu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_520cec: /* 520cec: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 520cf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520cf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 520cf2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 520cf3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 520cfa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 520cfb: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 520cfe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520d50(void) {
  LOAD_REGS();
L_520d50: /* 520d50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 520d51: mov ebp, esp */
  ebp = esp;
/* 520d53: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520d56: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 520d59: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 520d5c: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 520d5f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520d61: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 520d63: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520d66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520d67: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 520d6a: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 520d6d: xor ebx, ebx */
  ebx = 0;
/* 520d6f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520d71: jne 0x520d78 */
  if (!zf) goto L_520d78;
L_520d73: /* 520d73: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 520d76: jmp 0x520d8c */
  goto L_520d8c;
L_520d78: /* 520d78: lea eax, [edi + 7] */
  eax = (uint32_t)(edi + 0x7u);
/* 520d7b: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 520d7e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520d81: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 520d84: call 0x554f80 */
  esp -= 4; W32(esp, 0x520d89u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 520d89: mov dword ptr [ebp - 8], esp */
  W32((uint32_t)(ebp + 0xfffffff8u), esp);
L_520d8c: /* 520d8c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520d8e: jne 0x520d95 */
  if (!zf) goto L_520d95;
L_520d90: /* 520d90: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 520d93: jmp 0x520da9 */
  goto L_520da9;
L_520d95: /* 520d95: lea eax, [edi + 7] */
  eax = (uint32_t)(edi + 0x7u);
/* 520d98: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 520d9b: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520d9e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 520da1: call 0x554f80 */
  esp -= 4; W32(esp, 0x520da6u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 520da6: mov dword ptr [ebp - 0xc], esp */
  W32((uint32_t)(ebp + 0xfffffff4u), esp);
L_520da9: /* 520da9: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 520dac: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 520daf: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 520db2: xor eax, eax */
  eax = 0;
/* 520db4: mov ebx, ecx */
  ebx = ecx;
/* 520db6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 520db9: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 520dbc: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 520dbe: mov ecx, ebx */
  ecx = ebx;
/* 520dc0: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 520dc2: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 520dc5: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 520dc8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 520dcb: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 520dce: xor eax, eax */
  eax = 0;
/* 520dd0: mov ebx, ecx */
  ebx = ecx;
/* 520dd2: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 520dd5: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 520dd8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 520dda: mov ecx, ebx */
  ecx = ebx;
/* 520ddc: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 520dde: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 520de1: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 520de4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520de7: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 520dea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520deb: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 520dee: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 520df1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520df2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 520df3: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 520df6: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520dfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520dfd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 520e00: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 520e03: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520e06: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 520e09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520e0a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 520e0d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 520e10: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 520e13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520e14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520e15: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520e1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520e1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520e1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520e1e: mov ecx, esi */
  ecx = esi;
/* 520e20: call 0x4e15af */
  esp -= 4; W32(esp, 0x520e25u); SPILL(); f_4e15af(); if (g_unwind) return; RELOAD();
/* 520e25: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 520e28: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 520e2a: lea esp, [ebp - 0x1c] */
  esp = (uint32_t)(ebp + 0xffffffe4u);
/* 520e2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520e2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 520e2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 520e30: mov esp, ebp */
  esp = ebp;
/* 520e32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 520e33: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520e80(void) {
  LOAD_REGS();
L_520e80: /* 520e80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 520e81: mov ebp, esp */
  ebp = esp;
/* 520e83: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520e86: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 520e89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 520e8c: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 520e8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520e91: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 520e93: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520e97: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 520e9a: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 520e9d: xor ebx, ebx */
  ebx = 0;
/* 520e9f: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520ea1: jne 0x520ea8 */
  if (!zf) goto L_520ea8;
L_520ea3: /* 520ea3: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 520ea6: jmp 0x520ebc */
  goto L_520ebc;
L_520ea8: /* 520ea8: lea eax, [edi + 7] */
  eax = (uint32_t)(edi + 0x7u);
/* 520eab: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 520eae: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520eb1: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 520eb4: call 0x554f80 */
  esp -= 4; W32(esp, 0x520eb9u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 520eb9: mov dword ptr [ebp - 8], esp */
  W32((uint32_t)(ebp + 0xfffffff8u), esp);
L_520ebc: /* 520ebc: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520ebe: jne 0x520ec5 */
  if (!zf) goto L_520ec5;
L_520ec0: /* 520ec0: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 520ec3: jmp 0x520ed9 */
  goto L_520ed9;
L_520ec5: /* 520ec5: lea eax, [edi + 7] */
  eax = (uint32_t)(edi + 0x7u);
/* 520ec8: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 520ecb: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 520ece: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 520ed1: call 0x554f80 */
  esp -= 4; W32(esp, 0x520ed6u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 520ed6: mov dword ptr [ebp - 0xc], esp */
  W32((uint32_t)(ebp + 0xfffffff4u), esp);
L_520ed9: /* 520ed9: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 520edc: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 520edf: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 520ee2: xor eax, eax */
  eax = 0;
/* 520ee4: mov ebx, ecx */
  ebx = ecx;
/* 520ee6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 520ee9: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 520eec: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 520eee: mov ecx, ebx */
  ecx = ebx;
/* 520ef0: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 520ef2: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 520ef5: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 520ef8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 520efb: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 520efe: xor eax, eax */
  eax = 0;
/* 520f00: mov ebx, ecx */
  ebx = ecx;
/* 520f02: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 520f05: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 520f08: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 520f0a: mov ecx, ebx */
  ecx = ebx;
/* 520f0c: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 520f0e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 520f11: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 520f14: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520f17: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 520f1a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520f1b: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 520f1e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 520f21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520f22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 520f23: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 520f26: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520f2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520f2d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 520f30: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 520f33: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520f36: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 520f39: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520f3a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 520f3d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 520f40: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 520f43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520f45: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520f4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520f4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520f4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520f4e: mov ecx, esi */
  ecx = esi;
/* 520f50: call 0x4e15af */
  esp -= 4; W32(esp, 0x520f55u); SPILL(); f_4e15af(); if (g_unwind) return; RELOAD();
/* 520f55: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 520f58: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 520f5a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 520f5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520f5d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 520f5f: lea esp, [ebp - 0x1c] */
  esp = (uint32_t)(ebp + 0xffffffe4u);
/* 520f62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 520f63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 520f64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 520f65: mov esp, ebp */
  esp = ebp;
/* 520f67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 520f68: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520fb0(void) {
  LOAD_REGS();
L_520fb0: /* 520fb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 520fb2: push 0x557920 */
  { uint32_t v = 0x557920u; esp -= 4; W32(esp, v); }
/* 520fb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 520fbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520fbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 520fc5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 520fc8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 520fc9: xor ebx, ebx */
  ebx = 0;
/* 520fcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520fcc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520fcd: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 520fd1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 520fd5: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 520fd9: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 520fdd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 520fe0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 520fe3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 520fe6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 520fe7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520fea: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 520fee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 520ff0: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 520ff4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x520ffbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 520ffb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 520ffe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521001: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 521005: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521008: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521009: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52100c: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 521010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521012: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521019u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521019: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52101c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 52101f: mov dword ptr [esp + 0x38], 0xffff */
  W32((uint32_t)(esp + 0x38u), 0xffffu);
/* 521027: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 52102a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52102b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52102e: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 521032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521034: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x52103bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52103b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 52103e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 52103f: mov eax, edx */
  eax = edx;
/* 521041: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 521044: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 521047: jne 0x521058 */
  if (!zf) goto L_521058;
L_521049: /* 521049: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 52104c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52104d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52104e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52104f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521052: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x521058u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_521058: /* 521058: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 52105c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 521060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 521061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521062: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 521066: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521067: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 52106b: call 0x4e2577 */
  esp -= 4; W32(esp, 0x521070u); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 521070: mov edi, eax */
  edi = eax;
/* 521072: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 521076: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521078: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 52107d: je 0x5210b6 */
  if (zf) goto L_5210b6;
L_52107f: /* 52107f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 521082: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 521084: mov ecx, esi */
  ecx = esi;
/* 521086: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 521089: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52108c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x521091u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 521091: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 521094: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521096: je 0x5210b6 */
  if (zf) goto L_5210b6;
L_521098: /* 521098: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52109b: je 0x5210a1 */
  if (zf) goto L_5210a1;
L_52109d: /* 52109d: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 52109f: jmp 0x5210a6 */
  goto L_5210a6;
L_5210a1: /* 5210a1: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_5210a6: /* 5210a6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5210a8: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 5210ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5210ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5210ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5210ae: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x5210b3u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 5210b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5210b6: /* 5210b6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5210b8: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 5210bc: mov byte ptr [esp + 0x34], 2 */
  W8((uint32_t)(esp + 0x34u), 0x2u);
/* 5210c1: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 5210c5: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 5210c9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5210ceu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5210ce: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 5210d2: mov byte ptr [esp + 0x30], bl */
  W8((uint32_t)(esp + 0x30u), (ebx & 0xffu));
/* 5210d6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5210dbu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5210db: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5210dd: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 5210e1: mov dword ptr [esp + 0x34], 3 */
  W32((uint32_t)(esp + 0x34u), 0x3u);
/* 5210e9: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5210ed: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 5210f1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5210f6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5210f6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 5210fa: mov dword ptr [esp + 0x30], 0xffffffff */
  W32((uint32_t)(esp + 0x30u), 0xffffffffu);
/* 521102: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x521107u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 521107: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 52110b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52110c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52110d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52110e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 521115: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 521118: ret 8 */
  esp += 12; SPILL(); return;
}

void f_521180(void) {
  LOAD_REGS();
L_521180: /* 521180: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 521182: push 0x557960 */
  { uint32_t v = 0x557960u; esp -= 4; W32(esp, v); }
/* 521187: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52118d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52118e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 521195: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 521198: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 521199: xor ebx, ebx */
  ebx = 0;
/* 52119b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52119c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52119d: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 5211a1: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 5211a5: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5211a9: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 5211ad: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5211b0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5211b3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5211b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5211b7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5211ba: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 5211be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5211bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5211c0: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 5211c4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5211cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5211cb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5211ce: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5211d1: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 5211d5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5211d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5211d9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5211dc: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 5211e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5211e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5211e2: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5211e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5211e9: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5211ec: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5211ed: mov eax, edx */
  eax = edx;
/* 5211ef: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 5211f2: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5211f5: jne 0x521206 */
  if (!zf) goto L_521206;
L_5211f7: /* 5211f7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5211fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5211fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5211fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5211fd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521200: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x521206u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_521206: /* 521206: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 52120a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52120b: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 52120f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521210: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 521214: call 0x4e42f0 */
  esp -= 4; W32(esp, 0x521219u); SPILL(); f_4e42f0(); if (g_unwind) return; RELOAD();
/* 521219: mov edi, eax */
  edi = eax;
/* 52121b: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 52121f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521221: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* 521226: je 0x52125e */
  if (zf) goto L_52125e;
L_521228: /* 521228: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 52122b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52122d: mov ecx, esi */
  ecx = esi;
/* 52122f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 521232: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 521235: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52123au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52123a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 52123d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52123f: je 0x52125e */
  if (zf) goto L_52125e;
L_521241: /* 521241: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521244: je 0x52124a */
  if (zf) goto L_52124a;
L_521246: /* 521246: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 521248: jmp 0x52124f */
  goto L_52124f;
L_52124a: /* 52124a: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_52124f: /* 52124f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 521251: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 521253: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521254: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 521255: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 521256: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x52125bu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 52125b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52125e: /* 52125e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 521260: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 521264: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 521269: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 52126d: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 521271: call 0x4e4502 */
  esp -= 4; W32(esp, 0x521276u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 521276: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 52127a: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 52127e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x521283u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 521283: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 521285: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 521289: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 521291: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 521295: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 521299: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52129eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52129e: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5212a2: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 5212aa: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5212afu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5212af: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5212b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5212b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5212b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5212b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5212bd: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5212c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_521330(void) {
  LOAD_REGS();
L_521330: /* 521330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 521331: mov ebp, esp */
  ebp = esp;
/* 521333: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 521336: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 521338: push 0x557996 */
  { uint32_t v = 0x557996u; esp -= 4; W32(esp, v); }
/* 52133d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 521343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521344: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52134b: sub esp, 0x810 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x810u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 521351: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 521352: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521353: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 521354: xor edi, edi */
  edi = 0;
/* 521356: mov ebx, ecx */
  ebx = ecx;
/* 521358: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 52135c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 521360: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 521364: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 521367: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52136a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 52136d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521370: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521371: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521374: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 521378: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521379: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52137a: mov dword ptr [esp + 0x82c], edi */
  W32((uint32_t)(esp + 0x82cu), edi);
/* 521381: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521388u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521388: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 52138b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 52138c: mov eax, edx */
  eax = edx;
/* 52138e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 521391: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 521394: jne 0x5213a5 */
  if (!zf) goto L_5213a5;
L_521396: /* 521396: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521399: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52139a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52139b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52139c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52139f: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5213a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5213a5: /* 5213a5: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5213a9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5213ad: jne 0x5213b4 */
  if (!zf) goto L_5213b4;
L_5213af: /* 5213af: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5213b4: /* 5213b4: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 5213b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5213b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5213b9: call 0x4e12ee */
  esp -= 4; W32(esp, 0x5213beu); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 5213be: mov edx, eax */
  edx = eax;
/* 5213c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5213c3: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5213c5: je 0x52140d */
  if (zf) goto L_52140d;
L_5213c7: /* 5213c7: test byte ptr [edx + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5213cb: je 0x52140d */
  if (zf) goto L_52140d;
L_5213cd: /* 5213cd: mov ax, word ptr [0x5f5da4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x5f5da4u))) & 0xffffu);
/* 5213d3: mov word ptr [esp + 0x18], ax */
  W16((uint32_t)(esp + 0x18u), (eax & 0xffffu));
/* 5213d8: xor eax, eax */
  eax = 0;
/* 5213da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5213dc: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 5213e1: lea edi, [esp + 0x1e] */
  edi = (uint32_t)(esp + 0x1eu);
/* 5213e5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5213e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5213e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5213e9: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 5213ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5213ee: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 5213f0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5213f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5213f4: mov ecx, edx */
  ecx = edx;
/* 5213f6: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x5213fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5213fc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5213ff: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 521403: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521404: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x521409u); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
/* 521409: xor edi, edi */
  edi = 0;
/* 52140b: jmp 0x52145c */
  goto L_52145c;
L_52140d: /* 52140d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 521410: cmp dword ptr [esi], 0x5f5da8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x5f5da8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521416: je 0x52145c */
  if (zf) goto L_52145c;
L_521418: /* 521418: cmp word ptr [0x5f5da8], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x5f5da8u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52141f: je 0x521431 */
  if (zf) goto L_521431;
L_521421: /* 521421: push 0x5f5da8 */
  { uint32_t v = 0x5f5da8u; esp -= 4; W32(esp, v); }
/* 521426: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52142bu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52142b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52142e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52142f: jmp 0x521433 */
  goto L_521433;
L_521431: /* 521431: xor eax, eax */
  eax = 0;
L_521433: /* 521433: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 521435: mov ecx, esi */
  ecx = esi;
/* 521437: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52143a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52143d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x521442u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 521442: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 521445: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521447: je 0x52145c */
  if (zf) goto L_52145c;
L_521449: /* 521449: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52144b: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52144d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52144e: push 0x5f5da8 */
  { uint32_t v = 0x5f5da8u; esp -= 4; W32(esp, v); }
/* 521453: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 521454: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x521459u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 521459: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52145c: /* 52145c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52145e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 521462: mov dword ptr [esp + 0x828], 1 */
  W32((uint32_t)(esp + 0x828u), 0x1u);
/* 52146d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 521471: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 521475: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52147au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52147a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 52147e: mov dword ptr [esp + 0x824], 0xffffffff */
  W32((uint32_t)(esp + 0x824u), 0xffffffffu);
/* 521489: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x52148eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 52148e: mov ecx, dword ptr [esp + 0x81c] */
  ecx = R32((uint32_t)(esp + 0x81cu));
/* 521495: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 521496: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 521497: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52149e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52149f: mov esp, ebp */
  esp = ebp;
/* 5214a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5214a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_521510(void) {
  LOAD_REGS();
L_521510: /* 521510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 521512: push 0x5579d0 */
  { uint32_t v = 0x5579d0u; esp -= 4; W32(esp, v); }
/* 521517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52151d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52151e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 521525: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 521528: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 521529: xor ebx, ebx */
  ebx = 0;
/* 52152b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52152c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52152d: mov edi, ecx */
  edi = ecx;
/* 52152f: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 521533: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 521537: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 52153b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 52153f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521542: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521545: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521548: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521549: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52154c: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 521550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521552: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 521556: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x52155du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52155d: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 521561: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 521565: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 521569: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52156c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 52156f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521572: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521573: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521576: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 52157a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52157b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52157c: mov byte ptr [esp + 0x34], 1 */
  W8((uint32_t)(esp + 0x34u), 0x1u);
/* 521581: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521588u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521588: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 52158b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 52158c: mov eax, edx */
  eax = edx;
/* 52158e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 521591: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 521594: jne 0x5215a5 */
  if (!zf) goto L_5215a5;
L_521596: /* 521596: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521599: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52159a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52159b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52159c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52159f: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x5215a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5215a5: /* 5215a5: cmp dword ptr [esp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5215a9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 5215ad: jne 0x5215b4 */
  if (!zf) goto L_5215b4;
L_5215af: /* 5215af: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5215b4: /* 5215b4: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 5215b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5215b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5215b9: call 0x4e12ee */
  esp -= 4; W32(esp, 0x5215beu); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 5215be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5215c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5215c3: je 0x5215f3 */
  if (zf) goto L_5215f3;
L_5215c5: /* 5215c5: test byte ptr [eax + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5215c9: je 0x5215f3 */
  if (zf) goto L_5215f3;
L_5215cb: /* 5215cb: test byte ptr [eax + 0x3c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5215cf: jne 0x5215f3 */
  if (!zf) goto L_5215f3;
L_5215d1: /* 5215d1: cmp dword ptr [esp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5215d5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5215d9: jne 0x5215e0 */
  if (!zf) goto L_5215e0;
L_5215db: /* 5215db: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5215e0: /* 5215e0: mov esi, dword ptr [eax + 0x48] */
  esi = R32((uint32_t)(eax + 0x48u));
/* 5215e3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 5215e5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5215e7: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5215e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5215ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5215eb: mov ecx, eax */
  ecx = eax;
/* 5215ed: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x5215f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5215f3: /* 5215f3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5215f5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 5215f9: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 5215fe: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 521602: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 521606: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52160bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52160b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 52160f: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 521613: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x521618u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 521618: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52161a: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 52161e: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 521626: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 52162a: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 52162e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x521633u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 521633: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 521637: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 52163f: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x521644u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 521644: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 521648: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 521649: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52164a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52164b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 521652: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 521655: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5216c0(void) {
  LOAD_REGS();
L_5216c0: /* 5216c0: sub esp, 0x808 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x808u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5216c6: mov ecx, dword ptr [esp + 0x80c] */
  ecx = R32((uint32_t)(esp + 0x80cu));
/* 5216cd: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 5216d0: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 5216d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5216d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5216d4: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 5216d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5216d8: lea eax, [esp + 0x410] */
  eax = (uint32_t)(esp + 0x410u);
/* 5216df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5216e0: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
/* 5216e4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 5216e8: mov ecx, 0xc */
  ecx = 0xcu;
/* 5216ed: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 5216f1: xor eax, eax */
  eax = 0;
/* 5216f3: mov ebx, ecx */
  ebx = ecx;
/* 5216f5: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 5216f8: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 5216fb: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5216fd: mov ecx, ebx */
  ecx = ebx;
/* 5216ff: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 521701: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 521705: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 521709: mov ecx, 0xc */
  ecx = 0xcu;
/* 52170e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 521712: xor eax, eax */
  eax = 0;
/* 521714: mov ebx, ecx */
  ebx = ecx;
/* 521716: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 521719: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 52171c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52171e: mov ecx, ebx */
  ecx = ebx;
/* 521720: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 521722: mov eax, dword ptr [esp + 0x818] */
  eax = R32((uint32_t)(esp + 0x818u));
/* 521729: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 52172c: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 52172f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 521732: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 521733: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 521736: mov eax, dword ptr [esp + 0x818] */
  eax = R32((uint32_t)(esp + 0x818u));
/* 52173d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 521741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521743: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x52174au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52174a: mov eax, dword ptr [esp + 0x818] */
  eax = R32((uint32_t)(esp + 0x818u));
/* 521751: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 521754: mov ecx, dword ptr [esp + 0x818] */
  ecx = R32((uint32_t)(esp + 0x818u));
/* 52175b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 52175e: movzx esi, word ptr [eax] */
  esi = (uint32_t)(R16((uint32_t)(eax)));
/* 521761: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 521764: cmp esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52176a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 52176d: je 0x521839 */
  if (zf) goto L_521839;
L_521773: /* 521773: mov eax, dword ptr [esp + 0x818] */
  eax = R32((uint32_t)(esp + 0x818u));
/* 52177a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 52177d: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 521780: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 521783: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 521784: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 521787: mov eax, dword ptr [esp + 0x818] */
  eax = R32((uint32_t)(esp + 0x818u));
/* 52178e: lea edx, [esp + 0x414] */
  edx = (uint32_t)(esp + 0x414u);
/* 521795: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521796: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521797: call dword ptr [edi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x52179eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52179e: mov bl, byte ptr [esp + 0xf] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 5217a2: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5217a4: je 0x5217c1 */
  if (zf) goto L_5217c1;
L_5217a6: /* 5217a6: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 5217a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5217aa: lea edx, [esp + 0x418] */
  edx = (uint32_t)(esp + 0x418u);
/* 5217b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5217b2: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 5217b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5217b7: call 0x4e283d */
  esp -= 4; W32(esp, 0x5217bcu); SPILL(); f_4e283d(); if (g_unwind) return; RELOAD();
/* 5217bc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5217bf: jmp 0x5217f3 */
  goto L_5217f3;
L_5217c1: /* 5217c1: mov eax, dword ptr [esp + 0x418] */
  eax = R32((uint32_t)(esp + 0x418u));
/* 5217c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5217ca: mov ecx, dword ptr [esp + 0x414] */
  ecx = R32((uint32_t)(esp + 0x414u));
/* 5217d1: jne 0x5217d8 */
  if (!zf) goto L_5217d8;
L_5217d3: /* 5217d3: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5217d8: /* 5217d8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 5217dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5217de: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 5217e2: jne 0x5217e9 */
  if (!zf) goto L_5217e9;
L_5217e4: /* 5217e4: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5217e9: /* 5217e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5217ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5217eb: call 0x4e26df */
  esp -= 4; W32(esp, 0x5217f0u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 5217f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5217f3: /* 5217f3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 5217f5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 5217f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5217f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5217fa: jne 0x52183d */
  if (!zf) goto L_52183d;
L_5217fc: /* 5217fc: mov eax, dword ptr [esp + 0x818] */
  eax = R32((uint32_t)(esp + 0x818u));
/* 521803: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 521806: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 521809: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52180b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 52180e: mov eax, dword ptr [esp + 0x818] */
  eax = R32((uint32_t)(esp + 0x818u));
/* 521815: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 521818: mov ecx, dword ptr [esp + 0x818] */
  ecx = R32((uint32_t)(esp + 0x818u));
/* 52181f: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 521822: movzx esi, word ptr [eax] */
  esi = (uint32_t)(R16((uint32_t)(eax)));
/* 521825: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 521828: cmp esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52182e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 521831: jne 0x521773 */
  if (!zf) goto L_521773;
L_521837: /* 521837: jmp 0x52183d */
  goto L_52183d;
L_521839: /* 521839: mov bl, byte ptr [esp + 0xf] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
L_52183d: /* 52183d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52183e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52183f: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 521841: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 521842: jne 0x521859 */
  if (!zf) goto L_521859;
L_521844: /* 521844: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 521848: call 0x4e1217 */
  esp -= 4; W32(esp, 0x52184du); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 52184d: lea ecx, [esp + 0x408] */
  ecx = (uint32_t)(esp + 0x408u);
/* 521854: call 0x4e1217 */
  esp -= 4; W32(esp, 0x521859u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_521859: /* 521859: add esp, 0x808 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x808u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52185f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5218e0(void) {
  LOAD_REGS();
L_5218e0: /* 5218e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5218e1: mov ebp, esp */
  ebp = esp;
/* 5218e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5218e5: push 0x5579f8 */
  { uint32_t v = 0x5579f8u; esp -= 4; W32(esp, v); }
/* 5218ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5218f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5218f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5218f8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5218fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5218fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5218fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5218fe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 521901: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 521904: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52190b: call 0x4e1eba */
  esp -= 4; W32(esp, 0x521910u); SPILL(); f_4e1eba(); if (g_unwind) return; RELOAD();
/* 521910: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 521913: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521916: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521919: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 52191c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52191d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521920: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 521923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521924: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521925: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 521929: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521930u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521930: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521933: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521936: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 52193d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521940: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521941: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521944: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 521947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521948: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521949: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521950: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 521953: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 521954: mov eax, edx */
  eax = edx;
/* 521956: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 521959: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 52195c: jne 0x52196e */
  if (!zf) goto L_52196e;
L_52195e: /* 52195e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521961: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521963: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521964: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521965: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521968: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x52196eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52196e: /* 52196e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 521971: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 521972: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 521975: call 0x4e3562 */
  esp -= 4; W32(esp, 0x52197au); SPILL(); f_4e3562(); if (g_unwind) return; RELOAD();
/* 52197a: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 52197d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 521980: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 521983: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 521985: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 521989: call 0x4e2775 */
  esp -= 4; W32(esp, 0x52198eu); SPILL(); f_4e2775(); if (g_unwind) return; RELOAD();
/* 52198e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 521991: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 521992: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 521993: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52199a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52199b: mov esp, ebp */
  esp = ebp;
/* 52199d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52199e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5219a1(void) {
  LOAD_REGS();
L_5219a1: /* 5219a1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5219a4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5219a9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5219ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5219ad: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5219b0: call 0x554df6 */
  esp -= 4; W32(esp, 0x5219b5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5219b5(); return;
}

void f_5219b5(void) {
  LOAD_REGS();
L_5219b5: /* 5219b5: push 0x56c054 */
  { uint32_t v = 0x56c054u; esp -= 4; W32(esp, v); }
/* 5219ba: push 0x5a6490 */
  { uint32_t v = 0x5a6490u; esp -= 4; W32(esp, v); }
/* 5219bf: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5219c4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5219c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5219c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5219c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5219cb: call 0x554df6 */
  esp -= 4; W32(esp, 0x5219d0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5219d0: guest_badaddr(0x5219d0); return;
}

void f_521a20(void) {
  LOAD_REGS();
L_521a20: /* 521a20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 521a21: mov ebp, esp */
  ebp = esp;
/* 521a23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 521a25: push 0x557a18 */
  { uint32_t v = 0x557a18u; esp -= 4; W32(esp, v); }
/* 521a2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 521a30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521a31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 521a38: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 521a3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 521a3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521a3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 521a3e: xor edi, edi */
  edi = 0;
/* 521a40: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 521a43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 521a46: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 521a49: call 0x4e1eba */
  esp -= 4; W32(esp, 0x521a4eu); SPILL(); f_4e1eba(); if (g_unwind) return; RELOAD();
/* 521a4e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 521a51: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521a54: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521a57: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521a5a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521a5b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521a5e: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 521a61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521a62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521a63: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 521a67: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521a6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521a6e: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 521a74: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521a77: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521a7a: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 521a7d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521a80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521a81: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521a84: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 521a87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521a88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521a89: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521a90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521a90: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 521a96: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521a98: je 0x521aa5 */
  if (zf) goto L_521aa5;
L_521a9a: /* 521a9a: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 521a9f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 521aa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521aa2: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x521aa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_521aa5: /* 521aa5: mov ebx, dword ptr [0x5afecc] */
  ebx = R32((uint32_t)(0x5afeccu));
/* 521aab: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521aad: jne 0x521ab2 */
  if (!zf) goto L_521ab2;
L_521aaf: /* 521aaf: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
L_521ab2: /* 521ab2: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 521ab8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521abb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521abe: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 521ac5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521ac8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521ac9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521acc: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 521acf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521ad1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521ad8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521ad8: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 521ade: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521ae0: je 0x521aed */
  if (zf) goto L_521aed;
L_521ae2: /* 521ae2: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 521ae7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 521ae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521aea: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x521aedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_521aed: /* 521aed: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 521af2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521af4: mov edi, eax */
  edi = eax;
/* 521af6: jne 0x521afb */
  if (!zf) goto L_521afb;
L_521af8: /* 521af8: lea edi, [ebp - 0x18] */
  edi = (uint32_t)(ebp + 0xffffffe8u);
L_521afb: /* 521afb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 521afe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 521aff: mov eax, edx */
  eax = edx;
/* 521b01: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 521b04: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 521b07: jne 0x521b19 */
  if (!zf) goto L_521b19;
L_521b09: /* 521b09: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521b0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521b0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521b0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521b10: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521b13: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x521b19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_521b19: /* 521b19: cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 521b1d: jge 0x521b4a */
  if ((sf == of)) goto L_521b4a;
L_521b1f: /* 521b1f: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 521b25: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_521b2b: /* 521b2b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 521b2e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 521b32: call 0x4e2775 */
  esp -= 4; W32(esp, 0x521b37u); SPILL(); f_4e2775(); if (g_unwind) return; RELOAD();
/* 521b37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 521b3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 521b3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 521b3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 521b43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 521b44: mov esp, ebp */
  esp = ebp;
/* 521b46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 521b47: ret 8 */
  esp += 12; SPILL(); return;
L_521b4a: /* 521b4a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 521b4d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 521b4f: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 521b51: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 521b54: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 521b56: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 521b58: mov ecx, 1 */
  ecx = 0x1u;
/* 521b5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_521b60: /* 521b60: cmp ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 521b63: jge 0x521b2b */
  if ((sf == of)) goto L_521b2b;
L_521b65: /* 521b65: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 521b68: fld dword ptr [edx + ecx*8] */
  { double v = F32((uint32_t)(edx + ecx*8)); FPUSH(v); }
/* 521b6b: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 521b6d: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 521b70: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 521b72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 521b74: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 521b77: jp 0x521b7e */
  if (pf) goto L_521b7e;
L_521b79: /* 521b79: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 521b7b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_521b7e: /* 521b7e: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 521b80: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 521b83: fld dword ptr [eax + ecx*8] */
  { double v = F32((uint32_t)(eax + ecx*8)); FPUSH(v); }
/* 521b86: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 521b88: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 521b8b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 521b8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 521b8f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 521b92: jne 0x521b99 */
  if (!zf) goto L_521b99;
L_521b94: /* 521b94: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 521b96: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_521b99: /* 521b99: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 521b9b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 521b9c: jmp 0x521b60 */
  goto L_521b60;
}

void f_521b9e(void) {
  LOAD_REGS();
L_521b9e: /* 521b9e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 521ba1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 521ba6: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 521ba9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521baa: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 521bad: call 0x554df6 */
  esp -= 4; W32(esp, 0x521bb2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_521bb2(); return;
}

void f_521bb2(void) {
  LOAD_REGS();
L_521bb2: /* 521bb2: push 0x56c0a0 */
  { uint32_t v = 0x56c0a0u; esp -= 4; W32(esp, v); }
/* 521bb7: push 0x5a649c */
  { uint32_t v = 0x5a649cu; esp -= 4; W32(esp, v); }
/* 521bbc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x521bc1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 521bc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 521bc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521bc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521bc8: call 0x554df6 */
  esp -= 4; W32(esp, 0x521bcdu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_521bcd: guest_badaddr(0x521bcd); return;
}

void f_521c40(void) {
  LOAD_REGS();
L_521c40: /* 521c40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 521c41: mov ebp, esp */
  ebp = esp;
/* 521c43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 521c45: push 0x557a38 */
  { uint32_t v = 0x557a38u; esp -= 4; W32(esp, v); }
/* 521c4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 521c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521c51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 521c58: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 521c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 521c5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521c5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 521c5e: xor edi, edi */
  edi = 0;
/* 521c60: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 521c63: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 521c66: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 521c69: call 0x4e1eba */
  esp -= 4; W32(esp, 0x521c6eu); SPILL(); f_4e1eba(); if (g_unwind) return; RELOAD();
/* 521c6e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 521c71: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521c74: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521c77: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521c7a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521c7b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521c7e: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 521c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521c82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521c83: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 521c87: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521c8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521c8e: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 521c94: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521c97: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521c9a: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 521c9d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521ca0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521ca1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521ca4: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 521ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521ca8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521ca9: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521cb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521cb0: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 521cb6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521cb8: je 0x521cc5 */
  if (zf) goto L_521cc5;
L_521cba: /* 521cba: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 521cbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 521cc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521cc2: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x521cc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_521cc5: /* 521cc5: mov ebx, dword ptr [0x5afecc] */
  ebx = R32((uint32_t)(0x5afeccu));
/* 521ccb: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521ccd: jne 0x521cd2 */
  if (!zf) goto L_521cd2;
L_521ccf: /* 521ccf: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
L_521cd2: /* 521cd2: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 521cd8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 521cdb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521cde: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 521ce5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 521ce8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521ce9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521cec: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 521cef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521cf1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x521cf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 521cf8: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 521cfe: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521d00: je 0x521d0d */
  if (zf) goto L_521d0d;
L_521d02: /* 521d02: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 521d07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 521d09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521d0a: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x521d0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_521d0d: /* 521d0d: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 521d12: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 521d14: mov edi, eax */
  edi = eax;
/* 521d16: jne 0x521d1b */
  if (!zf) goto L_521d1b;
L_521d18: /* 521d18: lea edi, [ebp - 0x18] */
  edi = (uint32_t)(ebp + 0xffffffe8u);
L_521d1b: /* 521d1b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 521d1e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 521d1f: mov eax, edx */
  eax = edx;
/* 521d21: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 521d24: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 521d27: jne 0x521d39 */
  if (!zf) goto L_521d39;
L_521d29: /* 521d29: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 521d2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521d2e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 521d2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521d30: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 521d33: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x521d39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_521d39: /* 521d39: cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 521d3d: jge 0x521d6a */
  if ((sf == of)) goto L_521d6a;
L_521d3f: /* 521d3f: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 521d45: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_521d4b: /* 521d4b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 521d4e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 521d52: call 0x4e2775 */
  esp -= 4; W32(esp, 0x521d57u); SPILL(); f_4e2775(); if (g_unwind) return; RELOAD();
/* 521d57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 521d5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 521d5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 521d5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 521d63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 521d64: mov esp, ebp */
  esp = ebp;
/* 521d66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 521d67: ret 8 */
  esp += 12; SPILL(); return;
L_521d6a: /* 521d6a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 521d6d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 521d70: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 521d72: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 521d75: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 521d78: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 521d7a: mov ecx, 1 */
  ecx = 0x1u;
/* 521d7f: nop  */
L_521d80: /* 521d80: cmp ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 521d83: jge 0x521d4b */
  if ((sf == of)) goto L_521d4b;
L_521d85: /* 521d85: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 521d88: fld dword ptr [edx + ecx*8 + 4] */
  { double v = F32((uint32_t)(edx + ecx*8 + 0x4u)); FPUSH(v); }
/* 521d8c: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 521d8e: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 521d91: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 521d93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 521d95: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 521d98: jp 0x521d9f */
  if (pf) goto L_521d9f;
L_521d9a: /* 521d9a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 521d9c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_521d9f: /* 521d9f: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 521da1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 521da4: fld dword ptr [eax + ecx*8 + 4] */
  { double v = F32((uint32_t)(eax + ecx*8 + 0x4u)); FPUSH(v); }
/* 521da8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 521daa: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 521dad: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 521daf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 521db1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 521db4: jne 0x521dbb */
  if (!zf) goto L_521dbb;
L_521db6: /* 521db6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 521db8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_521dbb: /* 521dbb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 521dbd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 521dbe: jmp 0x521d80 */
  goto L_521d80;
}

void f_521dc0(void) {
  LOAD_REGS();
L_521dc0: /* 521dc0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 521dc3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 521dc8: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 521dcb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521dcc: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 521dcf: call 0x554df6 */
  esp -= 4; W32(esp, 0x521dd4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_521dd4(); return;
}

void f_521dd4(void) {
  LOAD_REGS();
L_521dd4: /* 521dd4: push 0x56c100 */
  { uint32_t v = 0x56c100u; esp -= 4; W32(esp, v); }
/* 521dd9: push 0x5a64a8 */
  { uint32_t v = 0x5a64a8u; esp -= 4; W32(esp, v); }
/* 521dde: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x521de3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 521de3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 521de6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521de8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521dea: call 0x554df6 */
  esp -= 4; W32(esp, 0x521defu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_521def: guest_badaddr(0x521def); return;
}

void f_521e60(void) {
  LOAD_REGS();
L_521e60: /* 521e60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 521e61: mov ebp, esp */
  ebp = esp;
/* 521e63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 521e65: push 0x557a50 */
  { uint32_t v = 0x557a50u; esp -= 4; W32(esp, v); }
/* 521e6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 521e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521e71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 521e78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 521e7b: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 521e80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 521e81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521e82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 521e83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 521e86: push 0x5a6ae8 */
  { uint32_t v = 0x5a6ae8u; esp -= 4; W32(esp, v); }
/* 521e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521e8c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 521e93: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x521e98u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 521e98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 521e9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 521e9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 521e9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 521ea0: mov eax, 1 */
  eax = 0x1u;
/* 521ea5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 521eac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 521ead: mov esp, ebp */
  esp = ebp;
/* 521eaf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 521eb0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_521eb3(void) {
  LOAD_REGS();
L_521eb3: /* 521eb3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 521eb6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 521ebb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 521ebe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521ebf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 521ec2: call 0x554df6 */
  esp -= 4; W32(esp, 0x521ec7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_521ec7(); return;
}

void f_521ec7(void) {
  LOAD_REGS();
L_521ec7: /* 521ec7: push 0x56c160 */
  { uint32_t v = 0x56c160u; esp -= 4; W32(esp, v); }
/* 521ecc: push 0x5a6b40 */
  { uint32_t v = 0x5a6b40u; esp -= 4; W32(esp, v); }
/* 521ed1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x521ed6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 521ed6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 521ed9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521edb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521edd: call 0x554df6 */
  esp -= 4; W32(esp, 0x521ee2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_521ee2: guest_badaddr(0x521ee2); return;
}

void f_521f20(void) {
  LOAD_REGS();
L_521f20: /* 521f20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 521f21: mov ebp, esp */
  ebp = esp;
/* 521f23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 521f25: push 0x557a60 */
  { uint32_t v = 0x557a60u; esp -= 4; W32(esp, v); }
/* 521f2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 521f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521f31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 521f38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 521f3b: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 521f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 521f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521f42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 521f43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 521f46: push 0x5a6b48 */
  { uint32_t v = 0x5a6b48u; esp -= 4; W32(esp, v); }
/* 521f4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 521f4c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 521f53: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x521f58u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 521f58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 521f5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 521f5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 521f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 521f60: mov eax, 1 */
  eax = 0x1u;
/* 521f65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 521f6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 521f6d: mov esp, ebp */
  esp = ebp;
/* 521f6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 521f70: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_521f73(void) {
  LOAD_REGS();
L_521f73: /* 521f73: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 521f76: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 521f7b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 521f7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 521f7f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 521f82: call 0x554df6 */
  esp -= 4; W32(esp, 0x521f87u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_521f87(); return;
}

void f_521f87(void) {
  LOAD_REGS();
L_521f87: /* 521f87: push 0x56c1a8 */
  { uint32_t v = 0x56c1a8u; esp -= 4; W32(esp, v); }
/* 521f8c: push 0x5a6b98 */
  { uint32_t v = 0x5a6b98u; esp -= 4; W32(esp, v); }
/* 521f91: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x521f96u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 521f96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 521f99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521f9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 521f9d: call 0x554df6 */
  esp -= 4; W32(esp, 0x521fa2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_521fa2: guest_badaddr(0x521fa2); return;
}

void f_521fe0(void) {
  LOAD_REGS();
L_521fe0: /* 521fe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 521fe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 521fe5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 521fe6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 521fe9: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 521fec: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 521fef: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 521ff2: jle 0x52200e */
  if ((zf || sf != of)) goto L_52200e;
L_521ff4: /* 521ff4: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 521ff7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 521ff8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 521ffb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 521ffd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 522000: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 522004: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 522006: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 522009: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52200eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_52200e: /* 52200e: mov eax, edi */
  eax = edi;
/* 522010: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522011: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522012: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522030(void) {
  LOAD_REGS();
L_522030: /* 522030: mov eax, ecx */
  eax = ecx;
/* 522032: xor ecx, ecx */
  ecx = 0;
/* 522034: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 522036: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 522039: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 52203c: ret  */
  esp += 4; SPILL(); return;
}

void f_522050(void) {
  LOAD_REGS();
L_522050: /* 522050: mov eax, ecx */
  eax = ecx;
/* 522052: xor ecx, ecx */
  ecx = 0;
/* 522054: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 522056: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 522059: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 52205c: ret  */
  esp += 4; SPILL(); return;
}

void f_522070(void) {
  LOAD_REGS();
L_522070: /* 522070: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 522073: cmp dword ptr [ecx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522076: je 0x522082 */
  if (zf) goto L_522082;
L_522078: /* 522078: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 52207a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 52207d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x522082u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_522082: /* 522082: ret  */
  esp += 4; SPILL(); return;
}

void f_5220a0(void) {
  LOAD_REGS();
L_5220a0: /* 5220a0: inc dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 5220a3: ret  */
  esp += 4; SPILL(); return;
}

void f_5220c0(void) {
  LOAD_REGS();
L_5220c0: /* 5220c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5220c2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 5220c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5220c6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 5220c9: xor edx, edx */
  edx = 0;
/* 5220cb: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5220cd: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 5220d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5220d1: mov eax, edx */
  eax = edx;
/* 5220d3: ret  */
  esp += 4; SPILL(); return;
}

void f_5220f0(void) {
  LOAD_REGS();
L_5220f0: /* 5220f0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 5220f3: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5220f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5220f7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 5220fa: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 5220fd: ret  */
  esp += 4; SPILL(); return;
}

void f_522110(void) {
  LOAD_REGS();
L_522110: /* 522110: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 522113: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 522115: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 522117: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 52211a: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 52211d: ret  */
  esp += 4; SPILL(); return;
}

void f_522130(void) {
  LOAD_REGS();
L_522130: /* 522130: mov eax, ecx */
  eax = ecx;
/* 522132: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 522136: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 522138: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 52213b: xor ecx, ecx */
  ecx = 0;
/* 52213d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 522140: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 522143: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522160(void) {
  LOAD_REGS();
L_522160: /* 522160: inc dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 522163: ret  */
  esp += 4; SPILL(); return;
}

void f_522180(void) {
  LOAD_REGS();
L_522180: /* 522180: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 522183: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 522186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522187: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 52218a: xor edx, edx */
  edx = 0;
/* 52218c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52218e: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 522191: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522192: mov eax, edx */
  eax = edx;
/* 522194: ret  */
  esp += 4; SPILL(); return;
}

void f_5221b0(void) {
  LOAD_REGS();
L_5221b0: /* 5221b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5221b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5221b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5221b6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 5221b9: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 5221bc: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5221bf: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 5221c2: jle 0x5221de */
  if ((zf || sf != of)) goto L_5221de;
L_5221c4: /* 5221c4: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 5221c7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5221c8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5221cb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5221cd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5221d0: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 5221d4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5221d6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 5221d9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5221deu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5221de: /* 5221de: mov eax, edi */
  eax = edi;
/* 5221e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5221e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5221e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522200(void) {
  LOAD_REGS();
L_522200: /* 522200: mov eax, ecx */
  eax = ecx;
/* 522202: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 522205: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 522208: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52220c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52220d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 52220f: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 522212: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 522215: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522218: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 522219: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52221c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52221d: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x522220u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522220: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522221: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522240(void) {
  LOAD_REGS();
L_522240: /* 522240: mov eax, ecx */
  eax = ecx;
/* 522242: xor ecx, ecx */
  ecx = 0;
/* 522244: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 522246: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 522249: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 52224c: ret  */
  esp += 4; SPILL(); return;
}

void f_522260(void) {
  LOAD_REGS();
L_522260: /* 522260: mov eax, ecx */
  eax = ecx;
/* 522262: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 522265: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 522268: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52226c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52226d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 52226f: lea edx, [edx + edx*8] */
  edx = (uint32_t)(edx + edx*8);
/* 522272: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 522275: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 522278: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 522279: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52227c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52227d: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x522280u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522280: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522281: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5222a0(void) {
  LOAD_REGS();
L_5222a0: /* 5222a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5222a4: ret  */
  esp += 4; SPILL(); return;
}

void f_5222c0(void) {
  LOAD_REGS();
L_5222c0: /* 5222c0: mov eax, ecx */
  eax = ecx;
/* 5222c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5222c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5222c8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5222cc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 5222cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5222d1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 5222d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5222f0(void) {
  LOAD_REGS();
L_5222f0: /* 5222f0: mov eax, ecx */
  eax = ecx;
/* 5222f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5222f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5222f8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5222fc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 5222ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 522301: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 522304: ret 8 */
  esp += 12; SPILL(); return;
}

void f_522320(void) {
  LOAD_REGS();
L_522320: /* 522320: mov eax, ecx */
  eax = ecx;
/* 522322: ret  */
  esp += 4; SPILL(); return;
}

void f_522340(void) {
  LOAD_REGS();
L_522340: /* 522340: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 522344: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 522347: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 522348: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 52234c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52234e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 522351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522352: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x522355u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522356: call 0x4e4160 */
  esp -= 4; W32(esp, 0x52235bu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 52235b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52235e: ret  */
  esp += 4; SPILL(); return;
}

void f_522370(void) {
  LOAD_REGS();
L_522370: /* 522370: mov eax, ecx */
  eax = ecx;
/* 522372: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 522375: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 522378: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52237c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52237d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 52237f: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 522382: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 522385: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522388: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 522389: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52238c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52238d: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x522390u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522390: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522391: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5223b0(void) {
  LOAD_REGS();
L_5223b0: /* 5223b0: mov eax, ecx */
  eax = ecx;
/* 5223b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5223b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5223b8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5223bc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 5223bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5223c1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 5223c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5223e0(void) {
  LOAD_REGS();
L_5223e0: /* 5223e0: mov eax, ecx */
  eax = ecx;
/* 5223e2: ret  */
  esp += 4; SPILL(); return;
}

void f_522400(void) {
  LOAD_REGS();
L_522400: /* 522400: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 522404: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 522408: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52240a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52240d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52240e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x522411u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522411: ret  */
  esp += 4; SPILL(); return;
}

void f_522430(void) {
  LOAD_REGS();
L_522430: /* 522430: mov eax, ecx */
  eax = ecx;
/* 522432: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 522435: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 522438: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52243c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52243d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 52243f: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 522442: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 522445: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 522449: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52244c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52244d: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x522450u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522450: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522451: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522470(void) {
  LOAD_REGS();
L_522470: /* 522470: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 522474: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522476: je 0x522487 */
  if (zf) goto L_522487;
L_522478: /* 522478: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 52247b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 52247f: test dword ptr [ecx + 0x498], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522485: jne 0x522489 */
  if (!zf) goto L_522489;
L_522487: /* 522487: xor eax, eax */
  eax = 0;
L_522489: /* 522489: ret  */
  esp += 4; SPILL(); return;
}

void f_5224a0(void) {
  LOAD_REGS();
L_5224a0: /* 5224a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5224a4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 5224a8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5224aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5224ab: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x5224aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5224ae: ret  */
  esp += 4; SPILL(); return;
}

void f_5224c0(void) {
  LOAD_REGS();
L_5224c0: /* 5224c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5224c1: mov ebp, esp */
  ebp = esp;
/* 5224c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5224c5: push 0x557a70 */
  { uint32_t v = 0x557a70u; esp -= 4; W32(esp, v); }
/* 5224ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5224d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5224d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5224d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5224db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5224de: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5224e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5224e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5224e2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5224e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5224e6: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 5224e9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5224ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5224ed: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5224f4: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x5224f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5224f7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 5224f9: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5224fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5224fd: mov ecx, eax */
  ecx = eax;
/* 5224ff: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x522502u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522502: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 522505: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522506: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522507: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52250e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52250f: mov esp, ebp */
  esp = ebp;
/* 522511: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522512: ret  */
  esp += 4; SPILL(); return;
}

void f_522513(void) {
  LOAD_REGS();
L_522513: /* 522513: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 522516: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52251b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52251e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52251f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 522522: call 0x554df6 */
  esp -= 4; W32(esp, 0x522527u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_522527(); return;
}

void f_522527(void) {
  LOAD_REGS();
L_522527: /* 522527: push 0x56c1f0 */
  { uint32_t v = 0x56c1f0u; esp -= 4; W32(esp, v); }
/* 52252c: push 0x5a6ac0 */
  { uint32_t v = 0x5a6ac0u; esp -= 4; W32(esp, v); }
/* 522531: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x522536u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 522536: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 522539: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52253b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52253d: call 0x554df6 */
  esp -= 4; W32(esp, 0x522542u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_522542: guest_badaddr(0x522542); return;
}

void f_522580(void) {
  LOAD_REGS();
L_522580: /* 522580: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 522584: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 522588: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52258a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52258b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x52258eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52258e: ret  */
  esp += 4; SPILL(); return;
}

void f_5225a0(void) {
  LOAD_REGS();
L_5225a0: /* 5225a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5225a1: mov ebp, esp */
  ebp = esp;
/* 5225a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5225a5: push 0x557a80 */
  { uint32_t v = 0x557a80u; esp -= 4; W32(esp, v); }
/* 5225aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5225b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5225b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5225b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5225bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5225bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5225bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5225be: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5225c1: xor esi, esi */
  esi = 0;
/* 5225c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5225c6: mov ebx, ecx */
  ebx = ecx;
/* 5225c8: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 5225cb: jmp 0x5225d0 */
  goto L_5225d0;
L_5225d0: /* 5225d0: cmp esi, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5225d3: jge 0x5225ee */
  if ((sf == of)) goto L_5225ee;
L_5225d5: /* 5225d5: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 5225d8: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 5225db: mov eax, dword ptr [ecx + eax*8 + 0xc] */
  eax = R32((uint32_t)(ecx + eax*8 + 0xcu));
/* 5225df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5225e1: je 0x5225eb */
  if (zf) goto L_5225eb;
L_5225e3: /* 5225e3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5225e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5225e6: mov ecx, ebx */
  ecx = ebx;
/* 5225e8: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x5225ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5225eb: /* 5225eb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5225ec: jmp 0x5225d0 */
  goto L_5225d0;
L_5225ee: /* 5225ee: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5225f0: mov ecx, ebx */
  ecx = ebx;
/* 5225f2: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x5225f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5225f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5225fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5225fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5225fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 522604: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 522605: mov esp, ebp */
  esp = ebp;
/* 522607: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522608: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5225cd(void) {
  LOAD_REGS();
L_5225cd: /* 5225cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5225d0: /* 5225d0: cmp esi, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5225d3: jge 0x5225ee */
  if ((sf == of)) goto L_5225ee;
L_5225d5: /* 5225d5: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 5225d8: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 5225db: mov eax, dword ptr [ecx + eax*8 + 0xc] */
  eax = R32((uint32_t)(ecx + eax*8 + 0xcu));
/* 5225df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5225e1: je 0x5225eb */
  if (zf) goto L_5225eb;
L_5225e3: /* 5225e3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5225e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5225e6: mov ecx, ebx */
  ecx = ebx;
/* 5225e8: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x5225ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5225eb: /* 5225eb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5225ec: jmp 0x5225d0 */
  goto L_5225d0;
L_5225ee: /* 5225ee: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5225f0: mov ecx, ebx */
  ecx = ebx;
/* 5225f2: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x5225f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5225f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5225fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5225fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5225fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 522604: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 522605: mov esp, ebp */
  esp = ebp;
/* 522607: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522608: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52260b(void) {
  LOAD_REGS();
L_52260b: /* 52260b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52260e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 522613: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 522616: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 522617: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52261a: call 0x554df6 */
  esp -= 4; W32(esp, 0x52261fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52261f(); return;
}

void f_52261f(void) {
  LOAD_REGS();
L_52261f: /* 52261f: push 0x56c214 */
  { uint32_t v = 0x56c214u; esp -= 4; W32(esp, v); }
/* 522624: push 0x5a6ad8 */
  { uint32_t v = 0x5a6ad8u; esp -= 4; W32(esp, v); }
/* 522629: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52262eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52262e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 522631: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 522633: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 522635: call 0x554df6 */
  esp -= 4; W32(esp, 0x52263au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52263a: guest_badaddr(0x52263a); return;
}

void f_522670(void) {
  LOAD_REGS();
L_522670: /* 522670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 522671: mov ebp, esp */
  ebp = esp;
/* 522673: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 522675: push 0x557a90 */
  { uint32_t v = 0x557a90u; esp -= 4; W32(esp, v); }
/* 52267a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 522680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522681: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 522688: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52268b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52268c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52268d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52268e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 522691: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 522693: mov esi, ecx */
  esi = ecx;
/* 522695: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522698: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52269b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5226a2: jge 0x5226af */
  if ((sf == of)) goto L_5226af;
L_5226a4: /* 5226a4: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 5226a7: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5226aa: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5226ad: jmp 0x5226b5 */
  goto L_5226b5;
L_5226af: /* 5226af: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 5226b2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_5226b5: /* 5226b5: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 5226b8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 5226bb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5226bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5226be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5226bf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5226c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5226c3: mov ecx, ebx */
  ecx = ebx;
/* 5226c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5226c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5226c8: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 5226cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5226cd: je 0x522729 */
  if (zf) goto L_522729;
L_5226cf: /* 5226cf: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 5226d5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5226d8: cmp edi, dword ptr [esi + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 5226db: jae 0x522709 */
  if (!cf) goto L_522709;
L_5226dd: /* 5226dd: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 5226e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5226e2: jne 0x522709 */
  if (!zf) goto L_522709;
L_5226e4: /* 5226e4: xor eax, eax */
  eax = 0;
L_5226e6: /* 5226e6: cmp eax, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5226e9: jge 0x522709 */
  if ((sf == of)) goto L_522709;
L_5226eb: /* 5226eb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5226ee: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 5226f1: lea edx, [ecx + edx*8] */
  edx = (uint32_t)(ecx + edx*8);
/* 5226f4: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 5226f7: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 5226f9: jae 0x522721 */
  if (!cf) goto L_522721;
L_5226fb: /* 5226fb: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 5226fe: mov eax, dword ptr [edx + 0x6c] */
  eax = R32((uint32_t)(edx + 0x6cu));
/* 522701: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 522704: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 522707: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_522709: /* 522709: mov eax, 1 */
  eax = 0x1u;
/* 52270e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 522711: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 522718: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522719: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52271a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52271b: mov esp, ebp */
  esp = ebp;
/* 52271d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52271e: ret 8 */
  esp += 12; SPILL(); return;
L_522721: /* 522721: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 522723: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 522726: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 522727: jmp 0x5226e6 */
  goto L_5226e6;
L_522729: /* 522729: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 52272c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52272f: xor eax, eax */
  eax = 0;
/* 522731: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522732: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522734: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 522737: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522738: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 52273b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 522742: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 522743: mov esp, ebp */
  esp = ebp;
/* 522745: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522746: ret 8 */
  esp += 12; SPILL(); return;
}

void f_522749(void) {
  LOAD_REGS();
L_522749: /* 522749: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52274c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 522751: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 522754: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522755: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 522758: call 0x554df6 */
  esp -= 4; W32(esp, 0x52275du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52275d(); return;
}

void f_52275d(void) {
  LOAD_REGS();
L_52275d: /* 52275d: push 0x56c250 */
  { uint32_t v = 0x56c250u; esp -= 4; W32(esp, v); }
/* 522762: push 0x5a6ae0 */
  { uint32_t v = 0x5a6ae0u; esp -= 4; W32(esp, v); }
/* 522767: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52276cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52276c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52276f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 522771: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 522773: call 0x554df6 */
  esp -= 4; W32(esp, 0x522778u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_522778: guest_badaddr(0x522778); return;
}

void f_5227d0(void) {
  LOAD_REGS();
L_5227d0: /* 5227d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5227d1: mov esi, dword ptr [ecx + 0x2c] */
  esi = R32((uint32_t)(ecx + 0x2cu));
/* 5227d4: xor edx, edx */
  edx = 0;
/* 5227d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5227d8: jle 0x5227f0 */
  if ((zf || sf != of)) goto L_5227f0;
L_5227da: /* 5227da: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 5227dd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5227e1: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_5227e4: /* 5227e4: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5227e6: je 0x5227f6 */
  if (zf) goto L_5227f6;
L_5227e8: /* 5227e8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5227e9: add eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5227ec: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5227ee: jl 0x5227e4 */
  if ((sf != of)) goto L_5227e4;
L_5227f0: /* 5227f0: xor eax, eax */
  eax = 0;
/* 5227f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5227f3: ret 4 */
  esp += 8; SPILL(); return;
L_5227f6: /* 5227f6: mov eax, 1 */
  eax = 0x1u;
/* 5227fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5227fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522810(void) {
  LOAD_REGS();
L_522810: /* 522810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 522811: mov ebp, esp */
  ebp = esp;
/* 522813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 522815: push 0x557aa0 */
  { uint32_t v = 0x557aa0u; esp -= 4; W32(esp, v); }
/* 52281a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 522820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 522828: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52282b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52282c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52282d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52282e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 522831: xor eax, eax */
  eax = 0;
/* 522833: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522835: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 522838: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 52283b: jl 0x5228d6 */
  if ((sf != of)) goto L_5228d6;
L_522841: /* 522841: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522844: jge 0x5228d6 */
  if ((sf == of)) goto L_5228d6;
L_52284a: /* 52284a: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 52284d: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 522850: lea esi, [esi + edx*8] */
  esi = (uint32_t)(esi + edx*8);
/* 522853: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 522856: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522858: jge 0x5228ce */
  if ((sf == of)) goto L_5228ce;
L_52285a: /* 52285a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52285d: mov edx, dword ptr [eax + 0x84] */
  edx = R32((uint32_t)(eax + 0x84u));
/* 522863: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* 522866: mov ebx, dword ptr [edx + ecx*4 + 0x1c] */
  ebx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 52286a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52286c: jne 0x52288a */
  if (!zf) goto L_52288a;
L_52286e: /* 52286e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 522871: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522873: je 0x52288a */
  if (zf) goto L_52288a;
L_522875: /* 522875: call 0x4e3d50 */
  esp -= 4; W32(esp, 0x52287au); SPILL(); f_4e3d50(); if (g_unwind) return; RELOAD();
/* 52287a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 52287d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52287e: call 0x4e11e5 */
  esp -= 4; W32(esp, 0x522883u); SPILL(); f_4e11e5(); if (g_unwind) return; RELOAD();
/* 522883: mov ebx, eax */
  ebx = eax;
/* 522885: call 0x4e375b */
  esp -= 4; W32(esp, 0x52288au); SPILL(); f_4e375b(); if (g_unwind) return; RELOAD();
L_52288a: /* 52288a: mov eax, ebx */
  eax = ebx;
/* 52288c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52288f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 522896: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522897: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522898: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 522899: mov esp, ebp */
  esp = ebp;
/* 52289b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52289c: ret 8 */
  esp += 12; SPILL(); return;
L_5228ce: /* 5228ce: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 5228d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5228d1: jmp 0x522841 */
  goto L_522841;
L_5228d6: /* 5228d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5228d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5228da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5228db: xor eax, eax */
  eax = 0;
/* 5228dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5228e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5228e5: mov esp, ebp */
  esp = ebp;
/* 5228e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5228e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52289f(void) {
  LOAD_REGS();
L_52289f: /* 52289f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5228a2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5228a7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5228aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5228ab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5228ae: call 0x554df6 */
  esp -= 4; W32(esp, 0x5228b3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5228b3(); return;
}

void f_5228b3(void) {
  LOAD_REGS();
  goto L_5228b3;
L_522841: /* 522841: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522844: jge 0x5228d6 */
  if ((sf == of)) goto L_5228d6;
L_52284a: /* 52284a: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 52284d: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 522850: lea esi, [esi + edx*8] */
  esi = (uint32_t)(esi + edx*8);
/* 522853: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 522856: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522858: jge 0x5228ce */
  if ((sf == of)) goto L_5228ce;
L_52285a: /* 52285a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 52285d: mov edx, dword ptr [eax + 0x84] */
  edx = R32((uint32_t)(eax + 0x84u));
/* 522863: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* 522866: mov ebx, dword ptr [edx + ecx*4 + 0x1c] */
  ebx = R32((uint32_t)(edx + ecx*4 + 0x1cu));
/* 52286a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52286c: jne 0x52288a */
  if (!zf) goto L_52288a;
L_52286e: /* 52286e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 522871: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522873: je 0x52288a */
  if (zf) goto L_52288a;
L_522875: /* 522875: call 0x4e3d50 */
  esp -= 4; W32(esp, 0x52287au); SPILL(); f_4e3d50(); if (g_unwind) return; RELOAD();
/* 52287a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 52287d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52287e: call 0x4e11e5 */
  esp -= 4; W32(esp, 0x522883u); SPILL(); f_4e11e5(); if (g_unwind) return; RELOAD();
/* 522883: mov ebx, eax */
  ebx = eax;
/* 522885: call 0x4e375b */
  esp -= 4; W32(esp, 0x52288au); SPILL(); f_4e375b(); if (g_unwind) return; RELOAD();
L_52288a: /* 52288a: mov eax, ebx */
  eax = ebx;
/* 52288c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52288f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 522896: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522897: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522898: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 522899: mov esp, ebp */
  esp = ebp;
/* 52289b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52289c: ret 8 */
  esp += 12; SPILL(); return;
L_5228b3: /* 5228b3: push 0x56c290 */
  { uint32_t v = 0x56c290u; esp -= 4; W32(esp, v); }
/* 5228b8: push 0x5a6bf0 */
  { uint32_t v = 0x5a6bf0u; esp -= 4; W32(esp, v); }
/* 5228bd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5228c2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5228c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5228c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5228c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5228c9: call 0x554df6 */
  esp -= 4; W32(esp, 0x5228ceu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5228ce: /* 5228ce: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 5228d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5228d1: jmp 0x522841 */
  goto L_522841;
L_5228d6: /* 5228d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5228d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5228da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5228db: xor eax, eax */
  eax = 0;
/* 5228dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5228e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5228e5: mov esp, ebp */
  esp = ebp;
/* 5228e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5228e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_522930(void) {
  LOAD_REGS();
L_522930: /* 522930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522931: mov esi, ecx */
  esi = ecx;
/* 522933: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 522936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522937: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 52293a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 52293d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52293f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 522942: jle 0x522960 */
  if ((zf || sf != of)) goto L_522960;
L_522944: /* 522944: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 522947: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 522948: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52294b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52294d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 522950: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 522954: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 522956: mov ecx, esi */
  ecx = esi;
/* 522958: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52295b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x522960u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_522960: /* 522960: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 522964: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 522966: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 522968: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 52296b: mov eax, edi */
  eax = edi;
/* 52296d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52296e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52296f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5229a0(void) {
  LOAD_REGS();
L_5229a0: /* 5229a0: mov eax, ecx */
  eax = ecx;
/* 5229a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5229a6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5229a8: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 5229af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5229d0(void) {
  LOAD_REGS();
L_5229d0: /* 5229d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5229d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5229d5: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 5229d7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5229d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5229da: je 0x5229e1 */
  if (zf) goto L_5229e1;
L_5229dc: /* 5229dc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5229df: jmp 0x5229e3 */
  goto L_5229e3;
L_5229e1: /* 5229e1: xor eax, eax */
  eax = 0;
L_5229e3: /* 5229e3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 5229e6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 5229e7: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5229e9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 5229ec: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 5229ef: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5229f2: je 0x522a0b */
  if (zf) goto L_522a0b;
L_5229f4: /* 5229f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_5229f6: /* 5229f6: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 5229f9: mov edi, dword ptr [edx + ecx*4 + 4] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 5229fd: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5229ff: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 522a02: je 0x522a12 */
  if (zf) goto L_522a12;
L_522a04: /* 522a04: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 522a06: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522a09: jne 0x5229f6 */
  if (!zf) goto L_5229f6;
L_522a0b: /* 522a0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522a0c: xor eax, eax */
  eax = 0;
/* 522a0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522a0f: ret 4 */
  esp += 8; SPILL(); return;
L_522a12: /* 522a12: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522a15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522a16: lea eax, [edx + eax*4 + 8] */
  eax = (uint32_t)(edx + eax*4 + 0x8u);
/* 522a1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522a1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522a40(void) {
  LOAD_REGS();
L_522a40: /* 522a40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 522a44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522a45: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 522a47: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522a49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522a4a: je 0x522a51 */
  if (zf) goto L_522a51;
L_522a4c: /* 522a4c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 522a4f: jmp 0x522a53 */
  goto L_522a53;
L_522a51: /* 522a51: xor eax, eax */
  eax = 0;
L_522a53: /* 522a53: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 522a56: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 522a57: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 522a59: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 522a5c: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 522a5f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522a62: je 0x522a7b */
  if (zf) goto L_522a7b;
L_522a64: /* 522a64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_522a66: /* 522a66: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 522a69: mov edi, dword ptr [edx + ecx*4 + 4] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 522a6d: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522a6f: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 522a72: je 0x522a82 */
  if (zf) goto L_522a82;
L_522a74: /* 522a74: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 522a76: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522a79: jne 0x522a66 */
  if (!zf) goto L_522a66;
L_522a7b: /* 522a7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522a7c: xor eax, eax */
  eax = 0;
/* 522a7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522a7f: ret 4 */
  esp += 8; SPILL(); return;
L_522a82: /* 522a82: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522a85: mov eax, dword ptr [edx + eax*4 + 8] */
  eax = R32((uint32_t)(edx + eax*4 + 0x8u));
/* 522a89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522a8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522a8b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522ab0(void) {
  LOAD_REGS();
L_522ab0: /* 522ab0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 522ab3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 522ab6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 522ab8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522abb: lea eax, [edx + eax*4 + 8] */
  eax = (uint32_t)(edx + eax*4 + 0x8u);
/* 522abf: ret  */
  esp += 4; SPILL(); return;
}

void f_522ad0(void) {
  LOAD_REGS();
L_522ad0: /* 522ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522ad1: mov esi, ecx */
  esi = ecx;
/* 522ad3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 522ad6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522ad7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 522ada: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 522add: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522adf: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 522ae2: jle 0x522b00 */
  if ((zf || sf != of)) goto L_522b00;
L_522ae4: /* 522ae4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 522ae7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 522ae8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 522aeb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 522aed: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 522af0: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 522af4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 522af6: mov ecx, esi */
  ecx = esi;
/* 522af8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 522afb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x522b00u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_522b00: /* 522b00: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 522b02: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 522b05: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 522b08: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522b0a: je 0x522b20 */
  if (zf) goto L_522b20;
L_522b0c: /* 522b0c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 522b10: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 522b12: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 522b16: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 522b19: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 522b1b: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 522b1e: jmp 0x522b22 */
  goto L_522b22;
L_522b20: /* 522b20: xor edi, edi */
  edi = 0;
L_522b22: /* 522b22: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 522b25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522b27: je 0x522b2e */
  if (zf) goto L_522b2e;
L_522b29: /* 522b29: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 522b2c: jmp 0x522b30 */
  goto L_522b30;
L_522b2e: /* 522b2e: xor ecx, ecx */
  ecx = 0;
L_522b30: /* 522b30: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 522b33: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 522b34: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 522b36: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 522b39: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 522b3c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 522b3e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 522b41: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 522b44: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 522b45: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 522b48: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 522b4b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 522b4e: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 522b52: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522b54: jge 0x522b63 */
  if ((sf == of)) goto L_522b63;
L_522b56: /* 522b56: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 522b59: mov ecx, esi */
  ecx = esi;
/* 522b5b: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 522b5e: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x522b63u); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
L_522b63: /* 522b63: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 522b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522b68: ret 8 */
  esp += 12; SPILL(); return;
}

void f_522ba0(void) {
  LOAD_REGS();
L_522ba0: /* 522ba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522ba1: mov esi, ecx */
  esi = ecx;
/* 522ba3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 522ba6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522ba7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 522baa: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 522bad: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522baf: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 522bb2: jle 0x522bd0 */
  if ((zf || sf != of)) goto L_522bd0;
L_522bb4: /* 522bb4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 522bb7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 522bb8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 522bbb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 522bbd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 522bc0: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 522bc4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 522bc6: mov ecx, esi */
  ecx = esi;
/* 522bc8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 522bcb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x522bd0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_522bd0: /* 522bd0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 522bd2: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 522bd5: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 522bd8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522bda: je 0x522bf0 */
  if (zf) goto L_522bf0;
L_522bdc: /* 522bdc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 522be0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 522be2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 522be6: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 522be9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 522beb: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 522bee: jmp 0x522bf2 */
  goto L_522bf2;
L_522bf0: /* 522bf0: xor edi, edi */
  edi = 0;
L_522bf2: /* 522bf2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 522bf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522bf7: je 0x522bfe */
  if (zf) goto L_522bfe;
L_522bf9: /* 522bf9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 522bfc: jmp 0x522c00 */
  goto L_522c00;
L_522bfe: /* 522bfe: xor ecx, ecx */
  ecx = 0;
L_522c00: /* 522c00: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 522c03: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 522c04: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 522c06: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 522c09: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 522c0c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 522c0e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 522c11: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 522c14: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 522c15: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 522c18: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 522c1b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 522c1e: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 522c22: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522c24: jge 0x522c33 */
  if ((sf == of)) goto L_522c33;
L_522c26: /* 522c26: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 522c29: mov ecx, esi */
  ecx = esi;
/* 522c2b: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 522c2e: call 0x4e2455 */
  esp -= 4; W32(esp, 0x522c33u); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
L_522c33: /* 522c33: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 522c36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522c37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522c38: ret 8 */
  esp += 12; SPILL(); return;
}

void f_522c70(void) {
  LOAD_REGS();
L_522c70: /* 522c70: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 522c73: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 522c77: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522c7a: jle 0x522c97 */
  if ((zf || sf != of)) goto L_522c97;
L_522c7c: /* 522c7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_522c80: /* 522c80: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 522c83: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 522c84: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 522c86: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 522c88: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 522c8b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 522c8e: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 522c92: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522c95: jg 0x522c80 */
  if ((!zf && sf == of)) goto L_522c80;
L_522c97: /* 522c97: jmp 0x4e3053 */
  SPILL(); f_4e3053(); return;
}

void f_522cb0(void) {
  LOAD_REGS();
L_522cb0: /* 522cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522cb1: mov esi, ecx */
  esi = ecx;
/* 522cb3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 522cb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522cb7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 522cba: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 522cbd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522cbf: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 522cc2: jle 0x522ce0 */
  if ((zf || sf != of)) goto L_522ce0;
L_522cc4: /* 522cc4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 522cc7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 522cc8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 522ccb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 522ccd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 522cd0: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 522cd4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 522cd6: mov ecx, esi */
  ecx = esi;
/* 522cd8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 522cdb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x522ce0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_522ce0: /* 522ce0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 522ce2: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 522ce5: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 522ce8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522cea: je 0x522d00 */
  if (zf) goto L_522d00;
L_522cec: /* 522cec: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 522cf0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 522cf2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 522cf6: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 522cf9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 522cfb: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 522cfe: jmp 0x522d02 */
  goto L_522d02;
L_522d00: /* 522d00: xor edi, edi */
  edi = 0;
L_522d02: /* 522d02: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 522d05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522d07: je 0x522d0e */
  if (zf) goto L_522d0e;
L_522d09: /* 522d09: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 522d0c: jmp 0x522d10 */
  goto L_522d10;
L_522d0e: /* 522d0e: xor ecx, ecx */
  ecx = 0;
L_522d10: /* 522d10: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 522d13: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 522d14: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 522d16: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 522d19: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 522d1c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 522d1e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 522d21: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 522d24: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 522d25: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 522d28: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 522d2b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 522d2e: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 522d32: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522d34: jge 0x522d43 */
  if ((sf == of)) goto L_522d43;
L_522d36: /* 522d36: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 522d39: mov ecx, esi */
  ecx = esi;
/* 522d3b: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 522d3e: call 0x4e3053 */
  esp -= 4; W32(esp, 0x522d43u); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
L_522d43: /* 522d43: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 522d46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522d47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522d48: ret 8 */
  esp += 12; SPILL(); return;
}

void f_522d80(void) {
  LOAD_REGS();
L_522d80: /* 522d80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 522d84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522d86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522d87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522d88: mov edi, ecx */
  edi = ecx;
/* 522d8a: je 0x522dca */
  if (zf) goto L_522dca;
L_522d8c: /* 522d8c: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 522d8f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522d91: je 0x522dca */
  if (zf) goto L_522dca;
L_522d93: /* 522d93: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 522d96: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522d99: je 0x522dca */
  if (zf) goto L_522dca;
L_522d9b: /* 522d9b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 522d9f: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 522da3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522da4: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 522da7: call 0x4e1d34 */
  esp -= 4; W32(esp, 0x522dacu); SPILL(); f_4e1d34(); if (g_unwind) return; RELOAD();
/* 522dac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522dae: je 0x522dca */
  if (zf) goto L_522dca;
L_522db0: /* 522db0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 522db2: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 522db5: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 522db8: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 522dbb: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522dbe: jge 0x522dca */
  if ((sf == of)) goto L_522dca;
L_522dc0: /* 522dc0: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 522dc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522dc4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 522dc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522dc7: ret 4 */
  esp += 8; SPILL(); return;
L_522dca: /* 522dca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522dcb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 522dce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522dcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_522e00(void) {
  LOAD_REGS();
L_522e00: /* 522e00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 522e01: mov ebp, esp */
  ebp = esp;
/* 522e03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 522e05: push 0x557ab0 */
  { uint32_t v = 0x557ab0u; esp -= 4; W32(esp, v); }
/* 522e0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 522e10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522e11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 522e18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 522e1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 522e1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522e1d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 522e20: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 522e23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522e24: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 522e27: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 522e29: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522e2c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 522e2f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 522e32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522e33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 522e36: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 522e39: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 522e3c: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 522e3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 522e40: mov ecx, edi */
  ecx = edi;
/* 522e42: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 522e49: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x522e4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522e4c: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 522e4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522e51: je 0x522ece */
  if (zf) goto L_522ece;
L_522e53: /* 522e53: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 522e56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 522e57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522e58: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x522e5du); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 522e5d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 522e60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 522e63: xor eax, eax */
  eax = 0;
L_522e65: /* 522e65: cmp eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522e67: jge 0x522e6c */
  if ((sf == of)) goto L_522e6c;
L_522e69: /* 522e69: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 522e6a: jmp 0x522e65 */
  goto L_522e65;
L_522e6c: /* 522e6c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 522e6f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 522e71: mov ecx, esi */
  ecx = esi;
/* 522e73: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 522e79: call 0x4e4502 */
  esp -= 4; W32(esp, 0x522e7eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 522e7e: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_522e85: /* 522e85: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 522e88: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522e8b: jge 0x522ef8 */
  if ((sf == of)) goto L_522ef8;
L_522e8d: /* 522e8d: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 522e90: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 522e93: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 522e96: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522e98: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 522e9b: jle 0x522eb9 */
  if ((zf || sf != of)) goto L_522eb9;
L_522e9d: /* 522e9d: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 522ea0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 522ea1: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 522ea4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 522ea6: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 522ea9: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 522ead: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 522eb0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 522eb2: mov ecx, esi */
  ecx = esi;
/* 522eb4: call 0x4e4502 */
  esp -= 4; W32(esp, 0x522eb9u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_522eb9: /* 522eb9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 522ebb: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 522ebe: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 522ec1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 522ec3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522ec4: mov ecx, edi */
  ecx = edi;
/* 522ec6: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x522ec9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522ec9: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 522ecc: jmp 0x522e85 */
  goto L_522e85;
L_522ece: /* 522ece: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 522ecf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522ed0: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x522ed5u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 522ed5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 522ed8: xor ebx, ebx */
  ebx = 0;
/* 522eda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_522ee0: /* 522ee0: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 522ee3: jge 0x522ef8 */
  if ((sf == of)) goto L_522ef8;
L_522ee5: /* 522ee5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 522ee7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 522ee9: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 522eec: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 522eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 522ef0: mov ecx, edi */
  ecx = edi;
/* 522ef2: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x522ef5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 522ef5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 522ef6: jmp 0x522ee0 */
  goto L_522ee0;
L_522ef8: /* 522ef8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 522efb: mov eax, edi */
  eax = edi;
/* 522efd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522efe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522eff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 522f06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 522f07: mov esp, ebp */
  esp = ebp;
/* 522f09: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522f0a: ret  */
  esp += 4; SPILL(); return;
}

void f_522f0b(void) {
  LOAD_REGS();
L_522f0b: /* 522f0b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 522f0e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 522f13: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 522f16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 522f17: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 522f1a: call 0x554df6 */
  esp -= 4; W32(esp, 0x522f1fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_522f1f(); return;
}

void f_522f1f(void) {
  LOAD_REGS();
L_522f1f: /* 522f1f: push 0x56c2d0 */
  { uint32_t v = 0x56c2d0u; esp -= 4; W32(esp, v); }
/* 522f24: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 522f29: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x522f2eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 522f2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 522f31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 522f33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 522f35: call 0x554df6 */
  esp -= 4; W32(esp, 0x522f3au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_522f3a: guest_badaddr(0x522f3a); return;
}

void f_522f90(void) {
  LOAD_REGS();
L_522f90: /* 522f90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 522f91: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 522f95: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 522f96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 522f97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 522f98: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 522f9a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 522f9c: je 0x522fa3 */
  if (zf) goto L_522fa3;
L_522f9e: /* 522f9e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 522fa1: jmp 0x522fa5 */
  goto L_522fa5;
L_522fa3: /* 522fa3: xor eax, eax */
  eax = 0;
L_522fa5: /* 522fa5: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 522fa8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 522fa9: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 522fab: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 522fae: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 522fb1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522fb4: je 0x522fd5 */
  if (zf) goto L_522fd5;
L_522fb6: /* 522fb6: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 522fb8: jmp 0x522fc0 */
  goto L_522fc0;
L_522fc0: /* 522fc0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 522fc3: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 522fc7: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522fc9: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 522fcc: je 0x522fe7 */
  if (zf) goto L_522fe7;
L_522fce: /* 522fce: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 522fd0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522fd3: jne 0x522fc0 */
  if (!zf) goto L_522fc0;
L_522fd5: /* 522fd5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 522fd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 522fda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 522fdb: call 0x4e1b27 */
  esp -= 4; W32(esp, 0x522fe0u); SPILL(); f_4e1b27(); if (g_unwind) return; RELOAD();
/* 522fe0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522fe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522fe2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522fe3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 522fe4: ret 8 */
  esp += 12; SPILL(); return;
L_522fe7: /* 522fe7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 522feb: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 522fed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522ff0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 522ff3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522ff4: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 522ff8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 522ffa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522ffb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522ffc: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 523000: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_522fba(void) {
  LOAD_REGS();
L_522fba: /* 522fba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_522fc0: /* 522fc0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 522fc3: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 522fc7: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522fc9: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 522fcc: je 0x522fe7 */
  if (zf) goto L_522fe7;
L_522fce: /* 522fce: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 522fd0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 522fd3: jne 0x522fc0 */
  if (!zf) goto L_522fc0;
L_522fd5: /* 522fd5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 522fd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 522fda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 522fdb: call 0x4e1b27 */
  esp -= 4; W32(esp, 0x522fe0u); SPILL(); f_4e1b27(); if (g_unwind) return; RELOAD();
/* 522fe0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522fe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522fe2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522fe3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 522fe4: ret 8 */
  esp += 12; SPILL(); return;
L_522fe7: /* 522fe7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 522feb: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 522fed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 522ff0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 522ff3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 522ff4: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 522ff8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 522ffa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 522ffb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 522ffc: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 523000: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_523030(void) {
  LOAD_REGS();
L_523030: /* 523030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523031: mov esi, ecx */
  esi = ecx;
/* 523033: xor eax, eax */
  eax = 0;
/* 523035: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 523037: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52303a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52303d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523042u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 523042: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 523049: mov ecx, esi */
  ecx = esi;
/* 52304b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52304c: jmp 0x4e2455 */
  SPILL(); f_4e2455(); return;
}

void f_523070(void) {
  LOAD_REGS();
L_523070: /* 523070: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 523071: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 523075: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 523076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523077: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523078: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 52307a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52307c: je 0x523083 */
  if (zf) goto L_523083;
L_52307e: /* 52307e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 523081: jmp 0x523085 */
  goto L_523085;
L_523083: /* 523083: xor eax, eax */
  eax = 0;
L_523085: /* 523085: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 523088: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 523089: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52308b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 52308e: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 523091: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523094: je 0x5230b5 */
  if (zf) goto L_5230b5;
L_523096: /* 523096: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 523098: jmp 0x5230a0 */
  goto L_5230a0;
L_5230a0: /* 5230a0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 5230a3: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 5230a7: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5230a9: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 5230ac: je 0x5230c7 */
  if (zf) goto L_5230c7;
L_5230ae: /* 5230ae: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5230b0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5230b3: jne 0x5230a0 */
  if (!zf) goto L_5230a0;
L_5230b5: /* 5230b5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5230b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5230ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5230bb: call 0x4e1ab9 */
  esp -= 4; W32(esp, 0x5230c0u); SPILL(); f_4e1ab9(); if (g_unwind) return; RELOAD();
/* 5230c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5230c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5230c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5230c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5230c4: ret 8 */
  esp += 12; SPILL(); return;
L_5230c7: /* 5230c7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5230cb: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 5230cd: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 5230d0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 5230d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5230d4: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 5230d8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5230da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5230db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5230dc: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 5230e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5230e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52309a(void) {
  LOAD_REGS();
L_52309a: /* 52309a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5230a0: /* 5230a0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 5230a3: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 5230a7: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5230a9: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 5230ac: je 0x5230c7 */
  if (zf) goto L_5230c7;
L_5230ae: /* 5230ae: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 5230b0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5230b3: jne 0x5230a0 */
  if (!zf) goto L_5230a0;
L_5230b5: /* 5230b5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5230b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5230ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5230bb: call 0x4e1ab9 */
  esp -= 4; W32(esp, 0x5230c0u); SPILL(); f_4e1ab9(); if (g_unwind) return; RELOAD();
/* 5230c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5230c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5230c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5230c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5230c4: ret 8 */
  esp += 12; SPILL(); return;
L_5230c7: /* 5230c7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 5230cb: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 5230cd: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 5230d0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 5230d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5230d4: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 5230d8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5230da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5230db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5230dc: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 5230e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5230e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_523110(void) {
  LOAD_REGS();
L_523110: /* 523110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 523111: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 523115: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 523116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523117: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523118: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 52311a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52311c: je 0x523123 */
  if (zf) goto L_523123;
L_52311e: /* 52311e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 523121: jmp 0x523125 */
  goto L_523125;
L_523123: /* 523123: xor eax, eax */
  eax = 0;
L_523125: /* 523125: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 523128: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 523129: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52312b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 52312e: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 523131: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523134: je 0x523155 */
  if (zf) goto L_523155;
L_523136: /* 523136: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 523138: jmp 0x523140 */
  goto L_523140;
L_523140: /* 523140: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 523143: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 523147: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523149: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 52314c: je 0x523167 */
  if (zf) goto L_523167;
L_52314e: /* 52314e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 523150: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523153: jne 0x523140 */
  if (!zf) goto L_523140;
L_523155: /* 523155: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 523159: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52315a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52315b: call 0x4e3959 */
  esp -= 4; W32(esp, 0x523160u); SPILL(); f_4e3959(); if (g_unwind) return; RELOAD();
/* 523160: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523161: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523162: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523163: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523164: ret 8 */
  esp += 12; SPILL(); return;
L_523167: /* 523167: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 52316b: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 52316d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 523170: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 523173: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523174: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 523178: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 52317a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52317b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52317c: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 523180: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523181: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52313a(void) {
  LOAD_REGS();
L_52313a: /* 52313a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_523140: /* 523140: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 523143: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 523147: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523149: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 52314c: je 0x523167 */
  if (zf) goto L_523167;
L_52314e: /* 52314e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 523150: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523153: jne 0x523140 */
  if (!zf) goto L_523140;
L_523155: /* 523155: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 523159: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52315a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52315b: call 0x4e3959 */
  esp -= 4; W32(esp, 0x523160u); SPILL(); f_4e3959(); if (g_unwind) return; RELOAD();
/* 523160: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523161: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523162: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523163: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523164: ret 8 */
  esp += 12; SPILL(); return;
L_523167: /* 523167: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 52316b: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 52316d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 523170: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 523173: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523174: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 523178: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 52317a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52317b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52317c: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 523180: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523181: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5231b0(void) {
  LOAD_REGS();
L_5231b0: /* 5231b0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 5231b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5231b5: je 0x5231e1 */
  if (zf) goto L_5231e1;
L_5231b7: /* 5231b7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5231b9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 5231bc: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 5231c0: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5231c3: jle 0x5231dc */
  if ((zf || sf != of)) goto L_5231dc;
L_5231c5: /* 5231c5: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 5231c8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5231c9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5231cb: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5231cd: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 5231d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 5231d3: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 5231d7: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5231da: jg 0x5231c5 */
  if ((!zf && sf == of)) goto L_5231c5;
L_5231dc: /* 5231dc: jmp 0x4e3053 */
  SPILL(); f_4e3053(); return;
L_5231e1: /* 5231e1: ret  */
  esp += 4; SPILL(); return;
}

void f_523200(void) {
  LOAD_REGS();
L_523200: /* 523200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 523201: mov ebp, esp */
  ebp = esp;
/* 523203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 523205: push 0x557ac0 */
  { uint32_t v = 0x557ac0u; esp -= 4; W32(esp, v); }
/* 52320a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 523210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 523218: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52321b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52321c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52321d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 523220: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 523223: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523224: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 523227: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 523229: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 52322c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52322f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 523232: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523233: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 523236: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 523239: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 52323c: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52323f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523240: mov ecx, edi */
  ecx = edi;
/* 523242: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 523249: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x52324cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52324c: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 52324f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 523251: je 0x5232f1 */
  if (zf) goto L_5232f1;
L_523257: /* 523257: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 52325a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52325b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52325c: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x523261u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 523261: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 523264: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523267: xor eax, eax */
  eax = 0;
/* 523269: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_523270: /* 523270: cmp eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523272: jge 0x523277 */
  if ((sf == of)) goto L_523277;
L_523274: /* 523274: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523275: jmp 0x523270 */
  goto L_523270;
L_523277: /* 523277: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 52327a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 52327c: mov ecx, esi */
  ecx = esi;
/* 52327e: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 523284: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523289u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 523289: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_523290: /* 523290: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 523293: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523296: jge 0x52332e */
  if ((sf == of)) goto L_52332e;
L_52329c: /* 52329c: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 52329f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5232a2: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5232a5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5232a7: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5232aa: jle 0x5232c8 */
  if ((zf || sf != of)) goto L_5232c8;
L_5232ac: /* 5232ac: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5232af: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5232b0: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5232b3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5232b5: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5232b8: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 5232bc: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 5232bf: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5232c1: mov ecx, esi */
  ecx = esi;
/* 5232c3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5232c8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5232c8: /* 5232c8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5232ca: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 5232cd: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 5232d0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 5232d2: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 5232d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5232d6: mov ecx, edi */
  ecx = edi;
/* 5232d8: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x5232dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5232db: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5232de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5232df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5232e0: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5232e5u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5232e5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5232e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5232eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5232ec: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 5232ef: jmp 0x523290 */
  goto L_523290;
L_5232f1: /* 5232f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5232f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5232f3: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x5232f8u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 5232f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5232fb: xor ebx, ebx */
  ebx = 0;
/* 5232fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_523300: /* 523300: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523303: jge 0x52332e */
  if ((sf == of)) goto L_52332e;
L_523305: /* 523305: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 523307: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 52330a: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 52330d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 52330f: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 523312: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 523315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523316: mov ecx, edi */
  ecx = edi;
/* 523318: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x52331bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52331b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52331e: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 523321: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523322: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523323: call 0x4e4160 */
  esp -= 4; W32(esp, 0x523328u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 523328: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52332b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 52332c: jmp 0x523300 */
  goto L_523300;
L_52332e: /* 52332e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523331: mov eax, edi */
  eax = edi;
/* 523333: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523334: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523335: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52333c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52333d: mov esp, ebp */
  esp = ebp;
/* 52333f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523340: ret  */
  esp += 4; SPILL(); return;
}

void f_523341(void) {
  LOAD_REGS();
L_523341: /* 523341: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 523344: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 523349: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52334c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52334d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 523350: call 0x554df6 */
  esp -= 4; W32(esp, 0x523355u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_523355(); return;
}

void f_523355(void) {
  LOAD_REGS();
L_523355: /* 523355: push 0x56c2e8 */
  { uint32_t v = 0x56c2e8u; esp -= 4; W32(esp, v); }
/* 52335a: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 52335f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x523364u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 523364: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523367: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 523369: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52336b: call 0x554df6 */
  esp -= 4; W32(esp, 0x523370u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_523370: guest_badaddr(0x523370); return;
}

void f_5233e0(void) {
  LOAD_REGS();
L_5233e0: /* 5233e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5233e1: mov ebp, esp */
  ebp = esp;
/* 5233e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5233e5: push 0x557ad0 */
  { uint32_t v = 0x557ad0u; esp -= 4; W32(esp, v); }
/* 5233ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5233f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5233f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5233f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5233fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5233fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5233fd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 523400: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 523403: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523404: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 523407: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 523409: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 52340c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52340f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 523412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523413: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 523416: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 523419: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 52341c: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52341f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523420: mov ecx, edi */
  ecx = edi;
/* 523422: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 523429: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x52342cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52342c: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 52342f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 523431: je 0x5234b1 */
  if (zf) goto L_5234b1;
L_523433: /* 523433: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 523436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 523437: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523438: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x52343du); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 52343d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 523440: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523443: xor eax, eax */
  eax = 0;
L_523445: /* 523445: cmp eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523447: jge 0x52344c */
  if ((sf == of)) goto L_52344c;
L_523449: /* 523449: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52344a: jmp 0x523445 */
  goto L_523445;
L_52344c: /* 52344c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 52344f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 523451: mov ecx, esi */
  ecx = esi;
/* 523453: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 523459: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52345eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52345e: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_523465: /* 523465: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 523468: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52346b: jge 0x5234db */
  if ((sf == of)) goto L_5234db;
L_52346d: /* 52346d: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 523470: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 523473: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 523476: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523478: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 52347b: jle 0x523499 */
  if ((zf || sf != of)) goto L_523499;
L_52347d: /* 52347d: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 523480: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 523481: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 523484: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 523486: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 523489: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 52348d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 523490: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 523492: mov ecx, esi */
  ecx = esi;
/* 523494: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523499u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_523499: /* 523499: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52349b: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 52349e: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 5234a1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 5234a3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5234a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5234a7: mov ecx, edi */
  ecx = edi;
/* 5234a9: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x5234acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5234ac: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 5234af: jmp 0x523465 */
  goto L_523465;
L_5234b1: /* 5234b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5234b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5234b3: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x5234b8u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 5234b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5234bb: xor ebx, ebx */
  ebx = 0;
/* 5234bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5234c0: /* 5234c0: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5234c3: jge 0x5234db */
  if ((sf == of)) goto L_5234db;
L_5234c5: /* 5234c5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5234c7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 5234c9: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 5234cc: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 5234cf: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5234d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5234d3: mov ecx, edi */
  ecx = edi;
/* 5234d5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x5234d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5234d8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 5234d9: jmp 0x5234c0 */
  goto L_5234c0;
L_5234db: /* 5234db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5234de: mov eax, edi */
  eax = edi;
/* 5234e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5234e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5234e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5234e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5234ea: mov esp, ebp */
  esp = ebp;
/* 5234ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5234ed: ret  */
  esp += 4; SPILL(); return;
}

void f_5234ee(void) {
  LOAD_REGS();
L_5234ee: /* 5234ee: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5234f1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5234f6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5234f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5234fa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5234fd: call 0x554df6 */
  esp -= 4; W32(esp, 0x523502u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_523502(); return;
}

void f_523502(void) {
  LOAD_REGS();
L_523502: /* 523502: push 0x56c300 */
  { uint32_t v = 0x56c300u; esp -= 4; W32(esp, v); }
/* 523507: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 52350c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x523511u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 523511: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523514: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 523516: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 523518: call 0x554df6 */
  esp -= 4; W32(esp, 0x52351du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52351d: guest_badaddr(0x52351d); return;
}

void f_523570(void) {
  LOAD_REGS();
L_523570: /* 523570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 523571: mov ebp, esp */
  ebp = esp;
/* 523573: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 523575: push 0x557ae8 */
  { uint32_t v = 0x557ae8u; esp -= 4; W32(esp, v); }
/* 52357a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 523580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523581: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 523588: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52358b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52358c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52358d: mov esi, ecx */
  esi = ecx;
/* 52358f: xor ebx, ebx */
  ebx = 0;
/* 523591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523592: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 523595: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 523598: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 52359a: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 52359d: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 5235a0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5235a3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5235a5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 5235a8: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 5235ab: je 0x5235b2 */
  if (zf) goto L_5235b2;
L_5235ad: /* 5235ad: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 5235b0: jmp 0x5235b4 */
  goto L_5235b4;
L_5235b2: /* 5235b2: xor eax, eax */
  eax = 0;
L_5235b4: /* 5235b4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5235b6: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 5235b9: je 0x5235c0 */
  if (zf) goto L_5235c0;
L_5235bb: /* 5235bb: lea eax, [edi + 0x50] */
  eax = (uint32_t)(edi + 0x50u);
/* 5235be: jmp 0x5235cf */
  goto L_5235cf;
L_5235c0: /* 5235c0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5235c3: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5235c6: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 5235c9: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 5235cc: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
L_5235cf: /* 5235cf: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5235d1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 5235d3: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 5235d6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 5235d8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 5235db: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 5235de: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 5235e1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 5235e4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 5235e7: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 5235ea: je 0x5235f9 */
  if (zf) goto L_5235f9;
L_5235ec: /* 5235ec: mov ecx, dword ptr [edi + 0x508] */
  ecx = R32((uint32_t)(edi + 0x508u));
/* 5235f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5235f4: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x5235f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5235f7: jmp 0x5235fb */
  goto L_5235fb;
L_5235f9: /* 5235f9: xor eax, eax */
  eax = 0;
L_5235fb: /* 5235fb: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5235fd: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 523600: je 0x52360f */
  if (zf) goto L_52360f;
L_523602: /* 523602: mov ecx, dword ptr [edi + 0x508] */
  ecx = R32((uint32_t)(edi + 0x508u));
/* 523608: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52360a: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x52360du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52360d: jmp 0x523611 */
  goto L_523611;
L_52360f: /* 52360f: xor eax, eax */
  eax = 0;
L_523611: /* 523611: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 523614: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 523617: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523619: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 52361c: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 52361f: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 523622: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 523625: mov dword ptr [esi + 0x3c], ebx */
  W32((uint32_t)(esi + 0x3cu), ebx);
/* 523628: mov dword ptr [esi + 0x40], ebx */
  W32((uint32_t)(esi + 0x40u), ebx);
/* 52362b: je 0x523632 */
  if (zf) goto L_523632;
L_52362d: /* 52362d: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 523630: jmp 0x523634 */
  goto L_523634;
L_523632: /* 523632: xor eax, eax */
  eax = 0;
L_523634: /* 523634: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523636: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 523639: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 52363b: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 52363e: je 0x523672 */
  if (zf) goto L_523672;
L_523640: /* 523640: cmp dword ptr [edi + 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x98u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523646: je 0x523650 */
  if (zf) goto L_523650;
L_523648: /* 523648: cmp dword ptr [edi + 0x94], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x94u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52364e: je 0x523672 */
  if (zf) goto L_523672;
L_523650: /* 523650: test byte ptr [edi + 0x34], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x34u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 523653: je 0x523672 */
  if (zf) goto L_523672;
L_523655: /* 523655: cmp dword ptr [edi + 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x98u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52365b: je 0x523665 */
  if (zf) goto L_523665;
L_52365d: /* 52365d: mov edi, dword ptr [edi + 0x94] */
  edi = R32((uint32_t)(edi + 0x94u));
/* 523663: jmp 0x52366a */
  goto L_52366a;
L_523665: /* 523665: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_52366a: /* 52366a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52366b: mov ecx, esi */
  ecx = esi;
/* 52366d: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x523672u); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
L_523672: /* 523672: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523675: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523676: mov eax, esi */
  eax = esi;
/* 523678: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523679: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523680: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523681: mov esp, ebp */
  esp = ebp;
/* 523683: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523684: ret 4 */
  esp += 8; SPILL(); return;
}

void f_523687(void) {
  LOAD_REGS();
L_523687: /* 523687: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52368a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52368f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 523692: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 523693: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 523696: call 0x554df6 */
  esp -= 4; W32(esp, 0x52369bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52369b(); return;
}

void f_52369b(void) {
  LOAD_REGS();
L_52369b: /* 52369b: push 0x56c318 */
  { uint32_t v = 0x56c318u; esp -= 4; W32(esp, v); }
/* 5236a0: push 0x5a6ab8 */
  { uint32_t v = 0x5a6ab8u; esp -= 4; W32(esp, v); }
/* 5236a5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5236aau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5236aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5236ad: xor ebx, ebx */
  ebx = 0;
/* 5236af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5236b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5236b1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5236b6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5236b6: guest_badaddr(0x5236b6); return;
}

void f_523720(void) {
  LOAD_REGS();
L_523720: /* 523720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 523721: mov ebp, esp */
  ebp = esp;
/* 523723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 523725: push 0x557b00 */
  { uint32_t v = 0x557b00u; esp -= 4; W32(esp, v); }
/* 52372a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 523730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 523738: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52373b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52373e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 523740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 523741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523742: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 523745: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523746: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 523749: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52374c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52374d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 523754: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x523757u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 523757: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52375a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52375b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52375c: call 0x4e203b */
  esp -= 4; W32(esp, 0x523761u); SPILL(); f_4e203b(); if (g_unwind) return; RELOAD();
/* 523761: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523764: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523767: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523768: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523769: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523770: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523771: mov esp, ebp */
  esp = ebp;
/* 523773: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523774: ret  */
  esp += 4; SPILL(); return;
}

void f_523775(void) {
  LOAD_REGS();
L_523775: /* 523775: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 523778: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52377d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 523780: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523781: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 523784: call 0x554df6 */
  esp -= 4; W32(esp, 0x523789u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_523789(); return;
}

void f_523789(void) {
  LOAD_REGS();
L_523789: /* 523789: push 0x56c358 */
  { uint32_t v = 0x56c358u; esp -= 4; W32(esp, v); }
/* 52378e: push 0x5a6ac8 */
  { uint32_t v = 0x5a6ac8u; esp -= 4; W32(esp, v); }
/* 523793: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x523798u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 523798: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52379b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52379d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52379f: call 0x554df6 */
  esp -= 4; W32(esp, 0x5237a4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5237a4: guest_badaddr(0x5237a4); return;
}

void f_5237e0(void) {
  LOAD_REGS();
L_5237e0: /* 5237e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5237e1: mov ebp, esp */
  ebp = esp;
/* 5237e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5237e5: push 0x557b10 */
  { uint32_t v = 0x557b10u; esp -= 4; W32(esp, v); }
/* 5237ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5237f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5237f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5237f8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5237fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5237fc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 5237ff: mov dl, byte ptr [ebx + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x34u))) & 0xffu);
/* 523802: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523803: xor eax, eax */
  eax = 0;
/* 523805: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 523808: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523809: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52380c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52380f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 523812: je 0x523830 */
  if (zf) goto L_523830;
L_523814: /* 523814: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 523817: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52381a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523821: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523822: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523823: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523824: mov esp, ebp */
  esp = ebp;
/* 523826: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523827: ret 4 */
  esp += 8; SPILL(); return;
L_523830: /* 523830: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523833: jge 0x52384b */
  if ((sf == of)) goto L_52384b;
L_523835: /* 523835: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 523838: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 52383b: mov edx, dword ptr [esi + edx*8 + 0x10] */
  edx = R32((uint32_t)(esi + edx*8 + 0x10u));
/* 52383f: cmp edx, dword ptr [ebx + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523842: je 0x523932 */
  if (zf) goto L_523932;
L_523848: /* 523848: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523849: jmp 0x523830 */
  goto L_523830;
L_52384b: /* 52384b: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 52384e: mov edi, dword ptr [ecx + 0x2c] */
  edi = R32((uint32_t)(ecx + 0x2cu));
/* 523851: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 523854: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 523857: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 52385a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 52385d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52385f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 523862: jle 0x523880 */
  if ((zf || sf != of)) goto L_523880;
L_523864: /* 523864: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 523867: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 523868: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52386b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52386d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 523870: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 523874: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 523877: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 523879: mov ecx, esi */
  ecx = esi;
/* 52387b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523880u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_523880: /* 523880: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 523882: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 523885: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 523888: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52388a: je 0x523892 */
  if (zf) goto L_523892;
L_52388c: /* 52388c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52388d: call 0x4e2b12 */
  esp -= 4; W32(esp, 0x523892u); SPILL(); f_4e2b12(); if (g_unwind) return; RELOAD();
L_523892: /* 523892: xor ecx, ecx */
  ecx = 0;
L_523894: /* 523894: cmp ecx, dword ptr [ebx + 0x7c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523897: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 52389a: jge 0x52392f */
  if ((sf == of)) goto L_52392f;
L_5238a0: /* 5238a0: mov edx, dword ptr [ebx + 0x78] */
  edx = R32((uint32_t)(ebx + 0x78u));
/* 5238a3: mov esi, ecx */
  esi = ecx;
/* 5238a5: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 5238a8: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 5238ab: cmp dword ptr [eax + 4], 0x2a2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x2a2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5238b2: jne 0x523929 */
  if (!zf) goto L_523929;
L_5238b4: /* 5238b4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 5238b7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5238b9: jne 0x523929 */
  if (!zf) goto L_523929;
L_5238bb: /* 5238bb: xor edi, edi */
  edi = 0;
/* 5238bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5238c0: /* 5238c0: cmp edi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5238c6: jge 0x523926 */
  if ((sf == of)) goto L_523926;
L_5238c8: /* 5238c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5238c9: call 0x4e2356 */
  esp -= 4; W32(esp, 0x5238ceu); SPILL(); f_4e2356(); if (g_unwind) return; RELOAD();
/* 5238ce: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5238d1: mov ecx, dword ptr [ebx + 0x78] */
  ecx = R32((uint32_t)(ebx + 0x78u));
/* 5238d4: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 5238d7: mov edx, dword ptr [ecx + esi + 0xc] */
  edx = R32((uint32_t)(ecx + esi + 0xcu));
/* 5238db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5238de: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5238e0: jne 0x5238f4 */
  if (!zf) goto L_5238f4;
L_5238e2: /* 5238e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5238e3: call 0x4e2356 */
  esp -= 4; W32(esp, 0x5238e8u); SPILL(); f_4e2356(); if (g_unwind) return; RELOAD();
/* 5238e8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5238eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5238ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5238f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5238f1: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x5238f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5238f4: /* 5238f4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5238f5: jmp 0x5238c0 */
  goto L_5238c0;
L_523926: /* 523926: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_523929: /* 523929: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52392a: jmp 0x523894 */
  goto L_523894;
L_52392f: /* 52392f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_523932: /* 523932: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523937: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52393e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52393f: mov esp, ebp */
  esp = ebp;
/* 523941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523942: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52382a(void) {
  LOAD_REGS();
L_52382a: /* 52382a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_523830: /* 523830: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523833: jge 0x52384b */
  if ((sf == of)) goto L_52384b;
L_523835: /* 523835: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 523838: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 52383b: mov edx, dword ptr [esi + edx*8 + 0x10] */
  edx = R32((uint32_t)(esi + edx*8 + 0x10u));
/* 52383f: cmp edx, dword ptr [ebx + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523842: je 0x523932 */
  if (zf) goto L_523932;
L_523848: /* 523848: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523849: jmp 0x523830 */
  goto L_523830;
L_52384b: /* 52384b: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 52384e: mov edi, dword ptr [ecx + 0x2c] */
  edi = R32((uint32_t)(ecx + 0x2cu));
/* 523851: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 523854: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 523857: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 52385a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 52385d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52385f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 523862: jle 0x523880 */
  if ((zf || sf != of)) goto L_523880;
L_523864: /* 523864: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 523867: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 523868: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52386b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52386d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 523870: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 523874: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 523877: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 523879: mov ecx, esi */
  ecx = esi;
/* 52387b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523880u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_523880: /* 523880: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 523882: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 523885: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 523888: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52388a: je 0x523892 */
  if (zf) goto L_523892;
L_52388c: /* 52388c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52388d: call 0x4e2b12 */
  esp -= 4; W32(esp, 0x523892u); SPILL(); f_4e2b12(); if (g_unwind) return; RELOAD();
L_523892: /* 523892: xor ecx, ecx */
  ecx = 0;
L_523894: /* 523894: cmp ecx, dword ptr [ebx + 0x7c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523897: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 52389a: jge 0x52392f */
  if ((sf == of)) goto L_52392f;
L_5238a0: /* 5238a0: mov edx, dword ptr [ebx + 0x78] */
  edx = R32((uint32_t)(ebx + 0x78u));
/* 5238a3: mov esi, ecx */
  esi = ecx;
/* 5238a5: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 5238a8: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 5238ab: cmp dword ptr [eax + 4], 0x2a2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x2a2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5238b2: jne 0x523929 */
  if (!zf) goto L_523929;
L_5238b4: /* 5238b4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 5238b7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5238b9: jne 0x523929 */
  if (!zf) goto L_523929;
L_5238bb: /* 5238bb: xor edi, edi */
  edi = 0;
/* 5238bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5238c0: /* 5238c0: cmp edi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5238c6: jge 0x523926 */
  if ((sf == of)) goto L_523926;
L_5238c8: /* 5238c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5238c9: call 0x4e2356 */
  esp -= 4; W32(esp, 0x5238ceu); SPILL(); f_4e2356(); if (g_unwind) return; RELOAD();
/* 5238ce: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5238d1: mov ecx, dword ptr [ebx + 0x78] */
  ecx = R32((uint32_t)(ebx + 0x78u));
/* 5238d4: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 5238d7: mov edx, dword ptr [ecx + esi + 0xc] */
  edx = R32((uint32_t)(ecx + esi + 0xcu));
/* 5238db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5238de: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5238e0: jne 0x5238f4 */
  if (!zf) goto L_5238f4;
L_5238e2: /* 5238e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5238e3: call 0x4e2356 */
  esp -= 4; W32(esp, 0x5238e8u); SPILL(); f_4e2356(); if (g_unwind) return; RELOAD();
/* 5238e8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5238eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5238ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5238f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5238f1: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x5238f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5238f4: /* 5238f4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5238f5: jmp 0x5238c0 */
  goto L_5238c0;
L_523926: /* 523926: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_523929: /* 523929: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52392a: jmp 0x523894 */
  goto L_523894;
L_52392f: /* 52392f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_523932: /* 523932: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523937: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52393e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52393f: mov esp, ebp */
  esp = ebp;
/* 523941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523942: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5238f7(void) {
  LOAD_REGS();
L_5238f7: /* 5238f7: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 5238fa: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5238ff: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 523902: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523903: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 523906: call 0x554df6 */
  esp -= 4; W32(esp, 0x52390bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52390b(); return;
}

void f_52390b(void) {
  LOAD_REGS();
  goto L_52390b;
L_523894: /* 523894: cmp ecx, dword ptr [ebx + 0x7c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523897: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 52389a: jge 0x52392f */
  if ((sf == of)) goto L_52392f;
L_5238a0: /* 5238a0: mov edx, dword ptr [ebx + 0x78] */
  edx = R32((uint32_t)(ebx + 0x78u));
/* 5238a3: mov esi, ecx */
  esi = ecx;
/* 5238a5: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 5238a8: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 5238ab: cmp dword ptr [eax + 4], 0x2a2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x2a2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5238b2: jne 0x523929 */
  if (!zf) goto L_523929;
L_5238b4: /* 5238b4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 5238b7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5238b9: jne 0x523929 */
  if (!zf) goto L_523929;
L_5238bb: /* 5238bb: xor edi, edi */
  edi = 0;
/* 5238bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5238c0: /* 5238c0: cmp edi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5238c6: jge 0x523926 */
  if ((sf == of)) goto L_523926;
L_5238c8: /* 5238c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5238c9: call 0x4e2356 */
  esp -= 4; W32(esp, 0x5238ceu); SPILL(); f_4e2356(); if (g_unwind) return; RELOAD();
/* 5238ce: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5238d1: mov ecx, dword ptr [ebx + 0x78] */
  ecx = R32((uint32_t)(ebx + 0x78u));
/* 5238d4: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 5238d7: mov edx, dword ptr [ecx + esi + 0xc] */
  edx = R32((uint32_t)(ecx + esi + 0xcu));
/* 5238db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5238de: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5238e0: jne 0x5238f4 */
  if (!zf) goto L_5238f4;
L_5238e2: /* 5238e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5238e3: call 0x4e2356 */
  esp -= 4; W32(esp, 0x5238e8u); SPILL(); f_4e2356(); if (g_unwind) return; RELOAD();
/* 5238e8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5238eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5238ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5238f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5238f1: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x5238f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5238f4: /* 5238f4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5238f5: jmp 0x5238c0 */
  goto L_5238c0;
L_52390b: /* 52390b: push 0x56c380 */
  { uint32_t v = 0x56c380u; esp -= 4; W32(esp, v); }
/* 523910: push 0x5a6bb0 */
  { uint32_t v = 0x5a6bb0u; esp -= 4; W32(esp, v); }
/* 523915: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52391au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52391a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52391d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52391f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 523921: call 0x554df6 */
  esp -= 4; W32(esp, 0x523926u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_523926: /* 523926: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_523929: /* 523929: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52392a: jmp 0x523894 */
  goto L_523894;
L_52392f: /* 52392f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 523932: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523937: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52393e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52393f: mov esp, ebp */
  esp = ebp;
/* 523941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523942: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5239b0(void) {
  LOAD_REGS();
L_5239b0: /* 5239b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5239b1: mov ebp, esp */
  ebp = esp;
/* 5239b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5239b5: push 0x557b20 */
  { uint32_t v = 0x557b20u; esp -= 4; W32(esp, v); }
/* 5239ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5239c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5239c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5239c8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5239cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5239cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5239cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5239ce: xor ebx, ebx */
  ebx = 0;
/* 5239d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5239d3: mov esi, ecx */
  esi = ecx;
/* 5239d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 5239d8: xor edi, edi */
  edi = 0;
/* 5239da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5239e0: /* 5239e0: cmp edi, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5239e3: jge 0x523a0b */
  if ((sf == of)) goto L_523a0b;
L_5239e5: /* 5239e5: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 5239e8: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5239eb: cmp dword ptr [ecx + eax*8 + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*8 + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5239ef: jne 0x523a08 */
  if (!zf) goto L_523a08;
L_5239f1: /* 5239f1: push 0xee */
  { uint32_t v = 0xeeu; esp -= 4; W32(esp, v); }
/* 5239f6: push 0x5a6bb8 */
  { uint32_t v = 0x5a6bb8u; esp -= 4; W32(esp, v); }
/* 5239fb: push 0x5a6bc8 */
  { uint32_t v = 0x5a6bc8u; esp -= 4; W32(esp, v); }
/* 523a00: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x523a05u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 523a05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_523a08: /* 523a08: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 523a09: jmp 0x5239e0 */
  goto L_5239e0;
L_523a0b: /* 523a0b: mov eax, dword ptr [0x69a75c] */
  eax = R32((uint32_t)(0x69a75cu));
/* 523a10: lea edi, [esi + 0x5c] */
  edi = (uint32_t)(esi + 0x5cu);
/* 523a13: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 523a15: mov ecx, edi */
  ecx = edi;
/* 523a17: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 523a1a: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 523a1d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523a22u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 523a22: mov edx, dword ptr [0x69a75c] */
  edx = R32((uint32_t)(0x69a75cu));
/* 523a28: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 523a2b: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 523a2e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 523a30: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523a32: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 523a35: jle 0x523a53 */
  if ((zf || sf != of)) goto L_523a53;
L_523a37: /* 523a37: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 523a3a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 523a3b: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 523a3e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 523a40: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 523a43: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 523a47: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 523a49: mov ecx, edi */
  ecx = edi;
/* 523a4b: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 523a4e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523a53u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_523a53: /* 523a53: xor eax, eax */
  eax = 0;
L_523a55: /* 523a55: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523a58: jge 0x523a66 */
  if ((sf == of)) goto L_523a66;
L_523a5a: /* 523a5a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 523a5c: mov dword ptr [ecx + eax*4], 0xffffffff */
  W32((uint32_t)(ecx + eax*4), 0xffffffffu);
/* 523a63: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523a64: jmp 0x523a55 */
  goto L_523a55;
L_523a66: /* 523a66: lea edi, [esi + 0x34] */
  edi = (uint32_t)(esi + 0x34u);
/* 523a69: xor eax, eax */
  eax = 0;
/* 523a6b: jmp 0x523a70 */
  goto L_523a70;
L_523a70: /* 523a70: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523a73: jge 0x523a78 */
  if ((sf == of)) goto L_523a78;
L_523a75: /* 523a75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523a76: jmp 0x523a70 */
  goto L_523a70;
L_523a78: /* 523a78: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 523a7a: mov ecx, edi */
  ecx = edi;
/* 523a7c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 523a7f: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 523a82: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523a87u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 523a87: mov ecx, edi */
  ecx = edi;
/* 523a89: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 523a90: call 0x4e2455 */
  esp -= 4; W32(esp, 0x523a95u); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 523a95: mov dword ptr [esi + 0x68], ebx */
  W32((uint32_t)(esi + 0x68u), ebx);
/* 523a98: mov dword ptr [esi + 0x6c], ebx */
  W32((uint32_t)(esi + 0x6cu), ebx);
/* 523a9b: xor eax, eax */
  eax = 0;
L_523a9d: /* 523a9d: cmp eax, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523aa0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 523aa3: jge 0x523ba2 */
  if ((sf == of)) goto L_523ba2;
L_523aa9: /* 523aa9: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 523aac: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 523aaf: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 523ab2: cmp dword ptr [eax + edx*8 + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*8 + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523ab6: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 523ab9: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 523abc: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 523abf: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 523ac2: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 523ac5: mov edi, dword ptr [ecx + 0x88] */
  edi = R32((uint32_t)(ecx + 0x88u));
/* 523acb: mov dword ptr [eax + 0x30], edi */
  W32((uint32_t)(eax + 0x30u), edi);
/* 523ace: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 523ad1: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 523ad4: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 523ad7: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 523ada: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 523add: jne 0x523ae2 */
  if (!zf) goto L_523ae2;
L_523adf: /* 523adf: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
L_523ae2: /* 523ae2: mov ebx, dword ptr [eax + 0x40] */
  ebx = R32((uint32_t)(eax + 0x40u));
/* 523ae5: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523ae7: jge 0x523b0c */
  if ((sf == of)) goto L_523b0c;
L_523ae9: /* 523ae9: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 523aec: mov edx, dword ptr [edx + ebx*8 - 8] */
  edx = R32((uint32_t)(edx + ebx*8 + 0xfffffff8u));
/* 523af0: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523af2: jle 0x523af6 */
  if ((zf || sf != of)) goto L_523af6;
L_523af4: /* 523af4: mov edi, edx */
  edi = edx;
L_523af6: /* 523af6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 523af9: mov dword ptr [eax + 0x30], edi */
  W32((uint32_t)(eax + 0x30u), edi);
/* 523afc: mov ecx, dword ptr [ecx + 0x60] */
  ecx = R32((uint32_t)(ecx + 0x60u));
/* 523aff: mov ecx, dword ptr [ecx + ebx*8 - 4] */
  ecx = R32((uint32_t)(ecx + ebx*8 + 0xfffffffcu));
/* 523b03: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523b05: jg 0x523b09 */
  if ((!zf && sf == of)) goto L_523b09;
L_523b07: /* 523b07: mov ecx, edx */
  ecx = edx;
L_523b09: /* 523b09: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
L_523b0c: /* 523b0c: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 523b0f: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 523b12: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 523b14: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 523b17: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 523b1a: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 523b1d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 523b1f: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 523b22: xor ebx, ebx */
  ebx = 0;
L_523b24: /* 523b24: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 523b27: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 523b2a: mov edi, dword ptr [eax + 0x38] */
  edi = R32((uint32_t)(eax + 0x38u));
/* 523b2d: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523b2f: jle 0x523b33 */
  if ((zf || sf != of)) goto L_523b33;
L_523b31: /* 523b31: mov edx, edi */
  edx = edi;
L_523b33: /* 523b33: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523b35: jge 0x523b52 */
  if ((sf == of)) goto L_523b52;
L_523b37: /* 523b37: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 523b3a: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 523b3d: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 523b40: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 523b43: cmp dword ptr [ecx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523b46: jne 0x523b4f */
  if (!zf) goto L_523b4f;
L_523b48: /* 523b48: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 523b4b: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 523b4d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_523b4f: /* 523b4f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 523b50: jmp 0x523b24 */
  goto L_523b24;
L_523b52: /* 523b52: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 523b55: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 523b58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523b59: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 523b5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 523b5d: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 523b60: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 523b63: call 0x4e1d9d */
  esp -= 4; W32(esp, 0x523b68u); SPILL(); f_4e1d9d(); if (g_unwind) return; RELOAD();
/* 523b68: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 523b6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523b6c: xor ebx, ebx */
  ebx = 0;
/* 523b6e: jmp 0x523a9d */
  goto L_523a9d;
L_523ba2: /* 523ba2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523ba5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523ba6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523ba7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523bae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523baf: mov esp, ebp */
  esp = ebp;
/* 523bb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523bb2: ret  */
  esp += 4; SPILL(); return;
}

void f_523a6d(void) {
  LOAD_REGS();
L_523a6d: /* 523a6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_523a70: /* 523a70: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523a73: jge 0x523a78 */
  if ((sf == of)) goto L_523a78;
L_523a75: /* 523a75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523a76: jmp 0x523a70 */
  goto L_523a70;
L_523a78: /* 523a78: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 523a7a: mov ecx, edi */
  ecx = edi;
/* 523a7c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 523a7f: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 523a82: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523a87u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 523a87: mov ecx, edi */
  ecx = edi;
/* 523a89: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 523a90: call 0x4e2455 */
  esp -= 4; W32(esp, 0x523a95u); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 523a95: mov dword ptr [esi + 0x68], ebx */
  W32((uint32_t)(esi + 0x68u), ebx);
/* 523a98: mov dword ptr [esi + 0x6c], ebx */
  W32((uint32_t)(esi + 0x6cu), ebx);
/* 523a9b: xor eax, eax */
  eax = 0;
L_523a9d: /* 523a9d: cmp eax, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523aa0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 523aa3: jge 0x523ba2 */
  if ((sf == of)) goto L_523ba2;
L_523aa9: /* 523aa9: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 523aac: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 523aaf: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 523ab2: cmp dword ptr [eax + edx*8 + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*8 + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523ab6: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 523ab9: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 523abc: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 523abf: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 523ac2: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 523ac5: mov edi, dword ptr [ecx + 0x88] */
  edi = R32((uint32_t)(ecx + 0x88u));
/* 523acb: mov dword ptr [eax + 0x30], edi */
  W32((uint32_t)(eax + 0x30u), edi);
/* 523ace: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 523ad1: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 523ad4: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 523ad7: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 523ada: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 523add: jne 0x523ae2 */
  if (!zf) goto L_523ae2;
L_523adf: /* 523adf: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
L_523ae2: /* 523ae2: mov ebx, dword ptr [eax + 0x40] */
  ebx = R32((uint32_t)(eax + 0x40u));
/* 523ae5: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523ae7: jge 0x523b0c */
  if ((sf == of)) goto L_523b0c;
L_523ae9: /* 523ae9: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 523aec: mov edx, dword ptr [edx + ebx*8 - 8] */
  edx = R32((uint32_t)(edx + ebx*8 + 0xfffffff8u));
/* 523af0: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523af2: jle 0x523af6 */
  if ((zf || sf != of)) goto L_523af6;
L_523af4: /* 523af4: mov edi, edx */
  edi = edx;
L_523af6: /* 523af6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 523af9: mov dword ptr [eax + 0x30], edi */
  W32((uint32_t)(eax + 0x30u), edi);
/* 523afc: mov ecx, dword ptr [ecx + 0x60] */
  ecx = R32((uint32_t)(ecx + 0x60u));
/* 523aff: mov ecx, dword ptr [ecx + ebx*8 - 4] */
  ecx = R32((uint32_t)(ecx + ebx*8 + 0xfffffffcu));
/* 523b03: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523b05: jg 0x523b09 */
  if ((!zf && sf == of)) goto L_523b09;
L_523b07: /* 523b07: mov ecx, edx */
  ecx = edx;
L_523b09: /* 523b09: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
L_523b0c: /* 523b0c: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 523b0f: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 523b12: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 523b14: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 523b17: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 523b1a: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 523b1d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 523b1f: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 523b22: xor ebx, ebx */
  ebx = 0;
L_523b24: /* 523b24: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 523b27: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 523b2a: mov edi, dword ptr [eax + 0x38] */
  edi = R32((uint32_t)(eax + 0x38u));
/* 523b2d: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523b2f: jle 0x523b33 */
  if ((zf || sf != of)) goto L_523b33;
L_523b31: /* 523b31: mov edx, edi */
  edx = edi;
L_523b33: /* 523b33: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523b35: jge 0x523b52 */
  if ((sf == of)) goto L_523b52;
L_523b37: /* 523b37: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 523b3a: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 523b3d: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 523b40: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 523b43: cmp dword ptr [ecx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523b46: jne 0x523b4f */
  if (!zf) goto L_523b4f;
L_523b48: /* 523b48: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 523b4b: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 523b4d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_523b4f: /* 523b4f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 523b50: jmp 0x523b24 */
  goto L_523b24;
L_523b52: /* 523b52: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 523b55: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 523b58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523b59: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 523b5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 523b5d: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 523b60: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 523b63: call 0x4e1d9d */
  esp -= 4; W32(esp, 0x523b68u); SPILL(); f_4e1d9d(); if (g_unwind) return; RELOAD();
/* 523b68: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 523b6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523b6c: xor ebx, ebx */
  ebx = 0;
/* 523b6e: jmp 0x523a9d */
  goto L_523a9d;
L_523ba2: /* 523ba2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523ba5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523ba6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523ba7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523bae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523baf: mov esp, ebp */
  esp = ebp;
/* 523bb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523bb2: ret  */
  esp += 4; SPILL(); return;
}

void f_523b73(void) {
  LOAD_REGS();
L_523b73: /* 523b73: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 523b76: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 523b7b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 523b7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523b7f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 523b82: call 0x554df6 */
  esp -= 4; W32(esp, 0x523b87u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_523b87(); return;
}

void f_523b87(void) {
  LOAD_REGS();
L_523b87: /* 523b87: push 0x56c3b8 */
  { uint32_t v = 0x56c3b8u; esp -= 4; W32(esp, v); }
/* 523b8c: push 0x5a6bd8 */
  { uint32_t v = 0x5a6bd8u; esp -= 4; W32(esp, v); }
/* 523b91: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x523b96u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 523b96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523b99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 523b9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 523b9d: call 0x554df6 */
  esp -= 4; W32(esp, 0x523ba2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 523ba2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 523ba5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523ba6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523ba7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523bae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 523baf: mov esp, ebp */
  esp = ebp;
/* 523bb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 523bb2: ret  */
  esp += 4; SPILL(); return;
}

void f_523c50(void) {
  LOAD_REGS();
L_523c50: /* 523c50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 523c52: push 0x557b38 */
  { uint32_t v = 0x557b38u; esp -= 4; W32(esp, v); }
/* 523c57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 523c5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523c5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 523c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523c66: xor eax, eax */
  eax = 0;
/* 523c68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523c69: mov esi, ecx */
  esi = ecx;
/* 523c6b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 523c6f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 523c71: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 523c74: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 523c77: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 523c7b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 523c7e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 523c85: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x523c8au); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
/* 523c8a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 523c8e: mov eax, esi */
  eax = esi;
/* 523c90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523c91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523c98: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523c9b: ret  */
  esp += 4; SPILL(); return;
}

void f_523cc0(void) {
  LOAD_REGS();
L_523cc0: /* 523cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523cc1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 523cc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523cc6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 523cca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523ccb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523ccc: call 0x4e2bda */
  esp -= 4; W32(esp, 0x523cd1u); SPILL(); f_4e2bda(); if (g_unwind) return; RELOAD();
/* 523cd1: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 523cd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523cd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 523cd9: je 0x523ce2 */
  if (zf) goto L_523ce2;
L_523cdb: /* 523cdb: mov ecx, edi */
  ecx = edi;
/* 523cdd: call 0x4e2455 */
  esp -= 4; W32(esp, 0x523ce2u); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
L_523ce2: /* 523ce2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523ce3: mov eax, esi */
  eax = esi;
/* 523ce5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523ce6: ret  */
  esp += 4; SPILL(); return;
}

void f_523d00(void) {
  LOAD_REGS();
L_523d00: /* 523d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523d01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 523d05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523d06: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 523d0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523d0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523d0c: call 0x4e1c6c */
  esp -= 4; W32(esp, 0x523d11u); SPILL(); f_4e1c6c(); if (g_unwind) return; RELOAD();
/* 523d11: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 523d14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523d17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 523d19: je 0x523d22 */
  if (zf) goto L_523d22;
L_523d1b: /* 523d1b: mov ecx, edi */
  ecx = edi;
/* 523d1d: call 0x4e3053 */
  esp -= 4; W32(esp, 0x523d22u); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
L_523d22: /* 523d22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 523d23: mov eax, esi */
  eax = esi;
/* 523d25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523d26: ret  */
  esp += 4; SPILL(); return;
}

void f_523d40(void) {
  LOAD_REGS();
L_523d40: /* 523d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 523d42: push 0x557b58 */
  { uint32_t v = 0x557b58u; esp -= 4; W32(esp, v); }
/* 523d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 523d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 523d55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523d56: xor eax, eax */
  eax = 0;
/* 523d58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523d59: mov esi, ecx */
  esi = ecx;
/* 523d5b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 523d5f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 523d61: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 523d64: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 523d67: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 523d6b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 523d6e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 523d75: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x523d7au); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
/* 523d7a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 523d7e: mov eax, esi */
  eax = esi;
/* 523d80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523d81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523d88: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523d8b: ret  */
  esp += 4; SPILL(); return;
}

void f_523db0(void) {
  LOAD_REGS();
L_523db0: /* 523db0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 523db2: push 0x557b8b */
  { uint32_t v = 0x557b8bu; esp -= 4; W32(esp, v); }
/* 523db7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 523dbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523dbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 523dc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523dc6: xor eax, eax */
  eax = 0;
/* 523dc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523dc9: mov esi, ecx */
  esi = ecx;
/* 523dcb: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 523dcf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 523dd1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 523dd4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 523dd7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 523ddb: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 523dde: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 523de2: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 523de5: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 523de8: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 523deb: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 523dee: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 523df2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 523df4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 523df7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 523dfa: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 523dff: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 523e02: mov dword ptr [ecx + 0x10], 8 */
  W32((uint32_t)(ecx + 0x10u), 0x8u);
/* 523e09: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x523e0eu); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
/* 523e0e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 523e12: mov eax, esi */
  eax = esi;
/* 523e14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 523e15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 523e1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 523e1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_523e50(void) {
  LOAD_REGS();
L_523e50: /* 523e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 523e51: mov ebp, esp */
  ebp = esp;
/* 523e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 523e55: push 0x557bab */
  { uint32_t v = 0x557babu; esp -= 4; W32(esp, v); }
/* 523e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 523e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 523e68: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 523e6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 523e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 523e6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523e6e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 523e71: mov ebx, ecx */
  ebx = ecx;
/* 523e73: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 523e76: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 523e79: lea ecx, [ebx + 0x48] */
  ecx = (uint32_t)(ebx + 0x48u);
/* 523e7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523e7d: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 523e80: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 523e87: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 523e8a: call 0x4e2239 */
  esp -= 4; W32(esp, 0x523e8fu); SPILL(); f_4e2239(); if (g_unwind) return; RELOAD();
/* 523e8f: mov esi, eax */
  esi = eax;
/* 523e91: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 523e93: jne 0x52413e */
  if (!zf) goto L_52413e;
L_523e99: /* 523e99: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 523e9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523e9c: mov ecx, ebx */
  ecx = ebx;
/* 523e9e: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x523ea1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 523ea1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523ea4: je 0x52413e */
  if (zf) goto L_52413e;
L_523eaa: /* 523eaa: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 523eb0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 523eb2: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 523eb7: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 523eb9: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x523ebbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 523ebb: mov ecx, eax */
  ecx = eax;
/* 523ebd: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 523ec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 523ec2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 523ec6: je 0x523ed0 */
  if (zf) goto L_523ed0;
L_523ec8: /* 523ec8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 523ec9: call 0x4e1bb3 */
  esp -= 4; W32(esp, 0x523eceu); SPILL(); f_4e1bb3(); if (g_unwind) return; RELOAD();
/* 523ece: jmp 0x523ed2 */
  goto L_523ed2;
L_523ed0: /* 523ed0: xor eax, eax */
  eax = 0;
L_523ed2: /* 523ed2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 523ed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 523ed6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 523ed9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 523eda: lea ecx, [ebx + 0x48] */
  ecx = (uint32_t)(ebx + 0x48u);
/* 523edd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 523ee1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 523ee4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 523ee7: call 0x4e3080 */
  esp -= 4; W32(esp, 0x523eecu); SPILL(); f_4e3080(); if (g_unwind) return; RELOAD();
/* 523eec: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 523eee: xor edx, edx */
  edx = 0;
/* 523ef0: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 523ef3: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 523ef6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 523ef9: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 523efc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523efe: je 0x523f2c */
  if (zf) goto L_523f2c;
L_523f00: /* 523f00: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 523f02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523f03: mov ecx, ebx */
  ecx = ebx;
/* 523f05: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x523f0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 523f0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523f0c: mov ecx, esi */
  ecx = esi;
/* 523f0e: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 523f11: call 0x4e3210 */
  esp -= 4; W32(esp, 0x523f16u); SPILL(); f_4e3210(); if (g_unwind) return; RELOAD();
/* 523f16: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 523f19: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 523f1c: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 523f1f: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 523f22: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 523f25: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 523f27: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 523f2a: xor edx, edx */
  edx = 0;
L_523f2c: /* 523f2c: mov ebx, dword ptr [edi + 0x4c8] */
  ebx = R32((uint32_t)(edi + 0x4c8u));
/* 523f32: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 523f35: xor eax, eax */
  eax = 0;
L_523f37: /* 523f37: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523f3a: jge 0x523f3f */
  if ((sf == of)) goto L_523f3f;
L_523f3c: /* 523f3c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523f3d: jmp 0x523f37 */
  goto L_523f37;
L_523f3f: /* 523f3f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 523f41: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 523f44: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 523f47: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523f4cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 523f4c: xor eax, eax */
  eax = 0;
/* 523f4e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_523f51: /* 523f51: cmp eax, dword ptr [edi + 0x4c8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4c8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523f57: jge 0x524018 */
  if ((sf == of)) goto L_524018;
L_523f5d: /* 523f5d: mov ecx, dword ptr [edi + 0x4c4] */
  ecx = R32((uint32_t)(edi + 0x4c4u));
/* 523f63: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 523f66: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 523f69: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 523f6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 523f6c: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x523f6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 523f6f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523f72: je 0x52400c */
  if (zf) goto L_52400c;
L_523f78: /* 523f78: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 523f7b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 523f7e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 523f80: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 523f82: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* 523f89: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 523f8c: je 0x523fba */
  if (zf) goto L_523fba;
L_523f8e: /* 523f8e: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 523f91: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 523f97: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 523f99: jns 0x523fba */
  if (!sf) goto L_523fba;
L_523f9b: /* 523f9b: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 523f9e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523fa0: je 0x523fb0 */
  if (zf) goto L_523fb0;
L_523fa2: /* 523fa2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 523fa5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 523fa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 523fa8: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x523fabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 523fab: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 523fae: jne 0x523fba */
  if (!zf) goto L_523fba;
L_523fb0: /* 523fb0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 523fb3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 523fb6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 523fb7: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_523fba: /* 523fba: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 523fbd: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 523fc0: lea edi, [esi + 0x1c] */
  edi = (uint32_t)(esi + 0x1cu);
/* 523fc3: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 523fc6: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 523fc8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 523fcb: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 523fce: jle 0x523fef */
  if ((zf || sf != of)) goto L_523fef;
L_523fd0: /* 523fd0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 523fd3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 523fd4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 523fd7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 523fd9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 523fdc: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 523fe0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 523fe2: mov ecx, edi */
  ecx = edi;
/* 523fe4: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 523fe7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x523fecu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 523fec: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_523fef: /* 523fef: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 523ff1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 523ff4: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 523ff7: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 523ffa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 523ffc: je 0x52400c */
  if (zf) goto L_52400c;
L_523ffe: /* 523ffe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 524001: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 524004: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 524006: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 524009: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_52400c: /* 52400c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 52400f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 524010: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 524013: jmp 0x523f51 */
  goto L_523f51;
L_524018: /* 524018: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 52401b: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 52401e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 524020: lea edi, [esi + 0x1c] */
  edi = (uint32_t)(esi + 0x1cu);
/* 524023: je 0x524031 */
  if (zf) goto L_524031;
L_524025: /* 524025: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 524027: mov ecx, edi */
  ecx = edi;
/* 524029: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 52402c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x524031u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_524031: /* 524031: xor ebx, ebx */
  ebx = 0;
L_524033: /* 524033: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 524036: jge 0x52405c */
  if ((sf == of)) goto L_52405c;
L_524038: /* 524038: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 52403a: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 52403d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 524040: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 524043: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 524046: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 524049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52404a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 52404d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52404e: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 524051: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 524054: call 0x4e42b9 */
  esp -= 4; W32(esp, 0x524059u); SPILL(); f_4e42b9(); if (g_unwind) return; RELOAD();
/* 524059: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 52405a: jmp 0x524033 */
  goto L_524033;
L_52405c: /* 52405c: xor eax, eax */
  eax = 0;
L_52405e: /* 52405e: cmp eax, dword ptr [esi + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 524061: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 524064: jge 0x52413e */
  if ((sf == of)) goto L_52413e;
L_52406a: /* 52406a: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 52406d: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 524070: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 524073: mov ebx, dword ptr [edi + edx] */
  ebx = R32((uint32_t)(edi + edx));
/* 524076: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 524078: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 52407b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 52407e: je 0x5240f1 */
  if (zf) goto L_5240f1;
L_524080: /* 524080: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 524083: test byte ptr [edx + 0x499], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x499u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52408a: je 0x5240f1 */
  if (zf) goto L_5240f1;
L_52408c: /* 52408c: cmp dword ptr [ecx + 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 524090: jne 0x5240a6 */
  if (!zf) goto L_5240a6;
L_524092: /* 524092: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 524095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524096: mov ecx, esi */
  ecx = esi;
/* 524098: call 0x4e3ffd */
  esp -= 4; W32(esp, 0x52409du); SPILL(); f_4e3ffd(); if (g_unwind) return; RELOAD();
/* 52409d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 5240a0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 5240a3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_5240a6: /* 5240a6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5240a8: mov ecx, ebx */
  ecx = ebx;
/* 5240aa: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x5240adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5240ad: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 5240b3: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5240b6: jne 0x5240ee */
  if (!zf) goto L_5240ee;
L_5240b8: /* 5240b8: mov ebx, dword ptr [esi + 0x1c] */
  ebx = R32((uint32_t)(esi + 0x1cu));
/* 5240bb: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5240be: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5240c0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5240c3: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5240c6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5240c8: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5240cb: jle 0x5240e9 */
  if ((zf || sf != of)) goto L_5240e9;
L_5240cd: /* 5240cd: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5240d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5240d1: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5240d4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5240d6: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5240d9: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 5240dd: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 5240e0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5240e2: mov ecx, esi */
  ecx = esi;
/* 5240e4: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5240e9u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5240e9: /* 5240e9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5240eb: mov dword ptr [edx + edi*4], ebx */
  W32((uint32_t)(edx + edi*4), ebx);
L_5240ee: /* 5240ee: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_5240f1: /* 5240f1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5240f2: jmp 0x52405e */
  goto L_52405e;
L_52413e: /* 52413e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524141: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524142: mov eax, esi */
  eax = esi;
/* 524144: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524145: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52414c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52414d: mov esp, ebp */
  esp = ebp;
/* 52414f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524150: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5240f7(void) {
  LOAD_REGS();
L_5240f7: /* 5240f7: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5240fa: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5240ff: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 524102: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 524103: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 524106: call 0x554df6 */
  esp -= 4; W32(esp, 0x52410bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52410b(); return;
}

void f_52410b(void) {
  LOAD_REGS();
L_52410b: /* 52410b: push 0x56c3ec */
  { uint32_t v = 0x56c3ecu; esp -= 4; W32(esp, v); }
/* 524110: push 0x5a6ba0 */
  { uint32_t v = 0x5a6ba0u; esp -= 4; W32(esp, v); }
/* 524115: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52411au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52411a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 52411d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524120: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524122: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x524127u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 524127: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524128: push 0x5a6ba8 */
  { uint32_t v = 0x5a6ba8u; esp -= 4; W32(esp, v); }
/* 52412d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x524132u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 524132: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524135: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524137: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524139: call 0x554df6 */
  esp -= 4; W32(esp, 0x52413eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 52413e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524141: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524142: mov eax, esi */
  eax = esi;
/* 524144: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524145: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52414c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52414d: mov esp, ebp */
  esp = ebp;
/* 52414f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524150: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524230(void) {
  LOAD_REGS();
L_524230: /* 524230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 524231: mov ebp, esp */
  ebp = esp;
/* 524233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 524235: push 0x557bc0 */
  { uint32_t v = 0x557bc0u; esp -= 4; W32(esp, v); }
/* 52423a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 524240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 524248: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52424b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52424c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52424d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 524250: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 524253: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524254: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 524257: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 524259: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 52425c: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52425f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 524262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524263: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 524266: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 524269: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 52426c: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 52426f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 524270: mov ecx, edi */
  ecx = edi;
/* 524272: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 524279: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x52427cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52427c: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 52427f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 524281: je 0x524316 */
  if (zf) goto L_524316;
L_524287: /* 524287: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 52428a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52428b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52428c: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x524291u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 524291: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 524294: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524297: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524298: mov ecx, esi */
  ecx = esi;
/* 52429a: call 0x4e3931 */
  esp -= 4; W32(esp, 0x52429fu); SPILL(); f_4e3931(); if (g_unwind) return; RELOAD();
/* 52429f: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 5242a6: jmp 0x5242b0 */
  goto L_5242b0;
L_5242b0: /* 5242b0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5242b3: cmp ecx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5242b6: jge 0x524341 */
  if ((sf == of)) goto L_524341;
L_5242bc: /* 5242bc: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 5242be: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5242c1: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5242c4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5242c6: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 5242c8: jle 0x5242e6 */
  if ((zf || sf != of)) goto L_5242e6;
L_5242ca: /* 5242ca: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5242cd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5242ce: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5242d1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5242d3: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5242d6: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5242da: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 5242dc: mov ecx, esi */
  ecx = esi;
/* 5242de: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 5242e1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5242e6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5242e6: /* 5242e6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5242e8: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5242eb: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 5242ee: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5242f0: je 0x5242fb */
  if (zf) goto L_5242fb;
L_5242f2: /* 5242f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5242f4: call 0x4e2b12 */
  esp -= 4; W32(esp, 0x5242f9u); SPILL(); f_4e2b12(); if (g_unwind) return; RELOAD();
/* 5242f9: jmp 0x5242fd */
  goto L_5242fd;
L_5242fb: /* 5242fb: xor eax, eax */
  eax = 0;
L_5242fd: /* 5242fd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 524300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524301: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524302: call 0x4e2e91 */
  esp -= 4; W32(esp, 0x524307u); SPILL(); f_4e2e91(); if (g_unwind) return; RELOAD();
/* 524307: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 52430a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 52430d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524310: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 524311: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 524314: jmp 0x5242b0 */
  goto L_5242b0;
L_524316: /* 524316: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 524317: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524318: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x52431du); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 52431d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524320: xor edi, edi */
  edi = 0;
L_524322: /* 524322: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 524324: jge 0x52433e */
  if ((sf == of)) goto L_52433e;
L_524326: /* 524326: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 524328: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 52432b: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 52432e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 524331: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524333: call 0x4e2e91 */
  esp -= 4; W32(esp, 0x524338u); SPILL(); f_4e2e91(); if (g_unwind) return; RELOAD();
/* 524338: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52433b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52433c: jmp 0x524322 */
  goto L_524322;
L_52433e: /* 52433e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_524341: /* 524341: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524344: mov eax, edi */
  eax = edi;
/* 524346: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524347: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524348: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52434f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524350: mov esp, ebp */
  esp = ebp;
/* 524352: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524353: ret  */
  esp += 4; SPILL(); return;
}

void f_5242a8(void) {
  LOAD_REGS();
L_5242a8: /* 5242a8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 5242af: nop  */
L_5242b0: /* 5242b0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5242b3: cmp ecx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5242b6: jge 0x524341 */
  if ((sf == of)) goto L_524341;
L_5242bc: /* 5242bc: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 5242be: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5242c1: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5242c4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5242c6: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 5242c8: jle 0x5242e6 */
  if ((zf || sf != of)) goto L_5242e6;
L_5242ca: /* 5242ca: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5242cd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5242ce: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5242d1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5242d3: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5242d6: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5242da: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 5242dc: mov ecx, esi */
  ecx = esi;
/* 5242de: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 5242e1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5242e6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5242e6: /* 5242e6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5242e8: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 5242eb: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 5242ee: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5242f0: je 0x5242fb */
  if (zf) goto L_5242fb;
L_5242f2: /* 5242f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5242f4: call 0x4e2b12 */
  esp -= 4; W32(esp, 0x5242f9u); SPILL(); f_4e2b12(); if (g_unwind) return; RELOAD();
/* 5242f9: jmp 0x5242fd */
  goto L_5242fd;
L_5242fb: /* 5242fb: xor eax, eax */
  eax = 0;
L_5242fd: /* 5242fd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 524300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524301: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524302: call 0x4e2e91 */
  esp -= 4; W32(esp, 0x524307u); SPILL(); f_4e2e91(); if (g_unwind) return; RELOAD();
/* 524307: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 52430a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 52430d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524310: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 524311: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 524314: jmp 0x5242b0 */
  goto L_5242b0;
L_524341: /* 524341: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524344: mov eax, edi */
  eax = edi;
/* 524346: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524347: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524348: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52434f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524350: mov esp, ebp */
  esp = ebp;
/* 524352: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524353: ret  */
  esp += 4; SPILL(); return;
}

void f_524354(void) {
  LOAD_REGS();
L_524354: /* 524354: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 524357: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52435c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 52435f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524360: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 524363: call 0x554df6 */
  esp -= 4; W32(esp, 0x524368u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_524368(); return;
}

void f_524368(void) {
  LOAD_REGS();
L_524368: /* 524368: push 0x56c434 */
  { uint32_t v = 0x56c434u; esp -= 4; W32(esp, v); }
/* 52436d: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 524372: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x524377u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 524377: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52437a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52437c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52437e: call 0x554df6 */
  esp -= 4; W32(esp, 0x524383u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_524383: guest_badaddr(0x524383); return;
}

void f_5243f0(void) {
  LOAD_REGS();
L_5243f0: /* 5243f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5243f2: push 0x557beb */
  { uint32_t v = 0x557bebu; esp -= 4; W32(esp, v); }
/* 5243f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5243fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5243fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 524405: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 524408: xor eax, eax */
  eax = 0;
/* 52440a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52440b: mov esi, ecx */
  esi = ecx;
/* 52440d: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 524411: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 524413: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 524416: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 524419: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 52441d: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 524420: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 524423: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 524426: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 524429: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 52442d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 52442f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 524432: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 524435: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 52443a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 52443d: mov dword ptr [ecx + 0x10], 8 */
  W32((uint32_t)(ecx + 0x10u), 0x8u);
/* 524444: call 0x4e2c07 */
  esp -= 4; W32(esp, 0x524449u); SPILL(); f_4e2c07(); if (g_unwind) return; RELOAD();
/* 524449: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 52444d: mov eax, esi */
  eax = esi;
/* 52444f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524450: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524457: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52445a: ret  */
  esp += 4; SPILL(); return;
}

void f_524480(void) {
  LOAD_REGS();
L_524480: /* 524480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 524481: mov ebp, esp */
  ebp = esp;
/* 524483: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 524485: push 0x557c00 */
  { uint32_t v = 0x557c00u; esp -= 4; W32(esp, v); }
/* 52448a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 524490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524491: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 524498: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52449b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52449c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52449d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52449e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5244a1: mov esi, ecx */
  esi = ecx;
/* 5244a3: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 5244a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5244a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5244aa: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 5244ad: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5244b4: call 0x4e3fc6 */
  esp -= 4; W32(esp, 0x5244b9u); SPILL(); f_4e3fc6(); if (g_unwind) return; RELOAD();
/* 5244b9: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 5244bc: lea ebx, [esi + 0x34] */
  ebx = (uint32_t)(esi + 0x34u);
/* 5244bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5244c0: mov ecx, ebx */
  ecx = ebx;
/* 5244c2: call 0x4e28d8 */
  esp -= 4; W32(esp, 0x5244c7u); SPILL(); f_4e28d8(); if (g_unwind) return; RELOAD();
/* 5244c7: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 5244ca: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 5244cd: mov ecx, ebx */
  ecx = ebx;
/* 5244cf: call 0x4e2455 */
  esp -= 4; W32(esp, 0x5244d4u); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
/* 5244d4: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 5244d7: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 5244da: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 5244dd: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 5244e0: lea eax, [edi + 0x48] */
  eax = (uint32_t)(edi + 0x48u);
/* 5244e3: lea ebx, [esi + 0x48] */
  ebx = (uint32_t)(esi + 0x48u);
/* 5244e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5244e7: mov ecx, ebx */
  ecx = ebx;
/* 5244e9: call 0x4e394a */
  esp -= 4; W32(esp, 0x5244eeu); SPILL(); f_4e394a(); if (g_unwind) return; RELOAD();
/* 5244ee: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 5244f1: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 5244f4: mov ecx, ebx */
  ecx = ebx;
/* 5244f6: call 0x4e3053 */
  esp -= 4; W32(esp, 0x5244fbu); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
/* 5244fb: add edi, 0x5c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 5244fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5244ff: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 524502: call 0x4e2158 */
  esp -= 4; W32(esp, 0x524507u); SPILL(); f_4e2158(); if (g_unwind) return; RELOAD();
/* 524507: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52450a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52450b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52450c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524513: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524514: mov esp, ebp */
  esp = ebp;
/* 524516: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524517: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52451a(void) {
  LOAD_REGS();
L_52451a: /* 52451a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52451d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524522: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 524525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524526: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 524529: call 0x554df6 */
  esp -= 4; W32(esp, 0x52452eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52452e(); return;
}

void f_52452e(void) {
  LOAD_REGS();
L_52452e: /* 52452e: push 0x56c44c */
  { uint32_t v = 0x56c44cu; esp -= 4; W32(esp, v); }
/* 524533: push 0x5a6ad0 */
  { uint32_t v = 0x5a6ad0u; esp -= 4; W32(esp, v); }
/* 524538: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52453du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52453d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524540: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524542: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524544: call 0x554df6 */
  esp -= 4; W32(esp, 0x524549u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_524549: guest_badaddr(0x524549); return;
}

void f_524590(void) {
  LOAD_REGS();
L_524590: /* 524590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 524591: mov ebp, esp */
  ebp = esp;
/* 524593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 524595: push 0x557c10 */
  { uint32_t v = 0x557c10u; esp -= 4; W32(esp, v); }
/* 52459a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5245a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5245a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5245a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5245ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5245ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5245ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5245b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5245b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5245b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5245b5: mov edi, ecx */
  edi = ecx;
/* 5245b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5245be: call 0x4e1519 */
  esp -= 4; W32(esp, 0x5245c3u); SPILL(); f_4e1519(); if (g_unwind) return; RELOAD();
/* 5245c3: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 5245c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5245c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5245c8: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 5245cb: call 0x4e2c02 */
  esp -= 4; W32(esp, 0x5245d0u); SPILL(); f_4e2c02(); if (g_unwind) return; RELOAD();
/* 5245d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5245d3: mov esi, eax */
  esi = eax;
/* 5245d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5245d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5245d7: call 0x4e2bda */
  esp -= 4; W32(esp, 0x5245dcu); SPILL(); f_4e2bda(); if (g_unwind) return; RELOAD();
/* 5245dc: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 5245df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5245e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5245e4: je 0x5245ed */
  if (zf) goto L_5245ed;
L_5245e6: /* 5245e6: mov ecx, ebx */
  ecx = ebx;
/* 5245e8: call 0x4e2455 */
  esp -= 4; W32(esp, 0x5245edu); SPILL(); f_4e2455(); if (g_unwind) return; RELOAD();
L_5245ed: /* 5245ed: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 5245f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5245f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5245f2: call 0x4e1c6c */
  esp -= 4; W32(esp, 0x5245f7u); SPILL(); f_4e1c6c(); if (g_unwind) return; RELOAD();
/* 5245f7: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 5245fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5245fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5245ff: je 0x524608 */
  if (zf) goto L_524608;
L_524601: /* 524601: mov ecx, edi */
  ecx = edi;
/* 524603: call 0x4e3053 */
  esp -= 4; W32(esp, 0x524608u); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
L_524608: /* 524608: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52460b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52460c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52460d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524614: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524615: mov esp, ebp */
  esp = ebp;
/* 524617: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524618: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52461b(void) {
  LOAD_REGS();
L_52461b: /* 52461b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52461e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524623: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 524626: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524627: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52462a: call 0x554df6 */
  esp -= 4; W32(esp, 0x52462fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52462f(); return;
}

void f_52462f(void) {
  LOAD_REGS();
L_52462f: /* 52462f: push 0x56c478 */
  { uint32_t v = 0x56c478u; esp -= 4; W32(esp, v); }
/* 524634: push 0x5a6bf8 */
  { uint32_t v = 0x5a6bf8u; esp -= 4; W32(esp, v); }
/* 524639: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52463eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52463e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524641: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524643: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524645: call 0x554df6 */
  esp -= 4; W32(esp, 0x52464au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52464a: guest_badaddr(0x52464a); return;
}

void f_524680(void) {
  LOAD_REGS();
L_524680: /* 524680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524681: mov esi, ecx */
  esi = ecx;
/* 524683: call 0x4e27a7 */
  esp -= 4; W32(esp, 0x524688u); SPILL(); f_4e27a7(); if (g_unwind) return; RELOAD();
/* 524688: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52468d: je 0x52469b */
  if (zf) goto L_52469b;
L_52468f: /* 52468f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 524695: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524697: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524698: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x52469bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52469b: /* 52469b: mov eax, esi */
  eax = esi;
/* 52469d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52469e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5246c0(void) {
  LOAD_REGS();
L_5246c0: /* 5246c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5246c1: mov ebp, esp */
  ebp = esp;
/* 5246c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5246c5: push 0x557c3b */
  { uint32_t v = 0x557c3bu; esp -= 4; W32(esp, v); }
/* 5246ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5246d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5246d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5246d8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5246db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5246dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5246dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5246de: xor edi, edi */
  edi = 0;
/* 5246e0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5246e3: mov esi, ecx */
  esi = ecx;
/* 5246e5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 5246e8: call 0x4e2a9a */
  esp -= 4; W32(esp, 0x5246edu); SPILL(); f_4e2a9a(); if (g_unwind) return; RELOAD();
/* 5246ed: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 5246f0: mov ecx, eax */
  ecx = eax;
/* 5246f2: mov ebx, eax */
  ebx = eax;
/* 5246f4: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 5246f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5246fa: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 5246fd: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 524700: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_524704: /* 524704: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 524707: jge 0x524751 */
  if ((sf == of)) goto L_524751;
L_524709: /* 524709: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 52470b: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 52470e: mov esi, dword ptr [edx + eax*4 + 8] */
  esi = R32((uint32_t)(edx + eax*4 + 0x8u));
/* 524712: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 524714: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 524717: je 0x52474b */
  if (zf) goto L_52474b;
L_524719: /* 524719: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 52471c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 524720: call 0x4e2801 */
  esp -= 4; W32(esp, 0x524725u); SPILL(); f_4e2801(); if (g_unwind) return; RELOAD();
/* 524725: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 524728: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 52472c: call 0x4e318e */
  esp -= 4; W32(esp, 0x524731u); SPILL(); f_4e318e(); if (g_unwind) return; RELOAD();
/* 524731: mov ecx, esi */
  ecx = esi;
/* 524733: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 524737: call 0x4e12c1 */
  esp -= 4; W32(esp, 0x52473cu); SPILL(); f_4e12c1(); if (g_unwind) return; RELOAD();
/* 52473c: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 524742: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524744: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524745: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x524748u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 524748: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
L_52474b: /* 52474b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52474c: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 52474f: jmp 0x524704 */
  goto L_524704;
L_524751: /* 524751: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 524754: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 524756: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52475a: je 0x52477d */
  if (zf) goto L_52477d;
L_52475c: /* 52475c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_524760: /* 524760: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 524763: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 524766: lea edx, [edx + edx + 8] */
  edx = (uint32_t)(edx + edx + 0x8u);
/* 52476a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52476c: jle 0x524778 */
  if ((zf || sf != of)) goto L_524778;
L_52476e: /* 52476e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 52476f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 524771: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 524773: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 524776: jmp 0x524760 */
  goto L_524760;
L_524778: /* 524778: call 0x4e3053 */
  esp -= 4; W32(esp, 0x52477du); SPILL(); f_4e3053(); if (g_unwind) return; RELOAD();
L_52477d: /* 52477d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524780: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524781: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524782: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524789: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52478a: mov esp, ebp */
  esp = ebp;
/* 52478c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52478d: ret  */
  esp += 4; SPILL(); return;
}

void f_52478e(void) {
  LOAD_REGS();
L_52478e: /* 52478e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 524791: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524796: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 524799: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52479a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52479d: call 0x554df6 */
  esp -= 4; W32(esp, 0x5247a2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5247a2(); return;
}

void f_5247a2(void) {
  LOAD_REGS();
L_5247a2: /* 5247a2: push 0x56c4b0 */
  { uint32_t v = 0x56c4b0u; esp -= 4; W32(esp, v); }
/* 5247a7: push 0x5a6c00 */
  { uint32_t v = 0x5a6c00u; esp -= 4; W32(esp, v); }
/* 5247ac: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5247b1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5247b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5247b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5247b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5247b8: call 0x554df6 */
  esp -= 4; W32(esp, 0x5247bdu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5247bd: guest_badaddr(0x5247bd); return;
}

void f_524800(void) {
  LOAD_REGS();
L_524800: /* 524800: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 524803: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 524805: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 524809: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 52480d: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 524811: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 524815: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 524817: jge 0x52481f */
  if ((sf == of)) goto L_52481f;
L_524819: /* 524819: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_52481f: /* 52481f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 524823: fmul qword ptr [0x56c4f8] */
  ST0 = ST0 * (F64((uint32_t)(0x56c4f8u)));
/* 524829: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52482b: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 52482f: jge 0x524837 */
  if ((sf == of)) goto L_524837;
L_524831: /* 524831: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_524837: /* 524837: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 524839: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 52483f: fadd qword ptr [0x56c4e8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4e8u)));
/* 524845: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524848: ret  */
  esp += 4; SPILL(); return;
}

void f_524870(void) {
  LOAD_REGS();
L_524870: /* 524870: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 524871: mov ebp, esp */
  ebp = esp;
/* 524873: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 524875: push 0x557c50 */
  { uint32_t v = 0x557c50u; esp -= 4; W32(esp, v); }
/* 52487a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 524880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524881: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 524888: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52488b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52488c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52488d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 524890: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524891: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 524894: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 524897: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524899: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5248a0: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x5248a5u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 5248a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5248a8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 5248ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5248ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5248ad: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x5248b2u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 5248b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5248b5: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 5248b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5248b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5248ba: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5248bfu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5248bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5248c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5248c4: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 5248c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5248c8: mov ecx, esi */
  ecx = esi;
/* 5248ca: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x5248cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5248cd: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 5248d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5248d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5248d2: call 0x4e4165 */
  esp -= 4; W32(esp, 0x5248d7u); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 5248d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5248da: lea ebx, [edi + 0x14] */
  ebx = (uint32_t)(edi + 0x14u);
/* 5248dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5248de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5248df: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x5248e4u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 5248e4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5248e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5248e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5248eb: je 0x5248fa */
  if (zf) goto L_5248fa;
L_5248ed: /* 5248ed: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 5248f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5248f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5248f2: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x5248f7u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 5248f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5248fa: /* 5248fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5248fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5248fe: mov eax, esi */
  eax = esi;
/* 524900: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524901: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524908: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524909: mov esp, ebp */
  esp = ebp;
/* 52490b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52490c: ret  */
  esp += 4; SPILL(); return;
}

void f_52490d(void) {
  LOAD_REGS();
L_52490d: /* 52490d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 524910: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524915: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 524918: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524919: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52491c: call 0x554df6 */
  esp -= 4; W32(esp, 0x524921u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_524921(); return;
}

void f_524921(void) {
  LOAD_REGS();
L_524921: /* 524921: push 0x56c504 */
  { uint32_t v = 0x56c504u; esp -= 4; W32(esp, v); }
/* 524926: push 0x5a6c68 */
  { uint32_t v = 0x5a6c68u; esp -= 4; W32(esp, v); }
/* 52492b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x524930u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 524930: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524933: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524935: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524937: call 0x554df6 */
  esp -= 4; W32(esp, 0x52493cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52493c: guest_badaddr(0x52493c); return;
}

void f_524980(void) {
  LOAD_REGS();
L_524980: /* 524980: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 524984: mov eax, ecx */
  eax = ecx;
/* 524986: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 52498a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 52498c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 52498f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5249b0(void) {
  LOAD_REGS();
L_5249b0: /* 5249b0: xor eax, eax */
  eax = 0;
/* 5249b2: ret  */
  esp += 4; SPILL(); return;
}

void f_5249d0(void) {
  LOAD_REGS();
L_5249d0: /* 5249d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5249d1: mov ebp, esp */
  ebp = esp;
/* 5249d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5249d5: push 0x557c60 */
  { uint32_t v = 0x557c60u; esp -= 4; W32(esp, v); }
/* 5249da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5249e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5249e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5249e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5249eb: mov ecx, dword ptr [ecx + 0x454] */
  ecx = R32((uint32_t)(ecx + 0x454u));
/* 5249f1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5249f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5249f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5249f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5249f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5249f9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5249fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5249fd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 524a04: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x524a07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 524a07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524a0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524a0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524a0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524a13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524a14: mov esp, ebp */
  esp = ebp;
/* 524a16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524a17: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524a1a(void) {
  LOAD_REGS();
L_524a1a: /* 524a1a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 524a1d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524a22: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 524a25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 524a26: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 524a29: call 0x554df6 */
  esp -= 4; W32(esp, 0x524a2eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_524a2e(); return;
}

void f_524a2e(void) {
  LOAD_REGS();
L_524a2e: /* 524a2e: push 0x56c52c */
  { uint32_t v = 0x56c52cu; esp -= 4; W32(esp, v); }
/* 524a33: push 0x5a740c */
  { uint32_t v = 0x5a740cu; esp -= 4; W32(esp, v); }
/* 524a38: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x524a3du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 524a3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524a40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524a42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524a44: call 0x554df6 */
  esp -= 4; W32(esp, 0x524a49u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_524a49: guest_badaddr(0x524a49); return;
}

void f_524a70(void) {
  LOAD_REGS();
L_524a70: /* 524a70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 524a71: mov ebp, esp */
  ebp = esp;
/* 524a73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 524a75: push 0x557c70 */
  { uint32_t v = 0x557c70u; esp -= 4; W32(esp, v); }
/* 524a7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 524a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524a81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 524a88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 524a8b: mov ecx, dword ptr [ecx + 0x454] */
  ecx = R32((uint32_t)(ecx + 0x454u));
/* 524a91: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524a93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 524a94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524a95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524a96: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 524a99: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 524aa0: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x524aa3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 524aa3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524aaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524ab0: mov esp, ebp */
  esp = ebp;
/* 524ab2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524ab3: ret  */
  esp += 4; SPILL(); return;
}

void f_524ab4(void) {
  LOAD_REGS();
L_524ab4: /* 524ab4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 524ab7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524abc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 524abf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524ac0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 524ac3: call 0x554df6 */
  esp -= 4; W32(esp, 0x524ac8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_524ac8(); return;
}

void f_524ac8(void) {
  LOAD_REGS();
L_524ac8: /* 524ac8: push 0x56c558 */
  { uint32_t v = 0x56c558u; esp -= 4; W32(esp, v); }
/* 524acd: push 0x5a7414 */
  { uint32_t v = 0x5a7414u; esp -= 4; W32(esp, v); }
/* 524ad2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x524ad7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 524ad7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524ada: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524adc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524ade: call 0x554df6 */
  esp -= 4; W32(esp, 0x524ae3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_524ae3: guest_badaddr(0x524ae3); return;
}

void f_524b10(void) {
  LOAD_REGS();
L_524b10: /* 524b10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 524b11: mov ebp, esp */
  ebp = esp;
/* 524b13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 524b15: push 0x557c80 */
  { uint32_t v = 0x557c80u; esp -= 4; W32(esp, v); }
/* 524b1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 524b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524b21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 524b28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 524b2b: mov ecx, dword ptr [ecx + 0x454] */
  ecx = R32((uint32_t)(ecx + 0x454u));
/* 524b31: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524b33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 524b34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524b35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524b36: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 524b39: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 524b40: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x524b43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 524b43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524b46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524b47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524b48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524b4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524b50: mov esp, ebp */
  esp = ebp;
/* 524b52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524b53: ret  */
  esp += 4; SPILL(); return;
}

void f_524b54(void) {
  LOAD_REGS();
L_524b54: /* 524b54: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 524b57: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524b5c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 524b5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524b60: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 524b63: call 0x554df6 */
  esp -= 4; W32(esp, 0x524b68u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_524b68(); return;
}

void f_524b68(void) {
  LOAD_REGS();
L_524b68: /* 524b68: push 0x56c584 */
  { uint32_t v = 0x56c584u; esp -= 4; W32(esp, v); }
/* 524b6d: push 0x5a741c */
  { uint32_t v = 0x5a741cu; esp -= 4; W32(esp, v); }
/* 524b72: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x524b77u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 524b77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524b7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524b7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524b7e: call 0x554df6 */
  esp -= 4; W32(esp, 0x524b83u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_524b83: guest_badaddr(0x524b83); return;
}

void f_524bb0(void) {
  LOAD_REGS();
L_524bb0: /* 524bb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 524bb1: mov ebp, esp */
  ebp = esp;
/* 524bb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 524bb5: push 0x557c90 */
  { uint32_t v = 0x557c90u; esp -= 4; W32(esp, v); }
/* 524bba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 524bc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524bc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 524bc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 524bcb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 524bce: mov ecx, dword ptr [ecx + 0x454] */
  ecx = R32((uint32_t)(ecx + 0x454u));
/* 524bd4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524bd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 524bd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524bd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524bd9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 524bdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524bdd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 524be0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524be1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 524be8: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x524bebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 524beb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524bee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524bef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524bf0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524bf7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524bf8: mov esp, ebp */
  esp = ebp;
/* 524bfa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524bfb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_524bfe(void) {
  LOAD_REGS();
L_524bfe: /* 524bfe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 524c01: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524c06: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 524c09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 524c0a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 524c0d: call 0x554df6 */
  esp -= 4; W32(esp, 0x524c12u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_524c12(); return;
}

void f_524c12(void) {
  LOAD_REGS();
L_524c12: /* 524c12: push 0x56c5bc */
  { uint32_t v = 0x56c5bcu; esp -= 4; W32(esp, v); }
/* 524c17: push 0x5a7424 */
  { uint32_t v = 0x5a7424u; esp -= 4; W32(esp, v); }
/* 524c1c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x524c21u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 524c21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524c24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524c26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524c28: call 0x554df6 */
  esp -= 4; W32(esp, 0x524c2du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_524c2d: guest_badaddr(0x524c2d); return;
}

void f_524c50(void) {
  LOAD_REGS();
L_524c50: /* 524c50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 524c51: mov ebp, esp */
  ebp = esp;
/* 524c53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 524c55: push 0x557ca0 */
  { uint32_t v = 0x557ca0u; esp -= 4; W32(esp, v); }
/* 524c5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 524c60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524c61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 524c68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 524c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 524c6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524c6d: mov esi, ecx */
  esi = ecx;
/* 524c6f: mov ecx, dword ptr [esi + 0xf4] */
  ecx = R32((uint32_t)(esi + 0xf4u));
/* 524c75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 524c77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524c78: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 524c7b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 524c82: je 0x524c8a */
  if (zf) goto L_524c8a;
L_524c84: /* 524c84: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524c86: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 524c88: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x524c8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_524c8a: /* 524c8a: mov ecx, esi */
  ecx = esi;
/* 524c8c: mov dword ptr [esi + 0xf4], 0 */
  W32((uint32_t)(esi + 0xf4u), 0x0u);
/* 524c96: call 0x4e2a9a */
  esp -= 4; W32(esp, 0x524c9bu); SPILL(); f_4e2a9a(); if (g_unwind) return; RELOAD();
/* 524c9b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 524c9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524c9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524ca0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 524ca7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 524ca8: mov esp, ebp */
  esp = ebp;
/* 524caa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 524cab: ret  */
  esp += 4; SPILL(); return;
}

void f_524cac(void) {
  LOAD_REGS();
L_524cac: /* 524cac: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 524caf: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 524cb4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 524cb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524cb8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 524cbb: call 0x554df6 */
  esp -= 4; W32(esp, 0x524cc0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_524cc0(); return;
}

void f_524cc0(void) {
  LOAD_REGS();
L_524cc0: /* 524cc0: push 0x56c5f4 */
  { uint32_t v = 0x56c5f4u; esp -= 4; W32(esp, v); }
/* 524cc5: push 0x5a7450 */
  { uint32_t v = 0x5a7450u; esp -= 4; W32(esp, v); }
/* 524cca: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x524ccfu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 524ccf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524cd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524cd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 524cd6: call 0x554df6 */
  esp -= 4; W32(esp, 0x524cdbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_524cdb: guest_badaddr(0x524cdb); return;
}

void f_524d10(void) {
  LOAD_REGS();
L_524d10: /* 524d10: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 524d13: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524d15: jmp dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); SPILL(); call_ind(t); return; }
}

void f_524d30(void) {
  LOAD_REGS();
L_524d30: /* 524d30: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 524d33: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524d35: jmp dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); SPILL(); call_ind(t); return; }
}

void f_524d50(void) {
  LOAD_REGS();
L_524d50: /* 524d50: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 524d53: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524d55: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
}

void f_524d70(void) {
  LOAD_REGS();
L_524d70: /* 524d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 524d74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524d75: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 524d77: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x524d7cu); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 524d7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524d90(void) {
  LOAD_REGS();
L_524d90: /* 524d90: mov eax, ecx */
  eax = ecx;
/* 524d92: xor ecx, ecx */
  ecx = 0;
/* 524d94: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 524d96: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 524d99: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 524d9c: ret  */
  esp += 4; SPILL(); return;
}

void f_524db0(void) {
  LOAD_REGS();
L_524db0: /* 524db0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 524db4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524db5: mov esi, ecx */
  esi = ecx;
/* 524db7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 524db9: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 524dbf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 524dc2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 524dc5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x524dcau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 524dca: mov eax, esi */
  eax = esi;
/* 524dcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524dcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524de0(void) {
  LOAD_REGS();
L_524de0: /* 524de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524de1: mov eax, ecx */
  eax = ecx;
/* 524de3: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 524de6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 524de9: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 524dec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 524df0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 524df3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 524df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524df7: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x524dfau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 524dfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524dfb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524e10(void) {
  LOAD_REGS();
L_524e10: /* 524e10: mov eax, ecx */
  eax = ecx;
/* 524e12: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 524e15: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 524e18: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 524e1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524e1d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 524e1f: lea edx, [edx + edx*8] */
  edx = (uint32_t)(edx + edx*8);
/* 524e22: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 524e25: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 524e28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524e29: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 524e2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524e2d: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x524e30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 524e30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524e31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524e50(void) {
  LOAD_REGS();
L_524e50: /* 524e50: mov eax, ecx */
  eax = ecx;
/* 524e52: xor ecx, ecx */
  ecx = 0;
/* 524e54: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 524e56: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 524e59: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 524e5c: ret  */
  esp += 4; SPILL(); return;
}

void f_524e70(void) {
  LOAD_REGS();
L_524e70: /* 524e70: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 524e72: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 524e76: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 524e79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524e90(void) {
  LOAD_REGS();
L_524e90: /* 524e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524e91: mov eax, ecx */
  eax = ecx;
/* 524e93: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 524e96: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 524e99: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 524e9d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 524e9f: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 524ea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524ea3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 524ea6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524ea7: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x524eaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 524eaa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524eab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524ec0(void) {
  LOAD_REGS();
L_524ec0: /* 524ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 524ec4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524ec5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524ec6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 524ec9: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 524ecc: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 524ecf: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 524ed2: jle 0x524eee */
  if ((zf || sf != of)) goto L_524eee;
L_524ed4: /* 524ed4: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 524ed7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 524ed8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 524edb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 524edd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 524ee0: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 524ee4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 524ee6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 524ee9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x524eeeu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_524eee: /* 524eee: mov eax, edi */
  eax = edi;
/* 524ef0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524ef1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524ef2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524f10(void) {
  LOAD_REGS();
L_524f10: /* 524f10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 524f14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524f15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524f16: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 524f19: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 524f1c: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 524f1f: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 524f22: jle 0x524f3e */
  if ((zf || sf != of)) goto L_524f3e;
L_524f24: /* 524f24: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 524f27: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 524f28: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 524f2b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 524f2d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 524f30: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 524f34: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 524f36: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 524f39: call 0x4e4502 */
  esp -= 4; W32(esp, 0x524f3eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_524f3e: /* 524f3e: mov eax, edi */
  eax = edi;
/* 524f40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524f41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524f42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524f60(void) {
  LOAD_REGS();
L_524f60: /* 524f60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 524f64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 524f65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 524f66: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 524f69: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 524f6c: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 524f6f: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 524f72: jle 0x524f8e */
  if ((zf || sf != of)) goto L_524f8e;
L_524f74: /* 524f74: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 524f77: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 524f78: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 524f7b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 524f7d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 524f80: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 524f84: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 524f86: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 524f89: call 0x4e4502 */
  esp -= 4; W32(esp, 0x524f8eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_524f8e: /* 524f8e: mov eax, edi */
  eax = edi;
/* 524f90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 524f91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 524f92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_524fb0(void) {
  LOAD_REGS();
L_524fb0: /* 524fb0: mov eax, 1 */
  eax = 0x1u;
/* 524fb5: ret  */
  esp += 4; SPILL(); return;
}

void f_524fd0(void) {
  LOAD_REGS();
L_524fd0: /* 524fd0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 524fd4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 524fd8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 524fdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 524fdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 524fde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 524fdf: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 524fe4: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x524fe9u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 524fe9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 524fec: ret  */
  esp += 4; SPILL(); return;
}

void f_525000(void) {
  LOAD_REGS();
L_525000: /* 525000: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 525004: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 525008: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52500c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52500d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52500e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52500f: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 525014: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x525019u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 525019: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52501c: ret  */
  esp += 4; SPILL(); return;
}

void f_525030(void) {
  LOAD_REGS();
L_525030: /* 525030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 525031: mov ebp, esp */
  ebp = esp;
/* 525033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 525035: push 0x557cb0 */
  { uint32_t v = 0x557cb0u; esp -= 4; W32(esp, v); }
/* 52503a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 525040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 525048: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52504b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52504e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52504f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525050: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 525053: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525054: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 525057: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525058: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525059: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 525060: call 0x4e4160 */
  esp -= 4; W32(esp, 0x525065u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 525065: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525068: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52506b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52506c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52506d: call 0x4e4160 */
  esp -= 4; W32(esp, 0x525072u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 525072: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 525075: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525078: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 525079: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52507a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 525081: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 525082: mov esp, ebp */
  esp = ebp;
/* 525084: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 525085: ret  */
  esp += 4; SPILL(); return;
}

void f_525086(void) {
  LOAD_REGS();
L_525086: /* 525086: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 525089: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52508e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 525091: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525092: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 525095: call 0x554df6 */
  esp -= 4; W32(esp, 0x52509au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52509a(); return;
}

void f_52509a(void) {
  LOAD_REGS();
L_52509a: /* 52509a: push 0x56c628 */
  { uint32_t v = 0x56c628u; esp -= 4; W32(esp, v); }
/* 52509f: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 5250a4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5250a9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5250a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5250ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5250ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5250b0: call 0x554df6 */
  esp -= 4; W32(esp, 0x5250b5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5250b5: guest_badaddr(0x5250b5); return;
}

void f_5250f0(void) {
  LOAD_REGS();
L_5250f0: /* 5250f0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5250f4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5250f8: imul eax, eax, 0x1f */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1fu);
  eax = (uint32_t)r;
  }
/* 5250fb: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5250ff: imul ecx, ecx, 7 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x7u);
  ecx = (uint32_t)r;
  }
/* 525102: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 525104: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 525106: mov eax, ecx */
  eax = ecx;
/* 525108: ret  */
  esp += 4; SPILL(); return;
}

void f_525120(void) {
  LOAD_REGS();
L_525120: /* 525120: mov eax, ecx */
  eax = ecx;
/* 525122: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
/* 525129: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 525130: ret  */
  esp += 4; SPILL(); return;
}

void f_525150(void) {
  LOAD_REGS();
L_525150: /* 525150: mov eax, ecx */
  eax = ecx;
/* 525152: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 525156: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525157: xor esi, esi */
  esi = 0;
/* 525159: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52515b: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 52515d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 525160: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 525163: je 0x52516e */
  if (zf) goto L_52516e;
L_525165: /* 525165: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 525168: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 52516c: jmp 0x525172 */
  goto L_525172;
L_52516e: /* 52516e: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
L_525172: /* 525172: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 525174: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 525178: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 52517a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 52517d: je 0x525198 */
  if (zf) goto L_525198;
L_52517f: /* 52517f: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 525182: and edx, 0x67f01a5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x67f01a5u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 525188: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 52518b: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 52518e: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 525191: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 525194: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 525195: ret 4 */
  esp += 8; SPILL(); return;
L_525198: /* 525198: xor edx, edx */
  edx = 0;
/* 52519a: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 52519d: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 5251a0: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 5251a3: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 5251a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5251a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5251d0(void) {
  LOAD_REGS();
L_5251d0: /* 5251d0: mov eax, ecx */
  eax = ecx;
/* 5251d2: ret  */
  esp += 4; SPILL(); return;
}

void f_5251f0(void) {
  LOAD_REGS();
L_5251f0: /* 5251f0: mov eax, ecx */
  eax = ecx;
/* 5251f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5251f6: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 5251f9: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 5251fc: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 5251ff: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 525201: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 525204: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 525207: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 52520a: xor edx, edx */
  edx = 0;
/* 52520c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 52520f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525210: mov esi, dword ptr [ecx + 0x20] */
  esi = R32((uint32_t)(ecx + 0x20u));
/* 525213: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 525216: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 525219: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 52521c: mov dword ptr [eax + 0x18], 0xffffffff */
  W32((uint32_t)(eax + 0x18u), 0xffffffffu);
/* 525223: inc dword ptr [0x69f450] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f450u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x69f450u), r);
  }
/* 525229: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52522a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_525240(void) {
  LOAD_REGS();
L_525240: /* 525240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 525241: mov ebp, esp */
  ebp = esp;
/* 525243: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 525245: push 0x557cc0 */
  { uint32_t v = 0x557cc0u; esp -= 4; W32(esp, v); }
/* 52524a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 525250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525251: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 525258: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52525b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52525c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52525d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 525260: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 525262: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525263: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 525266: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 525269: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52526a: mov ecx, esi */
  ecx = esi;
/* 52526c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 525273: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x525276u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525276: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 525278: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 52527b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52527c: mov ecx, eax */
  ecx = eax;
/* 52527e: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x525281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525281: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 525284: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525285: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525286: call 0x4e4160 */
  esp -= 4; W32(esp, 0x52528bu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 52528b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52528d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525290: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 525293: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525294: mov ecx, esi */
  ecx = esi;
/* 525296: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x525299u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525299: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 52529c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52529e: je 0x5252ae */
  if (zf) goto L_5252ae;
L_5252a0: /* 5252a0: mov dword ptr [edi + 0x18], 0xffffffff */
  W32((uint32_t)(edi + 0x18u), 0xffffffffu);
/* 5252a7: mov dword ptr [edi + 0x10], 0 */
  W32((uint32_t)(edi + 0x10u), 0x0u);
L_5252ae: /* 5252ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5252b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5252b2: mov eax, esi */
  eax = esi;
/* 5252b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5252b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5252bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5252bd: mov esp, ebp */
  esp = ebp;
/* 5252bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5252c0: ret  */
  esp += 4; SPILL(); return;
}

void f_5252c1(void) {
  LOAD_REGS();
L_5252c1: /* 5252c1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5252c4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5252c9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 5252cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5252cd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5252d0: call 0x554df6 */
  esp -= 4; W32(esp, 0x5252d5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5252d5(); return;
}

void f_5252d5(void) {
  LOAD_REGS();
L_5252d5: /* 5252d5: push 0x56c654 */
  { uint32_t v = 0x56c654u; esp -= 4; W32(esp, v); }
/* 5252da: push 0x5a6c70 */
  { uint32_t v = 0x5a6c70u; esp -= 4; W32(esp, v); }
/* 5252df: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5252e4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5252e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5252e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5252e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5252eb: call 0x554df6 */
  esp -= 4; W32(esp, 0x5252f0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5252f0: guest_badaddr(0x5252f0); return;
}

void f_525330(void) {
  LOAD_REGS();
L_525330: /* 525330: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 525334: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* 52533a: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 52533d: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 525340: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 525342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 525344: jge 0x525364 */
  if ((sf == of)) goto L_525364;
L_525346: /* 525346: mov ecx, dword ptr [ecx + 0x78] */
  ecx = R32((uint32_t)(ecx + 0x78u));
/* 525349: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 52534c: mov edx, ecx */
  edx = ecx;
/* 52534e: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 525350: mov eax, dword ptr [edx - 0x14] */
  eax = R32((uint32_t)(edx + 0xffffffecu));
/* 525353: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 525356: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 525358: mov ecx, dword ptr [ecx - 0x10] */
  ecx = R32((uint32_t)(ecx + 0xfffffff0u));
/* 52535b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52535f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 525361: ret 8 */
  esp += 12; SPILL(); return;
L_525364: /* 525364: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 525368: jle 0x525375 */
  if ((zf || sf != of)) goto L_525375;
L_52536a: /* 52536a: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 52536d: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 525370: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 525372: ret 8 */
  esp += 12; SPILL(); return;
L_525375: /* 525375: mov dword ptr [eax], 0x14 */
  W32((uint32_t)(eax), 0x14u);
/* 52537b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5253a0(void) {
  LOAD_REGS();
L_5253a0: /* 5253a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5253a4: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* 5253aa: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5253ad: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 5253b0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5253b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5253b4: jge 0x5253ca */
  if ((sf == of)) goto L_5253ca;
L_5253b6: /* 5253b6: mov ecx, dword ptr [ecx + 0x78] */
  ecx = R32((uint32_t)(ecx + 0x78u));
/* 5253b9: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5253bc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 5253be: mov edx, dword ptr [ecx - 0x10] */
  edx = R32((uint32_t)(ecx + 0xfffffff0u));
/* 5253c1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5253c5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 5253c7: ret 8 */
  esp += 12; SPILL(); return;
L_5253ca: /* 5253ca: jle 0x5253dc */
  if ((zf || sf != of)) goto L_5253dc;
L_5253cc: /* 5253cc: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5253cf: mov ecx, dword ptr [edx + eax*4 - 0x18] */
  ecx = R32((uint32_t)(edx + eax*4 + 0xffffffe8u));
/* 5253d3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5253d7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5253d9: ret 8 */
  esp += 12; SPILL(); return;
L_5253dc: /* 5253dc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5253e0: mov dword ptr [eax], 0x2a5 */
  W32((uint32_t)(eax), 0x2a5u);
/* 5253e6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_525410(void) {
  LOAD_REGS();
L_525410: /* 525410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 525411: mov ebp, esp */
  ebp = esp;
/* 525413: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 525415: push 0x557cd0 */
  { uint32_t v = 0x557cd0u; esp -= 4; W32(esp, v); }
/* 52541a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 525420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525421: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 525428: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52542b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52542c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52542d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52542e: mov edi, ecx */
  edi = ecx;
/* 525430: lea ecx, [edi - 0xb4] */
  ecx = (uint32_t)(edi + 0xffffff4cu);
/* 525436: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 525439: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 52543c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 525443: call 0x4e1ba9 */
  esp -= 4; W32(esp, 0x525448u); SPILL(); f_4e1ba9(); if (g_unwind) return; RELOAD();
/* 525448: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52544a: jne 0x525463 */
  if (!zf) goto L_525463;
L_52544c: /* 52544c: push 0x2c5 */
  { uint32_t v = 0x2c5u; esp -= 4; W32(esp, v); }
/* 525451: push 0x5a7078 */
  { uint32_t v = 0x5a7078u; esp -= 4; W32(esp, v); }
/* 525456: push 0x5a7088 */
  { uint32_t v = 0x5a7088u; esp -= 4; W32(esp, v); }
/* 52545b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x525460u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 525460: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_525463: /* 525463: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 525466: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525468: jne 0x525481 */
  if (!zf) goto L_525481;
L_52546a: /* 52546a: push 0x2c6 */
  { uint32_t v = 0x2c6u; esp -= 4; W32(esp, v); }
/* 52546f: push 0x5a7094 */
  { uint32_t v = 0x5a7094u; esp -= 4; W32(esp, v); }
/* 525474: push 0x5a70a4 */
  { uint32_t v = 0x5a70a4u; esp -= 4; W32(esp, v); }
/* 525479: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x52547eu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 52547e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_525481: /* 525481: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 525484: lea ebx, [edi - 0xb4] */
  ebx = (uint32_t)(edi + 0xffffff4cu);
/* 52548a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52548c: jne 0x525650 */
  if (!zf) goto L_525650;
L_525492: /* 525492: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 525495: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 525498: je 0x5255ab */
  if (zf) goto L_5255ab;
L_52549e: /* 52549e: push 0x5f0848 */
  { uint32_t v = 0x5f0848u; esp -= 4; W32(esp, v); }
/* 5254a3: mov ecx, esi */
  ecx = esi;
/* 5254a5: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x5254aau); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 5254aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5254ac: je 0x5254bd */
  if (zf) goto L_5254bd;
L_5254ae: /* 5254ae: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 5254b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5254b3: je 0x5254bd */
  if (zf) goto L_5254bd;
L_5254b5: /* 5254b5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 5254b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5254b8: mov ecx, edi */
  ecx = edi;
/* 5254ba: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x5254bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5254bd: /* 5254bd: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 5254c0: mov ecx, dword ptr [edi - 0x30] */
  ecx = R32((uint32_t)(edi + 0xffffffd0u));
/* 5254c3: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 5254c6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 5254c9: cmp dword ptr [eax + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5254cc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5254d0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5254d3: je 0x5254ec */
  if (zf) goto L_5254ec;
L_5254d5: /* 5254d5: push 0x2d9 */
  { uint32_t v = 0x2d9u; esp -= 4; W32(esp, v); }
/* 5254da: push 0x5a70ac */
  { uint32_t v = 0x5a70acu; esp -= 4; W32(esp, v); }
/* 5254df: push 0x5a70bc */
  { uint32_t v = 0x5a70bcu; esp -= 4; W32(esp, v); }
/* 5254e4: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5254e9u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5254e9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5254ec: /* 5254ec: mov ecx, dword ptr [edi + 0x454] */
  ecx = R32((uint32_t)(edi + 0x454u));
/* 5254f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5254f4: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x5254f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5254f7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5254fa: mov ecx, dword ptr [edi + 0x454] */
  ecx = R32((uint32_t)(edi + 0x454u));
/* 525500: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 525503: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 525506: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 525508: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525509: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x52550cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52550c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52550f: mov ecx, dword ptr [edi + 0x454] */
  ecx = R32((uint32_t)(edi + 0x454u));
/* 525515: mov edx, dword ptr [edx + 0x14] */
  edx = R32((uint32_t)(edx + 0x14u));
/* 525518: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52551a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52551b: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0x52551eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52551e: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 525521: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 525523: and eax, 0xfffffdff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffdffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 525528: or eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 52552d: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ebx = r;
  }
/* 52552f: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 525531: and ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 525533: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 525534: mov ecx, esi */
  ecx = esi;
/* 525536: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 525539: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x52553cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52553c: and dword ptr [esi + 0x1c], 0xffff7fff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x1cu), r);
  }
/* 525543: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 525545: mov ecx, edi */
  ecx = edi;
/* 525547: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x52554au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52554a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52554d: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* 525550: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 525553: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 525555: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 525557: je 0x52559c */
  if (zf) goto L_52559c;
L_525559: /* 525559: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 52555b: mov ecx, edi */
  ecx = edi;
/* 52555d: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x525560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525560: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525562: mov ecx, esi */
  ecx = esi;
/* 525564: mov ebx, eax */
  ebx = eax;
/* 525566: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x52556bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 52556b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52556d: push 0x5a70d4 */
  { uint32_t v = 0x5a70d4u; esp -= 4; W32(esp, v); }
/* 525572: push 0x5a70e0 */
  { uint32_t v = 0x5a70e0u; esp -= 4; W32(esp, v); }
/* 525577: mov esi, eax */
  esi = eax;
/* 525579: call 0x4e1613 */
  esp -= 4; W32(esp, 0x52557eu); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 52557e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 525581: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 525584: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525587: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525588: sub ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 52558b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52558d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52558e: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 525593: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 525594: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x525599u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 525599: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52559c: /* 52559c: mov ecx, dword ptr [edi + 0x454] */
  ecx = R32((uint32_t)(edi + 0x454u));
/* 5255a2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5255a5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5255a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5255a8: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x5255abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5255ab: /* 5255ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5255ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5255b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5255b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5255b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5255b8: mov esp, ebp */
  esp = ebp;
/* 5255ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5255bb: ret 4 */
  esp += 8; SPILL(); return;
L_525650: /* 525650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525652: je 0x5255ab */
  if (zf) goto L_5255ab;
L_525658: /* 525658: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 52565e: lea ecx, [eax + 0xb4] */
  ecx = (uint32_t)(eax + 0xb4u);
/* 525664: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525665: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x525668u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525668: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52566b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52566c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52566d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 525674: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 525675: mov esp, ebp */
  esp = ebp;
/* 525677: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 525678: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5255be(void) {
  LOAD_REGS();
L_5255be: /* 5255be: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 5255c1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5255c6: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 5255c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5255ca: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 5255cd: call 0x554df6 */
  esp -= 4; W32(esp, 0x5255d2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5255d2(); return;
}

void f_5255d2(void) {
  LOAD_REGS();
  goto L_5255d2;
L_5255ab: /* 5255ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5255ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5255b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5255b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5255b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5255b8: mov esp, ebp */
  esp = ebp;
/* 5255ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5255bb: ret 4 */
  esp += 8; SPILL(); return;
L_5255d2: /* 5255d2: push 0x56c6b0 */
  { uint32_t v = 0x56c6b0u; esp -= 4; W32(esp, v); }
/* 5255d7: push 0x5a70f8 */
  { uint32_t v = 0x5a70f8u; esp -= 4; W32(esp, v); }
/* 5255dc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5255e1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5255e1: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 5255e4: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* 5255ea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5255ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5255ef: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x5255f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5255f2: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* 5255f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5255fa: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 5255fd: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x525600u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525600: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* 525606: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 525609: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52560b: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x52560eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52560e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 525611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525613: mov ecx, edi */
  ecx = edi;
/* 525615: mov ebx, eax */
  ebx = eax;
/* 525617: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x52561cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 52561c: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 52561f: mov edx, dword ptr [esi - 0x30] */
  edx = R32((uint32_t)(esi + 0xffffffd0u));
/* 525622: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 525625: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 525628: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 52562b: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 52562e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52562f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 525632: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525633: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 525636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 525637: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525638: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 525639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52563a: push 0x5a7100 */
  { uint32_t v = 0x5a7100u; esp -= 4; W32(esp, v); }
/* 52563f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x525644u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 525644: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 525647: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 525649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52564b: call 0x554df6 */
  esp -= 4; W32(esp, 0x525650u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 525650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525652: je 0x5255ab */
  if (zf) goto L_5255ab;
L_525658: /* 525658: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 52565e: lea ecx, [eax + 0xb4] */
  ecx = (uint32_t)(eax + 0xb4u);
/* 525664: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525665: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x525668u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 525668: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52566b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52566c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52566d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 525674: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 525675: mov esp, ebp */
  esp = ebp;
/* 525677: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 525678: ret 4 */
  esp += 8; SPILL(); return;
}

void f_52567b(void) {
  LOAD_REGS();
L_52567b: /* 52567b: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 52567e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 525683: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 525686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 525687: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 52568a: call 0x554df6 */
  esp -= 4; W32(esp, 0x52568fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52568f(); return;
}

void f_52568f(void) {
  LOAD_REGS();
L_52568f: /* 52568f: push 0x56c67c */
  { uint32_t v = 0x56c67cu; esp -= 4; W32(esp, v); }
/* 525694: push 0x5a712c */
  { uint32_t v = 0x5a712cu; esp -= 4; W32(esp, v); }
/* 525699: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52569eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52569e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5256a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5256a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5256a5: call 0x554df6 */
  esp -= 4; W32(esp, 0x5256aau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5256aa: guest_badaddr(0x5256aa); return;
}

void f_525760(void) {
  LOAD_REGS();
L_525760: /* 525760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525761: mov esi, dword ptr [ecx + 0x88] */
  esi = R32((uint32_t)(ecx + 0x88u));
/* 525767: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 525769: je 0x52578d */
  if (zf) goto L_52578d;
L_52576b: /* 52576b: xor edx, edx */
  edx = 0;
/* 52576d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52576f: jle 0x52578d */
  if ((zf || sf != of)) goto L_52578d;
L_525771: /* 525771: mov eax, dword ptr [ecx + 0x84] */
  eax = R32((uint32_t)(ecx + 0x84u));
/* 525777: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52577a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_525780: /* 525780: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 525783: jne 0x525791 */
  if (!zf) goto L_525791;
L_525785: /* 525785: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 525786: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 525789: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52578b: jl 0x525780 */
  if ((sf != of)) goto L_525780;
L_52578d: /* 52578d: xor eax, eax */
  eax = 0;
/* 52578f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 525790: ret  */
  esp += 4; SPILL(); return;
L_525791: /* 525791: mov eax, 1 */
  eax = 0x1u;
/* 525796: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 525797: ret  */
  esp += 4; SPILL(); return;
}

void f_5257b0(void) {
  LOAD_REGS();
L_5257b0: /* 5257b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5257b4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 5257b6: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 5257b9: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 5257bc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5257d0(void) {
  LOAD_REGS();
L_5257d0: /* 5257d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5257d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5257d6: je 0x5257e4 */
  if (zf) goto L_5257e4;
L_5257d8: /* 5257d8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 5257db: mov ecx, dword ptr [ecx + 0x44] */
  ecx = R32((uint32_t)(ecx + 0x44u));
/* 5257de: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 5257e1: ret 4 */
  esp += 8; SPILL(); return;
L_5257e4: /* 5257e4: xor eax, eax */
  eax = 0;
/* 5257e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_525800(void) {
  LOAD_REGS();
L_525800: /* 525800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 525801: mov esi, ecx */
  esi = ecx;
/* 525803: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 525806: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 525807: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 52580a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 52580d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52580f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 525812: jle 0x525830 */
  if ((zf || sf != of)) goto L_525830;
L_525814: /* 525814: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 525817: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 525818: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 52581b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52581d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 525820: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 525824: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 525826: mov ecx, esi */
  ecx = esi;
/* 525828: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52582b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x525830u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_525830: /* 525830: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 525834: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 525836: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 525838: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 52583b: mov eax, edi */
  eax = edi;
/* 52583d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52583e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52583f: ret 4 */
  esp += 8; SPILL(); return;
}
