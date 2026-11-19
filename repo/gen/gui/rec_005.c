#include "recomp.h"
#include "rec_mod.h"

void f_f93611(void) {
  LOAD_REGS();
L_f93611: /* f93611: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* f93614: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f93619: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* f9361c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9361d: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* f93620: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf93625u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f93625(); return;
}

void f_f93625(void) {
  LOAD_REGS();
L_f93625: /* f93625: push 0xfa54b4 */
  { uint32_t v = 0xfa54b4u; esp -= 4; W32(esp, v); }
/* f9362a: push 0xfb9b40 */
  { uint32_t v = 0xfb9b40u; esp -= 4; W32(esp, v); }
/* f9362f: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf93635u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f93635: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f93638: xor ebx, ebx */
  ebx = 0;
/* f9363a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9363b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9363c: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf93641u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f93641: guest_badaddr(0xf93641); return;
}

void f_f93720(void) {
  LOAD_REGS();
L_f93720: /* f93720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f93721: mov ebp, esp */
  ebp = esp;
/* f93723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f93725: push 0xf9a7f6 */
  { uint32_t v = 0xf9a7f6u; esp -= 4; W32(esp, v); }
/* f9372a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f93730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f93738: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9373b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9373c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9373d: mov esi, ecx */
  esi = ecx;
/* f9373f: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93744: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f93747: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f9374e: je 0xf93bda */
  if (zf) goto L_f93bda;
L_f93754: /* f93754: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f9375a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9375c: je 0xf93bda */
  if (zf) goto L_f93bda;
L_f93762: /* f93762: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f93765: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f93766: call 0xf71366 */
  esp -= 4; W32(esp, 0xf9376bu); SPILL(); f_f71366(); if (g_unwind) return; RELOAD();
/* f9376b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9376d: mov ecx, esi */
  ecx = esi;
/* f9376f: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0xf93772u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93772: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f93775: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf9377bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f9377b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f9377e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f93782: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf93788u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f93788: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f9378e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9378f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f93792: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f93796: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf9379cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f9379c: test byte ptr [esi + 0x1f0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f937a3: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* f937a6: je 0xf937d7 */
  if (zf) goto L_f937d7;
L_f937a8: /* f937a8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f937aa: je 0xf937d7 */
  if (zf) goto L_f937d7;
L_f937ac: /* f937ac: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f937af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f937b1: jle 0xf937d7 */
  if ((zf || sf != of)) goto L_f937d7;
L_f937b3: /* f937b3: xor ecx, ecx */
  ecx = 0;
L_f937b5: /* f937b5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f937b7: je 0xf937be */
  if (zf) goto L_f937be;
L_f937b9: /* f937b9: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f937bc: jmp 0xf937c0 */
  goto L_f937c0;
L_f937be: /* f937be: xor eax, eax */
  eax = 0;
L_f937c0: /* f937c0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f937c2: jge 0xf937d7 */
  if ((sf == of)) goto L_f937d7;
L_f937c4: /* f937c4: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* f937c7: mov ax, word ptr [0xfb9b48] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xfb9b48u))) & 0xffffu);
/* f937cd: mov word ptr [edx + ecx*2], ax */
  W16((uint32_t)(edx + ecx*2), (eax & 0xffffu));
/* f937d1: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* f937d4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f937d5: jmp 0xf937b5 */
  goto L_f937b5;
L_f937d7: /* f937d7: fld dword ptr [ebx + 0x3c] */
  { double v = F32((uint32_t)(ebx + 0x3cu)); FPUSH(v); }
/* f937da: call 0xf979dc */
  esp -= 4; W32(esp, 0xf937dfu); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f937df: fld dword ptr [ebx + 0x40] */
  { double v = F32((uint32_t)(ebx + 0x40u)); FPUSH(v); }
/* f937e2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f937e5: call 0xf979dc */
  esp -= 4; W32(esp, 0xf937eau); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f937ea: movzx ecx, byte ptr [esi + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x30u)));
/* f937ee: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* f937f4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f937f7: mov eax, dword ptr [edx + ecx*4 + 0x5c] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x5cu));
/* f937fb: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* f937fe: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f93804: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f9380a: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9380fu); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9380f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f93811: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f93814: je 0xf9381b */
  if (zf) goto L_f9381b;
L_f93816: /* f93816: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f93819: jmp 0xf9381d */
  goto L_f9381d;
L_f9381b: /* f9381b: xor eax, eax */
  eax = 0;
L_f9381d: /* f9381d: cmp eax, dword ptr [esi + 0x220] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x220u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f93823: jne 0xf93833 */
  if (!zf) goto L_f93833;
L_f93825: /* f93825: mov ecx, dword ptr [esi + 0x210] */
  ecx = R32((uint32_t)(esi + 0x210u));
/* f9382b: cmp ecx, dword ptr [esi + 0x21c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x21cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f93831: je 0xf93854 */
  if (zf) goto L_f93854;
L_f93833: /* f93833: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f93839: mov ecx, dword ptr [esi + 0x214] */
  ecx = R32((uint32_t)(esi + 0x214u));
/* f9383f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f93841: jg 0xf93864 */
  if ((!zf && sf == of)) goto L_f93864;
L_f93843: /* f93843: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f93844: xor edx, edx */
  edx = 0;
/* f93846: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f93848: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* f9384b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f9384c: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f9384e: mov dword ptr [esi + 0x214], eax */
  W32((uint32_t)(esi + 0x214u), eax);
L_f93854: /* f93854: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f93856: je 0xf938f8 */
  if (zf) goto L_f938f8;
L_f9385c: /* f9385c: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f9385f: jmp 0xf938fa */
  goto L_f938fa;
