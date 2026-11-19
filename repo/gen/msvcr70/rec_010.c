#include "recomp.h"
#include "rec_mod.h"

void f_429348(void) {
  LOAD_REGS();
  goto L_429348;
L_428e98: /* 428e98: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 428e9b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 428e9d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 428e9f: je 0x42931f */
  if (zf) goto L_42931f;
L_428ea5: /* 428ea5: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 428ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428ea9: call 0x415488 */
  esp -= 4; W32(esp, 0x428eaeu); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428eae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428eaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428eb1: je 0x428ee8 */
  if (zf) goto L_428ee8;
L_428eb3: /* 428eb3: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_428eb6: /* 428eb6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 428eb9: call 0x4243fa */
  esp -= 4; W32(esp, 0x428ebeu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 428ebe: mov esi, eax */
  esi = eax;
/* 428ec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428ec1: call 0x415488 */
  esp -= 4; W32(esp, 0x428ec6u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428ec6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428ec9: jne 0x428eb6 */
  if (!zf) goto L_428eb6;
L_428ecb: /* 428ecb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 428ecc: call 0x428e5e */
  esp -= 4; W32(esp, 0x428ed1u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 428ed1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_428ed2: /* 428ed2: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 428ed5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 428ed8: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 428edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428edc: call 0x415488 */
  esp -= 4; W32(esp, 0x428ee1u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 428ee1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428ee2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428ee4: jne 0x428ed2 */
  if (!zf) goto L_428ed2;
L_428ee6: /* 428ee6: jmp 0x428e98 */
  goto L_428e98;
L_428ee8: /* 428ee8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 428eeb: cmp byte ptr [esi], 0x25 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428eee: jne 0x4297fd */
  if (!zf) goto L_4297fd;
L_428ef4: /* 428ef4: xor edi, edi */
  edi = 0;
/* 428ef6: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 428ef9: and byte ptr [ebp - 0x39], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffc7u), r);
  }
/* 428efd: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 428f00: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 428f03: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 428f06: and byte ptr [ebp - 0x49], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 428f0a: and byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 428f0e: and byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 428f12: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 428f16: and byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 428f1a: and byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 428f1e: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
/* 428f22: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
L_428f25: /* 428f25: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 428f26: movzx ebx, byte ptr [esi] */
  ebx = (uint32_t)(R8((uint32_t)(esi)));
/* 428f29: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 428f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 428f2d: call 0x40152b */
  esp -= 4; W32(esp, 0x428f32u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 428f32: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 428f33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 428f35: je 0x428f46 */
  if (zf) goto L_428f46;
L_428f37: /* 428f37: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 428f3a: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 428f3d: lea edi, [ebx + eax*2 - 0x30] */
  edi = (uint32_t)(ebx + eax*2 + 0xffffffd0u);
/* 428f41: jmp 0x428fe0 */
  goto L_428fe0;
L_428f46: /* 428f46: cmp ebx, 0x4e */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 428f49: jg 0x428fbe */
  if ((!zf && sf == of)) goto L_428fbe;
L_428f4b: /* 428f4b: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428f51: /* 428f51: cmp ebx, 0x2a */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f54: je 0x428fb9 */
  if (zf) goto L_428fb9;
L_428f56: /* 428f56: cmp ebx, 0x46 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f59: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428f5f: /* 428f5f: cmp ebx, 0x49 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f62: je 0x428f6e */
  if (zf) goto L_428f6e;
L_428f64: /* 428f64: cmp ebx, 0x4c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428f67: jne 0x428fcd */
  if (!zf) goto L_428fcd;
L_428f69: /* 428f69: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 428f6c: jmp 0x428fe0 */
  goto L_428fe0;
L_428f6e: /* 428f6e: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 428f71: cmp cl, 0x36 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f74: jne 0x428f8d */
  if (!zf) goto L_428f8d;
L_428f76: /* 428f76: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 428f79: cmp byte ptr [eax], 0x34 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x34u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f7c: jne 0x428f8d */
  if (!zf) goto L_428f8d;
L_428f7e: /* 428f7e: mov esi, eax */
  esi = eax;
/* 428f80: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 428f83: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 428f87: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 428f8b: jmp 0x428fe0 */
  goto L_428fe0;
L_428f8d: /* 428f8d: cmp cl, 0x33 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x33u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f90: jne 0x428f9e */
  if (!zf) goto L_428f9e;
L_428f92: /* 428f92: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 428f95: cmp byte ptr [eax], 0x32 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x32u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428f98: jne 0x428f9e */
  if (!zf) goto L_428f9e;
L_428f9a: /* 428f9a: mov esi, eax */
  esi = eax;
/* 428f9c: jmp 0x428fe0 */
  goto L_428fe0;
L_428f9e: /* 428f9e: cmp cl, 0x64 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x64u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fa1: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fa3: /* 428fa3: cmp cl, 0x69 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x69u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fa6: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fa8: /* 428fa8: cmp cl, 0x6f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fab: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fad: /* 428fad: cmp cl, 0x78 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fb0: je 0x428fe0 */
  if (zf) goto L_428fe0;
L_428fb2: /* 428fb2: cmp cl, 0x58 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fb5: jne 0x428fcd */
  if (!zf) goto L_428fcd;
L_428fb7: /* 428fb7: jmp 0x428fe0 */
  goto L_428fe0;
L_428fb9: /* 428fb9: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 428fbc: jmp 0x428fe0 */
  goto L_428fe0;
L_428fbe: /* 428fbe: cmp ebx, 0x68 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fc1: je 0x428fda */
  if (zf) goto L_428fda;
L_428fc3: /* 428fc3: cmp ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fc6: je 0x428fd2 */
  if (zf) goto L_428fd2;
L_428fc8: /* 428fc8: cmp ebx, 0x77 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 428fcb: je 0x428fd5 */
  if (zf) goto L_428fd5;
L_428fcd: /* 428fcd: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 428fd0: jmp 0x428fe0 */
  goto L_428fe0;
L_428fd2: /* 428fd2: inc byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
L_428fd5: /* 428fd5: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 428fd8: jmp 0x428fe0 */
  goto L_428fe0;
L_428fda: /* 428fda: dec byte ptr [ebp - 0x4f] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb1u), r);
  }
/* 428fdd: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_428fe0: /* 428fe0: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428fe4: je 0x428f25 */
  if (zf) goto L_428f25;
L_428fea: /* 428fea: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 428fed: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 428ff0: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 428ff4: jne 0x42900a */
  if (!zf) goto L_42900a;
L_428ff6: /* 428ff6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 428ff9: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 428ffc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 428fff: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 429002: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 429005: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 429008: jmp 0x42900d */
  goto L_42900d;
L_42900a: /* 42900a: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
L_42900d: /* 42900d: and byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 429011: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429015: jne 0x42902b */
  if (!zf) goto L_42902b;
L_429017: /* 429017: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 429019: cmp al, 0x53 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x53u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42901b: je 0x429027 */
  if (zf) goto L_429027;
L_42901d: /* 42901d: cmp al, 0x43 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42901f: je 0x429027 */
  if (zf) goto L_429027;
L_429021: /* 429021: or byte ptr [ebp - 0x4e], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 429025: jmp 0x42902b */
  goto L_42902b;
L_429027: /* 429027: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
L_42902b: /* 42902b: movzx edi, byte ptr [esi] */
  edi = (uint32_t)(R8((uint32_t)(esi)));
/* 42902e: or edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 429031: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 429034: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429037: je 0x429068 */
  if (zf) goto L_429068;
L_429039: /* 429039: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42903c: je 0x42905d */
  if (zf) goto L_42905d;
L_42903e: /* 42903e: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429041: je 0x42905d */
  if (zf) goto L_42905d;
L_429043: /* 429043: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429046: call 0x4243fa */
  esp -= 4; W32(esp, 0x42904bu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42904b: mov esi, eax */
  esi = eax;
/* 42904d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42904e: call 0x415488 */
  esp -= 4; W32(esp, 0x429053u); SPILL(); f_415488(); if (g_unwind) return; RELOAD();
/* 429053: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429054: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429056: jne 0x429043 */
  if (!zf) goto L_429043;
L_429058: /* 429058: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42905b: jmp 0x429068 */
  goto L_429068;
L_42905d: /* 42905d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429060: call 0x4243fa */
  esp -= 4; W32(esp, 0x429065u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429065: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_429068: /* 429068: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42906c: je 0x429078 */
  if (zf) goto L_429078;
L_42906e: /* 42906e: cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429072: je 0x429294 */
  if (zf) goto L_429294;
L_429078: /* 429078: push 0x6f */
  { uint32_t v = 0x6fu; esp -= 4; W32(esp, v); }
/* 42907a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42907b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42907d: jg 0x429263 */
  if ((!zf && sf == of)) goto L_429263;
L_429083: /* 429083: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_429089: /* 429089: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42908c: je 0x429240 */
  if (zf) goto L_429240;
L_429092: /* 429092: cmp edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429095: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_42909b: /* 42909b: jle 0x429289 */
  if ((zf || sf != of)) goto L_429289;
L_4290a1: /* 4290a1: cmp edi, 0x67 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4290a4: jle 0x4290de */
  if ((zf || sf != of)) goto L_4290de;
L_4290a6: /* 4290a6: cmp edi, 0x69 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290a9: je 0x4290c6 */
  if (zf) goto L_4290c6;
L_4290ab: /* 4290ab: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290ae: jne 0x429289 */
  if (!zf) goto L_429289;
L_4290b4: /* 4290b4: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4290b7: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4290bb: je 0x4297d2 */
  if (zf) goto L_4297d2;
L_4290c1: /* 4290c1: jmp 0x4297f2 */
  goto L_4297f2;
L_4290c6: /* 4290c6: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 4290c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4290c9: /* 4290c9: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4290cc: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290cf: jne 0x4294de */
  if (!zf) goto L_4294de;
L_4290d5: /* 4290d5: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 4290d9: jmp 0x4294e3 */
  goto L_4294e3;
L_4290de: /* 4290de: lea esi, [ebp - 0x1c8] */
  esi = (uint32_t)(ebp + 0xfffffe38u);
/* 4290e4: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4290e7: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290ea: jne 0x4290fa */
  if (!zf) goto L_4290fa;
L_4290ec: /* 4290ec: mov byte ptr [ebp - 0x1c8], bl */
  W8((uint32_t)(ebp + 0xfffffe38u), (ebx & 0xffu));
/* 4290f2: lea esi, [ebp - 0x1c7] */
  esi = (uint32_t)(ebp + 0xfffffe39u);
/* 4290f8: jmp 0x4290ff */
  goto L_4290ff;
L_4290fa: /* 4290fa: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4290fd: jne 0x429112 */
  if (!zf) goto L_429112;
L_4290ff: /* 4290ff: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 429102: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 429103: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429106: call 0x4243fa */
  esp -= 4; W32(esp, 0x42910bu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42910b: mov ebx, eax */
  ebx = eax;
/* 42910d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429110: jmp 0x429115 */
  goto L_429115;
L_429112: /* 429112: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
L_429115: /* 429115: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429119: je 0x429123 */
  if (zf) goto L_429123;
L_42911b: /* 42911b: cmp edi, 0x15d */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429121: jle 0x429144 */
  if ((zf || sf != of)) goto L_429144;
L_429123: /* 429123: mov edi, 0x15d */
  edi = 0x15du;
/* 429128: jmp 0x429144 */
  goto L_429144;
L_42912a: /* 42912a: mov eax, edi */
  eax = edi;
/* 42912c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 42912d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42912f: je 0x42914f */
  if (zf) goto L_42914f;
L_429131: /* 429131: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 429134: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 429136: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429137: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42913a: call 0x4243fa */
  esp -= 4; W32(esp, 0x42913fu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42913f: mov ebx, eax */
  ebx = eax;
/* 429141: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429144: /* 429144: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429145: call 0x40152b */
  esp -= 4; W32(esp, 0x42914au); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42914a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42914b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42914d: jne 0x42912a */
  if (!zf) goto L_42912a;
L_42914f: /* 42914f: cmp byte ptr [0x44a9ac], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44a9acu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429155: jne 0x429197 */
  if (!zf) goto L_429197;
L_429157: /* 429157: mov eax, edi */
  eax = edi;
/* 429159: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 42915a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42915c: je 0x429197 */
  if (zf) goto L_429197;
L_42915e: /* 42915e: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429161: call 0x4243fa */
  esp -= 4; W32(esp, 0x429166u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429166: mov ebx, eax */
  ebx = eax;
/* 429168: mov al, byte ptr [0x44a9ac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 42916d: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 42916f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429170: jmp 0x429189 */
  goto L_429189;
L_429172: /* 429172: mov eax, edi */
  eax = edi;
/* 429174: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 429175: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429177: je 0x429197 */
  if (zf) goto L_429197;
L_429179: /* 429179: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42917c: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 42917e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42917f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429182: call 0x4243fa */
  esp -= 4; W32(esp, 0x429187u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429187: mov ebx, eax */
  ebx = eax;
L_429189: /* 429189: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42918a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42918d: call 0x40152b */
  esp -= 4; W32(esp, 0x429192u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429192: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429193: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429195: jne 0x429172 */
  if (!zf) goto L_429172;
L_429197: /* 429197: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42919b: je 0x4291fe */
  if (zf) goto L_4291fe;
L_42919d: /* 42919d: cmp ebx, 0x65 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291a0: je 0x4291a7 */
  if (zf) goto L_4291a7;
L_4291a2: /* 4291a2: cmp ebx, 0x45 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291a5: jne 0x4291fe */
  if (!zf) goto L_4291fe;
L_4291a7: /* 4291a7: mov eax, edi */
  eax = edi;
/* 4291a9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291ac: je 0x4291fe */
  if (zf) goto L_4291fe;
L_4291ae: /* 4291ae: mov byte ptr [esi], 0x65 */
  W8((uint32_t)(esi), 0x65u);
/* 4291b1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4291b2: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4291b5: call 0x4243fa */
  esp -= 4; W32(esp, 0x4291bau); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4291ba: mov ebx, eax */
  ebx = eax;
/* 4291bc: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 4291bf: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291c2: jne 0x4291c9 */
  if (!zf) goto L_4291c9;
L_4291c4: /* 4291c4: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4291c6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4291c7: jmp 0x4291ce */
  goto L_4291ce;
L_4291c9: /* 4291c9: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4291cc: jne 0x4291f3 */
  if (!zf) goto L_4291f3;
L_4291ce: /* 4291ce: mov eax, edi */
  eax = edi;
/* 4291d0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291d3: jne 0x4291e6 */
  if (!zf) goto L_4291e6;
L_4291d5: /* 4291d5: xor edi, edi */
  edi = 0;
/* 4291d7: jmp 0x4291f3 */
  goto L_4291f3;
L_4291d9: /* 4291d9: mov eax, edi */
  eax = edi;
/* 4291db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4291dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291de: je 0x4291fe */
  if (zf) goto L_4291fe;
L_4291e0: /* 4291e0: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 4291e3: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 4291e5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4291e6: /* 4291e6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4291e9: call 0x4243fa */
  esp -= 4; W32(esp, 0x4291eeu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4291ee: mov ebx, eax */
  ebx = eax;
/* 4291f0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4291f3: /* 4291f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4291f4: call 0x40152b */
  esp -= 4; W32(esp, 0x4291f9u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 4291f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4291fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4291fc: jne 0x4291d9 */
  if (!zf) goto L_4291d9;
L_4291fe: /* 4291fe: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429201: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429202: call 0x428e5e */
  esp -= 4; W32(esp, 0x429207u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429207: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429208: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42920c: je 0x42931f */
  if (zf) goto L_42931f;
L_429212: /* 429212: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429216: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_42921c: /* 42921c: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42921f: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 429222: lea eax, [ebp - 0x1c8] */
  eax = (uint32_t)(ebp + 0xfffffe38u);
/* 429228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429229: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42922c: movsx eax, byte ptr [ebp - 0x4f] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb1u)));
/* 429230: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429231: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429232: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x429238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 429238: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42923b: jmp 0x4297f2 */
  goto L_4297f2;
L_429240: /* 429240: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429244: jne 0x429250 */
  if (!zf) goto L_429250;
L_429246: /* 429246: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42924d: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_429250: /* 429250: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 429254: jle 0x429403 */
  if ((zf || sf != of)) goto L_429403;
L_42925a: /* 42925a: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
/* 42925e: jmp 0x429403 */
  goto L_429403;
L_429263: /* 429263: mov eax, edi */
  eax = edi;
/* 429265: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429268: je 0x4295d0 */
  if (zf) goto L_4295d0;
L_42926e: /* 42926e: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429271: je 0x429250 */
  if (zf) goto L_429250;
L_429273: /* 429273: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429274: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429275: je 0x4295d4 */
  if (zf) goto L_4295d4;
L_42927b: /* 42927b: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42927e: je 0x4290c9 */
  if (zf) goto L_4290c9;
L_429284: /* 429284: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429287: je 0x4292b9 */
  if (zf) goto L_4292b9;
L_429289: /* 429289: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42928c: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 42928f: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429292: je 0x4292a1 */
  if (zf) goto L_4292a1;
L_429294: /* 429294: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
L_429297: /* 429297: call 0x428e5e */
  esp -= 4; W32(esp, 0x42929cu); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42929c: jmp 0x429851 */
  goto L_429851;
L_4292a1: /* 4292a1: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 4292a4: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4292a8: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4292ae: /* 4292ae: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 4292b1: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 4292b4: jmp 0x4297f2 */
  goto L_4297f2;
L_4292b9: /* 4292b9: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4292bd: jle 0x4292c3 */
  if ((zf || sf != of)) goto L_4292c3;
L_4292bf: /* 4292bf: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
L_4292c3: /* 4292c3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4292c6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4292c7: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 4292ca: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 4292d0: cmp byte ptr [edi], 0x5e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4292d3: jne 0x4292e0 */
  if (!zf) goto L_4292e0;
L_4292d5: /* 4292d5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4292d6: mov dword ptr [ebp - 0x1cc], edi */
  W32((uint32_t)(ebp + 0xfffffe34u), edi);
/* 4292dc: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_4292e0: /* 4292e0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 4292e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4292e5: jne 0x42935c */
  if (!zf) goto L_42935c;
L_4292e7: /* 4292e7: and dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4292ea: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4292ec: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4292ed: call 0x4014ee */
  esp -= 4; W32(esp, 0x4292f2u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4292f2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4292f5: mov ebx, esp */
  ebx = esp;
/* 4292f7: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 4292fa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4292fe: jmp 0x42935c */
  goto L_42935c;
L_42931f: /* 42931f: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429323: jne 0x42932e */
  if (!zf) goto L_42932e;
L_429325: /* 429325: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 429328: call 0x401156 */
  esp -= 4; W32(esp, 0x42932du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42932d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42932e: /* 42932e: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 429331: lea esp, [ebp - 0x1e4] */
  esp = (uint32_t)(ebp + 0xfffffe1cu);
/* 429337: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42933a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42933d: call 0x4013ab */
  esp -= 4; W32(esp, 0x429342u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 429342: call 0x40105a */
  esp -= 4; W32(esp, 0x429347u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 429347: ret  */
  esp += 4; SPILL(); return;
L_429348: /* 429348: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 42934f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 429353: mov edi, dword ptr [ebp - 0x1cc] */
  edi = R32((uint32_t)(ebp + 0xfffffe34u));
/* 429359: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
L_42935c: /* 42935c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42935e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 429360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429361: call 0x4010fd */
  esp -= 4; W32(esp, 0x429366u); SPILL(); hle_memset(); RELOAD();
/* 429366: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 429369: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42936d: jne 0x4293e3 */
  if (!zf) goto L_4293e3;
L_42936f: /* 42936f: cmp byte ptr [edi], 0x5d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429372: jne 0x4293e3 */
  if (!zf) goto L_4293e3;
L_429374: /* 429374: mov dl, 0x5d */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x5du) & 0xffu);
/* 429376: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 429377: mov byte ptr [ebx + 0xb], 0x20 */
  W8((uint32_t)(ebx + 0xbu), 0x20u);
/* 42937b: jmp 0x4293e6 */
  goto L_4293e6;
L_42937d: /* 42937d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42937e: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429380: jne 0x4293cd */
  if (!zf) goto L_4293cd;
L_429382: /* 429382: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429384: je 0x4293cd */
  if (zf) goto L_4293cd;
L_429386: /* 429386: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 429388: cmp cl, 0x5d */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42938b: je 0x4293cd */
  if (zf) goto L_4293cd;
L_42938d: /* 42938d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42938e: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 429390: jae 0x429396 */
  if (!cf) goto L_429396;
L_429392: /* 429392: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 429394: jmp 0x42939a */
  goto L_42939a;
L_429396: /* 429396: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 429398: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_42939a: /* 42939a: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42939c: ja 0x4293c9 */
  if ((!cf && !zf)) goto L_4293c9;
L_42939e: /* 42939e: movzx esi, dl */
  esi = (uint32_t)((edx & 0xffu));
/* 4293a1: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4293a3: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4293a5: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4293a8: mov dword ptr [ebp - 0x1d0], eax */
  W32((uint32_t)(ebp + 0xfffffe30u), eax);
L_4293ae: /* 4293ae: mov eax, esi */
  eax = esi;
/* 4293b0: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4293b3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4293b5: mov ecx, esi */
  ecx = esi;
/* 4293b7: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 4293ba: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4293bc: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 4293be: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 4293c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4293c1: dec dword ptr [ebp - 0x1d0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe30u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffe30u), r);
  }
/* 4293c7: jne 0x4293ae */
  if (!zf) goto L_4293ae;
L_4293c9: /* 4293c9: xor dl, dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 4293cb: jmp 0x4293e6 */
  goto L_4293e6;
L_4293cd: /* 4293cd: mov byte ptr [ebp - 0x39], al */
  W8((uint32_t)(ebp + 0xffffffc7u), (eax & 0xffu));
/* 4293d0: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 4293d3: mov eax, ecx */
  eax = ecx;
/* 4293d5: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4293d8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4293da: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 4293dd: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4293df: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 4293e1: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_4293e3: /* 4293e3: mov dl, byte ptr [ebp - 0x39] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffc7u))) & 0xffu);
L_4293e6: /* 4293e6: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4293e8: cmp al, 0x5d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4293ea: jne 0x42937d */
  if (!zf) goto L_42937d;
L_4293ec: /* 4293ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4293ee: je 0x42931f */
  if (zf) goto L_42931f;
L_4293f4: /* 4293f4: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4293f7: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4293fb: jne 0x429400 */
  if (!zf) goto L_429400;
L_4293fd: /* 4293fd: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_429400: /* 429400: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_429403: /* 429403: mov esi, ebx */
  esi = ebx;
/* 429405: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429408: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42940b: call 0x428e5e */
  esp -= 4; W32(esp, 0x429410u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429410: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429411: /* 429411: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429415: je 0x429425 */
  if (zf) goto L_429425;
L_429417: /* 429417: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42941a: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42941d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42941f: je 0x429597 */
  if (zf) goto L_429597;
L_429425: /* 429425: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429428: call 0x4243fa */
  esp -= 4; W32(esp, 0x42942du); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42942d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 429430: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429433: je 0x429479 */
  if (zf) goto L_429479;
L_429435: /* 429435: cmp edi, 0x73 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429438: jne 0x429449 */
  if (!zf) goto L_429449;
L_42943a: /* 42943a: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42943d: jl 0x429444 */
  if ((sf != of)) goto L_429444;
L_42943f: /* 42943f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429442: jle 0x429449 */
  if ((zf || sf != of)) goto L_429449;
L_429444: /* 429444: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429447: jne 0x429479 */
  if (!zf) goto L_429479;
L_429449: /* 429449: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42944c: jne 0x42958d */
  if (!zf) goto L_42958d;
L_429452: /* 429452: mov ecx, eax */
  ecx = eax;
/* 429454: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 429457: xor edx, edx */
  edx = 0;
  cf = 0;
/* 429459: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 42945a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 42945c: mov ecx, eax */
  ecx = eax;
/* 42945e: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 429461: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 429464: movsx ecx, byte ptr [ecx + edi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + edi)));
/* 429468: movsx edi, byte ptr [ebp - 0x49] */
  edi = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42946c: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42946e: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429470: je 0x42958d */
  if (zf) goto L_42958d;
L_429476: /* 429476: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_429479: /* 429479: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42947d: jne 0x429587 */
  if (!zf) goto L_429587;
L_429483: /* 429483: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429487: je 0x42957c */
  if (zf) goto L_42957c;
L_42948d: /* 42948d: mov byte ptr [ebp - 0x1d4], al */
  W8((uint32_t)(ebp + 0xfffffe2cu), (eax & 0xffu));
/* 429493: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 429496: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 42949c: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4294a1: je 0x4294b1 */
  if (zf) goto L_4294b1;
L_4294a3: /* 4294a3: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4294a6: call 0x4243fa */
  esp -= 4; W32(esp, 0x4294abu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4294ab: mov byte ptr [ebp - 0x1d3], al */
  W8((uint32_t)(ebp + 0xfffffe2du), (eax & 0xffu));
L_4294b1: /* 4294b1: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 4294b7: lea eax, [ebp - 0x1d4] */
  eax = (uint32_t)(ebp + 0xfffffe2cu);
/* 4294bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4294be: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
/* 4294c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4294c5: call 0x402197 */
  esp -= 4; W32(esp, 0x4294cau); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 4294ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4294cd: mov ax, word ptr [ebp - 0x1d8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffe28u))) & 0xffffu);
/* 4294d4: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
/* 4294d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4294d8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4294d9: jmp 0x42957f */
  goto L_42957f;
L_4294de: /* 4294de: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4294e1: jne 0x429501 */
  if (!zf) goto L_429501;
L_4294e3: /* 4294e3: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4294e6: jne 0x4294f4 */
  if (!zf) goto L_4294f4;
L_4294e8: /* 4294e8: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4294ec: je 0x4294f4 */
  if (zf) goto L_4294f4;
L_4294ee: /* 4294ee: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4294f2: jmp 0x429501 */
  goto L_429501;
L_4294f4: /* 4294f4: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4294f7: call 0x4243fa */
  esp -= 4; W32(esp, 0x4294fcu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4294fc: mov ebx, eax */
  ebx = eax;
/* 4294fe: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429501: /* 429501: cmp ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429504: jne 0x429605 */
  if (!zf) goto L_429605;
L_42950a: /* 42950a: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42950d: call 0x4243fa */
  esp -= 4; W32(esp, 0x429512u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429512: mov ebx, eax */
  ebx = eax;
/* 429514: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429517: cmp bl, 0x78 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42951a: je 0x429554 */
  if (zf) goto L_429554;
L_42951c: /* 42951c: cmp bl, 0x58 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42951f: je 0x429554 */
  if (zf) goto L_429554;
L_429521: /* 429521: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 429528: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42952b: je 0x429542 */
  if (zf) goto L_429542;
L_42952d: /* 42952d: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429531: je 0x42953b */
  if (zf) goto L_42953b;
L_429533: /* 429533: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 429536: jne 0x42953b */
  if (!zf) goto L_42953b;
L_429538: /* 429538: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_42953b: /* 42953b: mov edi, esi */
  edi = esi;
/* 42953d: jmp 0x429605 */
  goto L_429605;
L_429542: /* 429542: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429546: call 0x428e5e */
  esp -= 4; W32(esp, 0x42954bu); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42954b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42954c: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42954e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42954f: jmp 0x429602 */
  goto L_429602;
L_429554: /* 429554: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429557: call 0x4243fa */
  esp -= 4; W32(esp, 0x42955cu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42955c: mov ebx, eax */
  ebx = eax;
/* 42955e: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 429561: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429565: je 0x429574 */
  if (zf) goto L_429574;
L_429567: /* 429567: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42956b: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42956f: jge 0x429574 */
  if ((sf == of)) goto L_429574;
L_429571: /* 429571: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429574: /* 429574: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 429576: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 429577: jmp 0x429605 */
  goto L_429605;
L_42957c: /* 42957c: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 42957e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_42957f: /* 42957f: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 429582: jmp 0x429411 */
  goto L_429411;
L_429587: /* 429587: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 429588: jmp 0x429411 */
  goto L_429411;
L_42958d: /* 42958d: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429591: call 0x428e5e */
  esp -= 4; W32(esp, 0x429596u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429596: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429597: /* 429597: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429599: je 0x42931f */
  if (zf) goto L_42931f;
L_42959f: /* 42959f: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4295a3: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4295a9: /* 4295a9: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 4295ac: cmp dword ptr [ebp - 0x68], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295b0: je 0x4297f2 */
  if (zf) goto L_4297f2;
L_4295b6: /* 4295b6: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4295b9: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4295bd: je 0x4295c8 */
  if (zf) goto L_4295c8;
L_4295bf: /* 4295bf: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 4295c3: jmp 0x4297f2 */
  goto L_4297f2;
L_4295c8: /* 4295c8: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 4295cb: jmp 0x4297f2 */
  goto L_4297f2;
L_4295d0: /* 4295d0: mov byte ptr [ebp - 0x4f], 1 */
  W8((uint32_t)(ebp + 0xffffffb1u), 0x1u);
L_4295d4: /* 4295d4: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4295d7: cmp ebx, 0x2d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295da: jne 0x4295e2 */
  if (!zf) goto L_4295e2;
L_4295dc: /* 4295dc: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 4295e0: jmp 0x4295e7 */
  goto L_4295e7;
L_4295e2: /* 4295e2: cmp ebx, 0x2b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295e5: jne 0x429605 */
  if (!zf) goto L_429605;
L_4295e7: /* 4295e7: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4295ea: jne 0x4295f8 */
  if (!zf) goto L_4295f8;
L_4295ec: /* 4295ec: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4295f0: je 0x4295f8 */
  if (zf) goto L_4295f8;
L_4295f2: /* 4295f2: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4295f6: jmp 0x429605 */
  goto L_429605;
L_4295f8: /* 4295f8: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4295fb: call 0x4243fa */
  esp -= 4; W32(esp, 0x429600u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429600: mov ebx, eax */
  ebx = eax;
L_429602: /* 429602: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_429605: /* 429605: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429609: je 0x429700 */
  if (zf) goto L_429700;
L_42960f: /* 42960f: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429613: jne 0x4296de */
  if (!zf) goto L_4296de;
L_429619: /* 429619: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42961c: je 0x429663 */
  if (zf) goto L_429663;
L_42961e: /* 42961e: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429621: je 0x429663 */
  if (zf) goto L_429663;
L_429623: /* 429623: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429624: call 0x40152b */
  esp -= 4; W32(esp, 0x429629u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429629: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42962a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42962c: je 0x429694 */
  if (zf) goto L_429694;
L_42962e: /* 42962e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429630: jne 0x42964c */
  if (!zf) goto L_42964c;
L_429632: /* 429632: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429635: jge 0x429694 */
  if ((sf == of)) goto L_429694;
L_429637: /* 429637: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42963a: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42963d: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 429641: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 429644: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 429647: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42964a: jmp 0x429697 */
  goto L_429697;
L_42964c: /* 42964c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42964e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 429650: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 429653: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 429656: call 0x40518c */
  esp -= 4; W32(esp, 0x42965bu); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42965b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42965e: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 429661: jmp 0x429697 */
  goto L_429697;
L_429663: /* 429663: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429664: call 0x415449 */
  esp -= 4; W32(esp, 0x429669u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 429669: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42966a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42966c: je 0x429694 */
  if (zf) goto L_429694;
L_42966e: /* 42966e: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 429671: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 429674: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 429678: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42967b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42967e: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 429681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429682: call 0x40152b */
  esp -= 4; W32(esp, 0x429687u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429687: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429688: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42968a: jne 0x429697 */
  if (!zf) goto L_429697;
L_42968c: /* 42968c: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 42968f: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 429692: jmp 0x429697 */
  goto L_429697;
L_429694: /* 429694: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429697: /* 429697: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42969b: jne 0x4296c7 */
  if (!zf) goto L_4296c7;
L_42969d: /* 42969d: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 4296a0: lea eax, [ebx - 0x30] */
  eax = (uint32_t)(ebx + 0xffffffd0u);
/* 4296a3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4296a4: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 4296a7: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 4296aa: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4296ae: je 0x4296bb */
  if (zf) goto L_4296bb;
L_4296b0: /* 4296b0: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 4296b3: jne 0x4296bb */
  if (!zf) goto L_4296bb;
L_4296b5: /* 4296b5: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 4296b9: jmp 0x4296d1 */
  goto L_4296d1;
L_4296bb: /* 4296bb: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4296be: call 0x4243fa */
  esp -= 4; W32(esp, 0x4296c3u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4296c3: mov ebx, eax */
  ebx = eax;
/* 4296c5: jmp 0x4296d1 */
  goto L_4296d1;
L_4296c7: /* 4296c7: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 4296ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4296cb: call 0x428e5e */
  esp -= 4; W32(esp, 0x4296d0u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 4296d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4296d1: /* 4296d1: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4296d5: je 0x429619 */
  if (zf) goto L_429619;
L_4296db: /* 4296db: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4296de: /* 4296de: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4296e2: je 0x4297b0 */
  if (zf) goto L_4297b0;
L_4296e8: /* 4296e8: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 4296eb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4296ed: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 4296f0: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 4296f3: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 4296f5: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 4296f8: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 4296fb: jmp 0x4297b0 */
  goto L_4297b0;
L_429700: /* 429700: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429704: jne 0x4297a7 */
  if (!zf) goto L_4297a7;
L_42970a: /* 42970a: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42970d: je 0x42973b */
  if (zf) goto L_42973b;
L_42970f: /* 42970f: cmp edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429712: je 0x42973b */
  if (zf) goto L_42973b;
L_429714: /* 429714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429715: call 0x40152b */
  esp -= 4; W32(esp, 0x42971au); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42971a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42971b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42971d: je 0x42975d */
  if (zf) goto L_42975d;
L_42971f: /* 42971f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429721: jne 0x42972e */
  if (!zf) goto L_42972e;
L_429723: /* 429723: cmp ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429726: jge 0x42975d */
  if ((sf == of)) goto L_42975d;
L_429728: /* 429728: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42972c: jmp 0x429760 */
  goto L_429760;
L_42972e: /* 42972e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 429731: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 429734: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 429736: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 429739: jmp 0x429760 */
  goto L_429760;
L_42973b: /* 42973b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42973c: call 0x415449 */
  esp -= 4; W32(esp, 0x429741u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 429741: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429744: je 0x42975d */
  if (zf) goto L_42975d;
L_429746: /* 429746: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42974a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42974b: call 0x40152b */
  esp -= 4; W32(esp, 0x429750u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 429750: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429751: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429753: jne 0x429760 */
  if (!zf) goto L_429760;
L_429755: /* 429755: and ebx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 429758: sub ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42975b: jmp 0x429760 */
  goto L_429760;
L_42975d: /* 42975d: inc byte ptr [ebp - 0x4c] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
L_429760: /* 429760: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429764: jne 0x429790 */
  if (!zf) goto L_429790;
L_429766: /* 429766: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 429769: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42976c: lea eax, [eax + ebx - 0x30] */
  eax = (uint32_t)(eax + ebx + 0xffffffd0u);
/* 429770: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 429773: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429777: je 0x429784 */
  if (zf) goto L_429784;
L_429779: /* 429779: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42977c: jne 0x429784 */
  if (!zf) goto L_429784;
L_42977e: /* 42977e: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
/* 429782: jmp 0x42979a */
  goto L_42979a;
L_429784: /* 429784: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429787: call 0x4243fa */
  esp -= 4; W32(esp, 0x42978cu); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 42978c: mov ebx, eax */
  ebx = eax;
/* 42978e: jmp 0x42979a */
  goto L_42979a;
L_429790: /* 429790: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429793: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429794: call 0x428e5e */
  esp -= 4; W32(esp, 0x429799u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429799: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42979a: /* 42979a: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42979e: je 0x42970a */
  if (zf) goto L_42970a;
L_4297a4: /* 4297a4: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_4297a7: /* 4297a7: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297ab: je 0x4297b0 */
  if (zf) goto L_4297b0;
L_4297ad: /* 4297ad: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_4297b0: /* 4297b0: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297b3: jne 0x4297b9 */
  if (!zf) goto L_4297b9;
L_4297b5: /* 4297b5: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_4297b9: /* 4297b9: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297bd: je 0x42931f */
  if (zf) goto L_42931f;
L_4297c3: /* 4297c3: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297c7: jne 0x4297f2 */
  if (!zf) goto L_4297f2;
L_4297c9: /* 4297c9: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 4297cc: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 4297cf: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_4297d2: /* 4297d2: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4297d6: je 0x4297e5 */
  if (zf) goto L_4297e5;
L_4297d8: /* 4297d8: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 4297db: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 4297dd: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 4297e0: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 4297e3: jmp 0x4297f2 */
  goto L_4297f2;
L_4297e5: /* 4297e5: cmp byte ptr [ebp - 0x4f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4297e9: je 0x4297ef */
  if (zf) goto L_4297ef;
L_4297eb: /* 4297eb: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 4297ed: jmp 0x4297f2 */
  goto L_4297f2;
L_4297ef: /* 4297ef: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
L_4297f2: /* 4297f2: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 4297f5: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4297f8: jmp 0x428e98 */
  goto L_428e98;
L_4297fd: /* 4297fd: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429800: call 0x4243fa */
  esp -= 4; W32(esp, 0x429805u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429805: mov ebx, eax */
  ebx = eax;
/* 429807: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42980a: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 42980d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42980e: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 429811: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429813: je 0x42981b */
  if (zf) goto L_42981b;
L_429815: /* 429815: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429816: jmp 0x429297 */
  goto L_429297;
L_42981b: /* 42981b: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 42981e: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 429824: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429829: je 0x428e98 */
  if (zf) goto L_428e98;
L_42982f: /* 42982f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 429832: call 0x4243fa */
  esp -= 4; W32(esp, 0x429837u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 429837: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42983a: movzx ecx, byte ptr [ecx] */
  ecx = (uint32_t)(R8((uint32_t)(ecx)));
/* 42983d: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 429840: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429842: je 0x429857 */
  if (zf) goto L_429857;
L_429844: /* 429844: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429845: call 0x428e5e */
  esp -= 4; W32(esp, 0x42984au); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 42984a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42984b: call 0x428e5e */
  esp -= 4; W32(esp, 0x429850u); SPILL(); f_428e5e(); if (g_unwind) return; RELOAD();
/* 429850: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429851: /* 429851: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429852: jmp 0x42931f */
  goto L_42931f;
L_429857: /* 429857: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42985a: jmp 0x428e98 */
  goto L_428e98;
}

void f_42985f(void) {
  LOAD_REGS();
L_42985f: /* 42985f: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 429863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429864: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 429868: call 0x428e6a */
  esp -= 4; W32(esp, 0x42986du); SPILL(); f_428e6a(); if (g_unwind) return; RELOAD();
/* 42986d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42986e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42986f: ret  */
  esp += 4; SPILL(); return;
}

void f_429870(void) {
  LOAD_REGS();
L_429870: /* 429870: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 429874: call 0x423206 */
  esp -= 4; W32(esp, 0x429879u); SPILL(); f_423206(); if (g_unwind) return; RELOAD();
/* 429879: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42987d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42987e: jne 0x429884 */
  if (!zf) goto L_429884;
L_429880: /* 429880: or dword ptr [esi], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 429883: ret  */
  esp += 4; SPILL(); return;
L_429884: /* 429884: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 429886: ret  */
  esp += 4; SPILL(); return;
}

void f_429887(void) {
  LOAD_REGS();
L_429887: /* 429887: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 429888: mov esi, eax */
  esi = eax;
/* 42988a: jmp 0x42989f */
  goto L_42989f;
L_42988c: /* 42988c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 429890: dec dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 429894: call 0x429870 */
  esp -= 4; W32(esp, 0x429899u); SPILL(); f_429870(); if (g_unwind) return; RELOAD();
/* 429899: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42989c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42989d: je 0x4298a6 */
  if (zf) goto L_4298a6;
L_42989f: /* 42989f: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4298a4: jg 0x42988c */
  if ((!zf && sf == of)) goto L_42988c;
L_4298a6: /* 4298a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4298a7: ret  */
  esp += 4; SPILL(); return;
}

void f_4298a8(void) {
  LOAD_REGS();
L_4298a8: /* 4298a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4298a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4298aa: mov esi, eax */
  esi = eax;
/* 4298ac: mov edi, ecx */
  edi = ecx;
/* 4298ae: jmp 0x4298c7 */
  goto L_4298c7;
L_4298b0: /* 4298b0: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 4298b4: xor eax, eax */
  eax = 0;
/* 4298b6: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 4298b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4298ba: call 0x429870 */
  esp -= 4; W32(esp, 0x4298bfu); SPILL(); f_429870(); if (g_unwind) return; RELOAD();
/* 4298bf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4298c0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4298c1: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4298c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4298c5: je 0x4298ce */
  if (zf) goto L_4298ce;
L_4298c7: /* 4298c7: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4298cc: jg 0x4298b0 */
  if ((!zf && sf == of)) goto L_4298b0;
L_4298ce: /* 4298ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4298cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4298d0: ret  */
  esp += 4; SPILL(); return;
}

void f_4298d1(void) {
  LOAD_REGS();
L_4298d1: /* 4298d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4298d2: mov ebp, esp */
  ebp = esp;
/* 4298d4: sub esp, 0x458 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x458u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4298da: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4298df: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4298e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4298e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4298e6: mov bx, word ptr [ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 4298e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4298ea: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4298ed: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4298f0: xor eax, eax */
  eax = 0;
/* 4298f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4298f3: xor edi, edi */
  edi = 0;
/* 4298f5: cmp bx, ax */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4298f8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 4298fb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 4298fe: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 429901: je 0x42a05b */
  if (zf) goto L_42a05b;
L_429907: /* 429907: jmp 0x42990f */
  goto L_42990f;
L_429909: /* 429909: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42990c: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
L_42990f: /* 42990f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 429910: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 429911: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429915: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 429918: jl 0x42a05b */
  if ((sf != of)) goto L_42a05b;
L_42991e: /* 42991e: cmp bx, 0x20 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 429922: jb 0x42993b */
  if (cf) goto L_42993b;
L_429924: /* 429924: cmp bx, 0x78 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 429928: ja 0x42993b */
  if ((!cf && !zf)) goto L_42993b;
L_42992a: /* 42992a: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42992d: movsx eax, byte ptr [eax + 0x43e158] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x43e158u)));
/* 429934: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 429937: xor edx, edx */
  edx = 0;
/* 429939: jmp 0x42993f */
  goto L_42993f;
L_42993b: /* 42993b: xor edx, edx */
  edx = 0;
/* 42993d: xor eax, eax */
  eax = 0;
L_42993f: /* 42993f: movsx eax, byte ptr [edi + eax*8 + 0x43e178] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + eax*8 + 0x43e178u)));
/* 429947: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 42994a: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42994d: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 429950: ja 0x42a04c */
  if ((!cf && !zf)) goto L_42a04c;
L_429956: /* 429956: jmp dword ptr [eax*4 + 0x42a06e] */
  switch (R32((uint32_t)(eax*4 + 0x42a06eu))) {
    case 0x42995du: goto L_42995d;
    case 0x429978u: goto L_429978;
    case 0x4299c4u: goto L_4299c4;
    case 0x429a01u: goto L_429a01;
    case 0x429a09u: goto L_429a09;
    case 0x429a41u: goto L_429a41;
    case 0x429af1u: goto L_429af1;
    case 0x429b06u: goto L_429b06;
    default: guest_badjump(0x429956, R32((uint32_t)(eax*4 + 0x42a06eu))); return;
  }
L_42995d: /* 42995d: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 429961: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 429964: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 429967: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 42996a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 42996d: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 429970: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 429973: jmp 0x42a04c */
  goto L_42a04c;
L_429978: /* 429978: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 42997b: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42997e: je 0x4299bb */
  if (zf) goto L_4299bb;
L_429980: /* 429980: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429983: je 0x4299b2 */
  if (zf) goto L_4299b2;
L_429985: /* 429985: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429988: je 0x4299a9 */
  if (zf) goto L_4299a9;
L_42998a: /* 42998a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42998b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42998c: je 0x4299a0 */
  if (zf) goto L_4299a0;
L_42998e: /* 42998e: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429991: jne 0x42a04c */
  if (!zf) goto L_42a04c;
L_429997: /* 429997: or dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 42999b: jmp 0x42a04c */
  goto L_42a04c;
L_4299a0: /* 4299a0: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4299a4: jmp 0x42a04c */
  goto L_42a04c;
L_4299a9: /* 4299a9: or dword ptr [ebp - 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4299ad: jmp 0x42a04c */
  goto L_42a04c;
L_4299b2: /* 4299b2: or byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4299b6: jmp 0x42a04c */
  goto L_42a04c;
L_4299bb: /* 4299bb: or dword ptr [ebp - 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4299bf: jmp 0x42a04c */
  goto L_42a04c;
L_4299c4: /* 4299c4: cmp bx, 0x2a */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4299c8: jne 0x4299ec */
  if (!zf) goto L_4299ec;
L_4299ca: /* 4299ca: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4299cd: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 4299d0: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 4299d3: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4299d5: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 4299d8: jge 0x42a04c */
  if ((sf == of)) goto L_42a04c;
L_4299de: /* 4299de: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4299e2: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 4299e4: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 4299e7: jmp 0x42a04c */
  goto L_42a04c;
L_4299ec: /* 4299ec: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 4299ef: movzx ecx, bx */
  ecx = (uint32_t)((ebx & 0xffffu));
/* 4299f2: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 4299f5: lea eax, [ecx + eax*2 - 0x30] */
  eax = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 4299f9: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 4299fc: jmp 0x42a04c */
  goto L_42a04c;
L_429a01: /* 429a01: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 429a04: jmp 0x42a04c */
  goto L_42a04c;
L_429a09: /* 429a09: cmp bx, 0x2a */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429a0d: jne 0x429a2c */
  if (!zf) goto L_429a2c;
L_429a0f: /* 429a0f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 429a12: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 429a15: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 429a18: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429a1a: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 429a1d: jge 0x42a04c */
  if ((sf == of)) goto L_42a04c;
L_429a23: /* 429a23: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 429a27: jmp 0x42a04c */
  goto L_42a04c;
L_429a2c: /* 429a2c: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 429a2f: movzx ecx, bx */
  ecx = (uint32_t)((ebx & 0xffffu));
/* 429a32: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 429a35: lea eax, [ecx + eax*2 - 0x30] */
  eax = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 429a39: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 429a3c: jmp 0x42a04c */
  goto L_42a04c;
L_429a41: /* 429a41: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 429a44: cmp eax, 0x49 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429a47: je 0x429a77 */
  if (zf) goto L_429a77;
L_429a49: /* 429a49: cmp eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429a4c: je 0x429a6e */
  if (zf) goto L_429a6e;
L_429a4e: /* 429a4e: cmp eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429a51: je 0x429a65 */
  if (zf) goto L_429a65;
L_429a53: /* 429a53: cmp eax, 0x77 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429a56: jne 0x42a04c */
  if (!zf) goto L_42a04c;
L_429a5c: /* 429a5c: or byte ptr [ebp - 7], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 429a60: jmp 0x42a04c */
  goto L_42a04c;
L_429a65: /* 429a65: or dword ptr [ebp - 8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 429a69: jmp 0x42a04c */
  goto L_42a04c;
L_429a6e: /* 429a6e: or dword ptr [ebp - 8], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 429a72: jmp 0x42a04c */
  goto L_42a04c;
L_429a77: /* 429a77: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 429a7a: cmp ax, 0x36 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x36u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429a7e: jne 0x429a96 */
  if (!zf) goto L_429a96;
L_429a80: /* 429a80: cmp word ptr [ecx + 2], 0x34 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x34u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429a85: jne 0x429a96 */
  if (!zf) goto L_429a96;
L_429a87: /* 429a87: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 429a8a: or byte ptr [ebp - 7], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 429a8e: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 429a91: jmp 0x42a04c */
  goto L_42a04c;
L_429a96: /* 429a96: cmp ax, 0x33 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x33u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429a9a: jne 0x429ab2 */
  if (!zf) goto L_429ab2;
L_429a9c: /* 429a9c: cmp word ptr [ecx + 2], 0x32 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x32u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429aa1: jne 0x429ab2 */
  if (!zf) goto L_429ab2;
L_429aa3: /* 429aa3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 429aa6: and byte ptr [ebp - 7], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 429aaa: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 429aad: jmp 0x42a04c */
  goto L_42a04c;
L_429ab2: /* 429ab2: cmp ax, 0x64 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x64u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429ab6: je 0x42a04c */
  if (zf) goto L_42a04c;
L_429abc: /* 429abc: cmp ax, 0x69 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x69u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429ac0: je 0x42a04c */
  if (zf) goto L_42a04c;
L_429ac6: /* 429ac6: cmp ax, 0x6f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x6fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429aca: je 0x42a04c */
  if (zf) goto L_42a04c;
L_429ad0: /* 429ad0: cmp ax, 0x75 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x75u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429ad4: je 0x42a04c */
  if (zf) goto L_42a04c;
L_429ada: /* 429ada: cmp ax, 0x78 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429ade: je 0x42a04c */
  if (zf) goto L_42a04c;
L_429ae4: /* 429ae4: cmp ax, 0x58 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429ae8: je 0x42a04c */
  if (zf) goto L_42a04c;
L_429aee: /* 429aee: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
L_429af1: /* 429af1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429af2: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 429af5: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 429afc: call 0x429870 */
  esp -= 4; W32(esp, 0x429b01u); SPILL(); f_429870(); if (g_unwind) return; RELOAD();
/* 429b01: jmp 0x42a04b */
  goto L_42a04b;
L_429b06: /* 429b06: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 429b09: cmp eax, 0x67 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429b0c: jg 0x429d81 */
  if ((!zf && sf == of)) goto L_429d81;
L_429b12: /* 429b12: cmp eax, 0x65 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429b15: jge 0x429bc5 */
  if ((sf == of)) goto L_429bc5;
L_429b1b: /* 429b1b: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429b1e: jg 0x429c38 */
  if ((!zf && sf == of)) goto L_429c38;
L_429b24: /* 429b24: je 0x429df5 */
  if (zf) goto L_429df5;
L_429b2a: /* 429b2a: sub eax, 0x43 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429b2d: je 0x429be8 */
  if (zf) goto L_429be8;
L_429b33: /* 429b33: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429b34: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429b35: je 0x429bbb */
  if (zf) goto L_429bbb;
L_429b3b: /* 429b3b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429b3c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429b3d: je 0x429bbb */
  if (zf) goto L_429bbb;
L_429b3f: /* 429b3f: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429b42: jne 0x429f4f */
  if (!zf) goto L_429f4f;
L_429b48: /* 429b48: test word ptr [ebp - 8], 0x830 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x830u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 429b4e: jne 0x429b54 */
  if (!zf) goto L_429b54;
L_429b50: /* 429b50: or dword ptr [ebp - 8], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_429b54: /* 429b54: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 429b57: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429b5a: jne 0x429b61 */
  if (!zf) goto L_429b61;
L_429b5c: /* 429b5c: mov edx, 0x7fffffff */
  edx = 0x7fffffffu;
L_429b61: /* 429b61: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 429b64: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429b68: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 429b6b: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 429b6e: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 429b71: je 0x429dc0 */
  if (zf) goto L_429dc0;
L_429b77: /* 429b77: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429b79: jne 0x429b84 */
  if (!zf) goto L_429b84;
L_429b7b: /* 429b7b: mov esi, dword ptr [0x44dd08] */
  esi = R32((uint32_t)(0x44dd08u));
/* 429b81: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_429b84: /* 429b84: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 429b88: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 429b8a: mov eax, esi */
  eax = esi;
/* 429b8c: jle 0x429f4f */
  if ((zf || sf != of)) goto L_429f4f;
L_429b92: /* 429b92: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 429b94: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429b96: je 0x429f4f */
  if (zf) goto L_429f4f;
L_429b9c: /* 429b9c: mov esi, dword ptr [0x449030] */
  esi = R32((uint32_t)(0x449030u));
/* 429ba2: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 429ba5: test byte ptr [esi + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429baa: je 0x429bad */
  if (zf) goto L_429bad;
L_429bac: /* 429bac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_429bad: /* 429bad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 429bae: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 429bb1: cmp dword ptr [ebp - 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429bb4: jl 0x429b92 */
  if ((sf != of)) goto L_429b92;
L_429bb6: /* 429bb6: jmp 0x429f4f */
  goto L_429f4f;
L_429bbb: /* 429bbb: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 429bc2: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_429bc5: /* 429bc5: or dword ptr [ebp - 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 429bc9: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429bcd: lea edi, [ebp - 0x458] */
  edi = (uint32_t)(ebp + 0xfffffba8u);
/* 429bd3: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 429bd6: jge 0x429cc9 */
  if ((sf == of)) goto L_429cc9;
L_429bdc: /* 429bdc: mov dword ptr [ebp - 0xc], 6 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x6u);
/* 429be3: jmp 0x429d14 */
  goto L_429d14;
L_429be8: /* 429be8: test word ptr [ebp - 8], 0x830 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x830u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 429bee: jne 0x429bf4 */
  if (!zf) goto L_429bf4;
L_429bf0: /* 429bf0: or dword ptr [ebp - 8], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_429bf4: /* 429bf4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 429bf7: xor eax, eax */
  eax = 0;
/* 429bf9: mov ax, word ptr [esi - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xfffffffcu))) & 0xffffu);
/* 429bfd: xor edi, edi */
  edi = 0;
/* 429bff: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 429c00: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429c04: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 429c07: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 429c0a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 429c0d: je 0x429c6b */
  if (zf) goto L_429c6b;
L_429c0f: /* 429c0f: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 429c15: and byte ptr [ebp - 0x27], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd9u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffd9u), r);
  }
/* 429c19: mov byte ptr [ebp - 0x28], al */
  W8((uint32_t)(ebp + 0xffffffd8u), (eax & 0xffu));
/* 429c1c: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 429c1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429c20: lea eax, [ebp - 0x458] */
  eax = (uint32_t)(ebp + 0xfffffba8u);
/* 429c26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429c27: call 0x402197 */
  esp -= 4; W32(esp, 0x429c2cu); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 429c2c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 429c2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 429c31: jge 0x429c72 */
  if ((sf == of)) goto L_429c72;
L_429c33: /* 429c33: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 429c36: jmp 0x429c72 */
  goto L_429c72;
L_429c38: /* 429c38: sub eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429c3b: je 0x429c83 */
  if (zf) goto L_429c83;
L_429c3d: /* 429c3d: sub eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429c40: je 0x429bf4 */
  if (zf) goto L_429bf4;
L_429c42: /* 429c42: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429c43: jne 0x429f4f */
  if (!zf) goto L_429f4f;
L_429c49: /* 429c49: or dword ptr [ebp - 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_429c4d: /* 429c4d: mov dword ptr [ebp - 0x10], 0xa */
  W32((uint32_t)(ebp + 0xfffffff0u), 0xau);
L_429c54: /* 429c54: test byte ptr [ebp - 7], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429c58: je 0x429e6b */
  if (zf) goto L_429e6b;
L_429c5e: /* 429c5e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 429c60: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 429c63: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 429c66: jmp 0x429e98 */
  goto L_429e98;
L_429c6b: /* 429c6b: mov word ptr [ebp - 0x458], ax */
  W16((uint32_t)(ebp + 0xfffffba8u), (eax & 0xffffu));
L_429c72: /* 429c72: lea eax, [ebp - 0x458] */
  eax = (uint32_t)(ebp + 0xfffffba8u);
/* 429c78: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 429c7b: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 429c7e: jmp 0x429f4f */
  goto L_429f4f;
L_429c83: /* 429c83: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 429c85: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 429c88: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429c8a: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 429c8d: je 0x429cbb */
  if (zf) goto L_429cbb;
L_429c8f: /* 429c8f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 429c92: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429c94: je 0x429cbb */
  if (zf) goto L_429cbb;
L_429c96: /* 429c96: test byte ptr [ebp - 7], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429c9a: movsx eax, word ptr [eax] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax)));
/* 429c9d: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 429ca0: je 0x429cb3 */
  if (zf) goto L_429cb3;
L_429ca2: /* 429ca2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 429ca3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 429ca5: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 429ca7: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 429cae: jmp 0x429f4c */
  goto L_429f4c;
L_429cb3: /* 429cb3: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 429cb6: jmp 0x429f4c */
  goto L_429f4c;
L_429cbb: /* 429cbb: mov eax, dword ptr [0x44dd08] */
  eax = R32((uint32_t)(0x44dd08u));
/* 429cc0: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 429cc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429cc4: jmp 0x429d76 */
  goto L_429d76;
L_429cc9: /* 429cc9: jne 0x429cda */
  if (!zf) goto L_429cda;
L_429ccb: /* 429ccb: cmp bx, 0x67 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x67u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429ccf: jne 0x429d14 */
  if (!zf) goto L_429d14;
L_429cd1: /* 429cd1: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
/* 429cd8: jmp 0x429d14 */
  goto L_429d14;
L_429cda: /* 429cda: mov eax, 0x200 */
  eax = 0x200u;
/* 429cdf: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429ce2: jle 0x429ce7 */
  if ((zf || sf != of)) goto L_429ce7;
L_429ce4: /* 429ce4: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_429ce7: /* 429ce7: cmp dword ptr [ebp - 0xc], 0xa3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xa3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429cee: jle 0x429d14 */
  if ((zf || sf != of)) goto L_429d14;
L_429cf0: /* 429cf0: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 429cf3: add eax, 0x15d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 429cf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429cf9: call 0x4010eb */
  esp -= 4; W32(esp, 0x429cfeu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 429cfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429d00: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429d01: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 429d04: je 0x429d0d */
  if (zf) goto L_429d0d;
L_429d06: /* 429d06: mov edi, eax */
  edi = eax;
/* 429d08: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 429d0b: jmp 0x429d14 */
  goto L_429d14;
L_429d0d: /* 429d0d: mov dword ptr [ebp - 0xc], 0xa3 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0xa3u);
L_429d14: /* 429d14: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 429d16: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 429d19: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 429d1c: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 429d1f: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 429d22: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 429d25: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 429d28: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 429d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429d2c: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 429d2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 429d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429d31: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 429d34: call dword ptr [0x44afa0] */
  { uint32_t t = R32((uint32_t)(0x44afa0u)); esp -= 4; W32(esp, 0x429d3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 429d3a: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 429d3d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 429d40: and esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  esi = r;
  }
/* 429d46: je 0x429d56 */
  if (zf) goto L_429d56;
L_429d48: /* 429d48: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429d4c: jne 0x429d56 */
  if (!zf) goto L_429d56;
L_429d4e: /* 429d4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 429d4f: call dword ptr [0x44afac] */
  { uint32_t t = R32((uint32_t)(0x44afacu)); esp -= 4; W32(esp, 0x429d55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 429d55: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429d56: /* 429d56: cmp bx, 0x67 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x67u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429d5a: jne 0x429d68 */
  if (!zf) goto L_429d68;
L_429d5c: /* 429d5c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429d5e: jne 0x429d68 */
  if (!zf) goto L_429d68;
L_429d60: /* 429d60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 429d61: call dword ptr [0x44afa4] */
  { uint32_t t = R32((uint32_t)(0x44afa4u)); esp -= 4; W32(esp, 0x429d67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 429d67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429d68: /* 429d68: cmp byte ptr [edi], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429d6b: jne 0x429d75 */
  if (!zf) goto L_429d75;
L_429d6d: /* 429d6d: or byte ptr [ebp - 7], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 429d71: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 429d72: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_429d75: /* 429d75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_429d76: /* 429d76: call 0x402493 */
  esp -= 4; W32(esp, 0x429d7bu); SPILL(); hle_strlen(); RELOAD();
/* 429d7b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429d7c: jmp 0x429f4c */
  goto L_429f4c;
L_429d81: /* 429d81: sub eax, 0x69 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429d84: je 0x429c49 */
  if (zf) goto L_429c49;
L_429d8a: /* 429d8a: sub eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429d8d: je 0x429e43 */
  if (zf) goto L_429e43;
L_429d93: /* 429d93: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429d94: je 0x429e29 */
  if (zf) goto L_429e29;
L_429d9a: /* 429d9a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429d9b: je 0x429dee */
  if (zf) goto L_429dee;
L_429d9d: /* 429d9d: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429da0: je 0x429b54 */
  if (zf) goto L_429b54;
L_429da6: /* 429da6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 429da7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 429da8: je 0x429c4d */
  if (zf) goto L_429c4d;
L_429dae: /* 429dae: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 429db1: jne 0x429f4f */
  if (!zf) goto L_429f4f;
L_429db7: /* 429db7: mov dword ptr [ebp - 0x3c], 0x27 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x27u);
/* 429dbe: jmp 0x429dfc */
  goto L_429dfc;
L_429dc0: /* 429dc0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429dc2: jne 0x429dcd */
  if (!zf) goto L_429dcd;
L_429dc4: /* 429dc4: mov esi, dword ptr [0x44dd0c] */
  esi = R32((uint32_t)(0x44dd0cu));
/* 429dca: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_429dcd: /* 429dcd: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 429dd4: mov eax, esi */
  eax = esi;
/* 429dd6: jmp 0x429de1 */
  goto L_429de1;
L_429dd8: /* 429dd8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 429dd9: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 429ddd: je 0x429de5 */
  if (zf) goto L_429de5;
L_429ddf: /* 429ddf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 429de0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_429de1: /* 429de1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429de3: jne 0x429dd8 */
  if (!zf) goto L_429dd8;
L_429de5: /* 429de5: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 429de7: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 429de9: jmp 0x429f4c */
  goto L_429f4c;
L_429dee: /* 429dee: mov dword ptr [ebp - 0xc], 8 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x8u);
L_429df5: /* 429df5: mov dword ptr [ebp - 0x3c], 7 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x7u);
L_429dfc: /* 429dfc: test byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429e00: mov dword ptr [ebp - 0x10], 0x10 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x10u);
/* 429e07: je 0x429c54 */
  if (zf) goto L_429c54;
L_429e0d: /* 429e0d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 429e10: add eax, 0x51 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x51u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 429e13: mov word ptr [ebp - 0x24], 0x30 */
  W16((uint32_t)(ebp + 0xffffffdcu), 0x30u);
/* 429e19: mov word ptr [ebp - 0x22], ax */
  W16((uint32_t)(ebp + 0xffffffdeu), (eax & 0xffffu));
/* 429e1d: mov dword ptr [ebp - 0x1c], 2 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x2u);
/* 429e24: jmp 0x429c54 */
  goto L_429c54;
L_429e29: /* 429e29: test byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429e2d: mov dword ptr [ebp - 0x10], 8 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x8u);
/* 429e34: je 0x429c54 */
  if (zf) goto L_429c54;
L_429e3a: /* 429e3a: or byte ptr [ebp - 7], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 429e3e: jmp 0x429c54 */
  goto L_429c54;
L_429e43: /* 429e43: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 429e45: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 429e48: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429e4c: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 429e4f: je 0x429e5a */
  if (zf) goto L_429e5a;
L_429e51: /* 429e51: mov cx, word ptr [ebp - 0x18] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe8u))) & 0xffffu);
/* 429e55: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 429e58: jmp 0x429e5f */
  goto L_429e5f;
L_429e5a: /* 429e5a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 429e5d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_429e5f: /* 429e5f: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
/* 429e66: jmp 0x42a039 */
  goto L_42a039;
L_429e6b: /* 429e6b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 429e6e: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429e72: je 0x429e8a */
  if (zf) goto L_429e8a;
L_429e74: /* 429e74: test byte ptr [ebp - 8], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429e78: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 429e7b: je 0x429e84 */
  if (zf) goto L_429e84;
L_429e7d: /* 429e7d: movsx eax, word ptr [esi - 4] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(esi + 0xfffffffcu)));
L_429e81: /* 429e81: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 429e82: jmp 0x429e9b */
  goto L_429e9b;
L_429e84: /* 429e84: movzx eax, word ptr [esi - 4] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0xfffffffcu)));
/* 429e88: jmp 0x429e81 */
  goto L_429e81;
L_429e8a: /* 429e8a: test byte ptr [ebp - 8], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429e8e: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 429e91: je 0x429e96 */
  if (zf) goto L_429e96;
L_429e93: /* 429e93: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 429e94: jmp 0x429e98 */
  goto L_429e98;
L_429e96: /* 429e96: xor edx, edx */
  edx = 0;
L_429e98: /* 429e98: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_429e9b: /* 429e9b: test byte ptr [ebp - 8], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429e9f: je 0x429eb6 */
  if (zf) goto L_429eb6;
L_429ea1: /* 429ea1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 429ea3: jg 0x429eb6 */
  if ((!zf && sf == of)) goto L_429eb6;
L_429ea5: /* 429ea5: jl 0x429eab */
  if ((sf != of)) goto L_429eab;
L_429ea7: /* 429ea7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 429ea9: jae 0x429eb6 */
  if (!cf) goto L_429eb6;
L_429eab: /* 429eab: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 429ead: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 429eb0: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 429eb2: or byte ptr [ebp - 7], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
L_429eb6: /* 429eb6: test byte ptr [ebp - 7], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429eba: mov esi, eax */
  esi = eax;
/* 429ebc: mov ebx, edx */
  ebx = edx;
/* 429ebe: jne 0x429ec2 */
  if (!zf) goto L_429ec2;
L_429ec0: /* 429ec0: xor ebx, ebx */
  ebx = 0;
L_429ec2: /* 429ec2: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429ec6: jge 0x429ed1 */
  if ((sf == of)) goto L_429ed1;
L_429ec8: /* 429ec8: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
/* 429ecf: jmp 0x429ee2 */
  goto L_429ee2;
L_429ed1: /* 429ed1: and dword ptr [ebp - 8], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 429ed5: mov eax, 0x200 */
  eax = 0x200u;
/* 429eda: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429edd: jle 0x429ee2 */
  if ((zf || sf != of)) goto L_429ee2;
L_429edf: /* 429edf: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_429ee2: /* 429ee2: mov eax, esi */
  eax = esi;
/* 429ee4: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 429ee6: jne 0x429eec */
  if (!zf) goto L_429eec;
L_429ee8: /* 429ee8: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_429eec: /* 429eec: lea edi, [ebp - 0x259] */
  edi = (uint32_t)(ebp + 0xfffffda7u);
L_429ef2: /* 429ef2: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 429ef5: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 429ef8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 429efa: jg 0x429f02 */
  if ((!zf && sf == of)) goto L_429f02;
L_429efc: /* 429efc: mov eax, esi */
  eax = esi;
/* 429efe: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 429f00: je 0x429f26 */
  if (zf) goto L_429f26;
L_429f02: /* 429f02: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 429f05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 429f06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 429f07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429f08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429f09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 429f0a: call 0x40233d */
  esp -= 4; W32(esp, 0x429f0fu); SPILL(); f_40233d(); if (g_unwind) return; RELOAD();
/* 429f0f: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 429f12: cmp ecx, 0x39 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429f15: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 429f18: mov esi, eax */
  esi = eax;
/* 429f1a: mov ebx, edx */
  ebx = edx;
/* 429f1c: jle 0x429f21 */
  if ((zf || sf != of)) goto L_429f21;
L_429f1e: /* 429f1e: add ecx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_429f21: /* 429f21: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 429f23: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 429f24: jmp 0x429ef2 */
  goto L_429ef2;
L_429f26: /* 429f26: lea eax, [ebp - 0x259] */
  eax = (uint32_t)(ebp + 0xfffffda7u);
/* 429f2c: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 429f2e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 429f2f: test byte ptr [ebp - 7], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429f33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 429f36: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 429f39: je 0x429f4f */
  if (zf) goto L_429f4f;
L_429f3b: /* 429f3b: cmp byte ptr [edi], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 429f3e: jne 0x429f44 */
  if (!zf) goto L_429f44;
L_429f40: /* 429f40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 429f42: jne 0x429f4f */
  if (!zf) goto L_429f4f;
L_429f44: /* 429f44: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 429f45: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 429f48: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 429f4b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_429f4c: /* 429f4c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_429f4f: /* 429f4f: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429f53: jne 0x42a039 */
  if (!zf) goto L_42a039;
L_429f59: /* 429f59: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 429f5c: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429f5e: je 0x429f8a */
  if (zf) goto L_429f8a;
L_429f60: /* 429f60: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429f63: je 0x429f6d */
  if (zf) goto L_429f6d;
L_429f65: /* 429f65: mov word ptr [ebp - 0x24], 0x2d */
  W16((uint32_t)(ebp + 0xffffffdcu), 0x2du);
/* 429f6b: jmp 0x429f83 */
  goto L_429f83;
L_429f6d: /* 429f6d: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429f6f: je 0x429f79 */
  if (zf) goto L_429f79;
L_429f71: /* 429f71: mov word ptr [ebp - 0x24], 0x2b */
  W16((uint32_t)(ebp + 0xffffffdcu), 0x2bu);
/* 429f77: jmp 0x429f83 */
  goto L_429f83;
L_429f79: /* 429f79: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429f7b: je 0x429f8a */
  if (zf) goto L_429f8a;
L_429f7d: /* 429f7d: mov word ptr [ebp - 0x24], 0x20 */
  W16((uint32_t)(ebp + 0xffffffdcu), 0x20u);
L_429f83: /* 429f83: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_429f8a: /* 429f8a: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 429f8d: sub ebx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 429f90: sub ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 429f93: test byte ptr [ebp - 8], 0xc */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429f97: jne 0x429fa6 */
  if (!zf) goto L_429fa6;
L_429f99: /* 429f99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429f9a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 429f9c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 429f9f: call 0x429887 */
  esp -= 4; W32(esp, 0x429fa4u); SPILL(); f_429887(); if (g_unwind) return; RELOAD();
/* 429fa4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429fa5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429fa6: /* 429fa6: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 429fa9: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 429fac: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 429faf: call 0x4298a8 */
  esp -= 4; W32(esp, 0x429fb4u); SPILL(); f_4298a8(); if (g_unwind) return; RELOAD();
/* 429fb4: test byte ptr [ebp - 8], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429fb8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429fb9: je 0x429fce */
  if (zf) goto L_429fce;
L_429fbb: /* 429fbb: test byte ptr [ebp - 8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 429fbf: jne 0x429fce */
  if (!zf) goto L_429fce;
L_429fc1: /* 429fc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 429fc2: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 429fc4: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 429fc7: call 0x429887 */
  esp -= 4; W32(esp, 0x429fccu); SPILL(); f_429887(); if (g_unwind) return; RELOAD();
/* 429fcc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 429fcd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_429fce: /* 429fce: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 429fd2: jne 0x42a017 */
  if (!zf) goto L_42a017;
L_429fd4: /* 429fd4: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 429fd8: jle 0x42a017 */
  if ((zf || sf != of)) goto L_42a017;
L_429fda: /* 429fda: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 429fdd: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 429fe0: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_429fe3: /* 429fe3: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 429fe9: dec dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 429fec: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 429fef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 429ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 429ff1: call 0x402197 */
  esp -= 4; W32(esp, 0x429ff6u); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 429ff6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 429ff9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 429ffb: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 429ffe: jle 0x42a026 */
  if ((zf || sf != of)) goto L_42a026;
L_42a000: /* 42a000: push dword ptr [ebp - 0x48] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb8u)); esp -= 4; W32(esp, v); }
/* 42a003: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 42a006: call 0x429870 */
  esp -= 4; W32(esp, 0x42a00bu); SPILL(); f_429870(); if (g_unwind) return; RELOAD();
/* 42a00b: add edi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42a00e: cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a012: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a013: jg 0x429fe3 */
  if ((!zf && sf == of)) goto L_429fe3;
L_42a015: /* 42a015: jmp 0x42a026 */
  goto L_42a026;
L_42a017: /* 42a017: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 42a01a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 42a01d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 42a020: call 0x4298a8 */
  esp -= 4; W32(esp, 0x42a025u); SPILL(); f_4298a8(); if (g_unwind) return; RELOAD();
/* 42a025: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a026: /* 42a026: test byte ptr [ebp - 8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a02a: je 0x42a039 */
  if (zf) goto L_42a039;
L_42a02c: /* 42a02c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42a02d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42a02f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 42a032: call 0x429887 */
  esp -= 4; W32(esp, 0x42a037u); SPILL(); f_429887(); if (g_unwind) return; RELOAD();
/* 42a037: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a038: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a039: /* 42a039: cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a03d: je 0x42a04c */
  if (zf) goto L_42a04c;
L_42a03f: /* 42a03f: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 42a042: call 0x401156 */
  esp -= 4; W32(esp, 0x42a047u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42a047: and dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_42a04b: /* 42a04b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a04c: /* 42a04c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42a04f: mov bx, word ptr [ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 42a052: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a055: jne 0x429909 */
  if (!zf) goto L_429909;
L_42a05b: /* 42a05b: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42a05e: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42a061: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 42a064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42a065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42a066: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42a067: call 0x4013ab */
  esp -= 4; W32(esp, 0x42a06cu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42a06c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42a06d: ret  */
  esp += 4; SPILL(); return;
}

void f_42a08e(void) {
  LOAD_REGS();
L_42a08e: /* 42a08e: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 42a092: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a093: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42a097: call 0x4298d1 */
  esp -= 4; W32(esp, 0x42a09cu); SPILL(); f_4298d1(); if (g_unwind) return; RELOAD();
/* 42a09c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a09d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a09e: ret  */
  esp += 4; SPILL(); return;
}

void f_42a09f(void) {
  LOAD_REGS();
L_42a09f: /* 42a09f: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a0a4: jne 0x42a0bc */
  if (!zf) goto L_42a0bc;
L_42a0a6: /* 42a0a6: mov eax, esi */
  eax = esi;
/* 42a0a8: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a0ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a0ae: call 0x40152b */
  esp -= 4; W32(esp, 0x42a0b3u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a0b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a0b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a0b6: je 0x42a0bc */
  if (zf) goto L_42a0bc;
L_42a0b8: /* 42a0b8: mov ax, si */
  eax = (eax & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 42a0bb: ret  */
  esp += 4; SPILL(); return;
L_42a0bc: /* 42a0bc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42a0be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a0bf: call 0x401414 */
  esp -= 4; W32(esp, 0x42a0c4u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 42a0c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a0c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a0c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a0c8: lea eax, [esi - 0x27] */
  eax = (uint32_t)(esi + 0xffffffd9u);
/* 42a0cb: jne 0x42a0d0 */
  if (!zf) goto L_42a0d0;
L_42a0cd: /* 42a0cd: lea eax, [esi - 7] */
  eax = (uint32_t)(esi + 0xfffffff9u);
L_42a0d0: /* 42a0d0: ret  */
  esp += 4; SPILL(); return;
}

void f_42a0d1(void) {
  LOAD_REGS();
L_42a0d1: /* 42a0d1: cmp word ptr [esp + 4], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a0d7: jne 0x424778 */
  if (!zf) { SPILL(); f_424778(); return; }
L_42a0dd: /* 42a0dd: ret  */
  esp += 4; SPILL(); return;
}

void f_42a0de(void) {
  LOAD_REGS();
L_42a0de: /* 42a0de: push 0x31c */
  { uint32_t v = 0x31cu; esp -= 4; W32(esp, v); }
/* 42a0e3: push 0x440e10 */
  { uint32_t v = 0x440e10u; esp -= 4; W32(esp, v); }
/* 42a0e8: call 0x40101f */
  esp -= 4; W32(esp, 0x42a0edu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42a0ed: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 42a0f2: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42a0f5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42a0f8: xor eax, eax */
  eax = 0;
/* 42a0fa: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42a0fd: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42a100: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42a103: and byte ptr [ebp - 0x29], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42a106: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 42a109: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_42a10c: /* 42a10c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42a10f: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42a112: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a115: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a11b: /* 42a11b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 42a11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a11e: call 0x401414 */
  esp -= 4; W32(esp, 0x42a123u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 42a123: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a124: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a125: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a127: je 0x42a15f */
  if (zf) goto L_42a15f;
L_42a129: /* 42a129: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_42a12c: /* 42a12c: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a12f: call 0x42473a */
  esp -= 4; W32(esp, 0x42a134u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a134: mov esi, eax */
  esi = eax;
/* 42a136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a137: call 0x41750b */
  esp -= 4; W32(esp, 0x42a13cu); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42a13c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a13d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a13f: jne 0x42a12c */
  if (!zf) goto L_42a12c;
L_42a141: /* 42a141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a142: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a147u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a147: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a148: /* 42a148: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42a14c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42a14f: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42a152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a153: call 0x41750b */
  esp -= 4; W32(esp, 0x42a158u); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42a158: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a159: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a15b: jne 0x42a148 */
  if (!zf) goto L_42a148;
L_42a15d: /* 42a15d: jmp 0x42a10c */
  goto L_42a10c;
L_42a15f: /* 42a15f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42a162: cmp word ptr [esi], 0x25 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x25u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a166: jne 0x42ab05 */
  if (!zf) goto L_42ab05;
L_42a16c: /* 42a16c: xor eax, eax */
  eax = 0;
/* 42a16e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42a171: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42a174: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 42a177: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 42a17a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42a17d: and byte ptr [ebp - 0x49], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 42a180: and byte ptr [ebp - 0x4a], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 42a183: and byte ptr [ebp - 0x4b], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42a186: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 42a188: and byte ptr [ebp - 0x4c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42a18b: and byte ptr [ebp - 0x4d], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 42a18e: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
/* 42a192: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
L_42a195: /* 42a195: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a196: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a197: movzx edi, word ptr [esi] */
  edi = (uint32_t)(R16((uint32_t)(esi)));
/* 42a19a: test di, 0xff00 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a19f: jne 0x42a1c8 */
  if (!zf) goto L_42a1c8;
L_42a1a1: /* 42a1a1: mov eax, edi */
  eax = edi;
/* 42a1a3: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a1a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a1a9: call 0x40152b */
  esp -= 4; W32(esp, 0x42a1aeu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a1ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a1af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a1b1: je 0x42a1c8 */
  if (zf) goto L_42a1c8;
L_42a1b3: /* 42a1b3: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 42a1b6: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a1b9: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42a1bc: lea eax, [edi + eax*2 - 0x30] */
  eax = (uint32_t)(edi + eax*2 + 0xffffffd0u);
/* 42a1c0: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42a1c3: jmp 0x42a26b */
  goto L_42a26b;
L_42a1c8: /* 42a1c8: cmp edi, 0x4e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a1cb: jg 0x42a24a */
  if ((!zf && sf == of)) goto L_42a24a;
L_42a1cd: /* 42a1cd: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a1d3: /* 42a1d3: cmp edi, 0x2a */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1d6: je 0x42a245 */
  if (zf) goto L_42a245;
L_42a1d8: /* 42a1d8: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1db: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a1e1: /* 42a1e1: cmp edi, 0x49 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1e4: je 0x42a1f0 */
  if (zf) goto L_42a1f0;
L_42a1e6: /* 42a1e6: cmp edi, 0x4c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1e9: jne 0x42a259 */
  if (!zf) goto L_42a259;
L_42a1eb: /* 42a1eb: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42a1ee: jmp 0x42a26b */
  goto L_42a26b;
L_42a1f0: /* 42a1f0: mov cx, word ptr [esi + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 42a1f4: cmp cx, 0x36 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x36u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1f8: jne 0x42a212 */
  if (!zf) goto L_42a212;
L_42a1fa: /* 42a1fa: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 42a1fd: cmp word ptr [eax], 0x34 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x34u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a201: jne 0x42a212 */
  if (!zf) goto L_42a212;
L_42a203: /* 42a203: mov esi, eax */
  esi = eax;
/* 42a205: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 42a208: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42a20c: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42a210: jmp 0x42a26b */
  goto L_42a26b;
L_42a212: /* 42a212: cmp cx, 0x33 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x33u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a216: jne 0x42a225 */
  if (!zf) goto L_42a225;
L_42a218: /* 42a218: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 42a21b: cmp word ptr [eax], 0x32 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x32u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a21f: jne 0x42a225 */
  if (!zf) goto L_42a225;
L_42a221: /* 42a221: mov esi, eax */
  esi = eax;
/* 42a223: jmp 0x42a26b */
  goto L_42a26b;
L_42a225: /* 42a225: cmp cx, 0x64 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x64u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a229: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a22b: /* 42a22b: cmp cx, 0x69 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x69u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a22f: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a231: /* 42a231: cmp cx, 0x6f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x6fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a235: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a237: /* 42a237: cmp cx, 0x78 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a23b: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a23d: /* 42a23d: cmp cx, 0x58 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a241: jne 0x42a259 */
  if (!zf) goto L_42a259;
L_42a243: /* 42a243: jmp 0x42a26b */
  goto L_42a26b;
L_42a245: /* 42a245: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42a248: jmp 0x42a26b */
  goto L_42a26b;
L_42a24a: /* 42a24a: cmp edi, 0x68 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a24d: je 0x42a265 */
  if (zf) goto L_42a265;
L_42a24f: /* 42a24f: cmp edi, 0x6c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a252: je 0x42a25d */
  if (zf) goto L_42a25d;
L_42a254: /* 42a254: cmp edi, 0x77 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a257: je 0x42a260 */
  if (zf) goto L_42a260;
L_42a259: /* 42a259: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42a25b: jmp 0x42a26b */
  goto L_42a26b;
L_42a25d: /* 42a25d: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_42a260: /* 42a260: inc byte ptr [ebp - 0x4d] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 42a263: jmp 0x42a26b */
  goto L_42a26b;
L_42a265: /* 42a265: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42a268: dec byte ptr [ebp - 0x4d] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
L_42a26b: /* 42a26b: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a26d: je 0x42a195 */
  if (zf) goto L_42a195;
L_42a273: /* 42a273: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 42a276: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a27a: jne 0x42a28e */
  if (!zf) goto L_42a28e;
L_42a27c: /* 42a27c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42a27f: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 42a282: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42a285: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 42a288: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 42a28b: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
L_42a28e: /* 42a28e: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 42a290: cmp byte ptr [ebp - 0x4d], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a293: jne 0x42a2ae */
  if (!zf) goto L_42a2ae;
L_42a295: /* 42a295: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42a298: cmp ax, 0x53 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x53u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a29c: je 0x42a2aa */
  if (zf) goto L_42a2aa;
L_42a29e: /* 42a29e: cmp ax, 0x43 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x43u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2a2: je 0x42a2aa */
  if (zf) goto L_42a2aa;
L_42a2a4: /* 42a2a4: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
/* 42a2a8: jmp 0x42a2ae */
  goto L_42a2ae;
L_42a2aa: /* 42a2aa: or byte ptr [ebp - 0x4d], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
L_42a2ae: /* 42a2ae: movzx edi, word ptr [esi] */
  edi = (uint32_t)(R16((uint32_t)(esi)));
/* 42a2b1: or edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 42a2b4: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 42a2b7: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2ba: je 0x42a2eb */
  if (zf) goto L_42a2eb;
L_42a2bc: /* 42a2bc: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2bf: je 0x42a2e0 */
  if (zf) goto L_42a2e0;
L_42a2c1: /* 42a2c1: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2c4: je 0x42a2e0 */
  if (zf) goto L_42a2e0;
L_42a2c6: /* 42a2c6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a2c9: call 0x42473a */
  esp -= 4; W32(esp, 0x42a2ceu); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a2ce: mov esi, eax */
  esi = eax;
/* 42a2d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a2d1: call 0x41750b */
  esp -= 4; W32(esp, 0x42a2d6u); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42a2d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a2d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a2d9: jne 0x42a2c6 */
  if (!zf) goto L_42a2c6;
L_42a2db: /* 42a2db: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a2de: jmp 0x42a2eb */
  goto L_42a2eb;
L_42a2e0: /* 42a2e0: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a2e3: call 0x42473a */
  esp -= 4; W32(esp, 0x42a2e8u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a2e8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_42a2eb: /* 42a2eb: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42a2ee: xor edx, edx */
  edx = 0;
/* 42a2f0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2f2: je 0x42a301 */
  if (zf) goto L_42a301;
L_42a2f4: /* 42a2f4: cmp dword ptr [ebp - 0x48], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2f7: jne 0x42a301 */
  if (!zf) goto L_42a301;
L_42a2f9: /* 42a2f9: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42a2fc: jmp 0x42ab22 */
  goto L_42ab22;
L_42a301: /* 42a301: cmp edi, 0x6f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a304: jg 0x42a61f */
  if ((!zf && sf == of)) goto L_42a61f;
L_42a30a: /* 42a30a: je 0x42a8b8 */
  if (zf) goto L_42a8b8;
L_42a310: /* 42a310: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a313: je 0x42a567 */
  if (zf) goto L_42a567;
L_42a319: /* 42a319: cmp edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a31c: je 0x42a8b8 */
  if (zf) goto L_42a8b8;
L_42a322: /* 42a322: jle 0x42a649 */
  if ((zf || sf != of)) goto L_42a649;
L_42a328: /* 42a328: cmp edi, 0x67 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a32b: jle 0x42a369 */
  if ((zf || sf != of)) goto L_42a369;
L_42a32d: /* 42a32d: cmp edi, 0x69 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a330: je 0x42a34d */
  if (zf) goto L_42a34d;
L_42a332: /* 42a332: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a335: jne 0x42a649 */
  if (!zf) goto L_42a649;
L_42a33b: /* 42a33b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42a33e: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a342: je 0x42aad3 */
  if (zf) goto L_42aad3;
L_42a348: /* 42a348: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a34d: /* 42a34d: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 42a34f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42a350: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
L_42a353: /* 42a353: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42a356: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a35a: jne 0x42a7bc */
  if (!zf) goto L_42a7bc;
L_42a360: /* 42a360: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42a364: jmp 0x42a7c2 */
  goto L_42a7c2;
L_42a369: /* 42a369: lea edi, [ebp - 0x324] */
  edi = (uint32_t)(ebp + 0xfffffcdcu);
/* 42a36f: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42a372: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a376: jne 0x42a387 */
  if (!zf) goto L_42a387;
L_42a378: /* 42a378: mov word ptr [ebp - 0x324], si */
  W16((uint32_t)(ebp + 0xfffffcdcu), (esi & 0xffffu));
/* 42a37f: lea edi, [ebp - 0x322] */
  edi = (uint32_t)(ebp + 0xfffffcdeu);
/* 42a385: jmp 0x42a38d */
  goto L_42a38d;
L_42a387: /* 42a387: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a38b: jne 0x42a39d */
  if (!zf) goto L_42a39d;
L_42a38d: /* 42a38d: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a390: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a393: call 0x42473a */
  esp -= 4; W32(esp, 0x42a398u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a398: mov esi, eax */
  esi = eax;
/* 42a39a: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a39d: /* 42a39d: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a3a1: je 0x42a3ac */
  if (zf) goto L_42a3ac;
L_42a3a3: /* 42a3a3: cmp dword ptr [ebp - 0x48], 0x15d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a3aa: jle 0x42a3b3 */
  if ((zf || sf != of)) goto L_42a3b3;
L_42a3ac: /* 42a3ac: mov dword ptr [ebp - 0x48], 0x15d */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x15du);
L_42a3b3: /* 42a3b3: mov ebx, 0xff00 */
  ebx = 0xff00u;
/* 42a3b8: jmp 0x42a3eb */
  goto L_42a3eb;
L_42a3ba: /* 42a3ba: mov eax, esi */
  eax = esi;
/* 42a3bc: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a3c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a3c2: call 0x40152b */
  esp -= 4; W32(esp, 0x42a3c7u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a3c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a3c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a3ca: je 0x42a3f0 */
  if (zf) goto L_42a3f0;
L_42a3cc: /* 42a3cc: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a3cf: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a3d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a3d4: je 0x42a3f0 */
  if (zf) goto L_42a3f0;
L_42a3d6: /* 42a3d6: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42a3d9: mov word ptr [edi], si */
  W16((uint32_t)(edi), (esi & 0xffffu));
/* 42a3dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a3dd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a3de: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a3e1: call 0x42473a */
  esp -= 4; W32(esp, 0x42a3e6u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a3e6: mov esi, eax */
  esi = eax;
/* 42a3e8: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a3eb: /* 42a3eb: test bx, si */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a3ee: je 0x42a3ba */
  if (zf) goto L_42a3ba;
L_42a3f0: /* 42a3f0: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 42a3f6: push 0x44a9ac */
  { uint32_t v = 0x44a9acu; esp -= 4; W32(esp, v); }
/* 42a3fb: lea eax, [ebp - 0x328] */
  eax = (uint32_t)(ebp + 0xfffffcd8u);
/* 42a401: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a402: call 0x402197 */
  esp -= 4; W32(esp, 0x42a407u); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 42a407: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42a40a: cmp word ptr [ebp - 0x328], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffcd8u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a411: jne 0x42a46b */
  if (!zf) goto L_42a46b;
L_42a413: /* 42a413: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a416: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a419: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a41b: je 0x42a46b */
  if (zf) goto L_42a46b;
L_42a41d: /* 42a41d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a420: call 0x42473a */
  esp -= 4; W32(esp, 0x42a425u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a425: mov esi, eax */
  esi = eax;
/* 42a427: mov ax, word ptr [ebp - 0x328] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffcd8u))) & 0xffffu);
/* 42a42e: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 42a431: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a432: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a433: jmp 0x42a463 */
  goto L_42a463;
L_42a435: /* 42a435: mov eax, esi */
  eax = esi;
/* 42a437: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a43c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a43d: call 0x40152b */
  esp -= 4; W32(esp, 0x42a442u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a442: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a445: je 0x42a46b */
  if (zf) goto L_42a46b;
L_42a447: /* 42a447: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a44a: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a44d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a44f: je 0x42a46b */
  if (zf) goto L_42a46b;
L_42a451: /* 42a451: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42a454: mov word ptr [edi], si */
  W16((uint32_t)(edi), (esi & 0xffffu));
/* 42a457: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a458: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a459: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a45c: call 0x42473a */
  esp -= 4; W32(esp, 0x42a461u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a461: mov esi, eax */
  esi = eax;
L_42a463: /* 42a463: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a466: test bx, si */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a469: je 0x42a435 */
  if (zf) goto L_42a435;
L_42a46b: /* 42a46b: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a46f: je 0x42a4f7 */
  if (zf) goto L_42a4f7;
L_42a475: /* 42a475: cmp si, 0x65 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x65u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a479: je 0x42a481 */
  if (zf) goto L_42a481;
L_42a47b: /* 42a47b: cmp si, 0x45 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x45u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a47f: jne 0x42a4f7 */
  if (!zf) goto L_42a4f7;
L_42a481: /* 42a481: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a484: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a487: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a489: je 0x42a4f7 */
  if (zf) goto L_42a4f7;
L_42a48b: /* 42a48b: mov word ptr [edi], 0x65 */
  W16((uint32_t)(edi), 0x65u);
/* 42a490: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a491: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a492: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a495: call 0x42473a */
  esp -= 4; W32(esp, 0x42a49au); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a49a: mov esi, eax */
  esi = eax;
/* 42a49c: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a49f: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a4a3: jne 0x42a4ac */
  if (!zf) goto L_42a4ac;
L_42a4a5: /* 42a4a5: mov word ptr [edi], si */
  W16((uint32_t)(edi), (esi & 0xffffu));
/* 42a4a8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a4a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a4aa: jmp 0x42a4b2 */
  goto L_42a4b2;
L_42a4ac: /* 42a4ac: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a4b0: jne 0x42a4f2 */
  if (!zf) goto L_42a4f2;
L_42a4b2: /* 42a4b2: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a4b5: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a4b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a4ba: jne 0x42a4e5 */
  if (!zf) goto L_42a4e5;
L_42a4bc: /* 42a4bc: and dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a4bf: jmp 0x42a4f2 */
  goto L_42a4f2;
L_42a4c1: /* 42a4c1: mov eax, esi */
  eax = esi;
/* 42a4c3: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a4c9: call 0x40152b */
  esp -= 4; W32(esp, 0x42a4ceu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a4ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a4cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a4d1: je 0x42a4f7 */
  if (zf) goto L_42a4f7;
L_42a4d3: /* 42a4d3: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a4d6: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a4d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a4db: je 0x42a4f7 */
  if (zf) goto L_42a4f7;
L_42a4dd: /* 42a4dd: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42a4e0: mov word ptr [edi], si */
  W16((uint32_t)(edi), (esi & 0xffffu));
/* 42a4e3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a4e4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_42a4e5: /* 42a4e5: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a4e8: call 0x42473a */
  esp -= 4; W32(esp, 0x42a4edu); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a4ed: mov esi, eax */
  esi = eax;
/* 42a4ef: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a4f2: /* 42a4f2: test bx, si */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a4f5: je 0x42a4c1 */
  if (zf) goto L_42a4c1;
L_42a4f7: /* 42a4f7: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a4fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a4fb: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a500u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a500: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a501: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a505: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a50b: /* 42a50b: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a50f: jne 0x42aaf9 */
  if (!zf) goto L_42aaf9;
L_42a515: /* 42a515: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42a518: and word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(edi), r);
  }
/* 42a51c: lea eax, [ebp - 0x324] */
  eax = (uint32_t)(ebp + 0xfffffcdcu);
/* 42a522: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 42a524: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 42a526: lea esi, [edi + edi + 2] */
  esi = (uint32_t)(edi + edi + 0x2u);
/* 42a52a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a52b: call 0x4010eb */
  esp -= 4; W32(esp, 0x42a530u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42a530: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a531: mov edi, eax */
  edi = eax;
/* 42a533: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a535: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a53b: /* 42a53b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a53c: lea eax, [ebp - 0x324] */
  eax = (uint32_t)(ebp + 0xfffffcdcu);
/* 42a542: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a543: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42a544: call 0x417e01 */
  esp -= 4; W32(esp, 0x42a549u); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 42a549: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42a54a: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42a54d: movsx eax, byte ptr [ebp - 0x4e] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
/* 42a551: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42a552: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a553: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x42a559u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42a559: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42a55a: call 0x401156 */
  esp -= 4; W32(esp, 0x42a55fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42a55f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42a562: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a567: /* 42a567: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a569: jne 0x42a575 */
  if (!zf) goto L_42a575;
L_42a56b: /* 42a56b: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42a572: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_42a575: /* 42a575: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42a579: jle 0x42a57f */
  if ((zf || sf != of)) goto L_42a57f;
L_42a57b: /* 42a57b: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
L_42a57f: /* 42a57f: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42a582: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a585: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42a588: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a58du); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a58d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42a590: /* 42a590: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a591: /* 42a591: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a595: je 0x42a5a5 */
  if (zf) goto L_42a5a5;
L_42a597: /* 42a597: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a59a: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a59d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a59f: je 0x42a87b */
  if (zf) goto L_42a87b;
L_42a5a5: /* 42a5a5: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a5a8: call 0x42473a */
  esp -= 4; W32(esp, 0x42a5adu); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a5ad: mov edx, eax */
  edx = eax;
/* 42a5af: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 42a5b2: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a5b5: je 0x42a5fc */
  if (zf) goto L_42a5fc;
L_42a5b7: /* 42a5b7: cmp edi, 0x73 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a5ba: jne 0x42a5ce */
  if (!zf) goto L_42a5ce;
L_42a5bc: /* 42a5bc: cmp dx, 9 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42a5c0: jb 0x42a5c8 */
  if (cf) goto L_42a5c8;
L_42a5c2: /* 42a5c2: cmp dx, 0xd */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42a5c6: jbe 0x42a5ce */
  if ((cf | zf)) goto L_42a5ce;
L_42a5c8: /* 42a5c8: cmp dx, 0x20 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a5cc: jne 0x42a5fc */
  if (!zf) goto L_42a5fc;
L_42a5ce: /* 42a5ce: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a5d1: jne 0x42a871 */
  if (!zf) goto L_42a871;
L_42a5d7: /* 42a5d7: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* 42a5da: mov ecx, eax */
  ecx = eax;
/* 42a5dc: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42a5df: xor ebx, ebx */
  ebx = 0;
  cf = 0;
/* 42a5e1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  ebx = r;
  }
/* 42a5e2: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 42a5e4: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42a5e7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42a5ea: movsx eax, byte ptr [eax + ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + ecx)));
/* 42a5ee: movsx ecx, byte ptr [ebp - 0x49] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42a5f2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42a5f4: test eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a5f6: je 0x42a871 */
  if (zf) goto L_42a871;
L_42a5fc: /* 42a5fc: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a600: jne 0x42a86a */
  if (!zf) goto L_42a86a;
L_42a606: /* 42a606: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a60a: je 0x42a858 */
  if (zf) goto L_42a858;
L_42a610: /* 42a610: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42a613: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 42a616: add dword ptr [ebp - 0x64], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff9cu), r);
  }
/* 42a61a: jmp 0x42a591 */
  goto L_42a591;
L_42a61f: /* 42a61f: mov eax, edi */
  eax = edi;
/* 42a621: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42a624: je 0x42a8b4 */
  if (zf) goto L_42a8b4;
L_42a62a: /* 42a62a: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42a62d: je 0x42a575 */
  if (zf) goto L_42a575;
L_42a633: /* 42a633: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42a634: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42a635: je 0x42a8b8 */
  if (zf) goto L_42a8b8;
L_42a63b: /* 42a63b: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42a63e: je 0x42a353 */
  if (zf) goto L_42a353;
L_42a644: /* 42a644: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42a647: je 0x42a670 */
  if (zf) goto L_42a670;
L_42a649: /* 42a649: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42a64c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42a64f: cmp word ptr [ecx], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a652: jne 0x42ab21 */
  if (!zf) goto L_42ab21;
L_42a658: /* 42a658: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42a65b: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a65f: jne 0x42aaf9 */
  if (!zf) goto L_42aaf9;
L_42a665: /* 42a665: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 42a668: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 42a66b: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a670: /* 42a670: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42a674: jle 0x42a67a */
  if ((zf || sf != of)) goto L_42a67a;
L_42a676: /* 42a676: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
L_42a67a: /* 42a67a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42a67d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a67e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a67f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 42a682: mov dword ptr [ebp - 0x32c], esi */
  W32((uint32_t)(ebp + 0xfffffcd4u), esi);
/* 42a688: cmp word ptr [esi], 0x5e */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x5eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a68c: jne 0x42a69b */
  if (!zf) goto L_42a69b;
L_42a68e: /* 42a68e: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 42a691: mov dword ptr [ebp - 0x32c], esi */
  W32((uint32_t)(ebp + 0xfffffcd4u), esi);
/* 42a697: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_42a69b: /* 42a69b: cmp dword ptr [ebp - 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a69e: jne 0x42a6f6 */
  if (!zf) goto L_42a6f6;
L_42a6a0: /* 42a6a0: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 42a6a3: mov eax, 0x2000 */
  eax = 0x2000u;
/* 42a6a8: call 0x4014ee */
  esp -= 4; W32(esp, 0x42a6adu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42a6ad: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42a6b0: mov eax, esp */
  eax = esp;
/* 42a6b2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42a6b5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42a6b9: jmp 0x42a6f6 */
  goto L_42a6f6;
L_42a6f6: /* 42a6f6: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 42a6fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42a6fd: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42a700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42a701: call 0x4010fd */
  esp -= 4; W32(esp, 0x42a706u); SPILL(); hle_memset(); RELOAD();
/* 42a706: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42a709: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a70c: jne 0x42a71f */
  if (!zf) goto L_42a71f;
L_42a70e: /* 42a70e: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 42a710: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 42a711: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a714: jne 0x42a71f */
  if (!zf) goto L_42a71f;
L_42a716: /* 42a716: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42a719: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a71a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a71b: mov byte ptr [ebx + 0xb], 0x20 */
  W8((uint32_t)(ebx + 0xbu), 0x20u);
L_42a71f: /* 42a71f: xor eax, eax */
  eax = 0;
/* 42a721: jmp 0x42a798 */
  goto L_42a798;
L_42a723: /* 42a723: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a724: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a725: cmp ax, 0x2d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a729: jne 0x42a77f */
  if (!zf) goto L_42a77f;
L_42a72b: /* 42a72b: cmp word ptr [ebp - 0x3c], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a730: je 0x42a77f */
  if (zf) goto L_42a77f;
L_42a732: /* 42a732: xor ecx, ecx */
  ecx = 0;
/* 42a734: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42a737: cmp cx, 0x5d */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a73b: je 0x42a77f */
  if (zf) goto L_42a77f;
L_42a73d: /* 42a73d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a73e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a73f: cmp word ptr [ebp - 0x3c], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42a743: jae 0x42a749 */
  if (!cf) goto L_42a749;
L_42a745: /* 42a745: mov eax, ecx */
  eax = ecx;
/* 42a747: jmp 0x42a74f */
  goto L_42a74f;
L_42a749: /* 42a749: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 42a74c: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
L_42a74f: /* 42a74f: cmp word ptr [ebp - 0x3c], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42a753: ja 0x42a779 */
  if ((!cf && !zf)) goto L_42a779;
L_42a755: /* 42a755: movzx edi, word ptr [ebp - 0x3c] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* 42a759: sub eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42a75c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42a75d: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
L_42a760: /* 42a760: mov eax, edi */
  eax = edi;
/* 42a762: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42a765: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42a768: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42a76a: mov ecx, edi */
  ecx = edi;
/* 42a76c: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42a76f: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42a771: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42a773: or byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 42a775: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a776: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 42a777: jne 0x42a760 */
  if (!zf) goto L_42a760;
L_42a779: /* 42a779: and dword ptr [ebp - 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc4u), r);
  }
/* 42a77d: jmp 0x42a798 */
  goto L_42a798;
L_42a77f: /* 42a77f: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42a782: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 42a785: mov eax, ecx */
  eax = ecx;
/* 42a787: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42a78a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42a78d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42a78f: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42a792: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42a794: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42a796: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_42a798: /* 42a798: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42a79b: cmp ax, 0x5d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a79f: jne 0x42a723 */
  if (!zf) goto L_42a723;
L_42a7a1: /* 42a7a1: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a7a4: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a7aa: /* 42a7aa: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7ae: jne 0x42a57f */
  if (!zf) goto L_42a57f;
L_42a7b4: /* 42a7b4: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 42a7b7: jmp 0x42a57f */
  goto L_42a57f;
L_42a7bc: /* 42a7bc: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7c0: jne 0x42a7dc */
  if (!zf) goto L_42a7dc;
L_42a7c2: /* 42a7c2: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a7c5: jne 0x42a7cf */
  if (!zf) goto L_42a7cf;
L_42a7c7: /* 42a7c7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7c9: je 0x42a7cf */
  if (zf) goto L_42a7cf;
L_42a7cb: /* 42a7cb: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42a7cd: jmp 0x42a7dc */
  goto L_42a7dc;
L_42a7cf: /* 42a7cf: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a7d2: call 0x42473a */
  esp -= 4; W32(esp, 0x42a7d7u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a7d7: mov esi, eax */
  esi = eax;
/* 42a7d9: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a7dc: /* 42a7dc: cmp si, 0x30 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7e0: jne 0x42a8e7 */
  if (!zf) goto L_42a8e7;
L_42a7e6: /* 42a7e6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a7e9: call 0x42473a */
  esp -= 4; W32(esp, 0x42a7eeu); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a7ee: mov esi, eax */
  esi = eax;
/* 42a7f0: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a7f3: cmp si, 0x78 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7f7: je 0x42a835 */
  if (zf) goto L_42a835;
L_42a7f9: /* 42a7f9: cmp si, 0x58 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7fd: je 0x42a835 */
  if (zf) goto L_42a835;
L_42a7ff: /* 42a7ff: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 42a806: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a809: je 0x42a823 */
  if (zf) goto L_42a823;
L_42a80b: /* 42a80b: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a80f: je 0x42a818 */
  if (zf) goto L_42a818;
L_42a811: /* 42a811: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a814: jne 0x42a818 */
  if (!zf) goto L_42a818;
L_42a816: /* 42a816: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_42a818: /* 42a818: push 0x6f */
  { uint32_t v = 0x6fu; esp -= 4; W32(esp, v); }
L_42a81a: /* 42a81a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42a81b: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 42a81e: jmp 0x42a8e7 */
  goto L_42a8e7;
L_42a823: /* 42a823: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a827: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a82cu); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a82c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a82d: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42a82f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42a830: jmp 0x42a8e4 */
  goto L_42a8e4;
L_42a835: /* 42a835: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a838: call 0x42473a */
  esp -= 4; W32(esp, 0x42a83du); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a83d: mov esi, eax */
  esi = eax;
/* 42a83f: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a842: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a846: je 0x42a854 */
  if (zf) goto L_42a854;
L_42a848: /* 42a848: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a84c: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a850: jge 0x42a854 */
  if ((sf == of)) goto L_42a854;
L_42a852: /* 42a852: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_42a854: /* 42a854: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 42a856: jmp 0x42a81a */
  goto L_42a81a;
L_42a858: /* 42a858: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42a859: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42a85c: call 0x402a4e */
  esp -= 4; W32(esp, 0x42a861u); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 42a861: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a862: add dword ptr [ebp - 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff9cu), r);
  }
/* 42a865: jmp 0x42a590 */
  goto L_42a590;
L_42a86a: /* 42a86a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a86b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a86c: jmp 0x42a591 */
  goto L_42a591;
L_42a871: /* 42a871: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42a875: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a87au); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a87a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a87b: /* 42a87b: cmp esi, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a87e: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a884: /* 42a884: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a888: jne 0x42aaf9 */
  if (!zf) goto L_42aaf9;
L_42a88e: /* 42a88e: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42a891: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a894: je 0x42aaf9 */
  if (zf) goto L_42aaf9;
L_42a89a: /* 42a89a: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42a89d: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8a1: je 0x42a8ac */
  if (zf) goto L_42a8ac;
L_42a8a3: /* 42a8a3: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 42a8a7: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a8ac: /* 42a8ac: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42a8af: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a8b4: /* 42a8b4: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
L_42a8b8: /* 42a8b8: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42a8bb: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8bf: jne 0x42a8c7 */
  if (!zf) goto L_42a8c7;
L_42a8c1: /* 42a8c1: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42a8c5: jmp 0x42a8cd */
  goto L_42a8cd;
L_42a8c7: /* 42a8c7: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8cb: jne 0x42a8e7 */
  if (!zf) goto L_42a8e7;
L_42a8cd: /* 42a8cd: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a8d0: jne 0x42a8da */
  if (!zf) goto L_42a8da;
L_42a8d2: /* 42a8d2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8d4: je 0x42a8da */
  if (zf) goto L_42a8da;
L_42a8d6: /* 42a8d6: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42a8d8: jmp 0x42a8e7 */
  goto L_42a8e7;
L_42a8da: /* 42a8da: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a8dd: call 0x42473a */
  esp -= 4; W32(esp, 0x42a8e2u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a8e2: mov esi, eax */
  esi = eax;
L_42a8e4: /* 42a8e4: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a8e7: /* 42a8e7: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8eb: je 0x42a9f5 */
  if (zf) goto L_42a9f5;
L_42a8f1: /* 42a8f1: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a8f3: jne 0x42a9d3 */
  if (!zf) goto L_42a9d3;
L_42a8f9: /* 42a8f9: mov edi, 0xff */
  edi = 0xffu;
L_42a8fe: /* 42a8fe: cmp dword ptr [ebp - 0x68], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a902: je 0x42a958 */
  if (zf) goto L_42a958;
L_42a904: /* 42a904: cmp dword ptr [ebp - 0x68], 0x70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a908: je 0x42a958 */
  if (zf) goto L_42a958;
L_42a90a: /* 42a90a: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a90f: jne 0x42a98a */
  if (!zf) goto L_42a98a;
L_42a911: /* 42a911: mov eax, esi */
  eax = esi;
/* 42a913: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a915: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a916: call 0x40152b */
  esp -= 4; W32(esp, 0x42a91bu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a91b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a91c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a91e: je 0x42a98a */
  if (zf) goto L_42a98a;
L_42a920: /* 42a920: cmp dword ptr [ebp - 0x68], 0x6f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a924: jne 0x42a941 */
  if (!zf) goto L_42a941;
L_42a926: /* 42a926: cmp si, 0x38 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x38u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 42a92a: jae 0x42a98a */
  if (!cf) goto L_42a98a;
L_42a92c: /* 42a92c: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42a92f: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42a932: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42a936: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42a939: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42a93c: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42a93f: jmp 0x42a98c */
  goto L_42a98c;
L_42a941: /* 42a941: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42a943: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42a945: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 42a948: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 42a94b: call 0x40518c */
  esp -= 4; W32(esp, 0x42a950u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42a950: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42a953: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 42a956: jmp 0x42a98c */
  goto L_42a98c;
L_42a958: /* 42a958: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a95d: jne 0x42a98a */
  if (!zf) goto L_42a98a;
L_42a95f: /* 42a95f: mov eax, esi */
  eax = esi;
/* 42a961: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a964: call 0x415449 */
  esp -= 4; W32(esp, 0x42a969u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42a969: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a96a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42a96c: je 0x42a98a */
  if (zf) goto L_42a98a;
L_42a96e: /* 42a96e: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42a971: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42a974: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42a978: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42a97b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42a97e: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42a981: call 0x42a09f */
  esp -= 4; W32(esp, 0x42a986u); SPILL(); f_42a09f(); if (g_unwind) return; RELOAD();
/* 42a986: mov esi, eax */
  esi = eax;
/* 42a988: jmp 0x42a98c */
  goto L_42a98c;
L_42a98a: /* 42a98a: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_42a98c: /* 42a98c: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a98e: jne 0x42a9bb */
  if (!zf) goto L_42a9bb;
L_42a990: /* 42a990: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42a993: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 42a996: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42a999: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 42a99a: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42a99d: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42a9a0: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a9a4: je 0x42a9af */
  if (zf) goto L_42a9af;
L_42a9a6: /* 42a9a6: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a9a9: jne 0x42a9af */
  if (!zf) goto L_42a9af;
L_42a9ab: /* 42a9ab: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42a9ad: jmp 0x42a9c5 */
  goto L_42a9c5;
L_42a9af: /* 42a9af: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a9b2: call 0x42473a */
  esp -= 4; W32(esp, 0x42a9b7u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a9b7: mov esi, eax */
  esi = eax;
/* 42a9b9: jmp 0x42a9c5 */
  goto L_42a9c5;
L_42a9bb: /* 42a9bb: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a9be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a9bf: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a9c4u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a9c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a9c5: /* 42a9c5: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a9c7: je 0x42a8fe */
  if (zf) goto L_42a8fe;
L_42a9cd: /* 42a9cd: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a9d0: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42a9d3: /* 42a9d3: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a9d7: je 0x42aab8 */
  if (zf) goto L_42aab8;
L_42a9dd: /* 42a9dd: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42a9e0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 42a9e2: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42a9e5: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 42a9e8: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 42a9ea: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42a9ed: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42a9f0: jmp 0x42aab8 */
  goto L_42aab8;
L_42a9f5: /* 42a9f5: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a9f7: jne 0x42aaaf */
  if (!zf) goto L_42aaaf;
L_42a9fd: /* 42a9fd: mov edi, 0xff */
  edi = 0xffu;
L_42aa02: /* 42aa02: cmp dword ptr [ebp - 0x68], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aa06: je 0x42aa43 */
  if (zf) goto L_42aa43;
L_42aa08: /* 42aa08: cmp dword ptr [ebp - 0x68], 0x70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aa0c: je 0x42aa43 */
  if (zf) goto L_42aa43;
L_42aa0e: /* 42aa0e: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa13: jne 0x42aa66 */
  if (!zf) goto L_42aa66;
L_42aa15: /* 42aa15: mov eax, esi */
  eax = esi;
/* 42aa17: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42aa19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42aa1a: call 0x40152b */
  esp -= 4; W32(esp, 0x42aa1fu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42aa1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42aa20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa22: je 0x42aa66 */
  if (zf) goto L_42aa66;
L_42aa24: /* 42aa24: cmp dword ptr [ebp - 0x68], 0x6f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aa28: jne 0x42aa36 */
  if (!zf) goto L_42aa36;
L_42aa2a: /* 42aa2a: cmp si, 0x38 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x38u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42aa2e: jae 0x42aa66 */
  if (!cf) goto L_42aa66;
L_42aa30: /* 42aa30: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42aa34: jmp 0x42aa68 */
  goto L_42aa68;
L_42aa36: /* 42aa36: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42aa39: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42aa3c: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42aa3e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42aa41: jmp 0x42aa68 */
  goto L_42aa68;
L_42aa43: /* 42aa43: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa48: jne 0x42aa66 */
  if (!zf) goto L_42aa66;
L_42aa4a: /* 42aa4a: mov eax, esi */
  eax = esi;
/* 42aa4c: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42aa4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42aa4f: call 0x415449 */
  esp -= 4; W32(esp, 0x42aa54u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42aa54: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42aa55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa57: je 0x42aa66 */
  if (zf) goto L_42aa66;
L_42aa59: /* 42aa59: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42aa5d: call 0x42a09f */
  esp -= 4; W32(esp, 0x42aa62u); SPILL(); f_42a09f(); if (g_unwind) return; RELOAD();
/* 42aa62: mov esi, eax */
  esi = eax;
/* 42aa64: jmp 0x42aa68 */
  goto L_42aa68;
L_42aa66: /* 42aa66: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_42aa68: /* 42aa68: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa6a: jne 0x42aa97 */
  if (!zf) goto L_42aa97;
L_42aa6c: /* 42aa6c: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42aa6f: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 42aa72: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42aa75: lea eax, [ecx + eax - 0x30] */
  eax = (uint32_t)(ecx + eax + 0xffffffd0u);
/* 42aa79: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42aa7c: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aa80: je 0x42aa8b */
  if (zf) goto L_42aa8b;
L_42aa82: /* 42aa82: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42aa85: jne 0x42aa8b */
  if (!zf) goto L_42aa8b;
L_42aa87: /* 42aa87: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42aa89: jmp 0x42aaa1 */
  goto L_42aaa1;
L_42aa8b: /* 42aa8b: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42aa8e: call 0x42473a */
  esp -= 4; W32(esp, 0x42aa93u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42aa93: mov esi, eax */
  esi = eax;
/* 42aa95: jmp 0x42aaa1 */
  goto L_42aaa1;
L_42aa97: /* 42aa97: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42aa9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42aa9b: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42aaa0u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42aaa0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42aaa1: /* 42aaa1: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42aaa3: je 0x42aa02 */
  if (zf) goto L_42aa02;
L_42aaa9: /* 42aaa9: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42aaac: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42aaaf: /* 42aaaf: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42aab3: je 0x42aab8 */
  if (zf) goto L_42aab8;
L_42aab5: /* 42aab5: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_42aab8: /* 42aab8: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aabb: jne 0x42aac1 */
  if (!zf) goto L_42aac1;
L_42aabd: /* 42aabd: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_42aac1: /* 42aac1: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aac5: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42aac7: /* 42aac7: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42aacb: jne 0x42aaf9 */
  if (!zf) goto L_42aaf9;
L_42aacd: /* 42aacd: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42aad0: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_42aad3: /* 42aad3: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aad7: je 0x42aae9 */
  if (zf) goto L_42aae9;
L_42aad9: /* 42aad9: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42aadc: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42aadf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 42aae1: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42aae4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 42aae7: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42aae9: /* 42aae9: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42aaec: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42aaf0: je 0x42aaf6 */
  if (zf) goto L_42aaf6;
L_42aaf2: /* 42aaf2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 42aaf4: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42aaf6: /* 42aaf6: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
L_42aaf9: /* 42aaf9: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42aafc: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42ab00: jmp 0x42a10c */
  goto L_42a10c;
L_42ab05: /* 42ab05: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ab08: call 0x42473a */
  esp -= 4; W32(esp, 0x42ab0du); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42ab0d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42ab10: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42ab13: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ab14: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ab15: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 42ab18: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ab1b: je 0x42a10c */
  if (zf) goto L_42a10c;
L_42ab21: /* 42ab21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_42ab22: /* 42ab22: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42ab27u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42ab27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ab28: /* 42ab28: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ab2c: jne 0x42ab37 */
  if (!zf) goto L_42ab37;
L_42ab2e: /* 42ab2e: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42ab31: call 0x401156 */
  esp -= 4; W32(esp, 0x42ab36u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42ab36: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ab37: /* 42ab37: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42ab3a: lea esp, [ebp - 0x338] */
  esp = (uint32_t)(ebp + 0xfffffcc8u);
/* 42ab40: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42ab43: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42ab46: call 0x4013ab */
  esp -= 4; W32(esp, 0x42ab4bu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42ab4b: call 0x40105a */
  esp -= 4; W32(esp, 0x42ab50u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42ab50: ret  */
  esp += 4; SPILL(); return;
}

void f_42a6bb(void) {
  LOAD_REGS();
L_42a6bb: /* 42a6bb: xor eax, eax */
  eax = 0;
/* 42a6bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42a6be: ret  */
  esp += 4; SPILL(); return;
}

void f_42a6bf(void) {
  LOAD_REGS();
  goto L_42a6bf;
L_42a10c: /* 42a10c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42a10f: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42a112: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a115: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a11b: /* 42a11b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 42a11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a11e: call 0x401414 */
  esp -= 4; W32(esp, 0x42a123u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 42a123: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a124: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a125: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a127: je 0x42a15f */
  if (zf) goto L_42a15f;
L_42a129: /* 42a129: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_42a12c: /* 42a12c: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a12f: call 0x42473a */
  esp -= 4; W32(esp, 0x42a134u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a134: mov esi, eax */
  esi = eax;
/* 42a136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a137: call 0x41750b */
  esp -= 4; W32(esp, 0x42a13cu); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42a13c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a13d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a13f: jne 0x42a12c */
  if (!zf) goto L_42a12c;
L_42a141: /* 42a141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a142: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a147u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a147: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a148: /* 42a148: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42a14c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42a14f: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42a152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a153: call 0x41750b */
  esp -= 4; W32(esp, 0x42a158u); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42a158: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a159: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a15b: jne 0x42a148 */
  if (!zf) goto L_42a148;
L_42a15d: /* 42a15d: jmp 0x42a10c */
  goto L_42a10c;
L_42a15f: /* 42a15f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42a162: cmp word ptr [esi], 0x25 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x25u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a166: jne 0x42ab05 */
  if (!zf) goto L_42ab05;
L_42a16c: /* 42a16c: xor eax, eax */
  eax = 0;
/* 42a16e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42a171: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42a174: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 42a177: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 42a17a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42a17d: and byte ptr [ebp - 0x49], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
/* 42a180: and byte ptr [ebp - 0x4a], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb6u), r);
  }
/* 42a183: and byte ptr [ebp - 0x4b], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42a186: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 42a188: and byte ptr [ebp - 0x4c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb4u), r);
  }
/* 42a18b: and byte ptr [ebp - 0x4d], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 42a18e: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
/* 42a192: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
L_42a195: /* 42a195: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a196: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a197: movzx edi, word ptr [esi] */
  edi = (uint32_t)(R16((uint32_t)(esi)));
/* 42a19a: test di, 0xff00 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a19f: jne 0x42a1c8 */
  if (!zf) goto L_42a1c8;
L_42a1a1: /* 42a1a1: mov eax, edi */
  eax = edi;
/* 42a1a3: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a1a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a1a9: call 0x40152b */
  esp -= 4; W32(esp, 0x42a1aeu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a1ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a1af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a1b1: je 0x42a1c8 */
  if (zf) goto L_42a1c8;
L_42a1b3: /* 42a1b3: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 42a1b6: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a1b9: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42a1bc: lea eax, [edi + eax*2 - 0x30] */
  eax = (uint32_t)(edi + eax*2 + 0xffffffd0u);
/* 42a1c0: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42a1c3: jmp 0x42a26b */
  goto L_42a26b;
L_42a1c8: /* 42a1c8: cmp edi, 0x4e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a1cb: jg 0x42a24a */
  if ((!zf && sf == of)) goto L_42a24a;
L_42a1cd: /* 42a1cd: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a1d3: /* 42a1d3: cmp edi, 0x2a */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1d6: je 0x42a245 */
  if (zf) goto L_42a245;
L_42a1d8: /* 42a1d8: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1db: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a1e1: /* 42a1e1: cmp edi, 0x49 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1e4: je 0x42a1f0 */
  if (zf) goto L_42a1f0;
L_42a1e6: /* 42a1e6: cmp edi, 0x4c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1e9: jne 0x42a259 */
  if (!zf) goto L_42a259;
L_42a1eb: /* 42a1eb: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42a1ee: jmp 0x42a26b */
  goto L_42a26b;
L_42a1f0: /* 42a1f0: mov cx, word ptr [esi + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 42a1f4: cmp cx, 0x36 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x36u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a1f8: jne 0x42a212 */
  if (!zf) goto L_42a212;
L_42a1fa: /* 42a1fa: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 42a1fd: cmp word ptr [eax], 0x34 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x34u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a201: jne 0x42a212 */
  if (!zf) goto L_42a212;
L_42a203: /* 42a203: mov esi, eax */
  esi = eax;
/* 42a205: inc dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 42a208: and dword ptr [ebp - 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42a20c: and dword ptr [ebp - 0x58], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42a210: jmp 0x42a26b */
  goto L_42a26b;
L_42a212: /* 42a212: cmp cx, 0x33 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x33u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a216: jne 0x42a225 */
  if (!zf) goto L_42a225;
L_42a218: /* 42a218: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 42a21b: cmp word ptr [eax], 0x32 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x32u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a21f: jne 0x42a225 */
  if (!zf) goto L_42a225;
L_42a221: /* 42a221: mov esi, eax */
  esi = eax;
/* 42a223: jmp 0x42a26b */
  goto L_42a26b;
L_42a225: /* 42a225: cmp cx, 0x64 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x64u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a229: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a22b: /* 42a22b: cmp cx, 0x69 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x69u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a22f: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a231: /* 42a231: cmp cx, 0x6f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x6fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a235: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a237: /* 42a237: cmp cx, 0x78 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a23b: je 0x42a26b */
  if (zf) goto L_42a26b;
L_42a23d: /* 42a23d: cmp cx, 0x58 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a241: jne 0x42a259 */
  if (!zf) goto L_42a259;
L_42a243: /* 42a243: jmp 0x42a26b */
  goto L_42a26b;
L_42a245: /* 42a245: inc byte ptr [ebp - 0x4b] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb5u), r);
  }
/* 42a248: jmp 0x42a26b */
  goto L_42a26b;
L_42a24a: /* 42a24a: cmp edi, 0x68 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a24d: je 0x42a265 */
  if (zf) goto L_42a265;
L_42a24f: /* 42a24f: cmp edi, 0x6c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a252: je 0x42a25d */
  if (zf) goto L_42a25d;
L_42a254: /* 42a254: cmp edi, 0x77 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a257: je 0x42a260 */
  if (zf) goto L_42a260;
L_42a259: /* 42a259: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42a25b: jmp 0x42a26b */
  goto L_42a26b;
L_42a25d: /* 42a25d: inc byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
L_42a260: /* 42a260: inc byte ptr [ebp - 0x4d] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
/* 42a263: jmp 0x42a26b */
  goto L_42a26b;
L_42a265: /* 42a265: dec byte ptr [ebp - 0x4e] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb2u), r);
  }
/* 42a268: dec byte ptr [ebp - 0x4d] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
L_42a26b: /* 42a26b: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a26d: je 0x42a195 */
  if (zf) goto L_42a195;
L_42a273: /* 42a273: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 42a276: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a27a: jne 0x42a28e */
  if (!zf) goto L_42a28e;
L_42a27c: /* 42a27c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42a27f: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 42a282: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42a285: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 42a288: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 42a28b: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
L_42a28e: /* 42a28e: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 42a290: cmp byte ptr [ebp - 0x4d], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a293: jne 0x42a2ae */
  if (!zf) goto L_42a2ae;
L_42a295: /* 42a295: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42a298: cmp ax, 0x53 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x53u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a29c: je 0x42a2aa */
  if (zf) goto L_42a2aa;
L_42a29e: /* 42a29e: cmp ax, 0x43 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x43u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2a2: je 0x42a2aa */
  if (zf) goto L_42a2aa;
L_42a2a4: /* 42a2a4: mov byte ptr [ebp - 0x4d], 1 */
  W8((uint32_t)(ebp + 0xffffffb3u), 0x1u);
/* 42a2a8: jmp 0x42a2ae */
  goto L_42a2ae;
L_42a2aa: /* 42a2aa: or byte ptr [ebp - 0x4d], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb3u), r);
  }
L_42a2ae: /* 42a2ae: movzx edi, word ptr [esi] */
  edi = (uint32_t)(R16((uint32_t)(esi)));
/* 42a2b1: or edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 42a2b4: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 42a2b7: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2ba: je 0x42a2eb */
  if (zf) goto L_42a2eb;
L_42a2bc: /* 42a2bc: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2bf: je 0x42a2e0 */
  if (zf) goto L_42a2e0;
L_42a2c1: /* 42a2c1: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2c4: je 0x42a2e0 */
  if (zf) goto L_42a2e0;
L_42a2c6: /* 42a2c6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a2c9: call 0x42473a */
  esp -= 4; W32(esp, 0x42a2ceu); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a2ce: mov esi, eax */
  esi = eax;
/* 42a2d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a2d1: call 0x41750b */
  esp -= 4; W32(esp, 0x42a2d6u); SPILL(); f_41750b(); if (g_unwind) return; RELOAD();
/* 42a2d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a2d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a2d9: jne 0x42a2c6 */
  if (!zf) goto L_42a2c6;
L_42a2db: /* 42a2db: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a2de: jmp 0x42a2eb */
  goto L_42a2eb;
L_42a2e0: /* 42a2e0: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a2e3: call 0x42473a */
  esp -= 4; W32(esp, 0x42a2e8u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a2e8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_42a2eb: /* 42a2eb: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42a2ee: xor edx, edx */
  edx = 0;
/* 42a2f0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2f2: je 0x42a301 */
  if (zf) goto L_42a301;
L_42a2f4: /* 42a2f4: cmp dword ptr [ebp - 0x48], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a2f7: jne 0x42a301 */
  if (!zf) goto L_42a301;
L_42a2f9: /* 42a2f9: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42a2fc: jmp 0x42ab22 */
  goto L_42ab22;
L_42a301: /* 42a301: cmp edi, 0x6f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a304: jg 0x42a61f */
  if ((!zf && sf == of)) goto L_42a61f;
L_42a30a: /* 42a30a: je 0x42a8b8 */
  if (zf) goto L_42a8b8;
L_42a310: /* 42a310: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a313: je 0x42a567 */
  if (zf) goto L_42a567;
L_42a319: /* 42a319: cmp edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a31c: je 0x42a8b8 */
  if (zf) goto L_42a8b8;
L_42a322: /* 42a322: jle 0x42a649 */
  if ((zf || sf != of)) goto L_42a649;
L_42a328: /* 42a328: cmp edi, 0x67 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a32b: jle 0x42a369 */
  if ((zf || sf != of)) goto L_42a369;
L_42a32d: /* 42a32d: cmp edi, 0x69 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a330: je 0x42a34d */
  if (zf) goto L_42a34d;
L_42a332: /* 42a332: cmp edi, 0x6e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a335: jne 0x42a649 */
  if (!zf) goto L_42a649;
L_42a33b: /* 42a33b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42a33e: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a342: je 0x42aad3 */
  if (zf) goto L_42aad3;
L_42a348: /* 42a348: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a34d: /* 42a34d: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 42a34f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42a350: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
L_42a353: /* 42a353: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42a356: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a35a: jne 0x42a7bc */
  if (!zf) goto L_42a7bc;
L_42a360: /* 42a360: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42a364: jmp 0x42a7c2 */
  goto L_42a7c2;
L_42a369: /* 42a369: lea edi, [ebp - 0x324] */
  edi = (uint32_t)(ebp + 0xfffffcdcu);
/* 42a36f: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42a372: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a376: jne 0x42a387 */
  if (!zf) goto L_42a387;
L_42a378: /* 42a378: mov word ptr [ebp - 0x324], si */
  W16((uint32_t)(ebp + 0xfffffcdcu), (esi & 0xffffu));
/* 42a37f: lea edi, [ebp - 0x322] */
  edi = (uint32_t)(ebp + 0xfffffcdeu);
/* 42a385: jmp 0x42a38d */
  goto L_42a38d;
L_42a387: /* 42a387: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a38b: jne 0x42a39d */
  if (!zf) goto L_42a39d;
L_42a38d: /* 42a38d: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a390: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a393: call 0x42473a */
  esp -= 4; W32(esp, 0x42a398u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a398: mov esi, eax */
  esi = eax;
/* 42a39a: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a39d: /* 42a39d: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a3a1: je 0x42a3ac */
  if (zf) goto L_42a3ac;
L_42a3a3: /* 42a3a3: cmp dword ptr [ebp - 0x48], 0x15d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a3aa: jle 0x42a3b3 */
  if ((zf || sf != of)) goto L_42a3b3;
L_42a3ac: /* 42a3ac: mov dword ptr [ebp - 0x48], 0x15d */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x15du);
L_42a3b3: /* 42a3b3: mov ebx, 0xff00 */
  ebx = 0xff00u;
/* 42a3b8: jmp 0x42a3eb */
  goto L_42a3eb;
L_42a3ba: /* 42a3ba: mov eax, esi */
  eax = esi;
/* 42a3bc: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a3c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a3c2: call 0x40152b */
  esp -= 4; W32(esp, 0x42a3c7u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a3c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a3c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a3ca: je 0x42a3f0 */
  if (zf) goto L_42a3f0;
L_42a3cc: /* 42a3cc: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a3cf: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a3d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a3d4: je 0x42a3f0 */
  if (zf) goto L_42a3f0;
L_42a3d6: /* 42a3d6: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42a3d9: mov word ptr [edi], si */
  W16((uint32_t)(edi), (esi & 0xffffu));
/* 42a3dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a3dd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a3de: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a3e1: call 0x42473a */
  esp -= 4; W32(esp, 0x42a3e6u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a3e6: mov esi, eax */
  esi = eax;
/* 42a3e8: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a3eb: /* 42a3eb: test bx, si */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a3ee: je 0x42a3ba */
  if (zf) goto L_42a3ba;
L_42a3f0: /* 42a3f0: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 42a3f6: push 0x44a9ac */
  { uint32_t v = 0x44a9acu; esp -= 4; W32(esp, v); }
/* 42a3fb: lea eax, [ebp - 0x328] */
  eax = (uint32_t)(ebp + 0xfffffcd8u);
/* 42a401: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a402: call 0x402197 */
  esp -= 4; W32(esp, 0x42a407u); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 42a407: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42a40a: cmp word ptr [ebp - 0x328], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffcd8u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a411: jne 0x42a46b */
  if (!zf) goto L_42a46b;
L_42a413: /* 42a413: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a416: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a419: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a41b: je 0x42a46b */
  if (zf) goto L_42a46b;
L_42a41d: /* 42a41d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a420: call 0x42473a */
  esp -= 4; W32(esp, 0x42a425u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a425: mov esi, eax */
  esi = eax;
/* 42a427: mov ax, word ptr [ebp - 0x328] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffcd8u))) & 0xffffu);
/* 42a42e: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 42a431: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a432: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a433: jmp 0x42a463 */
  goto L_42a463;
L_42a435: /* 42a435: mov eax, esi */
  eax = esi;
/* 42a437: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a43c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a43d: call 0x40152b */
  esp -= 4; W32(esp, 0x42a442u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a442: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a445: je 0x42a46b */
  if (zf) goto L_42a46b;
L_42a447: /* 42a447: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a44a: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a44d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a44f: je 0x42a46b */
  if (zf) goto L_42a46b;
L_42a451: /* 42a451: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42a454: mov word ptr [edi], si */
  W16((uint32_t)(edi), (esi & 0xffffu));
/* 42a457: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a458: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a459: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a45c: call 0x42473a */
  esp -= 4; W32(esp, 0x42a461u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a461: mov esi, eax */
  esi = eax;
L_42a463: /* 42a463: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a466: test bx, si */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a469: je 0x42a435 */
  if (zf) goto L_42a435;
L_42a46b: /* 42a46b: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a46f: je 0x42a4f7 */
  if (zf) goto L_42a4f7;
L_42a475: /* 42a475: cmp si, 0x65 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x65u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a479: je 0x42a481 */
  if (zf) goto L_42a481;
L_42a47b: /* 42a47b: cmp si, 0x45 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x45u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a47f: jne 0x42a4f7 */
  if (!zf) goto L_42a4f7;
L_42a481: /* 42a481: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a484: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a487: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a489: je 0x42a4f7 */
  if (zf) goto L_42a4f7;
L_42a48b: /* 42a48b: mov word ptr [edi], 0x65 */
  W16((uint32_t)(edi), 0x65u);
/* 42a490: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a491: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a492: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a495: call 0x42473a */
  esp -= 4; W32(esp, 0x42a49au); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a49a: mov esi, eax */
  esi = eax;
/* 42a49c: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a49f: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a4a3: jne 0x42a4ac */
  if (!zf) goto L_42a4ac;
L_42a4a5: /* 42a4a5: mov word ptr [edi], si */
  W16((uint32_t)(edi), (esi & 0xffffu));
/* 42a4a8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a4a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a4aa: jmp 0x42a4b2 */
  goto L_42a4b2;
L_42a4ac: /* 42a4ac: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a4b0: jne 0x42a4f2 */
  if (!zf) goto L_42a4f2;
L_42a4b2: /* 42a4b2: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a4b5: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a4b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a4ba: jne 0x42a4e5 */
  if (!zf) goto L_42a4e5;
L_42a4bc: /* 42a4bc: and dword ptr [ebp - 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a4bf: jmp 0x42a4f2 */
  goto L_42a4f2;
L_42a4c1: /* 42a4c1: mov eax, esi */
  eax = esi;
/* 42a4c3: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a4c9: call 0x40152b */
  esp -= 4; W32(esp, 0x42a4ceu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a4ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a4cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a4d1: je 0x42a4f7 */
  if (zf) goto L_42a4f7;
L_42a4d3: /* 42a4d3: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a4d6: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a4d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a4db: je 0x42a4f7 */
  if (zf) goto L_42a4f7;
L_42a4dd: /* 42a4dd: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42a4e0: mov word ptr [edi], si */
  W16((uint32_t)(edi), (esi & 0xffffu));
/* 42a4e3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a4e4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_42a4e5: /* 42a4e5: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a4e8: call 0x42473a */
  esp -= 4; W32(esp, 0x42a4edu); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a4ed: mov esi, eax */
  esi = eax;
/* 42a4ef: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a4f2: /* 42a4f2: test bx, si */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a4f5: je 0x42a4c1 */
  if (zf) goto L_42a4c1;
L_42a4f7: /* 42a4f7: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a4fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a4fb: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a500u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a500: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a501: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a505: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a50b: /* 42a50b: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a50f: jne 0x42aaf9 */
  if (!zf) goto L_42aaf9;
L_42a515: /* 42a515: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42a518: and word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(edi), r);
  }
/* 42a51c: lea eax, [ebp - 0x324] */
  eax = (uint32_t)(ebp + 0xfffffcdcu);
/* 42a522: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 42a524: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 42a526: lea esi, [edi + edi + 2] */
  esi = (uint32_t)(edi + edi + 0x2u);
/* 42a52a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a52b: call 0x4010eb */
  esp -= 4; W32(esp, 0x42a530u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42a530: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a531: mov edi, eax */
  edi = eax;
/* 42a533: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a535: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a53b: /* 42a53b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a53c: lea eax, [ebp - 0x324] */
  eax = (uint32_t)(ebp + 0xfffffcdcu);
/* 42a542: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a543: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42a544: call 0x417e01 */
  esp -= 4; W32(esp, 0x42a549u); SPILL(); f_417e01(); if (g_unwind) return; RELOAD();
/* 42a549: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42a54a: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42a54d: movsx eax, byte ptr [ebp - 0x4e] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb2u)));
/* 42a551: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42a552: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a553: call dword ptr [0x44afa8] */
  { uint32_t t = R32((uint32_t)(0x44afa8u)); esp -= 4; W32(esp, 0x42a559u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42a559: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42a55a: call 0x401156 */
  esp -= 4; W32(esp, 0x42a55fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42a55f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42a562: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a567: /* 42a567: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a569: jne 0x42a575 */
  if (!zf) goto L_42a575;
L_42a56b: /* 42a56b: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 42a572: inc dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
L_42a575: /* 42a575: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42a579: jle 0x42a57f */
  if ((zf || sf != of)) goto L_42a57f;
L_42a57b: /* 42a57b: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
L_42a57f: /* 42a57f: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42a582: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a585: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42a588: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a58du); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a58d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42a590: /* 42a590: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a591: /* 42a591: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a595: je 0x42a5a5 */
  if (zf) goto L_42a5a5;
L_42a597: /* 42a597: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42a59a: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a59d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a59f: je 0x42a87b */
  if (zf) goto L_42a87b;
L_42a5a5: /* 42a5a5: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a5a8: call 0x42473a */
  esp -= 4; W32(esp, 0x42a5adu); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a5ad: mov edx, eax */
  edx = eax;
/* 42a5af: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 42a5b2: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a5b5: je 0x42a5fc */
  if (zf) goto L_42a5fc;
L_42a5b7: /* 42a5b7: cmp edi, 0x73 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a5ba: jne 0x42a5ce */
  if (!zf) goto L_42a5ce;
L_42a5bc: /* 42a5bc: cmp dx, 9 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42a5c0: jb 0x42a5c8 */
  if (cf) goto L_42a5c8;
L_42a5c2: /* 42a5c2: cmp dx, 0xd */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42a5c6: jbe 0x42a5ce */
  if ((cf | zf)) goto L_42a5ce;
L_42a5c8: /* 42a5c8: cmp dx, 0x20 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a5cc: jne 0x42a5fc */
  if (!zf) goto L_42a5fc;
L_42a5ce: /* 42a5ce: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a5d1: jne 0x42a871 */
  if (!zf) goto L_42a871;
L_42a5d7: /* 42a5d7: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* 42a5da: mov ecx, eax */
  ecx = eax;
/* 42a5dc: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42a5df: xor ebx, ebx */
  ebx = 0;
  cf = 0;
/* 42a5e1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  ebx = r;
  }
/* 42a5e2: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 42a5e4: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42a5e7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42a5ea: movsx eax, byte ptr [eax + ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + ecx)));
/* 42a5ee: movsx ecx, byte ptr [ebp - 0x49] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffb7u)));
/* 42a5f2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42a5f4: test eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a5f6: je 0x42a871 */
  if (zf) goto L_42a871;
L_42a5fc: /* 42a5fc: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a600: jne 0x42a86a */
  if (!zf) goto L_42a86a;
L_42a606: /* 42a606: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a60a: je 0x42a858 */
  if (zf) goto L_42a858;
L_42a610: /* 42a610: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42a613: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 42a616: add dword ptr [ebp - 0x64], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff9cu), r);
  }
/* 42a61a: jmp 0x42a591 */
  goto L_42a591;
L_42a61f: /* 42a61f: mov eax, edi */
  eax = edi;
/* 42a621: sub eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42a624: je 0x42a8b4 */
  if (zf) goto L_42a8b4;
L_42a62a: /* 42a62a: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42a62d: je 0x42a575 */
  if (zf) goto L_42a575;
L_42a633: /* 42a633: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42a634: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42a635: je 0x42a8b8 */
  if (zf) goto L_42a8b8;
L_42a63b: /* 42a63b: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42a63e: je 0x42a353 */
  if (zf) goto L_42a353;
L_42a644: /* 42a644: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42a647: je 0x42a670 */
  if (zf) goto L_42a670;
L_42a649: /* 42a649: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42a64c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42a64f: cmp word ptr [ecx], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a652: jne 0x42ab21 */
  if (!zf) goto L_42ab21;
L_42a658: /* 42a658: dec byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42a65b: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a65f: jne 0x42aaf9 */
  if (!zf) goto L_42aaf9;
L_42a665: /* 42a665: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 42a668: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 42a66b: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a670: /* 42a670: cmp byte ptr [ebp - 0x4d], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42a674: jle 0x42a67a */
  if ((zf || sf != of)) goto L_42a67a;
L_42a676: /* 42a676: mov byte ptr [ebp - 0x4c], 1 */
  W8((uint32_t)(ebp + 0xffffffb4u), 0x1u);
L_42a67a: /* 42a67a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42a67d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a67e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a67f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 42a682: mov dword ptr [ebp - 0x32c], esi */
  W32((uint32_t)(ebp + 0xfffffcd4u), esi);
/* 42a688: cmp word ptr [esi], 0x5e */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x5eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a68c: jne 0x42a69b */
  if (!zf) goto L_42a69b;
L_42a68e: /* 42a68e: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 42a691: mov dword ptr [ebp - 0x32c], esi */
  W32((uint32_t)(ebp + 0xfffffcd4u), esi);
/* 42a697: or byte ptr [ebp - 0x49], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb7u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffb7u), r);
  }
L_42a69b: /* 42a69b: cmp dword ptr [ebp - 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a69e: jne 0x42a6f6 */
  if (!zf) goto L_42a6f6;
L_42a6a0: /* 42a6a0: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 42a6a3: mov eax, 0x2000 */
  eax = 0x2000u;
/* 42a6a8: call 0x4014ee */
  esp -= 4; W32(esp, 0x42a6adu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42a6ad: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42a6b0: mov eax, esp */
  eax = esp;
/* 42a6b2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42a6b5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42a6b9: jmp 0x42a6f6 */
  goto L_42a6f6;
L_42a6bf: /* 42a6bf: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 42a6c2: call 0x415709 */
  esp -= 4; W32(esp, 0x42a6c7u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 42a6c7: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 42a6cc: call 0x4010eb */
  esp -= 4; W32(esp, 0x42a6d1u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42a6d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a6d2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42a6d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a6d7: jne 0x42a6e2 */
  if (!zf) goto L_42a6e2;
L_42a6d9: /* 42a6d9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42a6dd: jmp 0x42ab28 */
  goto L_42ab28;
L_42a6e2: /* 42a6e2: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 42a6e9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42a6ed: mov esi, dword ptr [ebp - 0x32c] */
  esi = R32((uint32_t)(ebp + 0xfffffcd4u));
/* 42a6f3: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42a6f6: /* 42a6f6: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 42a6fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42a6fd: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42a700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42a701: call 0x4010fd */
  esp -= 4; W32(esp, 0x42a706u); SPILL(); hle_memset(); RELOAD();
/* 42a706: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42a709: cmp edi, 0x7b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a70c: jne 0x42a71f */
  if (!zf) goto L_42a71f;
L_42a70e: /* 42a70e: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 42a710: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 42a711: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a714: jne 0x42a71f */
  if (!zf) goto L_42a71f;
L_42a716: /* 42a716: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42a719: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a71a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a71b: mov byte ptr [ebx + 0xb], 0x20 */
  W8((uint32_t)(ebx + 0xbu), 0x20u);
L_42a71f: /* 42a71f: xor eax, eax */
  eax = 0;
/* 42a721: jmp 0x42a798 */
  goto L_42a798;
L_42a723: /* 42a723: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a724: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a725: cmp ax, 0x2d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a729: jne 0x42a77f */
  if (!zf) goto L_42a77f;
L_42a72b: /* 42a72b: cmp word ptr [ebp - 0x3c], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a730: je 0x42a77f */
  if (zf) goto L_42a77f;
L_42a732: /* 42a732: xor ecx, ecx */
  ecx = 0;
/* 42a734: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42a737: cmp cx, 0x5d */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a73b: je 0x42a77f */
  if (zf) goto L_42a77f;
L_42a73d: /* 42a73d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a73e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a73f: cmp word ptr [ebp - 0x3c], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42a743: jae 0x42a749 */
  if (!cf) goto L_42a749;
L_42a745: /* 42a745: mov eax, ecx */
  eax = ecx;
/* 42a747: jmp 0x42a74f */
  goto L_42a74f;
L_42a749: /* 42a749: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 42a74c: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
L_42a74f: /* 42a74f: cmp word ptr [ebp - 0x3c], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffc4u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42a753: ja 0x42a779 */
  if ((!cf && !zf)) goto L_42a779;
L_42a755: /* 42a755: movzx edi, word ptr [ebp - 0x3c] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* 42a759: sub eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42a75c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42a75d: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
L_42a760: /* 42a760: mov eax, edi */
  eax = edi;
/* 42a762: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42a765: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42a768: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42a76a: mov ecx, edi */
  ecx = edi;
/* 42a76c: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42a76f: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42a771: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42a773: or byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 42a775: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42a776: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 42a777: jne 0x42a760 */
  if (!zf) goto L_42a760;
L_42a779: /* 42a779: and dword ptr [ebp - 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc4u), r);
  }
/* 42a77d: jmp 0x42a798 */
  goto L_42a798;
L_42a77f: /* 42a77f: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 42a782: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 42a785: mov eax, ecx */
  eax = ecx;
/* 42a787: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 42a78a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42a78d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42a78f: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 42a792: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42a794: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 42a796: or byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_42a798: /* 42a798: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42a79b: cmp ax, 0x5d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a79f: jne 0x42a723 */
  if (!zf) goto L_42a723;
L_42a7a1: /* 42a7a1: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a7a4: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a7aa: /* 42a7aa: cmp dword ptr [ebp - 0x68], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7ae: jne 0x42a57f */
  if (!zf) goto L_42a57f;
L_42a7b4: /* 42a7b4: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 42a7b7: jmp 0x42a57f */
  goto L_42a57f;
L_42a7bc: /* 42a7bc: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7c0: jne 0x42a7dc */
  if (!zf) goto L_42a7dc;
L_42a7c2: /* 42a7c2: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a7c5: jne 0x42a7cf */
  if (!zf) goto L_42a7cf;
L_42a7c7: /* 42a7c7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7c9: je 0x42a7cf */
  if (zf) goto L_42a7cf;
L_42a7cb: /* 42a7cb: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42a7cd: jmp 0x42a7dc */
  goto L_42a7dc;
L_42a7cf: /* 42a7cf: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a7d2: call 0x42473a */
  esp -= 4; W32(esp, 0x42a7d7u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a7d7: mov esi, eax */
  esi = eax;
/* 42a7d9: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a7dc: /* 42a7dc: cmp si, 0x30 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7e0: jne 0x42a8e7 */
  if (!zf) goto L_42a8e7;
L_42a7e6: /* 42a7e6: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a7e9: call 0x42473a */
  esp -= 4; W32(esp, 0x42a7eeu); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a7ee: mov esi, eax */
  esi = eax;
/* 42a7f0: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a7f3: cmp si, 0x78 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7f7: je 0x42a835 */
  if (zf) goto L_42a835;
L_42a7f9: /* 42a7f9: cmp si, 0x58 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a7fd: je 0x42a835 */
  if (zf) goto L_42a835;
L_42a7ff: /* 42a7ff: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 42a806: cmp edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a809: je 0x42a823 */
  if (zf) goto L_42a823;
L_42a80b: /* 42a80b: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a80f: je 0x42a818 */
  if (zf) goto L_42a818;
L_42a811: /* 42a811: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a814: jne 0x42a818 */
  if (!zf) goto L_42a818;
L_42a816: /* 42a816: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_42a818: /* 42a818: push 0x6f */
  { uint32_t v = 0x6fu; esp -= 4; W32(esp, v); }
L_42a81a: /* 42a81a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42a81b: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 42a81e: jmp 0x42a8e7 */
  goto L_42a8e7;
L_42a823: /* 42a823: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a827: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a82cu); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a82c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a82d: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 42a82f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42a830: jmp 0x42a8e4 */
  goto L_42a8e4;
L_42a835: /* 42a835: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a838: call 0x42473a */
  esp -= 4; W32(esp, 0x42a83du); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a83d: mov esi, eax */
  esi = eax;
/* 42a83f: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a842: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a846: je 0x42a854 */
  if (zf) goto L_42a854;
L_42a848: /* 42a848: sub dword ptr [ebp - 0x48], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a84c: cmp dword ptr [ebp - 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42a850: jge 0x42a854 */
  if ((sf == of)) goto L_42a854;
L_42a852: /* 42a852: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_42a854: /* 42a854: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 42a856: jmp 0x42a81a */
  goto L_42a81a;
L_42a858: /* 42a858: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42a859: push dword ptr [ebp - 0x64] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff9cu)); esp -= 4; W32(esp, v); }
/* 42a85c: call 0x402a4e */
  esp -= 4; W32(esp, 0x42a861u); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 42a861: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a862: add dword ptr [ebp - 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff9cu), r);
  }
/* 42a865: jmp 0x42a590 */
  goto L_42a590;
L_42a86a: /* 42a86a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a86b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42a86c: jmp 0x42a591 */
  goto L_42a591;
L_42a871: /* 42a871: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42a875: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a87au); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a87a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a87b: /* 42a87b: cmp esi, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a87e: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42a884: /* 42a884: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a888: jne 0x42aaf9 */
  if (!zf) goto L_42aaf9;
L_42a88e: /* 42a88e: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42a891: cmp edi, 0x63 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a894: je 0x42aaf9 */
  if (zf) goto L_42aaf9;
L_42a89a: /* 42a89a: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42a89d: cmp byte ptr [ebp - 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8a1: je 0x42a8ac */
  if (zf) goto L_42a8ac;
L_42a8a3: /* 42a8a3: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 42a8a7: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a8ac: /* 42a8ac: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42a8af: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42a8b4: /* 42a8b4: mov byte ptr [ebp - 0x4e], 1 */
  W8((uint32_t)(ebp + 0xffffffb2u), 0x1u);
L_42a8b8: /* 42a8b8: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42a8bb: cmp si, 0x2d */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8bf: jne 0x42a8c7 */
  if (!zf) goto L_42a8c7;
L_42a8c1: /* 42a8c1: mov byte ptr [ebp - 0x4a], 1 */
  W8((uint32_t)(ebp + 0xffffffb6u), 0x1u);
/* 42a8c5: jmp 0x42a8cd */
  goto L_42a8cd;
L_42a8c7: /* 42a8c7: cmp si, 0x2b */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8cb: jne 0x42a8e7 */
  if (!zf) goto L_42a8e7;
L_42a8cd: /* 42a8cd: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a8d0: jne 0x42a8da */
  if (!zf) goto L_42a8da;
L_42a8d2: /* 42a8d2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8d4: je 0x42a8da */
  if (zf) goto L_42a8da;
L_42a8d6: /* 42a8d6: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 42a8d8: jmp 0x42a8e7 */
  goto L_42a8e7;
L_42a8da: /* 42a8da: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a8dd: call 0x42473a */
  esp -= 4; W32(esp, 0x42a8e2u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a8e2: mov esi, eax */
  esi = eax;
L_42a8e4: /* 42a8e4: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_42a8e7: /* 42a8e7: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a8eb: je 0x42a9f5 */
  if (zf) goto L_42a9f5;
L_42a8f1: /* 42a8f1: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a8f3: jne 0x42a9d3 */
  if (!zf) goto L_42a9d3;
L_42a8f9: /* 42a8f9: mov edi, 0xff */
  edi = 0xffu;
L_42a8fe: /* 42a8fe: cmp dword ptr [ebp - 0x68], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a902: je 0x42a958 */
  if (zf) goto L_42a958;
L_42a904: /* 42a904: cmp dword ptr [ebp - 0x68], 0x70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a908: je 0x42a958 */
  if (zf) goto L_42a958;
L_42a90a: /* 42a90a: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a90f: jne 0x42a98a */
  if (!zf) goto L_42a98a;
L_42a911: /* 42a911: mov eax, esi */
  eax = esi;
/* 42a913: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a915: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a916: call 0x40152b */
  esp -= 4; W32(esp, 0x42a91bu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42a91b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a91c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42a91e: je 0x42a98a */
  if (zf) goto L_42a98a;
L_42a920: /* 42a920: cmp dword ptr [ebp - 0x68], 0x6f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a924: jne 0x42a941 */
  if (!zf) goto L_42a941;
L_42a926: /* 42a926: cmp si, 0x38 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x38u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 15) & 1;
  }
/* 42a92a: jae 0x42a98a */
  if (!cf) goto L_42a98a;
L_42a92c: /* 42a92c: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42a92f: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42a932: shld ecx, eax, 3 */
  { uint32_t a = ecx, b = eax, c = (0x3u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42a936: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42a939: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42a93c: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42a93f: jmp 0x42a98c */
  goto L_42a98c;
L_42a941: /* 42a941: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42a943: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42a945: push dword ptr [ebp - 0x58] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa8u)); esp -= 4; W32(esp, v); }
/* 42a948: push dword ptr [ebp - 0x5c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffa4u)); esp -= 4; W32(esp, v); }
/* 42a94b: call 0x40518c */
  esp -= 4; W32(esp, 0x42a950u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 42a950: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42a953: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 42a956: jmp 0x42a98c */
  goto L_42a98c;
L_42a958: /* 42a958: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42a95d: jne 0x42a98a */
  if (!zf) goto L_42a98a;
L_42a95f: /* 42a95f: mov eax, esi */
  eax = esi;
/* 42a961: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42a963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42a964: call 0x415449 */
  esp -= 4; W32(esp, 0x42a969u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42a969: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42a96a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 42a96c: je 0x42a98a */
  if (zf) goto L_42a98a;
L_42a96e: /* 42a96e: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42a971: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42a974: shld ecx, eax, 4 */
  { uint32_t a = ecx, b = eax, c = (0x4u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  ecx = r;
  } }
/* 42a978: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42a97b: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42a97e: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42a981: call 0x42a09f */
  esp -= 4; W32(esp, 0x42a986u); SPILL(); f_42a09f(); if (g_unwind) return; RELOAD();
/* 42a986: mov esi, eax */
  esi = eax;
/* 42a988: jmp 0x42a98c */
  goto L_42a98c;
L_42a98a: /* 42a98a: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_42a98c: /* 42a98c: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a98e: jne 0x42a9bb */
  if (!zf) goto L_42a9bb;
L_42a990: /* 42a990: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42a993: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 42a996: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42a999: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 42a99a: add dword ptr [ebp - 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffa4u), r);
  }
/* 42a99d: adc dword ptr [ebp - 0x58], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xffffffa8u), r);
  }
/* 42a9a0: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42a9a4: je 0x42a9af */
  if (zf) goto L_42a9af;
L_42a9a6: /* 42a9a6: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42a9a9: jne 0x42a9af */
  if (!zf) goto L_42a9af;
L_42a9ab: /* 42a9ab: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42a9ad: jmp 0x42a9c5 */
  goto L_42a9c5;
L_42a9af: /* 42a9af: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a9b2: call 0x42473a */
  esp -= 4; W32(esp, 0x42a9b7u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42a9b7: mov esi, eax */
  esi = eax;
/* 42a9b9: jmp 0x42a9c5 */
  goto L_42a9c5;
L_42a9bb: /* 42a9bb: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42a9be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42a9bf: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42a9c4u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42a9c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42a9c5: /* 42a9c5: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a9c7: je 0x42a8fe */
  if (zf) goto L_42a8fe;
L_42a9cd: /* 42a9cd: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42a9d0: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42a9d3: /* 42a9d3: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42a9d7: je 0x42aab8 */
  if (zf) goto L_42aab8;
L_42a9dd: /* 42a9dd: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42a9e0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 42a9e2: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42a9e5: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 42a9e8: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 42a9ea: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 42a9ed: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42a9f0: jmp 0x42aab8 */
  goto L_42aab8;
L_42a9f5: /* 42a9f5: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42a9f7: jne 0x42aaaf */
  if (!zf) goto L_42aaaf;
L_42a9fd: /* 42a9fd: mov edi, 0xff */
  edi = 0xffu;
L_42aa02: /* 42aa02: cmp dword ptr [ebp - 0x68], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aa06: je 0x42aa43 */
  if (zf) goto L_42aa43;
L_42aa08: /* 42aa08: cmp dword ptr [ebp - 0x68], 0x70 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aa0c: je 0x42aa43 */
  if (zf) goto L_42aa43;
L_42aa0e: /* 42aa0e: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa13: jne 0x42aa66 */
  if (!zf) goto L_42aa66;
L_42aa15: /* 42aa15: mov eax, esi */
  eax = esi;
/* 42aa17: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42aa19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42aa1a: call 0x40152b */
  esp -= 4; W32(esp, 0x42aa1fu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 42aa1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42aa20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa22: je 0x42aa66 */
  if (zf) goto L_42aa66;
L_42aa24: /* 42aa24: cmp dword ptr [ebp - 0x68], 0x6f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aa28: jne 0x42aa36 */
  if (!zf) goto L_42aa36;
L_42aa2a: /* 42aa2a: cmp si, 0x38 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x38u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42aa2e: jae 0x42aa66 */
  if (!cf) goto L_42aa66;
L_42aa30: /* 42aa30: shl dword ptr [ebp - 0x38], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42aa34: jmp 0x42aa68 */
  goto L_42aa68;
L_42aa36: /* 42aa36: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42aa39: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 42aa3c: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42aa3e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42aa41: jmp 0x42aa68 */
  goto L_42aa68;
L_42aa43: /* 42aa43: test si, 0xff00 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xff00u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa48: jne 0x42aa66 */
  if (!zf) goto L_42aa66;
L_42aa4a: /* 42aa4a: mov eax, esi */
  eax = esi;
/* 42aa4c: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42aa4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42aa4f: call 0x415449 */
  esp -= 4; W32(esp, 0x42aa54u); SPILL(); f_415449(); if (g_unwind) return; RELOAD();
/* 42aa54: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42aa55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa57: je 0x42aa66 */
  if (zf) goto L_42aa66;
L_42aa59: /* 42aa59: shl dword ptr [ebp - 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
/* 42aa5d: call 0x42a09f */
  esp -= 4; W32(esp, 0x42aa62u); SPILL(); f_42a09f(); if (g_unwind) return; RELOAD();
/* 42aa62: mov esi, eax */
  esi = eax;
/* 42aa64: jmp 0x42aa68 */
  goto L_42aa68;
L_42aa66: /* 42aa66: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_42aa68: /* 42aa68: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42aa6a: jne 0x42aa97 */
  if (!zf) goto L_42aa97;
L_42aa6c: /* 42aa6c: inc dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 42aa6f: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 42aa72: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 42aa75: lea eax, [ecx + eax - 0x30] */
  eax = (uint32_t)(ecx + eax + 0xffffffd0u);
/* 42aa79: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 42aa7c: cmp dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aa80: je 0x42aa8b */
  if (zf) goto L_42aa8b;
L_42aa82: /* 42aa82: dec dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffb8u), r);
  }
/* 42aa85: jne 0x42aa8b */
  if (!zf) goto L_42aa8b;
L_42aa87: /* 42aa87: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42aa89: jmp 0x42aaa1 */
  goto L_42aaa1;
L_42aa8b: /* 42aa8b: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42aa8e: call 0x42473a */
  esp -= 4; W32(esp, 0x42aa93u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42aa93: mov esi, eax */
  esi = eax;
/* 42aa95: jmp 0x42aaa1 */
  goto L_42aaa1;
L_42aa97: /* 42aa97: dec dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42aa9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42aa9b: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42aaa0u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42aaa0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42aaa1: /* 42aaa1: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42aaa3: je 0x42aa02 */
  if (zf) goto L_42aa02;
L_42aaa9: /* 42aaa9: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42aaac: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_42aaaf: /* 42aaaf: cmp byte ptr [ebp - 0x4a], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb6u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42aab3: je 0x42aab8 */
  if (zf) goto L_42aab8;
L_42aab5: /* 42aab5: neg dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffc8u), r);
  }
L_42aab8: /* 42aab8: cmp edi, 0x46 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aabb: jne 0x42aac1 */
  if (!zf) goto L_42aac1;
L_42aabd: /* 42aabd: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
L_42aac1: /* 42aac1: cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aac5: je 0x42ab28 */
  if (zf) goto L_42ab28;
L_42aac7: /* 42aac7: cmp byte ptr [ebp - 0x4b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42aacb: jne 0x42aaf9 */
  if (!zf) goto L_42aaf9;
L_42aacd: /* 42aacd: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 42aad0: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
L_42aad3: /* 42aad3: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aad7: je 0x42aae9 */
  if (zf) goto L_42aae9;
L_42aad9: /* 42aad9: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 42aadc: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42aadf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 42aae1: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 42aae4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 42aae7: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42aae9: /* 42aae9: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 42aaec: cmp byte ptr [ebp - 0x4e], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffb2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42aaf0: je 0x42aaf6 */
  if (zf) goto L_42aaf6;
L_42aaf2: /* 42aaf2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 42aaf4: jmp 0x42aaf9 */
  goto L_42aaf9;
L_42aaf6: /* 42aaf6: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
L_42aaf9: /* 42aaf9: inc byte ptr [ebp - 0x29] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd7u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffd7u), r);
  }
/* 42aafc: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42ab00: jmp 0x42a10c */
  goto L_42a10c;
L_42ab05: /* 42ab05: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 42ab08: call 0x42473a */
  esp -= 4; W32(esp, 0x42ab0du); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 42ab0d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42ab10: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42ab13: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ab14: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42ab15: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 42ab18: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ab1b: je 0x42a10c */
  if (zf) goto L_42a10c;
L_42ab21: /* 42ab21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_42ab22: /* 42ab22: call 0x42a0d1 */
  esp -= 4; W32(esp, 0x42ab27u); SPILL(); f_42a0d1(); if (g_unwind) return; RELOAD();
/* 42ab27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ab28: /* 42ab28: cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ab2c: jne 0x42ab37 */
  if (!zf) goto L_42ab37;
L_42ab2e: /* 42ab2e: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42ab31: call 0x401156 */
  esp -= 4; W32(esp, 0x42ab36u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42ab36: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ab37: /* 42ab37: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42ab3a: lea esp, [ebp - 0x338] */
  esp = (uint32_t)(ebp + 0xfffffcc8u);
/* 42ab40: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42ab43: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42ab46: call 0x4013ab */
  esp -= 4; W32(esp, 0x42ab4bu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42ab4b: call 0x40105a */
  esp -= 4; W32(esp, 0x42ab50u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42ab50: ret  */
  esp += 4; SPILL(); return;
}

void f_42ab51(void) {
  LOAD_REGS();
L_42ab51: /* 42ab51: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 42ab55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ab56: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ab5a: call 0x42a0de */
  esp -= 4; W32(esp, 0x42ab5fu); SPILL(); f_42a0de(); if (g_unwind) return; RELOAD();
/* 42ab5f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ab60: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ab61: ret  */
  esp += 4; SPILL(); return;
}

void f_42ab62(void) {
  LOAD_REGS();
L_42ab62: /* 42ab62: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42ab64: push 0x440e20 */
  { uint32_t v = 0x440e20u; esp -= 4; W32(esp, v); }
/* 42ab69: call 0x40101f */
  esp -= 4; W32(esp, 0x42ab6eu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42ab6e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42ab71: cmp edi, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42ab77: jae 0x42abb1 */
  if (!cf) goto L_42abb1;
L_42ab79: /* 42ab79: mov ecx, edi */
  ecx = edi;
/* 42ab7b: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42ab7e: mov eax, edi */
  eax = edi;
/* 42ab80: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42ab83: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42ab86: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42ab8d: xor ebx, ebx */
  ebx = 0;
/* 42ab8f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42ab90: test byte ptr [ecx + eax*4 + 4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*4 + 0x4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42ab94: je 0x42abb1 */
  if (zf) goto L_42abb1;
L_42ab96: /* 42ab96: call 0x42d9c2 */
  esp -= 4; W32(esp, 0x42ab9bu); SPILL(); f_42d9c2(); if (g_unwind) return; RELOAD();
/* 42ab9b: mov esi, eax */
  esi = eax;
/* 42ab9d: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42aba0: xor edx, edx */
  edx = 0;
/* 42aba2: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aba4: jne 0x42abb9 */
  if (!zf) goto L_42abb9;
L_42aba6: /* 42aba6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42ababu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42abab: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
L_42abb1: /* 42abb1: xor eax, eax */
  eax = 0;
L_42abb3: /* 42abb3: call 0x40105a */
  esp -= 4; W32(esp, 0x42abb8u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42abb8: ret  */
  esp += 4; SPILL(); return;
L_42abb9: /* 42abb9: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 42abbc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 42abbf: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 42abc1: cmp al, 0x61 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42abc3: je 0x42abdc */
  if (zf) goto L_42abdc;
L_42abc5: /* 42abc5: cmp al, 0x72 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x72u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42abc7: je 0x42abd7 */
  if (zf) goto L_42abd7;
L_42abc9: /* 42abc9: cmp al, 0x77 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x77u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42abcb: je 0x42abdc */
  if (zf) goto L_42abdc;
L_42abcd: /* 42abcd: xor esi, esi */
  esi = 0;
/* 42abcf: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42abd2: jmp 0x42ac67 */
  goto L_42ac67;
L_42abd7: /* 42abd7: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 42abda: jmp 0x42abe3 */
  goto L_42abe3;
L_42abdc: /* 42abdc: mov dword ptr [esi + 0xc], 2 */
  W32((uint32_t)(esi + 0xcu), 0x2u);
L_42abe3: /* 42abe3: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 42abe6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 42abe9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 42abec: mov eax, dword ptr [0x449238] */
  eax = R32((uint32_t)(0x449238u));
/* 42abf1: or dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_42abf4: /* 42abf4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42abf5: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 42abf8: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 42abfa: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42abfc: je 0x42ac64 */
  if (zf) goto L_42ac64;
L_42abfe: /* 42abfe: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ac02: je 0x42ac64 */
  if (zf) goto L_42ac64;
L_42ac04: /* 42ac04: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 42ac07: sub eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ac0a: je 0x42ac47 */
  if (zf) goto L_42ac47;
L_42ac0c: /* 42ac0c: sub eax, 0x37 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ac0f: je 0x42ac1e */
  if (zf) goto L_42ac1e;
L_42ac11: /* 42ac11: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42ac12: je 0x42ac38 */
  if (zf) goto L_42ac38;
L_42ac14: /* 42ac14: sub eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ac17: je 0x42ac29 */
  if (zf) goto L_42ac29;
L_42ac19: /* 42ac19: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42ac1c: jne 0x42ac4e */
  if (!zf) goto L_42ac4e;
L_42ac1e: /* 42ac1e: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ac22: jne 0x42ac4e */
  if (!zf) goto L_42ac4e;
L_42ac24: /* 42ac24: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42ac27: jmp 0x42abf4 */
  goto L_42abf4;
L_42ac29: /* 42ac29: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ac2d: jne 0x42ac4e */
  if (!zf) goto L_42ac4e;
L_42ac2f: /* 42ac2f: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 42ac32: and byte ptr [esi + 0xd], 0xbf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0xbfu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0xdu), r);
  }
/* 42ac36: jmp 0x42abf4 */
  goto L_42abf4;
L_42ac38: /* 42ac38: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ac3c: jne 0x42ac4e */
  if (!zf) goto L_42ac4e;
L_42ac3e: /* 42ac3e: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 42ac41: or byte ptr [esi + 0xd], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0xdu), r);
  }
/* 42ac45: jmp 0x42abf4 */
  goto L_42abf4;
L_42ac47: /* 42ac47: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42ac4a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42ac4c: jns 0x42ac54 */
  if (!sf) goto L_42ac54;
L_42ac4e: /* 42ac4e: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42ac52: jmp 0x42abf4 */
  goto L_42abf4;
L_42ac54: /* 42ac54: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42ac59: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42ac5c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42ac5f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42ac62: jmp 0x42abf4 */
  goto L_42abf4;
L_42ac64: /* 42ac64: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
L_42ac67: /* 42ac67: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ac6b: call 0x42ac7a */
  esp -= 4; W32(esp, 0x42ac70u); SPILL(); f_42ac7a(); if (g_unwind) return; RELOAD();
/* 42ac70: mov eax, esi */
  eax = esi;
/* 42ac72: jmp 0x42abb3 */
  goto L_42abb3;
}

void f_42ac77(void) {
  LOAD_REGS();
L_42ac77: /* 42ac77: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
  SPILL(); f_42ac7a(); return;
}

void f_42ac7a(void) {
  LOAD_REGS();
L_42ac7a: /* 42ac7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ac7b: call 0x413925 */
  esp -= 4; W32(esp, 0x42ac80u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42ac80: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ac81: ret  */
  esp += 4; SPILL(); return;
}

void f_42ac82(void) {
  LOAD_REGS();
L_42ac82: /* 42ac82: push 0x449568 */
  { uint32_t v = 0x449568u; esp -= 4; W32(esp, v); }
/* 42ac87: call 0x42c564 */
  esp -= 4; W32(esp, 0x42ac8cu); SPILL(); f_42c564(); if (g_unwind) return; RELOAD();
/* 42ac8c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ac8d: ret  */
  esp += 4; SPILL(); return;
}

void f_42ac8e(void) {
  LOAD_REGS();
L_42ac8e: /* 42ac8e: jmp 0x42ac82 */
  SPILL(); f_42ac82(); return;
}

void f_42ac90(void) {
  LOAD_REGS();
L_42ac90: /* 42ac90: push 0x449568 */
  { uint32_t v = 0x449568u; esp -= 4; W32(esp, v); }
/* 42ac95: call 0x42c750 */
  esp -= 4; W32(esp, 0x42ac9au); SPILL(); f_42c750(); if (g_unwind) return; RELOAD();
/* 42ac9a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ac9b: ret  */
  esp += 4; SPILL(); return;
}

void f_42ac9c(void) {
  LOAD_REGS();
L_42ac9c: /* 42ac9c: jmp 0x42ac90 */
  SPILL(); f_42ac90(); return;
}

void f_42ac9e(void) {
  LOAD_REGS();
L_42ac9e: /* 42ac9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ac9f: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 42aca3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42aca6: test al, 0x83 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42aca8: je 0x42ad7a */
  if (zf) goto L_42ad7a;
L_42acae: /* 42acae: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42acb0: jne 0x42ad7a */
  if (!zf) goto L_42ad7a;
L_42acb6: /* 42acb6: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42acb8: je 0x42acc5 */
  if (zf) goto L_42acc5;
L_42acba: /* 42acba: or eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42acbd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42acc0: jmp 0x42ad7a */
  goto L_42ad7a;
L_42acc5: /* 42acc5: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42acc8: test ax, 0x10c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42accc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42accf: jne 0x42acda */
  if (!zf) goto L_42acda;
L_42acd1: /* 42acd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42acd2: call 0x414589 */
  esp -= 4; W32(esp, 0x42acd7u); SPILL(); f_414589(); if (g_unwind) return; RELOAD();
/* 42acd7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42acd8: jmp 0x42acdf */
  goto L_42acdf;
L_42acda: /* 42acda: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 42acdd: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_42acdf: /* 42acdf: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 42ace2: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ace5: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 42ace8: call 0x4251e0 */
  esp -= 4; W32(esp, 0x42acedu); SPILL(); f_4251e0(); if (g_unwind) return; RELOAD();
/* 42aced: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42acf0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42acf2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 42acf5: je 0x42ad69 */
  if (zf) goto L_42ad69;
L_42acf7: /* 42acf7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42acfa: je 0x42ad69 */
  if (zf) goto L_42ad69;
L_42acfc: /* 42acfc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 42acff: test dl, 0x82 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x82u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42ad02: jne 0x42ad3e */
  if (!zf) goto L_42ad3e;
L_42ad04: /* 42ad04: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 42ad07: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ad0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42ad0b: je 0x42ad24 */
  if (zf) goto L_42ad24;
L_42ad0d: /* 42ad0d: mov edi, ecx */
  edi = ecx;
/* 42ad0f: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 42ad12: mov edi, dword ptr [edi*4 + 0x449240] */
  edi = R32((uint32_t)(edi*4 + 0x449240u));
/* 42ad19: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 42ad1c: lea ecx, [ecx + ecx*8] */
  ecx = (uint32_t)(ecx + ecx*8);
/* 42ad1f: lea edi, [edi + ecx*4] */
  edi = (uint32_t)(edi + ecx*4);
/* 42ad22: jmp 0x42ad29 */
  goto L_42ad29;
L_42ad24: /* 42ad24: mov edi, 0x449008 */
  edi = 0x449008u;
L_42ad29: /* 42ad29: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* 42ad2c: and cl, 0x82 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x82u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42ad2f: cmp cl, 0x82 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x82u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42ad32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42ad33: jne 0x42ad3e */
  if (!zf) goto L_42ad3e;
L_42ad35: /* 42ad35: or edx, 0x2000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 42ad3b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
L_42ad3e: /* 42ad3e: cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ad45: jne 0x42ad5b */
  if (!zf) goto L_42ad5b;
L_42ad47: /* 42ad47: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 42ad4a: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42ad4d: je 0x42ad5b */
  if (zf) goto L_42ad5b;
L_42ad4f: /* 42ad4f: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42ad52: jne 0x42ad5b */
  if (!zf) goto L_42ad5b;
L_42ad54: /* 42ad54: mov dword ptr [esi + 0x18], 0x1000 */
  W32((uint32_t)(esi + 0x18u), 0x1000u);
L_42ad5b: /* 42ad5b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42ad5d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42ad5e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 42ad61: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 42ad64: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42ad65: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42ad67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42ad68: ret  */
  esp += 4; SPILL(); return;
L_42ad69: /* 42ad69: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 42ad6b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 42ad6d: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42ad70: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42ad73: or dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 42ad76: and dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
L_42ad7a: /* 42ad7a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42ad7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42ad7e: ret  */
  esp += 4; SPILL(); return;
}

void f_42ad7f(void) {
  LOAD_REGS();
L_42ad7f: /* 42ad7f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 42ad83: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 42ad86: ret  */
  esp += 4; SPILL(); return;
}

void f_42ad87(void) {
  LOAD_REGS();
L_42ad87: /* 42ad87: push 0x449588 */
  { uint32_t v = 0x449588u; esp -= 4; W32(esp, v); }
/* 42ad8c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ad90: call 0x42c814 */
  esp -= 4; W32(esp, 0x42ad95u); SPILL(); f_42c814(); if (g_unwind) return; RELOAD();
/* 42ad95: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ad96: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ad97: ret  */
  esp += 4; SPILL(); return;
}

void f_42ad98(void) {
  LOAD_REGS();
L_42ad98: /* 42ad98: jmp 0x42ad87 */
  SPILL(); f_42ad87(); return;
}

void f_42ad9a(void) {
  LOAD_REGS();
L_42ad9a: /* 42ad9a: push 0x449588 */
  { uint32_t v = 0x449588u; esp -= 4; W32(esp, v); }
/* 42ad9f: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ada3: call 0x42c8dd */
  esp -= 4; W32(esp, 0x42ada8u); SPILL(); f_42c8dd(); if (g_unwind) return; RELOAD();
/* 42ada8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ada9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42adaa: ret  */
  esp += 4; SPILL(); return;
}

void f_42adab(void) {
  LOAD_REGS();
L_42adab: /* 42adab: jmp 0x42ad9a */
  SPILL(); f_42ad9a(); return;
}

void f_42adad(void) {
  LOAD_REGS();
L_42adad: /* 42adad: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42adaf: push 0x440e30 */
  { uint32_t v = 0x440e30u; esp -= 4; W32(esp, v); }
/* 42adb4: call 0x40101f */
  esp -= 4; W32(esp, 0x42adb9u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42adb9: call 0x42d9c2 */
  esp -= 4; W32(esp, 0x42adbeu); SPILL(); f_42d9c2(); if (g_unwind) return; RELOAD();
/* 42adbe: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42adc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42adc3: jne 0x42add4 */
  if (!zf) goto L_42add4;
L_42adc5: /* 42adc5: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42adcau); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42adca: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
/* 42add0: xor eax, eax */
  eax = 0;
/* 42add2: jmp 0x42adf9 */
  goto L_42adf9;
L_42add4: /* 42add4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42add8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42add9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42addc: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42addf: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ade2: call 0x42dae4 */
  esp -= 4; W32(esp, 0x42ade7u); SPILL(); f_42dae4(); if (g_unwind) return; RELOAD();
/* 42ade7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42adea: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42aded: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42adf1: call 0x42adff */
  esp -= 4; W32(esp, 0x42adf6u); SPILL(); f_42adff(); if (g_unwind) return; RELOAD();
/* 42adf6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_42adf9: /* 42adf9: call 0x40105a */
  esp -= 4; W32(esp, 0x42adfeu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42adfe: ret  */
  esp += 4; SPILL(); return;
}

void f_42adff(void) {
  LOAD_REGS();
L_42adff: /* 42adff: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42ae02: call 0x413925 */
  esp -= 4; W32(esp, 0x42ae07u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42ae07: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ae08: ret  */
  esp += 4; SPILL(); return;
}

void f_42ae09(void) {
  LOAD_REGS();
L_42ae09: /* 42ae09: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 42ae0b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42ae0f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42ae13: call 0x42adad */
  esp -= 4; W32(esp, 0x42ae18u); SPILL(); f_42adad(); if (g_unwind) return; RELOAD();
/* 42ae18: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ae1b: ret  */
  esp += 4; SPILL(); return;
}

void f_42ae1c(void) {
  LOAD_REGS();
L_42ae1c: /* 42ae1c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42ae1e: push 0x440e40 */
  { uint32_t v = 0x440e40u; esp -= 4; W32(esp, v); }
/* 42ae23: call 0x40101f */
  esp -= 4; W32(esp, 0x42ae28u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42ae28: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42ae2b: cmp esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42ae2e: jl 0x42af0e */
  if ((sf != of)) goto L_42af0e;
L_42ae34: /* 42ae34: cmp esi, 0x800 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42ae3a: jg 0x42af0e */
  if ((!zf && sf == of)) goto L_42af0e;
L_42ae40: /* 42ae40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42ae42: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42ae47u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42ae47: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ae48: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ae4c: mov eax, dword ptr [0x44ab68] */
  eax = R32((uint32_t)(0x44ab68u));
/* 42ae51: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42ae53: jle 0x42ae92 */
  if ((zf || sf != of)) goto L_42ae92;
L_42ae55: /* 42ae55: mov eax, esi */
  eax = esi;
/* 42ae57: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42ae5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ae5b: push dword ptr [0x44ab78] */
  { uint32_t v = R32((uint32_t)(0x44ab78u)); esp -= 4; W32(esp, v); }
/* 42ae61: call 0x401c76 */
  esp -= 4; W32(esp, 0x42ae66u); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 42ae66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ae67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ae68: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42ae6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ae6d: je 0x42aef3 */
  if (zf) goto L_42aef3;
L_42ae73: /* 42ae73: mov ecx, dword ptr [0x44ab68] */
  ecx = R32((uint32_t)(0x44ab68u));
L_42ae79: /* 42ae79: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 42ae7c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42ae7e: jge 0x42ae87 */
  if ((sf == of)) goto L_42ae87;
L_42ae80: /* 42ae80: and dword ptr [eax + ecx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 42ae84: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42ae85: jmp 0x42ae79 */
  goto L_42ae79;
L_42ae87: /* 42ae87: mov dword ptr [0x44ab68], esi */
  W32((uint32_t)(0x44ab68u), esi);
/* 42ae8d: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 42ae90: jmp 0x42aeec */
  goto L_42aeec;
L_42ae92: /* 42ae92: jne 0x42ae99 */
  if (!zf) goto L_42ae99;
L_42ae94: /* 42ae94: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42ae97: jmp 0x42aef7 */
  goto L_42aef7;
L_42ae99: /* 42ae99: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 42ae9c: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_42ae9f: /* 42ae9f: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 42aea2: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42aea4: jl 0x42aec6 */
  if ((sf != of)) goto L_42aec6;
L_42aea6: /* 42aea6: mov eax, dword ptr [0x44ab78] */
  eax = R32((uint32_t)(0x44ab78u));
/* 42aeab: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 42aeae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42aeb0: je 0x42aebf */
  if (zf) goto L_42aebf;
L_42aeb2: /* 42aeb2: test byte ptr [eax + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42aeb6: jne 0x42aec2 */
  if (!zf) goto L_42aec2;
L_42aeb8: /* 42aeb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42aeb9: call 0x401156 */
  esp -= 4; W32(esp, 0x42aebeu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42aebe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42aebf: /* 42aebf: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 42aec0: jmp 0x42ae9f */
  goto L_42ae9f;
L_42aec2: /* 42aec2: or dword ptr [ebp - 0x24], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
L_42aec6: /* 42aec6: cmp dword ptr [ebp - 0x24], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42aeca: je 0x42aef7 */
  if (zf) goto L_42aef7;
L_42aecc: /* 42aecc: mov eax, esi */
  eax = esi;
/* 42aece: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42aed1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42aed2: push dword ptr [0x44ab78] */
  { uint32_t v = R32((uint32_t)(0x44ab78u)); esp -= 4; W32(esp, v); }
/* 42aed8: call 0x401c76 */
  esp -= 4; W32(esp, 0x42aeddu); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 42aedd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42aede: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42aedf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42aee2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42aee4: je 0x42aef3 */
  if (zf) goto L_42aef3;
L_42aee6: /* 42aee6: mov dword ptr [0x44ab68], esi */
  W32((uint32_t)(0x44ab68u), esi);
L_42aeec: /* 42aeec: mov dword ptr [0x44ab78], eax */
  W32((uint32_t)(0x44ab78u), eax);
/* 42aef1: jmp 0x42aef7 */
  goto L_42aef7;
L_42aef3: /* 42aef3: or dword ptr [ebp - 0x24], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
L_42aef7: /* 42aef7: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42aefb: call 0x42af05 */
  esp -= 4; W32(esp, 0x42af00u); SPILL(); f_42af05(); if (g_unwind) return; RELOAD();
/* 42af00: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42af03: jmp 0x42af11 */
  goto L_42af11;
L_42af0e: /* 42af0e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42af11: /* 42af11: call 0x40105a */
  esp -= 4; W32(esp, 0x42af16u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42af16: ret  */
  esp += 4; SPILL(); return;
}

void f_42af05(void) {
  LOAD_REGS();
L_42af05: /* 42af05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42af07: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42af0cu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42af0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42af0d: ret  */
  esp += 4; SPILL(); return;
}

void f_42af17(void) {
  LOAD_REGS();
L_42af17: /* 42af17: mov eax, dword ptr [0x44ab68] */
  eax = R32((uint32_t)(0x44ab68u));
/* 42af1c: ret  */
  esp += 4; SPILL(); return;
}

void f_42af1d(void) {
  LOAD_REGS();
L_42af1d: /* 42af1d: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 42af1f: push 0x440e50 */
  { uint32_t v = 0x440e50u; esp -= 4; W32(esp, v); }
/* 42af24: call 0x40101f */
  esp -= 4; W32(esp, 0x42af29u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42af29: mov dword ptr [ebp - 0x1c], 4 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x4u);
/* 42af30: lea edi, [ebp - 0x20] */
  edi = (uint32_t)(ebp + 0xffffffe0u);
/* 42af33: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42af36: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 42af39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42af3a: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42af3fu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42af3f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42af40: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42af44: /* 42af44: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42af47: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42af4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42af4c: je 0x42af6c */
  if (zf) goto L_42af6c;
L_42af4e: /* 42af4e: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42af51: js 0x42af5d */
  if (sf) goto L_42af5d;
L_42af53: /* 42af53: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42af55: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 42af58: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42af59: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42af5b: jmp 0x42af64 */
  goto L_42af64;
L_42af5d: /* 42af5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42af5e: call 0x42ac9e */
  esp -= 4; W32(esp, 0x42af63u); SPILL(); f_42ac9e(); if (g_unwind) return; RELOAD();
/* 42af63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42af64: /* 42af64: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 42af66: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42af67: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 42af6a: jmp 0x42af44 */
  goto L_42af44;
L_42af6c: /* 42af6c: test byte ptr [esi + 0xc], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42af70: jne 0x42af77 */
  if (!zf) goto L_42af77;
L_42af72: /* 42af72: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42af75: jmp 0x42af7a */
  goto L_42af7a;
L_42af77: /* 42af77: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42af7a: /* 42af7a: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 42af7d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42af81: call 0x42af92 */
  esp -= 4; W32(esp, 0x42af86u); SPILL(); f_42af92(); if (g_unwind) return; RELOAD();
/* 42af86: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 42af89: call 0x40105a */
  esp -= 4; W32(esp, 0x42af8eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42af8e: ret  */
  esp += 4; SPILL(); return;
}

void f_42af8f(void) {
  LOAD_REGS();
L_42af8f: /* 42af8f: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
  SPILL(); f_42af92(); return;
}

void f_42af92(void) {
  LOAD_REGS();
L_42af92: /* 42af92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42af93: call 0x413925 */
  esp -= 4; W32(esp, 0x42af98u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42af98: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42af99: ret  */
  esp += 4; SPILL(); return;
}

void f_42af9a(void) {
  LOAD_REGS();
L_42af9a: /* 42af9a: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42af9c: push 0x440e60 */
  { uint32_t v = 0x440e60u; esp -= 4; W32(esp, v); }
/* 42afa1: call 0x40101f */
  esp -= 4; W32(esp, 0x42afa6u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42afa6: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42afa9: mov edi, ebx */
  edi = ebx;
/* 42afab: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42afae: mov esi, 0x449568 */
  esi = 0x449568u;
/* 42afb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42afb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42afb6: call 0x404166 */
  esp -= 4; W32(esp, 0x42afbbu); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42afbb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42afbc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42afbd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42afc1: /* 42afc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42afc2: call 0x42c65c */
  esp -= 4; W32(esp, 0x42afc7u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42afc7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42afc8: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 42afcb: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42afce: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42afd1: je 0x42afee */
  if (zf) goto L_42afee;
L_42afd3: /* 42afd3: cmp eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42afd8: jne 0x42afe4 */
  if (!zf) goto L_42afe4;
L_42afda: /* 42afda: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42afdc: jne 0x42afee */
  if (!zf) goto L_42afee;
L_42afde: /* 42afde: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42afe2: jmp 0x42aff2 */
  goto L_42aff2;
L_42afe4: /* 42afe4: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 42afe7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42afe8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42afe9: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 42afec: jmp 0x42afc1 */
  goto L_42afc1;
L_42afee: /* 42afee: and word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(edi), r);
  }
L_42aff2: /* 42aff2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42aff6: call 0x42b009 */
  esp -= 4; W32(esp, 0x42affbu); SPILL(); f_42b009(); if (g_unwind) return; RELOAD();
/* 42affb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42affe: call 0x40105a */
  esp -= 4; W32(esp, 0x42b003u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42b003: ret  */
  esp += 4; SPILL(); return;
}

void f_42b004(void) {
  LOAD_REGS();
L_42b004: /* 42b004: mov esi, 0x449568 */
  esi = 0x449568u;
  SPILL(); f_42b009(); return;
}

void f_42b009(void) {
  LOAD_REGS();
L_42b009: /* 42b009: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b00a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42b00c: call 0x404275 */
  esp -= 4; W32(esp, 0x42b011u); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42b011: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b012: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b013: ret  */
  esp += 4; SPILL(); return;
}

void f_42b014(void) {
  LOAD_REGS();
L_42b014: /* 42b014: mov edx, dword ptr [0x44f568] */
  edx = R32((uint32_t)(0x44f568u));
/* 42b01a: mov ecx, dword ptr [0x44f56c] */
  ecx = R32((uint32_t)(0x44f56cu));
/* 42b020: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 42b023: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b024: mov eax, ecx */
  eax = ecx;
/* 42b026: lea esi, [edx + ecx] */
  esi = (uint32_t)(edx + ecx);
/* 42b029: jmp 0x42b032 */
  goto L_42b032;
L_42b02b: /* 42b02b: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b02d: je 0x42b036 */
  if (zf) goto L_42b036;
L_42b02f: /* 42b02f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_42b032: /* 42b032: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42b034: jb 0x42b02b */
  if (cf) goto L_42b02b;
L_42b036: /* 42b036: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42b038: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42b039: jb 0x42b066 */
  if (cf) goto L_42b066;
L_42b03b: /* 42b03b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b03d: jne 0x42b064 */
  if (!zf) goto L_42b064;
L_42b03f: /* 42b03f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 42b042: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42b043: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42b044: call 0x401c76 */
  esp -= 4; W32(esp, 0x42b049u); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 42b049: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b04b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b04c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b04d: je 0x42b064 */
  if (zf) goto L_42b064;
L_42b04f: /* 42b04f: mov ecx, dword ptr [0x44f568] */
  ecx = R32((uint32_t)(0x44f568u));
/* 42b055: inc dword ptr [0x44f568] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f568u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f568u), r);
  }
/* 42b05b: mov dword ptr [0x44f56c], eax */
  W32((uint32_t)(0x44f56cu), eax);
/* 42b060: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 42b063: ret  */
  esp += 4; SPILL(); return;
L_42b064: /* 42b064: xor eax, eax */
  eax = 0;
L_42b066: /* 42b066: ret  */
  esp += 4; SPILL(); return;
}

void f_42b067(void) {
  LOAD_REGS();
L_42b067: /* 42b067: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 42b06c: push 0x440e78 */
  { uint32_t v = 0x440e78u; esp -= 4; W32(esp, v); }
/* 42b071: call 0x40101f */
  esp -= 4; W32(esp, 0x42b076u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42b076: xor ebx, ebx */
  ebx = 0;
/* 42b078: xor ecx, ecx */
  ecx = 0;
/* 42b07a: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42b07d: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 42b080: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b083: je 0x42b43b */
  if (zf) goto L_42b43b;
L_42b089: /* 42b089: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42b08c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b08e: je 0x42b43b */
  if (zf) goto L_42b43b;
L_42b094: /* 42b094: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 42b096: cmp al, 0x77 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x77u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b098: je 0x42b0a2 */
  if (zf) goto L_42b0a2;
L_42b09a: /* 42b09a: cmp al, 0x72 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x72u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b09c: jne 0x42b43b */
  if (!zf) goto L_42b43b;
L_42b0a2: /* 42b0a2: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 42b0a5: cmp al, 0x74 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x74u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b0a7: jne 0x42b0b0 */
  if (!zf) goto L_42b0b0;
L_42b0a9: /* 42b0a9: mov ecx, 0x4000 */
  ecx = 0x4000u;
/* 42b0ae: jmp 0x42b0b9 */
  goto L_42b0b9;
L_42b0b0: /* 42b0b0: cmp al, 0x62 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x62u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b0b2: jne 0x42b0b9 */
  if (!zf) goto L_42b0b9;
L_42b0b4: /* 42b0b4: mov ecx, 0x8000 */
  ecx = 0x8000u;
L_42b0b9: /* 42b0b9: or ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42b0bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42b0c0: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 42b0c5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 42b0c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b0c9: call 0x424db4 */
  esp -= 4; W32(esp, 0x42b0ceu); SPILL(); f_424db4(); if (g_unwind) return; RELOAD();
/* 42b0ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b0d1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b0d4: je 0x42b43b */
  if (zf) goto L_42b43b;
L_42b0da: /* 42b0da: xor edi, edi */
  edi = 0;
/* 42b0dc: cmp byte ptr [esi], 0x77 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x77u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b0df: jne 0x42b0ed */
  if (!zf) goto L_42b0ed;
L_42b0e1: /* 42b0e1: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 42b0e4: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 42b0e7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42b0e8: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 42b0eb: jmp 0x42b0fa */
  goto L_42b0fa;
L_42b0ed: /* 42b0ed: xor eax, eax */
  eax = 0;
/* 42b0ef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42b0f0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 42b0f3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 42b0f6: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 42b0f9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_42b0fa: /* 42b0fa: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42b0fc: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42b101u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42b101: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b102: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b104: jne 0x42b11f */
  if (!zf) goto L_42b11f;
L_42b106: /* 42b106: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42b109: call 0x415b93 */
  esp -= 4; W32(esp, 0x42b10eu); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42b10e: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42b111: call 0x415b93 */
  esp -= 4; W32(esp, 0x42b116u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42b116: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b117: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b118: xor eax, eax */
  eax = 0;
/* 42b11a: jmp 0x42b43e */
  goto L_42b43e;
L_42b11f: /* 42b11f: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42b121: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42b126u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42b126: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b127: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42b12a: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 42b12d: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 42b130: call dword ptr [0x439018] */
  esp -= 4; W32(esp, 0x42b136u); SPILL(); call_ind(R32(0x439018u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 42b136: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 42b139: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42b13c: lea esi, [ebp + esi*4 - 0x28] */
  esi = (uint32_t)(ebp + esi*4 + 0xffffffd8u);
/* 42b140: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 42b142: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42b144: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b145: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b146: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 42b149: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42b14a: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 42b14d: mov ecx, eax */
  ecx = eax;
/* 42b14f: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42b152: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42b155: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42b158: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42b15f: push dword ptr [ecx + eax*4] */
  { uint32_t v = R32((uint32_t)(ecx + eax*4)); esp -= 4; W32(esp, v); }
/* 42b162: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 42b165: call dword ptr [0x43921c] */
  esp -= 4; W32(esp, 0x42b16bu); SPILL(); call_ind(R32(0x43921cu)); if (g_unwind) return; /* KERNEL32!DuplicateHandle */ RELOAD();
/* 42b16b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b16d: je 0x42b406 */
  if (zf) goto L_42b406;
L_42b173: /* 42b173: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 42b175: call 0x415b93 */
  esp -= 4; W32(esp, 0x42b17au); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42b17a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42b17d: mov dword ptr [ebp + eax*4 - 0x3c], ebx */
  W32((uint32_t)(ebp + eax*4 + 0xffffffc4u), ebx);
/* 42b181: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42b184: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42b187: push dword ptr [ebp + eax*4 - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + eax*4 + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42b18b: call 0x42ab62 */
  esp -= 4; W32(esp, 0x42b190u); SPILL(); f_42ab62(); if (g_unwind) return; RELOAD();
/* 42b190: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b193: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42b196: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b198: je 0x42b406 */
  if (zf) goto L_42b406;
L_42b19e: /* 42b19e: xor edi, edi */
  edi = 0;
/* 42b1a0: call 0x42b014 */
  esp -= 4; W32(esp, 0x42b1a5u); SPILL(); f_42b014(); if (g_unwind) return; RELOAD();
/* 42b1a5: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42b1a8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b1aa: je 0x42b3f3 */
  if (zf) goto L_42b3f3;
L_42b1b0: /* 42b1b0: push 0x44088c */
  { uint32_t v = 0x44088cu; esp -= 4; W32(esp, v); }
/* 42b1b5: call 0x4164c5 */
  esp -= 4; W32(esp, 0x42b1bau); SPILL(); f_4164c5(); if (g_unwind) return; RELOAD();
/* 42b1ba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b1bb: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 42b1be: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b1c0: jne 0x42b1ec */
  if (!zf) goto L_42b1ec;
L_42b1c2: /* 42b1c2: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42b1c7u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42b1c7: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b1ca: je 0x42b1d6 */
  if (zf) goto L_42b1d6;
L_42b1cc: /* 42b1cc: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42b1d1u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42b1d1: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b1d4: jne 0x42b1ec */
  if (!zf) goto L_42b1ec;
L_42b1d6: /* 42b1d6: test byte ptr [0x4491d9], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x4491d9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42b1dd: mov eax, 0x44087c */
  eax = 0x44087cu;
/* 42b1e2: jne 0x42b1e9 */
  if (!zf) goto L_42b1e9;
L_42b1e4: /* 42b1e4: mov eax, 0x440874 */
  eax = 0x440874u;
L_42b1e9: /* 42b1e9: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_42b1ec: /* 42b1ec: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 42b1ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42b1ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b1f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b1f1: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 42b1f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b1f8: call 0x4010fd */
  esp -= 4; W32(esp, 0x42b1fdu); SPILL(); hle_memset(); RELOAD();
/* 42b1fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b200: mov dword ptr [ebp - 0x90], esi */
  W32((uint32_t)(ebp + 0xffffff70u), esi);
/* 42b206: mov dword ptr [ebp - 0x64], 0x100 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x100u);
/* 42b20d: mov eax, dword ptr [0x449240] */
  eax = R32((uint32_t)(0x449240u));
/* 42b212: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b215: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42b218: je 0x42b21c */
  if (zf) goto L_42b21c;
L_42b21a: /* 42b21a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
L_42b21c: /* 42b21c: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42b21f: cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b223: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42b226: je 0x42b22b */
  if (zf) goto L_42b22b;
L_42b228: /* 42b228: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
L_42b22b: /* 42b22b: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 42b22e: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 42b231: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 42b234: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42b237: call 0x402493 */
  esp -= 4; W32(esp, 0x42b23cu); SPILL(); hle_strlen(); RELOAD();
/* 42b23c: mov edi, eax */
  edi = eax;
/* 42b23e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42b241: call 0x402493 */
  esp -= 4; W32(esp, 0x42b246u); SPILL(); hle_strlen(); RELOAD();
/* 42b246: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42b248: mov esi, 0x440e6c */
  esi = 0x440e6cu;
/* 42b24d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b24e: call 0x402493 */
  esp -= 4; W32(esp, 0x42b253u); SPILL(); hle_strlen(); RELOAD();
/* 42b253: lea eax, [edi + eax + 1] */
  eax = (uint32_t)(edi + eax + 0x1u);
/* 42b257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b258: call 0x4010eb */
  esp -= 4; W32(esp, 0x42b25du); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42b25d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b260: mov edi, eax */
  edi = eax;
/* 42b262: mov dword ptr [ebp - 0x94], edi */
  W32((uint32_t)(ebp + 0xffffff6cu), edi);
/* 42b268: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b26a: je 0x42b3f3 */
  if (zf) goto L_42b3f3;
L_42b270: /* 42b270: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42b273: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b274: call 0x404b3a */
  esp -= 4; W32(esp, 0x42b279u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42b279: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b27a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b27b: call 0x401d57 */
  esp -= 4; W32(esp, 0x42b280u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 42b280: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42b283: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b284: call 0x401d57 */
  esp -= 4; W32(esp, 0x42b289u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 42b289: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b28a: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42b28d: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42b292u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42b292: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b295: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b298: je 0x42b2c1 */
  if (zf) goto L_42b2c1;
L_42b29a: /* 42b29a: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 42b2a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b2a1: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 42b2a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b2a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b2a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b2aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b2ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42b2ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b2ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b2af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b2b0: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42b2b3: call dword ptr [0x4391e0] */
  esp -= 4; W32(esp, 0x42b2b9u); SPILL(); call_ind(R32(0x4391e0u)); if (g_unwind) return; /* KERNEL32!CreateProcessA */ RELOAD();
/* 42b2b9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42b2bc: jmp 0x42b3c0 */
  goto L_42b3c0;
L_42b2c1: /* 42b2c1: push 0x440814 */
  { uint32_t v = 0x440814u; esp -= 4; W32(esp, v); }
/* 42b2c6: call 0x4164c5 */
  esp -= 4; W32(esp, 0x42b2cbu); SPILL(); f_4164c5(); if (g_unwind) return; RELOAD();
/* 42b2cb: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 42b2d1: mov dword ptr [esp], 0x104 */
  W32((uint32_t)(esp), 0x104u);
/* 42b2d8: call 0x4010eb */
  esp -= 4; W32(esp, 0x42b2ddu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42b2dd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b2de: mov esi, eax */
  esi = eax;
/* 42b2e0: mov dword ptr [ebp - 0xac], esi */
  W32((uint32_t)(ebp + 0xffffff54u), esi);
/* 42b2e6: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b2e8: jne 0x42b2f6 */
  if (!zf) goto L_42b2f6;
L_42b2ea: /* 42b2ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b2eb: call 0x401156 */
  esp -= 4; W32(esp, 0x42b2f0u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42b2f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b2f1: jmp 0x42b3f3 */
  goto L_42b3f3;
L_42b2f6: /* 42b2f6: push 0x103 */
  { uint32_t v = 0x103u; esp -= 4; W32(esp, v); }
/* 42b2fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b2fc: push dword ptr [ebp - 0xa8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff58u)); esp -= 4; W32(esp, v); }
/* 42b302: call 0x4283df */
  esp -= 4; W32(esp, 0x42b307u); SPILL(); f_4283df(); if (g_unwind) return; RELOAD();
/* 42b307: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b30a: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 42b310: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b312: je 0x42b3b3 */
  if (zf) goto L_42b3b3;
L_42b318: /* 42b318: cmp byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b31a: je 0x42b3b3 */
  if (zf) goto L_42b3b3;
L_42b320: /* 42b320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b321: call 0x402493 */
  esp -= 4; W32(esp, 0x42b326u); SPILL(); hle_strlen(); RELOAD();
/* 42b326: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b327: lea edi, [eax + esi - 1] */
  edi = (uint32_t)(eax + esi + 0xffffffffu);
/* 42b32b: mov dword ptr [ebp - 0xb0], edi */
  W32((uint32_t)(ebp + 0xffffff50u), edi);
/* 42b331: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42b333: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b335: jne 0x42b345 */
  if (!zf) goto L_42b345;
L_42b337: /* 42b337: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 42b339: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b33a: call 0x427075 */
  esp -= 4; W32(esp, 0x42b33fu); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 42b33f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b340: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b341: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b343: jmp 0x42b347 */
  goto L_42b347;
L_42b345: /* 42b345: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
L_42b347: /* 42b347: je 0x42b356 */
  if (zf) goto L_42b356;
L_42b349: /* 42b349: push 0x440810 */
  { uint32_t v = 0x440810u; esp -= 4; W32(esp, v); }
/* 42b34e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b34f: call 0x401d57 */
  esp -= 4; W32(esp, 0x42b354u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 42b354: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b355: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b356: /* 42b356: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42b359: call 0x402493 */
  esp -= 4; W32(esp, 0x42b35eu); SPILL(); hle_strlen(); RELOAD();
/* 42b35e: mov edi, eax */
  edi = eax;
/* 42b360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b361: call 0x402493 */
  esp -= 4; W32(esp, 0x42b366u); SPILL(); hle_strlen(); RELOAD();
/* 42b366: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b367: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b368: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42b36a: cmp edi, 0x104 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42b370: jae 0x42b3b3 */
  if (!cf) goto L_42b3b3;
L_42b372: /* 42b372: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42b375: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b376: call 0x401d57 */
  esp -= 4; W32(esp, 0x42b37bu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 42b37b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b37c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b37d: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42b382u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42b382: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b385: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b388: je 0x42b2f6 */
  if (zf) goto L_42b2f6;
L_42b38e: /* 42b38e: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 42b394: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b395: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 42b39b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b39c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b39d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b39e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b39f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42b3a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b3a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b3a3: push dword ptr [ebp - 0x94] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff6cu)); esp -= 4; W32(esp, v); }
/* 42b3a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b3aa: call dword ptr [0x4391e0] */
  esp -= 4; W32(esp, 0x42b3b0u); SPILL(); call_ind(R32(0x4391e0u)); if (g_unwind) return; /* KERNEL32!CreateProcessA */ RELOAD();
/* 42b3b0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_42b3b3: /* 42b3b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b3b4: call 0x401156 */
  esp -= 4; W32(esp, 0x42b3b9u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42b3b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b3ba: mov edi, dword ptr [ebp - 0x94] */
  edi = R32((uint32_t)(ebp + 0xffffff6cu));
L_42b3c0: /* 42b3c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b3c1: call 0x401156 */
  esp -= 4; W32(esp, 0x42b3c6u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42b3c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b3c7: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 42b3ca: call dword ptr [0x439044] */
  esp -= 4; W32(esp, 0x42b3d0u); SPILL(); call_ind(R32(0x439044u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 42b3d0: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b3d3: je 0x42b3ee */
  if (zf) goto L_42b3ee;
L_42b3d5: /* 42b3d5: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 42b3db: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 42b3e1: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42b3e4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 42b3e7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42b3ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 42b3ec: jmp 0x42b432 */
  goto L_42b432;
L_42b3ee: /* 42b3ee: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42b3f1: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_42b3f3: /* 42b3f3: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42b3f6: call 0x41441f */
  esp -= 4; W32(esp, 0x42b3fbu); SPILL(); f_41441f(); if (g_unwind) return; RELOAD();
/* 42b3fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b3fc: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42b3ff: mov dword ptr [ebp + eax*4 - 0x3c], ebx */
  W32((uint32_t)(ebp + eax*4 + 0xffffffc4u), ebx);
/* 42b403: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_42b406: /* 42b406: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42b409: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42b40c: cmp dword ptr [ebp + eax - 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + eax + 0xffffffc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b410: je 0x42b41c */
  if (zf) goto L_42b41c;
L_42b412: /* 42b412: push dword ptr [ebp + eax - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + eax + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42b416: call 0x415b93 */
  esp -= 4; W32(esp, 0x42b41bu); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42b41b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b41c: /* 42b41c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42b41f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42b422: cmp dword ptr [ebp + eax - 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + eax + 0xffffffc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b426: je 0x42b432 */
  if (zf) goto L_42b432;
L_42b428: /* 42b428: push dword ptr [ebp + eax - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + eax + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42b42c: call 0x415b93 */
  esp -= 4; W32(esp, 0x42b431u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42b431: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b432: /* 42b432: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42b436: call 0x42b444 */
  esp -= 4; W32(esp, 0x42b43bu); SPILL(); f_42b444(); if (g_unwind) return; RELOAD();
L_42b43b: /* 42b43b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_42b43e: /* 42b43e: call 0x40105a */
  esp -= 4; W32(esp, 0x42b443u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42b443: ret  */
  esp += 4; SPILL(); return;
}

void f_42b444(void) {
  LOAD_REGS();
L_42b444: /* 42b444: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42b446: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42b44bu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42b44b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b44c: ret  */
  esp += 4; SPILL(); return;
}

void f_42b44d(void) {
  LOAD_REGS();
L_42b44d: /* 42b44d: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42b44f: push 0x440e88 */
  { uint32_t v = 0x440e88u; esp -= 4; W32(esp, v); }
/* 42b454: call 0x40101f */
  esp -= 4; W32(esp, 0x42b459u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42b459: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42b45d: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42b45f: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42b464u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42b464: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b465: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b467: jne 0x42b46e */
  if (!zf) goto L_42b46e;
L_42b469: /* 42b469: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42b46c: jmp 0x42b4cd */
  goto L_42b4cd;
L_42b46e: /* 42b46e: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42b470: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42b475u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42b475: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b476: xor ebx, ebx */
  ebx = 0;
/* 42b478: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42b47b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42b47e: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b480: je 0x42b4c1 */
  if (zf) goto L_42b4c1;
L_42b482: /* 42b482: call 0x42b014 */
  esp -= 4; W32(esp, 0x42b487u); SPILL(); f_42b014(); if (g_unwind) return; RELOAD();
/* 42b487: mov esi, eax */
  esi = eax;
/* 42b489: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42b48c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b48e: je 0x42b4c1 */
  if (zf) goto L_42b4c1;
L_42b490: /* 42b490: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b491: call 0x41441f */
  esp -= 4; W32(esp, 0x42b496u); SPILL(); f_41441f(); if (g_unwind) return; RELOAD();
/* 42b496: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42b498: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42b49b: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 42b49e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b49f: call 0x420e43 */
  esp -= 4; W32(esp, 0x42b4a4u); SPILL(); f_420e43(); if (g_unwind) return; RELOAD();
/* 42b4a4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b4a7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b4aa: jne 0x42b4b6 */
  if (!zf) goto L_42b4b6;
L_42b4ac: /* 42b4ac: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42b4b1u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42b4b1: cmp dword ptr [eax], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b4b4: jne 0x42b4bc */
  if (!zf) goto L_42b4bc;
L_42b4b6: /* 42b4b6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42b4b9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_42b4bc: /* 42b4bc: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 42b4be: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
L_42b4c1: /* 42b4c1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42b4c5: call 0x42b4d3 */
  esp -= 4; W32(esp, 0x42b4cau); SPILL(); f_42b4d3(); if (g_unwind) return; RELOAD();
/* 42b4ca: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_42b4cd: /* 42b4cd: call 0x40105a */
  esp -= 4; W32(esp, 0x42b4d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42b4d2: ret  */
  esp += 4; SPILL(); return;
}

void f_42b4d3(void) {
  LOAD_REGS();
L_42b4d3: /* 42b4d3: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42b4d5: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42b4dau); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42b4da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b4db: ret  */
  esp += 4; SPILL(); return;
}

void f_42b4dc(void) {
  LOAD_REGS();
L_42b4dc: /* 42b4dc: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42b4de: push 0x440e98 */
  { uint32_t v = 0x440e98u; esp -= 4; W32(esp, v); }
/* 42b4e3: call 0x40101f */
  esp -= 4; W32(esp, 0x42b4e8u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42b4e8: mov dword ptr [ebp - 0x1c], 4 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x4u);
/* 42b4ef: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 42b4f2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42b4f5: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42b4f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b4f9: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42b4feu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42b4fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b4ff: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42b503: /* 42b503: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42b506: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42b509: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b50b: je 0x42b52e */
  if (zf) goto L_42b52e;
L_42b50d: /* 42b50d: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42b510: js 0x42b51c */
  if (sf) goto L_42b51c;
L_42b512: /* 42b512: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 42b514: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42b516: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 42b518: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 42b51a: jmp 0x42b528 */
  goto L_42b528;
L_42b51c: /* 42b51c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b51d: movsx eax, byte ptr [edi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi)));
/* 42b520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b521: call 0x414470 */
  esp -= 4; W32(esp, 0x42b526u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42b526: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b527: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b528: /* 42b528: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42b529: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 42b52c: jmp 0x42b503 */
  goto L_42b503;
L_42b52e: /* 42b52e: test byte ptr [esi + 0xc], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42b532: je 0x42b539 */
  if (zf) goto L_42b539;
L_42b534: /* 42b534: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42b537: jmp 0x42b53c */
  goto L_42b53c;
L_42b539: /* 42b539: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_42b53c: /* 42b53c: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 42b53f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42b543: call 0x42b554 */
  esp -= 4; W32(esp, 0x42b548u); SPILL(); f_42b554(); if (g_unwind) return; RELOAD();
/* 42b548: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42b54b: call 0x40105a */
  esp -= 4; W32(esp, 0x42b550u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42b550: ret  */
  esp += 4; SPILL(); return;
}

void f_42b551(void) {
  LOAD_REGS();
L_42b551: /* 42b551: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
  SPILL(); f_42b554(); return;
}

void f_42b554(void) {
  LOAD_REGS();
L_42b554: /* 42b554: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b555: call 0x413925 */
  esp -= 4; W32(esp, 0x42b55au); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42b55a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b55b: ret  */
  esp += 4; SPILL(); return;
}

void f_42b55c(void) {
  LOAD_REGS();
L_42b55c: /* 42b55c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42b55e: push 0x440ea8 */
  { uint32_t v = 0x440ea8u; esp -= 4; W32(esp, v); }
/* 42b563: call 0x40101f */
  esp -= 4; W32(esp, 0x42b568u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42b568: mov edi, 0xffff */
  edi = 0xffffu;
/* 42b56d: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 42b570: mov esi, 0x449588 */
  esi = 0x449588u;
/* 42b575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b576: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42b578: call 0x404166 */
  esp -= 4; W32(esp, 0x42b57du); SPILL(); f_404166(); if (g_unwind) return; RELOAD();
/* 42b57d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b57e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b57f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42b583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b584: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42b589u); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42b589: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b58a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_42b58d: /* 42b58d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42b590: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42b593: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b594: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42b597: je 0x42b5ac */
  if (zf) goto L_42b5ac;
L_42b599: /* 42b599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b59a: call 0x401f77 */
  esp -= 4; W32(esp, 0x42b59fu); SPILL(); f_401f77(); if (g_unwind) return; RELOAD();
/* 42b59f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b5a0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b5a1: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42b5a5: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42b5a8: jne 0x42b58d */
  if (!zf) goto L_42b58d;
L_42b5aa: /* 42b5aa: jmp 0x42b5be */
  goto L_42b5be;
L_42b5ac: /* 42b5ac: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42b5ae: call 0x401f77 */
  esp -= 4; W32(esp, 0x42b5b3u); SPILL(); f_401f77(); if (g_unwind) return; RELOAD();
/* 42b5b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b5b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b5b5: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42b5b8: je 0x42b5be */
  if (zf) goto L_42b5be;
L_42b5ba: /* 42b5ba: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_42b5be: /* 42b5be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b5bf: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42b5c2: call 0x413b5a */
  esp -= 4; W32(esp, 0x42b5c7u); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42b5c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b5c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b5c9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42b5cd: call 0x42b5e0 */
  esp -= 4; W32(esp, 0x42b5d2u); SPILL(); f_42b5e0(); if (g_unwind) return; RELOAD();
/* 42b5d2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42b5d5: call 0x40105a */
  esp -= 4; W32(esp, 0x42b5dau); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42b5da: ret  */
  esp += 4; SPILL(); return;
}

void f_42b5db(void) {
  LOAD_REGS();
L_42b5db: /* 42b5db: mov esi, 0x449588 */
  esi = 0x449588u;
  SPILL(); f_42b5e0(); return;
}

void f_42b5e0(void) {
  LOAD_REGS();
L_42b5e0: /* 42b5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b5e1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42b5e3: call 0x404275 */
  esp -= 4; W32(esp, 0x42b5e8u); SPILL(); f_404275(); if (g_unwind) return; RELOAD();
/* 42b5e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b5e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b5ea: ret  */
  esp += 4; SPILL(); return;
}

void f_42b5eb(void) {
  LOAD_REGS();
L_42b5eb: /* 42b5eb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b5ec: mov ebp, esp */
  ebp = esp;
/* 42b5ee: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42b5f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b5f2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42b5f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b5f6: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 42b5f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b5fa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42b5fd: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b601: mov dword ptr [ebp - 0x1c], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7fffffffu);
/* 42b608: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42b60f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 42b612: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42b615: call 0x413c12 */
  esp -= 4; W32(esp, 0x42b61au); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42b61a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b61d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b61f: mov edi, eax */
  edi = eax;
/* 42b621: je 0x42b63d */
  if (zf) goto L_42b63d;
L_42b623: /* 42b623: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42b626: js 0x42b630 */
  if (sf) goto L_42b630;
L_42b628: /* 42b628: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42b62b: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42b62e: jmp 0x42b63d */
  goto L_42b63d;
L_42b630: /* 42b630: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b633: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b634: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42b636: call 0x414470 */
  esp -= 4; W32(esp, 0x42b63bu); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42b63b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b63c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b63d: /* 42b63d: mov eax, edi */
  eax = edi;
/* 42b63f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42b640: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42b641: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42b642: ret  */
  esp += 4; SPILL(); return;
}

void f_42b643(void) {
  LOAD_REGS();
L_42b643: /* 42b643: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b644: mov ebp, esp */
  ebp = esp;
/* 42b646: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42b649: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 42b64d: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42b651: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 42b654: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b655: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42b658: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b65b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b65c: mov dword ptr [ebp - 0x1c], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7fffffffu);
/* 42b663: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42b66a: call 0x413c12 */
  esp -= 4; W32(esp, 0x42b66fu); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42b66f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b672: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42b673: ret  */
  esp += 4; SPILL(); return;
}

void f_42b674(void) {
  LOAD_REGS();
L_42b674: /* 42b674: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b675: mov ebp, esp */
  ebp = esp;
/* 42b677: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42b67a: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 42b67e: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42b682: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 42b685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b686: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42b689: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b68c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b68d: mov dword ptr [ebp - 0x1c], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7fffffffu);
/* 42b694: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42b69b: call 0x401feb */
  esp -= 4; W32(esp, 0x42b6a0u); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 42b6a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b6a3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42b6a4: ret  */
  esp += 4; SPILL(); return;
}

void f_42b6a5(void) {
  LOAD_REGS();
L_42b6a5: /* 42b6a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b6a6: mov ebp, esp */
  ebp = esp;
/* 42b6a8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42b6ab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42b6ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b6af: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42b6b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42b6b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b6b6: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 42b6b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b6ba: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42b6bd: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b6c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b6c1: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42b6c8: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 42b6cb: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42b6ce: call 0x413c12 */
  esp -= 4; W32(esp, 0x42b6d3u); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42b6d3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b6d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b6d8: mov edi, eax */
  edi = eax;
/* 42b6da: je 0x42b6f6 */
  if (zf) goto L_42b6f6;
L_42b6dc: /* 42b6dc: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42b6df: js 0x42b6e9 */
  if (sf) goto L_42b6e9;
L_42b6e1: /* 42b6e1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42b6e4: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42b6e7: jmp 0x42b6f6 */
  goto L_42b6f6;
L_42b6e9: /* 42b6e9: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b6ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b6ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42b6ef: call 0x414470 */
  esp -= 4; W32(esp, 0x42b6f4u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42b6f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b6f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b6f6: /* 42b6f6: mov eax, edi */
  eax = edi;
/* 42b6f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42b6f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42b6fa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42b6fb: ret  */
  esp += 4; SPILL(); return;
}

void f_42b6fc(void) {
  LOAD_REGS();
L_42b6fc: /* 42b6fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b6fd: mov ebp, esp */
  ebp = esp;
/* 42b6ff: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42b702: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42b705: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 42b708: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42b70b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42b70e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42b711: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 42b714: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b715: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42b718: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b71b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b71c: mov dword ptr [ebp - 0x14], 0x49 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x49u);
/* 42b723: call 0x42dc5c */
  esp -= 4; W32(esp, 0x42b728u); SPILL(); f_42dc5c(); if (g_unwind) return; RELOAD();
/* 42b728: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b72b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42b72c: ret  */
  esp += 4; SPILL(); return;
}

void f_42b72d(void) {
  LOAD_REGS();
L_42b72d: /* 42b72d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b72e: mov ebp, esp */
  ebp = esp;
/* 42b730: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42b733: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42b736: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 42b739: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42b73c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42b73f: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42b741: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42b744: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 42b747: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b748: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42b74b: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b74e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b74f: mov dword ptr [ebp - 0x14], 0x49 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x49u);
/* 42b756: call 0x42e730 */
  esp -= 4; W32(esp, 0x42b75bu); SPILL(); f_42e730(); if (g_unwind) return; RELOAD();
/* 42b75b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b75e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42b75f: ret  */
  esp += 4; SPILL(); return;
}

void f_42b760(void) {
  LOAD_REGS();
L_42b760: /* 42b760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b761: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b762: mov esi, eax */
  esi = eax;
/* 42b764: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b765: xor edi, edi */
  edi = 0;
/* 42b767: call 0x402493 */
  esp -= 4; W32(esp, 0x42b76cu); SPILL(); hle_strlen(); RELOAD();
/* 42b76c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42b76d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b76e: call 0x4010eb */
  esp -= 4; W32(esp, 0x42b773u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42b773: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b775: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b776: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b777: je 0x42b7a5 */
  if (zf) goto L_42b7a5;
L_42b779: /* 42b779: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 42b77b: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42b77d: mov edx, eax */
  edx = eax;
/* 42b77f: je 0x42b79e */
  if (zf) goto L_42b79e;
L_42b781: /* 42b781: cmp cl, 0x22 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b784: jne 0x42b78a */
  if (!zf) goto L_42b78a;
L_42b786: /* 42b786: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42b787: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42b788: jmp 0x42b78e */
  goto L_42b78e;
L_42b78a: /* 42b78a: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 42b78c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42b78d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_42b78e: /* 42b78e: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 42b790: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42b792: jne 0x42b781 */
  if (!zf) goto L_42b781;
L_42b794: /* 42b794: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b796: je 0x42b79e */
  if (zf) goto L_42b79e;
L_42b798: /* 42b798: and byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42b79a: mov eax, edx */
  eax = edx;
/* 42b79c: jmp 0x42b7a7 */
  goto L_42b7a7;
L_42b79e: /* 42b79e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42b79f: call 0x401156 */
  esp -= 4; W32(esp, 0x42b7a4u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42b7a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b7a5: /* 42b7a5: xor eax, eax */
  eax = 0;
L_42b7a7: /* 42b7a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42b7a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42b7a9: ret  */
  esp += 4; SPILL(); return;
}

void f_42b7aa(void) {
  LOAD_REGS();
L_42b7aa: /* 42b7aa: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42b7ac: push 0x440eb8 */
  { uint32_t v = 0x440eb8u; esp -= 4; W32(esp, v); }
/* 42b7b1: call 0x40101f */
  esp -= 4; W32(esp, 0x42b7b6u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42b7b6: xor edi, edi */
  edi = 0;
/* 42b7b8: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 42b7bb: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 42b7be: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42b7c0: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42b7c5u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42b7c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b7c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b7c8: je 0x42b971 */
  if (zf) goto L_42b971;
L_42b7ce: /* 42b7ce: push 0x440eb4 */
  { uint32_t v = 0x440eb4u; esp -= 4; W32(esp, v); }
/* 42b7d3: call 0x4164c5 */
  esp -= 4; W32(esp, 0x42b7d8u); SPILL(); f_4164c5(); if (g_unwind) return; RELOAD();
/* 42b7d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b7d9: mov esi, eax */
  esi = eax;
/* 42b7db: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b7dd: je 0x42b812 */
  if (zf) goto L_42b812;
L_42b7df: /* 42b7df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b7e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b7e1: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42b7e6u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42b7e6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b7e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b7e8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b7eb: jne 0x42b83f */
  if (!zf) goto L_42b83f;
L_42b7ed: /* 42b7ed: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b7ef: je 0x42b812 */
  if (zf) goto L_42b812;
L_42b7f1: /* 42b7f1: mov eax, esi */
  eax = esi;
/* 42b7f3: call 0x42b760 */
  esp -= 4; W32(esp, 0x42b7f8u); SPILL(); f_42b760(); if (g_unwind) return; RELOAD();
/* 42b7f8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42b7fb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b7fd: je 0x42b812 */
  if (zf) goto L_42b812;
L_42b7ff: /* 42b7ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b801: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42b806u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42b806: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b807: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b808: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b80b: je 0x42b812 */
  if (zf) goto L_42b812;
L_42b80d: /* 42b80d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42b810: jmp 0x42b83f */
  goto L_42b83f;
L_42b812: /* 42b812: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42b815: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b817: je 0x42b827 */
  if (zf) goto L_42b827;
L_42b819: /* 42b819: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b81a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b81b: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42b820u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42b820: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b821: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b822: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b825: jne 0x42b83f */
  if (!zf) goto L_42b83f;
L_42b827: /* 42b827: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b828: mov esi, 0x440810 */
  esi = 0x440810u;
/* 42b82d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b82e: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42b833u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42b833: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b834: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b835: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b838: jne 0x42b83f */
  if (!zf) goto L_42b83f;
L_42b83a: /* 42b83a: mov esi, 0x43e37c */
  esi = 0x43e37cu;
L_42b83f: /* 42b83f: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b842: je 0x42b850 */
  if (zf) goto L_42b850;
L_42b844: /* 42b844: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42b847: call 0x402493 */
  esp -= 4; W32(esp, 0x42b84cu); SPILL(); hle_strlen(); RELOAD();
/* 42b84c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b84d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_42b850: /* 42b850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b851: call 0x402493 */
  esp -= 4; W32(esp, 0x42b856u); SPILL(); hle_strlen(); RELOAD();
/* 42b856: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b857: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42b85a: lea eax, [eax + ecx + 0xc] */
  eax = (uint32_t)(eax + ecx + 0xcu);
/* 42b85e: cmp eax, 0x104 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42b863: ja 0x42b963 */
  if ((!cf && !zf)) goto L_42b963;
L_42b869: /* 42b869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b86a: call 0x4010eb */
  esp -= 4; W32(esp, 0x42b86fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42b86f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b870: mov ebx, eax */
  ebx = eax;
/* 42b872: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 42b875: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b877: je 0x42b966 */
  if (zf) goto L_42b966;
L_42b87d: /* 42b87d: and byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebx), r);
  }
/* 42b880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b881: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b882: call 0x401d57 */
  esp -= 4; W32(esp, 0x42b887u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 42b887: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b888: call 0x402493 */
  esp -= 4; W32(esp, 0x42b88du); SPILL(); hle_strlen(); RELOAD();
/* 42b88d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b890: lea edi, [eax + esi - 1] */
  edi = (uint32_t)(eax + esi + 0xffffffffu);
/* 42b894: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42b896: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42b898: jne 0x42b8a8 */
  if (!zf) goto L_42b8a8;
L_42b89a: /* 42b89a: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 42b89c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b89d: call 0x427075 */
  esp -= 4; W32(esp, 0x42b8a2u); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 42b8a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b8a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b8a4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b8a6: jmp 0x42b8aa */
  goto L_42b8aa;
L_42b8a8: /* 42b8a8: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
L_42b8aa: /* 42b8aa: je 0x42b8b9 */
  if (zf) goto L_42b8b9;
L_42b8ac: /* 42b8ac: push 0x440810 */
  { uint32_t v = 0x440810u; esp -= 4; W32(esp, v); }
/* 42b8b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b8b2: call 0x401d57 */
  esp -= 4; W32(esp, 0x42b8b7u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 42b8b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b8b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b8b9: /* 42b8b9: xor edi, edi */
  edi = 0;
/* 42b8bb: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b8be: je 0x42b8cb */
  if (zf) goto L_42b8cb;
L_42b8c0: /* 42b8c0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42b8c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b8c4: call 0x401d57 */
  esp -= 4; W32(esp, 0x42b8c9u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 42b8c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b8ca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b8cb: /* 42b8cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b8cc: call 0x402493 */
  esp -= 4; W32(esp, 0x42b8d1u); SPILL(); hle_strlen(); RELOAD();
/* 42b8d1: mov esi, eax */
  esi = eax;
/* 42b8d3: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 42b8d5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42b8d7: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42b8dcu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42b8dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b8dd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b8de: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 42b8e1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42b8e4: cmp dword ptr [0x44f570], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f570u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42b8ea: jae 0x42b8f6 */
  if (!cf) goto L_42b8f6;
L_42b8ec: /* 42b8ec: mov dword ptr [0x44e024], 1 */
  W32((uint32_t)(0x44e024u), 0x1u);
L_42b8f6: /* 42b8f6: mov dword ptr [0x44f570], eax */
  W32((uint32_t)(0x44f570u), eax);
/* 42b8fb: mov eax, dword ptr [0x44e024] */
  eax = R32((uint32_t)(0x44e024u));
/* 42b900: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_42b903: /* 42b903: inc dword ptr [0x44e024] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44e024u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44e024u), r);
  }
/* 42b909: mov eax, dword ptr [0x44e024] */
  eax = R32((uint32_t)(0x44e024u));
/* 42b90e: sub eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42b911: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42b916: jbe 0x42b926 */
  if ((cf | zf)) goto L_42b926;
L_42b918: /* 42b918: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b919: call 0x401156 */
  esp -= 4; W32(esp, 0x42b91eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42b91e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b91f: xor ebx, ebx */
  ebx = 0;
/* 42b921: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 42b924: jmp 0x42b94c */
  goto L_42b94c;
L_42b926: /* 42b926: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42b928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b929: push dword ptr [0x44e024] */
  { uint32_t v = R32((uint32_t)(0x44e024u)); esp -= 4; W32(esp, v); }
/* 42b92f: call 0x401df3 */
  esp -= 4; W32(esp, 0x42b934u); SPILL(); f_401df3(); if (g_unwind) return; RELOAD();
/* 42b934: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b935: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42b936: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42b93bu); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42b93b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b93e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b940: je 0x42b903 */
  if (zf) goto L_42b903;
L_42b942: /* 42b942: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42b947u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42b947: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42b94a: je 0x42b903 */
  if (zf) goto L_42b903;
L_42b94c: /* 42b94c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42b950: call 0x42b95a */
  esp -= 4; W32(esp, 0x42b955u); SPILL(); f_42b95a(); if (g_unwind) return; RELOAD();
/* 42b955: jmp 0x42b966 */
  goto L_42b966;
L_42b963: /* 42b963: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
L_42b966: /* 42b966: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42b969: call 0x401156 */
  esp -= 4; W32(esp, 0x42b96eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42b96e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b96f: mov eax, ebx */
  eax = ebx;
L_42b971: /* 42b971: call 0x40105a */
  esp -= 4; W32(esp, 0x42b976u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42b976: ret  */
  esp += 4; SPILL(); return;
}

void f_42b957(void) {
  LOAD_REGS();
L_42b957: /* 42b957: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
  SPILL(); f_42b95a(); return;
}

void f_42b95a(void) {
  LOAD_REGS();
L_42b95a: /* 42b95a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42b95c: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42b961u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42b961: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b962: ret  */
  esp += 4; SPILL(); return;
}

void f_42b977(void) {
  LOAD_REGS();
L_42b977: /* 42b977: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b978: mov ebp, esp */
  ebp = esp;
/* 42b97a: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42b97d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42b97e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42b981: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42b982: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42b985: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b988: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42b98b: mov dword ptr [ebp - 0x1c], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7fffffffu);
/* 42b992: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b993: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42b99a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 42b99d: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42b9a0: call 0x413c12 */
  esp -= 4; W32(esp, 0x42b9a5u); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42b9a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b9a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42b9aa: mov edi, eax */
  edi = eax;
/* 42b9ac: je 0x42b9c8 */
  if (zf) goto L_42b9c8;
L_42b9ae: /* 42b9ae: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42b9b1: js 0x42b9bb */
  if (sf) goto L_42b9bb;
L_42b9b3: /* 42b9b3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42b9b6: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42b9b9: jmp 0x42b9c8 */
  goto L_42b9c8;
L_42b9bb: /* 42b9bb: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b9be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b9bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42b9c1: call 0x414470 */
  esp -= 4; W32(esp, 0x42b9c6u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42b9c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42b9c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42b9c8: /* 42b9c8: mov eax, edi */
  eax = edi;
/* 42b9ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42b9cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42b9cc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42b9cd: ret  */
  esp += 4; SPILL(); return;
}

void f_42b9ce(void) {
  LOAD_REGS();
L_42b9ce: /* 42b9ce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b9cf: mov ebp, esp */
  ebp = esp;
/* 42b9d1: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42b9d4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42b9d7: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 42b9db: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42b9de: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42b9e2: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42b9e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42b9e6: mov dword ptr [ebp - 0x1c], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7fffffffu);
/* 42b9ed: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42b9f4: call 0x413c12 */
  esp -= 4; W32(esp, 0x42b9f9u); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42b9f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42b9fc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42b9fd: ret  */
  esp += 4; SPILL(); return;
}

void f_42b9fe(void) {
  LOAD_REGS();
L_42b9fe: /* 42b9fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42b9ff: mov ebp, esp */
  ebp = esp;
/* 42ba01: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42ba04: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42ba07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ba08: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42ba0b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 42ba0e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42ba11: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42ba14: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42ba17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ba18: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42ba1f: mov dword ptr [ebp - 0x1c], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7fffffffu);
/* 42ba26: call 0x401feb */
  esp -= 4; W32(esp, 0x42ba2bu); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 42ba2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ba2e: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42ba31: mov esi, eax */
  esi = eax;
/* 42ba33: js 0x42ba40 */
  if (sf) goto L_42ba40;
L_42ba35: /* 42ba35: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ba38: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42ba3b: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42ba3e: jmp 0x42ba4d */
  goto L_42ba4d;
L_42ba40: /* 42ba40: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42ba43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ba44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42ba46: call 0x414470 */
  esp -= 4; W32(esp, 0x42ba4bu); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42ba4b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ba4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ba4d: /* 42ba4d: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42ba50: js 0x42ba5a */
  if (sf) goto L_42ba5a;
L_42ba52: /* 42ba52: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ba55: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42ba58: jmp 0x42ba67 */
  goto L_42ba67;
L_42ba5a: /* 42ba5a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42ba5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ba5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42ba60: call 0x414470 */
  esp -= 4; W32(esp, 0x42ba65u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42ba65: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ba66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42ba67: /* 42ba67: mov eax, esi */
  eax = esi;
/* 42ba69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42ba6a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42ba6b: ret  */
  esp += 4; SPILL(); return;
}

void f_42ba6c(void) {
  LOAD_REGS();
L_42ba6c: /* 42ba6c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42ba6d: mov ebp, esp */
  ebp = esp;
/* 42ba6f: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42ba72: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42ba75: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 42ba79: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ba7c: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42ba80: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42ba83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ba84: mov dword ptr [ebp - 0x1c], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7fffffffu);
/* 42ba8b: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42ba92: call 0x401feb */
  esp -= 4; W32(esp, 0x42ba97u); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 42ba97: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ba9a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42ba9b: ret  */
  esp += 4; SPILL(); return;
}

void f_42ba9c(void) {
  LOAD_REGS();
L_42ba9c: /* 42ba9c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42ba9d: mov ebp, esp */
  ebp = esp;
/* 42ba9f: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42baa2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42baa5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42baa6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42baa9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42baaa: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42baad: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42bab0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42bab3: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42bab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bab7: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42babe: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 42bac1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42bac4: call 0x413c12 */
  esp -= 4; W32(esp, 0x42bac9u); SPILL(); f_413c12(); if (g_unwind) return; RELOAD();
/* 42bac9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bacc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42bace: mov edi, eax */
  edi = eax;
/* 42bad0: je 0x42baec */
  if (zf) goto L_42baec;
L_42bad2: /* 42bad2: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42bad5: js 0x42badf */
  if (sf) goto L_42badf;
L_42bad7: /* 42bad7: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42bada: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42badd: jmp 0x42baec */
  goto L_42baec;
L_42badf: /* 42badf: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42bae2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bae3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42bae5: call 0x414470 */
  esp -= 4; W32(esp, 0x42baeau); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42baea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42baeb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42baec: /* 42baec: mov eax, edi */
  eax = edi;
/* 42baee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42baef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42baf0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42baf1: ret  */
  esp += 4; SPILL(); return;
}

void f_42baf2(void) {
  LOAD_REGS();
L_42baf2: /* 42baf2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42baf3: mov ebp, esp */
  ebp = esp;
/* 42baf5: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42baf8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42bafb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 42bafe: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42bb01: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 42bb04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bb05: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42bb08: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42bb0a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42bb0d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42bb10: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42bb13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bb14: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 42bb1b: call 0x401feb */
  esp -= 4; W32(esp, 0x42bb20u); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 42bb20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bb23: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42bb26: mov esi, eax */
  esi = eax;
/* 42bb28: js 0x42bb35 */
  if (sf) goto L_42bb35;
L_42bb2a: /* 42bb2a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42bb2d: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42bb30: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42bb33: jmp 0x42bb42 */
  goto L_42bb42;
L_42bb35: /* 42bb35: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42bb38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bb39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42bb3b: call 0x414470 */
  esp -= 4; W32(esp, 0x42bb40u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42bb40: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bb41: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42bb42: /* 42bb42: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42bb45: js 0x42bb4f */
  if (sf) goto L_42bb4f;
L_42bb47: /* 42bb47: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42bb4a: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 42bb4d: jmp 0x42bb5c */
  goto L_42bb5c;
L_42bb4f: /* 42bb4f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42bb52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bb53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42bb55: call 0x414470 */
  esp -= 4; W32(esp, 0x42bb5au); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42bb5a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bb5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42bb5c: /* 42bb5c: mov eax, esi */
  eax = esi;
/* 42bb5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42bb5f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42bb60: ret  */
  esp += 4; SPILL(); return;
}

void f_42bb61(void) {
  LOAD_REGS();
L_42bb61: /* 42bb61: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42bb63: push 0x440ec8 */
  { uint32_t v = 0x440ec8u; esp -= 4; W32(esp, v); }
/* 42bb68: call 0x40101f */
  esp -= 4; W32(esp, 0x42bb6du); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42bb6d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42bb70: cmp edi, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42bb76: jae 0x42bbb0 */
  if (!cf) goto L_42bbb0;
L_42bb78: /* 42bb78: mov ecx, edi */
  ecx = edi;
/* 42bb7a: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42bb7d: mov eax, edi */
  eax = edi;
/* 42bb7f: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42bb82: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42bb85: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42bb8c: xor ebx, ebx */
  ebx = 0;
/* 42bb8e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42bb8f: test byte ptr [ecx + eax*4 + 4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*4 + 0x4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42bb93: je 0x42bbb0 */
  if (zf) goto L_42bbb0;
L_42bb95: /* 42bb95: call 0x42d9c2 */
  esp -= 4; W32(esp, 0x42bb9au); SPILL(); f_42d9c2(); if (g_unwind) return; RELOAD();
/* 42bb9a: mov esi, eax */
  esi = eax;
/* 42bb9c: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42bb9f: xor edx, edx */
  edx = 0;
/* 42bba1: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bba3: jne 0x42bbb8 */
  if (!zf) goto L_42bbb8;
L_42bba5: /* 42bba5: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42bbaau); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42bbaa: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
L_42bbb0: /* 42bbb0: xor eax, eax */
  eax = 0;
L_42bbb2: /* 42bbb2: call 0x40105a */
  esp -= 4; W32(esp, 0x42bbb7u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42bbb7: ret  */
  esp += 4; SPILL(); return;
L_42bbb8: /* 42bbb8: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 42bbbb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 42bbbe: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 42bbc1: cmp eax, 0x61 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bbc4: je 0x42bbdf */
  if (zf) goto L_42bbdf;
L_42bbc6: /* 42bbc6: cmp eax, 0x72 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x72u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bbc9: je 0x42bbda */
  if (zf) goto L_42bbda;
L_42bbcb: /* 42bbcb: cmp eax, 0x77 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bbce: je 0x42bbdf */
  if (zf) goto L_42bbdf;
L_42bbd0: /* 42bbd0: xor esi, esi */
  esi = 0;
/* 42bbd2: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42bbd5: jmp 0x42bc6d */
  goto L_42bc6d;
L_42bbda: /* 42bbda: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 42bbdd: jmp 0x42bbe6 */
  goto L_42bbe6;
L_42bbdf: /* 42bbdf: mov dword ptr [esi + 0xc], 2 */
  W32((uint32_t)(esi + 0xcu), 0x2u);
L_42bbe6: /* 42bbe6: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 42bbe9: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 42bbec: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 42bbef: mov eax, dword ptr [0x449238] */
  eax = R32((uint32_t)(0x449238u));
/* 42bbf4: or dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_42bbf7: /* 42bbf7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42bbf8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42bbf9: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 42bbfc: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 42bbff: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42bc02: je 0x42bc6a */
  if (zf) goto L_42bc6a;
L_42bc04: /* 42bc04: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bc08: je 0x42bc6a */
  if (zf) goto L_42bc6a;
L_42bc0a: /* 42bc0a: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 42bc0d: sub eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42bc10: je 0x42bc4d */
  if (zf) goto L_42bc4d;
L_42bc12: /* 42bc12: sub eax, 0x37 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42bc15: je 0x42bc24 */
  if (zf) goto L_42bc24;
L_42bc17: /* 42bc17: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 42bc18: je 0x42bc3e */
  if (zf) goto L_42bc3e;
L_42bc1a: /* 42bc1a: sub eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42bc1d: je 0x42bc2f */
  if (zf) goto L_42bc2f;
L_42bc1f: /* 42bc1f: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42bc22: jne 0x42bc54 */
  if (!zf) goto L_42bc54;
L_42bc24: /* 42bc24: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bc28: jne 0x42bc54 */
  if (!zf) goto L_42bc54;
L_42bc2a: /* 42bc2a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42bc2d: jmp 0x42bbf7 */
  goto L_42bbf7;
L_42bc2f: /* 42bc2f: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bc33: jne 0x42bc54 */
  if (!zf) goto L_42bc54;
L_42bc35: /* 42bc35: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 42bc38: and byte ptr [esi + 0xd], 0xbf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0xbfu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0xdu), r);
  }
/* 42bc3c: jmp 0x42bbf7 */
  goto L_42bbf7;
L_42bc3e: /* 42bc3e: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bc42: jne 0x42bc54 */
  if (!zf) goto L_42bc54;
L_42bc44: /* 42bc44: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 42bc47: or byte ptr [esi + 0xd], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xdu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0xdu), r);
  }
/* 42bc4b: jmp 0x42bbf7 */
  goto L_42bbf7;
L_42bc4d: /* 42bc4d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 42bc50: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 42bc52: jns 0x42bc5a */
  if (!sf) goto L_42bc5a;
L_42bc54: /* 42bc54: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42bc58: jmp 0x42bbf7 */
  goto L_42bbf7;
L_42bc5a: /* 42bc5a: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42bc5f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42bc62: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42bc65: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 42bc68: jmp 0x42bbf7 */
  goto L_42bbf7;
L_42bc6a: /* 42bc6a: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
L_42bc6d: /* 42bc6d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42bc71: call 0x42bc80 */
  esp -= 4; W32(esp, 0x42bc76u); SPILL(); f_42bc80(); if (g_unwind) return; RELOAD();
/* 42bc76: mov eax, esi */
  eax = esi;
/* 42bc78: jmp 0x42bbb2 */
  goto L_42bbb2;
}

void f_42bc7d(void) {
  LOAD_REGS();
L_42bc7d: /* 42bc7d: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
  SPILL(); f_42bc80(); return;
}

void f_42bc80(void) {
  LOAD_REGS();
L_42bc80: /* 42bc80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bc81: call 0x413925 */
  esp -= 4; W32(esp, 0x42bc86u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42bc86: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bc87: ret  */
  esp += 4; SPILL(); return;
}

void f_42bc88(void) {
  LOAD_REGS();
L_42bc88: /* 42bc88: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42bc8a: push 0x440ed8 */
  { uint32_t v = 0x440ed8u; esp -= 4; W32(esp, v); }
/* 42bc8f: call 0x40101f */
  esp -= 4; W32(esp, 0x42bc94u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42bc94: call 0x42d9c2 */
  esp -= 4; W32(esp, 0x42bc99u); SPILL(); f_42d9c2(); if (g_unwind) return; RELOAD();
/* 42bc99: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42bc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42bc9e: jne 0x42bcaf */
  if (!zf) goto L_42bcaf;
L_42bca0: /* 42bca0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42bca5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42bca5: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
/* 42bcab: xor eax, eax */
  eax = 0;
/* 42bcad: jmp 0x42bcd4 */
  goto L_42bcd4;
L_42bcaf: /* 42bcaf: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42bcb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bcb4: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42bcb7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42bcba: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42bcbd: call 0x42f244 */
  esp -= 4; W32(esp, 0x42bcc2u); SPILL(); f_42f244(); if (g_unwind) return; RELOAD();
/* 42bcc2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bcc5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42bcc8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42bccc: call 0x42bcda */
  esp -= 4; W32(esp, 0x42bcd1u); SPILL(); f_42bcda(); if (g_unwind) return; RELOAD();
/* 42bcd1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_42bcd4: /* 42bcd4: call 0x40105a */
  esp -= 4; W32(esp, 0x42bcd9u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42bcd9: ret  */
  esp += 4; SPILL(); return;
}

void f_42bcda(void) {
  LOAD_REGS();
L_42bcda: /* 42bcda: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42bcdd: call 0x413925 */
  esp -= 4; W32(esp, 0x42bce2u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42bce2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bce3: ret  */
  esp += 4; SPILL(); return;
}

void f_42bce4(void) {
  LOAD_REGS();
L_42bce4: /* 42bce4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 42bce6: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42bcea: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42bcee: call 0x42bc88 */
  esp -= 4; W32(esp, 0x42bcf3u); SPILL(); f_42bc88(); if (g_unwind) return; RELOAD();
/* 42bcf3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bcf6: ret  */
  esp += 4; SPILL(); return;
}

void f_42bcf7(void) {
  LOAD_REGS();
L_42bcf7: /* 42bcf7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42bcf9: push 0x440ee8 */
  { uint32_t v = 0x440ee8u; esp -= 4; W32(esp, v); }
/* 42bcfe: call 0x40101f */
  esp -= 4; W32(esp, 0x42bd03u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42bd03: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 42bd06: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42bd09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bd0a: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42bd0fu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42bd0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bd10: xor edi, edi */
  edi = 0;
/* 42bd12: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 42bd15: test byte ptr [esi + 0xc], 0x83 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x83u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42bd19: je 0x42bd22 */
  if (zf) goto L_42bd22;
L_42bd1b: /* 42bd1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bd1c: call 0x4143d3 */
  esp -= 4; W32(esp, 0x42bd21u); SPILL(); f_4143d3(); if (g_unwind) return; RELOAD();
/* 42bd21: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42bd22: /* 42bd22: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 42bd25: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 42bd27: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 42bd2a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 42bd2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bd2e: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 42bd30: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42bd33: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42bd36: call 0x42f244 */
  esp -= 4; W32(esp, 0x42bd3bu); SPILL(); f_42f244(); if (g_unwind) return; RELOAD();
/* 42bd3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bd3e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42bd41: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42bd45: call 0x42bd53 */
  esp -= 4; W32(esp, 0x42bd4au); SPILL(); f_42bd53(); if (g_unwind) return; RELOAD();
/* 42bd4a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42bd4d: call 0x40105a */
  esp -= 4; W32(esp, 0x42bd52u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42bd52: ret  */
  esp += 4; SPILL(); return;
}

void f_42bd53(void) {
  LOAD_REGS();
L_42bd53: /* 42bd53: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42bd56: call 0x413925 */
  esp -= 4; W32(esp, 0x42bd5bu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42bd5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bd5c: ret  */
  esp += 4; SPILL(); return;
}

void f_42bd5d(void) {
  LOAD_REGS();
L_42bd5d: /* 42bd5d: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 42bd62: push 0x440f00 */
  { uint32_t v = 0x440f00u; esp -= 4; W32(esp, v); }
/* 42bd67: call 0x40101f */
  esp -= 4; W32(esp, 0x42bd6cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42bd6c: xor ebx, ebx */
  ebx = 0;
/* 42bd6e: xor ecx, ecx */
  ecx = 0;
/* 42bd70: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42bd73: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 42bd76: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bd79: je 0x42c136 */
  if (zf) goto L_42c136;
L_42bd7f: /* 42bd7f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42bd82: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bd84: je 0x42c136 */
  if (zf) goto L_42c136;
L_42bd8a: /* 42bd8a: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42bd8d: cmp ax, 0x77 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x77u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42bd91: je 0x42bd9d */
  if (zf) goto L_42bd9d;
L_42bd93: /* 42bd93: cmp ax, 0x72 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x72u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42bd97: jne 0x42c136 */
  if (!zf) goto L_42c136;
L_42bd9d: /* 42bd9d: mov ax, word ptr [esi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 42bda1: cmp ax, 0x74 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x74u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42bda5: jne 0x42bdae */
  if (!zf) goto L_42bdae;
L_42bda7: /* 42bda7: mov ecx, 0x4000 */
  ecx = 0x4000u;
/* 42bdac: jmp 0x42bdb9 */
  goto L_42bdb9;
L_42bdae: /* 42bdae: cmp ax, 0x62 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x62u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42bdb2: jne 0x42bdb9 */
  if (!zf) goto L_42bdb9;
L_42bdb4: /* 42bdb4: mov ecx, 0x8000 */
  ecx = 0x8000u;
L_42bdb9: /* 42bdb9: or ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 42bdbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42bdc0: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 42bdc5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 42bdc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bdc9: call 0x424db4 */
  esp -= 4; W32(esp, 0x42bdceu); SPILL(); f_424db4(); if (g_unwind) return; RELOAD();
/* 42bdce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bdd1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bdd4: je 0x42c136 */
  if (zf) goto L_42c136;
L_42bdda: /* 42bdda: xor edi, edi */
  edi = 0;
/* 42bddc: cmp word ptr [esi], 0x77 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x77u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42bde0: jne 0x42bdee */
  if (!zf) goto L_42bdee;
L_42bde2: /* 42bde2: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 42bde5: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 42bde8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42bde9: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 42bdec: jmp 0x42bdfb */
  goto L_42bdfb;
L_42bdee: /* 42bdee: xor eax, eax */
  eax = 0;
/* 42bdf0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42bdf1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 42bdf4: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 42bdf7: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 42bdfa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_42bdfb: /* 42bdfb: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42bdfd: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42be02u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42be02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42be03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42be05: jne 0x42be20 */
  if (!zf) goto L_42be20;
L_42be07: /* 42be07: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42be0a: call 0x415b93 */
  esp -= 4; W32(esp, 0x42be0fu); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42be0f: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42be12: call 0x415b93 */
  esp -= 4; W32(esp, 0x42be17u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42be17: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42be18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42be19: xor eax, eax */
  eax = 0;
/* 42be1b: jmp 0x42c139 */
  goto L_42c139;
L_42be20: /* 42be20: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42be22: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42be27u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42be27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42be28: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42be2b: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 42be2e: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 42be31: call dword ptr [0x439018] */
  esp -= 4; W32(esp, 0x42be37u); SPILL(); call_ind(R32(0x439018u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 42be37: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 42be3a: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42be3d: lea esi, [ebp + esi*4 - 0x28] */
  esi = (uint32_t)(ebp + esi*4 + 0xffffffd8u);
/* 42be41: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 42be43: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42be45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42be46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42be47: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 42be4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42be4b: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 42be4e: mov ecx, eax */
  ecx = eax;
/* 42be50: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42be53: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42be56: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42be59: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42be60: push dword ptr [ecx + eax*4] */
  { uint32_t v = R32((uint32_t)(ecx + eax*4)); esp -= 4; W32(esp, v); }
/* 42be63: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 42be66: call dword ptr [0x43921c] */
  esp -= 4; W32(esp, 0x42be6cu); SPILL(); call_ind(R32(0x43921cu)); if (g_unwind) return; /* KERNEL32!DuplicateHandle */ RELOAD();
/* 42be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42be6e: je 0x42c101 */
  if (zf) goto L_42c101;
L_42be74: /* 42be74: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 42be76: call 0x415b93 */
  esp -= 4; W32(esp, 0x42be7bu); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42be7b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42be7e: mov dword ptr [ebp + eax*4 - 0x3c], ebx */
  W32((uint32_t)(ebp + eax*4 + 0xffffffc4u), ebx);
/* 42be82: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42be85: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42be88: push dword ptr [ebp + eax*4 - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + eax*4 + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42be8c: call 0x42bb61 */
  esp -= 4; W32(esp, 0x42be91u); SPILL(); f_42bb61(); if (g_unwind) return; RELOAD();
/* 42be91: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42be94: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42be97: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42be99: je 0x42c101 */
  if (zf) goto L_42c101;
L_42be9f: /* 42be9f: xor edi, edi */
  edi = 0;
/* 42bea1: call 0x42b014 */
  esp -= 4; W32(esp, 0x42bea6u); SPILL(); f_42b014(); if (g_unwind) return; RELOAD();
/* 42bea6: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 42bea9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42beab: je 0x42c0ee */
  if (zf) goto L_42c0ee;
L_42beb1: /* 42beb1: push 0x440864 */
  { uint32_t v = 0x440864u; esp -= 4; W32(esp, v); }
/* 42beb6: call 0x427ba8 */
  esp -= 4; W32(esp, 0x42bebbu); SPILL(); f_427ba8(); if (g_unwind) return; RELOAD();
/* 42bebb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bebc: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 42bebf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bec1: jne 0x42beed */
  if (!zf) goto L_42beed;
L_42bec3: /* 42bec3: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42bec8u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42bec8: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42becb: je 0x42bed7 */
  if (zf) goto L_42bed7;
L_42becd: /* 42becd: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42bed2u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42bed2: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bed5: jne 0x42beed */
  if (!zf) goto L_42beed;
L_42bed7: /* 42bed7: test byte ptr [0x4491d9], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x4491d9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42bede: mov eax, 0x440844 */
  eax = 0x440844u;
/* 42bee3: jne 0x42beea */
  if (!zf) goto L_42beea;
L_42bee5: /* 42bee5: mov eax, 0x440834 */
  eax = 0x440834u;
L_42beea: /* 42beea: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_42beed: /* 42beed: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 42beef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42bef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bef1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42bef2: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 42bef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bef9: call 0x4010fd */
  esp -= 4; W32(esp, 0x42befeu); SPILL(); hle_memset(); RELOAD();
/* 42befe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bf01: mov dword ptr [ebp - 0x90], esi */
  W32((uint32_t)(ebp + 0xffffff70u), esi);
/* 42bf07: mov dword ptr [ebp - 0x64], 0x100 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x100u);
/* 42bf0e: mov eax, dword ptr [0x449240] */
  eax = R32((uint32_t)(0x449240u));
/* 42bf13: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bf16: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42bf19: je 0x42bf1d */
  if (zf) goto L_42bf1d;
L_42bf1b: /* 42bf1b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
L_42bf1d: /* 42bf1d: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 42bf20: cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bf24: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 42bf27: je 0x42bf2c */
  if (zf) goto L_42bf2c;
L_42bf29: /* 42bf29: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
L_42bf2c: /* 42bf2c: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 42bf2f: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 42bf32: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 42bf35: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42bf38: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42bf3du); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42bf3d: mov edi, eax */
  edi = eax;
/* 42bf3f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42bf42: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42bf47u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42bf47: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42bf49: mov esi, 0x440ef4 */
  esi = 0x440ef4u;
/* 42bf4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bf4f: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42bf54u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42bf54: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42bf56: lea eax, [edi + edi + 2] */
  eax = (uint32_t)(edi + edi + 0x2u);
/* 42bf5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bf5b: call 0x4010eb */
  esp -= 4; W32(esp, 0x42bf60u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42bf60: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bf63: mov edi, eax */
  edi = eax;
/* 42bf65: mov dword ptr [ebp - 0x94], edi */
  W32((uint32_t)(ebp + 0xffffff6cu), edi);
/* 42bf6b: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bf6d: je 0x42c0ee */
  if (zf) goto L_42c0ee;
L_42bf73: /* 42bf73: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42bf76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42bf77: call 0x4013ce */
  esp -= 4; W32(esp, 0x42bf7cu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 42bf7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bf7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42bf7e: call 0x4013ea */
  esp -= 4; W32(esp, 0x42bf83u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42bf83: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42bf86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42bf87: call 0x4013ea */
  esp -= 4; W32(esp, 0x42bf8cu); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42bf8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42bf8d: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42bf90: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42bf95u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42bf95: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42bf98: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bf9b: je 0x42bfc4 */
  if (zf) goto L_42bfc4;
L_42bf9d: /* 42bf9d: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 42bfa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bfa4: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 42bfaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42bfab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42bfac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42bfad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42bfae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42bfb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42bfb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42bfb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42bfb3: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42bfb6: call dword ptr [0x4391e4] */
  esp -= 4; W32(esp, 0x42bfbcu); SPILL(); call_ind(R32(0x4391e4u)); if (g_unwind) return; /* KERNEL32!CreateProcessW */ RELOAD();
/* 42bfbc: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42bfbf: jmp 0x42c0bb */
  goto L_42c0bb;
L_42bfc4: /* 42bfc4: push 0x440828 */
  { uint32_t v = 0x440828u; esp -= 4; W32(esp, v); }
/* 42bfc9: call 0x427ba8 */
  esp -= 4; W32(esp, 0x42bfceu); SPILL(); f_427ba8(); if (g_unwind) return; RELOAD();
/* 42bfce: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 42bfd4: mov dword ptr [esp], 0x208 */
  W32((uint32_t)(esp), 0x208u);
/* 42bfdb: call 0x4010eb */
  esp -= 4; W32(esp, 0x42bfe0u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42bfe0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bfe1: mov esi, eax */
  esi = eax;
/* 42bfe3: mov dword ptr [ebp - 0xac], esi */
  W32((uint32_t)(ebp + 0xffffff54u), esi);
/* 42bfe9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42bfeb: jne 0x42bff9 */
  if (!zf) goto L_42bff9;
L_42bfed: /* 42bfed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42bfee: call 0x401156 */
  esp -= 4; W32(esp, 0x42bff3u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42bff3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42bff4: jmp 0x42c0ee */
  goto L_42c0ee;
L_42bff9: /* 42bff9: push 0x103 */
  { uint32_t v = 0x103u; esp -= 4; W32(esp, v); }
/* 42bffe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42bfff: push dword ptr [ebp - 0xa8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff58u)); esp -= 4; W32(esp, v); }
/* 42c005: call 0x42844e */
  esp -= 4; W32(esp, 0x42c00au); SPILL(); f_42844e(); if (g_unwind) return; RELOAD();
/* 42c00a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c00d: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 42c013: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c015: je 0x42c0ae */
  if (zf) goto L_42c0ae;
L_42c01b: /* 42c01b: cmp word ptr [esi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c01e: je 0x42c0ae */
  if (zf) goto L_42c0ae;
L_42c024: /* 42c024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c025: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c02au); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c02a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c02b: lea eax, [esi + eax*2 - 2] */
  eax = (uint32_t)(esi + eax*2 + 0xfffffffeu);
/* 42c02f: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 42c035: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 42c038: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c03c: je 0x42c051 */
  if (zf) goto L_42c051;
L_42c03e: /* 42c03e: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c042: je 0x42c051 */
  if (zf) goto L_42c051;
L_42c044: /* 42c044: push 0x440824 */
  { uint32_t v = 0x440824u; esp -= 4; W32(esp, v); }
/* 42c049: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c04a: call 0x4013ea */
  esp -= 4; W32(esp, 0x42c04fu); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42c04f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c050: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c051: /* 42c051: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42c054: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c059u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c059: mov edi, eax */
  edi = eax;
/* 42c05b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c05c: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c061u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c061: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c062: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c063: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42c065: cmp edi, 0x104 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42c06b: jae 0x42c0ae */
  if (!cf) goto L_42c0ae;
L_42c06d: /* 42c06d: push dword ptr [ebp - 0x4c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb4u)); esp -= 4; W32(esp, v); }
/* 42c070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c071: call 0x4013ea */
  esp -= 4; W32(esp, 0x42c076u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42c076: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c077: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c078: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42c07du); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42c07d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c080: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c083: je 0x42bff9 */
  if (zf) goto L_42bff9;
L_42c089: /* 42c089: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 42c08f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c090: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 42c096: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c097: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c098: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c099: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c09a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42c09c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c09d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c09e: push dword ptr [ebp - 0x94] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffff6cu)); esp -= 4; W32(esp, v); }
/* 42c0a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c0a5: call dword ptr [0x4391e4] */
  esp -= 4; W32(esp, 0x42c0abu); SPILL(); call_ind(R32(0x4391e4u)); if (g_unwind) return; /* KERNEL32!CreateProcessW */ RELOAD();
/* 42c0ab: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_42c0ae: /* 42c0ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c0af: call 0x401156 */
  esp -= 4; W32(esp, 0x42c0b4u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42c0b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c0b5: mov edi, dword ptr [ebp - 0x94] */
  edi = R32((uint32_t)(ebp + 0xffffff6cu));
L_42c0bb: /* 42c0bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c0bc: call 0x401156 */
  esp -= 4; W32(esp, 0x42c0c1u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42c0c1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c0c2: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 42c0c5: call dword ptr [0x439044] */
  esp -= 4; W32(esp, 0x42c0cbu); SPILL(); call_ind(R32(0x439044u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 42c0cb: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c0ce: je 0x42c0e9 */
  if (zf) goto L_42c0e9;
L_42c0d0: /* 42c0d0: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 42c0d6: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 42c0dc: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42c0df: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 42c0e2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42c0e5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 42c0e7: jmp 0x42c12d */
  goto L_42c12d;
L_42c0e9: /* 42c0e9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 42c0ec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_42c0ee: /* 42c0ee: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42c0f1: call 0x41441f */
  esp -= 4; W32(esp, 0x42c0f6u); SPILL(); f_41441f(); if (g_unwind) return; RELOAD();
/* 42c0f6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c0f7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42c0fa: mov dword ptr [ebp + eax*4 - 0x3c], ebx */
  W32((uint32_t)(ebp + eax*4 + 0xffffffc4u), ebx);
/* 42c0fe: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_42c101: /* 42c101: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 42c104: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42c107: cmp dword ptr [ebp + eax - 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + eax + 0xffffffc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c10b: je 0x42c117 */
  if (zf) goto L_42c117;
L_42c10d: /* 42c10d: push dword ptr [ebp + eax - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + eax + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42c111: call 0x415b93 */
  esp -= 4; W32(esp, 0x42c116u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42c116: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c117: /* 42c117: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 42c11a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42c11d: cmp dword ptr [ebp + eax - 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + eax + 0xffffffc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c121: je 0x42c12d */
  if (zf) goto L_42c12d;
L_42c123: /* 42c123: push dword ptr [ebp + eax - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + eax + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 42c127: call 0x415b93 */
  esp -= 4; W32(esp, 0x42c12cu); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 42c12c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c12d: /* 42c12d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c131: call 0x42c13f */
  esp -= 4; W32(esp, 0x42c136u); SPILL(); f_42c13f(); if (g_unwind) return; RELOAD();
L_42c136: /* 42c136: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_42c139: /* 42c139: call 0x40105a */
  esp -= 4; W32(esp, 0x42c13eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c13e: ret  */
  esp += 4; SPILL(); return;
}

void f_42c13f(void) {
  LOAD_REGS();
L_42c13f: /* 42c13f: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 42c141: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42c146u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42c146: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c147: ret  */
  esp += 4; SPILL(); return;
}

void f_42c148(void) {
  LOAD_REGS();
L_42c148: /* 42c148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c149: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c14a: mov esi, eax */
  esi = eax;
/* 42c14c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c14d: xor edi, edi */
  edi = 0;
/* 42c14f: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c154u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c154: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 42c158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c159: call 0x4010eb */
  esp -= 4; W32(esp, 0x42c15eu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42c15e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c160: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c161: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c162: je 0x42c19a */
  if (zf) goto L_42c19a;
L_42c164: /* 42c164: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42c167: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42c16a: mov edx, eax */
  edx = eax;
/* 42c16c: je 0x42c193 */
  if (zf) goto L_42c193;
L_42c16e: /* 42c16e: cmp cx, 0x22 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c172: jne 0x42c179 */
  if (!zf) goto L_42c179;
L_42c174: /* 42c174: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42c175: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42c176: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42c177: jmp 0x42c180 */
  goto L_42c180;
L_42c179: /* 42c179: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 42c17c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42c17d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42c17e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42c17f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_42c180: /* 42c180: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42c183: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42c186: jne 0x42c16e */
  if (!zf) goto L_42c16e;
L_42c188: /* 42c188: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c18a: je 0x42c193 */
  if (zf) goto L_42c193;
L_42c18c: /* 42c18c: and word ptr [eax], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 42c18f: mov eax, edx */
  eax = edx;
/* 42c191: jmp 0x42c19c */
  goto L_42c19c;
L_42c193: /* 42c193: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42c194: call 0x401156 */
  esp -= 4; W32(esp, 0x42c199u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42c199: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c19a: /* 42c19a: xor eax, eax */
  eax = 0;
L_42c19c: /* 42c19c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42c19d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42c19e: ret  */
  esp += 4; SPILL(); return;
}

void f_42c19f(void) {
  LOAD_REGS();
L_42c19f: /* 42c19f: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42c1a1: push 0x440f18 */
  { uint32_t v = 0x440f18u; esp -= 4; W32(esp, v); }
/* 42c1a6: call 0x40101f */
  esp -= 4; W32(esp, 0x42c1abu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c1ab: xor esi, esi */
  esi = 0;
/* 42c1ad: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42c1b0: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42c1b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42c1b5: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42c1bau); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42c1ba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c1bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c1bd: je 0x42c35c */
  if (zf) goto L_42c35c;
L_42c1c3: /* 42c1c3: push 0x440f0c */
  { uint32_t v = 0x440f0cu; esp -= 4; W32(esp, v); }
/* 42c1c8: call 0x427ba8 */
  esp -= 4; W32(esp, 0x42c1cdu); SPILL(); f_427ba8(); if (g_unwind) return; RELOAD();
/* 42c1cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c1ce: mov edi, eax */
  edi = eax;
/* 42c1d0: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c1d2: je 0x42c207 */
  if (zf) goto L_42c207;
L_42c1d4: /* 42c1d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c1d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c1d6: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42c1dbu); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42c1db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c1dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c1dd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c1e0: jne 0x42c234 */
  if (!zf) goto L_42c234;
L_42c1e2: /* 42c1e2: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c1e4: je 0x42c207 */
  if (zf) goto L_42c207;
L_42c1e6: /* 42c1e6: mov eax, edi */
  eax = edi;
/* 42c1e8: call 0x42c148 */
  esp -= 4; W32(esp, 0x42c1edu); SPILL(); f_42c148(); if (g_unwind) return; RELOAD();
/* 42c1ed: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42c1f0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c1f2: je 0x42c207 */
  if (zf) goto L_42c207;
L_42c1f4: /* 42c1f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c1f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c1f6: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42c1fbu); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42c1fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c1fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c1fd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c200: je 0x42c207 */
  if (zf) goto L_42c207;
L_42c202: /* 42c202: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42c205: jmp 0x42c234 */
  goto L_42c234;
L_42c207: /* 42c207: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42c20a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c20c: je 0x42c21c */
  if (zf) goto L_42c21c;
L_42c20e: /* 42c20e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c20f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c210: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42c215u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42c215: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c216: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c217: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c21a: jne 0x42c234 */
  if (!zf) goto L_42c234;
L_42c21c: /* 42c21c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c21d: mov edi, 0x440824 */
  edi = 0x440824u;
/* 42c222: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c223: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42c228u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42c228: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c229: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c22a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c22d: jne 0x42c234 */
  if (!zf) goto L_42c234;
L_42c22f: /* 42c22f: mov edi, 0x43e92c */
  edi = 0x43e92cu;
L_42c234: /* 42c234: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 42c237: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c239: je 0x42c245 */
  if (zf) goto L_42c245;
L_42c23b: /* 42c23b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c23c: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c241u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c241: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c242: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_42c245: /* 42c245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c246: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c24bu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c24b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c24c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42c24f: lea eax, [eax + ecx + 0xc] */
  eax = (uint32_t)(eax + ecx + 0xcu);
/* 42c253: cmp eax, 0x104 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42c258: ja 0x42c34e */
  if ((!cf && !zf)) goto L_42c34e;
L_42c25e: /* 42c25e: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42c260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c261: call 0x4010eb */
  esp -= 4; W32(esp, 0x42c266u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42c266: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c267: mov esi, eax */
  esi = eax;
/* 42c269: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 42c26c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c26e: je 0x42c351 */
  if (zf) goto L_42c351;
L_42c274: /* 42c274: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
/* 42c278: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c279: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c27a: call 0x4013ea */
  esp -= 4; W32(esp, 0x42c27fu); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42c27f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c280: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c285u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c285: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c288: lea eax, [edi + eax*2 - 2] */
  eax = (uint32_t)(edi + eax*2 + 0xfffffffeu);
/* 42c28c: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 42c28f: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c293: je 0x42c2a8 */
  if (zf) goto L_42c2a8;
L_42c295: /* 42c295: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c299: je 0x42c2a8 */
  if (zf) goto L_42c2a8;
L_42c29b: /* 42c29b: push 0x440824 */
  { uint32_t v = 0x440824u; esp -= 4; W32(esp, v); }
/* 42c2a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c2a1: call 0x4013ea */
  esp -= 4; W32(esp, 0x42c2a6u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42c2a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c2a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c2a8: /* 42c2a8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c2aa: je 0x42c2b5 */
  if (zf) goto L_42c2b5;
L_42c2ac: /* 42c2ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c2ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c2ae: call 0x4013ea */
  esp -= 4; W32(esp, 0x42c2b3u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42c2b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c2b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c2b5: /* 42c2b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c2b6: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c2bbu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c2bb: lea edi, [esi + eax*2] */
  edi = (uint32_t)(esi + eax*2);
/* 42c2be: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42c2c0: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42c2c5u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42c2c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c2c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c2c7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c2cb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42c2ce: cmp dword ptr [0x44f570], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f570u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42c2d4: jae 0x42c2e0 */
  if (!cf) goto L_42c2e0;
L_42c2d6: /* 42c2d6: mov dword ptr [0x44e024], 1 */
  W32((uint32_t)(0x44e024u), 0x1u);
L_42c2e0: /* 42c2e0: mov dword ptr [0x44f570], eax */
  W32((uint32_t)(0x44f570u), eax);
/* 42c2e5: mov eax, dword ptr [0x44e024] */
  eax = R32((uint32_t)(0x44e024u));
/* 42c2ea: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_42c2ed: /* 42c2ed: inc dword ptr [0x44e024] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44e024u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44e024u), r);
  }
/* 42c2f3: mov eax, dword ptr [0x44e024] */
  eax = R32((uint32_t)(0x44e024u));
/* 42c2f8: sub eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42c2fb: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42c300: jbe 0x42c310 */
  if ((cf | zf)) goto L_42c310;
L_42c302: /* 42c302: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c303: call 0x401156 */
  esp -= 4; W32(esp, 0x42c308u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42c308: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c309: xor esi, esi */
  esi = 0;
/* 42c30b: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 42c30e: jmp 0x42c337 */
  goto L_42c337;
L_42c310: /* 42c310: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 42c312: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c313: push dword ptr [0x44e024] */
  { uint32_t v = R32((uint32_t)(0x44e024u)); esp -= 4; W32(esp, v); }
/* 42c319: call 0x416c93 */
  esp -= 4; W32(esp, 0x42c31eu); SPILL(); f_416c93(); if (g_unwind) return; RELOAD();
/* 42c31e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42c320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c321: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42c326u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42c326: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c329: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c32b: je 0x42c2ed */
  if (zf) goto L_42c2ed;
L_42c32d: /* 42c32d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42c332u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42c332: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c335: je 0x42c2ed */
  if (zf) goto L_42c2ed;
L_42c337: /* 42c337: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c33b: call 0x42c345 */
  esp -= 4; W32(esp, 0x42c340u); SPILL(); f_42c345(); if (g_unwind) return; RELOAD();
/* 42c340: jmp 0x42c351 */
  goto L_42c351;
L_42c34e: /* 42c34e: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_42c351: /* 42c351: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42c354: call 0x401156 */
  esp -= 4; W32(esp, 0x42c359u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42c359: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c35a: mov eax, esi */
  eax = esi;
L_42c35c: /* 42c35c: call 0x40105a */
  esp -= 4; W32(esp, 0x42c361u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c361: ret  */
  esp += 4; SPILL(); return;
}

void f_42c342(void) {
  LOAD_REGS();
L_42c342: /* 42c342: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
  SPILL(); f_42c345(); return;
}

void f_42c345(void) {
  LOAD_REGS();
L_42c345: /* 42c345: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42c347: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42c34cu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42c34c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c34d: ret  */
  esp += 4; SPILL(); return;
}

void f_42c362(void) {
  LOAD_REGS();
L_42c362: /* 42c362: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c367: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c368: mov esi, 0x44f574 */
  esi = 0x44f574u;
/* 42c36d: je 0x42c374 */
  if (zf) goto L_42c374;
L_42c36f: /* 42c36f: mov esi, 0x44f590 */
  esi = 0x44f590u;
L_42c374: /* 42c374: push 0x440824 */
  { uint32_t v = 0x440824u; esp -= 4; W32(esp, v); }
/* 42c379: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c37a: call 0x4013ce */
  esp -= 4; W32(esp, 0x42c37fu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 42c37f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c380: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 42c383: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c384: mov cx, word ptr [eax - 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xfffffffeu))) & 0xffffu);
/* 42c388: cmp cx, 0x5c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c38c: je 0x42c39b */
  if (zf) goto L_42c39b;
L_42c38e: /* 42c38e: cmp cx, 0x2f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c392: je 0x42c39b */
  if (zf) goto L_42c39b;
L_42c394: /* 42c394: mov word ptr [eax], 0x5c */
  W16((uint32_t)(eax), 0x5cu);
/* 42c399: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42c39a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_42c39b: /* 42c39b: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c3a0: je 0x42c3a9 */
  if (zf) goto L_42c3a9;
L_42c3a2: /* 42c3a2: mov word ptr [eax], 0x74 */
  W16((uint32_t)(eax), 0x74u);
/* 42c3a7: jmp 0x42c3ae */
  goto L_42c3ae;
L_42c3a9: /* 42c3a9: mov word ptr [eax], 0x73 */
  W16((uint32_t)(eax), 0x73u);
L_42c3ae: /* 42c3ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42c3af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42c3b0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42c3b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c3b3: call 0x419028 */
  esp -= 4; W32(esp, 0x42c3b8u); SPILL(); f_419028(); if (g_unwind) return; RELOAD();
/* 42c3b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c3b9: call 0x416c93 */
  esp -= 4; W32(esp, 0x42c3beu); SPILL(); f_416c93(); if (g_unwind) return; RELOAD();
/* 42c3be: push 0x43e92c */
  { uint32_t v = 0x43e92cu; esp -= 4; W32(esp, v); }
/* 42c3c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c3c4: call 0x4013ea */
  esp -= 4; W32(esp, 0x42c3c9u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42c3c9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c3cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42c3cd: ret  */
  esp += 4; SPILL(); return;
}

void f_42c3ce(void) {
  LOAD_REGS();
L_42c3ce: /* 42c3ce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42c3cf: mov ebp, esp */
  ebp = esp;
/* 42c3d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42c3d4: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 42c3d9: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 42c3dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c3dd: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 42c3df: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c3e2: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 42c3e5: call 0x401a22 */
  esp -= 4; W32(esp, 0x42c3eau); SPILL(); f_401a22(); if (g_unwind) return; RELOAD();
/* 42c3ea: mov esi, eax */
  esi = eax;
/* 42c3ec: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42c3ee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42c3ef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42c3f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42c3f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c3f3: call 0x417c33 */
  esp -= 4; W32(esp, 0x42c3f8u); SPILL(); f_417c33(); if (g_unwind) return; RELOAD();
/* 42c3f8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c3fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42c3fc: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42c401: jb 0x42c408 */
  if (cf) goto L_42c408;
L_42c403: /* 42c403: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42c406: jmp 0x42c420 */
  goto L_42c420;
L_42c408: /* 42c408: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 42c40a: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 42c40d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42c40e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c40f: call 0x416c93 */
  esp -= 4; W32(esp, 0x42c414u); SPILL(); f_416c93(); if (g_unwind) return; RELOAD();
/* 42c414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c415: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c416: call 0x4013ce */
  esp -= 4; W32(esp, 0x42c41bu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 42c41b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c41e: xor eax, eax */
  eax = 0;
L_42c420: /* 42c420: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42c423: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42c426: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42c427: call 0x4013ab */
  esp -= 4; W32(esp, 0x42c42cu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 42c42c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42c42d: ret  */
  esp += 4; SPILL(); return;
}

void f_42c42e(void) {
  LOAD_REGS();
L_42c42e: /* 42c42e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42c430: push 0x440f28 */
  { uint32_t v = 0x440f28u; esp -= 4; W32(esp, v); }
/* 42c435: call 0x40101f */
  esp -= 4; W32(esp, 0x42c43au); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c43a: xor ebx, ebx */
  ebx = 0;
/* 42c43c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42c43f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42c441: call 0x40fa82 */
  esp -= 4; W32(esp, 0x42c446u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 42c446: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c447: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c449: je 0x42c4da */
  if (zf) goto L_42c4da;
L_42c44f: /* 42c44f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42c451: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42c456u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42c456: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c457: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42c45a: cmp word ptr [0x44f574], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44f574u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c461: jne 0x42c489 */
  if (!zf) goto L_42c489;
L_42c463: /* 42c463: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c464: call 0x42c362 */
  esp -= 4; W32(esp, 0x42c469u); SPILL(); f_42c362(); if (g_unwind) return; RELOAD();
/* 42c469: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c46a: mov esi, 0x44f574 */
  esi = 0x44f574u;
L_42c46f: /* 42c46f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c471: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42c476u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42c476: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c477: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c47a: jne 0x42c490 */
  if (!zf) goto L_42c490;
L_42c47c: /* 42c47c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c47d: call 0x42c3ce */
  esp -= 4; W32(esp, 0x42c482u); SPILL(); f_42c3ce(); if (g_unwind) return; RELOAD();
/* 42c482: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c483: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c485: je 0x42c46f */
  if (zf) goto L_42c46f;
L_42c487: /* 42c487: jmp 0x42c4ce */
  goto L_42c4ce;
L_42c489: /* 42c489: mov esi, 0x44f574 */
  esi = 0x44f574u;
/* 42c48e: jmp 0x42c47c */
  goto L_42c47c;
L_42c490: /* 42c490: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42c493: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c495: jne 0x42c4c2 */
  if (!zf) goto L_42c4c2;
L_42c497: /* 42c497: call 0x40137f */
  esp -= 4; W32(esp, 0x42c49cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42c49c: mov edi, eax */
  edi = eax;
/* 42c49e: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 42c4a1: cmp dword ptr [edi + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c4a4: jne 0x42c4bc */
  if (!zf) goto L_42c4bc;
L_42c4a6: /* 42c4a6: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 42c4a8: call 0x4010eb */
  esp -= 4; W32(esp, 0x42c4adu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42c4ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c4ae: mov dword ptr [edi + 0x30], eax */
  W32((uint32_t)(edi + 0x30u), eax);
/* 42c4b1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c4b3: jne 0x42c4bc */
  if (!zf) goto L_42c4bc;
L_42c4b5: /* 42c4b5: mov edi, esi */
  edi = esi;
/* 42c4b7: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 42c4ba: jmp 0x42c4cb */
  goto L_42c4cb;
L_42c4bc: /* 42c4bc: mov edi, dword ptr [edi + 0x30] */
  edi = R32((uint32_t)(edi + 0x30u));
/* 42c4bf: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_42c4c2: /* 42c4c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c4c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c4c4: call 0x4013ce */
  esp -= 4; W32(esp, 0x42c4c9u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 42c4c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c4ca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c4cb: /* 42c4cb: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
L_42c4ce: /* 42c4ce: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c4d2: call 0x42c4e0 */
  esp -= 4; W32(esp, 0x42c4d7u); SPILL(); f_42c4e0(); if (g_unwind) return; RELOAD();
/* 42c4d7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_42c4da: /* 42c4da: call 0x40105a */
  esp -= 4; W32(esp, 0x42c4dfu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c4df: ret  */
  esp += 4; SPILL(); return;
}

void f_42c4e0(void) {
  LOAD_REGS();
L_42c4e0: /* 42c4e0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42c4e2: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42c4e7u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42c4e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c4e8: ret  */
  esp += 4; SPILL(); return;
}

void f_42c4e9(void) {
  LOAD_REGS();
L_42c4e9: /* 42c4e9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 42c4eb: push 0x440f38 */
  { uint32_t v = 0x440f38u; esp -= 4; W32(esp, v); }
/* 42c4f0: call 0x40101f */
  esp -= 4; W32(esp, 0x42c4f5u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c4f5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42c4f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c4f9: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c4feu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c4fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c4ff: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c503: and dword ptr [esi + 0xc], 0xffffffcf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0xffffffcfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 42c507: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 42c50a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c50d: je 0x42c526 */
  if (zf) goto L_42c526;
L_42c50f: /* 42c50f: mov ecx, eax */
  ecx = eax;
/* 42c511: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42c514: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42c517: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42c51a: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42c521: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 42c524: jmp 0x42c52b */
  goto L_42c52b;
L_42c526: /* 42c526: mov eax, 0x449008 */
  eax = 0x449008u;
L_42c52b: /* 42c52b: mov cl, byte ptr [eax + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4u))) & 0xffu);
/* 42c52e: and cl, 0xfd */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42c531: mov byte ptr [eax + 4], cl */
  W8((uint32_t)(eax + 0x4u), (ecx & 0xffu));
/* 42c534: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c538: call 0x42c546 */
  esp -= 4; W32(esp, 0x42c53du); SPILL(); f_42c546(); if (g_unwind) return; RELOAD();
/* 42c53d: call 0x40105a */
  esp -= 4; W32(esp, 0x42c542u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c542: ret  */
  esp += 4; SPILL(); return;
}

void f_42c543(void) {
  LOAD_REGS();
L_42c543: /* 42c543: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_42c546(); return;
}

void f_42c546(void) {
  LOAD_REGS();
L_42c546: /* 42c546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c547: call 0x413925 */
  esp -= 4; W32(esp, 0x42c54cu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c54c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c54d: ret  */
  esp += 4; SPILL(); return;
}

void f_42c54e(void) {
  LOAD_REGS();
L_42c54e: /* 42c54e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 42c552: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 42c555: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42c558: ret  */
  esp += 4; SPILL(); return;
}

void f_42c559(void) {
  LOAD_REGS();
L_42c559: /* 42c559: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 42c55d: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 42c560: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42c563: ret  */
  esp += 4; SPILL(); return;
}

void f_42c564(void) {
  LOAD_REGS();
L_42c564: /* 42c564: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42c566: push 0x440f48 */
  { uint32_t v = 0x440f48u; esp -= 4; W32(esp, v); }
/* 42c56b: call 0x40101f */
  esp -= 4; W32(esp, 0x42c570u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c570: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42c573: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c574: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c579u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c579: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c57a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c57e: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42c581: js 0x42c58d */
  if (sf) goto L_42c58d;
L_42c583: /* 42c583: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42c585: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 42c588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42c589: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42c58b: jmp 0x42c594 */
  goto L_42c594;
L_42c58d: /* 42c58d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c58e: call 0x42ac9e */
  esp -= 4; W32(esp, 0x42c593u); SPILL(); f_42ac9e(); if (g_unwind) return; RELOAD();
/* 42c593: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c594: /* 42c594: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42c597: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c59b: call 0x42c5ac */
  esp -= 4; W32(esp, 0x42c5a0u); SPILL(); f_42c5ac(); if (g_unwind) return; RELOAD();
/* 42c5a0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42c5a3: call 0x40105a */
  esp -= 4; W32(esp, 0x42c5a8u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c5a8: ret  */
  esp += 4; SPILL(); return;
}

void f_42c5a9(void) {
  LOAD_REGS();
L_42c5a9: /* 42c5a9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_42c5ac(); return;
}

void f_42c5ac(void) {
  LOAD_REGS();
L_42c5ac: /* 42c5ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c5ad: call 0x413925 */
  esp -= 4; W32(esp, 0x42c5b2u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c5b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c5b3: ret  */
  esp += 4; SPILL(); return;
}

void f_42c5b4(void) {
  LOAD_REGS();
L_42c5b4: /* 42c5b4: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 42c5b8: call 0x42f542 */
  esp -= 4; W32(esp, 0x42c5bdu); SPILL(); f_42f542(); if (g_unwind) return; RELOAD();
/* 42c5bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c5be: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 42c5c2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 42c5c5: mov edx, eax */
  edx = eax;
/* 42c5c7: and edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 42c5ca: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 42c5cc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42c5cf: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c5d1: je 0x42c5d5 */
  if (zf) goto L_42c5d5;
L_42c5d3: /* 42c5d3: xor eax, eax */
  eax = 0;
L_42c5d5: /* 42c5d5: ret  */
  esp += 4; SPILL(); return;
}

void f_42c5d6(void) {
  LOAD_REGS();
L_42c5d6: /* 42c5d6: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42c5d8: push 0x440f58 */
  { uint32_t v = 0x440f58u; esp -= 4; W32(esp, v); }
/* 42c5dd: call 0x40101f */
  esp -= 4; W32(esp, 0x42c5e2u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c5e2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42c5e5: mov edi, ebx */
  edi = ebx;
/* 42c5e7: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42c5ea: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42c5ee: jg 0x42c5f4 */
  if ((!zf && sf == of)) goto L_42c5f4;
L_42c5f0: /* 42c5f0: xor eax, eax */
  eax = 0;
/* 42c5f2: jmp 0x42c64b */
  goto L_42c64b;
L_42c5f4: /* 42c5f4: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 42c5f7: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42c5fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c5fb: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c600u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c600: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c601: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42c605: /* 42c605: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42c608: je 0x42c63c */
  if (zf) goto L_42c63c;
L_42c60a: /* 42c60a: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42c60d: js 0x42c619 */
  if (sf) goto L_42c619;
L_42c60f: /* 42c60f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42c611: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 42c614: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42c615: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42c617: jmp 0x42c620 */
  goto L_42c620;
L_42c619: /* 42c619: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c61a: call 0x42ac9e */
  esp -= 4; W32(esp, 0x42c61fu); SPILL(); f_42ac9e(); if (g_unwind) return; RELOAD();
/* 42c61f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c620: /* 42c620: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42c623: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c626: jne 0x42c632 */
  if (!zf) goto L_42c632;
L_42c628: /* 42c628: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c62a: jne 0x42c63c */
  if (!zf) goto L_42c63c;
L_42c62c: /* 42c62c: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42c630: jmp 0x42c63f */
  goto L_42c63f;
L_42c632: /* 42c632: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 42c634: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42c635: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 42c638: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42c63a: jne 0x42c605 */
  if (!zf) goto L_42c605;
L_42c63c: /* 42c63c: and byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi), r);
  }
L_42c63f: /* 42c63f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c643: call 0x42c654 */
  esp -= 4; W32(esp, 0x42c648u); SPILL(); f_42c654(); if (g_unwind) return; RELOAD();
/* 42c648: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_42c64b: /* 42c64b: call 0x40105a */
  esp -= 4; W32(esp, 0x42c650u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c650: ret  */
  esp += 4; SPILL(); return;
}

void f_42c651(void) {
  LOAD_REGS();
L_42c651: /* 42c651: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
  SPILL(); f_42c654(); return;
}

void f_42c654(void) {
  LOAD_REGS();
L_42c654: /* 42c654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c655: call 0x413925 */
  esp -= 4; W32(esp, 0x42c65au); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c65a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c65b: ret  */
  esp += 4; SPILL(); return;
}

void f_42c65c(void) {
  LOAD_REGS();
L_42c65c: /* 42c65c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42c65d: mov ebp, esp */
  ebp = esp;
/* 42c65f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42c660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c661: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42c664: test byte ptr [esi + 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42c668: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c669: jne 0x42c733 */
  if (!zf) goto L_42c733;
L_42c66f: /* 42c66f: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 42c672: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c675: je 0x42c68e */
  if (zf) goto L_42c68e;
L_42c677: /* 42c677: mov ecx, eax */
  ecx = eax;
/* 42c679: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42c67c: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42c683: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42c686: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42c689: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 42c68c: jmp 0x42c693 */
  goto L_42c693;
L_42c68e: /* 42c68e: mov eax, 0x449008 */
  eax = 0x449008u;
L_42c693: /* 42c693: test byte ptr [eax + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42c697: je 0x42c733 */
  if (zf) goto L_42c733;
L_42c69d: /* 42c69d: xor edi, edi */
  edi = 0;
/* 42c69f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42c6a0: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42c6a3: js 0x42c6af */
  if (sf) goto L_42c6af;
L_42c6a5: /* 42c6a5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42c6a7: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 42c6aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42c6ab: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42c6ad: jmp 0x42c6b6 */
  goto L_42c6b6;
L_42c6af: /* 42c6af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c6b0: call 0x42ac9e */
  esp -= 4; W32(esp, 0x42c6b5u); SPILL(); f_42ac9e(); if (g_unwind) return; RELOAD();
/* 42c6b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c6b6: /* 42c6b6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c6b9: jne 0x42c6c4 */
  if (!zf) goto L_42c6c4;
L_42c6bb: /* 42c6bb: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 42c6bf: jmp 0x42c74c */
  goto L_42c74c;
L_42c6c4: /* 42c6c4: mov ecx, dword ptr [0x449030] */
  ecx = R32((uint32_t)(0x449030u));
/* 42c6ca: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 42c6cd: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42c6d0: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42c6d5: je 0x42c70a */
  if (zf) goto L_42c70a;
L_42c6d7: /* 42c6d7: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42c6da: js 0x42c6e6 */
  if (sf) goto L_42c6e6;
L_42c6dc: /* 42c6dc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42c6de: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 42c6e1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42c6e2: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42c6e4: jmp 0x42c6ed */
  goto L_42c6ed;
L_42c6e6: /* 42c6e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c6e7: call 0x42ac9e */
  esp -= 4; W32(esp, 0x42c6ecu); SPILL(); f_42ac9e(); if (g_unwind) return; RELOAD();
/* 42c6ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c6ed: /* 42c6ed: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c6f0: jne 0x42c704 */
  if (!zf) goto L_42c704;
L_42c6f2: /* 42c6f2: movsx eax, byte ptr [ebp - 4] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xfffffffcu)));
/* 42c6f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c6f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c6f8: call 0x42d5ed */
  esp -= 4; W32(esp, 0x42c6fdu); SPILL(); f_42d5ed(); if (g_unwind) return; RELOAD();
/* 42c6fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c6fe: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 42c702: jmp 0x42c74b */
  goto L_42c74b;
L_42c704: /* 42c704: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42c706: mov byte ptr [ebp - 3], al */
  W8((uint32_t)(ebp + 0xfffffffdu), (eax & 0xffu));
/* 42c709: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42c70a: /* 42c70a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c70b: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 42c70e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c70f: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 42c712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c713: call 0x402197 */
  esp -= 4; W32(esp, 0x42c718u); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 42c718: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c71b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c71e: jne 0x42c72d */
  if (!zf) goto L_42c72d;
L_42c720: /* 42c720: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42c725u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42c725: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
/* 42c72b: jmp 0x42c6bb */
  goto L_42c6bb;
L_42c72d: /* 42c72d: mov ax, word ptr [ebp + 0xa] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xau))) & 0xffffu);
/* 42c731: jmp 0x42c74c */
  goto L_42c74c;
L_42c733: /* 42c733: add dword ptr [esi + 4], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42c737: js 0x42c745 */
  if (sf) goto L_42c745;
L_42c739: /* 42c739: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42c73b: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 42c73e: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 42c741: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 42c743: jmp 0x42c74c */
  goto L_42c74c;
L_42c745: /* 42c745: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c746: call 0x42f589 */
  esp -= 4; W32(esp, 0x42c74bu); SPILL(); f_42f589(); if (g_unwind) return; RELOAD();
L_42c74b: /* 42c74b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c74c: /* 42c74c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42c74d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42c74e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42c74f: ret  */
  esp += 4; SPILL(); return;
}

void f_42c750(void) {
  LOAD_REGS();
L_42c750: /* 42c750: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42c752: push 0x440f68 */
  { uint32_t v = 0x440f68u; esp -= 4; W32(esp, v); }
/* 42c757: call 0x40101f */
  esp -= 4; W32(esp, 0x42c75cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c75c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c75f: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c764u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c764: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c765: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c769: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c76c: call 0x42c65c */
  esp -= 4; W32(esp, 0x42c771u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42c771: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c772: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42c775: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c779: call 0x42c788 */
  esp -= 4; W32(esp, 0x42c77eu); SPILL(); f_42c788(); if (g_unwind) return; RELOAD();
/* 42c77e: mov ax, word ptr [ebp - 0x1c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe4u))) & 0xffffu);
/* 42c782: call 0x40105a */
  esp -= 4; W32(esp, 0x42c787u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c787: ret  */
  esp += 4; SPILL(); return;
}

void f_42c788(void) {
  LOAD_REGS();
L_42c788: /* 42c788: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c78b: call 0x413925 */
  esp -= 4; W32(esp, 0x42c790u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c790: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c791: ret  */
  esp += 4; SPILL(); return;
}

void f_42c792(void) {
  LOAD_REGS();
L_42c792: /* 42c792: jmp 0x42c750 */
  SPILL(); f_42c750(); return;
}

void f_42c794(void) {
  LOAD_REGS();
L_42c794: /* 42c794: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42c796: push 0x440f78 */
  { uint32_t v = 0x440f78u; esp -= 4; W32(esp, v); }
/* 42c79b: call 0x40101f */
  esp -= 4; W32(esp, 0x42c7a0u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c7a0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42c7a3: mov esi, edi */
  esi = edi;
/* 42c7a5: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 42c7a8: xor ebx, ebx */
  ebx = 0;
/* 42c7aa: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42c7ad: jg 0x42c7b3 */
  if ((!zf && sf == of)) goto L_42c7b3;
L_42c7af: /* 42c7af: xor eax, eax */
  eax = 0;
/* 42c7b1: jmp 0x42c804 */
  goto L_42c804;
L_42c7b3: /* 42c7b3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42c7b6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42c7b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c7ba: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c7bfu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c7bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c7c0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_42c7c3: /* 42c7c3: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 42c7c6: je 0x42c7f5 */
  if (zf) goto L_42c7f5;
L_42c7c8: /* 42c7c8: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42c7cb: call 0x42c65c */
  esp -= 4; W32(esp, 0x42c7d0u); SPILL(); f_42c65c(); if (g_unwind) return; RELOAD();
/* 42c7d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c7d1: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 42c7d4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42c7d7: cmp eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c7dc: jne 0x42c7e7 */
  if (!zf) goto L_42c7e7;
L_42c7de: /* 42c7de: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c7e0: jne 0x42c7f5 */
  if (!zf) goto L_42c7f5;
L_42c7e2: /* 42c7e2: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42c7e5: jmp 0x42c7f8 */
  goto L_42c7f8;
L_42c7e7: /* 42c7e7: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 42c7ea: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42c7eb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42c7ec: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 42c7ef: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c7f3: jne 0x42c7c3 */
  if (!zf) goto L_42c7c3;
L_42c7f5: /* 42c7f5: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
L_42c7f8: /* 42c7f8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c7fc: call 0x42c80a */
  esp -= 4; W32(esp, 0x42c801u); SPILL(); f_42c80a(); if (g_unwind) return; RELOAD();
/* 42c801: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_42c804: /* 42c804: call 0x40105a */
  esp -= 4; W32(esp, 0x42c809u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c809: ret  */
  esp += 4; SPILL(); return;
}

void f_42c80a(void) {
  LOAD_REGS();
L_42c80a: /* 42c80a: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42c80d: call 0x413925 */
  esp -= 4; W32(esp, 0x42c812u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c812: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c813: ret  */
  esp += 4; SPILL(); return;
}

void f_42c814(void) {
  LOAD_REGS();
L_42c814: /* 42c814: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 42c816: push 0x440f88 */
  { uint32_t v = 0x440f88u; esp -= 4; W32(esp, v); }
/* 42c81b: call 0x40101f */
  esp -= 4; W32(esp, 0x42c820u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c820: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42c823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c824: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c829u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c829: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c82a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c82e: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42c831: js 0x42c841 */
  if (sf) goto L_42c841;
L_42c833: /* 42c833: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 42c835: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 42c838: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 42c83a: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42c83d: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 42c83f: jmp 0x42c84c */
  goto L_42c84c;
L_42c841: /* 42c841: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c842: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c845: call 0x414470 */
  esp -= 4; W32(esp, 0x42c84au); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 42c84a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c84b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42c84c: /* 42c84c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42c84f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c853: call 0x42c864 */
  esp -= 4; W32(esp, 0x42c858u); SPILL(); f_42c864(); if (g_unwind) return; RELOAD();
/* 42c858: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42c85b: call 0x40105a */
  esp -= 4; W32(esp, 0x42c860u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c860: ret  */
  esp += 4; SPILL(); return;
}

void f_42c861(void) {
  LOAD_REGS();
L_42c861: /* 42c861: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
  SPILL(); f_42c864(); return;
}

void f_42c864(void) {
  LOAD_REGS();
L_42c864: /* 42c864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c865: call 0x413925 */
  esp -= 4; W32(esp, 0x42c86au); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c86a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c86b: ret  */
  esp += 4; SPILL(); return;
}

void f_42c86c(void) {
  LOAD_REGS();
L_42c86c: /* 42c86c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42c86e: push 0x440f98 */
  { uint32_t v = 0x440f98u; esp -= 4; W32(esp, v); }
/* 42c873: call 0x40101f */
  esp -= 4; W32(esp, 0x42c878u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c878: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c87b: call 0x402493 */
  esp -= 4; W32(esp, 0x42c880u); SPILL(); hle_strlen(); RELOAD();
/* 42c880: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42c883: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42c886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c887: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c88cu); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c88c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c88d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c88e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c892: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c893: call 0x413ad8 */
  esp -= 4; W32(esp, 0x42c898u); SPILL(); f_413ad8(); if (g_unwind) return; RELOAD();
/* 42c898: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42c89b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c89c: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42c89f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42c8a1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c8a4: call 0x42ce6b */
  esp -= 4; W32(esp, 0x42c8a9u); SPILL(); f_42ce6b(); if (g_unwind) return; RELOAD();
/* 42c8a9: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42c8ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c8ad: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 42c8b0: call 0x413b5a */
  esp -= 4; W32(esp, 0x42c8b5u); SPILL(); f_413b5a(); if (g_unwind) return; RELOAD();
/* 42c8b5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42c8b8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c8bc: call 0x42c8d3 */
  esp -= 4; W32(esp, 0x42c8c1u); SPILL(); f_42c8d3(); if (g_unwind) return; RELOAD();
/* 42c8c1: xor eax, eax */
  eax = 0;
/* 42c8c3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42c8c6: cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42c8c9: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 42c8cc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 42c8cd: call 0x40105a */
  esp -= 4; W32(esp, 0x42c8d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c8d2: ret  */
  esp += 4; SPILL(); return;
}

void f_42c8d3(void) {
  LOAD_REGS();
L_42c8d3: /* 42c8d3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42c8d6: call 0x413925 */
  esp -= 4; W32(esp, 0x42c8dbu); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c8db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c8dc: ret  */
  esp += 4; SPILL(); return;
}

void f_42c8dd(void) {
  LOAD_REGS();
L_42c8dd: /* 42c8dd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42c8df: push 0x440fa8 */
  { uint32_t v = 0x440fa8u; esp -= 4; W32(esp, v); }
/* 42c8e4: call 0x40101f */
  esp -= 4; W32(esp, 0x42c8e9u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c8e9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42c8ec: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42c8ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c8f0: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c8f5u); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c8f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c8f6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c8fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c8fb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c8fe: call 0x401f77 */
  esp -= 4; W32(esp, 0x42c903u); SPILL(); f_401f77(); if (g_unwind) return; RELOAD();
/* 42c903: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c904: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c905: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42c908: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c90c: call 0x42c91b */
  esp -= 4; W32(esp, 0x42c911u); SPILL(); f_42c91b(); if (g_unwind) return; RELOAD();
/* 42c911: mov ax, word ptr [ebp - 0x20] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe0u))) & 0xffffu);
/* 42c915: call 0x40105a */
  esp -= 4; W32(esp, 0x42c91au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c91a: ret  */
  esp += 4; SPILL(); return;
}

void f_42c91b(void) {
  LOAD_REGS();
L_42c91b: /* 42c91b: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 42c91e: call 0x413925 */
  esp -= 4; W32(esp, 0x42c923u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c923: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c924: ret  */
  esp += 4; SPILL(); return;
}

void f_42c925(void) {
  LOAD_REGS();
L_42c925: /* 42c925: jmp 0x42c8dd */
  SPILL(); f_42c8dd(); return;
}

void f_42c927(void) {
  LOAD_REGS();
L_42c927: /* 42c927: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42c929: push 0x440fb8 */
  { uint32_t v = 0x440fb8u; esp -= 4; W32(esp, v); }
/* 42c92e: call 0x40101f */
  esp -= 4; W32(esp, 0x42c933u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42c933: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42c937: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42c93a: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42c93fu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42c93f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 42c942: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42c945: call 0x4138f6 */
  esp -= 4; W32(esp, 0x42c94au); SPILL(); f_4138f6(); if (g_unwind) return; RELOAD();
/* 42c94a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c94b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c94c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_42c950: /* 42c950: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42c953: dec dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 42c956: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c958: je 0x42c979 */
  if (zf) goto L_42c979;
L_42c95a: /* 42c95a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42c95d: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 42c960: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42c963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42c964: call 0x401f77 */
  esp -= 4; W32(esp, 0x42c969u); SPILL(); f_401f77(); if (g_unwind) return; RELOAD();
/* 42c969: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c96a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c96b: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42c96f: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42c973: jne 0x42c950 */
  if (!zf) goto L_42c950;
L_42c975: /* 42c975: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_42c979: /* 42c979: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42c97d: call 0x42c98b */
  esp -= 4; W32(esp, 0x42c982u); SPILL(); f_42c98b(); if (g_unwind) return; RELOAD();
/* 42c982: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42c985: call 0x40105a */
  esp -= 4; W32(esp, 0x42c98au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42c98a: ret  */
  esp += 4; SPILL(); return;
}

void f_42c98b(void) {
  LOAD_REGS();
L_42c98b: /* 42c98b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42c98e: call 0x413925 */
  esp -= 4; W32(esp, 0x42c993u); SPILL(); f_413925(); if (g_unwind) return; RELOAD();
/* 42c993: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42c994: ret  */
  esp += 4; SPILL(); return;
}

void f_42c995(void) {
  LOAD_REGS();
L_42c995: /* 42c995: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42c996: mov ebp, esp */
  ebp = esp;
/* 42c998: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42c999: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42c99a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c99b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42c99e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c99f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42c9a2: imul edi, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  edi = (uint32_t)r;
  }
/* 42c9a6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c9a8: mov ecx, edi */
  ecx = edi;
/* 42c9aa: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 42c9ad: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 42c9b0: jne 0x42c9b9 */
  if (!zf) goto L_42c9b9;
L_42c9b2: /* 42c9b2: xor eax, eax */
  eax = 0;
/* 42c9b4: jmp 0x42ca64 */
  goto L_42ca64;
L_42c9b9: /* 42c9b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42c9ba: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 42c9bd: test word ptr [esi + 0xc], 0x10c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42c9c3: je 0x42c9cd */
  if (zf) goto L_42c9cd;
L_42c9c5: /* 42c9c5: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 42c9c8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 42c9cb: jmp 0x42c9d9 */
  goto L_42c9d9;
L_42c9cd: /* 42c9cd: mov dword ptr [ebp - 4], 0x1000 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1000u);
/* 42c9d4: jmp 0x42c9d9 */
  goto L_42c9d9;
L_42c9d6: /* 42c9d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_42c9d9: /* 42c9d9: test word ptr [esi + 0xc], 0x10c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0xcu))); uint16_t b = (uint16_t)(0x10cu);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42c9df: je 0x42ca0b */
  if (zf) goto L_42ca0b;
L_42c9e1: /* 42c9e1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 42c9e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42c9e6: je 0x42ca0b */
  if (zf) goto L_42ca0b;
L_42c9e8: /* 42c9e8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42c9ea: mov edi, ecx */
  edi = ecx;
/* 42c9ec: jb 0x42c9f0 */
  if (cf) goto L_42c9f0;
L_42c9ee: /* 42c9ee: mov edi, eax */
  edi = eax;
L_42c9f0: /* 42c9f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42c9f1: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 42c9f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42c9f4: call 0x40126b */
  esp -= 4; W32(esp, 0x42c9f9u); SPILL(); hle_memcpy(); RELOAD();
/* 42c9f9: sub dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42c9fc: sub dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 42c9ff: add dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 42ca01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ca04: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 42ca06: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 42ca09: jmp 0x42ca56 */
  goto L_42ca56;
L_42ca0b: /* 42ca0b: cmp ecx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42ca0e: jb 0x42ca3e */
  if (cf) goto L_42ca3e;
L_42ca10: /* 42ca10: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ca14: mov eax, ecx */
  eax = ecx;
/* 42ca16: je 0x42ca21 */
  if (zf) goto L_42ca21;
L_42ca18: /* 42ca18: xor edx, edx */
  edx = 0;
/* 42ca1a: div dword ptr [ebp - 4] */
  { uint32_t d = R32((uint32_t)(ebp + 0xfffffffcu)); if (!d) d = guest_divzero(0x42ca1a);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 42ca1d: mov eax, ecx */
  eax = ecx;
/* 42ca1f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_42ca21: /* 42ca21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ca22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42ca23: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 42ca26: call 0x4251e0 */
  esp -= 4; W32(esp, 0x42ca2bu); SPILL(); f_4251e0(); if (g_unwind) return; RELOAD();
/* 42ca2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ca2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ca30: je 0x42ca68 */
  if (zf) goto L_42ca68;
L_42ca32: /* 42ca32: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ca35: je 0x42ca78 */
  if (zf) goto L_42ca78;
L_42ca37: /* 42ca37: sub dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42ca3a: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 42ca3c: jmp 0x42ca56 */
  goto L_42ca56;
L_42ca3e: /* 42ca3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42ca3f: call 0x42ac9e */
  esp -= 4; W32(esp, 0x42ca44u); SPILL(); f_42ac9e(); if (g_unwind) return; RELOAD();
/* 42ca44: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ca47: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ca48: je 0x42ca6c */
  if (zf) goto L_42ca6c;
L_42ca4a: /* 42ca4a: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 42ca4c: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 42ca4f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42ca50: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42ca53: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_42ca56: /* 42ca56: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ca5a: jne 0x42c9d6 */
  if (!zf) goto L_42c9d6;
L_42ca60: /* 42ca60: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_42ca63: /* 42ca63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_42ca64: /* 42ca64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42ca65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42ca66: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42ca67: ret  */
  esp += 4; SPILL(); return;
L_42ca68: /* 42ca68: or dword ptr [esi + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_42ca6c: /* 42ca6c: mov eax, edi */
  eax = edi;
/* 42ca6e: sub eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42ca71: xor edx, edx */
  edx = 0;
/* 42ca73: div dword ptr [ebp + 0xc] */
  { uint32_t d = R32((uint32_t)(ebp + 0xcu)); if (!d) d = guest_divzero(0x42ca73);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 42ca76: jmp 0x42ca63 */
  goto L_42ca63;
L_42ca78: /* 42ca78: or dword ptr [esi + 0xc], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 42ca7c: jmp 0x42ca6c */
  goto L_42ca6c;
}