L_f93864: /* f93864: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f93866: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93867: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93868: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* f9386b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9386c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f9386f: call dword ptr [0xfce42c] */
  esp -= 4; W32(esp, 0xf93875u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* f93875: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_f93879: /* f93879: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f9387c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9387d: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf93883u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f93883: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* f93886: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f9388a: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf93890u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f93890: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f93893: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf93899u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f93899: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f9389c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9389d: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f938a3: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* f938a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f938a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f938a8: xor eax, eax */
  eax = 0;
/* f938aa: mov al, byte ptr [esi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f938ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f938ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f938af: call 0xf72211 */
  esp -= 4; W32(esp, 0xf938b4u); SPILL(); f_f72211(); if (g_unwind) return; RELOAD();
/* f938b4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f938b7: cmp dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f938ba: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* f938bd: jle 0xf93854 */
  if ((zf || sf != of)) goto L_f93854;
L_f938bf: /* f938bf: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f938c1: je 0xf938c8 */
  if (zf) goto L_f938c8;
L_f938c3: /* f938c3: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
/* f938c6: jmp 0xf938ca */
  goto L_f938ca;
L_f938c8: /* f938c8: xor ecx, ecx */
  ecx = 0;
L_f938ca: /* f938ca: mov eax, dword ptr [esi + 0x214] */
  eax = R32((uint32_t)(esi + 0x214u));
/* f938d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f938d2: jge 0xf93854 */
  if ((sf == of)) goto L_f93854;
L_f938d4: /* f938d4: mov edx, dword ptr [esi + 0x210] */
  edx = R32((uint32_t)(esi + 0x210u));
/* f938da: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f938db: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f938dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f938de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f938df: mov dword ptr [esi + 0x214], eax */
  W32((uint32_t)(esi + 0x214u), eax);
/* f938e5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* f938e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f938e9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f938ec: call dword ptr [0xfce42c] */
  esp -= 4; W32(esp, 0xf938f2u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* f938f2: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* f938f6: jmp 0xf93879 */
  goto L_f93879;
L_f938f8: /* f938f8: xor eax, eax */
  eax = 0;
L_f938fa: /* f938fa: mov dword ptr [esi + 0x220], eax */
  W32((uint32_t)(esi + 0x220u), eax);
/* f93900: test byte ptr [esi + 0x20c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x20cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93907: je 0xf93913 */
  if (zf) goto L_f93913;
L_f93909: /* f93909: mov dword ptr [esi + 0x214], 0 */
  W32((uint32_t)(esi + 0x214u), 0x0u);
L_f93913: /* f93913: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f93915: je 0xf9391c */
  if (zf) goto L_f9391c;
L_f93917: /* f93917: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* f9391a: jmp 0xf9391e */
  goto L_f9391e;
L_f9391c: /* f9391c: xor eax, eax */
  eax = 0;
L_f9391e: /* f9391e: mov ecx, dword ptr [esi + 0x214] */
  ecx = R32((uint32_t)(esi + 0x214u));
/* f93924: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f93926: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93927: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93928: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* f9392b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9392c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f9392f: call dword ptr [0xfce42c] */
  esp -= 4; W32(esp, 0xf93935u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* f93935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93936: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f93939: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* f9393d: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf93943u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f93943: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* f93946: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f9394a: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf93950u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f93950: test byte ptr [esi + 0x20c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x20cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93957: jne 0xf93b3e */
  if (!zf) goto L_f93b3e;
L_f9395d: /* f9395d: test byte ptr [esi + 0x58], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93961: je 0xf93b3e */
  if (zf) goto L_f93b3e;
L_f93967: /* f93967: mov ecx, dword ptr [esi + 0x214] */
  ecx = R32((uint32_t)(esi + 0x214u));
/* f9396d: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f93973: xor edi, edi */
  edi = 0;
/* f93975: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f93977: je 0xf939d3 */
  if (zf) goto L_f939d3;
L_f93979: /* f93979: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* f9397c: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f9397e: je 0xf939d3 */
  if (zf) goto L_f939d3;
L_f93980: /* f93980: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f93981: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f93983: je 0xf939d3 */
  if (zf) goto L_f939d3;
L_f93985: /* f93985: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f93987: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93988: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93989: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* f9398c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9398d: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f93990: call dword ptr [0xfce42c] */
  esp -= 4; W32(esp, 0xf93996u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* f93996: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* f93999: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f9399d: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf939a3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f939a3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f939a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f939a6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f939a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f939aa: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* f939ad: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f939b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f939b1: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f939b6: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f939bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f939bc: mov ecx, ebx */
  ecx = ebx;
/* f939be: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf939c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f939c4: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* f939c7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f939cb: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf939d1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f939d1: jmp 0xf93a0a */
  goto L_f93a0a;
L_f939d3: /* f939d3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f939d5: push 0xfb9b4c */
  { uint32_t v = 0xfb9b4cu; esp -= 4; W32(esp, v); }
/* f939da: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f939dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f939de: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* f939e1: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f939e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f939e5: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f939ea: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f939ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f939f0: mov ecx, ebx */
  ecx = ebx;
/* f939f2: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf939f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f939f8: mov eax, dword ptr [esi + 0x224] */
  eax = R32((uint32_t)(esi + 0x224u));
/* f939fe: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f93a01: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* f93a04: mov dword ptr [esi + 0x224], eax */
  W32((uint32_t)(esi + 0x224u), eax);
L_f93a0a: /* f93a0a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93a0c: mov ecx, esi */
  ecx = esi;
/* f93a0e: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf93a14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93a14: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f93a17: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f93a19: mov ecx, esi */
  ecx = esi;
/* f93a1b: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf93a1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93a1e: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* f93a21: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f93a27: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f93a2a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f93a2b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f93a2d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f93a2f: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f93a32: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f93a35: mov byte ptr [ebx + 0x50], 5 */
  W8((uint32_t)(ebx + 0x50u), 0x5u);
/* f93a39: mov al, byte ptr [esi + 0x224] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x224u))) & 0xffu);
/* f93a3f: fisub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)));
/* f93a42: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93a45: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93a47: mov eax, esp */
  eax = esp;
/* f93a49: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f93a4c: je 0xf93ac8 */
  if (zf) goto L_f93ac8;
L_f93a4e: /* f93a4e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* f93a51: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* f93a53: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* f93a56: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* f93a59: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* f93a5c: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f93a5f: fld dword ptr [ecx + 0xf4] */
  { double v = F32((uint32_t)(ecx + 0xf4u)); FPUSH(v); }
/* f93a65: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f93a6b: call 0xf979dc */
  esp -= 4; W32(esp, 0xf93a70u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f93a70: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93a73: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* f93a75: mov edx, esp */
  edx = esp;
/* f93a77: mov byte ptr [ebp - 0x18], cl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ecx & 0xffu));
/* f93a7a: mov byte ptr [ebp - 0x17], cl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ecx & 0xffu));
/* f93a7d: mov byte ptr [ebp - 0x16], cl */
  W8((uint32_t)(ebp + 0xffffffeau), (ecx & 0xffu));
/* f93a80: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f93a83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93a84: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f93a87: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
/* f93a8a: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf93a90u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f93a90: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f93a93: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f93a96: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* f93a9c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* f93a9e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93a9f: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f93aa4: push 0x40400000 */
  { uint32_t v = 0x40400000u; esp -= 4; W32(esp, v); }
/* f93aa9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93aaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93aab: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93aae: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f93ab2: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f93ab5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f93ab8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93ab9: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f93abc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93abd: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* f93ac0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93ac1: mov ecx, ebx */
  ecx = ebx;
/* f93ac3: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf93ac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93ac6: jmp 0xf93b40 */
  goto L_f93b40;
L_f93ac8: /* f93ac8: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* f93aca: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* f93acd: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* f93ad0: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* f93ad3: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f93ad6: fld dword ptr [eax + 0xf4] */
  { double v = F32((uint32_t)(eax + 0xf4u)); FPUSH(v); }
/* f93adc: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f93adf: call 0xf979dc */
  esp -= 4; W32(esp, 0xf93ae4u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f93ae4: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* f93ae6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93ae9: mov byte ptr [ebp - 0x18], cl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ecx & 0xffu));
/* f93aec: mov byte ptr [ebp - 0x17], cl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ecx & 0xffu));
/* f93aef: mov byte ptr [ebp - 0x16], cl */
  W8((uint32_t)(ebp + 0xffffffeau), (ecx & 0xffu));
/* f93af2: mov ecx, esp */
  ecx = esp;
/* f93af4: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f93af7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93af8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f93afb: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
/* f93afe: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf93b04u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f93b04: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f93b07: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f93b0a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f93b0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93b0d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f93b12: push 0x40400000 */
  { uint32_t v = 0x40400000u; esp -= 4; W32(esp, v); }
/* f93b17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93b18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93b19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93b1a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f93b1d: push 0x40400000 */
  { uint32_t v = 0x40400000u; esp -= 4; W32(esp, v); }
/* f93b22: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f93b25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93b26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93b27: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f93b2a: fadd dword ptr [esi + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xb4u)));
/* f93b30: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* f93b33: mov ecx, ebx */
  ecx = ebx;
/* f93b35: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f93b38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93b39: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf93b3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93b3c: jmp 0xf93b40 */
  goto L_f93b40;
L_f93b3e: /* f93b3e: xor edi, edi */
  edi = 0;
L_f93b40: /* f93b40: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* f93b46: mov dword ptr [ebx + 0x44], ecx */
  W32((uint32_t)(ebx + 0x44u), ecx);
/* f93b49: mov edx, dword ptr [esi + 0xa8] */
  edx = R32((uint32_t)(esi + 0xa8u));
/* f93b4f: mov dword ptr [ebx + 0x48], edx */
  W32((uint32_t)(ebx + 0x48u), edx);
/* f93b52: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* f93b58: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* f93b5b: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* f93b61: mov dword ptr [ebx + 0x40], ecx */
  W32((uint32_t)(ebx + 0x40u), ecx);
/* f93b64: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f93b67: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf93b6du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f93b6d: fld dword ptr [esi + 0xb0] */
  { double v = F32((uint32_t)(esi + 0xb0u)); FPUSH(v); }
/* f93b73: fsub dword ptr [esi + 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xa8u)));
/* f93b79: mov edx, dword ptr [esi + 0xa8] */
  edx = R32((uint32_t)(esi + 0xa8u));
/* f93b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93b80: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* f93b86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93b87: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93b8a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f93b8e: xor ecx, ecx */
  ecx = 0;
/* f93b90: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f93b96: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f93b99: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f93b9f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f93ba2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93ba4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93ba5: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f93bab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f93bac: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf93bb1u); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f93bb1: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f93bb4: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f93bb7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f93bbb: fstp dword ptr [ebx + 0x3c] */
  WF32((uint32_t)(ebx + 0x3cu), ST0); FPOP();
/* f93bbe: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f93bc1: fstp dword ptr [ebx + 0x40] */
  WF32((uint32_t)(ebx + 0x40u), ST0); FPOP();
/* f93bc4: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f93bc7: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf93bcdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f93bcd: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f93bd0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f93bd4: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf93bdau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_f93bda: /* f93bda: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f93bdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f93bde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f93bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f93be6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f93be7: mov esp, ebp */
  esp = ebp;
/* f93be9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f93bea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f93bed(void) {
  LOAD_REGS();
L_f93bed: /* f93bed: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f93bf0: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f93bf5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f93bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93bf9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* f93bfc: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf93c01u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f93c01(); return;
}

void f_f93c01(void) {
  LOAD_REGS();
L_f93c01: /* f93c01: push 0xfa54e4 */
  { uint32_t v = 0xfa54e4u; esp -= 4; W32(esp, v); }
/* f93c06: push 0xfb9b50 */
  { uint32_t v = 0xfb9b50u; esp -= 4; W32(esp, v); }
/* f93c0b: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf93c11u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f93c11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f93c14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93c16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93c18: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf93c1du); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f93c1d: guest_badaddr(0xf93c1d); return;
}

void f_f93d60(void) {
  LOAD_REGS();
L_f93d60: /* f93d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f93d61: mov ebp, esp */
  ebp = esp;
/* f93d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f93d65: push 0xf9a810 */
  { uint32_t v = 0xf9a810u; esp -= 4; W32(esp, v); }
/* f93d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f93d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f93d78: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93d7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f93d7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f93d7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f93d80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93d81: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f93d84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93d85: mov esi, ecx */
  esi = ecx;
/* f93d87: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f93d8e: call 0xf710d7 */
  esp -= 4; W32(esp, 0xf93d93u); SPILL(); f_f710d7(); if (g_unwind) return; RELOAD();
/* f93d93: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f93d96: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* f93d98: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93d9a: je 0xf93ed4 */
  if (zf) goto L_f93ed4;
L_f93da0: /* f93da0: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f93da6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93da7: call 0xf7121c */
  esp -= 4; W32(esp, 0xf93dacu); SPILL(); f_f7121c(); if (g_unwind) return; RELOAD();
/* f93dac: mov ecx, dword ptr [eax + 0x1e0] */
  ecx = R32((uint32_t)(eax + 0x1e0u));
/* f93db2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f93db5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f93db7: jle 0xf93dd0 */
  if ((zf || sf != of)) goto L_f93dd0;
L_f93db9: /* f93db9: cmp dword ptr [eax + 0x1ec], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1ecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f93dbf: jle 0xf93dd0 */
  if ((zf || sf != of)) goto L_f93dd0;
L_f93dc1: /* f93dc1: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f93dc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f93dc9: call 0xf72176 */
  esp -= 4; W32(esp, 0xf93dceu); SPILL(); f_f72176(); if (g_unwind) return; RELOAD();
/* f93dce: jmp 0xf93dfc */
  goto L_f93dfc;
L_f93dd0: /* f93dd0: mov edi, dword ptr [esi + 0x1ec] */
  edi = R32((uint32_t)(esi + 0x1ecu));
/* f93dd6: mov edx, dword ptr [0xfba380] */
  edx = R32((uint32_t)(0xfba380u));
/* f93ddc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93dde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93ddf: mov ecx, edi */
  ecx = edi;
/* f93de1: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* f93de8: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf93deeu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f93dee: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f93df0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93df2: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f93df5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93df7: mov ecx, edi */
  ecx = edi;
/* f93df9: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf93dfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f93dfc: /* f93dfc: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f93e02: test byte ptr [ecx + 0x58], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x58u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f93e05: je 0xf93e17 */
  if (zf) goto L_f93e17;
L_f93e07: /* f93e07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f93e09: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf93e0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e0c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f93e0f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f93e12: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f93e15: jmp 0xf93e1e */
  goto L_f93e1e;
L_f93e17: /* f93e17: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_f93e1e: /* f93e1e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93e20: mov ecx, esi */
  ecx = esi;
/* f93e22: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf93e28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e28: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f93e2b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f93e2d: mov ecx, esi */
  ecx = esi;
/* f93e2f: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf93e35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e35: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f93e38: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93e3a: mov ecx, esi */
  ecx = esi;
/* f93e3c: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf93e3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e3f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f93e42: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f93e44: mov ecx, esi */
  ecx = esi;
/* f93e46: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf93e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e49: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f93e4c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f93e4f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f93e52: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f93e58: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* f93e5b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f93e5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93e5e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f93e61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93e62: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f93e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93e66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93e67: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f93e6a: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf93e70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e70: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f93e72: mov ecx, esi */
  ecx = esi;
/* f93e74: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf93e7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e7a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f93e7d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f93e7f: mov ecx, esi */
  ecx = esi;
/* f93e81: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf93e87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e87: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f93e8a: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f93e90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f93e92: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf93e95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e95: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f93e98: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f93e9a: mov ecx, esi */
  ecx = esi;
/* f93e9c: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf93e9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93e9f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f93ea2: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f93ea8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f93eaa: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf93eadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f93ead: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f93eb0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f93eb3: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f93eb6: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f93ebc: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f93ebf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f93ec1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93ec2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f93ec5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93ec6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f93ec9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93eca: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f93ecd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93ece: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf93ed4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f93ed4: /* f93ed4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f93ed7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f93ed8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f93ed9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f93ee0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f93ee1: mov esp, ebp */
  esp = ebp;
/* f93ee3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f93ee4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f93ee7(void) {
  LOAD_REGS();
L_f93ee7: /* f93ee7: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f93eea: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f93eef: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f93ef2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93ef3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f93ef6: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf93efbu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f93efb(); return;
}

void f_f93efb(void) {
  LOAD_REGS();
L_f93efb: /* f93efb: push 0xfa550c */
  { uint32_t v = 0xfa550cu; esp -= 4; W32(esp, v); }
/* f93f00: push 0xfb9b78 */
  { uint32_t v = 0xfb9b78u; esp -= 4; W32(esp, v); }
/* f93f05: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf93f0bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f93f0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f93f0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93f10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f93f12: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf93f17u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f93f17: guest_badaddr(0xf93f17); return;
}

void f_f93f90(void) {
  LOAD_REGS();
L_f93f90: /* f93f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f93f91: mov ebp, esp */
  ebp = esp;
/* f93f93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f93f95: push 0xf9a820 */
  { uint32_t v = 0xf9a820u; esp -= 4; W32(esp, v); }
/* f93f9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f93fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93fa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f93fa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f93fab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f93fac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f93fad: mov esi, ecx */
  esi = ecx;
/* f93faf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f93fb2: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f93fb8: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* f93fbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f93fbc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f93fbe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f93fc1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f93fc8: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf93fceu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f93fce: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* f93fd1: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* f93fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93fd5: xor eax, eax */
  eax = 0;
/* f93fd7: mov al, byte ptr [esi + 0x208] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x208u))) & 0xffu);
/* f93fdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93fde: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* f93fe1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93fe2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f93fe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93fe6: xor edx, edx */
  edx = 0;
/* f93fe8: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f93feb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93fec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f93fef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f93ff0: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f93ff6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f93ff7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f93ff8: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf93ffdu); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f93ffd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f94000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f94001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f94002: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94009: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9400a: mov esp, ebp */
  esp = ebp;
/* f9400c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9400d: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_f94010(void) {
  LOAD_REGS();
L_f94010: /* f94010: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f94013: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94018: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f9401b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9401c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f9401f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94024u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f94024(); return;
}

void f_f94024(void) {
  LOAD_REGS();
L_f94024: /* f94024: push 0xfa5548 */
  { uint32_t v = 0xfa5548u; esp -= 4; W32(esp, v); }
/* f94029: push 0xfb9be4 */
  { uint32_t v = 0xfb9be4u; esp -= 4; W32(esp, v); }
/* f9402e: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf94034u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f94034: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f94037: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94039: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9403b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94040u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f94040: guest_badaddr(0xf94040); return;
}

void f_f94080(void) {
  LOAD_REGS();
L_f94080: /* f94080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94081: mov ebp, esp */
  ebp = esp;
/* f94083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94085: push 0xf9a830 */
  { uint32_t v = 0xf9a830u; esp -= 4; W32(esp, v); }
/* f9408a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94098: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9409b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9409c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9409d: mov esi, ecx */
  esi = ecx;
/* f9409f: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f940a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f940a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f940a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f940ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f940b2: je 0xf9417a */
  if (zf) goto L_f9417a;
L_f940b8: /* f940b8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f940bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f940bc: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf940c1u); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f940c1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f940c3: mov ecx, esi */
  ecx = esi;
/* f940c5: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf940c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f940c8: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f940cb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f940cd: mov ecx, esi */
  ecx = esi;
/* f940cf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf940d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f940d2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f940d5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f940d7: mov ecx, esi */
  ecx = esi;
/* f940d9: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf940dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f940df: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f940e2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f940e4: mov ecx, esi */
  ecx = esi;
/* f940e6: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf940ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f940ec: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f940ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f940f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f940f5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f940f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f940f9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f940fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f940fd: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f94103: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94104: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94105: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94107: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94108: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf9410du); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f9410d: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f94113: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf94119u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f94119: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9411b: mov ecx, esi */
  ecx = esi;
/* f9411d: mov edi, eax */
  edi = eax;
/* f9411f: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf94122u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94122: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f94125: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f94127: mov ecx, esi */
  ecx = esi;
/* f94129: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf9412cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9412c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f9412f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94131: mov ecx, esi */
  ecx = esi;
/* f94133: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf94139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94139: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f9413c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9413e: mov ecx, esi */
  ecx = esi;
/* f94140: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf94146u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94146: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f94149: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f9414f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f94152: fild dword ptr [ecx + 0x98] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x98u)); FPUSH(v); }
/* f94158: xor edx, edx */
  edx = 0;
/* f9415a: mov dl, byte ptr [esi + 0x1d8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d8u))) & 0xffu);
/* f94160: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f94163: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94164: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94165: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f94168: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94169: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f9416c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9416d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9416e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9416f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f94172: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f94174: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94175: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf9417au); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
L_f9417a: /* f9417a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9417d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9417e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9417f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94186: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f94187: mov esp, ebp */
  esp = ebp;
/* f94189: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9418a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f9418d(void) {
  LOAD_REGS();
L_f9418d: /* f9418d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f94190: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94195: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* f94198: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94199: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* f9419c: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf941a1u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f941a1(); return;
}

void f_f941a1(void) {
  LOAD_REGS();
L_f941a1: /* f941a1: push 0xfa5578 */
  { uint32_t v = 0xfa5578u; esp -= 4; W32(esp, v); }
/* f941a6: push 0xfb9c48 */
  { uint32_t v = 0xfb9c48u; esp -= 4; W32(esp, v); }
/* f941ab: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf941b1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f941b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f941b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f941b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f941b8: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf941bdu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f941bd: guest_badaddr(0xf941bd); return;
}

void f_f94210(void) {
  LOAD_REGS();
L_f94210: /* f94210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94211: mov ebp, esp */
  ebp = esp;
/* f94213: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94215: push 0xf9a840 */
  { uint32_t v = 0xf9a840u; esp -= 4; W32(esp, v); }
/* f9421a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94221: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94228: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9422b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9422e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9422f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f94230: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94231: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f94234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94235: mov esi, ecx */
  esi = ecx;
/* f94237: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f9423e: call 0xf710d7 */
  esp -= 4; W32(esp, 0xf94243u); SPILL(); f_f710d7(); if (g_unwind) return; RELOAD();
/* f94243: mov ecx, esi */
  ecx = esi;
/* f94245: call 0xf720ae */
  esp -= 4; W32(esp, 0xf9424au); SPILL(); f_f720ae(); if (g_unwind) return; RELOAD();
/* f9424a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9424d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9424e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9424f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94256: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f94257: mov esp, ebp */
  esp = ebp;
/* f94259: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9425a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f9425d(void) {
  LOAD_REGS();
L_f9425d: /* f9425d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f94260: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94265: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f94268: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94269: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f9426c: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94271u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f94271(); return;
}

void f_f94271(void) {
  LOAD_REGS();
L_f94271: /* f94271: push 0xfa55a4 */
  { uint32_t v = 0xfa55a4u; esp -= 4; W32(esp, v); }
/* f94276: push 0xfb9c58 */
  { uint32_t v = 0xfb9c58u; esp -= 4; W32(esp, v); }
/* f9427b: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf94281u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f94281: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f94284: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94286: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94288: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9428du); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9428d: guest_badaddr(0xf9428d); return;
}

void f_f942b0(void) {
  LOAD_REGS();
L_f942b0: /* f942b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f942b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f942b5: mov esi, ecx */
  esi = ecx;
/* f942b7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* f942ba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f942bb: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* f942be: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f942c1: jne 0xf942d8 */
  if (!zf) goto L_f942d8;
L_f942c3: /* f942c3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f942c4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* f942c7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f942ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f942cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f942cd: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f942d2: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf942d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f942d8: /* f942d8: mov ecx, esi */
  ecx = esi;
/* f942da: call 0xf720ae */
  esp -= 4; W32(esp, 0xf942dfu); SPILL(); f_f720ae(); if (g_unwind) return; RELOAD();
/* f942df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f942e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f94300(void) {
  LOAD_REGS();
L_f94300: /* f94300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94301: mov ebp, esp */
  ebp = esp;
/* f94303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94305: push 0xf9a859 */
  { uint32_t v = 0xf9a859u; esp -= 4; W32(esp, v); }
/* f9430a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94318: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9431b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9431c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9431d: mov esi, ecx */
  esi = ecx;
/* f9431f: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f94325: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f94327: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94328: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f9432b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f94332: je 0xf94517 */
  if (zf) goto L_f94517;
L_f94338: /* f94338: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9433c: je 0xf94517 */
  if (zf) goto L_f94517;
L_f94342: /* f94342: fld dword ptr [esi + 0x1cc] */
  { double v = F32((uint32_t)(esi + 0x1ccu)); FPUSH(v); }
/* f94348: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f9434e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f94350: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f94353: jp 0xf9436c */
  if (pf) goto L_f9436c;
L_f94355: /* f94355: fld dword ptr [esi + 0x1d0] */
  { double v = F32((uint32_t)(esi + 0x1d0u)); FPUSH(v); }
/* f9435b: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f94361: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f94363: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f94366: jnp 0xf94517 */
  if (!pf) goto L_f94517;
L_f9436c: /* f9436c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f9436f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94370: mov ecx, esi */
  ecx = esi;
/* f94372: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf94377u); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f94377: fild dword ptr [edi + 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x60u)); FPUSH(v); }
/* f9437a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9437c: mov ecx, esi */
  ecx = esi;
/* f9437e: fmul dword ptr [0xfa5604] */
  ST0 = ST0 * (F32((uint32_t)(0xfa5604u)));
/* f94384: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f94387: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf9438au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9438a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9438c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f9438f: mov ecx, esi */
  ecx = esi;
/* f94391: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf94394u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94394: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f94397: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f94399: mov ecx, esi */
  ecx = esi;
/* f9439b: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf943a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f943a1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f943a4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f943a6: mov ecx, esi */
  ecx = esi;
/* f943a8: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf943abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f943ab: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f943ae: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f943b0: mov ecx, esi */
  ecx = esi;
/* f943b2: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf943b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f943b8: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f943bb: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f943be: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f943c1: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f943c7: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f943cd: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f943d0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f943d3: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f943d9: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* f943dd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f943e0: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* f943e3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f943e7: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f943ea: fmul dword ptr [0xfa5600] */
  ST0 = ST0 * (F32((uint32_t)(0xfa5600u)));
/* f943f0: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* f943f3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f943f7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f943fa: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* f943fd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f94400: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94402: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94403: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf94408u); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f94408: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9440a: mov ecx, esi */
  ecx = esi;
/* f9440c: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf94412u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94412: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f94415: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f94417: mov ecx, esi */
  ecx = esi;
/* f94419: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf9441cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9441c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f9441f: fld dword ptr [esi + 0x1e0] */
  { double v = F32((uint32_t)(esi + 0x1e0u)); FPUSH(v); }
/* f94425: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94427: fsub dword ptr [esi + 0x1cc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1ccu)));
/* f9442d: mov ecx, esi */
  ecx = esi;
/* f9442f: fld dword ptr [esi + 0x1d0] */
  { double v = F32((uint32_t)(esi + 0x1d0u)); FPUSH(v); }
/* f94435: fsub dword ptr [esi + 0x1cc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1ccu)));
/* f9443b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* f9443d: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f94440: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* f94443: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* f94445: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f94448: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* f9444b: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f9444e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f94451: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf94457u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94457: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f9445a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f9445d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f94460: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94462: mov ecx, esi */
  ecx = esi;
/* f94464: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf94467u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94467: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f9446a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f9446d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f94470: mov ecx, eax */
  ecx = eax;
/* f94472: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94473: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f94476: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94477: xor edx, edx */
  edx = 0;
/* f94479: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f9447c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f9447f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f94482: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94483: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94484: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f9448a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9448b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9448c: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf94491u); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f94491: mov ecx, dword ptr [esi + 0x1e8] */
  ecx = R32((uint32_t)(esi + 0x1e8u));
/* f94497: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f94499: je 0xf94517 */
  if (zf) goto L_f94517;
L_f9449b: /* f9449b: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* f9449e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9449f: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* f944a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f944a3: push 0xfb9cdc */
  { uint32_t v = 0xfb9cdcu; esp -= 4; W32(esp, v); }
/* f944a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f944aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f944ab: call 0xf72211 */
  esp -= 4; W32(esp, 0xf944b0u); SPILL(); f_f72211(); if (g_unwind) return; RELOAD();
/* f944b0: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* f944b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f944b4: mov ecx, esi */
  ecx = esi;
/* f944b6: call 0xf71983 */
  esp -= 4; W32(esp, 0xf944bbu); SPILL(); f_f71983(); if (g_unwind) return; RELOAD();
/* f944bb: mov ecx, eax */
  ecx = eax;
/* f944bd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f944c1: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf944c7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f944c7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f944c9: mov ecx, esi */
  ecx = esi;
/* f944cb: mov ebx, eax */
  ebx = eax;
/* f944cd: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf944d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f944d0: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f944d3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f944d5: mov ecx, esi */
  ecx = esi;
/* f944d7: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf944ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f944dd: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f944e0: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* f944e3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f944e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f944e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f944e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f944ea: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f944ed: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f944f0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f944f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f944f4: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f944f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f944f8: mov ecx, dword ptr [esi + 0x1e8] */
  ecx = R32((uint32_t)(esi + 0x1e8u));
/* f944fe: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f94501: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94502: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94504: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94505: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf9450au); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f9450a: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f9450d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f94511: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf94517u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_f94517: /* f94517: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9451a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9451b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9451c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94523: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f94524: mov esp, ebp */
  esp = ebp;
/* f94526: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f94527: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f9452a(void) {
  LOAD_REGS();
L_f9452a: /* f9452a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* f9452d: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94532: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f94535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94536: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* f94539: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9453eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f9453e(); return;
}

void f_f9453e(void) {
  LOAD_REGS();
L_f9453e: /* f9453e: push 0xfa55d8 */
  { uint32_t v = 0xfa55d8u; esp -= 4; W32(esp, v); }
/* f94543: push 0xfb9ce4 */
  { uint32_t v = 0xfb9ce4u; esp -= 4; W32(esp, v); }
/* f94548: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf9454eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f9454e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f94551: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94553: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94555: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9455au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9455a: guest_badaddr(0xf9455a); return;
}

void f_f94600(void) {
  LOAD_REGS();
L_f94600: /* f94600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94601: mov ebp, esp */
  ebp = esp;
/* f94603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94605: push 0xf9a870 */
  { uint32_t v = 0xf9a870u; esp -= 4; W32(esp, v); }
/* f9460a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94618: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9461b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9461c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9461d: mov esi, ecx */
  esi = ecx;
/* f9461f: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f94621: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94622: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f94625: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f9462b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f9462e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f94635: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9463au); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9463a: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f94640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94641: call 0xf979dc */
  esp -= 4; W32(esp, 0xf94646u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f94646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94647: mov ecx, esi */
  ecx = esi;
/* f94649: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf9464cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9464c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9464e: jne 0xf94661 */
  if (!zf) goto L_f94661;
L_f94650: /* f94650: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f94653: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9465a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9465b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9465c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9465d: mov esp, ebp */
  esp = ebp;
/* f9465f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f94660: ret  */
  esp += 4; SPILL(); return;
L_f94661: /* f94661: mov bl, byte ptr [esi + 0x9c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9cu))) & 0xffu);
/* f94667: mov ecx, esi */
  ecx = esi;
/* f94669: mov byte ptr [esi + 0x9c], 0 */
  W8((uint32_t)(esi + 0x9cu), 0x0u);
/* f94670: call 0xf712c1 */
  esp -= 4; W32(esp, 0xf94675u); SPILL(); f_f712c1(); if (g_unwind) return; RELOAD();
/* f94675: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f94678: mov byte ptr [esi + 0x9c], bl */
  W8((uint32_t)(esi + 0x9cu), (ebx & 0xffu));
/* f9467e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9467f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f94680: mov eax, 1 */
  eax = 0x1u;
/* f94685: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9468c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9468d: mov esp, ebp */
  esp = ebp;
/* f9468f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f94690: ret  */
  esp += 4; SPILL(); return;
}

void f_f94691(void) {
  LOAD_REGS();
L_f94691: /* f94691: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f94694: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94699: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f9469c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9469d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f946a0: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf946a5u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f946a5(); return;
}

void f_f946a5(void) {
  LOAD_REGS();
L_f946a5: /* f946a5: push 0xfa5608 */
  { uint32_t v = 0xfa5608u; esp -= 4; W32(esp, v); }
/* f946aa: push 0xfb9cf4 */
  { uint32_t v = 0xfb9cf4u; esp -= 4; W32(esp, v); }
/* f946af: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf946b5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f946b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f946b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f946ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f946bc: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf946c1u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f946c1: guest_badaddr(0xf946c1); return;
}

void f_f94710(void) {
  LOAD_REGS();
L_f94710: /* f94710: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94711: mov ebp, esp */
  ebp = esp;
/* f94713: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94715: push 0xf9a880 */
  { uint32_t v = 0xf9a880u; esp -= 4; W32(esp, v); }
/* f9471a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94721: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94728: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9472b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9472c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9472d: mov esi, ecx */
  esi = ecx;
/* f9472f: mov cl, byte ptr [esi + 0x1d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d8u))) & 0xffu);
/* f94735: mov bl, byte ptr [esi + 0x30] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f94738: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* f9473a: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9473c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9473d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f94740: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f94747: je 0xf9474c */
  if (zf) goto L_f9474c;
L_f94749: /* f94749: mov byte ptr [esi + 0x30], al */
  W8((uint32_t)(esi + 0x30u), (eax & 0xffu));
L_f9474c: /* f9474c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9474f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94750: mov ecx, esi */
  ecx = esi;
/* f94752: call 0xf71366 */
  esp -= 4; W32(esp, 0xf94757u); SPILL(); f_f71366(); if (g_unwind) return; RELOAD();
/* f94757: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9475a: mov byte ptr [esi + 0x30], bl */
  W8((uint32_t)(esi + 0x30u), (ebx & 0xffu));
/* f9475d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9475e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9475f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94766: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f94767: mov esp, ebp */
  esp = ebp;
/* f94769: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9476a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f9476d(void) {
  LOAD_REGS();
L_f9476d: /* f9476d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f94770: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94775: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f94778: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94779: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f9477c: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94781u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f94781(); return;
}

void f_f94781(void) {
  LOAD_REGS();
L_f94781: /* f94781: push 0xfa564c */
  { uint32_t v = 0xfa564cu; esp -= 4; W32(esp, v); }
/* f94786: push 0xfb9cfc */
  { uint32_t v = 0xfb9cfcu; esp -= 4; W32(esp, v); }
/* f9478b: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf94791u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f94791: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f94794: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94796: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94798: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9479du); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9479d: guest_badaddr(0xf9479d); return;
}

void f_f947d0(void) {
  LOAD_REGS();
L_f947d0: /* f947d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f947d1: mov ebp, esp */
  ebp = esp;
/* f947d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f947d5: push 0xf9a890 */
  { uint32_t v = 0xf9a890u; esp -= 4; W32(esp, v); }
/* f947da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f947e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f947e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f947e8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f947eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f947ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f947ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f947f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f947f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f947f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f947f5: mov esi, ecx */
  esi = ecx;
/* f947f7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f947fe: call 0xf71389 */
  esp -= 4; W32(esp, 0xf94803u); SPILL(); f_f71389(); if (g_unwind) return; RELOAD();
/* f94803: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f94806: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* f94808: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9480a: je 0xf949b8 */
  if (zf) goto L_f949b8;
L_f94810: /* f94810: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f94816: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f94818: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf9481bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9481b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f9481e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f94821: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f94827: mov edx, eax */
  edx = eax;
/* f94829: mov dword ptr [ecx + 0x74], edx */
  W32((uint32_t)(ecx + 0x74u), edx);
/* f9482c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f9482f: mov eax, dword ptr [esi + 0x1f8] */
  eax = R32((uint32_t)(esi + 0x1f8u));
/* f94835: test byte ptr [eax + 0x58], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x58u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f94838: je 0xf94841 */
  if (zf) goto L_f94841;
L_f9483a: /* f9483a: mov ecx, edx */
  ecx = edx;
/* f9483c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f9483f: jmp 0xf94848 */
  goto L_f94848;
L_f94841: /* f94841: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_f94848: /* f94848: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9484a: mov ecx, esi */
  ecx = esi;
/* f9484c: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf94852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94852: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f94855: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f94857: mov ecx, esi */
  ecx = esi;
/* f94859: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf9485fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9485f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f94862: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94864: mov ecx, esi */
  ecx = esi;
/* f94866: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf94869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94869: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f9486c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9486e: mov ecx, esi */
  ecx = esi;
/* f94870: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf94873u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94873: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f94876: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f9487c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f9487f: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f94882: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f94885: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f94887: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94888: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9488b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9488c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f9488f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f94892: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f94895: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f94899: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f9489c: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f9489f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f948a2: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf948a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f948a8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f948aa: mov ecx, esi */
  ecx = esi;
/* f948ac: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf948b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f948b2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f948b5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f948b7: mov ecx, esi */
  ecx = esi;
/* f948b9: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf948bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f948bf: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f948c2: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f948c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f948ca: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf948cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f948cd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f948d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f948d2: mov ecx, esi */
  ecx = esi;
/* f948d4: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf948d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f948d7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f948da: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f948dd: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f948e3: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f948e6: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* f948e9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f948eb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f948ee: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f948f2: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f948f5: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f948f8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f948fc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f948ff: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f94902: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f94905: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94906: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf9490cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9490c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9490e: mov ecx, esi */
  ecx = esi;
/* f94910: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf94913u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94913: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* f94916: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* f94919: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9491b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9491e: jne 0xf94927 */
  if (!zf) goto L_f94927;
L_f94920: /* f94920: mov eax, 1 */
  eax = 0x1u;
/* f94925: jmp 0xf94929 */
  goto L_f94929;
L_f94927: /* f94927: xor eax, eax */
  eax = 0;
L_f94929: /* f94929: mov ecx, dword ptr [0xfba380] */
  ecx = R32((uint32_t)(0xfba380u));
/* f9492f: mov edi, dword ptr [esi + 0x1f8] */
  edi = R32((uint32_t)(esi + 0x1f8u));
/* f94935: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94938: mov ecx, edi */
  ecx = edi;
/* f9493a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f9493d: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf94943u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f94943: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f94945: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94947: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f9494a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9494b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9494c: mov ecx, edi */
  ecx = edi;
/* f9494e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf94951u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94951: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94953: mov ecx, esi */
  ecx = esi;
/* f94955: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf9495bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9495b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f9495e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f94960: mov ecx, esi */
  ecx = esi;
/* f94962: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf94968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94968: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f9496b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9496d: mov ecx, esi */
  ecx = esi;
/* f9496f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf94972u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94972: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f94975: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f94978: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f9497e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f94980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94981: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f94984: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94985: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f94988: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94989: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9498a: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf94990u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94990: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f94996: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f94998: je 0xf949b8 */
  if (zf) goto L_f949b8;
L_f9499a: /* f9499a: test byte ptr [ecx + 0x2a0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x2a0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f949a1: jne 0xf949b8 */
  if (!zf) goto L_f949b8;
L_f949a3: /* f949a3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f949a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f949a7: call 0xf711cc */
  esp -= 4; W32(esp, 0xf949acu); SPILL(); f_f711cc(); if (g_unwind) return; RELOAD();
/* f949ac: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f949b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f949b3: call 0xf71398 */
  esp -= 4; W32(esp, 0xf949b8u); SPILL(); f_f71398(); if (g_unwind) return; RELOAD();
L_f949b8: /* f949b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f949bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f949bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f949bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f949c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f949c5: mov esp, ebp */
  esp = ebp;
/* f949c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f949c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f949cb(void) {
  LOAD_REGS();
L_f949cb: /* f949cb: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* f949ce: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f949d3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f949d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f949d7: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* f949da: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf949dfu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f949df(); return;
}

void f_f949df(void) {
  LOAD_REGS();
L_f949df: /* f949df: push 0xfa5688 */
  { uint32_t v = 0xfa5688u; esp -= 4; W32(esp, v); }
/* f949e4: push 0xfb9d14 */
  { uint32_t v = 0xfb9d14u; esp -= 4; W32(esp, v); }
/* f949e9: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf949efu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f949ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f949f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f949f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f949f6: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf949fbu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f949fb: guest_badaddr(0xf949fb); return;
}

void f_f94a90(void) {
  LOAD_REGS();
L_f94a90: /* f94a90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94a91: mov ebp, esp */
  ebp = esp;
/* f94a93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94a95: push 0xf9a8a0 */
  { uint32_t v = 0xf9a8a0u; esp -= 4; W32(esp, v); }
/* f94a9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94aa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94aa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f94aab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94aac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f94aad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94aae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f94ab1: mov esi, ecx */
  esi = ecx;
/* f94ab3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f94aba: call 0xf712c1 */
  esp -= 4; W32(esp, 0xf94abfu); SPILL(); f_f712c1(); if (g_unwind) return; RELOAD();
/* f94abf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f94ac2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f94ac5: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* f94acb: mov dword ptr [esi + 0x1d0], eax */
  W32((uint32_t)(esi + 0x1d0u), eax);
/* f94ad1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f94ad2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f94ad3: mov eax, 1 */
  eax = 0x1u;
/* f94ad8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94adf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f94ae0: mov esp, ebp */
  esp = ebp;
/* f94ae2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f94ae3: ret  */
  esp += 4; SPILL(); return;
}

void f_f94ae4(void) {
  LOAD_REGS();
L_f94ae4: /* f94ae4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f94ae7: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94aec: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f94aef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94af0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f94af3: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94af8u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f94af8(); return;
}

void f_f94af8(void) {
  LOAD_REGS();
L_f94af8: /* f94af8: push 0xfa56d8 */
  { uint32_t v = 0xfa56d8u; esp -= 4; W32(esp, v); }
/* f94afd: push 0xfb9d30 */
  { uint32_t v = 0xfb9d30u; esp -= 4; W32(esp, v); }
/* f94b02: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf94b08u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f94b08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f94b0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94b0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94b0f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94b14u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f94b14: guest_badaddr(0xf94b14); return;
}

void f_f94b50(void) {
  LOAD_REGS();
L_f94b50: /* f94b50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94b51: mov ebp, esp */
  ebp = esp;
/* f94b53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94b55: push 0xf9a8b0 */
  { uint32_t v = 0xf9a8b0u; esp -= 4; W32(esp, v); }
/* f94b5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94b60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94b61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94b68: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f94b6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94b6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f94b6d: mov esi, ecx */
  esi = ecx;
/* f94b6f: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f94b73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94b74: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f94b77: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f94b7e: je 0xf94d36 */
  if (zf) goto L_f94d36;
L_f94b84: /* f94b84: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f94b8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f94b8c: je 0xf94d36 */
  if (zf) goto L_f94d36;
L_f94b92: /* f94b92: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f94b95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94b96: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf94b9bu); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f94b9b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94b9d: mov ecx, esi */
  ecx = esi;
/* f94b9f: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf94ba5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94ba5: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f94ba8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f94bab: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f94bae: xor edi, edi */
  edi = 0;
L_f94bb0: /* f94bb0: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f94bb6: cmp edi, dword ptr [eax + 0x284] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f94bbc: jge 0xf94d36 */
  if ((sf == of)) goto L_f94d36;
L_f94bc2: /* f94bc2: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* f94bc8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94bca: lea ebx, [ecx + edi*4] */
  ebx = (uint32_t)(ecx + edi*4);
/* f94bcd: mov ecx, esi */
  ecx = esi;
/* f94bcf: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf94bd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94bd5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f94bd8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f94bda: mov ecx, esi */
  ecx = esi;
/* f94bdc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf94bdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94bdf: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* f94be2: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* f94be5: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f94be8: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* f94bea: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* f94bed: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* f94bef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f94bf1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f94bf4: jp 0xf94c00 */
  if (pf) goto L_f94c00;
L_f94bf6: /* f94bf6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f94bf9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f94bfb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f94bfe: jmp 0xf94c03 */
  goto L_f94c03;
L_f94c00: /* f94c00: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_f94c03: /* f94c03: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f94c06: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f94c0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f94c0e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f94c11: jne 0xf94d00 */
  if (!zf) goto L_f94d00;
L_f94c17: /* f94c17: mov edx, dword ptr [esi + 0x1cc] */
  edx = R32((uint32_t)(esi + 0x1ccu));
/* f94c1d: cmp edi, dword ptr [edx + 0x29c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x29cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f94c23: jne 0xf94c2b */
  if (!zf) goto L_f94c2b;
L_f94c25: /* f94c25: mov byte ptr [ebp - 0x1c], 2 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x2u);
/* f94c29: jmp 0xf94c3c */
  goto L_f94c3c;
L_f94c2b: /* f94c2b: cmp edi, dword ptr [esi + 0x1d4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1d4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f94c31: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f94c34: dec al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f94c36: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f94c39: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
L_f94c3c: /* f94c3c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94c3e: mov ecx, esi */
  ecx = esi;
/* f94c40: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf94c43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94c43: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f94c46: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f94c48: mov ecx, esi */
  ecx = esi;
/* f94c4a: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf94c50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94c50: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f94c53: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f94c56: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f94c59: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f94c5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94c5d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f94c60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94c61: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f94c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94c65: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f94c68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94c69: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f94c6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94c71: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf94c76u); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f94c76: mov edx, dword ptr [esi + 0x1cc] */
  edx = R32((uint32_t)(esi + 0x1ccu));
/* f94c7c: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* f94c7f: lea ecx, [edx + ecx*4 + 0x220] */
  ecx = (uint32_t)(edx + ecx*4 + 0x220u);
/* f94c86: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf94c8cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f94c8c: mov ebx, eax */
  ebx = eax;
/* f94c8e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f94c90: mov ecx, esi */
  ecx = esi;
/* f94c92: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf94c95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94c95: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f94c98: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f94c9a: mov ecx, esi */
  ecx = esi;
/* f94c9c: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf94ca2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94ca2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f94ca5: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f94cab: fild dword ptr [ecx + 0x9c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x9cu)); FPUSH(v); }
/* f94cb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94cb2: fild dword ptr [ecx + 0x98] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x98u)); FPUSH(v); }
/* f94cb8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f94cba: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f94cbd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f94cc0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* f94cc2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f94cc5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f94cc8: fisub dword ptr [ecx + 0xa4] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(ecx + 0xa4u)));
/* f94cce: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* f94cd2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f94cd5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* f94cd7: fisub dword ptr [ecx + 0xa0] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(ecx + 0xa0u)));
/* f94cdd: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f94ce1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* f94ce3: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f94ce6: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f94cea: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f94ced: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f94cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94cf1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94cf2: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf94cf7u); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f94cf7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f94cfa: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f94cfd: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_f94d00: /* f94d00: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f94d01: jmp 0xf94bb0 */
  goto L_f94bb0;
L_f94d36: /* f94d36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f94d39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f94d3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f94d3b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94d42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f94d43: mov esp, ebp */
  esp = ebp;
/* f94d45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f94d46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f94d06(void) {
  LOAD_REGS();
L_f94d06: /* f94d06: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f94d09: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94d0e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f94d11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94d12: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f94d15: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94d1au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f94d1a(); return;
}

void f_f94d1a(void) {
  LOAD_REGS();
L_f94d1a: /* f94d1a: push 0xfa5738 */
  { uint32_t v = 0xfa5738u; esp -= 4; W32(esp, v); }
/* f94d1f: push 0xfb9d48 */
  { uint32_t v = 0xfb9d48u; esp -= 4; W32(esp, v); }
/* f94d24: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf94d2au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f94d2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f94d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94d2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94d31: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94d36u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f94d36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f94d39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f94d3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f94d3b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94d42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f94d43: mov esp, ebp */
  esp = ebp;
/* f94d45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f94d46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f94dd0(void) {
  LOAD_REGS();
L_f94dd0: /* f94dd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94dd1: mov ebp, esp */
  ebp = esp;
/* f94dd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94dd5: push 0xf9a8c9 */
  { uint32_t v = 0xf9a8c9u; esp -= 4; W32(esp, v); }
/* f94dda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94de1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94de8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f94deb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f94dee: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f94df1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94df2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f94df3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f94df4: mov esi, ecx */
  esi = ecx;
/* f94df6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f94df9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f94dfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94dfd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f94e00: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* f94e03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f94e0a: jne 0xf94e21 */
  if (!zf) goto L_f94e21;
L_f94e0c: /* f94e0c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f94e0f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f94e10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94e12: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f94e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94e16: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f94e1b: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf94e21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f94e21: /* f94e21: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f94e23: lea ebx, [esi + 0x208] */
  ebx = (uint32_t)(esi + 0x208u);
/* f94e29: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f94e2b: mov ecx, ebx */
  ecx = ebx;
/* f94e2d: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf94e33u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f94e33: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f94e35: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* f94e3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f94e3d: mov edi, eax */
  edi = eax;
/* f94e3f: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf94e45u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f94e45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94e46: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f94e49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f94e4a: mov ecx, esi */
  ecx = esi;
/* f94e4c: call 0xf719a1 */
  esp -= 4; W32(esp, 0xf94e51u); SPILL(); f_f719a1(); if (g_unwind) return; RELOAD();
/* f94e51: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* f94e53: mov esi, edi */
  esi = edi;
/* f94e55: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f94e58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94e59: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f94e5b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f94e5f: call dword ptr [0xfce448] */
  esp -= 4; W32(esp, 0xf94e65u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* f94e65: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f94e68: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f94e6c: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf94e72u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f94e72: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* f94e74: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f94e76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94e77: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f94e7a: call dword ptr [0xfce444] */
  esp -= 4; W32(esp, 0xf94e80u); SPILL(); f_4e35cb(); if (g_unwind) return; /* Core!?appItoa@@YAPAGH@Z */ RELOAD();
/* f94e80: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f94e83: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f94e86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94e87: call dword ptr [0xfce440] */
  esp -= 4; W32(esp, 0xf94e8du); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* f94e8d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f94e8f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f94e92: mov dword ptr [edx + esi + 0xc], edi */
  W32((uint32_t)(edx + esi + 0xcu), edi);
/* f94e96: cmp edi, dword ptr [eax + 0x218] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x218u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f94e9c: jge 0xf94ea7 */
  if ((sf == of)) goto L_f94ea7;
L_f94e9e: /* f94e9e: mov ecx, dword ptr [eax + 0x214] */
  ecx = R32((uint32_t)(eax + 0x214u));
/* f94ea4: mov dword ptr [ecx + edi*4], edi */
  W32((uint32_t)(ecx + edi*4), edi);
L_f94ea7: /* f94ea7: mov ecx, dword ptr [eax + 0x1ec] */
  ecx = R32((uint32_t)(eax + 0x1ecu));
/* f94ead: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f94eae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f94eaf: mov dword ptr [eax + 0x1ec], ecx */
  W32((uint32_t)(eax + 0x1ecu), ecx);
/* f94eb5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f94eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f94eb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f94ec0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f94ec1: mov esp, ebp */
  esp = ebp;
/* f94ec3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f94ec4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f94ec7(void) {
  LOAD_REGS();
L_f94ec7: /* f94ec7: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f94eca: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f94ecf: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f94ed2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94ed3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f94ed6: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94edbu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f94edb(); return;
}

void f_f94edb(void) {
  LOAD_REGS();
L_f94edb: /* f94edb: push 0xfa5788 */
  { uint32_t v = 0xfa5788u; esp -= 4; W32(esp, v); }
/* f94ee0: push 0xfb9d50 */
  { uint32_t v = 0xfb9d50u; esp -= 4; W32(esp, v); }
/* f94ee5: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf94eebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f94eeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f94eee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94ef0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f94ef2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf94ef7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f94ef7: guest_badaddr(0xf94ef7); return;
}

void f_f94f50(void) {
  LOAD_REGS();
L_f94f50: /* f94f50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f94f51: mov ebp, esp */
  ebp = esp;
/* f94f53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f94f55: push 0xf9a8e9 */
  { uint32_t v = 0xf9a8e9u; esp -= 4; W32(esp, v); }
/* f94f5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f94f60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94f61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f94f68: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f94f6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94f6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f94f6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f94f70: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f94f73: xor ebx, ebx */
  ebx = 0;
/* f94f75: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f94f78: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f94f7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f94f7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f94f7d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f94f80: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f94f83: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f94f86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94f87: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f94f8c: mov edi, ecx */
  edi = ecx;
/* f94f8e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f94f91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f94f92: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f94f95: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf94f98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f94f98: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f94f9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f94f9c: mov eax, edx */
  eax = edx;
/* f94f9e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f94fa1: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f94fa4: jne 0xf94fbb */
  if (!zf) goto L_f94fbb;
L_f94fa6: /* f94fa6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f94fa9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f94faa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f94fab: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f94fae: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f94fb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f94fb5: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf94fbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f94fbb: /* f94fbb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f94fbe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f94fc0: jl 0xf9502b */
  if ((sf != of)) goto L_f9502b;
L_f94fc2: /* f94fc2: cmp eax, dword ptr [edi + 0x218] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x218u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f94fc8: jge 0xf9502b */
  if ((sf == of)) goto L_f9502b;
L_f94fca: /* f94fca: mov ecx, dword ptr [edi + 0x214] */
  ecx = R32((uint32_t)(edi + 0x214u));
/* f94fd0: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* f94fd3: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f94fd5: jl 0xf9502b */
  if ((sf != of)) goto L_f9502b;
L_f94fd7: /* f94fd7: cmp esi, dword ptr [edi + 0x20c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x20cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f94fdd: jge 0xf9502b */
  if ((sf == of)) goto L_f9502b;
L_f94fdf: /* f94fdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94fe0: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* f94fe3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f94fe4: mov ecx, edi */
  ecx = edi;
/* f94fe6: call 0xf719a1 */
  esp -= 4; W32(esp, 0xf94febu); SPILL(); f_f719a1(); if (g_unwind) return; RELOAD();
/* f94feb: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f94ff1: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f94ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f94ff5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f94ff7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f94ffb: call dword ptr [0xfce448] */
  esp -= 4; W32(esp, 0xf95001u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* f95001: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f95004: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* f95007: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf9500du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f9500d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f95010: mov edi, dword ptr [edi + 0x208] */
  edi = R32((uint32_t)(edi + 0x208u));
/* f95016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95017: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f95019: call dword ptr [0xfce444] */
  esp -= 4; W32(esp, 0xf9501fu); SPILL(); f_4e35cb(); if (g_unwind) return; /* Core!?appItoa@@YAPAGH@Z */ RELOAD();
/* f9501f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95022: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95023: mov ecx, edi */
  ecx = edi;
/* f95025: call dword ptr [0xfce440] */
  esp -= 4; W32(esp, 0xf9502bu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
L_f9502b: /* f9502b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9502e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9502f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f95030: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f95037: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f95038: mov esp, ebp */
  esp = ebp;
/* f9503a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9503b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f9503e(void) {
  LOAD_REGS();
L_f9503e: /* f9503e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f95041: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f95046: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* f95049: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9504a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f9504d: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf95052u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f95052(); return;
}

void f_f95052(void) {
  LOAD_REGS();
L_f95052: /* f95052: push 0xfa57e0 */
  { uint32_t v = 0xfa57e0u; esp -= 4; W32(esp, v); }
/* f95057: push 0xfb9d58 */
  { uint32_t v = 0xfb9d58u; esp -= 4; W32(esp, v); }
/* f9505c: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf95062u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f95062: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95065: xor ebx, ebx */
  ebx = 0;
/* f95067: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95068: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95069: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9506eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9506e: guest_badaddr(0xf9506e); return;
}

void f_f950c0(void) {
  LOAD_REGS();
L_f950c0: /* f950c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f950c1: mov ebp, esp */
  ebp = esp;
/* f950c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f950c5: push 0xf9a909 */
  { uint32_t v = 0xf9a909u; esp -= 4; W32(esp, v); }
/* f950ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f950d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f950d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f950d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f950db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f950de: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f950e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f950e2: xor ebx, ebx */
  ebx = 0;
/* f950e4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f950e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f950e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f950e7: mov edi, ecx */
  edi = ecx;
/* f950e9: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f950ec: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f950ef: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f950f2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f950f5: jne 0xf95110 */
  if (!zf) goto L_f95110;
L_f950f7: /* f950f7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f950fa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f950fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f950fc: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f950ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95100: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95105: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf9510bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9510b: jmp 0xf95110 */
  goto L_f95110;
L_f95110: /* f95110: cmp ebx, dword ptr [edi + 0x20c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x20cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95116: jge 0xf951b3 */
  if ((sf == of)) goto L_f951b3;
L_f9511c: /* f9511c: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f95122: mov esi, ebx */
  esi = ebx;
/* f95124: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f95127: mov dword ptr [ecx + esi + 0xc], ebx */
  W32((uint32_t)(ecx + esi + 0xcu), ebx);
/* f9512b: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f95131: mov eax, dword ptr [edx + esi + 0xc] */
  eax = R32((uint32_t)(edx + esi + 0xcu));
/* f95135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95136: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f95139: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9513a: mov ecx, edi */
  ecx = edi;
/* f9513c: call 0xf719a1 */
  esp -= 4; W32(esp, 0xf95141u); SPILL(); f_f719a1(); if (g_unwind) return; RELOAD();
/* f95141: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f95147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95148: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9514a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f9514e: call dword ptr [0xfce448] */
  esp -= 4; W32(esp, 0xf95154u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* f95154: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f95157: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f9515b: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf95161u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f95161: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f95167: mov eax, dword ptr [esi + edx + 0xc] */
  eax = R32((uint32_t)(esi + edx + 0xcu));
/* f9516b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f9516d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9516e: call dword ptr [0xfce444] */
  esp -= 4; W32(esp, 0xf95174u); SPILL(); f_4e35cb(); if (g_unwind) return; /* Core!?appItoa@@YAPAGH@Z */ RELOAD();
/* f95174: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95177: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95178: mov ecx, esi */
  ecx = esi;
/* f9517a: call dword ptr [0xfce440] */
  esp -= 4; W32(esp, 0xf95180u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* f95180: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f95181: jmp 0xf95110 */
  goto L_f95110;
L_f951b3: /* f951b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f951b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f951b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f951b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f951bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f951c0: mov esp, ebp */
  esp = ebp;
/* f951c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f951c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f9510d(void) {
  LOAD_REGS();
L_f9510d: /* f9510d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f95110: /* f95110: cmp ebx, dword ptr [edi + 0x20c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x20cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95116: jge 0xf951b3 */
  if ((sf == of)) goto L_f951b3;
L_f9511c: /* f9511c: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f95122: mov esi, ebx */
  esi = ebx;
/* f95124: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f95127: mov dword ptr [ecx + esi + 0xc], ebx */
  W32((uint32_t)(ecx + esi + 0xcu), ebx);
/* f9512b: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f95131: mov eax, dword ptr [edx + esi + 0xc] */
  eax = R32((uint32_t)(edx + esi + 0xcu));
/* f95135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95136: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f95139: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9513a: mov ecx, edi */
  ecx = edi;
/* f9513c: call 0xf719a1 */
  esp -= 4; W32(esp, 0xf95141u); SPILL(); f_f719a1(); if (g_unwind) return; RELOAD();
/* f95141: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f95147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95148: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9514a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f9514e: call dword ptr [0xfce448] */
  esp -= 4; W32(esp, 0xf95154u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* f95154: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f95157: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f9515b: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf95161u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f95161: mov edx, dword ptr [edi + 0x208] */
  edx = R32((uint32_t)(edi + 0x208u));
/* f95167: mov eax, dword ptr [esi + edx + 0xc] */
  eax = R32((uint32_t)(esi + edx + 0xcu));
/* f9516b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f9516d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9516e: call dword ptr [0xfce444] */
  esp -= 4; W32(esp, 0xf95174u); SPILL(); f_4e35cb(); if (g_unwind) return; /* Core!?appItoa@@YAPAGH@Z */ RELOAD();
/* f95174: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95177: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95178: mov ecx, esi */
  ecx = esi;
/* f9517a: call dword ptr [0xfce440] */
  esp -= 4; W32(esp, 0xf95180u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* f95180: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f95181: jmp 0xf95110 */
  goto L_f95110;
L_f951b3: /* f951b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f951b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f951b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f951b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f951bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f951c0: mov esp, ebp */
  esp = ebp;
/* f951c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f951c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f95183(void) {
  LOAD_REGS();
L_f95183: /* f95183: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f95186: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f9518b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f9518e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9518f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f95192: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf95197u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f95197(); return;
}

void f_f95197(void) {
  LOAD_REGS();
L_f95197: /* f95197: push 0xfa5838 */
  { uint32_t v = 0xfa5838u; esp -= 4; W32(esp, v); }
/* f9519c: push 0xfb9d60 */
  { uint32_t v = 0xfb9d60u; esp -= 4; W32(esp, v); }
/* f951a1: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf951a7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f951a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f951aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f951ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f951ae: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf951b3u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f951b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f951b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f951b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f951b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f951bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f951c0: mov esp, ebp */
  esp = ebp;
/* f951c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f951c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f95220(void) {
  LOAD_REGS();
L_f95220: /* f95220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f95221: mov ebp, esp */
  ebp = esp;
/* f95223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f95225: push 0xf9a932 */
  { uint32_t v = 0xf9a932u; esp -= 4; W32(esp, v); }
/* f9522a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f95230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f95238: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9523b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9523c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9523d: mov esi, ecx */
  esi = ecx;
/* f9523f: test byte ptr [esi + 0x248], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x248u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f95246: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f95249: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9524a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f9524d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f95254: jne 0xf953e7 */
  if (!zf) goto L_f953e7;
L_f9525a: /* f9525a: cmp ecx, dword ptr [esi + 0x238] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x238u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f95260: jne 0xf953e7 */
  if (!zf) goto L_f953e7;
L_f95266: /* f95266: mov eax, dword ptr [esi + 0x23c] */
  eax = R32((uint32_t)(esi + 0x23cu));
/* f9526c: mov ebx, ecx */
  ebx = ecx;
/* f9526e: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* f95271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95272: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f95275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95276: mov ecx, dword ptr [esi + 0x20c] */
  ecx = R32((uint32_t)(esi + 0x20cu));
/* f9527c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9527e: call dword ptr [0xfce44c] */
  esp -= 4; W32(esp, 0xf95284u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* f95284: mov ecx, eax */
  ecx = eax;
/* f95286: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f9528a: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95290u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95290: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* f95293: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f95296: xor edx, edx */
  edx = 0;
/* f95298: mov dl, byte ptr [esi + 0x208] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x208u))) & 0xffu);
/* f9529e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9529f: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* f952a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f952a3: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* f952a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f952a7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f952aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f952ab: xor ecx, ecx */
  ecx = 0;
/* f952ad: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f952b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f952b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f952b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f952b3: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f952b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f952ba: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf952bfu); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f952bf: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f952c2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f952c6: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf952ccu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f952cc: mov edx, dword ptr [esi + 0x23c] */
  edx = R32((uint32_t)(esi + 0x23cu));
/* f952d2: mov ecx, dword ptr [esi + 0x20c] */
  ecx = R32((uint32_t)(esi + 0x20cu));
/* f952d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f952d9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* f952dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f952dd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f952df: call dword ptr [0xfce44c] */
  esp -= 4; W32(esp, 0xf952e5u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* f952e5: mov ecx, eax */
  ecx = eax;
/* f952e7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f952eb: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf952f1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f952f1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f952f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f952f5: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f952fb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f952fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f952ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95300: xor eax, eax */
  eax = 0;
/* f95302: mov al, byte ptr [esi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f95305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95306: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95307: call 0xf72211 */
  esp -= 4; W32(esp, 0xf9530cu); SPILL(); f_f72211(); if (g_unwind) return; RELOAD();
/* f9530c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* f9530f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f95313: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf95319u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f95319: movzx eax, byte ptr [esi + 0x208] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x208u)));
/* f95320: xor ebx, ebx */
  ebx = 0;
/* f95322: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* f95324: je 0xf95342 */
  if (zf) goto L_f95342;
L_f95326: /* f95326: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f95327: je 0xf95334 */
  if (zf) goto L_f95334;
L_f95329: /* f95329: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f9532a: jne 0xf9534b */
  if (!zf) goto L_f9534b;
L_f9532c: /* f9532c: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* f9532f: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* f95332: jmp 0xf95348 */
  goto L_f95348;
L_f95334: /* f95334: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f95337: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* f9533a: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f95340: jmp 0xf95345 */
  goto L_f95345;
L_f95342: /* f95342: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_f95345: /* f95345: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
L_f95348: /* f95348: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
L_f9534b: /* f9534b: mov byte ptr [edi + 0x50], 5 */
  W8((uint32_t)(edi + 0x50u), 0x5u);
/* f9534f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f95352: mov eax, esp */
  eax = esp;
/* f95354: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* f95357: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f95359: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f9535c: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* f9535f: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* f95362: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f95365: fld dword ptr [ecx + 0xfc] */
  { double v = F32((uint32_t)(ecx + 0xfcu)); FPUSH(v); }
/* f9536b: call 0xf979dc */
  esp -= 4; W32(esp, 0xf95370u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f95370: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f95373: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* f95375: mov edx, esp */
  edx = esp;
/* f95377: mov byte ptr [ebp + 0x18], cl */
  W8((uint32_t)(ebp + 0x18u), (ecx & 0xffu));
/* f9537a: mov byte ptr [ebp + 0x19], cl */
  W8((uint32_t)(ebp + 0x19u), (ecx & 0xffu));
/* f9537d: mov byte ptr [ebp + 0x1a], cl */
  W8((uint32_t)(ebp + 0x1au), (ecx & 0xffu));
/* f95380: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* f95383: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95384: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* f95387: mov byte ptr [ebp + 0x1b], al */
  W8((uint32_t)(ebp + 0x1bu), (eax & 0xffu));
/* f9538a: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf95390u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f95390: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f95393: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f95395: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f95398: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95399: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* f9539c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f9539f: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f953a4: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f953a9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f953aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f953ab: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f953ad: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f953b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f953b1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f953b4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f953b6: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f953ba: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f953bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* f953c0: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f953c3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f953c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f953c7: mov eax, dword ptr [edx + 0x34] */
  eax = R32((uint32_t)(edx + 0x34u));
/* f953ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f953cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f953cc: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* f953cf: mov ecx, edi */
  ecx = edi;
/* f953d1: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf953d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f953d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f953d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f953de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f953df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f953e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f953e1: mov esp, ebp */
  esp = ebp;
/* f953e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f953e4: ret 0x18 */
  esp += 28; SPILL(); return;
L_f953e7: /* f953e7: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f953ed: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* f953f0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f953f2: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf953f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f953f8: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* f953fb: xor ecx, ecx */
  ecx = 0;
/* f953fd: mov cl, byte ptr [esi + 0x208] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x208u))) & 0xffu);
/* f95403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95404: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* f95407: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95408: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* f9540b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9540c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f9540f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95410: xor eax, eax */
  eax = 0;
/* f95412: mov al, byte ptr [esi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f95415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95416: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f95419: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9541a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9541b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9541c: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f95422: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf95427u); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f95427: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9542a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9542b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9542c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f95433: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f95434: mov esp, ebp */
  esp = ebp;
/* f95436: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f95437: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_f9543a(void) {
  LOAD_REGS();
L_f9543a: /* f9543a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f9543d: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f95442: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f95445: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95446: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f95449: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9544eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f9544e(); return;
}

void f_f9544e(void) {
  LOAD_REGS();
L_f9544e: /* f9544e: push 0xfa589c */
  { uint32_t v = 0xfa589cu; esp -= 4; W32(esp, v); }
/* f95453: push 0xfb9d84 */
  { uint32_t v = 0xfb9d84u; esp -= 4; W32(esp, v); }
/* f95458: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf9545eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f9545e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95461: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95463: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95465: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9546au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9546a: guest_badaddr(0xf9546a); return;
}

void f_f95510(void) {
  LOAD_REGS();
L_f95510: /* f95510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f95511: mov ebp, esp */
  ebp = esp;
/* f95513: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f95515: push 0xf9a950 */
  { uint32_t v = 0xf9a950u; esp -= 4; W32(esp, v); }
/* f9551a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f95520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95521: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f95528: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9552e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f95531: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95534: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95535: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95536: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95537: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f9553a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f95541: jl 0xf95736 */
  if ((sf != of)) goto L_f95736;
L_f95547: /* f95547: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9554a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f9554d: lea eax, [eax + ecx - 0x10] */
  eax = (uint32_t)(eax + ecx + 0xfffffff0u);
/* f95551: mov dword ptr [ebp - 0x120], eax */
  W32((uint32_t)(ebp + 0xfffffee0u), eax);
/* f95557: mov dword ptr [ebp - 0x124], ecx */
  W32((uint32_t)(ebp + 0xfffffedcu), ecx);
/* f9555d: xor eax, eax */
  eax = 0;
/* f9555f: mov ecx, 0x3e */
  ecx = 0x3eu;
/* f95564: lea edi, [ebp - 0x11c] */
  edi = (uint32_t)(ebp + 0xfffffee4u);
/* f9556a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f9556c: lea eax, [ebp - 0x124] */
  eax = (uint32_t)(ebp + 0xfffffedcu);
L_f95572: /* f95572: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* f95578: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f9557a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f9557d: jb 0xf95736 */
  if (cf) goto L_f95736;
L_f95583: /* f95583: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* f95585: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* f95588: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* f9558b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* f9558e: mov edi, edi */
  edi = edi;
L_f95590: /* f95590: mov eax, esi */
  eax = esi;
/* f95592: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f95594: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f95597: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95598: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9559b: jg 0xf955fa */
  if ((!zf && sf == of)) goto L_f955fa;
L_f9559d: /* f9559d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f955a0: /* f955a0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f955a2: jbe 0xf956ed */
  if ((cf | zf)) goto L_f956ed;
L_f955a8: /* f955a8: mov ecx, edi */
  ecx = edi;
/* f955aa: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f955ad: lea ebx, [edi + 0x10] */
  ebx = (uint32_t)(edi + 0x10u);
L_f955b0: /* f955b0: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f955b2: ja 0xf955e8 */
  if ((!cf && !zf)) goto L_f955e8;
L_f955b4: /* f955b4: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf955bau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f955ba: mov ecx, ebx */
  ecx = ebx;
/* f955bc: mov esi, eax */
  esi = eax;
/* f955be: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf955c4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f955c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f955c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f955c6: call dword ptr [0xfce3e8] */
  esp -= 4; W32(esp, 0xf955ccu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f955cc: imul eax, dword ptr [0xfb9d68] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xfb9d68u)));
  eax = (uint32_t)r;
  }
/* f955d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f955d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f955d8: jle 0xf955dd */
  if ((zf || sf != of)) goto L_f955dd;
L_f955da: /* f955da: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_f955dd: /* f955dd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f955e0: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* f955e3: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f955e6: jmp 0xf955b0 */
  goto L_f955b0;
L_f955e8: /* f955e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f955e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f955ea: call 0xf71c71 */
  esp -= 4; W32(esp, 0xf955efu); SPILL(); f_f71c71(); if (g_unwind) return; RELOAD();
/* f955ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f955f2: sub esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f955f5: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* f955f8: jmp 0xf955a0 */
  goto L_f955a0;
L_f955fa: /* f955fa: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f955fb: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f955fd: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f955ff: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f95602: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f95604: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95606: call 0xf71c71 */
  esp -= 4; W32(esp, 0xf9560bu); SPILL(); f_f71c71(); if (g_unwind) return; RELOAD();
/* f9560b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9560e: mov ebx, edi */
  ebx = edi;
/* f95610: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_f95613: /* f95613: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f95616: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f95619: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f9561b: ja 0xf95648 */
  if ((!cf && !zf)) goto L_f95648;
L_f9561d: /* f9561d: mov ecx, edi */
  ecx = edi;
/* f9561f: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95625u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95625: mov ecx, ebx */
  ecx = ebx;
/* f95627: mov edi, eax */
  edi = eax;
/* f95629: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf9562fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f9562f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95631: call dword ptr [0xfce3e8] */
  esp -= 4; W32(esp, 0xf95637u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f95637: imul eax, dword ptr [0xfb9d68] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xfb9d68u)));
  eax = (uint32_t)r;
  }
/* f9563e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f95641: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95644: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f95646: jle 0xf95613 */
  if ((zf || sf != of)) goto L_f95613;
L_f95648: /* f95648: sub esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f9564b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f9564d: jbe 0xf9567a */
  if ((cf | zf)) goto L_f9567a;
L_f9564f: /* f9564f: mov ecx, edi */
  ecx = edi;
/* f95651: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95657u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95657: mov ecx, esi */
  ecx = esi;
/* f95659: mov edi, eax */
  edi = eax;
/* f9565b: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95661u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95663: call dword ptr [0xfce3e8] */
  esp -= 4; W32(esp, 0xf95669u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f95669: imul eax, dword ptr [0xfb9d68] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xfb9d68u)));
  eax = (uint32_t)r;
  }
/* f95670: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f95673: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95676: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f95678: jge 0xf95648 */
  if ((sf == of)) goto L_f95648;
L_f9567a: /* f9567a: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f9567c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9567d: jbe 0xf956f8 */
  if ((cf | zf)) goto L_f956f8;
L_f9567f: /* f9567f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95680: call 0xf71c71 */
  esp -= 4; W32(esp, 0xf95685u); SPILL(); f_f71c71(); if (g_unwind) return; RELOAD();
/* f95685: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f95688: mov edx, esi */
  edx = esi;
/* f9568a: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f9568c: mov ecx, eax */
  ecx = eax;
/* f9568e: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* f95691: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f95693: and edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f95696: and ecx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f95699: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9569c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9569e: jl 0xf956c9 */
  if ((sf != of)) goto L_f956c9;
L_f956a0: /* f956a0: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* f956a3: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f956a5: jae 0xf956b8 */
  if (!cf) goto L_f956b8;
L_f956a7: /* f956a7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f956aa: add esi, -0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f956ad: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* f956af: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* f956b2: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f956b5: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
L_f956b8: /* f956b8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f956ba: jbe 0xf956ed */
  if ((cf | zf)) goto L_f956ed;
L_f956bc: /* f956bc: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* f956bf: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f956c2: mov edi, ebx */
  edi = ebx;
/* f956c4: jmp 0xf95590 */
  goto L_f95590;
L_f956c9: /* f956c9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f956cb: jbe 0xf956db */
  if ((cf | zf)) goto L_f956db;
L_f956cd: /* f956cd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f956d0: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* f956d2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* f956d5: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f956d8: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
L_f956db: /* f956db: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* f956de: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f956e0: jae 0xf956ed */
  if (!cf) goto L_f956ed;
L_f956e2: /* f956e2: add esi, -0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f956e5: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* f956e8: jmp 0xf95590 */
  goto L_f95590;
L_f956ed: /* f956ed: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f956f0: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f956f3: jmp 0xf95572 */
  goto L_f95572;
L_f956f8: /* f956f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f956f9: call 0xf71c71 */
  esp -= 4; W32(esp, 0xf956feu); SPILL(); f_f71c71(); if (g_unwind) return; RELOAD();
/* f956fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95701: jmp 0xf95613 */
  goto L_f95613;
L_f95736: /* f95736: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f95739: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9573a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9573b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f95742: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f95743: mov esp, ebp */
  esp = ebp;
/* f95745: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f95746: ret  */
  esp += 4; SPILL(); return;
}

void f_f95706(void) {
  LOAD_REGS();
L_f95706: /* f95706: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f95709: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f9570e: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* f95711: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95712: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* f95715: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9571au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f9571a(); return;
}

void f_f9571a(void) {
  LOAD_REGS();
L_f9571a: /* f9571a: push 0xfa58d8 */
  { uint32_t v = 0xfa58d8u; esp -= 4; W32(esp, v); }
/* f9571f: push 0xfb9e60 */
  { uint32_t v = 0xfb9e60u; esp -= 4; W32(esp, v); }
/* f95724: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf9572au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f9572a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9572d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9572f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95731: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf95736u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f95736: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f95739: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9573a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9573b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f95742: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f95743: mov esp, ebp */
  esp = ebp;
/* f95745: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f95746: ret  */
  esp += 4; SPILL(); return;
}

void f_f957e0(void) {
  LOAD_REGS();
L_f957e0: /* f957e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f957e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f957e2: mov esi, ecx */
  esi = ecx;
/* f957e4: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* f957e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f957e9: je 0xf9594c */
  if (zf) goto L_f9594c;
L_f957ef: /* f957ef: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* f957f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f957f4: je 0xf9594c */
  if (zf) goto L_f9594c;
L_f957fa: /* f957fa: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* f95800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f95802: je 0xf9594c */
  if (zf) goto L_f9594c;
L_f95808: /* f95808: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* f9580c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f9580d: fdiv dword ptr [eax + 0x3a8] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x3a8u)));
/* f95813: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95814: xor edi, edi */
  edi = 0;
/* f95816: lea ebp, [esi + 0xe4] */
  ebp = (uint32_t)(esi + 0xe4u);
/* f9581c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_f95820: /* f95820: mov al, byte ptr [esi + edi + 0xd0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + edi + 0xd0u))) & 0xffu);
/* f95827: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f95829: lea ecx, [esi + edi + 0xd0] */
  ecx = (uint32_t)(esi + edi + 0xd0u);
/* f95830: je 0xf95877 */
  if (zf) goto L_f95877;
L_f95832: /* f95832: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* f95835: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* f95839: fst dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0);
/* f9583c: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f95842: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f95844: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f95847: jp 0xf95877 */
  if (pf) goto L_f95877;
L_f95849: /* f95849: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* f9584c: mov byte ptr [esp + 0xf], 5 */
  W8((uint32_t)(esp + 0xfu), 0x5u);
/* f95851: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* f95854: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* f95857: mov dword ptr [eax + 0x80], edi */
  W32((uint32_t)(eax + 0x80u), edi);
/* f9585d: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* f95860: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f95862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95863: lea eax, [esp + 0x13] */
  eax = (uint32_t)(esp + 0x13u);
/* f95867: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95869: mov ecx, esi */
  ecx = esi;
/* f9586b: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf9586eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9586e: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* f95874: mov dword ptr [ebp], ecx */
  W32((uint32_t)(ebp), ecx);
L_f95877: /* f95877: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f95878: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f9587b: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9587e: jl 0xf95820 */
  if ((sf != of)) goto L_f95820;
L_f95880: /* f95880: fild dword ptr [esi + 0xf8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0xf8u)); FPUSH(v); }
/* f95886: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* f95889: mov edi, 1 */
  edi = 0x1u;
/* f9588e: mov edx, 0x437f0000 */
  edx = 0x437f0000u;
/* f95893: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* f95897: fmul dword ptr [0xfa58f4] */
  ST0 = ST0 * (F32((uint32_t)(0xfa58f4u)));
/* f9589d: fadd dword ptr [esi + 0xf4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xf4u)));
/* f958a3: fcom qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
/* f958a9: fst dword ptr [esi + 0xf4] */
  WF32((uint32_t)(esi + 0xf4u), ST0);
/* f958af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f958b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f958b4: jp 0xf958ca */
  if (pf) goto L_f958ca;
L_f958b6: /* f958b6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f958b8: mov dword ptr [esi + 0xf4], 0 */
  W32((uint32_t)(esi + 0xf4u), 0x0u);
/* f958c2: mov dword ptr [esi + 0xf8], edi */
  W32((uint32_t)(esi + 0xf8u), edi);
/* f958c8: jmp 0xf958e3 */
  goto L_f958e3;
L_f958ca: /* f958ca: fcomp qword ptr [0xfa58e8] */
  fpu_com(ST0, F64((uint32_t)(0xfa58e8u)));
  FPOP();
/* f958d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f958d2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f958d5: jne 0xf958e3 */
  if (!zf) goto L_f958e3;
L_f958d7: /* f958d7: mov dword ptr [esi + 0xf4], edx */
  W32((uint32_t)(esi + 0xf4u), edx);
/* f958dd: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
L_f958e3: /* f958e3: fild dword ptr [esi + 0x100] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x100u)); FPUSH(v); }
/* f958e9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* f958ed: fmul dword ptr [0xfa58e4] */
  ST0 = ST0 * (F32((uint32_t)(0xfa58e4u)));
/* f958f3: fadd dword ptr [esi + 0xfc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xfcu)));
/* f958f9: fcom qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
/* f958ff: fst dword ptr [esi + 0xfc] */
  WF32((uint32_t)(esi + 0xfcu), ST0);
/* f95905: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f95907: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f9590a: jp 0xf95920 */
  if (pf) goto L_f95920;
L_f9590c: /* f9590c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f9590e: mov dword ptr [esi + 0xfc], 0 */
  W32((uint32_t)(esi + 0xfcu), 0x0u);
/* f95918: mov dword ptr [esi + 0x100], edi */
  W32((uint32_t)(esi + 0x100u), edi);
/* f9591e: jmp 0xf95939 */
  goto L_f95939;
L_f95920: /* f95920: fcomp qword ptr [0xfa58e8] */
  fpu_com(ST0, F64((uint32_t)(0xfa58e8u)));
  FPOP();
/* f95926: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f95928: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9592b: jne 0xf95939 */
  if (!zf) goto L_f95939;
L_f9592d: /* f9592d: mov dword ptr [esi + 0xfc], edx */
  W32((uint32_t)(esi + 0xfcu), edx);
/* f95933: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
L_f95939: /* f95939: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f9593c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9593e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9593f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f95940: je 0xf9594c */
  if (zf) goto L_f9594c;
L_f95942: /* f95942: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* f95946: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95947: call 0xf72090 */
  esp -= 4; W32(esp, 0xf9594cu); SPILL(); f_f72090(); if (g_unwind) return; RELOAD();
L_f9594c: /* f9594c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9594d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f9594e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f959c0(void) {
  LOAD_REGS();
L_f959c0: /* f959c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f959c1: mov ebp, esp */
  ebp = esp;
/* f959c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f959c5: push 0xf9a983 */
  { uint32_t v = 0xf9a983u; esp -= 4; W32(esp, v); }
/* f959ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f959d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f959d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f959d8: sub esp, 0x434 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x434u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f959de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f959df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f959e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f959e1: xor edi, edi */
  edi = 0;
/* f959e3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f959e6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f959e9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f959ec: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf959f2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f959f2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f959f5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f959f8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f959fb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f959fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f959ff: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95a02: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* f95a05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95a06: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95a0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95a0c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f95a10: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95a13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95a13: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95a16: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95a19: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f95a1c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95a1f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95a20: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95a23: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f95a26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95a27: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95a2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95a2d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95a30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95a30: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f95a33: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f95a34: mov eax, edx */
  eax = edx;
/* f95a36: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f95a39: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f95a3c: jne 0xf95a53 */
  if (!zf) goto L_f95a53;
L_f95a3e: /* f95a3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95a41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95a42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95a43: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95a46: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f95a4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95a4d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf95a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f95a53: /* f95a53: mov ecx, dword ptr [0xfce534] */
  ecx = R32((uint32_t)(0xfce534u));
/* f95a59: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95a5fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95a5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95a60: lea eax, [ebp - 0x440] */
  eax = (uint32_t)(ebp + 0xfffffbc0u);
/* f95a66: push 0xfb9838 */
  { uint32_t v = 0xfb9838u; esp -= 4; W32(esp, v); }
/* f95a6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95a6c: call dword ptr [0xfce464] */
  esp -= 4; W32(esp, 0xf95a72u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* f95a72: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f95a75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95a78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95a79: add ecx, 0x20c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95a7f: call 0xf71faa */
  esp -= 4; W32(esp, 0xf95a84u); SPILL(); f_f71faa(); if (g_unwind) return; RELOAD();
/* f95a84: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* f95a87: jmp 0xf95a90 */
  goto L_f95a90;
L_f95a90: /* f95a90: mov edx, dword ptr [0xfce460] */
  edx = R32((uint32_t)(0xfce460u));
/* f95a96: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f95a99: xor ecx, ecx */
  ecx = 0;
/* f95a9b: cmp word ptr [edx], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* f95a9e: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f95aa1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f95aa2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95aa4: jge 0xf95c52 */
  if ((sf == of)) goto L_f95c52;
L_f95aaa: /* f95aaa: xor ebx, ebx */
  ebx = 0;
/* f95aac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f95ab0: /* f95ab0: mov eax, dword ptr [0xfce45c] */
  eax = R32((uint32_t)(0xfce45cu));
/* f95ab5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f95ab7: cmp ebx, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95aba: jge 0xf95c4a */
  if ((sf == of)) goto L_f95c4a;
L_f95ac0: /* f95ac0: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* f95ac3: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* f95ac6: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f95ac9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95acb: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95ad1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95ad1: lea ecx, [ebp - 0x440] */
  ecx = (uint32_t)(ebp + 0xfffffbc0u);
/* f95ad7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95ad8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95ad9: call dword ptr [0xfce458] */
  esp -= 4; W32(esp, 0xf95adfu); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* f95adf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95ae2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f95ae4: je 0xf95c44 */
  if (zf) goto L_f95c44;
L_f95aea: /* f95aea: mov dx, word ptr [0xfba524] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xfba524u))) & 0xffffu);
/* f95af1: xor eax, eax */
  eax = 0;
/* f95af3: mov word ptr [ebp - 0x240], dx */
  W16((uint32_t)(ebp + 0xfffffdc0u), (edx & 0xffffu));
/* f95afa: mov ecx, 0x7f */
  ecx = 0x7fu;
/* f95aff: lea edi, [ebp - 0x23e] */
  edi = (uint32_t)(ebp + 0xfffffdc2u);
/* f95b05: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f95b07: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* f95b09: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f95b0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f95b0e: mov edi, dword ptr [0xfce454] */
  edi = R32((uint32_t)(0xfce454u));
/* f95b14: je 0xf95b39 */
  if (zf) goto L_f95b39;
L_f95b16: /* f95b16: mov eax, dword ptr [0xfce460] */
  eax = R32((uint32_t)(0xfce460u));
/* f95b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b1c: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95b23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95b28: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b2e: push 0xfb9844 */
  { uint32_t v = 0xfb9844u; esp -= 4; W32(esp, v); }
/* f95b33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95b34: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b36: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f95b39: /* f95b39: mov eax, dword ptr [0xfce45c] */
  eax = R32((uint32_t)(0xfce45cu));
/* f95b3e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f95b40: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* f95b43: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95b45: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95b4bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95b4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b4c: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95b53: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95b58: lea eax, [ebp - 0x440] */
  eax = (uint32_t)(ebp + 0xfffffbc0u);
/* f95b5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b5f: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95b66: call dword ptr [0xfce458] */
  esp -= 4; W32(esp, 0xf95b6cu); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* f95b6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95b6f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f95b72: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* f95b77: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95b7du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95b7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b7e: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95b85: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95b8a: lea eax, [ebp - 0x440] */
  eax = (uint32_t)(ebp + 0xfffffbc0u);
/* f95b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b91: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95b98: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b9a: mov edx, dword ptr [0xfce450] */
  edx = R32((uint32_t)(0xfce450u));
/* f95ba0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f95ba2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f95ba4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95ba7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95ba9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f95bab: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95bb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95bb2: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* f95bb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95bb6: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xf95bb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95bb9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f95bbd: xor esi, esi */
  esi = 0;
/* f95bbf: nop  */
L_f95bc0: /* f95bc0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f95bc3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95bc5: jge 0xf95c28 */
  if ((sf == of)) goto L_f95c28;
L_f95bc7: /* f95bc7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f95bca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f95bcc: add ecx, 0x20c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95bd2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f95bd4: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf95bdau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f95bda: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f95bdd: mov edi, eax */
  edi = eax;
/* f95bdf: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* f95be2: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* f95be5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f95be8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f95bea: je 0xf95bef */
  if (zf) goto L_f95bef;
L_f95bec: /* f95bec: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f95bed: jmp 0xf95bf1 */
  goto L_f95bf1;
L_f95bef: /* f95bef: xor eax, eax */
  eax = 0;
L_f95bf1: /* f95bf1: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f95bf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95bf5: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* f95bf8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95bf9: call dword ptr [0xfce44c] */
  esp -= 4; W32(esp, 0xf95bffu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* f95bff: mov ecx, edi */
  ecx = edi;
/* f95c01: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* f95c04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95c05: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f95c08: add ecx, dword ptr [eax + 0x20c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95c0e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* f95c12: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf95c18u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f95c18: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* f95c1b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f95c1f: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf95c25u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f95c25: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f95c26: jmp 0xf95bc0 */
  goto L_f95bc0;
L_f95c28: /* f95c28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95c29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95c2b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f95c2e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* f95c32: call 0xf71bd1 */
  esp -= 4; W32(esp, 0xf95c37u); SPILL(); f_f71bd1(); if (g_unwind) return; RELOAD();
/* f95c37: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f95c3a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f95c3e: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf95c44u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_f95c44: /* f95c44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f95c45: jmp 0xf95ab0 */
  goto L_f95ab0;
L_f95c4a: /* f95c4a: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f95c4d: jmp 0xf95a90 */
  goto L_f95a90;
L_f95c52: /* f95c52: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f95c55: mov ecx, dword ptr [eax + 0x210] */
  ecx = R32((uint32_t)(eax + 0x210u));
/* f95c5b: mov dword ptr [eax + 0x1ec], ecx */
  W32((uint32_t)(eax + 0x1ecu), ecx);
/* f95c61: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f95c64: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f95c68: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf95c6eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f95c6e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f95c71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f95c72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f95c73: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f95c7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f95c7b: mov esp, ebp */
  esp = ebp;
/* f95c7d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f95c7e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f95a89(void) {
  LOAD_REGS();
L_f95a89: /* f95a89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f95a90: /* f95a90: mov edx, dword ptr [0xfce460] */
  edx = R32((uint32_t)(0xfce460u));
/* f95a96: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f95a99: xor ecx, ecx */
  ecx = 0;
/* f95a9b: cmp word ptr [edx], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* f95a9e: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f95aa1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f95aa2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95aa4: jge 0xf95c52 */
  if ((sf == of)) goto L_f95c52;
L_f95aaa: /* f95aaa: xor ebx, ebx */
  ebx = 0;
/* f95aac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f95ab0: /* f95ab0: mov eax, dword ptr [0xfce45c] */
  eax = R32((uint32_t)(0xfce45cu));
/* f95ab5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f95ab7: cmp ebx, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95aba: jge 0xf95c4a */
  if ((sf == of)) goto L_f95c4a;
L_f95ac0: /* f95ac0: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* f95ac3: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* f95ac6: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f95ac9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95acb: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95ad1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95ad1: lea ecx, [ebp - 0x440] */
  ecx = (uint32_t)(ebp + 0xfffffbc0u);
/* f95ad7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95ad8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95ad9: call dword ptr [0xfce458] */
  esp -= 4; W32(esp, 0xf95adfu); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* f95adf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95ae2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f95ae4: je 0xf95c44 */
  if (zf) goto L_f95c44;
L_f95aea: /* f95aea: mov dx, word ptr [0xfba524] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xfba524u))) & 0xffffu);
/* f95af1: xor eax, eax */
  eax = 0;
/* f95af3: mov word ptr [ebp - 0x240], dx */
  W16((uint32_t)(ebp + 0xfffffdc0u), (edx & 0xffffu));
/* f95afa: mov ecx, 0x7f */
  ecx = 0x7fu;
/* f95aff: lea edi, [ebp - 0x23e] */
  edi = (uint32_t)(ebp + 0xfffffdc2u);
/* f95b05: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f95b07: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* f95b09: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f95b0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f95b0e: mov edi, dword ptr [0xfce454] */
  edi = R32((uint32_t)(0xfce454u));
/* f95b14: je 0xf95b39 */
  if (zf) goto L_f95b39;
L_f95b16: /* f95b16: mov eax, dword ptr [0xfce460] */
  eax = R32((uint32_t)(0xfce460u));
/* f95b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b1c: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95b23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95b28: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b2e: push 0xfb9844 */
  { uint32_t v = 0xfb9844u; esp -= 4; W32(esp, v); }
/* f95b33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95b34: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b36: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f95b39: /* f95b39: mov eax, dword ptr [0xfce45c] */
  eax = R32((uint32_t)(0xfce45cu));
/* f95b3e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f95b40: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* f95b43: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95b45: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95b4bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95b4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b4c: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95b53: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95b58: lea eax, [ebp - 0x440] */
  eax = (uint32_t)(ebp + 0xfffffbc0u);
/* f95b5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b5f: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95b66: call dword ptr [0xfce458] */
  esp -= 4; W32(esp, 0xf95b6cu); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* f95b6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95b6f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f95b72: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* f95b77: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95b7du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95b7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b7e: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95b85: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95b8a: lea eax, [ebp - 0x440] */
  eax = (uint32_t)(ebp + 0xfffffbc0u);
/* f95b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95b91: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95b97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95b98: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf95b9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95b9a: mov edx, dword ptr [0xfce450] */
  edx = R32((uint32_t)(0xfce450u));
/* f95ba0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f95ba2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f95ba4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95ba7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95ba9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f95bab: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* f95bb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95bb2: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* f95bb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95bb6: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xf95bb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95bb9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f95bbd: xor esi, esi */
  esi = 0;
/* f95bbf: nop  */
L_f95bc0: /* f95bc0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f95bc3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f95bc5: jge 0xf95c28 */
  if ((sf == of)) goto L_f95c28;
L_f95bc7: /* f95bc7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f95bca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f95bcc: add ecx, 0x20c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95bd2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f95bd4: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf95bdau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f95bda: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f95bdd: mov edi, eax */
  edi = eax;
/* f95bdf: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* f95be2: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* f95be5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f95be8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f95bea: je 0xf95bef */
  if (zf) goto L_f95bef;
L_f95bec: /* f95bec: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f95bed: jmp 0xf95bf1 */
  goto L_f95bf1;
L_f95bef: /* f95bef: xor eax, eax */
  eax = 0;
L_f95bf1: /* f95bf1: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f95bf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95bf5: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* f95bf8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95bf9: call dword ptr [0xfce44c] */
  esp -= 4; W32(esp, 0xf95bffu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* f95bff: mov ecx, edi */
  ecx = edi;
/* f95c01: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* f95c04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95c05: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f95c08: add ecx, dword ptr [eax + 0x20c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f95c0e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* f95c12: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf95c18u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f95c18: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* f95c1b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f95c1f: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf95c25u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f95c25: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f95c26: jmp 0xf95bc0 */
  goto L_f95bc0;
L_f95c28: /* f95c28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95c29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95c2b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f95c2e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* f95c32: call 0xf71bd1 */
  esp -= 4; W32(esp, 0xf95c37u); SPILL(); f_f71bd1(); if (g_unwind) return; RELOAD();
/* f95c37: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f95c3a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f95c3e: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf95c44u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_f95c44: /* f95c44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f95c45: jmp 0xf95ab0 */
  goto L_f95ab0;
L_f95c4a: /* f95c4a: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f95c4d: jmp 0xf95a90 */
  goto L_f95a90;
L_f95c52: /* f95c52: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f95c55: mov ecx, dword ptr [eax + 0x210] */
  ecx = R32((uint32_t)(eax + 0x210u));
/* f95c5b: mov dword ptr [eax + 0x1ec], ecx */
  W32((uint32_t)(eax + 0x1ecu), ecx);
/* f95c61: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f95c64: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f95c68: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf95c6eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f95c6e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f95c71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f95c72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f95c73: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f95c7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f95c7b: mov esp, ebp */
  esp = ebp;
/* f95c7d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f95c7e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f95c81(void) {
  LOAD_REGS();
L_f95c81: /* f95c81: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* f95c84: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f95c89: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* f95c8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95c8d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f95c90: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf95c95u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f95c95(); return;
}

void f_f95c95(void) {
  LOAD_REGS();
L_f95c95: /* f95c95: push 0xfa58f8 */
  { uint32_t v = 0xfa58f8u; esp -= 4; W32(esp, v); }
/* f95c9a: push 0xfb9854 */
  { uint32_t v = 0xfb9854u; esp -= 4; W32(esp, v); }
/* f95c9f: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf95ca5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f95ca5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95ca8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95caa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f95cac: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf95cb1u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f95cb1: guest_badaddr(0xf95cb1); return;
}

void f_f95d80(void) {
  LOAD_REGS();
L_f95d80: /* f95d80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f95d81: mov ebp, esp */
  ebp = esp;
/* f95d83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f95d85: push 0xf9a9a9 */
  { uint32_t v = 0xf9a9a9u; esp -= 4; W32(esp, v); }
/* f95d8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f95d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95d91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f95d98: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f95d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95d9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95d9d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f95da0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95da3: xor ebx, ebx */
  ebx = 0;
/* f95da5: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* f95da8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95dab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95dac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95dad: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95db0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f95db3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f95db6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95db7: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95dbc: mov edi, ecx */
  edi = ecx;
/* f95dbe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95dc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95dc2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f95dc5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95dc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95dc8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95dcb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95dce: mov byte ptr [ebp - 0x24], bl */
  W8((uint32_t)(ebp + 0xffffffdcu), (ebx & 0xffu));
/* f95dd1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95dd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95dd5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95dd8: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f95ddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95ddc: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95de2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95de5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95de5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95de8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95deb: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* f95dee: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95df1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95df2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95df5: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* f95df8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95df9: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95dfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95dff: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95e02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95e02: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95e05: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95e08: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* f95e0b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95e0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95e0f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95e12: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f95e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95e16: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95e1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95e1c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95e1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95e1f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95e22: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95e25: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* f95e28: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95e2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95e2c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95e2f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f95e32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95e33: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95e38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95e39: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95e3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95e3c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95e3f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95e42: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f95e45: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95e48: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95e49: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95e4c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f95e4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95e50: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95e55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95e56: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95e59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95e59: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95e5c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95e5f: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* f95e62: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95e65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95e66: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95e69: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* f95e6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95e6d: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95e72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95e73: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95e76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95e76: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f95e79: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf95e7fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f95e7f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f95e82: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f95e85: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95e88: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95e89: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95e8c: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* f95e8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95e90: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f95e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95e96: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f95e9a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf95e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f95e9d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f95ea0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f95ea1: mov eax, edx */
  eax = edx;
/* f95ea3: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f95ea6: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f95ea9: jne 0xf95ec0 */
  if (!zf) goto L_f95ec0;
L_f95eab: /* f95eab: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f95eae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f95eaf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95eb0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f95eb3: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f95eb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95eba: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf95ec0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f95ec0: /* f95ec0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f95ec3: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf95ec9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f95ec9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f95ecc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f95ecf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95ed0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f95ed3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95ed4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f95ed7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95ed8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f95edb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95edc: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f95edf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95ee0: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f95ee3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f95ee4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95ee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95ee6: mov ecx, edi */
  ecx = edi;
/* f95ee8: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf95eedu); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f95eed: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f95ef0: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* f95ef3: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf95ef9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f95ef9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f95efc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f95efd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f95efe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f95f05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f95f06: mov esp, ebp */
  esp = ebp;
/* f95f08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f95f09: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f95f0c(void) {
  LOAD_REGS();
L_f95f0c: /* f95f0c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f95f0f: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f95f14: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* f95f17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f95f18: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* f95f1b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf95f20u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f95f20(); return;
}

void f_f95f20(void) {
  LOAD_REGS();
L_f95f20: /* f95f20: push 0xfa5940 */
  { uint32_t v = 0xfa5940u; esp -= 4; W32(esp, v); }
/* f95f25: push 0xfb9970 */
  { uint32_t v = 0xfb9970u; esp -= 4; W32(esp, v); }
/* f95f2a: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf95f30u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f95f30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f95f33: xor ebx, ebx */
  ebx = 0;
/* f95f35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95f36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95f37: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf95f3cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f95f3c: guest_badaddr(0xf95f3c); return;
}

void f_f95fb0(void) {
  LOAD_REGS();
L_f95fb0: /* f95fb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f95fb1: mov ebp, esp */
  ebp = esp;
/* f95fb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f95fb5: push 0xf9a9c8 */
  { uint32_t v = 0xf9a9c8u; esp -= 4; W32(esp, v); }
/* f95fba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f95fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95fc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f95fc8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f95fcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f95fcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f95fcd: mov esi, ecx */
  esi = ecx;
/* f95fcf: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f95fd2: xor ebx, ebx */
  ebx = 0;
/* f95fd4: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f95fd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95fd7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f95fda: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f95fdd: je 0xf961ba */
  if (zf) goto L_f961ba;
L_f95fe3: /* f95fe3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f95fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f95fe7: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf95fecu); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f95fec: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f95fef: lea eax, [esi + 0x1e8] */
  eax = (uint32_t)(esi + 0x1e8u);
/* f95ff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f95ff6: call 0xf716bd */
  esp -= 4; W32(esp, 0xf95ffbu); SPILL(); f_f716bd(); if (g_unwind) return; RELOAD();
/* f95ffb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f95ffd: je 0xf961ba */
  if (zf) goto L_f961ba;
L_f96003: /* f96003: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* f96006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96007: mov ecx, eax */
  ecx = eax;
/* f96009: call 0xf71a14 */
  esp -= 4; W32(esp, 0xf9600eu); SPILL(); f_f71a14(); if (g_unwind) return; RELOAD();
/* f9600e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f96010: je 0xf961ba */
  if (zf) goto L_f961ba;
L_f96016: /* f96016: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* f96019: test byte ptr [esi + 0x1f4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f96020: jne 0xf960a7 */
  if (!zf) goto L_f960a7;
L_f96026: /* f96026: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f96029: mov eax, esp */
  eax = esp;
/* f9602b: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* f9602e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f96031: mov edx, esp */
  edx = esp;
/* f96033: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* f96036: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f96037: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* f9603d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f9603f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f96042: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* f96045: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* f96048: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf9604eu); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f9604e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f96050: mov ecx, esi */
  ecx = esi;
/* f96052: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf96055u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96055: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f96058: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9605a: mov ecx, esi */
  ecx = esi;
/* f9605c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf9605fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9605f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f96062: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f96064: mov ecx, esi */
  ecx = esi;
/* f96066: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf9606cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9606c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f9606f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f96071: mov ecx, esi */
  ecx = esi;
/* f96073: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf96079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96079: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f9607c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9607f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f96082: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f96084: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96085: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f9608a: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f9608f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96092: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f96095: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f96096: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f96099: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9609a: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f9609d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9609e: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* f960a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f960a2: mov ecx, edi */
  ecx = edi;
/* f960a4: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf960a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f960a7: /* f960a7: mov cl, byte ptr [esi + 0x1f4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1f4u))) & 0xffu);
/* f960ad: mov al, 2 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* f960af: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f960b1: jne 0xf96248 */
  if (!zf) goto L_f96248;
L_f960b7: /* f960b7: cmp dword ptr [esi + 0xa0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xa0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f960bd: jne 0xf961cd */
  if (!zf) goto L_f961cd;
L_f960c3: /* f960c3: cmp byte ptr [esi + 0x30], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f960c6: jne 0xf960d3 */
  if (!zf) goto L_f960d3;
L_f960c8: /* f960c8: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* f960ce: mov dword ptr [edi + 0x58], eax */
  W32((uint32_t)(edi + 0x58u), eax);
/* f960d1: jmp 0xf960dc */
  goto L_f960dc;
L_f960d3: /* f960d3: mov ecx, dword ptr [esi + 0x1dc] */
  ecx = R32((uint32_t)(esi + 0x1dcu));
/* f960d9: mov dword ptr [edi + 0x58], ecx */
  W32((uint32_t)(edi + 0x58u), ecx);
L_f960dc: /* f960dc: mov dl, byte ptr [esi + 0x1e4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1e4u))) & 0xffu);
/* f960e2: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f960e8: mov byte ptr [edi + 0x50], dl */
  W8((uint32_t)(edi + 0x50u), (edx & 0xffu));
/* f960eb: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf960f1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f960f1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f960f4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f960f6: mov ecx, esi */
  ecx = esi;
/* f960f8: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf960feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f960fe: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f96101: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f96103: mov ecx, esi */
  ecx = esi;
/* f96105: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf96108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96108: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f9610b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9610e: mov ebx, dword ptr [0xfce43c] */
  ebx = R32((uint32_t)(0xfce43cu));
/* f96114: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f96117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96118: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9611b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf9611du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9611d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f96120: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f96122: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96125: mov ecx, esi */
  ecx = esi;
/* f96127: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf9612du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9612d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f96130: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f96132: mov ecx, esi */
  ecx = esi;
/* f96134: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf96137u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96137: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f9613a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9613d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9613e: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* f96141: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f96144: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf96146u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96146: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f96149: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f9614b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9614e: mov ecx, esi */
  ecx = esi;
/* f96150: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf96156u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96156: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f96159: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9615c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9615d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf9615fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9615f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f96161: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96164: mov ecx, esi */
  ecx = esi;
/* f96166: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f96169: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf9616fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9616f: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f96172: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f96175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96176: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf96178u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96178: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f9617b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f9617e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f96180: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96183: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f96184: push 0xfb9b1c */
  { uint32_t v = 0xfb9b1cu; esp -= 4; W32(esp, v); }
/* f96189: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9618c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* f96190: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f96193: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f96196: xor eax, eax */
  eax = 0;
/* f96198: mov al, byte ptr [esi + 0x1d8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d8u))) & 0xffu);
/* f9619e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f961a2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f961a5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f961a9: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f961ac: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f961af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f961b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f961b1: call dword ptr [ecx + 0xac] */
  { uint32_t t = R32((uint32_t)(ecx + 0xacu)); esp -= 4; W32(esp, 0xf961b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f961b7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f961ba: /* f961ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f961bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f961c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f961c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f961c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f961c7: mov esp, ebp */
  esp = ebp;
/* f961c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f961ca: ret 4 */
  esp += 8; SPILL(); return;
L_f961cd: /* f961cd: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f961d3: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf961d9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f961d9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f961db: mov ecx, esi */
  ecx = esi;
/* f961dd: mov ebx, eax */
  ebx = eax;
/* f961df: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf961e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f961e2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f961e5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f961e7: mov ecx, esi */
  ecx = esi;
/* f961e9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf961ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f961ec: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f961ef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f961f1: mov ecx, esi */
  ecx = esi;
/* f961f3: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf961f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f961f9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f961fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f961fe: mov ecx, esi */
  ecx = esi;
/* f96200: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf96206u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96206: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f96209: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f9620c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f9620f: xor ecx, ecx */
  ecx = 0;
/* f96211: mov cl, byte ptr [esi + 0x1d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d8u))) & 0xffu);
/* f96217: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96218: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96219: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f9621c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9621d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f96220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96221: xor eax, eax */
  eax = 0;
/* f96223: mov al, byte ptr [esi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f96226: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96227: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f9622d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9622e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9622f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96230: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf96235u); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f96235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f96238: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9623f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f96240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f96241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f96242: mov esp, ebp */
  esp = ebp;
/* f96244: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f96245: ret 4 */
  esp += 8; SPILL(); return;
L_f96248: /* f96248: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* f9624b: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* f9624e: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* f96251: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f96257: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* f9625d: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f96263: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* f96269: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* f9626f: push 0xfb9b24 */
  { uint32_t v = 0xfb9b24u; esp -= 4; W32(esp, v); }
/* f96274: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f96277: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f9627a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* f9627d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f96280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96281: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f96284: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96285: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f9628a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f9628f: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* f96292: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f96294: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96295: mov ecx, edi */
  ecx = edi;
/* f96297: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f9629b: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf962a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f962a1: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f962a7: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf962adu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f962ad: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f962b0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f962b2: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* f962b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f962b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f962b6: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* f962b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f962ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f962bb: mov ecx, edi */
  ecx = edi;
/* f962bd: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xf962c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f962c3: cmp dword ptr [esi + 0xa0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xa0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f962c9: jne 0xf963a3 */
  if (!zf) goto L_f963a3;
L_f962cf: /* f962cf: mov edx, dword ptr [esi + 0x1dc] */
  edx = R32((uint32_t)(esi + 0x1dcu));
/* f962d5: mov dword ptr [edi + 0x58], edx */
  W32((uint32_t)(edi + 0x58u), edx);
/* f962d8: mov al, byte ptr [esi + 0x1e4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1e4u))) & 0xffu);
/* f962de: mov byte ptr [edi + 0x50], al */
  W8((uint32_t)(edi + 0x50u), (eax & 0xffu));
L_f962e1: /* f962e1: cmp ebx, dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f962e4: jge 0xf96404 */
  if ((sf == of)) goto L_f96404;
L_f962ea: /* f962ea: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* f962ed: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* f962f0: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* f962f3: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf962f9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f962f9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f962fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f962fd: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f96300: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* f96303: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f96306: call dword ptr [0xfce43c] */
  esp -= 4; W32(esp, 0xf9630cu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* f9630c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f9630f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96312: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f96315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96316: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f96319: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9631c: call dword ptr [0xfce43c] */
  esp -= 4; W32(esp, 0xf96322u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* f96322: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* f96325: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f96328: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9632b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9632c: call dword ptr [0xfce43c] */
  esp -= 4; W32(esp, 0xf96332u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* f96332: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f96335: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96338: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96339: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* f9633c: call dword ptr [0xfce43c] */
  esp -= 4; W32(esp, 0xf96342u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* f96342: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* f96345: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f96347: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9634a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* f9634d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f96350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96351: push 0xfb9b28 */
  { uint32_t v = 0xfb9b28u; esp -= 4; W32(esp, v); }
/* f96356: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f96359: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* f9635d: xor ecx, ecx */
  ecx = 0;
/* f9635f: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* f96362: mov cl, byte ptr [esi + 0x1d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d8u))) & 0xffu);
/* f96368: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f9636c: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* f9636f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f96373: fild dword ptr [ebp - 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* f96376: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f96379: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9637a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9637b: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf96381u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96381: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f96384: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f96387: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9638a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* f9638c: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f9638f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* f96391: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* f96394: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f96396: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f96398: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9639b: je 0xf96404 */
  if (zf) goto L_f96404;
L_f9639d: /* f9639d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f9639e: jmp 0xf962e1 */
  goto L_f962e1;
L_f963a3: /* f963a3: xor ebx, ebx */
  ebx = 0;
L_f963a5: /* f963a5: cmp ebx, dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f963a8: jge 0xf96404 */
  if ((sf == of)) goto L_f96404;
L_f963aa: /* f963aa: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* f963ad: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* f963b0: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* f963b3: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf963b9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f963b9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f963bc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f963bf: xor ecx, ecx */
  ecx = 0;
/* f963c1: mov cl, byte ptr [esi + 0x1d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d8u))) & 0xffu);
/* f963c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f963c8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f963cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f963cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f963cd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f963d0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f963d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f963d4: xor edx, edx */
  edx = 0;
/* f963d6: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f963d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f963da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f963db: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f963e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f963e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f963e3: call 0xf71dc5 */
  esp -= 4; W32(esp, 0xf963e8u); SPILL(); f_f71dc5(); if (g_unwind) return; RELOAD();
/* f963e8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f963eb: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f963ee: fadd st(1) */
  ST0 = ST0 + STI(1);
/* f963f0: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f963f3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* f963f5: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* f963f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f963fa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f963fc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f963ff: je 0xf96404 */
  if (zf) goto L_f96404;
L_f96401: /* f96401: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f96402: jmp 0xf963a5 */
  goto L_f963a5;
L_f96404: /* f96404: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* f96407: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f9640b: call 0xf71a78 */
  esp -= 4; W32(esp, 0xf96410u); SPILL(); f_f71a78(); if (g_unwind) return; RELOAD();
/* f96410: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f96413: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f96414: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f96415: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9641c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9641d: mov esp, ebp */
  esp = ebp;
/* f9641f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f96420: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f96423(void) {
  LOAD_REGS();
L_f96423: /* f96423: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* f96426: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f9642b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f9642e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9642f: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* f96432: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf96437u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f96437(); return;
}

void f_f96437(void) {
  LOAD_REGS();
L_f96437: /* f96437: push 0xfa597c */
  { uint32_t v = 0xfa597cu; esp -= 4; W32(esp, v); }
/* f9643c: push 0xfb9b30 */
  { uint32_t v = 0xfb9b30u; esp -= 4; W32(esp, v); }
/* f96441: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf96447u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f96447: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9644a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9644c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9644e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf96453u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f96453: guest_badaddr(0xf96453); return;
}

void f_f96590(void) {
  LOAD_REGS();
L_f96590: /* f96590: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f96596: mov ecx, dword ptr [0xfba520] */
  ecx = R32((uint32_t)(0xfba520u));
/* f9659c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f9659e: push 0xf9a9e8 */
  { uint32_t v = 0xf9a9e8u; esp -= 4; W32(esp, v); }
/* f965a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f965a4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f965a8: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f965af: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f965b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f965b4: je 0xf965fe */
  if (zf) goto L_f965fe;
L_f965b6: /* f965b6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f965b9: mov ecx, esp */
  ecx = esp;
/* f965bb: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* f965bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f965c0: call 0xf7165e */
  esp -= 4; W32(esp, 0xf965c5u); SPILL(); f_f7165e(); if (g_unwind) return; RELOAD();
/* f965c5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f965c8: mov ecx, esp */
  ecx = esp;
/* f965ca: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* f965ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f965cf: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* f965d7: call 0xf7165e */
  esp -= 4; W32(esp, 0xf965dcu); SPILL(); f_f7165e(); if (g_unwind) return; RELOAD();
/* f965dc: mov ecx, dword ptr [0xfba520] */
  ecx = R32((uint32_t)(0xfba520u));
/* f965e2: mov dword ptr [esp + 0x48], 0xffffffff */
  W32((uint32_t)(esp + 0x48u), 0xffffffffu);
/* f965ea: call 0xf71b0e */
  esp -= 4; W32(esp, 0xf965efu); SPILL(); f_f71b0e(); if (g_unwind) return; RELOAD();
/* f965ef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f965f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f965fa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f965fd: ret  */
  esp += 4; SPILL(); return;
L_f965fe: /* f965fe: mov ecx, eax */
  ecx = eax;
/* f96600: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf96606u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f96606: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96607: mov ecx, esi */
  ecx = esi;
/* f96609: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf9660fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f9660f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96610: call dword ptr [0xfce3e8] */
  esp -= 4; W32(esp, 0xf96616u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* f96616: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f9661a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9661d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f96624: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96627: ret  */
  esp += 4; SPILL(); return;
}

void f_f96660(void) {
  LOAD_REGS();
L_f96660: /* f96660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f96661: mov ebp, esp */
  ebp = esp;
/* f96663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f96665: push 0xf9aa00 */
  { uint32_t v = 0xf9aa00u; esp -= 4; W32(esp, v); }
/* f9666a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f96670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f96678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f9667b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9667e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f96681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96682: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f96683: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f96684: mov esi, ecx */
  esi = ecx;
/* f96686: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f96689: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f9668c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9668d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f96690: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f96697: jne 0xf966ae */
  if (!zf) goto L_f966ae;
L_f96699: /* f96699: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f9669c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f9669d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9669f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f966a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f966a3: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f966a8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf966aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f966ae: /* f966ae: cmp dword ptr [esi + 0x29c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x29cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f966b5: je 0xf9674f */
  if (zf) goto L_f9674f;
L_f966bb: /* f966bb: mov cl, byte ptr [esi + 0x2a0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2a0u))) & 0xffu);
/* f966c1: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f966c7: mov edx, dword ptr [esi + 0x208] */
  edx = R32((uint32_t)(esi + 0x208u));
/* f966cd: and cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f966d0: neg cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f966d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f966d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f966d4: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* f966d6: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f966d9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f966da: mov dword ptr [0xfb9d68], ecx */
  W32((uint32_t)(0xfb9d68u), ecx);
/* f966e0: call 0xf71762 */
  esp -= 4; W32(esp, 0xf966e5u); SPILL(); f_f71762(); if (g_unwind) return; RELOAD();
/* f966e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f966e8: xor ecx, ecx */
  ecx = 0;
/* f966ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f966f0: /* f966f0: cmp ecx, dword ptr [esi + 0x20c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x20cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f966f6: jge 0xf9674f */
  if ((sf == of)) goto L_f9674f;
L_f966f8: /* f966f8: mov edx, dword ptr [esi + 0x208] */
  edx = R32((uint32_t)(esi + 0x208u));
/* f966fe: mov eax, ecx */
  eax = ecx;
/* f96700: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f96703: mov eax, dword ptr [eax + edx + 0xc] */
  eax = R32((uint32_t)(eax + edx + 0xcu));
/* f96707: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96709: jl 0xf9671c */
  if ((sf != of)) goto L_f9671c;
L_f9670b: /* f9670b: cmp eax, dword ptr [esi + 0x218] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x218u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f96711: jge 0xf9671c */
  if ((sf == of)) goto L_f9671c;
L_f96713: /* f96713: mov edx, dword ptr [esi + 0x214] */
  edx = R32((uint32_t)(esi + 0x214u));
/* f96719: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_f9671c: /* f9671c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f9671d: jmp 0xf966f0 */
  goto L_f966f0;
L_f9674f: /* f9674f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f96752: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f96753: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f96754: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9675b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9675c: mov esp, ebp */
  esp = ebp;
/* f9675e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9675f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f9671f(void) {
  LOAD_REGS();
L_f9671f: /* f9671f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f96722: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f96727: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f9672a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9672b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f9672e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf96733u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f96733(); return;
}

void f_f96733(void) {
  LOAD_REGS();
L_f96733: /* f96733: push 0xfa59a0 */
  { uint32_t v = 0xfa59a0u; esp -= 4; W32(esp, v); }
/* f96738: push 0xfb9d6c */
  { uint32_t v = 0xfb9d6cu; esp -= 4; W32(esp, v); }
/* f9673d: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf96743u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f96743: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96746: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96748: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f9674a: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9674fu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f9674f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f96752: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f96753: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f96754: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f9675b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f9675c: mov esp, ebp */
  esp = ebp;
/* f9675e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f9675f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f967c0(void) {
  LOAD_REGS();
L_f967c0: /* f967c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f967c1: mov ebp, esp */
  ebp = esp;
/* f967c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f967c5: push 0xf9aa4d */
  { uint32_t v = 0xf9aa4du; esp -= 4; W32(esp, v); }
/* f967ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f967d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f967d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f967d8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f967db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f967dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f967dd: mov esi, ecx */
  esi = ecx;
/* f967df: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f967e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f967e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f967e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f967ee: je 0xf96b80 */
  if (zf) goto L_f96b80;
L_f967f4: /* f967f4: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f967fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f967fc: je 0xf96b80 */
  if (zf) goto L_f96b80;
L_f96802: /* f96802: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f96808: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f9680e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f96811: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96812: call 0xf719e2 */
  esp -= 4; W32(esp, 0xf96817u); SPILL(); f_f719e2(); if (g_unwind) return; RELOAD();
/* f96817: fld dword ptr [esi + 0xac] */
  { double v = F32((uint32_t)(esi + 0xacu)); FPUSH(v); }
/* f9681d: fsub dword ptr [esi + 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xa4u)));
/* f96823: mov edi, dword ptr [esi + 0xa0] */
  edi = R32((uint32_t)(esi + 0xa0u));
/* f96829: fisub dword ptr [edi + 0x98] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(edi + 0x98u)));
/* f9682f: fisub dword ptr [edi + 0xa0] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(edi + 0xa0u)));
/* f96835: call 0xf979dc */
  esp -= 4; W32(esp, 0xf9683au); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f9683a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9683d: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* f96840: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* f96846: mov ebx, eax */
  ebx = eax;
/* f96848: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f96849: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f9684c: call 0xf71a14 */
  esp -= 4; W32(esp, 0xf96851u); SPILL(); f_f71a14(); if (g_unwind) return; RELOAD();
/* f96851: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f96854: test byte ptr [esi + 0x248], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x248u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9685b: jne 0xf96869 */
  if (!zf) goto L_f96869;
L_f9685d: /* f9685d: cmp ebx, dword ptr [esi + 0x240] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x240u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f96863: je 0xf96937 */
  if (zf) goto L_f96937;
L_f96869: /* f96869: xor eax, eax */
  eax = 0;
/* f9686b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* f9686e: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* f96871: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f96874: lea ecx, [esi + 0x22c] */
  ecx = (uint32_t)(esi + 0x22cu);
/* f9687a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f9687e: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf96884u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f96884: lea ecx, [esi + 0x220] */
  ecx = (uint32_t)(esi + 0x220u);
/* f9688a: mov edi, eax */
  edi = eax;
/* f9688c: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf96892u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f96892: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f96895: movzx edi, word ptr [edi] */
  edi = (uint32_t)(R16((uint32_t)(edi)));
/* f96898: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9689b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f9689d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9689e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f968a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f968a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f968a3: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* f968a6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f968a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f968aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f968ab: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xf968b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f968b1: lea ebx, [esi + 0x20c] */
  ebx = (uint32_t)(esi + 0x20cu);
/* f968b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f968b9: mov ecx, ebx */
  ecx = ebx;
/* f968bb: call 0xf71faa */
  esp -= 4; W32(esp, 0xf968c0u); SPILL(); f_f71faa(); if (g_unwind) return; RELOAD();
/* f968c0: xor edi, edi */
  edi = 0;
L_f968c2: /* f968c2: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f968c5: jge 0xf968ef */
  if ((sf == of)) goto L_f968ef;
L_f968c7: /* f968c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f968c9: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f968cb: mov ecx, ebx */
  ecx = ebx;
/* f968cd: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf968d3u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f968d3: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f968d6: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* f968d9: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* f968dc: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* f968de: mov ecx, edi */
  ecx = edi;
/* f968e0: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* f968e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f968e4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f968e6: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf968ecu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f968ec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f968ed: jmp 0xf968c2 */
  goto L_f968c2;
L_f968ef: /* f968ef: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f968f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f968f8: xor ecx, ecx */
  ecx = 0;
/* f968fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f968fc: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f968ff: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* f96905: mov eax, dword ptr [esi + 0x248] */
  eax = R32((uint32_t)(esi + 0x248u));
/* f9690b: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f9690e: mov dword ptr [esi + 0x23c], 0 */
  W32((uint32_t)(esi + 0x23cu), 0x0u);
/* f96918: mov dword ptr [esi + 0x240], edx */
  W32((uint32_t)(esi + 0x240u), edx);
/* f9691e: mov dword ptr [esi + 0x248], eax */
  W32((uint32_t)(esi + 0x248u), eax);
/* f96924: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f96925: mov dword ptr [esi + 0x238], ecx */
  W32((uint32_t)(esi + 0x238u), ecx);
/* f9692b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f9692e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f96932: call 0xf71a78 */
  esp -= 4; W32(esp, 0xf96937u); SPILL(); f_f71a78(); if (g_unwind) return; RELOAD();
L_f96937: /* f96937: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f9693d: mov ebx, dword ptr [esi + 0x1e0] */
  ebx = R32((uint32_t)(esi + 0x1e0u));
/* f96943: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f96949: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f9694b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f9694c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9694e: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* f96955: jge 0xf9695e */
  if ((sf == of)) goto L_f9695e;
L_f96957: /* f96957: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_f9695e: /* f9695e: push 0xfba532 */
  { uint32_t v = 0xfba532u; esp -= 4; W32(esp, v); }
/* f96963: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f96966: call dword ptr [0xfce474] */
  esp -= 4; W32(esp, 0xf9696cu); SPILL(); f_4e13d9(); if (g_unwind) return; /* Core!??0FString@@QAE@PBD@Z */ RELOAD();
/* f9696c: lea ecx, [esi + 0x250] */
  ecx = (uint32_t)(esi + 0x250u);
/* f96972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96973: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f96977: call dword ptr [0xfce470] */
  esp -= 4; W32(esp, 0xf9697du); SPILL(); f_4e276b(); if (g_unwind) return; /* Core!??9FString@@QBEHABV0@@Z */ RELOAD();
/* f9697d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9697f: je 0xf96994 */
  if (zf) goto L_f96994;
L_f96981: /* f96981: mov edx, dword ptr [esi + 0x1e0] */
  edx = R32((uint32_t)(esi + 0x1e0u));
/* f96987: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96989: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* f9698c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9698e: je 0xf96994 */
  if (zf) goto L_f96994;
L_f96990: /* f96990: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* f96992: jmp 0xf96996 */
  goto L_f96996;
L_f96994: /* f96994: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_f96996: /* f96996: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f96999: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f9699d: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf969a3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f969a3: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f969a5: je 0xf96b80 */
  if (zf) goto L_f96b80;
L_f969ab: /* f969ab: lea ebx, [esi + 0x250] */
  ebx = (uint32_t)(esi + 0x250u);
/* f969b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f969b2: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f969b5: lea edi, [esi + 0x22c] */
  edi = (uint32_t)(esi + 0x22cu);
/* f969bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f969bc: mov ecx, edi */
  ecx = edi;
/* f969be: call dword ptr [0xfce46c] */
  esp -= 4; W32(esp, 0xf969c4u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* f969c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f969c5: lea ecx, [esi + 0x220] */
  ecx = (uint32_t)(esi + 0x220u);
/* f969cb: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* f969cf: call dword ptr [0xfce468] */
  esp -= 4; W32(esp, 0xf969d5u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f969d5: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f969d8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f969dc: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf969e2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f969e2: xor eax, eax */
  eax = 0;
/* f969e4: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* f969e7: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* f969ea: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f969ed: mov ecx, edi */
  ecx = edi;
/* f969ef: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* f969f3: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf969f9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f969f9: mov ecx, ebx */
  ecx = ebx;
/* f969fb: mov edi, eax */
  edi = eax;
/* f969fd: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf96a03u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f96a03: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f96a06: movzx edi, word ptr [edi] */
  edi = (uint32_t)(R16((uint32_t)(edi)));
/* f96a09: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f96a0c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f96a0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96a0f: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* f96a12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96a13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96a14: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* f96a17: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f96a1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96a1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96a1c: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xf96a22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f96a22: xor ebx, ebx */
  ebx = 0;
L_f96a24: /* f96a24: cmp ebx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f96a27: jge 0xf96a57 */
  if ((sf == of)) goto L_f96a57;
L_f96a29: /* f96a29: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f96a2b: lea edi, [esi + 0x20c] */
  edi = (uint32_t)(esi + 0x20cu);
/* f96a31: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f96a33: mov ecx, edi */
  ecx = edi;
/* f96a35: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf96a3bu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* f96a3b: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* f96a3e: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* f96a41: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* f96a44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96a45: mov ecx, eax */
  ecx = eax;
/* f96a47: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f96a49: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* f96a4c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f96a4e: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf96a54u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f96a54: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f96a55: jmp 0xf96a24 */
  goto L_f96a24;
L_f96a57: /* f96a57: mov ecx, dword ptr [esi + 0x24c] */
  ecx = R32((uint32_t)(esi + 0x24cu));
/* f96a5d: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f96a63: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f96a65: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96a67: mov edx, eax */
  edx = eax;
/* f96a69: jle 0xf96adc */
  if ((zf || sf != of)) goto L_f96adc;
L_f96a6b: /* f96a6b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96a6d: jle 0xf96adc */
  if ((zf || sf != of)) goto L_f96adc;
L_f96a6f: /* f96a6f: xor ebx, ebx */
  ebx = 0;
/* f96a71: xor ecx, ecx */
  ecx = 0;
L_f96a73: /* f96a73: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f96a75: jge 0xf96a9c */
  if ((sf == of)) goto L_f96a9c;
L_f96a77: /* f96a77: mov edi, dword ptr [esi + 0x20c] */
  edi = R32((uint32_t)(esi + 0x20cu));
/* f96a7d: mov eax, ecx */
  eax = ecx;
/* f96a7f: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* f96a82: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f96a84: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* f96a87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f96a89: je 0xf96a93 */
  if (zf) goto L_f96a93;
L_f96a8b: /* f96a8b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f96a8c: lea ebx, [ebx + eax + 1] */
  ebx = (uint32_t)(ebx + eax + 0x1u);
/* f96a90: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f96a91: jmp 0xf96a73 */
  goto L_f96a73;
L_f96a93: /* f96a93: xor eax, eax */
  eax = 0;
/* f96a95: lea ebx, [ebx + eax + 1] */
  ebx = (uint32_t)(ebx + eax + 0x1u);
/* f96a99: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f96a9a: jmp 0xf96a73 */
  goto L_f96a73;
L_f96a9c: /* f96a9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f96a9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96a9f: lea ecx, [esi + 0x20c] */
  ecx = (uint32_t)(esi + 0x20cu);
/* f96aa5: call 0xf71f41 */
  esp -= 4; W32(esp, 0xf96aaau); SPILL(); f_f71f41(); if (g_unwind) return; RELOAD();
/* f96aaa: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* f96aaf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96ab0: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* f96ab3: lea edi, [esi + 0x220] */
  edi = (uint32_t)(esi + 0x220u);
/* f96ab9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f96aba: mov ecx, edi */
  ecx = edi;
/* f96abc: call dword ptr [0xfce42c] */
  esp -= 4; W32(esp, 0xf96ac2u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* f96ac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96ac3: mov ecx, edi */
  ecx = edi;
/* f96ac5: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* f96ac9: call dword ptr [0xfce448] */
  esp -= 4; W32(esp, 0xf96acfu); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* f96acf: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f96ad2: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* f96ad6: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf96adcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_f96adc: /* f96adc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f96adf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f96ae1: mov ecx, dword ptr [esi + 0x210] */
  ecx = R32((uint32_t)(esi + 0x210u));
/* f96ae7: mov dword ptr [esi + 0x1ec], ecx */
  W32((uint32_t)(esi + 0x1ecu), ecx);
/* f96aed: je 0xf96b35 */
  if (zf) goto L_f96b35;
L_f96aef: /* f96aef: mov edi, dword ptr [esi + 0x1e0] */
  edi = R32((uint32_t)(esi + 0x1e0u));
/* f96af5: mov eax, ecx */
  eax = ecx;
/* f96af7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f96af9: mov edi, dword ptr [esi + 0x1f4] */
  edi = R32((uint32_t)(esi + 0x1f4u));
/* f96aff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* f96b00: mov edx, 0 */
  edx = 0x0u;
/* f96b05: sets dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* f96b08: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* f96b09: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f96b0b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f96b0d: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* f96b13: je 0xf96b35 */
  if (zf) goto L_f96b35;
L_f96b15: /* f96b15: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96b17: jle 0xf96b35 */
  if ((zf || sf != of)) goto L_f96b35;
L_f96b19: /* f96b19: mov eax, dword ptr [0xfba3f0] */
  eax = R32((uint32_t)(0xfba3f0u));
/* f96b1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96b21: mov ecx, edi */
  ecx = edi;
/* f96b23: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf96b29u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f96b29: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f96b2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96b2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96b2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96b30: mov ecx, edi */
  ecx = edi;
/* f96b32: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf96b35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f96b35: /* f96b35: push 0xfba533 */
  { uint32_t v = 0xfba533u; esp -= 4; W32(esp, v); }
/* f96b3a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f96b3d: call dword ptr [0xfce474] */
  esp -= 4; W32(esp, 0xf96b43u); SPILL(); f_4e13d9(); if (g_unwind) return; /* Core!??0FString@@QAE@PBD@Z */ RELOAD();
/* f96b43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96b44: lea ecx, [esi + 0x250] */
  ecx = (uint32_t)(esi + 0x250u);
/* f96b4a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* f96b4e: call dword ptr [0xfce448] */
  esp -= 4; W32(esp, 0xf96b54u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* f96b54: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* f96b57: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* f96b5b: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf96b61u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f96b61: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f96b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96b65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96b67: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f96b6a: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* f96b6e: call 0xf71bd1 */
  esp -= 4; W32(esp, 0xf96b73u); SPILL(); f_f71bd1(); if (g_unwind) return; RELOAD();
/* f96b73: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* f96b76: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f96b7a: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf96b80u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_f96b80: /* f96b80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f96b83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f96b84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f96b85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f96b8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f96b8d: mov esp, ebp */
  esp = ebp;
/* f96b8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f96b90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f96b93(void) {
  LOAD_REGS();
L_f96b93: /* f96b93: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f96b96: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f96b9b: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* f96b9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f96b9f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* f96ba2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf96ba7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f96ba7(); return;
}

void f_f96ba7(void) {
  LOAD_REGS();
L_f96ba7: /* f96ba7: push 0xfa59f4 */
  { uint32_t v = 0xfa59f4u; esp -= 4; W32(esp, v); }
/* f96bac: push 0xfb9d74 */
  { uint32_t v = 0xfb9d74u; esp -= 4; W32(esp, v); }
/* f96bb1: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf96bb7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f96bb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96bba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96bbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96bbe: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf96bc3u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f96bc3: guest_badaddr(0xf96bc3); return;
}

void f_f96ce0(void) {
  LOAD_REGS();
L_f96ce0: /* f96ce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f96ce1: mov ebp, esp */
  ebp = esp;
/* f96ce3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f96ce5: push 0xf9aa70 */
  { uint32_t v = 0xf9aa70u; esp -= 4; W32(esp, v); }
/* f96cea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f96cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96cf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f96cf8: sub esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f96cfe: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f96d01: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f96d04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96d05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f96d06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96d07: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f96d0a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f96d11: jl 0xf96f00 */
  if ((sf != of)) goto L_f96f00;
L_f96d17: /* f96d17: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f96d1a: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* f96d1d: lea eax, [eax + ecx - 0x1c] */
  eax = (uint32_t)(eax + ecx + 0xffffffe4u);
/* f96d21: mov dword ptr [ebp - 0x128], eax */
  W32((uint32_t)(ebp + 0xfffffed8u), eax);
/* f96d27: mov dword ptr [ebp - 0x12c], ecx */
  W32((uint32_t)(ebp + 0xfffffed4u), ecx);
/* f96d2d: xor eax, eax */
  eax = 0;
/* f96d2f: mov ecx, 0x3e */
  ecx = 0x3eu;
/* f96d34: lea edi, [ebp - 0x124] */
  edi = (uint32_t)(ebp + 0xfffffedcu);
/* f96d3a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* f96d3c: lea eax, [ebp - 0x12c] */
  eax = (uint32_t)(ebp + 0xfffffed4u);
L_f96d42: /* f96d42: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* f96d48: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f96d4a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f96d4d: jb 0xf96f00 */
  if (cf) goto L_f96f00;
L_f96d53: /* f96d53: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* f96d56: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* f96d58: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f96d5b: jmp 0xf96d60 */
  goto L_f96d60;
L_f96d60: /* f96d60: mov ecx, ebx */
  ecx = ebx;
/* f96d62: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f96d64: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* f96d69: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* f96d6b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f96d6d: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f96d70: mov eax, edx */
  eax = edx;
/* f96d72: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* f96d75: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* f96d79: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f96d7c: jg 0xf96dc1 */
  if ((!zf && sf == of)) goto L_f96dc1;
L_f96d7e: /* f96d7e: mov edi, edi */
  edi = edi;
L_f96d80: /* f96d80: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96d82: jbe 0xf96eb7 */
  if ((cf | zf)) goto L_f96eb7;
L_f96d88: /* f96d88: mov eax, edi */
  eax = edi;
/* f96d8a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f96d8d: lea esi, [edi + 0x1c] */
  esi = (uint32_t)(edi + 0x1cu);
L_f96d90: /* f96d90: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96d92: ja 0xf96daf */
  if ((!cf && !zf)) goto L_f96daf;
L_f96d94: /* f96d94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96d95: call 0xf96590 */
  esp -= 4; W32(esp, 0xf96d9au); SPILL(); f_f96590(); if (g_unwind) return; RELOAD();
/* f96d9a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96d9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96d9f: jle 0xf96da4 */
  if ((zf || sf != of)) goto L_f96da4;
L_f96da1: /* f96da1: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_f96da4: /* f96da4: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* f96da7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f96daa: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f96dad: jmp 0xf96d90 */
  goto L_f96d90;
L_f96daf: /* f96daf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96db1: call 0xf7167c */
  esp -= 4; W32(esp, 0xf96db6u); SPILL(); f_f7167c(); if (g_unwind) return; RELOAD();
/* f96db6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96db9: sub ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f96dbc: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f96dbf: jmp 0xf96d80 */
  goto L_f96d80;
L_f96dc1: /* f96dc1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f96dc2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f96dc4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f96dc6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* f96dc9: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f96dcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96dcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96dcd: call 0xf7167c */
  esp -= 4; W32(esp, 0xf96dd2u); SPILL(); f_f7167c(); if (g_unwind) return; RELOAD();
/* f96dd2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96dd5: mov esi, edi */
  esi = edi;
/* f96dd7: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f96dda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f96de0: /* f96de0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f96de3: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f96de6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96de8: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* f96deb: ja 0xf96e00 */
  if ((!cf && !zf)) goto L_f96e00;
L_f96ded: /* f96ded: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96dee: call 0xf96590 */
  esp -= 4; W32(esp, 0xf96df3u); SPILL(); f_f96590(); if (g_unwind) return; RELOAD();
/* f96df3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96df6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96df8: jle 0xf96de0 */
  if ((zf || sf != of)) goto L_f96de0;
L_f96dfa: /* f96dfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f96e00: /* f96e00: sub ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f96e03: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96e05: jbe 0xf96e19 */
  if ((cf | zf)) goto L_f96e19;
L_f96e07: /* f96e07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96e08: mov esi, ebx */
  esi = ebx;
/* f96e0a: call 0xf96590 */
  esp -= 4; W32(esp, 0xf96e0fu); SPILL(); f_f96590(); if (g_unwind) return; RELOAD();
/* f96e0f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* f96e12: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96e15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96e17: jge 0xf96e00 */
  if ((sf == of)) goto L_f96e00;
L_f96e19: /* f96e19: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96e1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96e1c: jbe 0xf96ec2 */
  if ((cf | zf)) goto L_f96ec2;
L_f96e22: /* f96e22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96e23: call 0xf7167c */
  esp -= 4; W32(esp, 0xf96e28u); SPILL(); f_f7167c(); if (g_unwind) return; RELOAD();
/* f96e28: mov esi, ebx */
  esi = ebx;
/* f96e2a: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f96e2c: sub esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f96e2f: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* f96e34: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* f96e36: mov ecx, edx */
  ecx = edx;
/* f96e38: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f96e3a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* f96e3d: sar ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f96e40: mov edx, ecx */
  edx = ecx;
/* f96e42: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* f96e45: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f96e47: sub esi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f96e4a: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* f96e4f: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* f96e51: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f96e53: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f96e56: mov eax, edx */
  eax = edx;
/* f96e58: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* f96e5b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f96e5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96e60: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f96e62: jl 0xf96e8d */
  if ((sf != of)) goto L_f96e8d;
L_f96e64: /* f96e64: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* f96e67: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f96e69: jae 0xf96e7c */
  if (!cf) goto L_f96e7c;
L_f96e6b: /* f96e6b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f96e6e: add ebx, -0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffe4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f96e71: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* f96e73: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f96e76: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f96e79: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_f96e7c: /* f96e7c: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* f96e7f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f96e82: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96e84: jbe 0xf96eb7 */
  if ((cf | zf)) goto L_f96eb7;
L_f96e86: /* f96e86: mov ebx, eax */
  ebx = eax;
/* f96e88: jmp 0xf96d60 */
  goto L_f96d60;
L_f96e8d: /* f96e8d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f96e90: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f96e93: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96e95: jbe 0xf96ea5 */
  if ((cf | zf)) goto L_f96ea5;
L_f96e97: /* f96e97: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f96e9a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f96e9c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f96e9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f96ea2: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_f96ea5: /* f96ea5: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* f96ea8: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f96eaa: jae 0xf96eb7 */
  if (!cf) goto L_f96eb7;
L_f96eac: /* f96eac: add ebx, -0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffe4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f96eaf: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f96eb2: jmp 0xf96d60 */
  goto L_f96d60;
L_f96eb7: /* f96eb7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f96eba: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f96ebd: jmp 0xf96d42 */
  goto L_f96d42;
L_f96ec2: /* f96ec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f96ec3: call 0xf7167c */
  esp -= 4; W32(esp, 0xf96ec8u); SPILL(); f_f7167c(); if (g_unwind) return; RELOAD();
/* f96ec8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96ecb: jmp 0xf96de0 */
  goto L_f96de0;
L_f96f00: /* f96f00: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f96f03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f96f04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f96f05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f96f0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f96f0d: mov esp, ebp */
  esp = ebp;
/* f96f0f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f96f10: ret  */
  esp += 4; SPILL(); return;
}

void f_f96d5d(void) {
  LOAD_REGS();
  goto L_f96d5d;
L_f96d42: /* f96d42: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* f96d48: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f96d4a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f96d4d: jb 0xf96f00 */
  if (cf) goto L_f96f00;
L_f96d53: /* f96d53: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* f96d56: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* f96d58: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f96d5b: jmp 0xf96d60 */
  goto L_f96d60;
L_f96d5d: /* f96d5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f96d60: /* f96d60: mov ecx, ebx */
  ecx = ebx;
/* f96d62: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f96d64: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* f96d69: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* f96d6b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f96d6d: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f96d70: mov eax, edx */
  eax = edx;
/* f96d72: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* f96d75: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* f96d79: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f96d7c: jg 0xf96dc1 */
  if ((!zf && sf == of)) goto L_f96dc1;
L_f96d7e: /* f96d7e: mov edi, edi */
  edi = edi;
L_f96d80: /* f96d80: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96d82: jbe 0xf96eb7 */
  if ((cf | zf)) goto L_f96eb7;
L_f96d88: /* f96d88: mov eax, edi */
  eax = edi;
/* f96d8a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f96d8d: lea esi, [edi + 0x1c] */
  esi = (uint32_t)(edi + 0x1cu);
L_f96d90: /* f96d90: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96d92: ja 0xf96daf */
  if ((!cf && !zf)) goto L_f96daf;
L_f96d94: /* f96d94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96d95: call 0xf96590 */
  esp -= 4; W32(esp, 0xf96d9au); SPILL(); f_f96590(); if (g_unwind) return; RELOAD();
/* f96d9a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96d9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96d9f: jle 0xf96da4 */
  if ((zf || sf != of)) goto L_f96da4;
L_f96da1: /* f96da1: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_f96da4: /* f96da4: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* f96da7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f96daa: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f96dad: jmp 0xf96d90 */
  goto L_f96d90;
L_f96daf: /* f96daf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96db1: call 0xf7167c */
  esp -= 4; W32(esp, 0xf96db6u); SPILL(); f_f7167c(); if (g_unwind) return; RELOAD();
/* f96db6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96db9: sub ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f96dbc: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f96dbf: jmp 0xf96d80 */
  goto L_f96d80;
L_f96dc1: /* f96dc1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f96dc2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f96dc4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f96dc6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* f96dc9: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f96dcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96dcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96dcd: call 0xf7167c */
  esp -= 4; W32(esp, 0xf96dd2u); SPILL(); f_f7167c(); if (g_unwind) return; RELOAD();
/* f96dd2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96dd5: mov esi, edi */
  esi = edi;
/* f96dd7: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f96dda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f96de0: /* f96de0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f96de3: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f96de6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96de8: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* f96deb: ja 0xf96e00 */
  if ((!cf && !zf)) goto L_f96e00;
L_f96ded: /* f96ded: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96dee: call 0xf96590 */
  esp -= 4; W32(esp, 0xf96df3u); SPILL(); f_f96590(); if (g_unwind) return; RELOAD();
/* f96df3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96df6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96df8: jle 0xf96de0 */
  if ((zf || sf != of)) goto L_f96de0;
L_f96dfa: /* f96dfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f96e00: /* f96e00: sub ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* f96e03: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96e05: jbe 0xf96e19 */
  if ((cf | zf)) goto L_f96e19;
L_f96e07: /* f96e07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96e08: mov esi, ebx */
  esi = ebx;
/* f96e0a: call 0xf96590 */
  esp -= 4; W32(esp, 0xf96e0fu); SPILL(); f_f96590(); if (g_unwind) return; RELOAD();
/* f96e0f: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* f96e12: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96e15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f96e17: jge 0xf96e00 */
  if ((sf == of)) goto L_f96e00;
L_f96e19: /* f96e19: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96e1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96e1c: jbe 0xf96ec2 */
  if ((cf | zf)) goto L_f96ec2;
L_f96e22: /* f96e22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96e23: call 0xf7167c */
  esp -= 4; W32(esp, 0xf96e28u); SPILL(); f_f7167c(); if (g_unwind) return; RELOAD();
/* f96e28: mov esi, ebx */
  esi = ebx;
/* f96e2a: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f96e2c: sub esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f96e2f: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* f96e34: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* f96e36: mov ecx, edx */
  ecx = edx;
/* f96e38: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f96e3a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* f96e3d: sar ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* f96e40: mov edx, ecx */
  edx = ecx;
/* f96e42: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* f96e45: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f96e47: sub esi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* f96e4a: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* f96e4f: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* f96e51: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f96e53: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* f96e56: mov eax, edx */
  eax = edx;
/* f96e58: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* f96e5b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f96e5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96e60: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f96e62: jl 0xf96e8d */
  if ((sf != of)) goto L_f96e8d;
L_f96e64: /* f96e64: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* f96e67: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f96e69: jae 0xf96e7c */
  if (!cf) goto L_f96e7c;
L_f96e6b: /* f96e6b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f96e6e: add ebx, -0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffe4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f96e71: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* f96e73: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* f96e76: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f96e79: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_f96e7c: /* f96e7c: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* f96e7f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f96e82: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96e84: jbe 0xf96eb7 */
  if ((cf | zf)) goto L_f96eb7;
L_f96e86: /* f96e86: mov ebx, eax */
  ebx = eax;
/* f96e88: jmp 0xf96d60 */
  goto L_f96d60;
L_f96e8d: /* f96e8d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f96e90: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f96e93: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f96e95: jbe 0xf96ea5 */
  if ((cf | zf)) goto L_f96ea5;
L_f96e97: /* f96e97: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f96e9a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f96e9c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f96e9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f96ea2: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_f96ea5: /* f96ea5: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* f96ea8: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f96eaa: jae 0xf96eb7 */
  if (!cf) goto L_f96eb7;
L_f96eac: /* f96eac: add ebx, -0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffe4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f96eaf: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* f96eb2: jmp 0xf96d60 */
  goto L_f96d60;
L_f96eb7: /* f96eb7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f96eba: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f96ebd: jmp 0xf96d42 */
  goto L_f96d42;
L_f96ec2: /* f96ec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f96ec3: call 0xf7167c */
  esp -= 4; W32(esp, 0xf96ec8u); SPILL(); f_f7167c(); if (g_unwind) return; RELOAD();
/* f96ec8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96ecb: jmp 0xf96de0 */
  goto L_f96de0;
L_f96f00: /* f96f00: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f96f03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f96f04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f96f05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f96f0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f96f0d: mov esp, ebp */
  esp = ebp;
/* f96f0f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f96f10: ret  */
  esp += 4; SPILL(); return;
}

void f_f96ed0(void) {
  LOAD_REGS();
L_f96ed0: /* f96ed0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f96ed3: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f96ed8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* f96edb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f96edc: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* f96edf: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf96ee4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f96ee4(); return;
}

void f_f96ee4(void) {
  LOAD_REGS();
L_f96ee4: /* f96ee4: push 0xfa5a30 */
  { uint32_t v = 0xfa5a30u; esp -= 4; W32(esp, v); }
/* f96ee9: push 0xfb9e58 */
  { uint32_t v = 0xfb9e58u; esp -= 4; W32(esp, v); }
/* f96eee: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf96ef4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f96ef4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f96ef7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96ef9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96efb: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf96f00u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f96f00: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f96f03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f96f04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f96f05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f96f0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f96f0d: mov esp, ebp */
  esp = ebp;
/* f96f0f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f96f10: ret  */
  esp += 4; SPILL(); return;
}

void f_f96fb0(void) {
  LOAD_REGS();
L_f96fb0: /* f96fb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f96fb1: mov ebp, esp */
  ebp = esp;
/* f96fb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f96fb5: push 0xf9aa80 */
  { uint32_t v = 0xf9aa80u; esp -= 4; W32(esp, v); }
/* f96fba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f96fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96fc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f96fc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f96fcb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f96fce: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f96fd1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f96fd2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f96fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f96fd4: mov esi, ecx */
  esi = ecx;
/* f96fd6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f96fd9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f96fdc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f96fdd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f96fe0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f96fe7: jne 0xf96ffe */
  if (!zf) goto L_f96ffe;
L_f96fe9: /* f96fe9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f96fec: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f96fed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f96fef: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f96ff2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f96ff3: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f96ff8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf96ffeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f96ffe: /* f96ffe: mov ecx, dword ptr [esi + 0x218] */
  ecx = R32((uint32_t)(esi + 0x218u));
/* f97004: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97006: je 0xf97017 */
  if (zf) goto L_f97017;
L_f97008: /* f97008: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f9700a: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xf9700du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9700d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f9700f: mov dword ptr [0xfba520], esi */
  W32((uint32_t)(0xfba520u), esi);
/* f97015: je 0xf97021 */
  if (zf) goto L_f97021;
L_f97017: /* f97017: mov dword ptr [0xfba520], 0 */
  W32((uint32_t)(0xfba520u), 0x0u);
L_f97021: /* f97021: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* f97027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f97028: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* f9702e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9702f: call 0xf71b31 */
  esp -= 4; W32(esp, 0xf97034u); SPILL(); f_f71b31(); if (g_unwind) return; RELOAD();
/* f97034: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f97037: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9703a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9703b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9703c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f97043: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f97044: mov esp, ebp */
  esp = ebp;
/* f97046: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f97047: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f9704a(void) {
  LOAD_REGS();
L_f9704a: /* f9704a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f9704d: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f97052: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f97055: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f97056: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f97059: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9705eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f9705e(); return;
}

void f_f9705e(void) {
  LOAD_REGS();
L_f9705e: /* f9705e: push 0xfa5a3c */
  { uint32_t v = 0xfa5a3cu; esp -= 4; W32(esp, v); }
/* f97063: push 0xfb9bec */
  { uint32_t v = 0xfb9becu; esp -= 4; W32(esp, v); }
/* f97068: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf9706eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f9706e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f97071: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f97073: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f97075: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9707au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f9707a: guest_badaddr(0xf9707a); return;
}

void f_f970c0(void) {
  LOAD_REGS();
L_f970c0: /* f970c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f970c1: mov ebp, esp */
  ebp = esp;
/* f970c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f970c5: push 0xf9aab4 */
  { uint32_t v = 0xf9aab4u; esp -= 4; W32(esp, v); }
/* f970ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f970d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f970d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f970d8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f970db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f970dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f970dd: mov esi, ecx */
  esi = ecx;
/* f970df: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f970e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f970e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f970e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f970ee: je 0xf97467 */
  if (zf) goto L_f97467;
L_f970f4: /* f970f4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f970f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f970f8: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf970fdu); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f970fd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f970ff: mov ecx, esi */
  ecx = esi;
/* f97101: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf97107u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97107: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f9710a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9710d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9710f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f97112: mov ecx, esi */
  ecx = esi;
/* f97114: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf97117u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97117: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f9711a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9711d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f9711f: mov ecx, esi */
  ecx = esi;
/* f97121: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f97124: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf9712au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9712a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f9712d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f97130: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f97132: mov ecx, esi */
  ecx = esi;
/* f97134: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f97137: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf9713au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9713a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f9713d: fld dword ptr [esi + 0x1e4] */
  { double v = F32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f97143: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f97146: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f9714c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f9714f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f97151: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f97154: jne 0xf97212 */
  if (!zf) goto L_f97212;
L_f9715a: /* f9715a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9715d: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f97163: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f97165: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f97168: jne 0xf97212 */
  if (!zf) goto L_f97212;
L_f9716e: /* f9716e: fld dword ptr [esi + 0x1e4] */
  { double v = F32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f97174: fcom qword ptr [0xfa5aa0] */
  fpu_com(ST0, F64((uint32_t)(0xfa5aa0u)));
/* f9717a: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f9717d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9717f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f97182: jp 0xf9718a */
  if (pf) goto L_f9718a;
L_f97184: /* f97184: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* f97187: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
L_f9718a: /* f9718a: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* f9718d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9718f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f97192: jne 0xf9719a */
  if (!zf) goto L_f9719a;
L_f97194: /* f97194: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f97197: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_f9719a: /* f9719a: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f9719d: lea edx, [esi + 0x1f8] */
  edx = (uint32_t)(esi + 0x1f8u);
/* f971a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f971a4: call 0xf716bd */
  esp -= 4; W32(esp, 0xf971a9u); SPILL(); f_f716bd(); if (g_unwind) return; RELOAD();
/* f971a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f971ab: je 0xf971bb */
  if (zf) goto L_f971bb;
L_f971ad: /* f971ad: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* f971b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f971b1: mov ecx, eax */
  ecx = eax;
/* f971b3: call 0xf71a14 */
  esp -= 4; W32(esp, 0xf971b8u); SPILL(); f_f71a14(); if (g_unwind) return; RELOAD();
/* f971b8: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
L_f971bb: /* f971bb: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* f971c1: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf971c7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f971c7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f971ca: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f971cd: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f971d0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f971d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f971d3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f971d6: push 0xfba148 */
  { uint32_t v = 0xfba148u; esp -= 4; W32(esp, v); }
/* f971db: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f971de: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f971e1: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f971e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f971e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f971e8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f971eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f971ec: xor eax, eax */
  eax = 0;
/* f971ee: mov al, byte ptr [esi + 0x1e8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1e8u))) & 0xffu);
/* f971f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f971f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f971f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f971f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f971f8: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf971feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f971fe: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f97201: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f97204: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f97207: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9720a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f9720d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f97210: jmp 0xf97215 */
  goto L_f97215;
L_f97212: /* f97212: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_f97215: /* f97215: test byte ptr [esi + 0x218], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x218u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9721c: je 0xf9738c */
  if (zf) goto L_f9738c;
L_f97222: /* f97222: fld dword ptr [esi + 0x214] */
  { double v = F32((uint32_t)(esi + 0x214u)); FPUSH(v); }
/* f97228: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f9722e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f97230: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f97233: jne 0xf9738c */
  if (!zf) goto L_f9738c;
L_f97239: /* f97239: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9723c: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f97242: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f97244: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f97247: jne 0xf9738c */
  if (!zf) goto L_f9738c;
L_f9724d: /* f9724d: mov edx, dword ptr [esi + 0x214] */
  edx = R32((uint32_t)(esi + 0x214u));
/* f97253: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f97256: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f97259: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf9725fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f9725f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f97262: fcomp qword ptr [0xfa5aa0] */
  fpu_com(ST0, F64((uint32_t)(0xfa5aa0u)));
  FPOP();
/* f97268: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f9726c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9726e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f97271: jp 0xf9727c */
  if (pf) goto L_f9727c;
L_f97273: /* f97273: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f97276: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* f97279: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_f9727c: /* f9727c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f9727f: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* f97282: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f97284: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f97287: jne 0xf9728f */
  if (!zf) goto L_f9728f;
L_f97289: /* f97289: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f9728c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_f9728f: /* f9728f: mov ecx, dword ptr [esi + 0x218] */
  ecx = R32((uint32_t)(esi + 0x218u));
/* f97295: mov eax, ecx */
  eax = ecx;
/* f97297: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* f9729a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* f9729d: je 0xf972d2 */
  if (zf) goto L_f972d2;
L_f9729f: /* f9729f: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f972a2: je 0xf972d2 */
  if (zf) goto L_f972d2;
L_f972a4: /* f972a4: fld dword ptr [esi + 0x1dc] */
  { double v = F32((uint32_t)(esi + 0x1dcu)); FPUSH(v); }
/* f972aa: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f972ad: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f972b1: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f972b4: fld dword ptr [esi + 0x1e0] */
  { double v = F32((uint32_t)(esi + 0x1e0u)); FPUSH(v); }
/* f972ba: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* f972bd: push 0xfba150 */
  { uint32_t v = 0xfba150u; esp -= 4; W32(esp, v); }
/* f972c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f972c3: call dword ptr [0xfce404] */
  esp -= 4; W32(esp, 0xf972c9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* f972c9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f972cc: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* f972d0: jmp 0xf97319 */
  goto L_f97319;
L_f972d2: /* f972d2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f972d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f972d7: je 0xf972fa */
  if (zf) goto L_f972fa;
L_f972d9: /* f972d9: fld dword ptr [esi + 0x1e0] */
  { double v = F32((uint32_t)(esi + 0x1e0u)); FPUSH(v); }
/* f972df: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* f972e2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* f972e5: push 0xfba168 */
  { uint32_t v = 0xfba168u; esp -= 4; W32(esp, v); }
/* f972ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f972eb: call dword ptr [0xfce404] */
  esp -= 4; W32(esp, 0xf972f1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* f972f1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f972f4: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* f972f8: jmp 0xf97319 */
  goto L_f97319;
L_f972fa: /* f972fa: fld dword ptr [esi + 0x1dc] */
  { double v = F32((uint32_t)(esi + 0x1dcu)); FPUSH(v); }
/* f97300: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* f97303: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* f97306: push 0xfba174 */
  { uint32_t v = 0xfba174u; esp -= 4; W32(esp, v); }
/* f9730b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9730c: call dword ptr [0xfce404] */
  esp -= 4; W32(esp, 0xf97312u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* f97312: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f97315: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
L_f97319: /* f97319: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f9731c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9731d: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf97323u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f97323: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* f97326: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f9732a: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf97330u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f97330: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f97333: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf97339u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f97339: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9733c: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f9733f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f97341: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f97342: push 0xfba180 */
  { uint32_t v = 0xfba180u; esp -= 4; W32(esp, v); }
/* f97347: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f9734a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9734b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* f9734e: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f97351: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f97354: xor eax, eax */
  eax = 0;
/* f97356: mov al, byte ptr [esi + 0x1e9] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1e9u))) & 0xffu);
/* f9735c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9735f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f97360: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* f97363: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97364: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f97367: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f97368: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9736b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9736c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f9736d: call dword ptr [ecx + 0xac] */
  { uint32_t t = R32((uint32_t)(ecx + 0xacu)); esp -= 4; W32(esp, 0xf97373u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97373: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f97376: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f97379: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f9737c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f9737f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f97383: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f97386: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf9738cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_f9738c: /* f9738c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9738f: fcomp dword ptr [esi + 0x210] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x210u)));
  FPOP();
/* f97395: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f97397: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9739a: jne 0xf973ba */
  if (!zf) goto L_f973ba;
L_f9739c: /* f9739c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f9739f: fsub dword ptr [esi + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x210u)));
/* f973a5: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f973a8: fld dword ptr [esi + 0x210] */
  { double v = F32((uint32_t)(esi + 0x210u)); FPUSH(v); }
/* f973ae: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f973b4: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f973b7: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_f973ba: /* f973ba: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f973bd: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* f973bf: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f973c5: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
/* f973c8: mov byte ptr [ebp - 0x1b], al */
  W8((uint32_t)(ebp + 0xffffffe5u), (eax & 0xffu));
/* f973cb: mov byte ptr [ebp - 0x1a], al */
  W8((uint32_t)(ebp + 0xffffffe6u), (eax & 0xffu));
/* f973ce: mov byte ptr [ebp - 0x19], al */
  W8((uint32_t)(ebp + 0xffffffe7u), (eax & 0xffu));
/* f973d1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f973d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f973d6: mov dword ptr [edi + 0x58], ecx */
  W32((uint32_t)(edi + 0x58u), ecx);
/* f973d9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f973dc: jne 0xf97400 */
  if (!zf) goto L_f97400;
L_f973de: /* f973de: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f973e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f973e6: je 0xf97400 */
  if (zf) goto L_f97400;
L_f973e8: /* f973e8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f973eb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f973ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f973ee: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f973f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f973f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f973f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f973f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f973f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f973f8: mov ecx, edi */
  ecx = edi;
/* f973fa: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf97400u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f97400: /* f97400: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f97403: fcomp qword ptr [0xfa5480] */
  fpu_com(ST0, F64((uint32_t)(0xfa5480u)));
  FPOP();
/* f97409: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f9740b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9740e: jne 0xf97467 */
  if (!zf) goto L_f97467;
L_f97410: /* f97410: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* f97416: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97418: je 0xf97467 */
  if (zf) goto L_f97467;
L_f9741a: /* f9741a: fld dword ptr [esi + 0x1e0] */
  { double v = F32((uint32_t)(esi + 0x1e0u)); FPUSH(v); }
/* f97420: fcomp dword ptr [esi + 0x1d8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x1d8u)));
  FPOP();
/* f97426: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f97428: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9742b: jne 0xf97467 */
  if (!zf) goto L_f97467;
L_f9742d: /* f9742d: mov byte ptr [edi + 0x50], 1 */
  W8((uint32_t)(edi + 0x50u), 0x1u);
/* f97431: mov edx, dword ptr [esi + 0x1d4] */
  edx = R32((uint32_t)(esi + 0x1d4u));
/* f97437: mov dword ptr [edi + 0x58], edx */
  W32((uint32_t)(edi + 0x58u), edx);
/* f9743a: fld dword ptr [esi + 0x1e0] */
  { double v = F32((uint32_t)(esi + 0x1e0u)); FPUSH(v); }
/* f97440: fdiv dword ptr [esi + 0x1dc] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x1dcu)));
/* f97446: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f97449: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f9744c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f9744e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9744f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f97450: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* f97456: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* f97459: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f9745c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f9745d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f9745e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9745f: mov ecx, edi */
  ecx = edi;
/* f97461: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xf97467u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f97467: /* f97467: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f9746a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f9746b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f9746c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f97473: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f97474: mov esp, ebp */
  esp = ebp;
/* f97476: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f97477: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f9747a(void) {
  LOAD_REGS();
L_f9747a: /* f9747a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f9747d: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f97482: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* f97485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f97486: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* f97489: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf9748eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f9748e(); return;
}

void f_f9748e(void) {
  LOAD_REGS();
L_f9748e: /* f9748e: push 0xfa5a6c */
  { uint32_t v = 0xfa5a6cu; esp -= 4; W32(esp, v); }
/* f97493: push 0xfba188 */
  { uint32_t v = 0xfba188u; esp -= 4; W32(esp, v); }
/* f97498: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf9749eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f9749e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f974a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f974a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f974a5: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf974aau); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f974aa: guest_badaddr(0xf974aa); return;
}

void f_f975ac(void) {
  LOAD_REGS();
L_f975ac: /* f975ac: jmp dword ptr [0xfce314] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_f975b2(void) {
  LOAD_REGS();
L_f975b2: /* f975b2: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f975b8(void) {
  LOAD_REGS();
L_f975b8: /* f975b8: jmp dword ptr [0xfce320] */
  SPILL(); f_4e3fc1(); return; /* Core!??0FString@@QAE@ABV0@@Z */
}

void f_f975be(void) {
  LOAD_REGS();
L_f975be: /* f975be: jmp dword ptr [0xfce324] */
  SPILL(); f_4e438b(); return; /* Core!?Remove@FArray@@QAEXHHH@Z */
}

void f_f975c4(void) {
  LOAD_REGS();
L_f975c4: /* f975c4: jmp dword ptr [0xfce328] */
  SPILL(); f_4e33a5(); return; /* Core!?appFailAssert@@YAXPBD0H@Z */
}

void f_f975ca(void) {
  LOAD_REGS();
L_f975ca: /* f975ca: jmp dword ptr [0xfce32c] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_f975d0(void) {
  LOAD_REGS();
L_f975d0: /* f975d0: jmp dword ptr [0xfce330] */
  SPILL(); f_4e2955(); return; /* Core!?Add@FArray@@QAEHHH@Z */
}

void f_f975d6(void) {
  LOAD_REGS();
L_f975d6: /* f975d6: jmp dword ptr [0xfce334] */
  SPILL(); f_4e2aea(); return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */
}

void f_f975dc(void) {
  LOAD_REGS();
L_f975dc: /* f975dc: jmp dword ptr [0xfce338] */
  SPILL(); f_4e2b1c(); return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */
}

void f_f975e2(void) {
  LOAD_REGS();
L_f975e2: /* f975e2: jmp dword ptr [0xfce340] */
  SPILL(); f_4e2d01(); return; /* Core!??0FString@@QAE@XZ */
}

void f_f975e8(void) {
  LOAD_REGS();
L_f975e8: /* f975e8: jmp dword ptr [0xfce344] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_f975ee(void) {
  LOAD_REGS();
L_f975ee: /* f975ee: jmp dword ptr [0xfce348] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_f975f4(void) {
  LOAD_REGS();
L_f975f4: /* f975f4: jmp dword ptr [0xfce34c] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_f975fa(void) {
  LOAD_REGS();
L_f975fa: /* f975fa: jmp dword ptr [0xfce350] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_f97600(void) {
  LOAD_REGS();
L_f97600: /* f97600: jmp dword ptr [0xfce354] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_f97606(void) {
  LOAD_REGS();
L_f97606: /* f97606: jmp dword ptr [0xfce358] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_f9760c(void) {
  LOAD_REGS();
L_f9760c: /* f9760c: jmp dword ptr [0xfce35c] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_f97612(void) {
  LOAD_REGS();
L_f97612: /* f97612: jmp dword ptr [0xfce360] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_f97618(void) {
  LOAD_REGS();
L_f97618: /* f97618: jmp dword ptr [0xfce364] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_f9761e(void) {
  LOAD_REGS();
L_f9761e: /* f9761e: jmp dword ptr [0xfce368] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_f97624(void) {
  LOAD_REGS();
L_f97624: /* f97624: jmp dword ptr [0xfce36c] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_f9762a(void) {
  LOAD_REGS();
L_f9762a: /* f9762a: jmp dword ptr [0xfce370] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_f97630(void) {
  LOAD_REGS();
L_f97630: /* f97630: jmp dword ptr [0xfce374] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_f97636(void) {
  LOAD_REGS();
L_f97636: /* f97636: jmp dword ptr [0xfce378] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_f9763c(void) {
  LOAD_REGS();
L_f9763c: /* f9763c: jmp dword ptr [0xfce37c] */
  SPILL(); f_4e1519(); return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */
}

void f_f97642(void) {
  LOAD_REGS();
L_f97642: /* f97642: jmp dword ptr [0xfce380] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_f97648(void) {
  LOAD_REGS();
L_f97648: /* f97648: jmp dword ptr [0xfce384] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_f9764e(void) {
  LOAD_REGS();
L_f9764e: /* f9764e: jmp dword ptr [0xfce388] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_f97654(void) {
  LOAD_REGS();
L_f97654: /* f97654: jmp dword ptr [0xfce38c] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_f9765a(void) {
  LOAD_REGS();
L_f9765a: /* f9765a: jmp dword ptr [0xfce390] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_f97660(void) {
  LOAD_REGS();
L_f97660: /* f97660: jmp dword ptr [0xfce394] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_f97666(void) {
  LOAD_REGS();
L_f97666: /* f97666: jmp dword ptr [0xfce398] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_f9766c(void) {
  LOAD_REGS();
L_f9766c: /* f9766c: jmp dword ptr [0xfce39c] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_f97672(void) {
  LOAD_REGS();
L_f97672: /* f97672: jmp dword ptr [0xfce3a0] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_f97678(void) {
  LOAD_REGS();
L_f97678: /* f97678: jmp dword ptr [0xfce3a4] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_f9767e(void) {
  LOAD_REGS();
L_f9767e: /* f9767e: jmp dword ptr [0xfce3a8] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_f97684(void) {
  LOAD_REGS();
L_f97684: /* f97684: jmp dword ptr [0xfce3ac] */
  SPILL(); f_4e2559(); return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */
}

void f_f9768a(void) {
  LOAD_REGS();
L_f9768a: /* f9768a: jmp dword ptr [0xfce3b0] */
  SPILL(); f_4e245a(); return; /* Core!??0UObject@@QAE@XZ */
}

void f_f97690(void) {
  LOAD_REGS();
L_f97690: /* f97690: jmp dword ptr [0xfce3b4] */
  SPILL(); f_4e1078(); return; /* Core!??0UObject@@QAE@ABV0@@Z */
}

void f_f97696(void) {
  LOAD_REGS();
L_f97696: /* f97696: jmp dword ptr [0xfce3b8] */
  SPILL(); f_4e1c67(); return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */
}

void f_f9769c(void) {
  LOAD_REGS();
L_f9769c: /* f9769c: jmp dword ptr [0xfce3bc] */
  SPILL(); f_4e3fb2(); return; /* Core!??3UObject@@SAXPAXI@Z */
}

void f_f976a2(void) {
  LOAD_REGS();
L_f976a2: /* f976a2: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f976a8(void) {
  LOAD_REGS();
L_f976a8: /* f976a8: jmp dword ptr [0xfce3c4] */
  SPILL(); f_4e3b7a(); return; /* Core!??0FStringNoInit@@QAE@XZ */
}

void f_f976ae(void) {
  LOAD_REGS();
L_f976ae: /* f976ae: jmp dword ptr [0xfce3c8] */
  SPILL(); f_4e3729(); return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */
}

void f_f976b4(void) {
  LOAD_REGS();
L_f976b4: /* f976b4: jmp dword ptr [0xfce3cc] */
  SPILL(); f_4e132f(); return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */
}

void f_f976ba(void) {
  LOAD_REGS();
L_f976ba: /* f976ba: jmp dword ptr [0xfce3d0] */
  SPILL(); f_4e1d20(); return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */
}

void f_f976c0(void) {
  LOAD_REGS();
L_f976c0: /* f976c0: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f976c6(void) {
  LOAD_REGS();
L_f976c6: /* f976c6: jmp dword ptr [0xfce3d8] */
  SPILL(); f_4e298c(); return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */
}

void f_f976cc(void) {
  LOAD_REGS();
L_f976cc: /* f976cc: jmp dword ptr [0xfce3e0] */
  SPILL(); f_4e3f49(); return; /* Core!?appUnwindf@@YAXPBGZZ */
}

void f_f976d2(void) {
  LOAD_REGS();
L_f976d2: /* f976d2: jmp dword ptr [0xfce3e8] */
  SPILL(); f_4e26df(); return; /* Core!?appStricmp@@YAHPBG0@Z */
}

void f_f976d8(void) {
  LOAD_REGS();
L_f976d8: /* f976d8: jmp dword ptr [0xfce3ec] */
  SPILL(); f_4e1037(); return; /* Core!??DFString@@QBEPBGXZ */
}

void f_f976de(void) {
  LOAD_REGS();
L_f976de: /* f976de: jmp dword ptr [0xfce3f0] */
  SPILL(); f_4e33b4(); return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */
}

void f_f976e4(void) {
  LOAD_REGS();
L_f976e4: /* f976e4: jmp dword ptr [0xfce3f4] */
  SPILL(); f_4e1a2d(); return; /* Core!?Insert@FArray@@QAEXHHH@Z */
}

void f_f976ea(void) {
  LOAD_REGS();
L_f976ea: /* f976ea: jmp dword ptr [0xfce400] */
  SPILL(); f_4e1898(); return; /* Core!?ResetConfig@UObject@@SAXPAVUClass@@@Z */
}

void f_f976f0(void) {
  LOAD_REGS();
L_f976f0: /* f976f0: jmp dword ptr [0xfce404] */
  SPILL(); f_4e17e4(); return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */
}

void f_f976f6(void) {
  LOAD_REGS();
L_f976f6: /* f976f6: jmp dword ptr [0xfce408] */
  SPILL(); f_4e3e5e(); return; /* Core!??4FString@@QAEAAV0@PBG@Z */
}

void f_f976fc(void) {
  LOAD_REGS();
L_f976fc: /* f976fc: jmp dword ptr [0xfce40c] */
  SPILL(); f_4e3b43(); return; /* Core!??8FString@@QBEHABV0@@Z */
}

void f_f97702(void) {
  LOAD_REGS();
L_f97702: /* f97702: jmp dword ptr [0xfce410] */
  SPILL(); f_4e15eb(); return; /* Core!?appClipboardCopy@@YAXPBG@Z */
}

void f_f97708(void) {
  LOAD_REGS();
L_f97708: /* f97708: jmp dword ptr [0xfce414] */
  SPILL(); f_4e2d4c(); return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */
}

void f_f9770e(void) {
  LOAD_REGS();
L_f9770e: /* f9770e: jmp dword ptr [0xfce41c] */
  SPILL(); f_4e2351(); return; /* Core!?GetName@UObject@@QBEPBGXZ */
}

void f_f97714(void) {
  LOAD_REGS();
L_f97714: /* f97714: jmp dword ptr [0xfce420] */
  SPILL(); f_4e302b(); return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */
}

void f_f9771a(void) {
  LOAD_REGS();
L_f9771a: /* f9771a: jmp dword ptr [0xfce424] */
  SPILL(); f_4e392c(); return; /* Core!?appFloor@@YAHM@Z */
}

void f_f97720(void) {
  LOAD_REGS();
L_f97720: /* f97720: jmp dword ptr [0xfce42c] */
  SPILL(); f_4e2577(); return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */
}

void f_f97726(void) {
  LOAD_REGS();
L_f97726: /* f97726: jmp dword ptr [0xfce430] */
  SPILL(); f_4e13de(); return; /* Core!??0FString@@QAE@PBG@Z */
}

void f_f9772c(void) {
  LOAD_REGS();
L_f9772c: /* f9772c: jmp dword ptr [0xfce434] */
  SPILL(); f_4e27a2(); return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */
}

void f_f97732(void) {
  LOAD_REGS();
L_f97732: /* f97732: jmp dword ptr [0xfce438] */
  SPILL(); f_4e30df(); return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */
}

void f_f97738(void) {
  LOAD_REGS();
L_f97738: /* f97738: jmp dword ptr [0xfce43c] */
  SPILL(); f_4e15aa(); return; /* Core!?appRound@@YAHM@Z */
}

void f_f9773e(void) {
  LOAD_REGS();
L_f9773e: /* f9773e: jmp dword ptr [0xfce440] */
  SPILL(); f_4e180c(); return; /* Core!??YFString@@QAEAAV0@PBG@Z */
}

void f_f97744(void) {
  LOAD_REGS();
L_f97744: /* f97744: jmp dword ptr [0xfce444] */
  SPILL(); f_4e35cb(); return; /* Core!?appItoa@@YAPAGH@Z */
}

void f_f9774a(void) {
  LOAD_REGS();
L_f9774a: /* f9774a: jmp dword ptr [0xfce448] */
  SPILL(); f_4e4390(); return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */
}

void f_f97750(void) {
  LOAD_REGS();
L_f97750: /* f97750: jmp dword ptr [0xfce44c] */
  SPILL(); f_4e42f0(); return; /* Core!?Left@FString@@QBE?AV1@H@Z */
}

void f_f97756(void) {
  LOAD_REGS();
L_f97756: /* f97756: jmp dword ptr [0xfce454] */
  SPILL(); f_4e35ad(); return; /* Core!?appStrcat@@YAPAGPAGPBG@Z */
}

void f_f9775c(void) {
  LOAD_REGS();
L_f9775c: /* f9775c: jmp dword ptr [0xfce458] */
  SPILL(); f_4e2220(); return; /* Core!?appStrstr@@YAPAGPBG0@Z */
}

void f_f97762(void) {
  LOAD_REGS();
L_f97762: /* f97762: jmp dword ptr [0xfce464] */
  SPILL(); f_4e4183(); return; /* Core!?appSprintf@@YAHPAGPBGZZ */
}

void f_f97768(void) {
  LOAD_REGS();
L_f97768: /* f97768: jmp dword ptr [0xfce468] */
  SPILL(); f_4e3792(); return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */
}

void f_f9776e(void) {
  LOAD_REGS();
L_f9776e: /* f9776e: jmp dword ptr [0xfce46c] */
  SPILL(); f_4e4282(); return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */
}

void f_f97774(void) {
  LOAD_REGS();
L_f97774: /* f97774: jmp dword ptr [0xfce470] */
  SPILL(); f_4e276b(); return; /* Core!??9FString@@QBEHABV0@@Z */
}

void f_f9777a(void) {
  LOAD_REGS();
L_f9777a: /* f9777a: jmp dword ptr [0xfce474] */
  SPILL(); f_4e13d9(); return; /* Core!??0FString@@QAE@PBD@Z */
}

void f_f97780(void) {
  LOAD_REGS();
L_f97780: /* f97780: jmp dword ptr [0xfce478] */
  SPILL(); f_4e353f(); return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */
}

void f_f97786(void) {
  LOAD_REGS();
L_f97786: /* f97786: jmp dword ptr [0xfce47c] */
  SPILL(); f_4e1735(); return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */
}

void f_f9778c(void) {
  LOAD_REGS();
L_f9778c: /* f9778c: jmp dword ptr [0xfce484] */
  SPILL(); f_4e3f3f(); return; /* Core!?StaticConstructor@UObject@@QAEXXZ */
}

void f_f97792(void) {
  LOAD_REGS();
L_f97792: /* f97792: jmp dword ptr [0xfce488] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_f97798(void) {
  LOAD_REGS();
L_f97798: /* f97798: jmp dword ptr [0xfce504] */
  SPILL(); f_6cb5fa(); return; /* Engine!??0FColor@@QAE@XZ */
}

void f_f9779e(void) {
  LOAD_REGS();
L_f9779e: /* f9779e: jmp dword ptr [0xfce508] */
  SPILL(); f_6c26a8(); return; /* Engine!??4UBaseGUIController@@QAEAAV0@ABV0@@Z */
}

void f_f977a4(void) {
  LOAD_REGS();
L_f977a4: /* f977a4: jmp dword ptr [0xfce50c] */
  SPILL(); f_6c40ca(); return; /* Engine!?InitializeController@UBaseGUIController@@UAEXXZ */
}

void f_f977aa(void) {
  LOAD_REGS();
L_f977aa: /* f977aa: jmp dword ptr [0xfce510] */
  SPILL(); f_6c5d99(); return; /* Engine!??1UBaseGUIController@@UAE@XZ */
}

void f_f977b0(void) {
  LOAD_REGS();
L_f977b0: /* f977b0: jmp dword ptr [0xfce514] */
  SPILL(); f_6cbdf7(); return; /* Engine!??0UInteractions@@IAE@XZ */
}

void f_f977b6(void) {
  LOAD_REGS();
L_f977b6: /* f977b6: jmp dword ptr [0xfce518] */
  SPILL(); f_6cbbd6(); return; /* Engine!??0UBaseGUIController@@QAE@ABV0@@Z */
}

void f_f977bc(void) {
  LOAD_REGS();
L_f977bc: /* f977bc: jmp dword ptr [0xfce528] */
  SPILL(); f_6c3044(); return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */
}

void f_f977c2(void) {
  LOAD_REGS();
L_f977c2: /* f977c2: jmp dword ptr [0xfce52c] */
  SPILL(); f_6c4566(); return; /* Engine!?RemapChar@UFont@@QAEGG@Z */
}

void f_f977c8(void) {
  LOAD_REGS();
L_f977c8: /* f977c8: jmp dword ptr [0xfce530] */
  SPILL(); f_6c3e7c(); return; /* Engine!?Plane@FColor@@QBE?AVFPlane@@XZ */
}

void f_f977e0(void) {
  LOAD_REGS();
L_f977e0: /* f977e0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f977e2: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f977e8: je 0xf977ed */
  if (zf) goto L_f977ed;
L_f977ea: /* f977ea: xor eax, eax */
  eax = 0;
/* f977ec: ret  */
  esp += 4; SPILL(); return;
L_f977ed: /* f977ed: jmp 0xf97be4 */
  SPILL(); f_f97be4(); return;
}

void f_f977f2(void) {
  LOAD_REGS();
L_f977f2: /* f977f2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* f977f4: push 0xfa5ab0 */
  { uint32_t v = 0xfa5ab0u; esp -= 4; W32(esp, v); }
/* f977f9: call 0xf97bec */
  esp -= 4; W32(esp, 0xf977feu); SPILL(); f_f97bec(); if (g_unwind) return; RELOAD();
/* f977fe: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_f97802: /* f97802: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* f97805: js 0xf97815 */
  if (sf) goto L_f97815;
L_f97807: /* f97807: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9780a: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f9780d: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* f97810: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xf97813u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97813: jmp 0xf97802 */
  goto L_f97802;
L_f97815: /* f97815: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97819: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf9781eu); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f9781e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f97821(void) {
  LOAD_REGS();
L_f97821: /* f97821: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f97824: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f97827: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f9782a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f9782c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f9782f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f97832: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97838: je 0xf9784a */
  if (zf) goto L_f9784a;
L_f9783a: /* f9783a: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* f97841: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f97844: ret  */
  esp += 4; SPILL(); return;
L_f9784a: /* f9784a: call 0xf97be4 */
  esp -= 4; W32(esp, 0xf9784fu); SPILL(); f_f97be4(); if (g_unwind) return; RELOAD();
L_f9784f: guest_badaddr(0xf9784f); return;
}

void f_f97845(void) {
  LOAD_REGS();
  goto L_f97845;
L_f97815: /* f97815: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97819: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf9781eu); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f9781e: ret 0x10 */
  esp += 20; SPILL(); return;
L_f97845: /* f97845: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* f97848: jmp 0xf97815 */
  goto L_f97815;
}

void f_f97850(void) {
  LOAD_REGS();
L_f97850: /* f97850: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f97852: push 0xfa5ac0 */
  { uint32_t v = 0xfa5ac0u; esp -= 4; W32(esp, v); }
/* f97857: call 0xf97bec */
  esp -= 4; W32(esp, 0xf9785cu); SPILL(); f_f97bec(); if (g_unwind) return; RELOAD();
/* f9785c: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f97860: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* f97863: mov eax, esi */
  eax = esi;
/* f97865: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* f97869: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f9786c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_f97870: /* f97870: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* f97873: js 0xf97880 */
  if (sf) goto L_f97880;
L_f97875: /* f97875: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f97878: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f9787b: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xf9787eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9787e: jmp 0xf97870 */
  goto L_f97870;
L_f97880: /* f97880: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* f97887: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f9788b: call 0xf97898 */
  esp -= 4; W32(esp, 0xf97890u); SPILL(); f_f97898(); if (g_unwind) return; RELOAD();
/* f97890: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf97895u); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f97895: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f97898(void) {
  LOAD_REGS();
L_f97898: /* f97898: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f9789c: jne 0xf978af */
  if (!zf) goto L_f978af;
L_f9789e: /* f9789e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* f978a1: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* f978a4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* f978a7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* f978aa: call 0xf977f2 */
  esp -= 4; W32(esp, 0xf978afu); SPILL(); f_f977f2(); if (g_unwind) return; RELOAD();
L_f978af: /* f978af: ret  */
  esp += 4; SPILL(); return;
}

void f_f978b0(void) {
  LOAD_REGS();
L_f978b0: /* f978b0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f978b2: push 0xfa5ad0 */
  { uint32_t v = 0xfa5ad0u; esp -= 4; W32(esp, v); }
/* f978b7: call 0xf97bec */
  esp -= 4; W32(esp, 0xf978bcu); SPILL(); f_f97bec(); if (g_unwind) return; RELOAD();
/* f978bc: xor eax, eax */
  eax = 0;
/* f978be: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f978c1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* f978c4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_f978c7: /* f978c7: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f978ca: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f978cd: jge 0xf978e2 */
  if ((sf == of)) goto L_f978e2;
L_f978cf: /* f978cf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f978d2: mov ecx, esi */
  ecx = esi;
/* f978d4: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xf978d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f978d7: add esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f978da: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* f978dd: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* f978e0: jmp 0xf978c7 */
  goto L_f978c7;
L_f978e2: /* f978e2: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* f978e9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f978ed: call 0xf978fa */
  esp -= 4; W32(esp, 0xf978f2u); SPILL(); f_f978fa(); if (g_unwind) return; RELOAD();
/* f978f2: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf978f7u); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f978f7: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_f978fa(void) {
  LOAD_REGS();
L_f978fa: /* f978fa: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f978fe: jne 0xf97911 */
  if (!zf) goto L_f97911;
L_f97900: /* f97900: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* f97903: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* f97906: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* f97909: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* f9790c: call 0xf977f2 */
  esp -= 4; W32(esp, 0xf97911u); SPILL(); f_f977f2(); if (g_unwind) return; RELOAD();
L_f97911: /* f97911: ret  */
  esp += 4; SPILL(); return;
}

void f_f97912(void) {
  LOAD_REGS();
L_f97912: /* f97912: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f97914: push 0xfa5ae0 */
  { uint32_t v = 0xfa5ae0u; esp -= 4; W32(esp, v); }
/* f97919: call 0xf97bec */
  esp -= 4; W32(esp, 0xf9791eu); SPILL(); f_f97bec(); if (g_unwind) return; RELOAD();
/* f9791e: xor eax, eax */
  eax = 0;
/* f97920: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f97923: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* f97926: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_f97929: /* f97929: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f9792c: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f9792f: jge 0xf97948 */
  if ((sf == of)) goto L_f97948;
L_f97931: /* f97931: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* f97934: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f97937: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0xf9793au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f9793a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f9793d: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* f97940: add dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* f97943: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* f97946: jmp 0xf97929 */
  goto L_f97929;
L_f97948: /* f97948: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* f9794f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97953: call 0xf97960 */
  esp -= 4; W32(esp, 0xf97958u); SPILL(); f_f97960(); if (g_unwind) return; RELOAD();
/* f97958: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf9795du); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f9795d: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_f97960(void) {
  LOAD_REGS();
L_f97960: /* f97960: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97964: jne 0xf97977 */
  if (!zf) goto L_f97977;
L_f97966: /* f97966: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* f97969: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* f9796c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* f9796f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* f97972: call 0xf977f2 */
  esp -= 4; W32(esp, 0xf97977u); SPILL(); f_f977f2(); if (g_unwind) return; RELOAD();
L_f97977: /* f97977: ret  */
  esp += 4; SPILL(); return;
}

void f_f97978(void) {
  LOAD_REGS();
L_f97978: /* f97978: mov eax, ecx */
  eax = ecx;
/* f9797a: mov dword ptr [eax], 0xfa5af0 */
  W32((uint32_t)(eax), 0xfa5af0u);
/* f97980: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f97983(void) {
  LOAD_REGS();
L_f97983: /* f97983: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97984: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f97988: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f9798b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9798c: mov esi, ecx */
  esi = ecx;
/* f9798e: je 0xf979b4 */
  if (zf) goto L_f979b4;
L_f97990: /* f97990: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97991: push 0xf97c38 */
  { uint32_t v = 0xf97c38u; esp -= 4; W32(esp, v); }
/* f97996: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f97999: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* f9799b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f9799d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f9799e: call 0xf97850 */
  esp -= 4; W32(esp, 0xf979a3u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f979a3: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f979a6: je 0xf979af */
  if (zf) goto L_f979af;
L_f979a8: /* f979a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f979a9: call 0xf7162c */
  esp -= 4; W32(esp, 0xf979aeu); SPILL(); f_f7162c(); if (g_unwind) return; RELOAD();
/* f979ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f979af: /* f979af: mov eax, edi */
  eax = edi;
/* f979b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f979b2: jmp 0xf979c9 */
  goto L_f979c9;
L_f979b4: /* f979b4: mov ecx, esi */
  ecx = esi;
/* f979b6: call 0xf97c38 */
  esp -= 4; W32(esp, 0xf979bbu); SPILL(); f_f97c38(); if (g_unwind) return; RELOAD();
/* f979bb: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f979be: je 0xf979c7 */
  if (zf) goto L_f979c7;
L_f979c0: /* f979c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f979c1: call 0xf7162c */
  esp -= 4; W32(esp, 0xf979c6u); SPILL(); f_f7162c(); if (g_unwind) return; RELOAD();
/* f979c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f979c7: /* f979c7: mov eax, esi */
  eax = esi;
L_f979c9: /* f979c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f979ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f979cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f979ce(void) {
  LOAD_REGS();
L_f979ce: /* f979ce: mov eax, ecx */
  eax = ecx;
/* f979d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f979d4(void) {
  LOAD_REGS();
L_f979d4: /* f979d4: jmp dword ptr [0xfce574] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_f979dc(void) {
  LOAD_REGS();
L_f979dc: /* f979dc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f979dd: mov ebp, esp */
  ebp = esp;
/* f979df: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f979e2: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* f979e5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* f979e7: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* f979eb: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* f979ef: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* f979f3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* f979f7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f979fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f979fd: je 0xf97a3b */
  if (zf) goto L_f97a3b;
L_f979ff: /* f979ff: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* f97a01: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* f97a03: jns 0xf97a23 */
  if (!sf) goto L_f97a23;
L_f97a05: /* f97a05: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f97a08: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* f97a0b: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f97a11: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* f97a17: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* f97a1a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f97a1e: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* f97a21: jmp 0xf97a4f */
  goto L_f97a4f;
L_f97a23: /* f97a23: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f97a26: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* f97a29: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* f97a2f: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* f97a32: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f97a36: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* f97a39: jmp 0xf97a4f */
  goto L_f97a4f;
L_f97a3b: /* f97a3b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f97a3f: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97a45: jne 0xf979ff */
  if (!zf) goto L_f979ff;
L_f97a47: /* f97a47: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* f97a4b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_f97a4f: /* f97a4f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* f97a50: ret  */
  esp += 4; SPILL(); return;
}

void f_f97a51(void) {
  LOAD_REGS();
L_f97a51: /* f97a51: cmp dword ptr [0xfcd0d0], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfcd0d0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97a58: jne 0xf97a60 */
  if (!zf) goto L_f97a60;
L_f97a5a: /* f97a5a: jmp dword ptr [0xfce584] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_f97a60: /* f97a60: push 0xfcd0c0 */
  { uint32_t v = 0xfcd0c0u; esp -= 4; W32(esp, v); }
/* f97a65: push 0xfcd0d0 */
  { uint32_t v = 0xfcd0d0u; esp -= 4; W32(esp, v); }
/* f97a6a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* f97a6e: call 0xf97c3e */
  esp -= 4; W32(esp, 0xf97a73u); SPILL(); f_f97c3e(); if (g_unwind) return; RELOAD();
/* f97a73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f97a76: ret  */
  esp += 4; SPILL(); return;
}

void f_f97a77(void) {
  LOAD_REGS();
L_f97a77: /* f97a77: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* f97a7b: call 0xf97a51 */
  esp -= 4; W32(esp, 0xf97a80u); SPILL(); f_f97a51(); if (g_unwind) return; RELOAD();
/* f97a80: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* f97a82: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* f97a84: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* f97a86: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f97a87: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f97a88: ret  */
  esp += 4; SPILL(); return;
}

void f_f97a89(void) {
  LOAD_REGS();
L_f97a89: /* f97a89: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f97a8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97a8f: jne 0xf97a9f */
  if (!zf) goto L_f97a9f;
L_f97a91: /* f97a91: cmp dword ptr [0xfcd0a4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfcd0a4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f97a97: jle 0xf97ac7 */
  if ((zf || sf != of)) goto L_f97ac7;
L_f97a99: /* f97a99: dec dword ptr [0xfcd0a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfcd0a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xfcd0a4u), r);
  }
L_f97a9f: /* f97a9f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97aa2: mov ecx, dword ptr [0xfce594] */
  ecx = R32((uint32_t)(0xfce594u));
/* f97aa8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f97aaa: mov dword ptr [0xfcd0a8], ecx */
  W32((uint32_t)(0xfcd0a8u), ecx);
/* f97ab0: jne 0xf97b01 */
  if (!zf) goto L_f97b01;
L_f97ab2: /* f97ab2: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* f97ab7: call dword ptr [0xfce590] */
  esp -= 4; W32(esp, 0xf97abdu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* f97abd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97abf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f97ac0: mov dword ptr [0xfcd0d0], eax */
  W32((uint32_t)(0xfcd0d0u), eax);
/* f97ac5: jne 0xf97acb */
  if (!zf) goto L_f97acb;
L_f97ac7: /* f97ac7: xor eax, eax */
  eax = 0;
/* f97ac9: jmp 0xf97b44 */
  goto L_f97b44;
L_f97acb: /* f97acb: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* f97ace: mov eax, dword ptr [0xfcd0d0] */
  eax = R32((uint32_t)(0xfcd0d0u));
/* f97ad3: mov dword ptr [0xfcd0c0], eax */
  W32((uint32_t)(0xfcd0c0u), eax);
/* f97ad8: call 0xf97c50 */
  esp -= 4; W32(esp, 0xf97addu); SPILL(); f_f97c50(); if (g_unwind) return; RELOAD();
/* f97add: push 0xf97c94 */
  { uint32_t v = 0xf97c94u; esp -= 4; W32(esp, v); }
/* f97ae2: call 0xf97a77 */
  esp -= 4; W32(esp, 0xf97ae7u); SPILL(); f_f97a77(); if (g_unwind) return; RELOAD();
/* f97ae7: mov dword ptr [esp], 0xfb844c */
  W32((uint32_t)(esp), 0xfb844cu);
/* f97aee: push 0xfb8000 */
  { uint32_t v = 0xfb8000u; esp -= 4; W32(esp, v); }
/* f97af3: call 0xf97c4a */
  esp -= 4; W32(esp, 0xf97af8u); SPILL(); f_f97c4a(); if (g_unwind) return; RELOAD();
/* f97af8: inc dword ptr [0xfcd0a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfcd0a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xfcd0a4u), r);
  }
/* f97afe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f97aff: jmp 0xf97b40 */
  goto L_f97b40;
L_f97b01: /* f97b01: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97b03: jne 0xf97b41 */
  if (!zf) goto L_f97b41;
L_f97b05: /* f97b05: mov eax, dword ptr [0xfcd0d0] */
  eax = R32((uint32_t)(0xfcd0d0u));
/* f97b0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97b0c: je 0xf97b41 */
  if (zf) goto L_f97b41;
L_f97b0e: /* f97b0e: jmp 0xf97b23 */
  goto L_f97b23;
L_f97b10: /* f97b10: mov ecx, dword ptr [0xfcd0c0] */
  ecx = R32((uint32_t)(0xfcd0c0u));
/* f97b16: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f97b18: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97b1a: je 0xf97b23 */
  if (zf) goto L_f97b23;
L_f97b1c: /* f97b1c: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xf97b1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97b1e: mov eax, dword ptr [0xfcd0d0] */
  eax = R32((uint32_t)(0xfcd0d0u));
L_f97b23: /* f97b23: sub dword ptr [0xfcd0c0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfcd0c0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xfcd0c0u), r);
  }
/* f97b2a: cmp dword ptr [0xfcd0c0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfcd0c0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f97b30: jae 0xf97b10 */
  if (!cf) goto L_f97b10;
L_f97b32: /* f97b32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f97b33: call dword ptr [0xfce588] */
  esp -= 4; W32(esp, 0xf97b39u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* f97b39: and dword ptr [0xfcd0d0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfcd0d0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xfcd0d0u), r);
  }
L_f97b40: /* f97b40: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_f97b41: /* f97b41: xor eax, eax */
  eax = 0;
/* f97b43: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_f97b44: /* f97b44: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f97b47(void) {
  LOAD_REGS();
L_f97b47: /* f97b47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f97b48: mov ebp, esp */
  ebp = esp;
/* f97b4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97b4b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f97b4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f97b4f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* f97b52: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97b54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97b55: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* f97b58: jne 0xf97b63 */
  if (!zf) goto L_f97b63;
L_f97b5a: /* f97b5a: cmp dword ptr [0xfcd0a4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfcd0a4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97b61: jmp 0xf97b89 */
  goto L_f97b89;
L_f97b63: /* f97b63: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97b66: je 0xf97b6d */
  if (zf) goto L_f97b6d;
L_f97b68: /* f97b68: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97b6b: jne 0xf97b8f */
  if (!zf) goto L_f97b8f;
L_f97b6d: /* f97b6d: mov eax, dword ptr [0xfcd0b4] */
  eax = R32((uint32_t)(0xfcd0b4u));
/* f97b72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97b74: je 0xf97b7f */
  if (zf) goto L_f97b7f;
L_f97b76: /* f97b76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97b77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f97b78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97b79: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf97b7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97b7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97b7d: je 0xf97b8b */
  if (zf) goto L_f97b8b;
L_f97b7f: /* f97b7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97b80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f97b81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97b82: call 0xf97a89 */
  esp -= 4; W32(esp, 0xf97b87u); SPILL(); f_f97a89(); if (g_unwind) return; RELOAD();
/* f97b87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_f97b89: /* f97b89: jne 0xf97b8f */
  if (!zf) goto L_f97b8f;
L_f97b8b: /* f97b8b: xor eax, eax */
  eax = 0;
/* f97b8d: jmp 0xf97bdd */
  goto L_f97bdd;
L_f97b8f: /* f97b8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f97b91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97b92: call 0xf7139d */
  esp -= 4; W32(esp, 0xf97b97u); SPILL(); f_f7139d(); if (g_unwind) return; RELOAD();
/* f97b97: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97b9a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f97b9d: jne 0xf97bab */
  if (!zf) goto L_f97bab;
L_f97b9f: /* f97b9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97ba1: jne 0xf97bda */
  if (!zf) goto L_f97bda;
L_f97ba3: /* f97ba3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f97ba5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97ba6: call 0xf97a89 */
  esp -= 4; W32(esp, 0xf97babu); SPILL(); f_f97a89(); if (g_unwind) return; RELOAD();
L_f97bab: /* f97bab: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97bad: je 0xf97bb4 */
  if (zf) goto L_f97bb4;
L_f97baf: /* f97baf: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97bb2: jne 0xf97bda */
  if (!zf) goto L_f97bda;
L_f97bb4: /* f97bb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97bb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f97bb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97bb7: call 0xf97a89 */
  esp -= 4; W32(esp, 0xf97bbcu); SPILL(); f_f97a89(); if (g_unwind) return; RELOAD();
/* f97bbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97bbe: jne 0xf97bc3 */
  if (!zf) goto L_f97bc3;
L_f97bc0: /* f97bc0: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_f97bc3: /* f97bc3: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f97bc7: je 0xf97bda */
  if (zf) goto L_f97bda;
L_f97bc9: /* f97bc9: mov eax, dword ptr [0xfcd0b4] */
  eax = R32((uint32_t)(0xfcd0b4u));
/* f97bce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97bd0: je 0xf97bda */
  if (zf) goto L_f97bda;
L_f97bd2: /* f97bd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97bd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f97bd4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97bd5: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf97bd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97bd7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_f97bda: /* f97bda: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_f97bdd: /* f97bdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f97bde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f97bdf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f97be0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f97be1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f97be4(void) {
  LOAD_REGS();
L_f97be4: /* f97be4: jmp dword ptr [0xfce578] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_f97bec(void) {
  LOAD_REGS();
L_f97bec: /* f97bec: push 0xf97cde */
  { uint32_t v = 0xf97cdeu; esp -= 4; W32(esp, v); }
/* f97bf1: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f97bf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f97bf8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f97bfc: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* f97c00: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* f97c04: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f97c06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f97c07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f97c08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f97c09: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* f97c0c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* f97c0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f97c10: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* f97c13: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* f97c1a: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* f97c1d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* f97c20: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* f97c26: ret  */
  esp += 4; SPILL(); return;
}

void f_f97c27(void) {
  LOAD_REGS();
L_f97c27: /* f97c27: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f97c2a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f97c31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* f97c32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f97c33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f97c34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f97c35: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* f97c36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f97c37: ret  */
  esp += 4; SPILL(); return;
}

void f_f97c38(void) {
  LOAD_REGS();
L_f97c38: /* f97c38: jmp dword ptr [0xfce57c] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_f97c3e(void) {
  LOAD_REGS();
L_f97c3e: /* f97c3e: jmp dword ptr [0xfce580] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_f97c44(void) {
  LOAD_REGS();
L_f97c44: /* f97c44: jmp dword ptr [0xfce588] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_f97c4a(void) {
  LOAD_REGS();
L_f97c4a: /* f97c4a: jmp dword ptr [0xfce58c] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_f97c50(void) {
  LOAD_REGS();
L_f97c50: /* f97c50: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f97c52: push 0xfa5af8 */
  { uint32_t v = 0xfa5af8u; esp -= 4; W32(esp, v); }
/* f97c57: call 0xf97bec */
  esp -= 4; W32(esp, 0xf97c5cu); SPILL(); f_f97bec(); if (g_unwind) return; RELOAD();
/* f97c5c: mov dword ptr [ebp - 0x1c], 0xfa5f88 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfa5f88u);
L_f97c63: /* f97c63: cmp dword ptr [ebp - 0x1c], 0xfa6088 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xfa6088u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f97c6a: jae 0xf97c8e */
  if (!cf) goto L_f97c8e;
L_f97c6c: /* f97c6c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97c70: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f97c73: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f97c75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97c77: je 0xf97c84 */
  if (zf) goto L_f97c84;
L_f97c79: /* f97c79: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf97c7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97c7b: jmp 0xf97c84 */
  goto L_f97c84;
L_f97c84: /* f97c84: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97c88: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f97c8c: jmp 0xf97c63 */
  goto L_f97c63;
L_f97c8e: /* f97c8e: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf97c93u); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f97c93: ret  */
  esp += 4; SPILL(); return;
}

void f_f97c7d(void) {
  LOAD_REGS();
L_f97c7d: /* f97c7d: xor eax, eax */
  eax = 0;
/* f97c7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f97c80: ret  */
  esp += 4; SPILL(); return;
}

void f_f97c81(void) {
  LOAD_REGS();
  goto L_f97c81;
L_f97c63: /* f97c63: cmp dword ptr [ebp - 0x1c], 0xfa6088 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xfa6088u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f97c6a: jae 0xf97c8e */
  if (!cf) goto L_f97c8e;
L_f97c6c: /* f97c6c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97c70: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f97c73: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f97c75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97c77: je 0xf97c84 */
  if (zf) goto L_f97c84;
L_f97c79: /* f97c79: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf97c7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97c7b: jmp 0xf97c84 */
  goto L_f97c84;
L_f97c81: /* f97c81: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_f97c84: /* f97c84: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97c88: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f97c8c: jmp 0xf97c63 */
  goto L_f97c63;
L_f97c8e: /* f97c8e: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf97c93u); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f97c93: ret  */
  esp += 4; SPILL(); return;
}

void f_f97c94(void) {
  LOAD_REGS();
L_f97c94: /* f97c94: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f97c96: push 0xfa5b08 */
  { uint32_t v = 0xfa5b08u; esp -= 4; W32(esp, v); }
/* f97c9b: call 0xf97bec */
  esp -= 4; W32(esp, 0xf97ca0u); SPILL(); f_f97bec(); if (g_unwind) return; RELOAD();
/* f97ca0: mov dword ptr [ebp - 0x1c], 0xfa6190 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfa6190u);
L_f97ca7: /* f97ca7: cmp dword ptr [ebp - 0x1c], 0xfa6290 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xfa6290u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f97cae: jae 0xf97cd2 */
  if (!cf) goto L_f97cd2;
L_f97cb0: /* f97cb0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97cb4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f97cb7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f97cb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97cbb: je 0xf97cc8 */
  if (zf) goto L_f97cc8;
L_f97cbd: /* f97cbd: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf97cbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97cbf: jmp 0xf97cc8 */
  goto L_f97cc8;
L_f97cc8: /* f97cc8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97ccc: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f97cd0: jmp 0xf97ca7 */
  goto L_f97ca7;
L_f97cd2: /* f97cd2: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf97cd7u); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f97cd7: ret  */
  esp += 4; SPILL(); return;
}

void f_f97cc1(void) {
  LOAD_REGS();
L_f97cc1: /* f97cc1: xor eax, eax */
  eax = 0;
/* f97cc3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f97cc4: ret  */
  esp += 4; SPILL(); return;
}

void f_f97cc5(void) {
  LOAD_REGS();
  goto L_f97cc5;
L_f97ca7: /* f97ca7: cmp dword ptr [ebp - 0x1c], 0xfa6290 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xfa6290u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* f97cae: jae 0xf97cd2 */
  if (!cf) goto L_f97cd2;
L_f97cb0: /* f97cb0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97cb4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f97cb7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f97cb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f97cbb: je 0xf97cc8 */
  if (zf) goto L_f97cc8;
L_f97cbd: /* f97cbd: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xf97cbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f97cbf: jmp 0xf97cc8 */
  goto L_f97cc8;
L_f97cc5: /* f97cc5: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_f97cc8: /* f97cc8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* f97ccc: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* f97cd0: jmp 0xf97ca7 */
  goto L_f97ca7;
L_f97cd2: /* f97cd2: call 0xf97c27 */
  esp -= 4; W32(esp, 0xf97cd7u); SPILL(); f_f97c27(); if (g_unwind) return; RELOAD();
/* f97cd7: ret  */
  esp += 4; SPILL(); return;
}

void f_f97cd8(void) {
  LOAD_REGS();
L_f97cd8: /* f97cd8: jmp dword ptr [0xfce590] */
  SPILL(); f_4010eb(); return; /* MSVCR70!malloc */
}

void f_f97cde(void) {
  LOAD_REGS();
L_f97cde: /* f97cde: jmp dword ptr [0xfce598] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_f98800(void) {
  LOAD_REGS();
L_f98800: /* f98800: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98803: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f98809(void) {
  LOAD_REGS();
  goto L_f98809;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98809: /* f98809: mov eax, 0xfa639c */
  eax = 0xfa639cu;
/* f9880e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98820(void) {
  LOAD_REGS();
L_f98820: /* f98820: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98823: jmp dword ptr [0xfce3a8] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_f98829(void) {
  LOAD_REGS();
  goto L_f98829;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98829: /* f98829: mov eax, 0xfa63c4 */
  eax = 0xfa63c4u;
/* f9882e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98840(void) {
  LOAD_REGS();
L_f98840: /* f98840: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98843: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f98848(void) {
  LOAD_REGS();
L_f98848: /* f98848: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9884b: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9884e: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98854(void) {
  LOAD_REGS();
L_f98854: /* f98854: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98857: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9885a: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98860(void) {
  LOAD_REGS();
L_f98860: /* f98860: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98863: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98866: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f9886c(void) {
  LOAD_REGS();
L_f9886c: /* f9886c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9886f: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98872: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98878(void) {
  LOAD_REGS();
  goto L_f98878;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98878: /* f98878: mov eax, 0xfa640c */
  eax = 0xfa640cu;
/* f9887d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f988a0(void) {
  LOAD_REGS();
L_f988a0: /* f988a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f988a3: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f988a8(void) {
  LOAD_REGS();
L_f988a8: /* f988a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f988ab: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f988ae: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f988b4(void) {
  LOAD_REGS();
L_f988b4: /* f988b4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f988b7: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f988ba: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f988c0(void) {
  LOAD_REGS();
L_f988c0: /* f988c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f988c3: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f988c6: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f988cc(void) {
  LOAD_REGS();
  goto L_f988cc;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f988cc: /* f988cc: mov eax, 0xfa6450 */
  eax = 0xfa6450u;
/* f988d1: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f988f0(void) {
  LOAD_REGS();
L_f988f0: /* f988f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f988f3: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f988f8(void) {
  LOAD_REGS();
L_f988f8: /* f988f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f988fb: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f988fe: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98904(void) {
  LOAD_REGS();
L_f98904: /* f98904: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98907: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9890a: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98910(void) {
  LOAD_REGS();
L_f98910: /* f98910: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98913: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98916: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f9891c(void) {
  LOAD_REGS();
  goto L_f9891c;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9891c: /* f9891c: mov eax, 0xfa6494 */
  eax = 0xfa6494u;
/* f98921: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98940(void) {
  LOAD_REGS();
L_f98940: /* f98940: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98943: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98948(void) {
  LOAD_REGS();
L_f98948: /* f98948: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9894b: add ecx, 0x1ec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98951: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98957(void) {
  LOAD_REGS();
L_f98957: /* f98957: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9895a: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98960: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98966(void) {
  LOAD_REGS();
L_f98966: /* f98966: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98969: add ecx, 0x204 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x204u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9896f: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98975(void) {
  LOAD_REGS();
  goto L_f98975;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98975: /* f98975: mov eax, 0xfa64d8 */
  eax = 0xfa64d8u;
/* f9897a: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98990(void) {
  LOAD_REGS();
L_f98990: /* f98990: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98993: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98998(void) {
  LOAD_REGS();
L_f98998: /* f98998: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9899b: add ecx, 0x1ec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f989a1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f989a7(void) {
  LOAD_REGS();
L_f989a7: /* f989a7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f989aa: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f989b0: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f989b6(void) {
  LOAD_REGS();
  goto L_f989b6;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f989b6: /* f989b6: mov eax, 0xfa6514 */
  eax = 0xfa6514u;
/* f989bb: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f989d0(void) {
  LOAD_REGS();
L_f989d0: /* f989d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f989d3: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f989d8(void) {
  LOAD_REGS();
L_f989d8: /* f989d8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f989db: add ecx, 0x1ec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f989e1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f989e7(void) {
  LOAD_REGS();
L_f989e7: /* f989e7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f989ea: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f989f0: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f989f6(void) {
  LOAD_REGS();
  goto L_f989f6;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f989f6: /* f989f6: mov eax, 0xfa6550 */
  eax = 0xfa6550u;
/* f989fb: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98a10(void) {
  LOAD_REGS();
L_f98a10: /* f98a10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98a13: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98a18(void) {
  LOAD_REGS();
  goto L_f98a18;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98a18: /* f98a18: mov eax, 0xfa657c */
  eax = 0xfa657cu;
/* f98a1d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98a30(void) {
  LOAD_REGS();
L_f98a30: /* f98a30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98a33: jmp 0xf71f8c */
  SPILL(); f_f71f8c(); return;
}

void f_f98a38(void) {
  LOAD_REGS();
  goto L_f98a38;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98a38: /* f98a38: mov eax, 0xfa65a4 */
  eax = 0xfa65a4u;
/* f98a3d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98a50(void) {
  LOAD_REGS();
L_f98a50: /* f98a50: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98a53: jmp 0xf71f8c */
  SPILL(); f_f71f8c(); return;
}

void f_f98a58(void) {
  LOAD_REGS();
  goto L_f98a58;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98a58: /* f98a58: mov eax, 0xfa65cc */
  eax = 0xfa65ccu;
/* f98a5d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98a70(void) {
  LOAD_REGS();
L_f98a70: /* f98a70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98a73: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f98a79(void) {
  LOAD_REGS();
  goto L_f98a79;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98a79: /* f98a79: mov eax, 0xfa65f4 */
  eax = 0xfa65f4u;
/* f98a7e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98a90(void) {
  LOAD_REGS();
L_f98a90: /* f98a90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98a93: jmp 0xf71172 */
  SPILL(); f_f71172(); return;
}

void f_f98a98(void) {
  LOAD_REGS();
  goto L_f98a98;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98a98: /* f98a98: mov eax, 0xfa661c */
  eax = 0xfa661cu;
/* f98a9d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98ab0(void) {
  LOAD_REGS();
L_f98ab0: /* f98ab0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98ab3: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f98ab9(void) {
  LOAD_REGS();
  goto L_f98ab9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98ab9: /* f98ab9: mov eax, 0xfa6644 */
  eax = 0xfa6644u;
/* f98abe: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98ad0(void) {
  LOAD_REGS();
L_f98ad0: /* f98ad0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98ad3: jmp 0xf71f8c */
  SPILL(); f_f71f8c(); return;
}

void f_f98ad8(void) {
  LOAD_REGS();
  goto L_f98ad8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98ad8: /* f98ad8: mov eax, 0xfa666c */
  eax = 0xfa666cu;
/* f98add: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98af0(void) {
  LOAD_REGS();
L_f98af0: /* f98af0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98af3: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f98af9(void) {
  LOAD_REGS();
  goto L_f98af9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98af9: /* f98af9: mov eax, 0xfa6694 */
  eax = 0xfa6694u;
/* f98afe: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98b10(void) {
  LOAD_REGS();
L_f98b10: /* f98b10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98b13: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f98b19(void) {
  LOAD_REGS();
  goto L_f98b19;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98b19: /* f98b19: mov eax, 0xfa66bc */
  eax = 0xfa66bcu;
/* f98b1e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98b30(void) {
  LOAD_REGS();
L_f98b30: /* f98b30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98b33: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98b38(void) {
  LOAD_REGS();
L_f98b38: /* f98b38: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98b3b: add ecx, 0x1d4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1d4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98b41: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98b47(void) {
  LOAD_REGS();
  goto L_f98b47;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98b47: /* f98b47: mov eax, 0xfa66ec */
  eax = 0xfa66ecu;
/* f98b4c: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98b60(void) {
  LOAD_REGS();
L_f98b60: /* f98b60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98b63: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98b68(void) {
  LOAD_REGS();
  goto L_f98b68;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98b68: /* f98b68: mov eax, 0xfa6714 */
  eax = 0xfa6714u;
/* f98b6d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98b80(void) {
  LOAD_REGS();
L_f98b80: /* f98b80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98b83: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98b88(void) {
  LOAD_REGS();
  goto L_f98b88;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98b88: /* f98b88: mov eax, 0xfa673c */
  eax = 0xfa673cu;
/* f98b8d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98ba0(void) {
  LOAD_REGS();
L_f98ba0: /* f98ba0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98ba3: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98ba8(void) {
  LOAD_REGS();
L_f98ba8: /* f98ba8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98bab: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98bb1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98bb7(void) {
  LOAD_REGS();
  goto L_f98bb7;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98bb7: /* f98bb7: mov eax, 0xfa676c */
  eax = 0xfa676cu;
/* f98bbc: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98bd0(void) {
  LOAD_REGS();
L_f98bd0: /* f98bd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98bd3: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98bd8(void) {
  LOAD_REGS();
  goto L_f98bd8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98bd8: /* f98bd8: mov eax, 0xfa6794 */
  eax = 0xfa6794u;
/* f98bdd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98bf0(void) {
  LOAD_REGS();
L_f98bf0: /* f98bf0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98bf3: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98bf8(void) {
  LOAD_REGS();
  goto L_f98bf8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98bf8: /* f98bf8: mov eax, 0xfa67bc */
  eax = 0xfa67bcu;
/* f98bfd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98c10(void) {
  LOAD_REGS();
L_f98c10: /* f98c10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98c13: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98c18(void) {
  LOAD_REGS();
L_f98c18: /* f98c18: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98c1b: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98c21: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98c27(void) {
  LOAD_REGS();
  goto L_f98c27;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98c27: /* f98c27: mov eax, 0xfa67ec */
  eax = 0xfa67ecu;
/* f98c2c: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98c40(void) {
  LOAD_REGS();
L_f98c40: /* f98c40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98c43: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98c48(void) {
  LOAD_REGS();
  goto L_f98c48;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98c48: /* f98c48: mov eax, 0xfa6814 */
  eax = 0xfa6814u;
/* f98c4d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98c60(void) {
  LOAD_REGS();
L_f98c60: /* f98c60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98c63: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98c68(void) {
  LOAD_REGS();
  goto L_f98c68;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98c68: /* f98c68: mov eax, 0xfa683c */
  eax = 0xfa683cu;
/* f98c6d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98c80(void) {
  LOAD_REGS();
L_f98c80: /* f98c80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98c83: jmp 0xf71a55 */
  SPILL(); f_f71a55(); return;
}

void f_f98c88(void) {
  LOAD_REGS();
  goto L_f98c88;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98c88: /* f98c88: mov eax, 0xfa6864 */
  eax = 0xfa6864u;
/* f98c8d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98ca0(void) {
  LOAD_REGS();
L_f98ca0: /* f98ca0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98ca3: jmp 0xf71a55 */
  SPILL(); f_f71a55(); return;
}

void f_f98ca8(void) {
  LOAD_REGS();
  goto L_f98ca8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98ca8: /* f98ca8: mov eax, 0xfa688c */
  eax = 0xfa688cu;
/* f98cad: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98cc0(void) {
  LOAD_REGS();
L_f98cc0: /* f98cc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98cc3: jmp 0xf71ef6 */
  SPILL(); f_f71ef6(); return;
}

void f_f98cc8(void) {
  LOAD_REGS();
  goto L_f98cc8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98cc8: /* f98cc8: mov eax, 0xfa68b4 */
  eax = 0xfa68b4u;
/* f98ccd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98ce0(void) {
  LOAD_REGS();
L_f98ce0: /* f98ce0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98ce3: jmp 0xf71ef6 */
  SPILL(); f_f71ef6(); return;
}

void f_f98ce8(void) {
  LOAD_REGS();
  goto L_f98ce8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98ce8: /* f98ce8: mov eax, 0xfa68dc */
  eax = 0xfa68dcu;
/* f98ced: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98d00(void) {
  LOAD_REGS();
L_f98d00: /* f98d00: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98d03: jmp 0xf71ef6 */
  SPILL(); f_f71ef6(); return;
}

void f_f98d08(void) {
  LOAD_REGS();
  goto L_f98d08;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98d08: /* f98d08: mov eax, 0xfa6904 */
  eax = 0xfa6904u;
/* f98d0d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98d20(void) {
  LOAD_REGS();
L_f98d20: /* f98d20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98d23: jmp 0xf71ef6 */
  SPILL(); f_f71ef6(); return;
}

void f_f98d28(void) {
  LOAD_REGS();
  goto L_f98d28;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98d28: /* f98d28: mov eax, 0xfa692c */
  eax = 0xfa692cu;
/* f98d2d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98d40(void) {
  LOAD_REGS();
L_f98d40: /* f98d40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98d43: jmp 0xf71712 */
  SPILL(); f_f71712(); return;
}

void f_f98d48(void) {
  LOAD_REGS();
  goto L_f98d48;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98d48: /* f98d48: mov eax, 0xfa6954 */
  eax = 0xfa6954u;
/* f98d4d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98d60(void) {
  LOAD_REGS();
L_f98d60: /* f98d60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98d63: jmp 0xf71ef6 */
  SPILL(); f_f71ef6(); return;
}

void f_f98d68(void) {
  LOAD_REGS();
  goto L_f98d68;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98d68: /* f98d68: mov eax, 0xfa697c */
  eax = 0xfa697cu;
/* f98d6d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98d80(void) {
  LOAD_REGS();
L_f98d80: /* f98d80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98d83: jmp 0xf71ef6 */
  SPILL(); f_f71ef6(); return;
}

void f_f98d88(void) {
  LOAD_REGS();
  goto L_f98d88;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98d88: /* f98d88: mov eax, 0xfa69a4 */
  eax = 0xfa69a4u;
/* f98d8d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98da0(void) {
  LOAD_REGS();
L_f98da0: /* f98da0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98da3: jmp 0xf71a55 */
  SPILL(); f_f71a55(); return;
}

void f_f98da8(void) {
  LOAD_REGS();
L_f98da8: /* f98da8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98dab: add ecx, 0x1d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98db1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98db7(void) {
  LOAD_REGS();
L_f98db7: /* f98db7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98dba: add ecx, 0x1e4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1e4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98dc0: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98dc6(void) {
  LOAD_REGS();
  goto L_f98dc6;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98dc6: /* f98dc6: mov eax, 0xfa69dc */
  eax = 0xfa69dcu;
/* f98dcb: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98de0(void) {
  LOAD_REGS();
L_f98de0: /* f98de0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98de3: jmp 0xf71a55 */
  SPILL(); f_f71a55(); return;
}

void f_f98de8(void) {
  LOAD_REGS();
L_f98de8: /* f98de8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98deb: add ecx, 0x1d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98df1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98df7(void) {
  LOAD_REGS();
  goto L_f98df7;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98df7: /* f98df7: mov eax, 0xfa6a10 */
  eax = 0xfa6a10u;
/* f98dfc: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98e10(void) {
  LOAD_REGS();
L_f98e10: /* f98e10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98e13: jmp 0xf71a55 */
  SPILL(); f_f71a55(); return;
}

void f_f98e18(void) {
  LOAD_REGS();
L_f98e18: /* f98e18: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98e1b: add ecx, 0x1d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98e21: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98e27(void) {
  LOAD_REGS();
  goto L_f98e27;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98e27: /* f98e27: mov eax, 0xfa6a40 */
  eax = 0xfa6a40u;
/* f98e2c: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98e40(void) {
  LOAD_REGS();
L_f98e40: /* f98e40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98e43: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98e48(void) {
  LOAD_REGS();
  goto L_f98e48;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98e48: /* f98e48: mov eax, 0xfa6a68 */
  eax = 0xfa6a68u;
/* f98e4d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98e60(void) {
  LOAD_REGS();
L_f98e60: /* f98e60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98e63: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98e68(void) {
  LOAD_REGS();
  goto L_f98e68;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98e68: /* f98e68: mov eax, 0xfa6a90 */
  eax = 0xfa6a90u;
/* f98e6d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98e80(void) {
  LOAD_REGS();
L_f98e80: /* f98e80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98e83: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98e88(void) {
  LOAD_REGS();
  goto L_f98e88;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98e88: /* f98e88: mov eax, 0xfa6ab8 */
  eax = 0xfa6ab8u;
/* f98e8d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98ea0(void) {
  LOAD_REGS();
L_f98ea0: /* f98ea0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98ea3: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98ea8(void) {
  LOAD_REGS();
L_f98ea8: /* f98ea8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98eab: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98eb1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98eb7(void) {
  LOAD_REGS();
L_f98eb7: /* f98eb7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98eba: add ecx, 0x1e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98ec0: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98ec6(void) {
  LOAD_REGS();
  goto L_f98ec6;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98ec6: /* f98ec6: mov eax, 0xfa6af0 */
  eax = 0xfa6af0u;
/* f98ecb: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98ee0(void) {
  LOAD_REGS();
L_f98ee0: /* f98ee0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98ee3: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98ee8(void) {
  LOAD_REGS();
L_f98ee8: /* f98ee8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98eeb: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98ef1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98ef7(void) {
  LOAD_REGS();
  goto L_f98ef7;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98ef7: /* f98ef7: mov eax, 0xfa6b24 */
  eax = 0xfa6b24u;
/* f98efc: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98f10(void) {
  LOAD_REGS();
L_f98f10: /* f98f10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98f13: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98f18(void) {
  LOAD_REGS();
L_f98f18: /* f98f18: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98f1b: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98f21: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98f27(void) {
  LOAD_REGS();
  goto L_f98f27;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98f27: /* f98f27: mov eax, 0xfa6b54 */
  eax = 0xfa6b54u;
/* f98f2c: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98f40(void) {
  LOAD_REGS();
L_f98f40: /* f98f40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98f43: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f98f48(void) {
  LOAD_REGS();
  goto L_f98f48;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98f48: /* f98f48: mov eax, 0xfa6b7c */
  eax = 0xfa6b7cu;
/* f98f4d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98f60(void) {
  LOAD_REGS();
L_f98f60: /* f98f60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98f63: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f98f68(void) {
  LOAD_REGS();
L_f98f68: /* f98f68: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98f6b: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98f6e: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98f74(void) {
  LOAD_REGS();
L_f98f74: /* f98f74: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f98f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f98f7a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* f98f7c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f98f7e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98f81: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98f87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f98f88: call 0xf97850 */
  esp -= 4; W32(esp, 0xf98f8du); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f98f8d: ret  */
  esp += 4; SPILL(); return;
}

void f_f98f8e(void) {
  LOAD_REGS();
  goto L_f98f8e;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98f8e: /* f98f8e: mov eax, 0xfa6bb4 */
  eax = 0xfa6bb4u;
/* f98f93: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98fb0(void) {
  LOAD_REGS();
L_f98fb0: /* f98fb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98fb3: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f98fb8(void) {
  LOAD_REGS();
L_f98fb8: /* f98fb8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98fbb: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98fbe: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98fc4(void) {
  LOAD_REGS();
  goto L_f98fc4;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98fc4: /* f98fc4: mov eax, 0xfa6be8 */
  eax = 0xfa6be8u;
/* f98fc9: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f98fe0(void) {
  LOAD_REGS();
L_f98fe0: /* f98fe0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98fe3: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f98fe8(void) {
  LOAD_REGS();
L_f98fe8: /* f98fe8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f98feb: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f98fee: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f98ff4(void) {
  LOAD_REGS();
  goto L_f98ff4;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f98ff4: /* f98ff4: mov eax, 0xfa6c18 */
  eax = 0xfa6c18u;
/* f98ff9: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99010(void) {
  LOAD_REGS();
L_f99010: /* f99010: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99013: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99019(void) {
  LOAD_REGS();
  goto L_f99019;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99019: /* f99019: mov eax, 0xfa6c40 */
  eax = 0xfa6c40u;
/* f9901e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99030(void) {
  LOAD_REGS();
L_f99030: /* f99030: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f99033: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99039(void) {
  LOAD_REGS();
  goto L_f99039;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99039: /* f99039: mov eax, 0xfa6c68 */
  eax = 0xfa6c68u;
/* f9903e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99050(void) {
  LOAD_REGS();
L_f99050: /* f99050: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99053: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99059(void) {
  LOAD_REGS();
  goto L_f99059;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99059: /* f99059: mov eax, 0xfa6c90 */
  eax = 0xfa6c90u;
/* f9905e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99070(void) {
  LOAD_REGS();
L_f99070: /* f99070: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99073: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99079(void) {
  LOAD_REGS();
  goto L_f99079;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99079: /* f99079: mov eax, 0xfa6cb8 */
  eax = 0xfa6cb8u;
/* f9907e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99090(void) {
  LOAD_REGS();
L_f99090: /* f99090: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99093: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99099(void) {
  LOAD_REGS();
  goto L_f99099;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99099: /* f99099: mov eax, 0xfa6ce0 */
  eax = 0xfa6ce0u;
/* f9909e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f990b0(void) {
  LOAD_REGS();
L_f990b0: /* f990b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f990b3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f990b9(void) {
  LOAD_REGS();
  goto L_f990b9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f990b9: /* f990b9: mov eax, 0xfa6d08 */
  eax = 0xfa6d08u;
/* f990be: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f990d0(void) {
  LOAD_REGS();
L_f990d0: /* f990d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f990d3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f990d9(void) {
  LOAD_REGS();
  goto L_f990d9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f990d9: /* f990d9: mov eax, 0xfa6d30 */
  eax = 0xfa6d30u;
/* f990de: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f990f0(void) {
  LOAD_REGS();
L_f990f0: /* f990f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f990f3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f990f9(void) {
  LOAD_REGS();
  goto L_f990f9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f990f9: /* f990f9: mov eax, 0xfa6d58 */
  eax = 0xfa6d58u;
/* f990fe: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99110(void) {
  LOAD_REGS();
L_f99110: /* f99110: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99113: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99119(void) {
  LOAD_REGS();
  goto L_f99119;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99119: /* f99119: mov eax, 0xfa6d80 */
  eax = 0xfa6d80u;
/* f9911e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99130(void) {
  LOAD_REGS();
L_f99130: /* f99130: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99133: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99139(void) {
  LOAD_REGS();
  goto L_f99139;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99139: /* f99139: mov eax, 0xfa6da8 */
  eax = 0xfa6da8u;
/* f9913e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99150(void) {
  LOAD_REGS();
L_f99150: /* f99150: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99153: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99159(void) {
  LOAD_REGS();
  goto L_f99159;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99159: /* f99159: mov eax, 0xfa6dd0 */
  eax = 0xfa6dd0u;
/* f9915e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99170(void) {
  LOAD_REGS();
L_f99170: /* f99170: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99173: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99179(void) {
  LOAD_REGS();
  goto L_f99179;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99179: /* f99179: mov eax, 0xfa6df8 */
  eax = 0xfa6df8u;
/* f9917e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99190(void) {
  LOAD_REGS();
L_f99190: /* f99190: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99193: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99199(void) {
  LOAD_REGS();
  goto L_f99199;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99199: /* f99199: mov eax, 0xfa6e20 */
  eax = 0xfa6e20u;
/* f9919e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f991b0(void) {
  LOAD_REGS();
L_f991b0: /* f991b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f991b3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f991b9(void) {
  LOAD_REGS();
  goto L_f991b9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f991b9: /* f991b9: mov eax, 0xfa6e48 */
  eax = 0xfa6e48u;
/* f991be: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f991d0(void) {
  LOAD_REGS();
L_f991d0: /* f991d0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f991d3: jmp 0xf720e0 */
  SPILL(); f_f720e0(); return;
}

void f_f991d8(void) {
  LOAD_REGS();
  goto L_f991d8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f991d8: /* f991d8: mov eax, 0xfa6e70 */
  eax = 0xfa6e70u;
/* f991dd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f991f0(void) {
  LOAD_REGS();
L_f991f0: /* f991f0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f991f3: jmp 0xf7218a */
  SPILL(); f_f7218a(); return;
}

void f_f991f8(void) {
  LOAD_REGS();
  goto L_f991f8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f991f8: /* f991f8: mov eax, 0xfa6e98 */
  eax = 0xfa6e98u;
/* f991fd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99210(void) {
  LOAD_REGS();
L_f99210: /* f99210: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f99213: jmp 0xf71e8d */
  SPILL(); f_f71e8d(); return;
}

void f_f99218(void) {
  LOAD_REGS();
  goto L_f99218;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99218: /* f99218: mov eax, 0xfa6ec0 */
  eax = 0xfa6ec0u;
/* f9921d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99230(void) {
  LOAD_REGS();
L_f99230: /* f99230: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f99233: jmp 0xf71edd */
  SPILL(); f_f71edd(); return;
}

void f_f99238(void) {
  LOAD_REGS();
L_f99238: /* f99238: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f9923b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f9923e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f99240: je 0xf9924f */
  if (zf) goto L_f9924f;
L_f99246: /* f99246: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* f99249: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_f9924f: /* f9924f: ret  */
  esp += 4; SPILL(); return;
}

void f_f99250(void) {
  LOAD_REGS();
  goto L_f99250;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99250: /* f99250: mov eax, 0xfa6ef0 */
  eax = 0xfa6ef0u;
/* f99255: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99270(void) {
  LOAD_REGS();
L_f99270: /* f99270: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f99273: jmp 0xf71163 */
  SPILL(); f_f71163(); return;
}

void f_f99278(void) {
  LOAD_REGS();
  goto L_f99278;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99278: /* f99278: mov eax, 0xfa6f18 */
  eax = 0xfa6f18u;
/* f9927d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99290(void) {
  LOAD_REGS();
L_f99290: /* f99290: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f99293: jmp 0xf718d4 */
  SPILL(); f_f718d4(); return;
}

void f_f99298(void) {
  LOAD_REGS();
  goto L_f99298;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99298: /* f99298: mov eax, 0xfa6f40 */
  eax = 0xfa6f40u;
/* f9929d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f992b0(void) {
  LOAD_REGS();
L_f992b0: /* f992b0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f992b3: jmp 0xf715ff */
  SPILL(); f_f715ff(); return;
}

void f_f992b8(void) {
  LOAD_REGS();
  goto L_f992b8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f992b8: /* f992b8: mov eax, 0xfa6f68 */
  eax = 0xfa6f68u;
/* f992bd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f992d0(void) {
  LOAD_REGS();
L_f992d0: /* f992d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f992d3: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f992d9(void) {
  LOAD_REGS();
L_f992d9: /* f992d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f992dc: jmp 0xf71172 */
  SPILL(); f_f71172(); return;
}

void f_f992e1(void) {
  LOAD_REGS();
L_f992e1: /* f992e1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f992e4: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f992ea(void) {
  LOAD_REGS();
  goto L_f992ea;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f992ea: /* f992ea: mov eax, 0xfa6fa0 */
  eax = 0xfa6fa0u;
/* f992ef: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99300(void) {
  LOAD_REGS();
L_f99300: /* f99300: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f99303: jmp 0xf72216 */
  SPILL(); f_f72216(); return;
}

void f_f99308(void) {
  LOAD_REGS();
L_f99308: /* f99308: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f9930b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f9930e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f99310: je 0xf9931f */
  if (zf) goto L_f9931f;
L_f99316: /* f99316: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* f99319: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_f9931f: /* f9931f: ret  */
  esp += 4; SPILL(); return;
}

void f_f99320(void) {
  LOAD_REGS();
  goto L_f99320;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99320: /* f99320: mov eax, 0xfa6fd4 */
  eax = 0xfa6fd4u;
/* f99325: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99340(void) {
  LOAD_REGS();
L_f99340: /* f99340: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f99343: jmp 0xf71ad2 */
  SPILL(); f_f71ad2(); return;
}

void f_f99348(void) {
  LOAD_REGS();
  goto L_f99348;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99348: /* f99348: mov eax, 0xfa6ffc */
  eax = 0xfa6ffcu;
/* f9934d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99360(void) {
  LOAD_REGS();
L_f99360: /* f99360: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f99363: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f99369(void) {
  LOAD_REGS();
L_f99369: /* f99369: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f9936c: jmp 0xf71168 */
  SPILL(); f_f71168(); return;
}

void f_f99371(void) {
  LOAD_REGS();
L_f99371: /* f99371: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f99374: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f9937a(void) {
  LOAD_REGS();
  goto L_f9937a;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9937a: /* f9937a: mov eax, 0xfa7034 */
  eax = 0xfa7034u;
/* f9937f: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99390(void) {
  LOAD_REGS();
L_f99390: /* f99390: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f99393: jmp 0xf720a4 */
  SPILL(); f_f720a4(); return;
}

void f_f99398(void) {
  LOAD_REGS();
  goto L_f99398;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99398: /* f99398: mov eax, 0xfa7060 */
  eax = 0xfa7060u;
/* f9939d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f993b0(void) {
  LOAD_REGS();
L_f993b0: /* f993b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f993b3: jmp 0xf713c5 */
  SPILL(); f_f713c5(); return;
}

void f_f993b8(void) {
  LOAD_REGS();
L_f993b8: /* f993b8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f993bb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f993be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f993c0: je 0xf993cf */
  if (zf) goto L_f993cf;
L_f993c6: /* f993c6: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* f993c9: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
L_f993cf: /* f993cf: ret  */
  esp += 4; SPILL(); return;
}

void f_f993d0(void) {
  LOAD_REGS();
  goto L_f993d0;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f993d0: /* f993d0: mov eax, 0xfa7090 */
  eax = 0xfa7090u;
/* f993d5: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f993f0(void) {
  LOAD_REGS();
L_f993f0: /* f993f0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f993f3: jmp 0xf71ad7 */
  SPILL(); f_f71ad7(); return;
}

void f_f993f8(void) {
  LOAD_REGS();
  goto L_f993f8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f993f8: /* f993f8: mov eax, 0xfa70b8 */
  eax = 0xfa70b8u;
/* f993fd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99410(void) {
  LOAD_REGS();
L_f99410: /* f99410: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* f99413: jmp 0xf71acd */
  SPILL(); f_f71acd(); return;
}

void f_f99418(void) {
  LOAD_REGS();
  goto L_f99418;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99418: /* f99418: mov eax, 0xfa70e0 */
  eax = 0xfa70e0u;
/* f9941d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99430(void) {
  LOAD_REGS();
L_f99430: /* f99430: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99433: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99439(void) {
  LOAD_REGS();
  goto L_f99439;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99439: /* f99439: mov eax, 0xfa7108 */
  eax = 0xfa7108u;
/* f9943e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99450(void) {
  LOAD_REGS();
L_f99450: /* f99450: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99453: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99459(void) {
  LOAD_REGS();
  goto L_f99459;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99459: /* f99459: mov eax, 0xfa7130 */
  eax = 0xfa7130u;
/* f9945e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99470(void) {
  LOAD_REGS();
L_f99470: /* f99470: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99473: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99479(void) {
  LOAD_REGS();
  goto L_f99479;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99479: /* f99479: mov eax, 0xfa7158 */
  eax = 0xfa7158u;
/* f9947e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99490(void) {
  LOAD_REGS();
L_f99490: /* f99490: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99493: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99499(void) {
  LOAD_REGS();
  goto L_f99499;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99499: /* f99499: mov eax, 0xfa7180 */
  eax = 0xfa7180u;
/* f9949e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f994b0(void) {
  LOAD_REGS();
L_f994b0: /* f994b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f994b3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f994b9(void) {
  LOAD_REGS();
  goto L_f994b9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f994b9: /* f994b9: mov eax, 0xfa71a8 */
  eax = 0xfa71a8u;
/* f994be: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f994d0(void) {
  LOAD_REGS();
L_f994d0: /* f994d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f994d3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f994d9(void) {
  LOAD_REGS();
  goto L_f994d9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f994d9: /* f994d9: mov eax, 0xfa71d0 */
  eax = 0xfa71d0u;
/* f994de: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f994f0(void) {
  LOAD_REGS();
L_f994f0: /* f994f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f994f3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f994f9(void) {
  LOAD_REGS();
  goto L_f994f9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f994f9: /* f994f9: mov eax, 0xfa71f8 */
  eax = 0xfa71f8u;
/* f994fe: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99510(void) {
  LOAD_REGS();
L_f99510: /* f99510: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99513: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99519(void) {
  LOAD_REGS();
  goto L_f99519;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99519: /* f99519: mov eax, 0xfa7220 */
  eax = 0xfa7220u;
/* f9951e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99530(void) {
  LOAD_REGS();
L_f99530: /* f99530: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99533: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99539(void) {
  LOAD_REGS();
  goto L_f99539;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99539: /* f99539: mov eax, 0xfa7248 */
  eax = 0xfa7248u;
/* f9953e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99550(void) {
  LOAD_REGS();
L_f99550: /* f99550: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99553: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f99559(void) {
  LOAD_REGS();
  goto L_f99559;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99559: /* f99559: mov eax, 0xfa7270 */
  eax = 0xfa7270u;
/* f9955e: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99570(void) {
  LOAD_REGS();
L_f99570: /* f99570: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* f99573: jmp 0xf71172 */
  SPILL(); f_f71172(); return;
}

void f_f99578(void) {
  LOAD_REGS();
L_f99578: /* f99578: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* f9957b: jmp 0xf71172 */
  SPILL(); f_f71172(); return;
}

void f_f99580(void) {
  LOAD_REGS();
L_f99580: /* f99580: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f99583: jmp 0xf715cd */
  SPILL(); f_f715cd(); return;
}

void f_f99588(void) {
  LOAD_REGS();
L_f99588: /* f99588: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f9958b: jmp 0xf71172 */
  SPILL(); f_f71172(); return;
}

void f_f99590(void) {
  LOAD_REGS();
L_f99590: /* f99590: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* f99593: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f99599(void) {
  LOAD_REGS();
L_f99599: /* f99599: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* f9959c: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f995a2(void) {
  LOAD_REGS();
L_f995a2: /* f995a2: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* f995a5: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f995ab(void) {
  LOAD_REGS();
  goto L_f995ab;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f995ab: /* f995ab: mov eax, 0xfa72c8 */
  eax = 0xfa72c8u;
/* f995b0: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f995d0(void) {
  LOAD_REGS();
L_f995d0: /* f995d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f995d3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f995d9(void) {
  LOAD_REGS();
  goto L_f995d9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f995d9: /* f995d9: mov eax, 0xfa72f4 */
  eax = 0xfa72f4u;
/* f995de: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f995f0(void) {
  LOAD_REGS();
L_f995f0: /* f995f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f995f3: jmp dword ptr [0xfce3d4] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_f995f9(void) {
  LOAD_REGS();
  goto L_f995f9;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f995f9: /* f995f9: mov eax, 0xfa731c */
  eax = 0xfa731cu;
/* f995fe: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99610(void) {
  LOAD_REGS();
L_f99610: /* f99610: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99613: jmp dword ptr [0xfce510] */
  SPILL(); f_6c5d99(); return; /* Engine!??1UBaseGUIController@@UAE@XZ */
}

void f_f99619(void) {
  LOAD_REGS();
L_f99619: /* f99619: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9961c: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9961f: jmp 0xf71735 */
  SPILL(); f_f71735(); return;
}

void f_f99624(void) {
  LOAD_REGS();
L_f99624: /* f99624: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99627: add ecx, 0x5c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9962a: jmp 0xf71f0a */
  SPILL(); f_f71f0a(); return;
}

void f_f9962f(void) {
  LOAD_REGS();
L_f9962f: /* f9962f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99632: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99635: jmp 0xf720d6 */
  SPILL(); f_f720d6(); return;
}

void f_f9963a(void) {
  LOAD_REGS();
L_f9963a: /* f9963a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9963d: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99640: jmp 0xf71b81 */
  SPILL(); f_f71b81(); return;
}

void f_f99645(void) {
  LOAD_REGS();
L_f99645: /* f99645: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99648: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9964e: jmp 0xf71c67 */
  SPILL(); f_f71c67(); return;
}

void f_f99653(void) {
  LOAD_REGS();
L_f99653: /* f99653: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99656: add ecx, 0x8c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9965c: jmp 0xf71b4a */
  SPILL(); f_f71b4a(); return;
}

void f_f99661(void) {
  LOAD_REGS();
L_f99661: /* f99661: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99664: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9966a: jmp 0xf71735 */
  SPILL(); f_f71735(); return;
}

void f_f9966f(void) {
  LOAD_REGS();
L_f9966f: /* f9966f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99672: add ecx, 0x118 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99678: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f9967e(void) {
  LOAD_REGS();
L_f9967e: /* f9967e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99681: add ecx, 0x144 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99687: jmp 0xf71b81 */
  SPILL(); f_f71b81(); return;
}

void f_f9968c(void) {
  LOAD_REGS();
  goto L_f9968c;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9968c: /* f9968c: mov eax, 0xfa738c */
  eax = 0xfa738cu;
/* f99691: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f996c0(void) {
  LOAD_REGS();
L_f996c0: /* f996c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f996c3: jmp dword ptr [0xfce510] */
  SPILL(); f_6c5d99(); return; /* Engine!??1UBaseGUIController@@UAE@XZ */
}

void f_f996c9(void) {
  LOAD_REGS();
L_f996c9: /* f996c9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f996cc: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f996cf: jmp 0xf71735 */
  SPILL(); f_f71735(); return;
}

void f_f996d4(void) {
  LOAD_REGS();
L_f996d4: /* f996d4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f996d7: add ecx, 0x5c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f996da: jmp 0xf71f0a */
  SPILL(); f_f71f0a(); return;
}

void f_f996df(void) {
  LOAD_REGS();
L_f996df: /* f996df: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f996e2: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f996e5: jmp 0xf720d6 */
  SPILL(); f_f720d6(); return;
}

void f_f996ea(void) {
  LOAD_REGS();
L_f996ea: /* f996ea: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f996ed: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f996f0: jmp 0xf71b81 */
  SPILL(); f_f71b81(); return;
}

void f_f996f5(void) {
  LOAD_REGS();
L_f996f5: /* f996f5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f996f8: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f996fe: jmp 0xf71c67 */
  SPILL(); f_f71c67(); return;
}

void f_f99703(void) {
  LOAD_REGS();
L_f99703: /* f99703: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99706: add ecx, 0x8c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9970c: jmp 0xf71b4a */
  SPILL(); f_f71b4a(); return;
}

void f_f99711(void) {
  LOAD_REGS();
L_f99711: /* f99711: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99714: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9971a: jmp 0xf71735 */
  SPILL(); f_f71735(); return;
}

void f_f9971f(void) {
  LOAD_REGS();
  goto L_f9971f;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9971f: /* f9971f: mov eax, 0xfa73f4 */
  eax = 0xfa73f4u;
/* f99724: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99750(void) {
  LOAD_REGS();
L_f99750: /* f99750: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99753: jmp dword ptr [0xfce510] */
  SPILL(); f_6c5d99(); return; /* Engine!??1UBaseGUIController@@UAE@XZ */
}

void f_f99759(void) {
  LOAD_REGS();
L_f99759: /* f99759: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9975c: add ecx, 0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9975f: jmp 0xf71735 */
  SPILL(); f_f71735(); return;
}

void f_f99764(void) {
  LOAD_REGS();
L_f99764: /* f99764: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99767: add ecx, 0x5c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9976a: jmp 0xf71f0a */
  SPILL(); f_f71f0a(); return;
}

void f_f9976f(void) {
  LOAD_REGS();
L_f9976f: /* f9976f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99772: add ecx, 0x68 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99775: jmp 0xf720d6 */
  SPILL(); f_f720d6(); return;
}

void f_f9977a(void) {
  LOAD_REGS();
L_f9977a: /* f9977a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9977d: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99780: jmp 0xf71b81 */
  SPILL(); f_f71b81(); return;
}

void f_f99785(void) {
  LOAD_REGS();
L_f99785: /* f99785: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99788: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9978e: jmp 0xf71c67 */
  SPILL(); f_f71c67(); return;
}

void f_f99793(void) {
  LOAD_REGS();
L_f99793: /* f99793: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99796: add ecx, 0x8c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9979c: jmp 0xf71b4a */
  SPILL(); f_f71b4a(); return;
}

void f_f997a1(void) {
  LOAD_REGS();
L_f997a1: /* f997a1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f997a4: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f997aa: jmp 0xf71735 */
  SPILL(); f_f71735(); return;
}

void f_f997af(void) {
  LOAD_REGS();
L_f997af: /* f997af: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f997b2: add ecx, 0x118 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f997b8: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f997be(void) {
  LOAD_REGS();
  goto L_f997be;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f997be: /* f997be: mov eax, 0xfa7464 */
  eax = 0xfa7464u;
/* f997c3: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f997f0(void) {
  LOAD_REGS();
L_f997f0: /* f997f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f997f3: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f997f8(void) {
  LOAD_REGS();
L_f997f8: /* f997f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f997fb: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99801: jmp 0xf7192e */
  SPILL(); f_f7192e(); return;
}

void f_f99806(void) {
  LOAD_REGS();
L_f99806: /* f99806: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99809: add ecx, 0x1d8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9980f: jmp 0xf7192e */
  SPILL(); f_f7192e(); return;
}

void f_f99814(void) {
  LOAD_REGS();
  goto L_f99814;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99814: /* f99814: mov eax, 0xfa74a4 */
  eax = 0xfa74a4u;
/* f99819: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99830(void) {
  LOAD_REGS();
L_f99830: /* f99830: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99833: jmp 0xf71c94 */
  SPILL(); f_f71c94(); return;
}

void f_f99838(void) {
  LOAD_REGS();
L_f99838: /* f99838: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9983b: add ecx, 0x1cc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99841: jmp 0xf7192e */
  SPILL(); f_f7192e(); return;
}

void f_f99846(void) {
  LOAD_REGS();
  goto L_f99846;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99846: /* f99846: mov eax, 0xfa74d8 */
  eax = 0xfa74d8u;
/* f9984b: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99860(void) {
  LOAD_REGS();
L_f99860: /* f99860: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99863: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99868(void) {
  LOAD_REGS();
  goto L_f99868;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99868: /* f99868: mov eax, 0xfa7500 */
  eax = 0xfa7500u;
/* f9986d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99880(void) {
  LOAD_REGS();
L_f99880: /* f99880: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99883: jmp 0xf714f6 */
  SPILL(); f_f714f6(); return;
}

void f_f99888(void) {
  LOAD_REGS();
  goto L_f99888;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99888: /* f99888: mov eax, 0xfa7528 */
  eax = 0xfa7528u;
/* f9988d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f998a0(void) {
  LOAD_REGS();
L_f998a0: /* f998a0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f998a3: jmp 0xf714f6 */
  SPILL(); f_f714f6(); return;
}

void f_f998a8(void) {
  LOAD_REGS();
L_f998a8: /* f998a8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f998ab: add ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f998b1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f998b7(void) {
  LOAD_REGS();
  goto L_f998b7;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f998b7: /* f998b7: mov eax, 0xfa7558 */
  eax = 0xfa7558u;
/* f998bc: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f998d0(void) {
  LOAD_REGS();
L_f998d0: /* f998d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f998d3: jmp 0xf714f6 */
  SPILL(); f_f714f6(); return;
}

void f_f998d8(void) {
  LOAD_REGS();
  goto L_f998d8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f998d8: /* f998d8: mov eax, 0xfa7580 */
  eax = 0xfa7580u;
/* f998dd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f998f0(void) {
  LOAD_REGS();
L_f998f0: /* f998f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f998f3: jmp 0xf714f6 */
  SPILL(); f_f714f6(); return;
}

void f_f998f8(void) {
  LOAD_REGS();
  goto L_f998f8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f998f8: /* f998f8: mov eax, 0xfa75a8 */
  eax = 0xfa75a8u;
/* f998fd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99910(void) {
  LOAD_REGS();
L_f99910: /* f99910: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99913: jmp 0xf714f6 */
  SPILL(); f_f714f6(); return;
}

void f_f99918(void) {
  LOAD_REGS();
  goto L_f99918;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99918: /* f99918: mov eax, 0xfa75d0 */
  eax = 0xfa75d0u;
/* f9991d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99930(void) {
  LOAD_REGS();
L_f99930: /* f99930: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99933: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99938(void) {
  LOAD_REGS();
  goto L_f99938;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99938: /* f99938: mov eax, 0xfa75f8 */
  eax = 0xfa75f8u;
/* f9993d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99950(void) {
  LOAD_REGS();
L_f99950: /* f99950: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99953: jmp 0xf71046 */
  SPILL(); f_f71046(); return;
}

void f_f99958(void) {
  LOAD_REGS();
L_f99958: /* f99958: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f9995d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f9995e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f99960: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f99962: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99965: add ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9996b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f9996c: call 0xf97850 */
  esp -= 4; W32(esp, 0xf99971u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f99971: ret  */
  esp += 4; SPILL(); return;
}

void f_f99972(void) {
  LOAD_REGS();
  goto L_f99972;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99972: /* f99972: mov eax, 0xfa7628 */
  eax = 0xfa7628u;
/* f99977: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99990(void) {
  LOAD_REGS();
L_f99990: /* f99990: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99993: jmp 0xf71046 */
  SPILL(); f_f71046(); return;
}

void f_f99998(void) {
  LOAD_REGS();
  goto L_f99998;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99998: /* f99998: mov eax, 0xfa7650 */
  eax = 0xfa7650u;
/* f9999d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f999b0(void) {
  LOAD_REGS();
L_f999b0: /* f999b0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f999b3: jmp 0xf71046 */
  SPILL(); f_f71046(); return;
}

void f_f999b8(void) {
  LOAD_REGS();
  goto L_f999b8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f999b8: /* f999b8: mov eax, 0xfa7678 */
  eax = 0xfa7678u;
/* f999bd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f999d0(void) {
  LOAD_REGS();
L_f999d0: /* f999d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f999d3: jmp 0xf71046 */
  SPILL(); f_f71046(); return;
}

void f_f999d8(void) {
  LOAD_REGS();
  goto L_f999d8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f999d8: /* f999d8: mov eax, 0xfa76a0 */
  eax = 0xfa76a0u;
/* f999dd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f999f0(void) {
  LOAD_REGS();
L_f999f0: /* f999f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f999f3: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f999f8(void) {
  LOAD_REGS();
L_f999f8: /* f999f8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f999fb: add ecx, 0x1ec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99a01: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99a07(void) {
  LOAD_REGS();
L_f99a07: /* f99a07: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99a0a: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99a10: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99a16(void) {
  LOAD_REGS();
L_f99a16: /* f99a16: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99a19: add ecx, 0x204 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x204u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99a1f: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99a25(void) {
  LOAD_REGS();
  goto L_f99a25;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99a25: /* f99a25: mov eax, 0xfa76e0 */
  eax = 0xfa76e0u;
/* f99a2a: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99a40(void) {
  LOAD_REGS();
L_f99a40: /* f99a40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99a43: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99a48(void) {
  LOAD_REGS();
L_f99a48: /* f99a48: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99a4b: add ecx, 0x1ec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99a51: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99a57(void) {
  LOAD_REGS();
L_f99a57: /* f99a57: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99a5a: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99a60: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99a66(void) {
  LOAD_REGS();
  goto L_f99a66;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99a66: /* f99a66: mov eax, 0xfa771c */
  eax = 0xfa771cu;
/* f99a6b: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99a80(void) {
  LOAD_REGS();
L_f99a80: /* f99a80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99a83: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99a88(void) {
  LOAD_REGS();
L_f99a88: /* f99a88: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99a8b: add ecx, 0x1ec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ecu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99a91: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99a97(void) {
  LOAD_REGS();
L_f99a97: /* f99a97: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99a9a: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99aa0: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99aa6(void) {
  LOAD_REGS();
  goto L_f99aa6;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99aa6: /* f99aa6: mov eax, 0xfa7758 */
  eax = 0xfa7758u;
/* f99aab: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99ac0(void) {
  LOAD_REGS();
L_f99ac0: /* f99ac0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99ac3: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99ac8(void) {
  LOAD_REGS();
L_f99ac8: /* f99ac8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99acb: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99ad1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99ad7(void) {
  LOAD_REGS();
  goto L_f99ad7;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99ad7: /* f99ad7: mov eax, 0xfa778c */
  eax = 0xfa778cu;
/* f99adc: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99af0(void) {
  LOAD_REGS();
L_f99af0: /* f99af0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99af3: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99af8(void) {
  LOAD_REGS();
  goto L_f99af8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99af8: /* f99af8: mov eax, 0xfa77b4 */
  eax = 0xfa77b4u;
/* f99afd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99b10(void) {
  LOAD_REGS();
L_f99b10: /* f99b10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99b13: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99b18(void) {
  LOAD_REGS();
  goto L_f99b18;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99b18: /* f99b18: mov eax, 0xfa77dc */
  eax = 0xfa77dcu;
/* f99b1d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99b30(void) {
  LOAD_REGS();
L_f99b30: /* f99b30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99b33: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99b38(void) {
  LOAD_REGS();
L_f99b38: /* f99b38: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99b3b: add ecx, 0x1f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99b41: jmp 0xf71d93 */
  SPILL(); f_f71d93(); return;
}

void f_f99b46(void) {
  LOAD_REGS();
L_f99b46: /* f99b46: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99b49: add ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99b4f: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99b55(void) {
  LOAD_REGS();
  goto L_f99b55;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99b55: /* f99b55: mov eax, 0xfa7814 */
  eax = 0xfa7814u;
/* f99b5a: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99b70(void) {
  LOAD_REGS();
L_f99b70: /* f99b70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99b73: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99b78(void) {
  LOAD_REGS();
L_f99b78: /* f99b78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99b7b: add ecx, 0x1f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99b81: jmp 0xf71d93 */
  SPILL(); f_f71d93(); return;
}

void f_f99b86(void) {
  LOAD_REGS();
  goto L_f99b86;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99b86: /* f99b86: mov eax, 0xfa7848 */
  eax = 0xfa7848u;
/* f99b8b: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99ba0(void) {
  LOAD_REGS();
L_f99ba0: /* f99ba0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99ba3: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99ba8(void) {
  LOAD_REGS();
L_f99ba8: /* f99ba8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99bab: add ecx, 0x1f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99bb1: jmp 0xf71d93 */
  SPILL(); f_f71d93(); return;
}

void f_f99bb6(void) {
  LOAD_REGS();
  goto L_f99bb6;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99bb6: /* f99bb6: mov eax, 0xfa7878 */
  eax = 0xfa7878u;
/* f99bbb: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99bd0(void) {
  LOAD_REGS();
L_f99bd0: /* f99bd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99bd3: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99bd8(void) {
  LOAD_REGS();
  goto L_f99bd8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99bd8: /* f99bd8: mov eax, 0xfa78a0 */
  eax = 0xfa78a0u;
/* f99bdd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99bf0(void) {
  LOAD_REGS();
L_f99bf0: /* f99bf0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99bf3: jmp 0xf71ebf */
  SPILL(); f_f71ebf(); return;
}

void f_f99bf8(void) {
  LOAD_REGS();
  goto L_f99bf8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99bf8: /* f99bf8: mov eax, 0xfa78c8 */
  eax = 0xfa78c8u;
/* f99bfd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99c10(void) {
  LOAD_REGS();
L_f99c10: /* f99c10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99c13: jmp 0xf71ebf */
  SPILL(); f_f71ebf(); return;
}

void f_f99c18(void) {
  LOAD_REGS();
  goto L_f99c18;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99c18: /* f99c18: mov eax, 0xfa78f0 */
  eax = 0xfa78f0u;
/* f99c1d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99c30(void) {
  LOAD_REGS();
L_f99c30: /* f99c30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99c33: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99c38(void) {
  LOAD_REGS();
L_f99c38: /* f99c38: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99c3b: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99c41: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99c47(void) {
  LOAD_REGS();
  goto L_f99c47;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99c47: /* f99c47: mov eax, 0xfa7920 */
  eax = 0xfa7920u;
/* f99c4c: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99c60(void) {
  LOAD_REGS();
L_f99c60: /* f99c60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99c63: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99c68(void) {
  LOAD_REGS();
  goto L_f99c68;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99c68: /* f99c68: mov eax, 0xfa7948 */
  eax = 0xfa7948u;
/* f99c6d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99c80(void) {
  LOAD_REGS();
L_f99c80: /* f99c80: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99c83: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99c88(void) {
  LOAD_REGS();
  goto L_f99c88;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99c88: /* f99c88: mov eax, 0xfa7970 */
  eax = 0xfa7970u;
/* f99c8d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99ca0(void) {
  LOAD_REGS();
L_f99ca0: /* f99ca0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99ca3: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99ca8(void) {
  LOAD_REGS();
L_f99ca8: /* f99ca8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99cab: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99cb1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99cb7(void) {
  LOAD_REGS();
  goto L_f99cb7;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99cb7: /* f99cb7: mov eax, 0xfa79a0 */
  eax = 0xfa79a0u;
/* f99cbc: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99cd0(void) {
  LOAD_REGS();
L_f99cd0: /* f99cd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99cd3: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99cd8(void) {
  LOAD_REGS();
  goto L_f99cd8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99cd8: /* f99cd8: mov eax, 0xfa79c8 */
  eax = 0xfa79c8u;
/* f99cdd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99cf0(void) {
  LOAD_REGS();
L_f99cf0: /* f99cf0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99cf3: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99cf8(void) {
  LOAD_REGS();
  goto L_f99cf8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99cf8: /* f99cf8: mov eax, 0xfa79f0 */
  eax = 0xfa79f0u;
/* f99cfd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99d10(void) {
  LOAD_REGS();
L_f99d10: /* f99d10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99d13: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99d18(void) {
  LOAD_REGS();
L_f99d18: /* f99d18: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99d1b: add ecx, 0x210 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99d21: jmp 0xf7192e */
  SPILL(); f_f7192e(); return;
}

void f_f99d26(void) {
  LOAD_REGS();
  goto L_f99d26;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99d26: /* f99d26: mov eax, 0xfa7a20 */
  eax = 0xfa7a20u;
/* f99d2b: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99d40(void) {
  LOAD_REGS();
L_f99d40: /* f99d40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99d43: jmp 0xf71ed3 */
  SPILL(); f_f71ed3(); return;
}

void f_f99d48(void) {
  LOAD_REGS();
  goto L_f99d48;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99d48: /* f99d48: mov eax, 0xfa7a48 */
  eax = 0xfa7a48u;
/* f99d4d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99d60(void) {
  LOAD_REGS();
L_f99d60: /* f99d60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99d63: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f99d68(void) {
  LOAD_REGS();
L_f99d68: /* f99d68: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99d6b: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99d6e: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99d74(void) {
  LOAD_REGS();
L_f99d74: /* f99d74: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99d77: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99d7a: jmp 0xf71b81 */
  SPILL(); f_f71b81(); return;
}

void f_f99d7f(void) {
  LOAD_REGS();
L_f99d7f: /* f99d7f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99d82: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99d85: jmp 0xf71677 */
  SPILL(); f_f71677(); return;
}

void f_f99d8a(void) {
  LOAD_REGS();
  goto L_f99d8a;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99d8a: /* f99d8a: mov eax, 0xfa7a88 */
  eax = 0xfa7a88u;
/* f99d8f: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99db0(void) {
  LOAD_REGS();
L_f99db0: /* f99db0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99db3: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f99db8(void) {
  LOAD_REGS();
  goto L_f99db8;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99db8: /* f99db8: mov eax, 0xfa7ab4 */
  eax = 0xfa7ab4u;
/* f99dbd: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99dd0(void) {
  LOAD_REGS();
L_f99dd0: /* f99dd0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99dd3: jmp 0xf71154 */
  SPILL(); f_f71154(); return;
}

void f_f99dd8(void) {
  LOAD_REGS();
L_f99dd8: /* f99dd8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99ddb: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99dde: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99de4(void) {
  LOAD_REGS();
L_f99de4: /* f99de4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99de7: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99dea: jmp 0xf71b81 */
  SPILL(); f_f71b81(); return;
}

void f_f99def(void) {
  LOAD_REGS();
  goto L_f99def;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99def: /* f99def: mov eax, 0xfa7aec */
  eax = 0xfa7aecu;
/* f99df4: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99e10(void) {
  LOAD_REGS();
L_f99e10: /* f99e10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99e13: jmp 0xf72252 */
  SPILL(); f_f72252(); return;
}

void f_f99e18(void) {
  LOAD_REGS();
L_f99e18: /* f99e18: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99e1b: add ecx, 0x20c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99e21: jmp 0xf7158c */
  SPILL(); f_f7158c(); return;
}

void f_f99e26(void) {
  LOAD_REGS();
  goto L_f99e26;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99e26: /* f99e26: mov eax, 0xfa7b20 */
  eax = 0xfa7b20u;
/* f99e2b: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99e40(void) {
  LOAD_REGS();
L_f99e40: /* f99e40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99e43: jmp 0xf72252 */
  SPILL(); f_f72252(); return;
}

void f_f99e48(void) {
  LOAD_REGS();
  goto L_f99e48;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99e48: /* f99e48: mov eax, 0xfa7b48 */
  eax = 0xfa7b48u;
/* f99e4d: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99e60(void) {
  LOAD_REGS();
L_f99e60: /* f99e60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99e63: jmp 0xf71208 */
  SPILL(); f_f71208(); return;
}

void f_f99e68(void) {
  LOAD_REGS();
L_f99e68: /* f99e68: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99e6b: add ecx, 0x220 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99e71: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99e77(void) {
  LOAD_REGS();
L_f99e77: /* f99e77: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99e7a: add ecx, 0x22c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x22cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99e80: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99e86(void) {
  LOAD_REGS();
L_f99e86: /* f99e86: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99e89: add ecx, 0x250 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x250u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99e8f: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99e95(void) {
  LOAD_REGS();
L_f99e95: /* f99e95: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99e98: add ecx, 0x25c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x25cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99e9e: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99ea4(void) {
  LOAD_REGS();
  goto L_f99ea4;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99ea4: /* f99ea4: mov eax, 0xfa7b90 */
  eax = 0xfa7b90u;
/* f99ea9: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99ed0(void) {
  LOAD_REGS();
L_f99ed0: /* f99ed0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99ed3: jmp 0xf71208 */
  SPILL(); f_f71208(); return;
}

void f_f99ed8(void) {
  LOAD_REGS();
L_f99ed8: /* f99ed8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99edb: add ecx, 0x220 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99ee1: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99ee7(void) {
  LOAD_REGS();
L_f99ee7: /* f99ee7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99eea: add ecx, 0x22c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x22cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99ef0: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99ef6(void) {
  LOAD_REGS();
L_f99ef6: /* f99ef6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99ef9: add ecx, 0x250 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x250u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99eff: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99f05(void) {
  LOAD_REGS();
  goto L_f99f05;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99f05: /* f99f05: mov eax, 0xfa7bd4 */
  eax = 0xfa7bd4u;
/* f99f0a: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99f20(void) {
  LOAD_REGS();
L_f99f20: /* f99f20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99f23: jmp 0xf71208 */
  SPILL(); f_f71208(); return;
}

void f_f99f28(void) {
  LOAD_REGS();
L_f99f28: /* f99f28: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99f2b: add ecx, 0x220 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99f31: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99f37(void) {
  LOAD_REGS();
L_f99f37: /* f99f37: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99f3a: add ecx, 0x22c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x22cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99f40: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99f46(void) {
  LOAD_REGS();
L_f99f46: /* f99f46: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99f49: add ecx, 0x250 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x250u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99f4f: jmp dword ptr [0xfce3c0] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_f99f55(void) {
  LOAD_REGS();
  goto L_f99f55;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99f55: /* f99f55: mov eax, 0xfa7c18 */
  eax = 0xfa7c18u;
/* f99f5a: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99f70(void) {
  LOAD_REGS();
L_f99f70: /* f99f70: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99f73: jmp 0xf72252 */
  SPILL(); f_f72252(); return;
}

void f_f99f78(void) {
  LOAD_REGS();
L_f99f78: /* f99f78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99f7b: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99f81: jmp 0xf71816 */
  SPILL(); f_f71816(); return;
}

void f_f99f86(void) {
  LOAD_REGS();
L_f99f86: /* f99f86: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99f89: add ecx, 0x214 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99f8f: jmp 0xf71bae */
  SPILL(); f_f71bae(); return;
}

void f_f99f94(void) {
  LOAD_REGS();
L_f99f94: /* f99f94: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f99f99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f99f9a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f99f9c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f99f9e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99fa1: add ecx, 0x220 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99fa7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f99fa8: call 0xf97850 */
  esp -= 4; W32(esp, 0xf99fadu); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f99fad: ret  */
  esp += 4; SPILL(); return;
}

void f_f99fae(void) {
  LOAD_REGS();
L_f99fae: /* f99fae: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99fb1: add ecx, 0x280 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x280u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99fb7: jmp 0xf71915 */
  SPILL(); f_f71915(); return;
}

void f_f99fbc(void) {
  LOAD_REGS();
L_f99fbc: /* f99fbc: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99fbf: add ecx, 0x28c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f99fc5: jmp 0xf71915 */
  SPILL(); f_f71915(); return;
}

void f_f99fca(void) {
  LOAD_REGS();
  goto L_f99fca;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f99fca: /* f99fca: mov eax, 0xfa7c6c */
  eax = 0xfa7c6cu;
/* f99fcf: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f99ff0(void) {
  LOAD_REGS();
L_f99ff0: /* f99ff0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99ff3: jmp 0xf72252 */
  SPILL(); f_f72252(); return;
}

void f_f99ff8(void) {
  LOAD_REGS();
L_f99ff8: /* f99ff8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f99ffb: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9a001: jmp 0xf71816 */
  SPILL(); f_f71816(); return;
}

void f_f9a006(void) {
  LOAD_REGS();
L_f9a006: /* f9a006: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9a009: add ecx, 0x214 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9a00f: jmp 0xf71bae */
  SPILL(); f_f71bae(); return;
}

void f_f9a014(void) {
  LOAD_REGS();
  goto L_f9a014;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a014: /* f9a014: mov eax, 0xfa7ca8 */
  eax = 0xfa7ca8u;
/* f9a019: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a030(void) {
  LOAD_REGS();
L_f9a030: /* f9a030: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9a033: jmp 0xf72252 */
  SPILL(); f_f72252(); return;
}

void f_f9a038(void) {
  LOAD_REGS();
L_f9a038: /* f9a038: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9a03b: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9a041: jmp 0xf71816 */
  SPILL(); f_f71816(); return;
}

void f_f9a046(void) {
  LOAD_REGS();
L_f9a046: /* f9a046: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9a049: add ecx, 0x214 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9a04f: jmp 0xf71bae */
  SPILL(); f_f71bae(); return;
}

void f_f9a054(void) {
  LOAD_REGS();
L_f9a054: /* f9a054: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* f9a057: add ecx, 0x280 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x280u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f9a05d: jmp 0xf71915 */
  SPILL(); f_f71915(); return;
}

void f_f9a062(void) {
  LOAD_REGS();
  goto L_f9a062;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a062: /* f9a062: mov eax, 0xfa7cec */
  eax = 0xfa7cecu;
/* f9a067: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a080(void) {
  LOAD_REGS();
  goto L_f9a080;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a080: /* f9a080: mov eax, 0xfa7db8 */
  eax = 0xfa7db8u;
/* f9a085: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a090(void) {
  LOAD_REGS();
  goto L_f9a090;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a090: /* f9a090: mov eax, 0xfa7e24 */
  eax = 0xfa7e24u;
/* f9a095: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a0a0(void) {
  LOAD_REGS();
  goto L_f9a0a0;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a0a0: /* f9a0a0: mov eax, 0xfa7e90 */
  eax = 0xfa7e90u;
/* f9a0a5: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a0b0(void) {
  LOAD_REGS();
  goto L_f9a0b0;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a0b0: /* f9a0b0: mov eax, 0xfa7efc */
  eax = 0xfa7efcu;
/* f9a0b5: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a0c0(void) {
  LOAD_REGS();
  goto L_f9a0c0;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a0c0: /* f9a0c0: mov eax, 0xfa7f68 */
  eax = 0xfa7f68u;
/* f9a0c5: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a0d0(void) {
  LOAD_REGS();
  goto L_f9a0d0;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a0d0: /* f9a0d0: mov eax, 0xfa7fd4 */
  eax = 0xfa7fd4u;
/* f9a0d5: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a0e0(void) {
  LOAD_REGS();
  goto L_f9a0e0;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a0e0: /* f9a0e0: mov eax, 0xfa8040 */
  eax = 0xfa8040u;
/* f9a0e5: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a0f0(void) {
  LOAD_REGS();
  goto L_f9a0f0;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a0f0: /* f9a0f0: mov eax, 0xfa80ac */
  eax = 0xfa80acu;
/* f9a0f5: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a100(void) {
  LOAD_REGS();
  goto L_f9a100;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a100: /* f9a100: mov eax, 0xfa8118 */
  eax = 0xfa8118u;
/* f9a105: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a110(void) {
  LOAD_REGS();
  goto L_f9a110;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a110: /* f9a110: mov eax, 0xfa8184 */
  eax = 0xfa8184u;
/* f9a115: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a120(void) {
  LOAD_REGS();
  goto L_f9a120;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a120: /* f9a120: mov eax, 0xfa81f0 */
  eax = 0xfa81f0u;
/* f9a125: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a130(void) {
  LOAD_REGS();
  goto L_f9a130;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a130: /* f9a130: mov eax, 0xfa825c */
  eax = 0xfa825cu;
/* f9a135: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a140(void) {
  LOAD_REGS();
  goto L_f9a140;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a140: /* f9a140: mov eax, 0xfa82c8 */
  eax = 0xfa82c8u;
/* f9a145: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a150(void) {
  LOAD_REGS();
  goto L_f9a150;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a150: /* f9a150: mov eax, 0xfa8334 */
  eax = 0xfa8334u;
/* f9a155: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a160(void) {
  LOAD_REGS();
  goto L_f9a160;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a160: /* f9a160: mov eax, 0xfa83a0 */
  eax = 0xfa83a0u;
/* f9a165: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a170(void) {
  LOAD_REGS();
L_f9a170: /* f9a170: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f9a173: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f9a179(void) {
  LOAD_REGS();
L_f9a179: /* f9a179: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f9a17c: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f9a182(void) {
  LOAD_REGS();
  goto L_f9a182;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a182: /* f9a182: mov eax, 0xfa841c */
  eax = 0xfa841cu;
/* f9a187: jmp 0xf977ce */
  goto L_f977ce;
}

void f_f9a1a0(void) {
  LOAD_REGS();
  goto L_f9a1a0;
L_f977ce: /* f977ce: jmp dword ptr [0xfce570] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_f9a1a0: /* f9a1a0: mov eax, 0xfa8488 */
  eax = 0xfa8488u;
/* f9a1a5: jmp 0xf977ce */
  goto L_f977ce;
}
