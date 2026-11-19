#include "recomp.h"
#include "rec_mod.h"

void f_7d80d9(void) {
  LOAD_REGS();
L_7d80d9: /* 7d80d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d80e0: /* 7d80e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80e6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80e9: jge 0x7d80fd */
  if ((sf == of)) goto L_7d80fd;
L_7d80eb: /* 7d80eb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d80ee: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d80f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d80f3: je 0x7d80fa */
  if (zf) goto L_7d80fa;
L_7d80f5: /* 7d80f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d80f7: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7d80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d80fa: /* 7d80fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80fb: jmp 0x7d80e0 */
  goto L_7d80e0;
L_7d80fd: /* 7d80fd: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d8100: mov edx, dword ptr [esi + 0x444] */
  edx = R32((uint32_t)(esi + 0x444u));
/* 7d8106: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7d810c: mov eax, 4 */
  eax = 0x4u;
/* 7d8111: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d8113: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7d8115: mov eax, dword ptr [esi + 0x508] */
  eax = R32((uint32_t)(esi + 0x508u));
/* 7d811b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d811d: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7d8123: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7d8129: je 0x7d8162 */
  if (zf) goto L_7d8162;
L_7d812b: /* 7d812b: lea ecx, [ebp - 0xee8] */
  ecx = (uint32_t)(ebp + 0xfffff118u);
/* 7d8131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8132: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8135: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d813bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d813b: mov ecx, dword ptr [esi + 0x508] */
  ecx = R32((uint32_t)(esi + 0x508u));
/* 7d8141: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8148: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7d814b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d814c: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7d8150: call 0x6c6a87 */
  esp -= 4; W32(esp, 0x7d8155u); SPILL(); f_6c6a87(); if (g_unwind) return; RELOAD();
/* 7d8155: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8158: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d815c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8162u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d8162: /* 7d8162: xor edi, edi */
  edi = 0;
L_7d8164: /* 7d8164: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d816a: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d816d: jge 0x7d81bc */
  if ((sf == of)) goto L_7d81bc;
L_7d816f: /* 7d816f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8172: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8175: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8177: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d8179: /* 7d8179: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8180: jne 0x7d81b9 */
  if (!zf) goto L_7d81b9;
L_7d8182: /* 7d8182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8183: mov ecx, esp */
  ecx = esp;
/* 7d8185: push 0x163 */
  { uint32_t v = 0x163u; esp -= 4; W32(esp, v); }
/* 7d818a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d8190u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d8190: mov ecx, esi */
  ecx = esi;
/* 7d8192: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d8198u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d8198: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d819a: je 0x7d81b9 */
  if (zf) goto L_7d81b9;
L_7d819c: /* 7d819c: mov edx, dword ptr [0xb7e33c] */
  edx = R32((uint32_t)(0xb7e33cu));
/* 7d81a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d81a5: mov ecx, esi */
  ecx = esi;
/* 7d81a7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d81adu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d81ad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d81af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d81b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d81b4: mov ecx, esi */
  ecx = esi;
/* 7d81b6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d81b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d81b9: /* 7d81b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d81ba: jmp 0x7d8164 */
  goto L_7d8164;
L_7d81bc: /* 7d81bc: xor edi, edi */
  edi = 0;
/* 7d81be: mov edi, edi */
  edi = edi;
L_7d81c0: /* 7d81c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d81c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d81c9: jge 0x7d8218 */
  if ((sf == of)) goto L_7d8218;
L_7d81cb: /* 7d81cb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d81ce: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d81d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81d3: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81d5: /* 7d81d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81dc: jne 0x7d8215 */
  if (!zf) goto L_7d8215;
L_7d81de: /* 7d81de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d81df: mov ecx, esp */
  ecx = esp;
/* 7d81e1: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 7d81e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d81ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d81ec: mov ecx, esi */
  ecx = esi;
/* 7d81ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d81f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d81f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d81f6: je 0x7d8215 */
  if (zf) goto L_7d8215;
L_7d81f8: /* 7d81f8: mov ecx, dword ptr [0xb7e340] */
  ecx = R32((uint32_t)(0xb7e340u));
/* 7d81fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8201: mov ecx, esi */
  ecx = esi;
/* 7d8203: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8209u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8209: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d820b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d820f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8210: mov ecx, esi */
  ecx = esi;
/* 7d8212: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8215u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8215: /* 7d8215: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8216: jmp 0x7d81c0 */
  goto L_7d81c0;
L_7d8218: /* 7d8218: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d821b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d8221u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d8221: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7d8225: xor edi, edi */
  edi = 0;
/* 7d8227: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8230: /* 7d8230: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8236: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8239: jge 0x7d8291 */
  if ((sf == of)) goto L_7d8291;
L_7d823b: /* 7d823b: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d823e: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8241: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8243: je 0x7d825a */
  if (zf) goto L_7d825a;
L_7d8245: /* 7d8245: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d824c: jne 0x7d825a */
  if (!zf) goto L_7d825a;
L_7d824e: /* 7d824e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8250: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8254: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7d825au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d825a: /* 7d825a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8260: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8263: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8266: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8268: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d826a: /* 7d826a: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7d826f: mov ecx, esi */
  ecx = esi;
/* 7d8271: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8277u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8279: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d827b: /* 7d827b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d827f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d8282: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8288u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8288: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7d828b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_7d828e: /* 7d828e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d828f: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8291: /* 7d8291: xor esi, esi */
  esi = 0;
L_7d8293: /* 7d8293: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8299: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d829c: jge 0x7d82bd */
  if ((sf == of)) goto L_7d82bd;
L_7d829e: /* 7d829e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d82a1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d82a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82a6: je 0x7d82ba */
  if (zf) goto L_7d82ba;
L_7d82a8: /* 7d82a8: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82af: jne 0x7d82ba */
  if (!zf) goto L_7d82ba;
L_7d82b1: /* 7d82b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d82b3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d82b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d82b7: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d82bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d82ba: /* 7d82ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d82bb: jmp 0x7d8293 */
  goto L_7d8293;
L_7d82bd: /* 7d82bd: xor edi, edi */
  edi = 0;
/* 7d82bf: nop  */
L_7d82c0: /* 7d82c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d82c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d82c9: jge 0x7d8330 */
  if ((sf == of)) goto L_7d8330;
L_7d82cb: /* 7d82cb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d82ce: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d82d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82d3: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d82d5: /* 7d82d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82dc: jne 0x7d832d */
  if (!zf) goto L_7d832d;
L_7d82de: /* 7d82de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d82df: mov ecx, esp */
  ecx = esp;
/* 7d82e1: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 7d82e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d82ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d82ec: mov ecx, esi */
  ecx = esi;
/* 7d82ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d82f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d82f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82f6: je 0x7d8315 */
  if (zf) goto L_7d8315;
L_7d82f8: /* 7d82f8: mov edx, dword ptr [0xb7e344] */
  edx = R32((uint32_t)(0xb7e344u));
/* 7d82fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8300: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8301: mov ecx, esi */
  ecx = esi;
/* 7d8303: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8309u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8309: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d830b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8310: mov ecx, esi */
  ecx = esi;
/* 7d8312: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8315: /* 7d8315: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d831b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d831e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d8321: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8323: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d8325: /* 7d8325: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8327: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x7d832du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d832d: /* 7d832d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d832e: jmp 0x7d82c0 */
  goto L_7d82c0;
L_7d8330: /* 7d8330: xor edi, edi */
  edi = 0;
L_7d8332: /* 7d8332: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8338: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d833b: jge 0x7d8370 */
  if ((sf == of)) goto L_7d8370;
L_7d833d: /* 7d833d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8340: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8343: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8345: je 0x7d836d */
  if (zf) goto L_7d836d;
L_7d8347: /* 7d8347: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d834e: jne 0x7d836d */
  if (!zf) goto L_7d836d;
L_7d8350: /* 7d8350: mov ecx, dword ptr [0xb7e3f4] */
  ecx = R32((uint32_t)(0xb7e3f4u));
/* 7d8356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8358: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8359: mov ecx, esi */
  ecx = esi;
/* 7d835b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8361u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8361: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8368: mov ecx, esi */
  ecx = esi;
/* 7d836a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d836d: /* 7d836d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d836e: jmp 0x7d8332 */
  goto L_7d8332;
L_7d8370: /* 7d8370: xor edi, edi */
  edi = 0;
L_7d8372: /* 7d8372: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8378: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d837b: jge 0x7d83b0 */
  if ((sf == of)) goto L_7d83b0;
L_7d837d: /* 7d837d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8380: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8383: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8385: je 0x7d83ad */
  if (zf) goto L_7d83ad;
L_7d8387: /* 7d8387: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d838e: jne 0x7d83ad */
  if (!zf) goto L_7d83ad;
L_7d8390: /* 7d8390: mov ecx, dword ptr [0xb7e3b8] */
  ecx = R32((uint32_t)(0xb7e3b8u));
/* 7d8396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8399: mov ecx, esi */
  ecx = esi;
/* 7d839b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d83a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d83a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d83a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d83a8: mov ecx, esi */
  ecx = esi;
/* 7d83aa: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d83adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d83ad: /* 7d83ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d83ae: jmp 0x7d8372 */
  goto L_7d8372;
L_7d83b0: /* 7d83b0: xor esi, esi */
  esi = 0;
/* 7d83b2: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d8229(void) {
  LOAD_REGS();
L_7d8229: /* 7d8229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d8230: /* 7d8230: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8236: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8239: jge 0x7d8291 */
  if ((sf == of)) goto L_7d8291;
L_7d823b: /* 7d823b: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d823e: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8241: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8243: je 0x7d825a */
  if (zf) goto L_7d825a;
L_7d8245: /* 7d8245: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d824c: jne 0x7d825a */
  if (!zf) goto L_7d825a;
L_7d824e: /* 7d824e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8250: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8254: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7d825au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d825a: /* 7d825a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8260: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8263: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d8266: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8268: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d826a: /* 7d826a: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7d826f: mov ecx, esi */
  ecx = esi;
/* 7d8271: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8277u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8279: je 0x7d828e */
  if (zf) goto L_7d828e;
L_7d827b: /* 7d827b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d827d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d827f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d8282: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8288u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8288: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7d828b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_7d828e: /* 7d828e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d828f: jmp 0x7d8230 */
  goto L_7d8230;
L_7d8291: /* 7d8291: xor esi, esi */
  esi = 0;
L_7d8293: /* 7d8293: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8299: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d829c: jge 0x7d82bd */
  if ((sf == of)) goto L_7d82bd;
L_7d829e: /* 7d829e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d82a1: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d82a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82a6: je 0x7d82ba */
  if (zf) goto L_7d82ba;
L_7d82a8: /* 7d82a8: test byte ptr [ecx + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82af: jne 0x7d82ba */
  if (!zf) goto L_7d82ba;
L_7d82b1: /* 7d82b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d82b3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d82b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d82b7: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d82bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d82ba: /* 7d82ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d82bb: jmp 0x7d8293 */
  goto L_7d8293;
L_7d82bd: /* 7d82bd: xor edi, edi */
  edi = 0;
/* 7d82bf: nop  */
L_7d82c0: /* 7d82c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d82c6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d82c9: jge 0x7d8330 */
  if ((sf == of)) goto L_7d8330;
L_7d82cb: /* 7d82cb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d82ce: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7d82d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82d3: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d82d5: /* 7d82d5: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82dc: jne 0x7d832d */
  if (!zf) goto L_7d832d;
L_7d82de: /* 7d82de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d82df: mov ecx, esp */
  ecx = esp;
/* 7d82e1: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 7d82e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d82ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d82ec: mov ecx, esi */
  ecx = esi;
/* 7d82ee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7d82f4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7d82f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d82f6: je 0x7d8315 */
  if (zf) goto L_7d8315;
L_7d82f8: /* 7d82f8: mov edx, dword ptr [0xb7e344] */
  edx = R32((uint32_t)(0xb7e344u));
/* 7d82fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8300: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8301: mov ecx, esi */
  ecx = esi;
/* 7d8303: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8309u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8309: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d830b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d830f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8310: mov ecx, esi */
  ecx = esi;
/* 7d8312: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8315: /* 7d8315: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d831b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d831e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d8321: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8323: je 0x7d832d */
  if (zf) goto L_7d832d;
L_7d8325: /* 7d8325: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8327: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x7d832du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d832d: /* 7d832d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d832e: jmp 0x7d82c0 */
  goto L_7d82c0;
L_7d8330: /* 7d8330: xor edi, edi */
  edi = 0;
L_7d8332: /* 7d8332: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8338: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d833b: jge 0x7d8370 */
  if ((sf == of)) goto L_7d8370;
L_7d833d: /* 7d833d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8340: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8343: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8345: je 0x7d836d */
  if (zf) goto L_7d836d;
L_7d8347: /* 7d8347: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d834e: jne 0x7d836d */
  if (!zf) goto L_7d836d;
L_7d8350: /* 7d8350: mov ecx, dword ptr [0xb7e3f4] */
  ecx = R32((uint32_t)(0xb7e3f4u));
/* 7d8356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8358: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8359: mov ecx, esi */
  ecx = esi;
/* 7d835b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d8361u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d8361: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8368: mov ecx, esi */
  ecx = esi;
/* 7d836a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d836d: /* 7d836d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d836e: jmp 0x7d8332 */
  goto L_7d8332;
L_7d8370: /* 7d8370: xor edi, edi */
  edi = 0;
L_7d8372: /* 7d8372: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8378: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d837b: jge 0x7d83b0 */
  if ((sf == of)) goto L_7d83b0;
L_7d837d: /* 7d837d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8380: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8383: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8385: je 0x7d83ad */
  if (zf) goto L_7d83ad;
L_7d8387: /* 7d8387: test byte ptr [esi + 0x8c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d838e: jne 0x7d83ad */
  if (!zf) goto L_7d83ad;
L_7d8390: /* 7d8390: mov ecx, dword ptr [0xb7e3b8] */
  ecx = R32((uint32_t)(0xb7e3b8u));
/* 7d8396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8399: mov ecx, esi */
  ecx = esi;
/* 7d839b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7d83a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7d83a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d83a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d83a8: mov ecx, esi */
  ecx = esi;
/* 7d83aa: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d83adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d83ad: /* 7d83ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d83ae: jmp 0x7d8372 */
  goto L_7d8372;
L_7d83b0: /* 7d83b0: xor esi, esi */
  esi = 0;
/* 7d83b2: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d83b4(void) {
  LOAD_REGS();
L_7d83b4: /* 7d83b4: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7d83bb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d83bd(void) {
  LOAD_REGS();
L_7d83bd: /* 7d83bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d83c0: /* 7d83c0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d83c6: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d83c9: jge 0x7d850a */
  if ((sf == of)) goto L_7d850a;
L_7d83cf: /* 7d83cf: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d83d2: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d83d6: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d83dc: /* 7d83dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d83de: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83e1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d83e7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d83e7: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d83ed: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d83f0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7d83f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d83f4: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d83f7: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d83fd: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7d8403u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8405: je 0x7d84d6 */
  if (zf) goto L_7d84d6;
L_7d840b: /* 7d840b: xor edi, edi */
  edi = 0;
/* 7d840d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d8410: /* 7d8410: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8416: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8419: jge 0x7d8504 */
  if ((sf == of)) goto L_7d8504;
L_7d841f: /* 7d841f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8422: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d8425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8427: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d842d: /* 7d842d: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7d8430: add edx, 0x1f8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d8436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8437: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d843d: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8443u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8445: jne 0x7d847c */
  if (!zf) goto L_7d847c;
L_7d8447: /* 7d8447: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d844d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8450: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7d8453: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 7d8456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8457: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7d845du); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7d845d: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8463: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8466: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d8469: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d846f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8470: mov ecx, eax */
  ecx = eax;
/* 7d8472: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7d8478u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7d8478: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d847a: je 0x7d84d0 */
  if (zf) goto L_7d84d0;
L_7d847c: /* 7d847c: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8482: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8485: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d8488: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d848a: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7d848d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d848f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7d8492: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d8495: mov ecx, esp */
  ecx = esp;
/* 7d8497: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d849e: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d84a1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7d84a3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d84aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d84ad: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7d84b0: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7d84b7: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d84ba: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7d84bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d84c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d84c1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7d84c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d84c7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d84ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d84cb: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d84d0: /* 7d84d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d84d1: jmp 0x7d8410 */
  goto L_7d8410;
L_7d84d6: /* 7d84d6: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d84dc: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d84df: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d84e2: test byte ptr [ecx + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84e9: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84eb: /* 7d84eb: test byte ptr [ecx + 0x87], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x87u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f2: je 0x7d8504 */
  if (zf) goto L_7d8504;
L_7d84f4: /* 7d84f4: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7d84f7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d84f9: je 0x7d84ff */
  if (zf) goto L_7d84ff;
L_7d84fb: /* 7d84fb: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d84fd: jne 0x7d8504 */
  if (!zf) goto L_7d8504;
L_7d84ff: /* 7d84ff: call 0x6c5754 */
  esp -= 4; W32(esp, 0x7d8504u); SPILL(); f_6c5754(); if (g_unwind) return; RELOAD();
L_7d8504: /* 7d8504: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8505: jmp 0x7d83c0 */
  goto L_7d83c0;
L_7d850a: /* 7d850a: xor ecx, ecx */
  ecx = 0;
/* 7d850c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7d850f: nop  */
L_7d8510: /* 7d8510: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8516: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8519: jge 0x7d85bd */
  if ((sf == of)) goto L_7d85bd;
L_7d851f: /* 7d851f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8522: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 7d8525: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8527: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d852d: /* 7d852d: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8531: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d8533: /* 7d8533: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 7d8539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d853b: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d853d: /* 7d853d: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d8542: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8548u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d854a: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d854c: /* 7d854c: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 7d8552: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8554: je 0x7d8567 */
  if (zf) goto L_7d8567;
L_7d8556: /* 7d8556: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 7d855b: mov ecx, esi */
  ecx = esi;
/* 7d855d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d8563u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d8563: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8565: jne 0x7d8569 */
  if (!zf) goto L_7d8569;
L_7d8567: /* 7d8567: xor esi, esi */
  esi = 0;
L_7d8569: /* 7d8569: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d856f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8572: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d8574: cmp byte ptr [eax + 0x3f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7d857b: jae 0x7d858c */
  if (!cf) goto L_7d858c;
L_7d857d: /* 7d857d: test byte ptr [esi + 0x90], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8584: je 0x7d858c */
  if (zf) goto L_7d858c;
L_7d8586: /* 7d8586: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8587: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d858cu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d858c: /* 7d858c: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8592: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d8595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8597: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d859e: jne 0x7d85af */
  if (!zf) goto L_7d85af;
L_7d85a0: /* 7d85a0: test byte ptr [esi + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d85a7: je 0x7d85af */
  if (zf) goto L_7d85af;
L_7d85a9: /* 7d85a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d85aa: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x7d85afu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_7d85af: /* 7d85af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d85b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d85b3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d85b6: mov ecx, eax */
  ecx = eax;
/* 7d85b8: jmp 0x7d8510 */
  goto L_7d8510;
L_7d85bd: /* 7d85bd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d85c0: and dword ptr [eax + 0x44c], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 7d85c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d85ca: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d85ce: call 0x6cb014 */
  esp -= 4; W32(esp, 0x7d85d3u); SPILL(); f_6cb014(); if (g_unwind) return; RELOAD();
/* 7d85d3: jmp 0x7d8667 */
  goto L_7d8667;
L_7d8667: /* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d8634(void) {
  LOAD_REGS();
L_7d8634: /* 7d8634: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d8637: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d863c: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7d863f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8640: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 7d8643: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8648u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8648(); return;
}

void f_7d8648(void) {
  LOAD_REGS();
L_7d8648: /* 7d8648: push 0xa0f5c4 */
  { uint32_t v = 0xa0f5c4u; esp -= 4; W32(esp, v); }
/* 7d864d: push 0xadafa0 */
  { uint32_t v = 0xadafa0u; esp -= 4; W32(esp, v); }
/* 7d8652: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8658u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8658: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d865b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d865d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d865f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8664u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7d8664: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8667: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d866e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8671: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d867bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d867b: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8681: mov esi, dword ptr [edx + 0x2c] */
  esi = R32((uint32_t)(edx + 0x2cu));
/* 7d8684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8686: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8688: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d868b: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 7d868f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8695u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8695: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8697: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d869a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d869d: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86a3: mov esi, dword ptr [eax + 0x2c] */
  esi = R32((uint32_t)(eax + 0x2cu));
/* 7d86a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86aa: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d86b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86b8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86bb: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d86be: mov edi, 2 */
  edi = 0x2u;
L_7d86c3: /* 7d86c3: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d86c9: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d86cc: jge 0x7d8704 */
  if ((sf == of)) goto L_7d8704;
L_7d86ce: /* 7d86ce: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d86d1: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 7d86d4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7d86d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86d8: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86da: /* 7d86da: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86e1: je 0x7d8701 */
  if (zf) goto L_7d8701;
L_7d86e3: /* 7d86e3: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d86ea: jne 0x7d8701 */
  if (!zf) goto L_7d8701;
L_7d86ec: /* 7d86ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d86ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d86f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d86f3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d86f9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d86f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d86fb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d86fe: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d8701: /* 7d8701: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8702: jmp 0x7d86c3 */
  goto L_7d86c3;
L_7d8704: /* 7d8704: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d870a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d870d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 7d8713: mov edi, 2 */
  edi = 0x2u;
/* 7d8718: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d871a(void) {
  LOAD_REGS();
L_7d871a: /* 7d871a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d8720: /* 7d8720: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8726: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8729: jge 0x7d8762 */
  if ((sf == of)) goto L_7d8762;
L_7d872b: /* 7d872b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d872e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8731: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8733: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8736: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8738: /* 7d8738: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d873f: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d8741: /* 7d8741: test byte ptr [eax + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8748: je 0x7d875f */
  if (zf) goto L_7d875f;
L_7d874a: /* 7d874a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d874c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d874e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8751: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8757u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8757: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d8759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d875c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d875f: /* 7d875f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8760: jmp 0x7d8720 */
  goto L_7d8720;
L_7d8762: /* 7d8762: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d876b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 7d8771: mov edi, 2 */
  edi = 0x2u;
/* 7d8776: jmp 0x7d8780 */
  goto L_7d8780;
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d8778(void) {
  LOAD_REGS();
L_7d8778: /* 7d8778: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7d877f: nop  */
L_7d8780: /* 7d8780: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d8786: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8789: jge 0x7d87b9 */
  if ((sf == of)) goto L_7d87b9;
L_7d878b: /* 7d878b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d878e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7d8791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8793: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 7d8796: je 0x7d87b6 */
  if (zf) goto L_7d87b6;
L_7d8798: /* 7d8798: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d879f: jne 0x7d87b6 */
  if (!zf) goto L_7d87b6;
L_7d87a1: /* 7d87a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d87a5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d87a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d87aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d87ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7d87b0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d87b3: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_7d87b6: /* 7d87b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d87b7: jmp 0x7d8780 */
  goto L_7d8780;
L_7d87b9: /* 7d87b9: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7d87be: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d87c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d87c6: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d87c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d87cb: je 0x7d87eb */
  if (zf) goto L_7d87eb;
L_7d87cd: /* 7d87cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7d87d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d87d2: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d87d7: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d87dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87de: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d87e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d87e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d87e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d87e8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d87ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d87eb: /* 7d87eb: xor eax, eax */
  eax = 0;
/* 7d87ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d87f0: /* 7d87f0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d87f3: jge 0x7d87f8 */
  if ((sf == of)) goto L_7d87f8;
L_7d87f5: /* 7d87f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d87f6: jmp 0x7d87f0 */
  goto L_7d87f0;
L_7d87f8: /* 7d87f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d87fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d87fc: mov ecx, esi */
  ecx = esi;
/* 7d87fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d8804u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d8804: mov esi, dword ptr [ebx + 0x108] */
  esi = R32((uint32_t)(ebx + 0x108u));
/* 7d880a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d880d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d880f: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8813: mov ecx, esi */
  ecx = esi;
/* 7d8815: mov edi, eax */
  edi = eax;
/* 7d8817: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d881du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d881d: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 7d8823: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d8825: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8827: je 0x7d8843 */
  if (zf) goto L_7d8843;
L_7d8829: /* 7d8829: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d882b: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 7d8830: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 7d8835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d883a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d883b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7d883e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d883f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8840: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7d8843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8843: /* 7d8843: xor eax, eax */
  eax = 0;
L_7d8845: /* 7d8845: cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8848: jge 0x7d885f */
  if ((sf == of)) goto L_7d885f;
L_7d884a: /* 7d884a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8850: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8853: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d8856: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7d8859: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7d885c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d885d: jmp 0x7d8845 */
  goto L_7d8845;
L_7d885f: /* 7d885f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d8862: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 7d8866: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7d886bu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7d886b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d886e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8870: mov esi, 0x21 */
  esi = 0x21u;
/* 7d8875: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8878: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 7d887c: je 0x7d892e */
  if (zf) goto L_7d892e;
L_7d8882: /* 7d8882: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8888: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d888a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7d8890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8892: je 0x7d889c */
  if (zf) goto L_7d889c;
L_7d8894: /* 7d8894: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d889a: jmp 0x7d88a2 */
  goto L_7d88a2;
L_7d889c: /* 7d889c: mov eax, dword ptr [ebx + 0x10c] */
  eax = R32((uint32_t)(ebx + 0x10cu));
L_7d88a2: /* 7d88a2: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 7d88a5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d88ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d88ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d88ae: call 0x7ccae0 */
  esp -= 4; W32(esp, 0x7d88b3u); SPILL(); f_7ccae0(); if (g_unwind) return; RELOAD();
/* 7d88b3: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d88b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88bb: je 0x7d88ce */
  if (zf) goto L_7d88ce;
L_7d88bd: /* 7d88bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88bf: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d88c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88c5: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 7d88c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d88cb: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d88ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88ce: /* 7d88ce: xor edi, edi */
  edi = 0;
L_7d88d0: /* 7d88d0: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d88d3: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d88d6: jge 0x7d8929 */
  if ((sf == of)) goto L_7d8929;
L_7d88d8: /* 7d88d8: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d88db: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d88de: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7d88e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d88e3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7d88e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d88e9: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7d88ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d88ee: je 0x7d88f6 */
  if (zf) goto L_7d88f6;
L_7d88f0: /* 7d88f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d88f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d88f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d88f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d88f6: /* 7d88f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d88f7: jmp 0x7d88d0 */
  goto L_7d88d0;
L_7d8929: /* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
L_7d892e: /* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d88f9(void) {
  LOAD_REGS();
L_7d88f9: /* 7d88f9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d88fc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8901: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 7d8904: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8905: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 7d8908: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d890du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d890d(); return;
}

void f_7d890d(void) {
  LOAD_REGS();
L_7d890d: /* 7d890d: push 0xa0f5a8 */
  { uint32_t v = 0xa0f5a8u; esp -= 4; W32(esp, v); }
/* 7d8912: push 0xadafb0 */
  { uint32_t v = 0xadafb0u; esp -= 4; W32(esp, v); }
/* 7d8917: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d891du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d891d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8920: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8922: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8924: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8929u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7d8929: mov esi, 0x21 */
  esi = 0x21u;
/* 7d892e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8931: movzx edx, byte ptr [edx + 0x448] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x448u)));
/* 7d8938: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d893e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8941: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d8944: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x7d894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d894a: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8951: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 7d8957: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 7d895b: call 0x6ca50b */
  esp -= 4; W32(esp, 0x7d8960u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 7d8960: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d8966: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8969: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d896c: je 0x7d8a28 */
  if (zf) goto L_7d8a28;
L_7d8972: /* 7d8972: push 0xadafc0 */
  { uint32_t v = 0xadafc0u; esp -= 4; W32(esp, v); }
/* 7d8977: push 0xadafcc */
  { uint32_t v = 0xadafccu; esp -= 4; W32(esp, v); }
/* 7d897c: push 0xadafd8 */
  { uint32_t v = 0xadafd8u; esp -= 4; W32(esp, v); }
/* 7d8981: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8987: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d898cu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d898c: push 0xadaff4 */
  { uint32_t v = 0xadaff4u; esp -= 4; W32(esp, v); }
/* 7d8991: push 0xadb000 */
  { uint32_t v = 0xadb000u; esp -= 4; W32(esp, v); }
/* 7d8996: push 0xadb00c */
  { uint32_t v = 0xadb00cu; esp -= 4; W32(esp, v); }
/* 7d899b: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89a1: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89a6u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89a6: push 0xadb028 */
  { uint32_t v = 0xadb028u; esp -= 4; W32(esp, v); }
/* 7d89ab: push 0xadb034 */
  { uint32_t v = 0xadb034u; esp -= 4; W32(esp, v); }
/* 7d89b0: push 0xadb040 */
  { uint32_t v = 0xadb040u; esp -= 4; W32(esp, v); }
/* 7d89b5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89bb: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89c0u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89c0: push 0xadb05c */
  { uint32_t v = 0xadb05cu; esp -= 4; W32(esp, v); }
/* 7d89c5: push 0xadb068 */
  { uint32_t v = 0xadb068u; esp -= 4; W32(esp, v); }
/* 7d89ca: push 0xadb074 */
  { uint32_t v = 0xadb074u; esp -= 4; W32(esp, v); }
/* 7d89cf: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89d5: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89dau); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89da: push 0xadb090 */
  { uint32_t v = 0xadb090u; esp -= 4; W32(esp, v); }
/* 7d89df: push 0xadb09c */
  { uint32_t v = 0xadb09cu; esp -= 4; W32(esp, v); }
/* 7d89e4: push 0xadb0a8 */
  { uint32_t v = 0xadb0a8u; esp -= 4; W32(esp, v); }
/* 7d89e9: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d89ef: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d89f4u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d89f4: push 0xadb0c4 */
  { uint32_t v = 0xadb0c4u; esp -= 4; W32(esp, v); }
/* 7d89f9: push 0xadb0d0 */
  { uint32_t v = 0xadb0d0u; esp -= 4; W32(esp, v); }
/* 7d89fe: push 0xadb0dc */
  { uint32_t v = 0xadb0dcu; esp -= 4; W32(esp, v); }
/* 7d8a03: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a09: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a0eu); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
/* 7d8a0e: push 0xadb0f8 */
  { uint32_t v = 0xadb0f8u; esp -= 4; W32(esp, v); }
/* 7d8a13: push 0xadb104 */
  { uint32_t v = 0xadb104u; esp -= 4; W32(esp, v); }
/* 7d8a18: push 0xadb120 */
  { uint32_t v = 0xadb120u; esp -= 4; W32(esp, v); }
/* 7d8a1d: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8a23: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7d8a28u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7d8a28: /* 7d8a28: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d8a2e: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d8a31: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d8a33: test byte ptr [eax + 0x404], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8a3a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7d8a3d: jne 0x7d8a90 */
  if (!zf) goto L_7d8a90;
L_7d8a3f: /* 7d8a3f: xor ebx, ebx */
  ebx = 0;
L_7d8a41: /* 7d8a41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8a44: cmp ebx, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d8a4a: jge 0x7d8a90 */
  if ((sf == of)) goto L_7d8a90;
L_7d8a4c: /* 7d8a4c: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7d8a52: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8a54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d8a56: push 0xadb13c */
  { uint32_t v = 0xadb13cu; esp -= 4; W32(esp, v); }
/* 7d8a5b: push 0x1500c */
  { uint32_t v = 0x1500cu; esp -= 4; W32(esp, v); }
/* 7d8a60: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7d8a62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8a62: mov edi, eax */
  edi = eax;
/* 7d8a64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d8a65: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x7d8a6au); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 7d8a6a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a6d: mov esi, dword ptr [ecx + 0x108] */
  esi = R32((uint32_t)(ecx + 0x108u));
/* 7d8a73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8a76: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d8a78: add esi, 0x1178 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1178u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d8a7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d8a80: mov ecx, esi */
  ecx = esi;
/* 7d8a82: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d8a88u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d8a88: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8a8a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 7d8a8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d8a8e: jmp 0x7d8a41 */
  goto L_7d8a41;
L_7d8a90: /* 7d8a90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8a93: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 7d8a99: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d8a9f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d8aa3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d8aa9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d8aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8aac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8ab0: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8ab5u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7d8ab5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8abb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8abf: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ac4u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7d8ac4: mov eax, esi */
  eax = esi;
/* 7d8ac6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8ac9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8ad0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ad1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8ad2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8ad3: mov esp, ebp */
  esp = ebp;
/* 7d8ad5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8ad6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d8ad9(void) {
  LOAD_REGS();
L_7d8ad9: /* 7d8ad9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d8adc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8ae1: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7d8ae4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8ae5: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7d8ae8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8aedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8aed(); return;
}

void f_7d8aed(void) {
  LOAD_REGS();
L_7d8aed: /* 7d8aed: push 0xa0f58c */
  { uint32_t v = 0xa0f58cu; esp -= 4; W32(esp, v); }
/* 7d8af2: push 0xadafb8 */
  { uint32_t v = 0xadafb8u; esp -= 4; W32(esp, v); }
/* 7d8af7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8afdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8afd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8b00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8b02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8b04: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8b09u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8b09(); return;
}

void f_7d8b09(void) {
  LOAD_REGS();
L_7d8b09: /* 7d8b09: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d8b0c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8b11: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7d8b14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8b15: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 7d8b18: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8b1du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8b1d(); return;
}

void f_7d8b1d(void) {
  LOAD_REGS();
L_7d8b1d: /* 7d8b1d: push 0xa0f574 */
  { uint32_t v = 0xa0f574u; esp -= 4; W32(esp, v); }
/* 7d8b22: push 0xadafa8 */
  { uint32_t v = 0xadafa8u; esp -= 4; W32(esp, v); }
/* 7d8b27: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8b2du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8b2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8b30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8b32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8b34: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8b39u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8b39(); return;
}

void f_7d8b39(void) {
  LOAD_REGS();
L_7d8b39: /* 7d8b39: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7d8b3c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8b41: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7d8b44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8b45: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 7d8b48: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8b4du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8b4d(); return;
}

void f_7d8b4d(void) {
  LOAD_REGS();
L_7d8b4d: /* 7d8b4d: push 0xa0f564 */
  { uint32_t v = 0xa0f564u; esp -= 4; W32(esp, v); }
/* 7d8b52: push 0xadaefc */
  { uint32_t v = 0xadaefcu; esp -= 4; W32(esp, v); }
/* 7d8b57: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8b5du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8b5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8b60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8b62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8b64: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8b69u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8b69(); return;
}

void f_7d8b69(void) {
  LOAD_REGS();
L_7d8b69: /* 7d8b69: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d8b6c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8b71: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7d8b74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8b75: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 7d8b78: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8b7du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8b7d(); return;
}

void f_7d8b7d(void) {
  LOAD_REGS();
L_7d8b7d: /* 7d8b7d: push 0xa0f544 */
  { uint32_t v = 0xa0f544u; esp -= 4; W32(esp, v); }
/* 7d8b82: push 0xadae98 */
  { uint32_t v = 0xadae98u; esp -= 4; W32(esp, v); }
/* 7d8b87: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8b8du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8b8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8b90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8b92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8b94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8b99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8b99(); return;
}

void f_7d8b99(void) {
  LOAD_REGS();
L_7d8b99: /* 7d8b99: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d8b9c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8ba1: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7d8ba4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8ba5: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 7d8ba8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8badu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8bad(); return;
}

void f_7d8bad(void) {
  LOAD_REGS();
L_7d8bad: /* 7d8bad: push 0xa0f530 */
  { uint32_t v = 0xa0f530u; esp -= 4; W32(esp, v); }
/* 7d8bb2: push 0xadada0 */
  { uint32_t v = 0xadada0u; esp -= 4; W32(esp, v); }
/* 7d8bb7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8bbdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8bbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8bc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8bc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8bc4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8bc9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8bc9(); return;
}

void f_7d8bc9(void) {
  LOAD_REGS();
L_7d8bc9: /* 7d8bc9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7d8bcc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8bd1: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 7d8bd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8bd5: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 7d8bd8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8bddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8bdd(); return;
}

void f_7d8bdd(void) {
  LOAD_REGS();
L_7d8bdd: /* 7d8bdd: push 0xa0f518 */
  { uint32_t v = 0xa0f518u; esp -= 4; W32(esp, v); }
/* 7d8be2: push 0xadad8c */
  { uint32_t v = 0xadad8cu; esp -= 4; W32(esp, v); }
/* 7d8be7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8bedu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8bed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8bf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8bf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8bf4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8bf9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8bf9(); return;
}

void f_7d8bf9(void) {
  LOAD_REGS();
L_7d8bf9: /* 7d8bf9: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d8bfc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8c01: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7d8c04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d8c05: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7d8c08: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8c0du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8c0d(); return;
}

void f_7d8c0d(void) {
  LOAD_REGS();
L_7d8c0d: /* 7d8c0d: push 0xa0f4f0 */
  { uint32_t v = 0xa0f4f0u; esp -= 4; W32(esp, v); }
/* 7d8c12: push 0xadad1c */
  { uint32_t v = 0xadad1cu; esp -= 4; W32(esp, v); }
/* 7d8c17: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8c1du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8c1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8c20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8c22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8c24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8c29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8c29(); return;
}

void f_7d8c29(void) {
  LOAD_REGS();
L_7d8c29: /* 7d8c29: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d8c2c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8c31: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7d8c34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8c35: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7d8c38: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8c3du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8c3d(); return;
}

void f_7d8c3d(void) {
  LOAD_REGS();
L_7d8c3d: /* 7d8c3d: push 0xa0f4cc */
  { uint32_t v = 0xa0f4ccu; esp -= 4; W32(esp, v); }
/* 7d8c42: push 0xadacd4 */
  { uint32_t v = 0xadacd4u; esp -= 4; W32(esp, v); }
/* 7d8c47: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8c4du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8c4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8c50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8c52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8c54: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8c59u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8c59(); return;
}

void f_7d8c59(void) {
  LOAD_REGS();
L_7d8c59: /* 7d8c59: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d8c5c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8c61: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 7d8c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8c65: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7d8c68: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8c6du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8c6d(); return;
}

void f_7d8c6d(void) {
  LOAD_REGS();
L_7d8c6d: /* 7d8c6d: push 0xa0f4b4 */
  { uint32_t v = 0xa0f4b4u; esp -= 4; W32(esp, v); }
/* 7d8c72: push 0xad571c */
  { uint32_t v = 0xad571cu; esp -= 4; W32(esp, v); }
/* 7d8c77: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8c7du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8c7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8c80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8c82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8c84: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8c89u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8c89(); return;
}

void f_7d8c89(void) {
  LOAD_REGS();
L_7d8c89: /* 7d8c89: call dword ptr [0xcfa8bc] */
  esp -= 4; W32(esp, 0x7d8c8fu); SPILL(); f_4e375b(); if (g_unwind) return; /* Core!?EndLoad@UObject@@SAXXZ */ RELOAD();
/* 7d8c8f: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7d8c95: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d8c98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d8c99: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7d8c9fu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7d8c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8ca1: push 0xad5690 */
  { uint32_t v = 0xad5690u; esp -= 4; W32(esp, v); }
/* 7d8ca6: push 0xad569c */
  { uint32_t v = 0xad569cu; esp -= 4; W32(esp, v); }
/* 7d8cab: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7d8cb1u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7d8cb1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8cb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d8cb6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8cb9: push 0x40c00000 */
  { uint32_t v = 0x40c00000u; esp -= 4; W32(esp, v); }
/* 7d8cbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d8cbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8cc0: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7d8cc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8cc6: mov eax, 0x7d8ccc */
  eax = 0x7d8cccu;
/* 7d8ccb: ret  */
  esp += 4; SPILL(); return;
}

void f_7d8ccc(void) {
  LOAD_REGS();
L_7d8ccc: /* 7d8ccc: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d8ccf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d8cd3: call 0x6c312a */
  esp -= 4; W32(esp, 0x7d8cd8u); SPILL(); f_6c312a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x7d8cccu: guest_unwind_done(); RELOAD(); goto L_7d8ccc; } return; } RELOAD();
/* 7d8cd8: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d8cde: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d8ce2: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7d8ce7u); SPILL(); f_6ccd7e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x7d8cccu: guest_unwind_done(); RELOAD(); goto L_7d8ccc; } return; } RELOAD();
/* 7d8ce7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d8cea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d8ceb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d8cec: xor eax, eax */
  eax = 0;
/* 7d8cee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d8cf5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d8cf6: mov esp, ebp */
  esp = ebp;
/* 7d8cf8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d8cf9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7d8cfc(void) {
  LOAD_REGS();
L_7d8cfc: /* 7d8cfc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d8cff: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8d04: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7d8d07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8d08: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7d8d0b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8d10u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8d10(); return;
}

void f_7d8d10(void) {
  LOAD_REGS();
L_7d8d10: /* 7d8d10: push 0xa0f490 */
  { uint32_t v = 0xa0f490u; esp -= 4; W32(esp, v); }
/* 7d8d15: push 0xad56b0 */
  { uint32_t v = 0xad56b0u; esp -= 4; W32(esp, v); }
/* 7d8d1a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8d20u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8d20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8d23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8d25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8d27: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8d2cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8d2c(); return;
}

void f_7d8d2c(void) {
  LOAD_REGS();
L_7d8d2c: /* 7d8d2c: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7d8d32: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d8d37: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 7d8d3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d8d3b: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7d8d3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8d43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d8d43(); return;
}

void f_7d8d43(void) {
  LOAD_REGS();
L_7d8d43: /* 7d8d43: push 0xa0f45c */
  { uint32_t v = 0xa0f45cu; esp -= 4; W32(esp, v); }
/* 7d8d48: push 0xadb15c */
  { uint32_t v = 0xadb15cu; esp -= 4; W32(esp, v); }
/* 7d8d4d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d8d53u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d8d53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8d56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8d58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8d5a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d8d5fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7d8d5f: guest_badaddr(0x7d8d5f); return;
}

void f_7da150(void) {
  LOAD_REGS();
L_7da150: /* 7da150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7da151: mov ebp, esp */
  ebp = esp;
/* 7da153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7da155: push 0x9d03aa */
  { uint32_t v = 0x9d03aau; esp -= 4; W32(esp, v); }
/* 7da15a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7da160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7da168: sub esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7da16e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7da16f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7da170: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da171: xor edi, edi */
  edi = 0;
/* 7da173: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7da176: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7da179: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7da17c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7da17e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7da181: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7da187: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 7da189: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 7da18c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7da18e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7da191: jp 0x7da1a9 */
  if (pf) goto L_7da1a9;
L_7da193: /* 7da193: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7da198: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7da19a: push 0xadb490 */
  { uint32_t v = 0xadb490u; esp -= 4; W32(esp, v); }
/* 7da19f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da1a0: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7da1a6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7da1a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7da1a9: /* 7da1a9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da1ac: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7da1af: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da1b1: je 0x7da296 */
  if (zf) goto L_7da296;
L_7da1b7: /* 7da1b7: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da1ba: jne 0x7da1f0 */
  if (!zf) goto L_7da1f0;
L_7da1bc: /* 7da1bc: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7da1c2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7da1c4: push 0xadb4bc */
  { uint32_t v = 0xadb4bcu; esp -= 4; W32(esp, v); }
/* 7da1c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da1ca: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7da1d0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7da1d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da1d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da1d4: call dword ptr [0xcfa8ec] */
  esp -= 4; W32(esp, 0x7da1dau); SPILL(); f_4e3201(); if (g_unwind) return; /* Core!?appRequestExit@@YAXH@Z */ RELOAD();
/* 7da1da: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da1dd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7da1e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7da1e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7da1e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7da1e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7da1ea: mov esp, ebp */
  esp = ebp;
/* 7da1ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7da1ed: ret 4 */
  esp += 8; SPILL(); return;
L_7da1f0: /* 7da1f0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da1f2: je 0x7da296 */
  if (zf) goto L_7da296;
L_7da1f8: /* 7da1f8: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7da1fb: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da1fe: jne 0x7da296 */
  if (!zf) goto L_7da296;
L_7da204: /* 7da204: cmp dword ptr [edx + 0x108], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x108u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da20a: je 0x7da296 */
  if (zf) goto L_7da296;
L_7da210: /* 7da210: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da213: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7da215: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da217: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7da21au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da21a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da21c: jne 0x7da296 */
  if (!zf) goto L_7da296;
L_7da21e: /* 7da21e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da221: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da227: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da229: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0x7da22fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da22f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da231: jne 0x7da26b */
  if (!zf) goto L_7da26b;
L_7da233: /* 7da233: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da236: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7da239: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da23c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7da23e: test byte ptr [ecx + 0x38], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7da242: jne 0x7da26b */
  if (!zf) goto L_7da26b;
L_7da244: /* 7da244: mov edx, dword ptr [0xadd1b8] */
  edx = R32((uint32_t)(0xadd1b8u));
/* 7da24a: xor esi, esi */
  esi = 0;
/* 7da24c: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da24e: je 0x7da263 */
  if (zf) goto L_7da263;
L_7da250: /* 7da250: cmp dword ptr [eax + 0x38], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da253: je 0x7da263 */
  if (zf) goto L_7da263;
L_7da255: /* 7da255: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7da257: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7da259: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7da25b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7da25d: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x7da263u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7da263: /* 7da263: mov dword ptr [0xadd1b8], esi */
  W32((uint32_t)(0xadd1b8u), esi);
/* 7da269: jmp 0x7da29c */
  goto L_7da29c;
L_7da26b: /* 7da26b: cmp dword ptr [0xadd1b8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xadd1b8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da271: mov esi, 1 */
  esi = 0x1u;
/* 7da276: jne 0x7da263 */
  if (!zf) goto L_7da263;
L_7da278: /* 7da278: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da27b: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7da27e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da281: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7da283: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da285: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da286: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da287: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da288: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7da28eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da28e: mov dword ptr [0xadd1b8], esi */
  W32((uint32_t)(0xadd1b8u), esi);
/* 7da294: jmp 0x7da29c */
  goto L_7da29c;
L_7da296: /* 7da296: mov dword ptr [0xadd1b8], edi */
  W32((uint32_t)(0xadd1b8u), edi);
L_7da29c: /* 7da29c: call dword ptr [0xcfa934] */
  esp -= 4; W32(esp, 0x7da2a2u); SPILL(); f_4e163b(); if (g_unwind) return; /* Core!?StaticTick@UObject@@SAXXZ */ RELOAD();
/* 7da2a2: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7da2a7: call dword ptr [0xcfa930] */
  esp -= 4; W32(esp, 0x7da2adu); SPILL(); f_4e2a5e(); if (g_unwind) return; /* Core!?Tick@FMemCache@@QAEXXZ */ RELOAD();
/* 7da2ad: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da2b0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7da2b4: mov dword ptr [ecx + 0x6c], edi */
  W32((uint32_t)(ecx + 0x6cu), edi);
/* 7da2b7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7da2b9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da2bc: sub dword ptr [ecx + 0x6c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x6cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x6cu), r);
  }
/* 7da2bf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da2c2: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da2c8: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da2ca: je 0x7da3f6 */
  if (zf) goto L_7da3f6;
L_7da2d0: /* 7da2d0: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 7da2d3: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da2d5: je 0x7da3e0 */
  if (zf) goto L_7da3e0;
L_7da2db: /* 7da2db: fld dword ptr [edx + 0x9c] */
  { double v = F32((uint32_t)(edx + 0x9cu)); FPUSH(v); }
/* 7da2e1: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 7da2e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7da2e9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7da2ec: jp 0x7da2f8 */
  if (pf) goto L_7da2f8;
L_7da2ee: /* 7da2ee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7da2f0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7da2f6: jmp 0x7da30d */
  goto L_7da30d;
L_7da2f8: /* 7da2f8: fcom dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
/* 7da2fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7da300: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7da303: jnp 0x7da30d */
  if (!pf) goto L_7da30d;
L_7da305: /* 7da305: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7da307: fld dword ptr [0xa09ac8] */
  { double v = F32((uint32_t)(0xa09ac8u)); FPUSH(v); }
L_7da30d: /* 7da30d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7da313: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7da315: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7da318: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7da31a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7da31c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7da31e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7da321: jne 0x7da334 */
  if (!zf) goto L_7da334;
L_7da323: /* 7da323: mov edx, dword ptr [0xcfa790] */
  edx = R32((uint32_t)(0xcfa790u));
/* 7da329: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da32b: jne 0x7da334 */
  if (!zf) goto L_7da334;
L_7da32d: /* 7da32d: mov edx, 1 */
  edx = 0x1u;
/* 7da332: jmp 0x7da336 */
  goto L_7da336;
L_7da334: /* 7da334: xor edx, edx */
  edx = 0;
L_7da336: /* 7da336: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7da339: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7da33b: mov ecx, dword ptr [eax + 0x44c] */
  ecx = R32((uint32_t)(eax + 0x44cu));
/* 7da341: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7da343: mov edx, dword ptr [eax + 0x44c] */
  edx = R32((uint32_t)(eax + 0x44cu));
/* 7da349: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7da34c: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7da34e: mov dword ptr [eax + 0x44c], edx */
  W32((uint32_t)(eax + 0x44cu), edx);
/* 7da354: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da357: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7da35a: fld dword ptr [eax + 0x9c] */
  { double v = F32((uint32_t)(eax + 0x9cu)); FPUSH(v); }
/* 7da360: fsub dword ptr [0xa07fe4] */
  ST0 = ST0 - (F32((uint32_t)(0xa07fe4u)));
/* 7da366: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 7da36c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7da36e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7da371: jp 0x7da37d */
  if (pf) goto L_7da37d;
L_7da373: /* 7da373: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7da375: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7da37b: jmp 0x7da392 */
  goto L_7da392;
L_7da37d: /* 7da37d: fcom dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
/* 7da383: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7da385: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7da388: jnp 0x7da392 */
  if (!pf) goto L_7da392;
L_7da38a: /* 7da38a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7da38c: fld dword ptr [0xa09ac8] */
  { double v = F32((uint32_t)(0xa09ac8u)); FPUSH(v); }
L_7da392: /* 7da392: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7da398: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7da39a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7da39d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7da39f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7da3a1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7da3a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7da3a6: jne 0x7da3b9 */
  if (!zf) goto L_7da3b9;
L_7da3a8: /* 7da3a8: mov ecx, dword ptr [0xcfa790] */
  ecx = R32((uint32_t)(0xcfa790u));
/* 7da3ae: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da3b0: jne 0x7da3b9 */
  if (!zf) goto L_7da3b9;
L_7da3b2: /* 7da3b2: mov ecx, 1 */
  ecx = 0x1u;
/* 7da3b7: jmp 0x7da3bb */
  goto L_7da3bb;
L_7da3b9: /* 7da3b9: xor ecx, ecx */
  ecx = 0;
L_7da3bb: /* 7da3bb: mov edx, dword ptr [edx + 0x108] */
  edx = R32((uint32_t)(edx + 0x108u));
/* 7da3c1: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7da3c4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7da3c6: mov ebx, dword ptr [eax + 0x44c] */
  ebx = R32((uint32_t)(eax + 0x44cu));
/* 7da3cc: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da3ce: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7da3d0: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7da3d3: mov edx, ebx */
  edx = ebx;
/* 7da3d5: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7da3d7: mov dword ptr [eax + 0x44c], edx */
  W32((uint32_t)(eax + 0x44cu), edx);
/* 7da3dd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7da3e0: /* 7da3e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7da3e3: mov eax, dword ptr [eax + 0x108] */
  eax = R32((uint32_t)(eax + 0x108u));
/* 7da3e9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7da3eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da3ec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7da3ee: mov ecx, eax */
  ecx = eax;
/* 7da3f0: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7da3f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da3f3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7da3f6: /* 7da3f6: mov ecx, dword ptr [eax + 0x10c] */
  ecx = R32((uint32_t)(eax + 0x10cu));
/* 7da3fc: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da3fe: je 0x7da416 */
  if (zf) goto L_7da416;
L_7da400: /* 7da400: cmp ecx, dword ptr [eax + 0x108] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da406: je 0x7da416 */
  if (zf) goto L_7da416;
L_7da408: /* 7da408: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7da40b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da40d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da40e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7da410: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7da413u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da413: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7da416: /* 7da416: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7da419: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da41b: je 0x7da446 */
  if (zf) goto L_7da446;
L_7da41d: /* 7da41d: cmp dword ptr [ecx + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da420: je 0x7da446 */
  if (zf) goto L_7da446;
L_7da422: /* 7da422: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 7da425: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da427: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7da42a: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 7da430: cmp ecx, dword ptr [eax + 0x108] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da436: je 0x7da446 */
  if (zf) goto L_7da446;
L_7da438: /* 7da438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7da43b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da43d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da43e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7da440: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7da443u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da443: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7da446: /* 7da446: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7da449: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da44b: je 0x7da462 */
  if (zf) goto L_7da462;
L_7da44d: /* 7da44d: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 7da453: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da455: je 0x7da462 */
  if (zf) goto L_7da462;
L_7da457: /* 7da457: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7da45a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da45b: mov ecx, eax */
  ecx = eax;
/* 7da45d: call 0x6c8d05 */
  esp -= 4; W32(esp, 0x7da462u); SPILL(); f_6c8d05(); if (g_unwind) return; RELOAD();
L_7da462: /* 7da462: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7da464: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da467: mov esi, dword ptr [ecx + 0x6c] */
  esi = R32((uint32_t)(ecx + 0x6cu));
/* 7da46a: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7da46d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7da46f: mov dword ptr [ecx + 0x6c], esi */
  W32((uint32_t)(ecx + 0x6cu), esi);
/* 7da472: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da475: mov eax, dword ptr [ecx + 0x1c0] */
  eax = R32((uint32_t)(ecx + 0x1c0u));
/* 7da47b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7da47d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7da480: jl 0x7da48e */
  if ((sf != of)) goto L_7da48e;
L_7da482: /* 7da482: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da485: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7da48bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da48b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7da48e: /* 7da48e: add ecx, 0x1c4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1c4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da494: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7da49au); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7da49a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7da49c: jle 0x7da4b7 */
  if ((zf || sf != of)) goto L_7da4b7;
L_7da49e: /* 7da49e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da4a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7da4a3: lea edx, [ecx + 0x1dc] */
  edx = (uint32_t)(ecx + 0x1dcu);
/* 7da4a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da4aa: lea edx, [ecx + 0x1c4] */
  edx = (uint32_t)(ecx + 0x1c4u);
/* 7da4b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da4b1: call dword ptr [eax + 0xd4] */
  { uint32_t t = R32((uint32_t)(eax + 0xd4u)); esp -= 4; W32(esp, 0x7da4b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7da4b7: /* 7da4b7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da4ba: add ecx, 0x1f8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da4c0: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7da4c6u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7da4c6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7da4c8: jle 0x7da4dc */
  if ((zf || sf != of)) goto L_7da4dc;
L_7da4ca: /* 7da4ca: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da4cd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7da4cf: lea edx, [ecx + 0x1f8] */
  edx = (uint32_t)(ecx + 0x1f8u);
/* 7da4d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da4d6: call dword ptr [eax + 0xd8] */
  { uint32_t t = R32((uint32_t)(eax + 0xd8u)); esp -= 4; W32(esp, 0x7da4dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7da4dc: /* 7da4dc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da4df: mov eax, dword ptr [eax + 0x108] */
  eax = R32((uint32_t)(eax + 0x108u));
/* 7da4e5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da4e7: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7da4eb: je 0x7da824 */
  if (zf) goto L_7da824;
L_7da4f1: /* 7da4f1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da4f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7da4f6: push 0xb81b58 */
  { uint32_t v = 0xb81b58u; esp -= 4; W32(esp, v); }
/* 7da4fb: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7da501: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7da507u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7da507: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da509: je 0x7da824 */
  if (zf) goto L_7da824;
L_7da50f: /* 7da50f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da512: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7da518: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da51b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7da51d: fld dword ptr [eax + 0x52c] */
  { double v = F32((uint32_t)(eax + 0x52cu)); FPUSH(v); }
/* 7da523: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 7da526: fst dword ptr [eax + 0x52c] */
  WF32((uint32_t)(eax + 0x52cu), ST0);
/* 7da52c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7da532: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7da534: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7da537: jp 0x7da824 */
  if (pf) goto L_7da824;
L_7da53d: /* 7da53d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da540: call 0x6c3d37 */
  esp -= 4; W32(esp, 0x7da545u); SPILL(); f_6c3d37(); if (g_unwind) return; RELOAD();
/* 7da545: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da548: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7da54e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da551: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7da553: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7da559: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7da55d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da563u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da563: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da566: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7da568: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da569: add edx, 0x114 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7da56f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da570: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da576: call 0x6c440d */
  esp -= 4; W32(esp, 0x7da57bu); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7da57b: push 0xadb4ec */
  { uint32_t v = 0xadb4ecu; esp -= 4; W32(esp, v); }
/* 7da580: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da586: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7da58a: call 0x6c991c */
  esp -= 4; W32(esp, 0x7da58fu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7da58f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da591: je 0x7da6be */
  if (zf) goto L_7da6be;
L_7da597: /* 7da597: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da59a: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da5a0: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da5a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da5a7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da5aa: call 0x6c8436 */
  esp -= 4; W32(esp, 0x7da5afu); SPILL(); f_6c8436(); if (g_unwind) return; RELOAD();
L_7da5af: /* 7da5af: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da5b2: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7da5b8: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da5bb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7da5bd: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7da5c3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da5c9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da5c9: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7da5cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da5d0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7da5d2: push 0xadb4fc */
  { uint32_t v = 0xadb4fcu; esp -= 4; W32(esp, v); }
/* 7da5d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da5d8: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7da5deu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7da5de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da5e1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da5e4: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7da5eau); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7da5ea: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da5ed: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da5f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da5f1: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da5f7: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da5fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da5fb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7da5fe: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7da600: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7da606: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7da60a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da610u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da610: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7da613: mov ecx, esp */
  ecx = esp;
/* 7da615: mov dword ptr [ebp - 0x28], esp */
  W32((uint32_t)(ebp + 0xffffffd8u), esp);
/* 7da618: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7da61a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da61b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da61e: add eax, 0x114 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7da623: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da624: call 0x6c440d */
  esp -= 4; W32(esp, 0x7da629u); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7da629: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da62c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da62e: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x7da634u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da634: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da637: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da63d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7da640: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7da642: push 0xb81b64 */
  { uint32_t v = 0xb81b64u; esp -= 4; W32(esp, v); }
/* 7da647: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7da64d: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7da653u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7da653: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da656: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7da65a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7da660u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7da660: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da666: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7da66a: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7da66fu); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7da66f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_7da673: /* 7da673: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da676: call 0x6c312a */
  esp -= 4; W32(esp, 0x7da67bu); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7da67b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7da67e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7da685: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7da686: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7da687: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7da688: mov esp, ebp */
  esp = ebp;
/* 7da68a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7da68b: ret 4 */
  esp += 8; SPILL(); return;
L_7da6be: /* 7da6be: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da6c1: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7da6c7: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da6ca: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7da6cc: test byte ptr [ecx + 0x528], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x528u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7da6d3: je 0x7da5af */
  if (zf) goto L_7da5af;
L_7da6d9: /* 7da6d9: add eax, 0xd8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7da6de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da6df: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da6e2: call 0x6c8436 */
  esp -= 4; W32(esp, 0x7da6e7u); SPILL(); f_6c8436(); if (g_unwind) return; RELOAD();
/* 7da6e7: xor ebx, ebx */
  ebx = 0;
/* 7da6e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7da6f0: /* 7da6f0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da6f3: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7da6f9: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7da6fc: jge 0x7da5af */
  if ((sf == of)) goto L_7da5af;
L_7da702: /* 7da702: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7da705: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 7da708: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da70a: je 0x7da7ec */
  if (zf) goto L_7da7ec;
L_7da710: /* 7da710: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7da715: mov ecx, esi */
  ecx = esi;
/* 7da717: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7da71du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7da71d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da71f: je 0x7da7ec */
  if (zf) goto L_7da7ec;
L_7da725: /* 7da725: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 7da72b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da72d: je 0x7da7ec */
  if (zf) goto L_7da7ec;
L_7da733: /* 7da733: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7da739: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da73b: je 0x7da7ec */
  if (zf) goto L_7da7ec;
L_7da741: /* 7da741: push 0xb81b5c */
  { uint32_t v = 0xb81b5cu; esp -= 4; W32(esp, v); }
/* 7da746: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da749: call 0x6c1f55 */
  esp -= 4; W32(esp, 0x7da74eu); SPILL(); f_6c1f55(); if (g_unwind) return; RELOAD();
/* 7da74e: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7da754: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da755: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da758: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7da75c: call 0x7cf4c0 */
  esp -= 4; W32(esp, 0x7da761u); SPILL(); f_7cf4c0(); if (g_unwind) return; RELOAD();
/* 7da761: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7da767: mov edi, dword ptr [edx + 0xe4] */
  edi = R32((uint32_t)(edx + 0xe4u));
L_7da76d: /* 7da76d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da770: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da772: je 0x7da785 */
  if (zf) goto L_7da785;
L_7da774: /* 7da774: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da775: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da778: call 0x7cf4c0 */
  esp -= 4; W32(esp, 0x7da77du); SPILL(); f_7cf4c0(); if (g_unwind) return; RELOAD();
/* 7da77d: mov edi, dword ptr [edi + 0xe4] */
  edi = R32((uint32_t)(edi + 0xe4u));
/* 7da783: jmp 0x7da76d */
  goto L_7da76d;
L_7da785: /* 7da785: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7da788: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da78eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da78e: mov ecx, dword ptr [esi + 0x448] */
  ecx = R32((uint32_t)(esi + 0x448u));
/* 7da794: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da79a: mov edi, eax */
  edi = eax;
/* 7da79c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da7a2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da7a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da7a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da7a4: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da7a7: call 0x6c45de */
  esp -= 4; W32(esp, 0x7da7acu); SPILL(); f_6c45de(); if (g_unwind) return; RELOAD();
/* 7da7ac: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 7da7b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da7b3: call 0x6c951b */
  esp -= 4; W32(esp, 0x7da7b8u); SPILL(); f_6c951b(); if (g_unwind) return; RELOAD();
/* 7da7b8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da7bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da7bd: je 0x7da7df */
  if (zf) goto L_7da7df;
L_7da7bf: /* 7da7bf: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7da7c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da7c6: call 0x6c951b */
  esp -= 4; W32(esp, 0x7da7cbu); SPILL(); f_6c951b(); if (g_unwind) return; RELOAD();
/* 7da7cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da7ce: push 0xb81b60 */
  { uint32_t v = 0xb81b60u; esp -= 4; W32(esp, v); }
/* 7da7d3: lea ecx, [eax + 0x128] */
  ecx = (uint32_t)(eax + 0x128u);
/* 7da7d9: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7da7dfu); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
L_7da7df: /* 7da7df: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7da7e2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7da7e6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7da7ecu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7da7ec: /* 7da7ec: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7da7ed: xor edi, edi */
  edi = 0;
/* 7da7ef: jmp 0x7da6f0 */
  goto L_7da6f0;
L_7da824: /* 7da824: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da827: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7da82a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da82c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7da82f: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7da833: je 0x7daa3b */
  if (zf) goto L_7daa3b;
L_7da839: /* 7da839: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da83c: je 0x7daa3b */
  if (zf) goto L_7daa3b;
L_7da842: /* 7da842: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7da845: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7da847: push 0xb81b68 */
  { uint32_t v = 0xb81b68u; esp -= 4; W32(esp, v); }
/* 7da84c: add ecx, 0x128 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da852: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7da858u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7da858: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da85a: je 0x7daa3b */
  if (zf) goto L_7daa3b;
L_7da860: /* 7da860: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da863: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7da866: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7da869: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7da86b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da86e: call 0x6c3d37 */
  esp -= 4; W32(esp, 0x7da873u); SPILL(); f_6c3d37(); if (g_unwind) return; RELOAD();
/* 7da873: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 7da879: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7da87d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da883u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da883: mov ecx, dword ptr [esi + 0x124] */
  ecx = R32((uint32_t)(esi + 0x124u));
/* 7da889: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da88c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da88d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da88e: add edx, 0x114 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7da894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da895: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da89b: call 0x6c440d */
  esp -= 4; W32(esp, 0x7da8a0u); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7da8a0: mov bl, 0xb */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xbu) & 0xffu);
/* 7da8a2: push 0xadb534 */
  { uint32_t v = 0xadb534u; esp -= 4; W32(esp, v); }
/* 7da8a7: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da8ad: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7da8b0: call 0x6c991c */
  esp -= 4; W32(esp, 0x7da8b5u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7da8b5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da8b7: je 0x7da8d6 */
  if (zf) goto L_7da8d6;
L_7da8b9: /* 7da8b9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da8bc: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da8c2: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da8c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da8c9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da8cc: call 0x6c8436 */
  esp -= 4; W32(esp, 0x7da8d1u); SPILL(); f_6c8436(); if (g_unwind) return; RELOAD();
/* 7da8d1: jmp 0x7da98e */
  goto L_7da98e;
L_7da8d6: /* 7da8d6: cmp dword ptr [esi + 0x134], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x134u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da8dc: je 0x7da98e */
  if (zf) goto L_7da98e;
L_7da8e2: /* 7da8e2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7da8e5: mov ecx, dword ptr [edx + 0x448] */
  ecx = R32((uint32_t)(edx + 0x448u));
/* 7da8eb: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da8f1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da8f7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da8f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da8f8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7da8fd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7da8ff: push 0xadb544 */
  { uint32_t v = 0xadb544u; esp -= 4; W32(esp, v); }
/* 7da904: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da905: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7da90bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7da90b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da90e: push 0xb81b6c */
  { uint32_t v = 0xb81b6cu; esp -= 4; W32(esp, v); }
/* 7da913: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da916: call 0x6c1f55 */
  esp -= 4; W32(esp, 0x7da91bu); SPILL(); f_6c1f55(); if (g_unwind) return; RELOAD();
/* 7da91b: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7da91e: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 7da924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da925: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da928: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7da92c: call 0x7cf4c0 */
  esp -= 4; W32(esp, 0x7da931u); SPILL(); f_7cf4c0(); if (g_unwind) return; RELOAD();
/* 7da931: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7da934: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 7da93a: mov edi, dword ptr [edx + 0xe4] */
  edi = R32((uint32_t)(edx + 0xe4u));
L_7da940: /* 7da940: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da943: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da945: je 0x7da958 */
  if (zf) goto L_7da958;
L_7da947: /* 7da947: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da948: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da94b: call 0x7cf4c0 */
  esp -= 4; W32(esp, 0x7da950u); SPILL(); f_7cf4c0(); if (g_unwind) return; RELOAD();
/* 7da950: mov edi, dword ptr [edi + 0xe4] */
  edi = R32((uint32_t)(edi + 0xe4u));
/* 7da956: jmp 0x7da940 */
  goto L_7da940;
L_7da958: /* 7da958: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7da95b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da961u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da961: mov edi, eax */
  edi = eax;
/* 7da963: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7da966: mov ecx, dword ptr [eax + 0x448] */
  ecx = R32((uint32_t)(eax + 0x448u));
/* 7da96c: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da972: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da978u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da978: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da97a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da97d: call 0x6c45de */
  esp -= 4; W32(esp, 0x7da982u); SPILL(); f_6c45de(); if (g_unwind) return; RELOAD();
/* 7da982: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7da985: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7da988: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7da98eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7da98e: /* 7da98e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da991: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7da997u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7da997: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da99a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da99b: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da99e: lea edi, [esi + 0x128] */
  edi = (uint32_t)(esi + 0x128u);
/* 7da9a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da9a5: mov ecx, edi */
  ecx = edi;
/* 7da9a7: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7da9ab: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da9b1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da9b1: mov edx, dword ptr [esi + 0x124] */
  edx = R32((uint32_t)(esi + 0x124u));
/* 7da9b7: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7da9ba: mov ecx, esp */
  ecx = esp;
/* 7da9bc: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7da9bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da9c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da9c1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da9c4: add eax, 0x114 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7da9c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da9ca: call 0x6c440d */
  esp -= 4; W32(esp, 0x7da9cfu); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7da9cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da9d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da9d4: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x7da9dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da9da: push 0xb81b70 */
  { uint32_t v = 0xb81b70u; esp -= 4; W32(esp, v); }
/* 7da9df: mov ecx, edi */
  ecx = edi;
/* 7da9e1: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7da9e7u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7da9e7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da9ea: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7da9ed: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7da9f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7da9f3: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da9f9: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7da9fd: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7daa02u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7daa02: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7daa06: jmp 0x7da673 */
  goto L_7da673;
L_7daa3b: /* 7daa3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa3e: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7daa44: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daa46: mov ebx, 0xf */
  ebx = 0xfu;
/* 7daa4b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7daa4e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7daa51: je 0x7dab5e */
  if (zf) goto L_7dab5e;
L_7daa57: /* 7daa57: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7daa5a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7daa5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7daa5d: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7daa60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daa60: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa63: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 7daa69: push 0xb81b74 */
  { uint32_t v = 0xb81b74u; esp -= 4; W32(esp, v); }
/* 7daa6e: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daa74: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7daa7au); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7daa7a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daa7c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa7f: je 0x7dabf8 */
  if (zf) goto L_7dabf8;
L_7daa85: /* 7daa85: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7daa8b: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daa91: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7daa95: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7daa9bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7daa9b: mov ebx, dword ptr [0xcfa904] */
  ebx = R32((uint32_t)(0xcfa904u));
/* 7daaa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7daaa3: push 0xadb578 */
  { uint32_t v = 0xadb578u; esp -= 4; W32(esp, v); }
/* 7daaa8: push 0xadb588 */
  { uint32_t v = 0xadb588u; esp -= 4; W32(esp, v); }
/* 7daaad: mov esi, eax */
  esi = eax;
/* 7daaaf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7daab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daab1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daab4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7daab6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7daab9: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 7daabe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7daabf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7daac0: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7daac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daac9: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7daacf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7daad1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7daad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7daad5: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daad8: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x7daaddu); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 7daadd: mov esi, eax */
  esi = eax;
/* 7daadf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daae2: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7daae8: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daaee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7daaf2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7daaf8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7daaf8: mov ecx, esi */
  ecx = esi;
/* 7daafa: mov edi, eax */
  edi = eax;
/* 7daafc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dab02u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dab02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dab04: push 0xadb5ac */
  { uint32_t v = 0xadb5acu; esp -= 4; W32(esp, v); }
/* 7dab09: push 0xadb5bc */
  { uint32_t v = 0xadb5bcu; esp -= 4; W32(esp, v); }
/* 7dab0e: mov esi, eax */
  esi = eax;
/* 7dab10: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7dab12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dab12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dab15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dab16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dab17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dab18: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7dab1d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7dab1f: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7dab24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dab25: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7dab2bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7dab2b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dab2e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dab31: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7dab35: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dab3bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dab3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab3e: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7dab44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dab46: je 0x7dab4f */
  if (zf) goto L_7dab4f;
L_7dab48: /* 7dab48: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dab4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dab4c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7dab4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dab4f: /* 7dab4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab52: mov dword ptr [ecx + 0x110], 0 */
  W32((uint32_t)(ecx + 0x110u), 0x0u);
/* 7dab5c: xor edi, edi */
  edi = 0;
L_7dab5e: /* 7dab5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab61: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7dab64: xor eax, eax */
  eax = 0;
/* 7dab66: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dab68: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dab6b: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7dab6f: je 0x7dab8b */
  if (zf) goto L_7dab8b;
L_7dab71: /* 7dab71: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab73: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab76: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7dab79: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 7dab7b: mov esi, eax */
  esi = eax;
/* 7dab7d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dab7f: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7dab85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dab85: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab87: lea eax, [esi + eax - 0xc] */
  eax = (uint32_t)(esi + eax + 0xfffffff4u);
L_7dab8b: /* 7dab8b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab8e: mov dword ptr [ecx + 0x70], eax */
  W32((uint32_t)(ecx + 0x70u), eax);
/* 7dab91: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab93: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7dab96: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab99: lea eax, [eax + edx - 0xc] */
  eax = (uint32_t)(eax + edx + 0xfffffff4u);
/* 7dab9d: mov dword ptr [ecx + 0x68], eax */
  W32((uint32_t)(ecx + 0x68u), eax);
/* 7daba0: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 7daba5: add dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax), r);
  }
/* 7daba8: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 7dabad: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7dabb0: adc ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 7dabb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dabb3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7dabb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dabb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dabba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dabc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dabc2: mov esp, ebp */
  esp = ebp;
/* 7dabc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dabc5: ret 4 */
  esp += 8; SPILL(); return;
L_7dabf8: /* 7dabf8: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dabfe: cmp dword ptr [eax + 0x8c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac04: je 0x7dab5e */
  if (zf) goto L_7dab5e;
L_7dac0a: /* 7dac0a: cmp dword ptr [eax + 0x98], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x98u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac10: jne 0x7dab5e */
  if (!zf) goto L_7dab5e;
L_7dac16: /* 7dac16: cmp dword ptr [eax + 0x90], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac1c: jne 0x7dab5e */
  if (!zf) goto L_7dab5e;
L_7dac22: /* 7dac22: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac25: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dac2bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dac2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac2e: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dac34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dac36: lea esi, [ebp - 0x24] */
  esi = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dac3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dac3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac3c: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dac3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac40: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7dac44: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7dac4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dac4a: push 0xb81b78 */
  { uint32_t v = 0xb81b78u; esp -= 4; W32(esp, v); }
/* 7dac4f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac52: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7dac58u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7dac58: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac5a: je 0x7dac92 */
  if (zf) goto L_7dac92;
L_7dac5c: /* 7dac5c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac5f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dac65u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dac65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dac66: push 0xadb5d4 */
  { uint32_t v = 0xadb5d4u; esp -= 4; W32(esp, v); }
/* 7dac6b: push 0xadb5e4 */
  { uint32_t v = 0xadb5e4u; esp -= 4; W32(esp, v); }
/* 7dac70: mov esi, eax */
  esi = eax;
/* 7dac72: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7dac78u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7dac78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dac7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dac80: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 7dac85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dac86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac87: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7dac8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dac8d: jmp 0x7dad1c */
  goto L_7dad1c;
L_7dac92: /* 7dac92: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac95: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dac9b: cmp dword ptr [eax + 0x94], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x94u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daca1: jne 0x7dad1c */
  if (!zf) goto L_7dad1c;
L_7daca3: /* 7daca3: cmp dword ptr [ecx + 0x180], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x180u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daca9: je 0x7dacba */
  if (zf) goto L_7dacba;
L_7dacab: /* 7dacab: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7dacb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dacb2: call 0x6c1c8a */
  esp -= 4; W32(esp, 0x7dacb7u); SPILL(); f_6c1c8a(); if (g_unwind) return; RELOAD();
/* 7dacb7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7dacba: /* 7dacba: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 7dacc0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7dacc3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dacc5: mov byte ptr [eax + 0x4bc], 3 */
  W8((uint32_t)(eax + 0x4bcu), 0x3u);
/* 7daccc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daccf: mov eax, dword ptr [edx + 0x10c] */
  eax = R32((uint32_t)(edx + 0x10cu));
/* 7dacd5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7dacd8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dacda: mov byte ptr [eax + 0x4bc], 3 */
  W8((uint32_t)(eax + 0x4bcu), 0x3u);
/* 7dace1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dace4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7dace7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dace9: je 0x7dacf3 */
  if (zf) goto L_7dacf3;
L_7daceb: /* 7daceb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7daced: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7dacf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dacf3: /* 7dacf3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dacf6: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7dacfc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dacfe: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7dad01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dad01: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad04: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 7dad0a: mov dword ptr [ecx + 0x3c], edi */
  W32((uint32_t)(ecx + 0x3cu), edi);
/* 7dad0d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad10: mov eax, dword ptr [edx + 0x110] */
  eax = R32((uint32_t)(edx + 0x110u));
/* 7dad16: mov dword ptr [eax + 0x88], edi */
  W32((uint32_t)(eax + 0x88u), edi);
L_7dad1c: /* 7dad1c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad1f: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7dad25: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dad27: mov dword ptr [ebp - 4], 0x13 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7dad2e: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7dad32: je 0x7dad3b */
  if (zf) goto L_7dad3b;
L_7dad34: /* 7dad34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dad36: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dad38: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dad3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dad3b: /* 7dad3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad3e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dad41: mov dword ptr [edx + 0x110], edi */
  W32((uint32_t)(edx + 0x110u), edi);
/* 7dad47: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dad4a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dad50u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dad50: jmp 0x7dab5e */
  goto L_7dab5e;
}

void f_7da68e(void) {
  LOAD_REGS();
L_7da68e: /* 7da68e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7da691: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7da696: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 7da699: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da69a: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 7da69d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7da6a2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7da6a2(); return;
}

void f_7da6a2(void) {
  LOAD_REGS();
  goto L_7da6a2;
L_7da5af: /* 7da5af: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da5b2: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7da5b8: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da5bb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7da5bd: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7da5c3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da5c9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da5c9: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7da5cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da5d0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7da5d2: push 0xadb4fc */
  { uint32_t v = 0xadb4fcu; esp -= 4; W32(esp, v); }
/* 7da5d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da5d8: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7da5deu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7da5de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da5e1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da5e4: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7da5eau); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7da5ea: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da5ed: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da5f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da5f1: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da5f7: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da5fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da5fb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7da5fe: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7da600: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7da606: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7da60a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da610u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da610: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7da613: mov ecx, esp */
  ecx = esp;
/* 7da615: mov dword ptr [ebp - 0x28], esp */
  W32((uint32_t)(ebp + 0xffffffd8u), esp);
/* 7da618: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7da61a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da61b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da61e: add eax, 0x114 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7da623: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da624: call 0x6c440d */
  esp -= 4; W32(esp, 0x7da629u); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7da629: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da62c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da62e: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x7da634u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da634: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da637: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da63d: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7da640: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7da642: push 0xb81b64 */
  { uint32_t v = 0xb81b64u; esp -= 4; W32(esp, v); }
/* 7da647: lea ecx, [eax + 0x51c] */
  ecx = (uint32_t)(eax + 0x51cu);
/* 7da64d: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7da653u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7da653: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da656: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7da65a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7da660u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7da660: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da666: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7da66a: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7da66fu); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7da66f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7da673: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da676: call 0x6c312a */
  esp -= 4; W32(esp, 0x7da67bu); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7da67b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7da67e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7da685: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7da686: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7da687: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7da688: mov esp, ebp */
  esp = ebp;
/* 7da68a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7da68b: ret 4 */
  esp += 8; SPILL(); return;
L_7da6a2: /* 7da6a2: push 0xa0f7e8 */
  { uint32_t v = 0xa0f7e8u; esp -= 4; W32(esp, v); }
/* 7da6a7: push 0xadb4e4 */
  { uint32_t v = 0xadb4e4u; esp -= 4; W32(esp, v); }
/* 7da6ac: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7da6b2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7da6b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da6b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7da6b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7da6b9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7da6beu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7da6be: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da6c1: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7da6c7: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7da6ca: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7da6cc: test byte ptr [ecx + 0x528], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x528u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7da6d3: je 0x7da5af */
  if (zf) goto L_7da5af;
L_7da6d9: /* 7da6d9: add eax, 0xd8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7da6de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da6df: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da6e2: call 0x6c8436 */
  esp -= 4; W32(esp, 0x7da6e7u); SPILL(); f_6c8436(); if (g_unwind) return; RELOAD();
/* 7da6e7: xor ebx, ebx */
  ebx = 0;
/* 7da6e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7da6f0: /* 7da6f0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da6f3: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7da6f9: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7da6fc: jge 0x7da5af */
  if ((sf == of)) goto L_7da5af;
L_7da702: /* 7da702: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7da705: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 7da708: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da70a: je 0x7da7ec */
  if (zf) goto L_7da7ec;
L_7da710: /* 7da710: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7da715: mov ecx, esi */
  ecx = esi;
/* 7da717: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7da71du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7da71d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da71f: je 0x7da7ec */
  if (zf) goto L_7da7ec;
L_7da725: /* 7da725: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 7da72b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da72d: je 0x7da7ec */
  if (zf) goto L_7da7ec;
L_7da733: /* 7da733: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7da739: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da73b: je 0x7da7ec */
  if (zf) goto L_7da7ec;
L_7da741: /* 7da741: push 0xb81b5c */
  { uint32_t v = 0xb81b5cu; esp -= 4; W32(esp, v); }
/* 7da746: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da749: call 0x6c1f55 */
  esp -= 4; W32(esp, 0x7da74eu); SPILL(); f_6c1f55(); if (g_unwind) return; RELOAD();
/* 7da74e: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7da754: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da755: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da758: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7da75c: call 0x7cf4c0 */
  esp -= 4; W32(esp, 0x7da761u); SPILL(); f_7cf4c0(); if (g_unwind) return; RELOAD();
/* 7da761: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7da767: mov edi, dword ptr [edx + 0xe4] */
  edi = R32((uint32_t)(edx + 0xe4u));
L_7da76d: /* 7da76d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da770: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da772: je 0x7da785 */
  if (zf) goto L_7da785;
L_7da774: /* 7da774: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da775: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da778: call 0x7cf4c0 */
  esp -= 4; W32(esp, 0x7da77du); SPILL(); f_7cf4c0(); if (g_unwind) return; RELOAD();
/* 7da77d: mov edi, dword ptr [edi + 0xe4] */
  edi = R32((uint32_t)(edi + 0xe4u));
/* 7da783: jmp 0x7da76d */
  goto L_7da76d;
L_7da785: /* 7da785: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7da788: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da78eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da78e: mov ecx, dword ptr [esi + 0x448] */
  ecx = R32((uint32_t)(esi + 0x448u));
/* 7da794: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da79a: mov edi, eax */
  edi = eax;
/* 7da79c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da7a2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da7a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da7a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da7a4: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da7a7: call 0x6c45de */
  esp -= 4; W32(esp, 0x7da7acu); SPILL(); f_6c45de(); if (g_unwind) return; RELOAD();
/* 7da7ac: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 7da7b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da7b3: call 0x6c951b */
  esp -= 4; W32(esp, 0x7da7b8u); SPILL(); f_6c951b(); if (g_unwind) return; RELOAD();
/* 7da7b8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da7bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da7bd: je 0x7da7df */
  if (zf) goto L_7da7df;
L_7da7bf: /* 7da7bf: mov ecx, dword ptr [esi + 0x4c0] */
  ecx = R32((uint32_t)(esi + 0x4c0u));
/* 7da7c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da7c6: call 0x6c951b */
  esp -= 4; W32(esp, 0x7da7cbu); SPILL(); f_6c951b(); if (g_unwind) return; RELOAD();
/* 7da7cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da7ce: push 0xb81b60 */
  { uint32_t v = 0xb81b60u; esp -= 4; W32(esp, v); }
/* 7da7d3: lea ecx, [eax + 0x128] */
  ecx = (uint32_t)(eax + 0x128u);
/* 7da7d9: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7da7dfu); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
L_7da7df: /* 7da7df: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7da7e2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7da7e6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7da7ecu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7da7ec: /* 7da7ec: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7da7ed: xor edi, edi */
  edi = 0;
/* 7da7ef: jmp 0x7da6f0 */
  goto L_7da6f0;
}

void f_7da7f4(void) {
  LOAD_REGS();
L_7da7f4: /* 7da7f4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7da7f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7da7fc: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7da7ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da800: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7da803: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7da808u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7da808(); return;
}

void f_7da808(void) {
  LOAD_REGS();
  goto L_7da808;
L_7da673: /* 7da673: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da676: call 0x6c312a */
  esp -= 4; W32(esp, 0x7da67bu); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 7da67b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7da67e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7da685: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7da686: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7da687: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7da688: mov esp, ebp */
  esp = ebp;
/* 7da68a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7da68b: ret 4 */
  esp += 8; SPILL(); return;
L_7da808: /* 7da808: push 0xa0f7c8 */
  { uint32_t v = 0xa0f7c8u; esp -= 4; W32(esp, v); }
/* 7da80d: push 0xadb52c */
  { uint32_t v = 0xadb52cu; esp -= 4; W32(esp, v); }
/* 7da812: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7da818u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7da818: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da81b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7da81d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7da81f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7da824u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7da824: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da827: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7da82a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da82c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7da82f: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7da833: je 0x7daa3b */
  if (zf) goto L_7daa3b;
L_7da839: /* 7da839: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da83c: je 0x7daa3b */
  if (zf) goto L_7daa3b;
L_7da842: /* 7da842: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7da845: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7da847: push 0xb81b68 */
  { uint32_t v = 0xb81b68u; esp -= 4; W32(esp, v); }
/* 7da84c: add ecx, 0x128 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da852: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7da858u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7da858: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da85a: je 0x7daa3b */
  if (zf) goto L_7daa3b;
L_7da860: /* 7da860: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da863: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7da866: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7da869: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7da86b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da86e: call 0x6c3d37 */
  esp -= 4; W32(esp, 0x7da873u); SPILL(); f_6c3d37(); if (g_unwind) return; RELOAD();
/* 7da873: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 7da879: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7da87d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da883u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da883: mov ecx, dword ptr [esi + 0x124] */
  ecx = R32((uint32_t)(esi + 0x124u));
/* 7da889: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da88c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da88d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da88e: add edx, 0x114 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7da894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da895: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da89b: call 0x6c440d */
  esp -= 4; W32(esp, 0x7da8a0u); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7da8a0: mov bl, 0xb */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xbu) & 0xffu);
/* 7da8a2: push 0xadb534 */
  { uint32_t v = 0xadb534u; esp -= 4; W32(esp, v); }
/* 7da8a7: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da8ad: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7da8b0: call 0x6c991c */
  esp -= 4; W32(esp, 0x7da8b5u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7da8b5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da8b7: je 0x7da8d6 */
  if (zf) goto L_7da8d6;
L_7da8b9: /* 7da8b9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da8bc: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7da8c2: add ecx, 0xd8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da8c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da8c9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da8cc: call 0x6c8436 */
  esp -= 4; W32(esp, 0x7da8d1u); SPILL(); f_6c8436(); if (g_unwind) return; RELOAD();
/* 7da8d1: jmp 0x7da98e */
  goto L_7da98e;
L_7da8d6: /* 7da8d6: cmp dword ptr [esi + 0x134], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x134u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7da8dc: je 0x7da98e */
  if (zf) goto L_7da98e;
L_7da8e2: /* 7da8e2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7da8e5: mov ecx, dword ptr [edx + 0x448] */
  ecx = R32((uint32_t)(edx + 0x448u));
/* 7da8eb: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da8f1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da8f7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da8f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da8f8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7da8fd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7da8ff: push 0xadb544 */
  { uint32_t v = 0xadb544u; esp -= 4; W32(esp, v); }
/* 7da904: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da905: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7da90bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7da90b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da90e: push 0xb81b6c */
  { uint32_t v = 0xb81b6cu; esp -= 4; W32(esp, v); }
/* 7da913: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da916: call 0x6c1f55 */
  esp -= 4; W32(esp, 0x7da91bu); SPILL(); f_6c1f55(); if (g_unwind) return; RELOAD();
/* 7da91b: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7da91e: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 7da924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da925: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da928: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7da92c: call 0x7cf4c0 */
  esp -= 4; W32(esp, 0x7da931u); SPILL(); f_7cf4c0(); if (g_unwind) return; RELOAD();
/* 7da931: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7da934: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 7da93a: mov edi, dword ptr [edx + 0xe4] */
  edi = R32((uint32_t)(edx + 0xe4u));
L_7da940: /* 7da940: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7da943: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7da945: je 0x7da958 */
  if (zf) goto L_7da958;
L_7da947: /* 7da947: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da948: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7da94b: call 0x7cf4c0 */
  esp -= 4; W32(esp, 0x7da950u); SPILL(); f_7cf4c0(); if (g_unwind) return; RELOAD();
/* 7da950: mov edi, dword ptr [edi + 0xe4] */
  edi = R32((uint32_t)(edi + 0xe4u));
/* 7da956: jmp 0x7da940 */
  goto L_7da940;
L_7da958: /* 7da958: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7da95b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da961u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da961: mov edi, eax */
  edi = eax;
/* 7da963: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7da966: mov ecx, dword ptr [eax + 0x448] */
  ecx = R32((uint32_t)(eax + 0x448u));
/* 7da96c: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7da972: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da978u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da978: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7da979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da97a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da97d: call 0x6c45de */
  esp -= 4; W32(esp, 0x7da982u); SPILL(); f_6c45de(); if (g_unwind) return; RELOAD();
/* 7da982: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7da985: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7da988: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7da98eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7da98e: /* 7da98e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da991: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7da997u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7da997: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da99a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7da99b: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7da99e: lea edi, [esi + 0x128] */
  edi = (uint32_t)(esi + 0x128u);
/* 7da9a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da9a5: mov ecx, edi */
  ecx = edi;
/* 7da9a7: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7da9ab: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7da9b1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7da9b1: mov edx, dword ptr [esi + 0x124] */
  edx = R32((uint32_t)(esi + 0x124u));
/* 7da9b7: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7da9ba: mov ecx, esp */
  ecx = esp;
/* 7da9bc: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7da9bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7da9c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da9c1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da9c4: add eax, 0x114 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7da9c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7da9ca: call 0x6c440d */
  esp -= 4; W32(esp, 0x7da9cfu); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7da9cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7da9d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7da9d4: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x7da9dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7da9da: push 0xb81b70 */
  { uint32_t v = 0xb81b70u; esp -= 4; W32(esp, v); }
/* 7da9df: mov ecx, edi */
  ecx = edi;
/* 7da9e1: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7da9e7u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7da9e7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7da9ea: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7da9ed: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7da9f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7da9f3: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7da9f9: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7da9fd: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7daa02u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7daa02: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7daa06: jmp 0x7da673 */
  goto L_7da673;
L_7daa3b: /* 7daa3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa3e: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7daa44: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daa46: mov ebx, 0xf */
  ebx = 0xfu;
/* 7daa4b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7daa4e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7daa51: je 0x7dab5e */
  if (zf) goto L_7dab5e;
L_7daa57: /* 7daa57: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7daa5a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7daa5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7daa5d: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7daa60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daa60: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa63: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 7daa69: push 0xb81b74 */
  { uint32_t v = 0xb81b74u; esp -= 4; W32(esp, v); }
/* 7daa6e: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daa74: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7daa7au); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7daa7a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daa7c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa7f: je 0x7dabf8 */
  if (zf) goto L_7dabf8;
L_7daa85: /* 7daa85: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7daa8b: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daa91: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7daa95: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7daa9bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7daa9b: mov ebx, dword ptr [0xcfa904] */
  ebx = R32((uint32_t)(0xcfa904u));
/* 7daaa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7daaa3: push 0xadb578 */
  { uint32_t v = 0xadb578u; esp -= 4; W32(esp, v); }
/* 7daaa8: push 0xadb588 */
  { uint32_t v = 0xadb588u; esp -= 4; W32(esp, v); }
/* 7daaad: mov esi, eax */
  esi = eax;
/* 7daaaf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7daab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daab1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daab4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7daab6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7daab9: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 7daabe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7daabf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7daac0: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7daac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daac9: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7daacf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7daad1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7daad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7daad5: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daad8: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x7daaddu); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 7daadd: mov esi, eax */
  esi = eax;
/* 7daadf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daae2: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7daae8: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daaee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7daaf2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7daaf8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7daaf8: mov ecx, esi */
  ecx = esi;
/* 7daafa: mov edi, eax */
  edi = eax;
/* 7daafc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dab02u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dab02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dab04: push 0xadb5ac */
  { uint32_t v = 0xadb5acu; esp -= 4; W32(esp, v); }
/* 7dab09: push 0xadb5bc */
  { uint32_t v = 0xadb5bcu; esp -= 4; W32(esp, v); }
/* 7dab0e: mov esi, eax */
  esi = eax;
/* 7dab10: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7dab12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dab12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dab15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dab16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dab17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dab18: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7dab1d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7dab1f: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7dab24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dab25: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7dab2bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7dab2b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dab2e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dab31: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7dab35: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dab3bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dab3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab3e: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7dab44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dab46: je 0x7dab4f */
  if (zf) goto L_7dab4f;
L_7dab48: /* 7dab48: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dab4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dab4c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7dab4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dab4f: /* 7dab4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab52: mov dword ptr [ecx + 0x110], 0 */
  W32((uint32_t)(ecx + 0x110u), 0x0u);
/* 7dab5c: xor edi, edi */
  edi = 0;
L_7dab5e: /* 7dab5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab61: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7dab64: xor eax, eax */
  eax = 0;
/* 7dab66: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dab68: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dab6b: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7dab6f: je 0x7dab8b */
  if (zf) goto L_7dab8b;
L_7dab71: /* 7dab71: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab73: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab76: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7dab79: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 7dab7b: mov esi, eax */
  esi = eax;
/* 7dab7d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dab7f: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7dab85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dab85: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab87: lea eax, [esi + eax - 0xc] */
  eax = (uint32_t)(esi + eax + 0xfffffff4u);
L_7dab8b: /* 7dab8b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab8e: mov dword ptr [ecx + 0x70], eax */
  W32((uint32_t)(ecx + 0x70u), eax);
/* 7dab91: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab93: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7dab96: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab99: lea eax, [eax + edx - 0xc] */
  eax = (uint32_t)(eax + edx + 0xfffffff4u);
/* 7dab9d: mov dword ptr [ecx + 0x68], eax */
  W32((uint32_t)(ecx + 0x68u), eax);
/* 7daba0: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 7daba5: add dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax), r);
  }
/* 7daba8: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 7dabad: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7dabb0: adc ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 7dabb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dabb3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7dabb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dabb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dabba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dabc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dabc2: mov esp, ebp */
  esp = ebp;
/* 7dabc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dabc5: ret 4 */
  esp += 8; SPILL(); return;
L_7dabf8: /* 7dabf8: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dabfe: cmp dword ptr [eax + 0x8c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac04: je 0x7dab5e */
  if (zf) goto L_7dab5e;
L_7dac0a: /* 7dac0a: cmp dword ptr [eax + 0x98], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x98u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac10: jne 0x7dab5e */
  if (!zf) goto L_7dab5e;
L_7dac16: /* 7dac16: cmp dword ptr [eax + 0x90], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac1c: jne 0x7dab5e */
  if (!zf) goto L_7dab5e;
L_7dac22: /* 7dac22: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac25: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dac2bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dac2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac2e: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dac34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dac36: lea esi, [ebp - 0x24] */
  esi = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dac3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dac3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac3c: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dac3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac40: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7dac44: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7dac4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dac4a: push 0xb81b78 */
  { uint32_t v = 0xb81b78u; esp -= 4; W32(esp, v); }
/* 7dac4f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac52: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7dac58u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7dac58: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac5a: je 0x7dac92 */
  if (zf) goto L_7dac92;
L_7dac5c: /* 7dac5c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac5f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dac65u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dac65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dac66: push 0xadb5d4 */
  { uint32_t v = 0xadb5d4u; esp -= 4; W32(esp, v); }
/* 7dac6b: push 0xadb5e4 */
  { uint32_t v = 0xadb5e4u; esp -= 4; W32(esp, v); }
/* 7dac70: mov esi, eax */
  esi = eax;
/* 7dac72: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7dac78u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7dac78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dac7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dac80: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 7dac85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dac86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac87: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7dac8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dac8d: jmp 0x7dad1c */
  goto L_7dad1c;
L_7dac92: /* 7dac92: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac95: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dac9b: cmp dword ptr [eax + 0x94], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x94u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daca1: jne 0x7dad1c */
  if (!zf) goto L_7dad1c;
L_7daca3: /* 7daca3: cmp dword ptr [ecx + 0x180], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x180u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daca9: je 0x7dacba */
  if (zf) goto L_7dacba;
L_7dacab: /* 7dacab: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7dacb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dacb2: call 0x6c1c8a */
  esp -= 4; W32(esp, 0x7dacb7u); SPILL(); f_6c1c8a(); if (g_unwind) return; RELOAD();
/* 7dacb7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7dacba: /* 7dacba: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 7dacc0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7dacc3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dacc5: mov byte ptr [eax + 0x4bc], 3 */
  W8((uint32_t)(eax + 0x4bcu), 0x3u);
/* 7daccc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daccf: mov eax, dword ptr [edx + 0x10c] */
  eax = R32((uint32_t)(edx + 0x10cu));
/* 7dacd5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7dacd8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dacda: mov byte ptr [eax + 0x4bc], 3 */
  W8((uint32_t)(eax + 0x4bcu), 0x3u);
/* 7dace1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dace4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7dace7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dace9: je 0x7dacf3 */
  if (zf) goto L_7dacf3;
L_7daceb: /* 7daceb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7daced: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7dacf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dacf3: /* 7dacf3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dacf6: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7dacfc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dacfe: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7dad01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dad01: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad04: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 7dad0a: mov dword ptr [ecx + 0x3c], edi */
  W32((uint32_t)(ecx + 0x3cu), edi);
/* 7dad0d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad10: mov eax, dword ptr [edx + 0x110] */
  eax = R32((uint32_t)(edx + 0x110u));
/* 7dad16: mov dword ptr [eax + 0x88], edi */
  W32((uint32_t)(eax + 0x88u), edi);
L_7dad1c: /* 7dad1c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad1f: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7dad25: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dad27: mov dword ptr [ebp - 4], 0x13 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7dad2e: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7dad32: je 0x7dad3b */
  if (zf) goto L_7dad3b;
L_7dad34: /* 7dad34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dad36: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dad38: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dad3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dad3b: /* 7dad3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad3e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dad41: mov dword ptr [edx + 0x110], edi */
  W32((uint32_t)(edx + 0x110u), edi);
/* 7dad47: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dad4a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dad50u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dad50: jmp 0x7dab5e */
  goto L_7dab5e;
}

void f_7daa0b(void) {
  LOAD_REGS();
L_7daa0b: /* 7daa0b: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7daa0e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7daa13: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7daa16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7daa17: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7daa1a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7daa1fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7daa1f(); return;
}

void f_7daa1f(void) {
  LOAD_REGS();
L_7daa1f: /* 7daa1f: push 0xa0f7a8 */
  { uint32_t v = 0xa0f7a8u; esp -= 4; W32(esp, v); }
/* 7daa24: push 0xadb570 */
  { uint32_t v = 0xadb570u; esp -= 4; W32(esp, v); }
/* 7daa29: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7daa2fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7daa2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7daa32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7daa34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7daa36: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7daa3bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7daa3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa3e: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7daa44: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daa46: mov ebx, 0xf */
  ebx = 0xfu;
/* 7daa4b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7daa4e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7daa51: je 0x7dab5e */
  if (zf) goto L_7dab5e;
L_7daa57: /* 7daa57: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7daa5a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7daa5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7daa5d: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7daa60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daa60: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa63: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 7daa69: push 0xb81b74 */
  { uint32_t v = 0xb81b74u; esp -= 4; W32(esp, v); }
/* 7daa6e: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daa74: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7daa7au); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7daa7a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daa7c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daa7f: je 0x7dabf8 */
  if (zf) goto L_7dabf8;
L_7daa85: /* 7daa85: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7daa8b: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daa91: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7daa95: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7daa9bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7daa9b: mov ebx, dword ptr [0xcfa904] */
  ebx = R32((uint32_t)(0xcfa904u));
/* 7daaa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7daaa3: push 0xadb578 */
  { uint32_t v = 0xadb578u; esp -= 4; W32(esp, v); }
/* 7daaa8: push 0xadb588 */
  { uint32_t v = 0xadb588u; esp -= 4; W32(esp, v); }
/* 7daaad: mov esi, eax */
  esi = eax;
/* 7daaaf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7daab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daab1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daab4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7daab6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7daab9: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 7daabe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7daabf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7daac0: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7daac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7daac6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daac9: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7daacf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7daad1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7daad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7daad5: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daad8: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x7daaddu); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 7daadd: mov esi, eax */
  esi = eax;
/* 7daadf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daae2: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7daae8: add ecx, 0x9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7daaee: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7daaf2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7daaf8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7daaf8: mov ecx, esi */
  ecx = esi;
/* 7daafa: mov edi, eax */
  edi = eax;
/* 7daafc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dab02u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dab02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dab04: push 0xadb5ac */
  { uint32_t v = 0xadb5acu; esp -= 4; W32(esp, v); }
/* 7dab09: push 0xadb5bc */
  { uint32_t v = 0xadb5bcu; esp -= 4; W32(esp, v); }
/* 7dab0e: mov esi, eax */
  esi = eax;
/* 7dab10: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7dab12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dab12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dab15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dab16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dab17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dab18: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7dab1d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7dab1f: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7dab24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dab25: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7dab2bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7dab2b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dab2e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dab31: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7dab35: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dab3bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dab3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab3e: mov ecx, dword ptr [edx + 0x110] */
  ecx = R32((uint32_t)(edx + 0x110u));
/* 7dab44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dab46: je 0x7dab4f */
  if (zf) goto L_7dab4f;
L_7dab48: /* 7dab48: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dab4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dab4c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7dab4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dab4f: /* 7dab4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab52: mov dword ptr [ecx + 0x110], 0 */
  W32((uint32_t)(ecx + 0x110u), 0x0u);
/* 7dab5c: xor edi, edi */
  edi = 0;
L_7dab5e: /* 7dab5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab61: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7dab64: xor eax, eax */
  eax = 0;
/* 7dab66: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dab68: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dab6b: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7dab6f: je 0x7dab8b */
  if (zf) goto L_7dab8b;
L_7dab71: /* 7dab71: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab73: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab76: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7dab79: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 7dab7b: mov esi, eax */
  esi = eax;
/* 7dab7d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dab7f: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7dab85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dab85: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab87: lea eax, [esi + eax - 0xc] */
  eax = (uint32_t)(esi + eax + 0xfffffff4u);
L_7dab8b: /* 7dab8b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab8e: mov dword ptr [ecx + 0x70], eax */
  W32((uint32_t)(ecx + 0x70u), eax);
/* 7dab91: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab93: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7dab96: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab99: lea eax, [eax + edx - 0xc] */
  eax = (uint32_t)(eax + edx + 0xfffffff4u);
/* 7dab9d: mov dword ptr [ecx + 0x68], eax */
  W32((uint32_t)(ecx + 0x68u), eax);
/* 7daba0: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 7daba5: add dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax), r);
  }
/* 7daba8: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 7dabad: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7dabb0: adc ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 7dabb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dabb3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7dabb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dabb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dabba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dabc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dabc2: mov esp, ebp */
  esp = ebp;
/* 7dabc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dabc5: ret 4 */
  esp += 8; SPILL(); return;
L_7dabf8: /* 7dabf8: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dabfe: cmp dword ptr [eax + 0x8c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac04: je 0x7dab5e */
  if (zf) goto L_7dab5e;
L_7dac0a: /* 7dac0a: cmp dword ptr [eax + 0x98], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x98u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac10: jne 0x7dab5e */
  if (!zf) goto L_7dab5e;
L_7dac16: /* 7dac16: cmp dword ptr [eax + 0x90], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac1c: jne 0x7dab5e */
  if (!zf) goto L_7dab5e;
L_7dac22: /* 7dac22: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac25: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dac2bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dac2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac2e: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dac34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dac36: lea esi, [ebp - 0x24] */
  esi = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dac3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dac3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac3c: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dac3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac40: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7dac44: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7dac4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dac4a: push 0xb81b78 */
  { uint32_t v = 0xb81b78u; esp -= 4; W32(esp, v); }
/* 7dac4f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac52: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7dac58u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7dac58: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac5a: je 0x7dac92 */
  if (zf) goto L_7dac92;
L_7dac5c: /* 7dac5c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac5f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dac65u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dac65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dac66: push 0xadb5d4 */
  { uint32_t v = 0xadb5d4u; esp -= 4; W32(esp, v); }
/* 7dac6b: push 0xadb5e4 */
  { uint32_t v = 0xadb5e4u; esp -= 4; W32(esp, v); }
/* 7dac70: mov esi, eax */
  esi = eax;
/* 7dac72: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7dac78u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7dac78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dac7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dac80: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 7dac85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dac86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac87: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7dac8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dac8d: jmp 0x7dad1c */
  goto L_7dad1c;
L_7dac92: /* 7dac92: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac95: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dac9b: cmp dword ptr [eax + 0x94], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x94u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daca1: jne 0x7dad1c */
  if (!zf) goto L_7dad1c;
L_7daca3: /* 7daca3: cmp dword ptr [ecx + 0x180], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x180u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daca9: je 0x7dacba */
  if (zf) goto L_7dacba;
L_7dacab: /* 7dacab: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7dacb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dacb2: call 0x6c1c8a */
  esp -= 4; W32(esp, 0x7dacb7u); SPILL(); f_6c1c8a(); if (g_unwind) return; RELOAD();
/* 7dacb7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7dacba: /* 7dacba: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 7dacc0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7dacc3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dacc5: mov byte ptr [eax + 0x4bc], 3 */
  W8((uint32_t)(eax + 0x4bcu), 0x3u);
/* 7daccc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daccf: mov eax, dword ptr [edx + 0x10c] */
  eax = R32((uint32_t)(edx + 0x10cu));
/* 7dacd5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7dacd8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dacda: mov byte ptr [eax + 0x4bc], 3 */
  W8((uint32_t)(eax + 0x4bcu), 0x3u);
/* 7dace1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dace4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7dace7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dace9: je 0x7dacf3 */
  if (zf) goto L_7dacf3;
L_7daceb: /* 7daceb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7daced: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7dacf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dacf3: /* 7dacf3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dacf6: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7dacfc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dacfe: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7dad01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dad01: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad04: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 7dad0a: mov dword ptr [ecx + 0x3c], edi */
  W32((uint32_t)(ecx + 0x3cu), edi);
/* 7dad0d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad10: mov eax, dword ptr [edx + 0x110] */
  eax = R32((uint32_t)(edx + 0x110u));
/* 7dad16: mov dword ptr [eax + 0x88], edi */
  W32((uint32_t)(eax + 0x88u), edi);
L_7dad1c: /* 7dad1c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad1f: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7dad25: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dad27: mov dword ptr [ebp - 4], 0x13 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7dad2e: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7dad32: je 0x7dad3b */
  if (zf) goto L_7dad3b;
L_7dad34: /* 7dad34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dad36: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dad38: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dad3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dad3b: /* 7dad3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad3e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dad41: mov dword ptr [edx + 0x110], edi */
  W32((uint32_t)(edx + 0x110u), edi);
/* 7dad47: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dad4a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dad50u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dad50: jmp 0x7dab5e */
  goto L_7dab5e;
}

void f_7dabc8(void) {
  LOAD_REGS();
L_7dabc8: /* 7dabc8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dabcb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dabd0: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 7dabd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dabd4: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 7dabd7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dabdcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dabdc(); return;
}

void f_7dabdc(void) {
  LOAD_REGS();
  goto L_7dabdc;
L_7dab5e: /* 7dab5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab61: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7dab64: xor eax, eax */
  eax = 0;
/* 7dab66: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dab68: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dab6b: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7dab6f: je 0x7dab8b */
  if (zf) goto L_7dab8b;
L_7dab71: /* 7dab71: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab73: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab76: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7dab79: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 7dab7b: mov esi, eax */
  esi = eax;
/* 7dab7d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dab7f: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7dab85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dab85: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab87: lea eax, [esi + eax - 0xc] */
  eax = (uint32_t)(esi + eax + 0xfffffff4u);
L_7dab8b: /* 7dab8b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab8e: mov dword ptr [ecx + 0x70], eax */
  W32((uint32_t)(ecx + 0x70u), eax);
/* 7dab91: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7dab93: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7dab96: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dab99: lea eax, [eax + edx - 0xc] */
  eax = (uint32_t)(eax + edx + 0xfffffff4u);
/* 7dab9d: mov dword ptr [ecx + 0x68], eax */
  W32((uint32_t)(ecx + 0x68u), eax);
/* 7daba0: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 7daba5: add dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(eax), r);
  }
/* 7daba8: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 7dabad: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7dabb0: adc ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 7dabb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dabb3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7dabb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dabb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dabba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dabc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dabc2: mov esp, ebp */
  esp = ebp;
/* 7dabc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dabc5: ret 4 */
  esp += 8; SPILL(); return;
L_7dabdc: /* 7dabdc: push 0xa0f784 */
  { uint32_t v = 0xa0f784u; esp -= 4; W32(esp, v); }
/* 7dabe1: push 0xadb5cc */
  { uint32_t v = 0xadb5ccu; esp -= 4; W32(esp, v); }
/* 7dabe6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dabecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dabec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dabef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dabf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dabf3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dabf8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7dabf8: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dabfe: cmp dword ptr [eax + 0x8c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac04: je 0x7dab5e */
  if (zf) goto L_7dab5e;
L_7dac0a: /* 7dac0a: cmp dword ptr [eax + 0x98], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x98u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac10: jne 0x7dab5e */
  if (!zf) goto L_7dab5e;
L_7dac16: /* 7dac16: cmp dword ptr [eax + 0x90], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac1c: jne 0x7dab5e */
  if (!zf) goto L_7dab5e;
L_7dac22: /* 7dac22: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac25: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dac2bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dac2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac2e: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dac34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dac36: lea esi, [ebp - 0x24] */
  esi = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dac3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dac3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac3c: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dac3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac40: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7dac44: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7dac4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dac4a: push 0xb81b78 */
  { uint32_t v = 0xb81b78u; esp -= 4; W32(esp, v); }
/* 7dac4f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac52: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7dac58u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7dac58: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dac5a: je 0x7dac92 */
  if (zf) goto L_7dac92;
L_7dac5c: /* 7dac5c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dac5f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dac65u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dac65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dac66: push 0xadb5d4 */
  { uint32_t v = 0xadb5d4u; esp -= 4; W32(esp, v); }
/* 7dac6b: push 0xadb5e4 */
  { uint32_t v = 0xadb5e4u; esp -= 4; W32(esp, v); }
/* 7dac70: mov esi, eax */
  esi = eax;
/* 7dac72: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7dac78u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7dac78: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dac7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dac80: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 7dac85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dac86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dac87: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7dac8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dac8d: jmp 0x7dad1c */
  goto L_7dad1c;
L_7dac92: /* 7dac92: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dac95: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7dac9b: cmp dword ptr [eax + 0x94], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x94u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daca1: jne 0x7dad1c */
  if (!zf) goto L_7dad1c;
L_7daca3: /* 7daca3: cmp dword ptr [ecx + 0x180], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x180u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7daca9: je 0x7dacba */
  if (zf) goto L_7dacba;
L_7dacab: /* 7dacab: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7dacb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dacb2: call 0x6c1c8a */
  esp -= 4; W32(esp, 0x7dacb7u); SPILL(); f_6c1c8a(); if (g_unwind) return; RELOAD();
/* 7dacb7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7dacba: /* 7dacba: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 7dacc0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7dacc3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dacc5: mov byte ptr [eax + 0x4bc], 3 */
  W8((uint32_t)(eax + 0x4bcu), 0x3u);
/* 7daccc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7daccf: mov eax, dword ptr [edx + 0x10c] */
  eax = R32((uint32_t)(edx + 0x10cu));
/* 7dacd5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7dacd8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dacda: mov byte ptr [eax + 0x4bc], 3 */
  W8((uint32_t)(eax + 0x4bcu), 0x3u);
/* 7dace1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dace4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7dace7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dace9: je 0x7dacf3 */
  if (zf) goto L_7dacf3;
L_7daceb: /* 7daceb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7daced: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7dacf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dacf3: /* 7dacf3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dacf6: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7dacfc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dacfe: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7dad01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dad01: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad04: mov ecx, dword ptr [eax + 0x110] */
  ecx = R32((uint32_t)(eax + 0x110u));
/* 7dad0a: mov dword ptr [ecx + 0x3c], edi */
  W32((uint32_t)(ecx + 0x3cu), edi);
/* 7dad0d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad10: mov eax, dword ptr [edx + 0x110] */
  eax = R32((uint32_t)(edx + 0x110u));
/* 7dad16: mov dword ptr [eax + 0x88], edi */
  W32((uint32_t)(eax + 0x88u), edi);
L_7dad1c: /* 7dad1c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad1f: mov ecx, dword ptr [ecx + 0x110] */
  ecx = R32((uint32_t)(ecx + 0x110u));
/* 7dad25: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dad27: mov dword ptr [ebp - 4], 0x13 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7dad2e: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7dad32: je 0x7dad3b */
  if (zf) goto L_7dad3b;
L_7dad34: /* 7dad34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dad36: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7dad38: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dad3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dad3b: /* 7dad3b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dad3e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7dad41: mov dword ptr [edx + 0x110], edi */
  W32((uint32_t)(edx + 0x110u), edi);
/* 7dad47: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dad4a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dad50u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dad50: jmp 0x7dab5e */
  goto L_7dab5e;
}

void f_7dad55(void) {
  LOAD_REGS();
L_7dad55: /* 7dad55: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dad58: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dad5d: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7dad60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dad61: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 7dad64: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dad69u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dad69(); return;
}

void f_7dad69(void) {
  LOAD_REGS();
L_7dad69: /* 7dad69: push 0xa0f768 */
  { uint32_t v = 0xa0f768u; esp -= 4; W32(esp, v); }
/* 7dad6e: push 0xadb610 */
  { uint32_t v = 0xadb610u; esp -= 4; W32(esp, v); }
/* 7dad73: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dad79u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dad79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dad7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dad7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dad80: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dad85u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dad85(); return;
}

void f_7dad85(void) {
  LOAD_REGS();
L_7dad85: /* 7dad85: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dad88: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dad8d: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7dad90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dad91: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7dad94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dad99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dad99(); return;
}

void f_7dad99(void) {
  LOAD_REGS();
L_7dad99: /* 7dad99: push 0xa0f738 */
  { uint32_t v = 0xa0f738u; esp -= 4; W32(esp, v); }
/* 7dad9e: push 0xadb608 */
  { uint32_t v = 0xadb608u; esp -= 4; W32(esp, v); }
/* 7dada3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dada9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dada9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dadac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dadae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dadb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dadb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dadb5(); return;
}

void f_7dadb5(void) {
  LOAD_REGS();
L_7dadb5: /* 7dadb5: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7dadb8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dadbd: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 7dadc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dadc1: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7dadc4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dadc9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dadc9(); return;
}

void f_7dadc9(void) {
  LOAD_REGS();
L_7dadc9: /* 7dadc9: push 0xa0f71c */
  { uint32_t v = 0xa0f71cu; esp -= 4; W32(esp, v); }
/* 7dadce: push 0xadb618 */
  { uint32_t v = 0xadb618u; esp -= 4; W32(esp, v); }
/* 7dadd3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dadd9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dadd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7daddc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dadde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dade0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dade5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dade5(); return;
}

void f_7dade5(void) {
  LOAD_REGS();
L_7dade5: /* 7dade5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dade8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7daded: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 7dadf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dadf1: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7dadf4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dadf9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dadf9(); return;
}

void f_7dadf9(void) {
  LOAD_REGS();
L_7dadf9: /* 7dadf9: push 0xa0f700 */
  { uint32_t v = 0xa0f700u; esp -= 4; W32(esp, v); }
/* 7dadfe: push 0xadb620 */
  { uint32_t v = 0xadb620u; esp -= 4; W32(esp, v); }
/* 7dae03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dae09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dae09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dae0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dae0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dae10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dae15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dae15(); return;
}

void f_7dae15(void) {
  LOAD_REGS();
L_7dae15: /* 7dae15: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7dae18: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dae1d: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 7dae20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dae21: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 7dae24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dae29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dae29(); return;
}

void f_7dae29(void) {
  LOAD_REGS();
L_7dae29: /* 7dae29: push 0xa0f6d4 */
  { uint32_t v = 0xa0f6d4u; esp -= 4; W32(esp, v); }
/* 7dae2e: push 0xadb628 */
  { uint32_t v = 0xadb628u; esp -= 4; W32(esp, v); }
/* 7dae33: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dae39u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dae39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dae3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dae3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dae40: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dae45u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dae45: guest_badaddr(0x7dae45); return;
}

void f_7db190(void) {
  LOAD_REGS();
L_7db190: /* 7db190: mov dword ptr [ecx], 0xa0f800 */
  W32((uint32_t)(ecx), 0xa0f800u);
/* 7db196: ret  */
  esp += 4; SPILL(); return;
}

void f_7db1b0(void) {
  LOAD_REGS();
L_7db1b0: /* 7db1b0: mov eax, ecx */
  eax = ecx;
/* 7db1b2: mov dword ptr [eax], 0xa0f800 */
  W32((uint32_t)(eax), 0xa0f800u);
/* 7db1b8: ret  */
  esp += 4; SPILL(); return;
}

void f_7db1d0(void) {
  LOAD_REGS();
L_7db1d0: /* 7db1d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db1d1: mov esi, ecx */
  esi = ecx;
/* 7db1d3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7db1d9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7db1d9: mov eax, esi */
  eax = esi;
/* 7db1db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db1dc: ret  */
  esp += 4; SPILL(); return;
}

void f_7db1f0(void) {
  LOAD_REGS();
L_7db1f0: /* 7db1f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7db1f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db1f6: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 7db1f9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7db1fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db210(void) {
  LOAD_REGS();
L_7db210: /* 7db210: mov eax, ecx */
  eax = ecx;
/* 7db212: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7db216: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7db218: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7db21b: xor ecx, ecx */
  ecx = 0;
/* 7db21d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7db220: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7db223: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db240(void) {
  LOAD_REGS();
L_7db240: /* 7db240: inc dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 7db243: ret  */
  esp += 4; SPILL(); return;
}

void f_7db260(void) {
  LOAD_REGS();
L_7db260: /* 7db260: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7db263: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7db266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db267: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7db26a: xor edx, edx */
  edx = 0;
/* 7db26c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db26e: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7db271: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db272: mov eax, edx */
  eax = edx;
/* 7db274: ret  */
  esp += 4; SPILL(); return;
}

void f_7db290(void) {
  LOAD_REGS();
L_7db290: /* 7db290: mov eax, ecx */
  eax = ecx;
/* 7db292: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7db296: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7db298: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7db29b: xor ecx, ecx */
  ecx = 0;
/* 7db29d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7db2a0: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7db2a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db2c0(void) {
  LOAD_REGS();
L_7db2c0: /* 7db2c0: inc dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 7db2c3: ret  */
  esp += 4; SPILL(); return;
}

void f_7db2e0(void) {
  LOAD_REGS();
L_7db2e0: /* 7db2e0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7db2e3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7db2e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db2e7: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7db2ea: xor edx, edx */
  edx = 0;
/* 7db2ec: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db2ee: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7db2f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db2f2: mov eax, edx */
  eax = edx;
/* 7db2f4: ret  */
  esp += 4; SPILL(); return;
}

void f_7db310(void) {
  LOAD_REGS();
L_7db310: /* 7db310: mov eax, ecx */
  eax = ecx;
/* 7db312: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7db316: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7db318: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7db31b: xor ecx, ecx */
  ecx = 0;
/* 7db31d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7db320: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7db323: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db340(void) {
  LOAD_REGS();
L_7db340: /* 7db340: inc dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* 7db343: ret  */
  esp += 4; SPILL(); return;
}

void f_7db360(void) {
  LOAD_REGS();
L_7db360: /* 7db360: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7db363: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7db366: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db367: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7db36a: xor edx, edx */
  edx = 0;
/* 7db36c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db36e: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7db371: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db372: mov eax, edx */
  eax = edx;
/* 7db374: ret  */
  esp += 4; SPILL(); return;
}

void f_7db390(void) {
  LOAD_REGS();
L_7db390: /* 7db390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db391: mov esi, ecx */
  esi = ecx;
/* 7db393: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7db399u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7db399: mov eax, esi */
  eax = esi;
/* 7db39b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db39c: ret  */
  esp += 4; SPILL(); return;
}

void f_7db3b0(void) {
  LOAD_REGS();
L_7db3b0: /* 7db3b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7db3b4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7db3b6: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7db3b9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7db3bc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db3d0(void) {
  LOAD_REGS();
L_7db3d0: /* 7db3d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db3d1: mov esi, ecx */
  esi = ecx;
/* 7db3d3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7db3d9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7db3d9: mov eax, esi */
  eax = esi;
/* 7db3db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db3dc: ret  */
  esp += 4; SPILL(); return;
}

void f_7db3f0(void) {
  LOAD_REGS();
L_7db3f0: /* 7db3f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7db3f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db3f6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7db3f9: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7db3fc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7db3fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db420(void) {
  LOAD_REGS();
L_7db420: /* 7db420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db421: mov esi, ecx */
  esi = ecx;
/* 7db423: call dword ptr [0xcfa938] */
  esp -= 4; W32(esp, 0x7db429u); SPILL(); f_4e3d00(); if (g_unwind) return; /* Core!??1FRegistryObjectInfo@@QAE@XZ */ RELOAD();
/* 7db429: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7db42e: je 0x7db43d */
  if (zf) goto L_7db43d;
L_7db430: /* 7db430: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7db435: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7db437: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db439: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db43a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7db43du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7db43d: /* 7db43d: mov eax, esi */
  eax = esi;
/* 7db43f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db440: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db460(void) {
  LOAD_REGS();
L_7db460: /* 7db460: mov eax, 1 */
  eax = 0x1u;
/* 7db465: ret  */
  esp += 4; SPILL(); return;
}

void f_7db480(void) {
  LOAD_REGS();
L_7db480: /* 7db480: mov eax, 1 */
  eax = 0x1u;
/* 7db485: ret  */
  esp += 4; SPILL(); return;
}

void f_7db4a0(void) {
  LOAD_REGS();
L_7db4a0: /* 7db4a0: mov eax, 1 */
  eax = 0x1u;
/* 7db4a5: ret  */
  esp += 4; SPILL(); return;
}

void f_7db4c0(void) {
  LOAD_REGS();
L_7db4c0: /* 7db4c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7db4c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7db4c6: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7db4c9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7db4cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db4e0(void) {
  LOAD_REGS();
L_7db4e0: /* 7db4e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db4e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7db4e5: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7db4e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7db4e9: mov ecx, esi */
  ecx = esi;
/* 7db4eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7db4f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7db4f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7db4f3: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7db4f6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7db4f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db4fa: ret  */
  esp += 4; SPILL(); return;
}

void f_7db510(void) {
  LOAD_REGS();
L_7db510: /* 7db510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db511: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7db515: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7db517: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7db519: mov ecx, esi */
  ecx = esi;
/* 7db51b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7db521u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7db521: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7db523: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7db526: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7db529: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7db52b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db52c: ret  */
  esp += 4; SPILL(); return;
}

void f_7db540(void) {
  LOAD_REGS();
L_7db540: /* 7db540: test byte ptr [esp + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7db545: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db546: mov esi, ecx */
  esi = ecx;
/* 7db548: mov dword ptr [esi], 0xa0f800 */
  W32((uint32_t)(esi), 0xa0f800u);
/* 7db54e: je 0x7db55d */
  if (zf) goto L_7db55d;
L_7db550: /* 7db550: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7db555: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7db557: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db559: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db55a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7db55du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7db55d: /* 7db55d: mov eax, esi */
  eax = esi;
/* 7db55f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db560: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db580(void) {
  LOAD_REGS();
L_7db580: /* 7db580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db581: mov ebp, esp */
  ebp = esp;
/* 7db583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7db585: push 0x9d03d0 */
  { uint32_t v = 0x9d03d0u; esp -= 4; W32(esp, v); }
/* 7db58a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7db590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7db591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7db598: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7db59b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7db59e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7db5a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7db5a2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7db5a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db5a4: mov esi, ecx */
  esi = ecx;
/* 7db5a6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7db5a9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7db5ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7db5ad: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7db5b0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7db5b7: jne 0x7db5ce */
  if (!zf) goto L_7db5ce;
L_7db5b9: /* 7db5b9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7db5bc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7db5bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7db5bf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7db5c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7db5c3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7db5c8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7db5ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7db5ce: /* 7db5ce: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7db5d4: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7db5d7: add ecx, 0x130 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x130u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7db5dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7db5de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7db5e1: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7db5e7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7db5e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7db5ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7db5eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db5ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7db5f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7db5f4: mov esp, ebp */
  esp = ebp;
/* 7db5f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7db5f7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7db5fa(void) {
  LOAD_REGS();
L_7db5fa: /* 7db5fa: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7db5fd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7db602: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7db605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7db606: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7db609: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7db60eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7db60e(); return;
}

void f_7db60e(void) {
  LOAD_REGS();
L_7db60e: /* 7db60e: push 0xa0f860 */
  { uint32_t v = 0xa0f860u; esp -= 4; W32(esp, v); }
/* 7db613: push 0xadd2d4 */
  { uint32_t v = 0xadd2d4u; esp -= 4; W32(esp, v); }
/* 7db618: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7db61eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7db61e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7db621: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7db623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7db625: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7db62au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7db62a: guest_badaddr(0x7db62a); return;
}

void f_7db660(void) {
  LOAD_REGS();
L_7db660: /* 7db660: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7db661: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db662: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7db666: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db667: mov ebx, ecx */
  ebx = ecx;
/* 7db669: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7db66a: mov ecx, ebp */
  ecx = ebp;
/* 7db66c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7db672u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7db672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7db673: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7db678u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7db678: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 7db67b: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 7db67e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7db681: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7db682: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7db684: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 7db687: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7db68a: je 0x7db6b0 */
  if (zf) goto L_7db6b0;
L_7db68c: /* 7db68c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7db690: /* 7db690: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7db692: mov esi, edi */
  esi = edi;
/* 7db694: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7db697: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db698: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 7db69c: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7db6a2u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7db6a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7db6a4: jne 0x7db6b9 */
  if (!zf) goto L_7db6b9;
L_7db6a6: /* 7db6a6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7db6a8: mov edi, dword ptr [esi + ecx] */
  edi = R32((uint32_t)(esi + ecx));
/* 7db6ab: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7db6ae: jne 0x7db690 */
  if (!zf) goto L_7db690;
L_7db6b0: /* 7db6b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7db6b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db6b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7db6b3: xor eax, eax */
  eax = 0;
/* 7db6b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7db6b6: ret 4 */
  esp += 8; SPILL(); return;
L_7db6b9: /* 7db6b9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7db6bb: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 7db6be: lea eax, [edi + edx + 0x10] */
  eax = (uint32_t)(edi + edx + 0x10u);
/* 7db6c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7db6c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db6c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7db6c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7db6c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db6f0(void) {
  LOAD_REGS();
L_7db6f0: /* 7db6f0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7db6f3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7db6f6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7db6f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db6fb: lea eax, [eax + edx + 4] */
  eax = (uint32_t)(eax + edx + 0x4u);
/* 7db6ff: ret  */
  esp += 4; SPILL(); return;
}

void f_7db710(void) {
  LOAD_REGS();
L_7db710: /* 7db710: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7db713: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7db716: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7db719: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db71b: lea eax, [eax + edx + 0x10] */
  eax = (uint32_t)(eax + edx + 0x10u);
/* 7db71f: ret  */
  esp += 4; SPILL(); return;
}

void f_7db730(void) {
  LOAD_REGS();
L_7db730: /* 7db730: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7db731: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db732: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7db736: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db737: mov ebx, ecx */
  ebx = ecx;
/* 7db739: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7db73a: mov ecx, ebp */
  ecx = ebp;
/* 7db73c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7db742u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7db742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7db743: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7db748u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7db748: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 7db74b: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 7db74e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7db751: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7db752: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7db754: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 7db757: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7db75a: je 0x7db781 */
  if (zf) goto L_7db781;
L_7db75c: /* 7db75c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7db760: /* 7db760: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7db762: lea edi, [esi + esi*8] */
  edi = (uint32_t)(esi + esi*8);
/* 7db765: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7db768: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db769: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 7db76d: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7db773u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7db773: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7db775: jne 0x7db78a */
  if (!zf) goto L_7db78a;
L_7db777: /* 7db777: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7db779: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 7db77c: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7db77f: jne 0x7db760 */
  if (!zf) goto L_7db760;
L_7db781: /* 7db781: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7db782: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db783: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7db784: xor eax, eax */
  eax = 0;
/* 7db786: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7db787: ret 4 */
  esp += 8; SPILL(); return;
L_7db78a: /* 7db78a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7db78c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7db78d: lea edx, [esi + esi*8] */
  edx = (uint32_t)(esi + esi*8);
/* 7db790: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db791: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7db792: lea eax, [eax + edx*4 + 0x10] */
  eax = (uint32_t)(eax + edx*4 + 0x10u);
/* 7db796: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7db797: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db7c0(void) {
  LOAD_REGS();
L_7db7c0: /* 7db7c0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7db7c3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7db7c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db7c8: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7db7cb: lea eax, [edx + eax*4 + 4] */
  eax = (uint32_t)(edx + eax*4 + 0x4u);
/* 7db7cf: ret  */
  esp += 4; SPILL(); return;
}

void f_7db7e0(void) {
  LOAD_REGS();
L_7db7e0: /* 7db7e0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7db7e3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7db7e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db7e8: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7db7eb: lea eax, [edx + eax*4 + 0x10] */
  eax = (uint32_t)(edx + eax*4 + 0x10u);
/* 7db7ef: ret  */
  esp += 4; SPILL(); return;
}

void f_7db800(void) {
  LOAD_REGS();
L_7db800: /* 7db800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7db801: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db802: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7db806: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db807: mov ebx, ecx */
  ebx = ecx;
/* 7db809: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7db80a: mov ecx, ebp */
  ecx = ebp;
/* 7db80c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7db812u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7db812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7db813: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7db818u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7db818: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 7db81b: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 7db81e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7db821: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7db822: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7db824: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 7db827: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7db82a: je 0x7db851 */
  if (zf) goto L_7db851;
L_7db82c: /* 7db82c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7db830: /* 7db830: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7db832: lea edi, [esi + esi*2] */
  edi = (uint32_t)(esi + esi*2);
/* 7db835: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7db838: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db839: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 7db83d: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7db843u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7db843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7db845: jne 0x7db85a */
  if (!zf) goto L_7db85a;
L_7db847: /* 7db847: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7db849: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 7db84c: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7db84f: jne 0x7db830 */
  if (!zf) goto L_7db830;
L_7db851: /* 7db851: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7db852: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db853: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7db854: xor eax, eax */
  eax = 0;
/* 7db856: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7db857: ret 4 */
  esp += 8; SPILL(); return;
L_7db85a: /* 7db85a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7db85c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7db85d: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7db860: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db861: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7db864: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7db865: lea eax, [edx + eax + 0x10] */
  eax = (uint32_t)(edx + eax + 0x10u);
/* 7db869: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7db86a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7db890(void) {
  LOAD_REGS();
L_7db890: /* 7db890: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7db893: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7db896: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db898: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7db89b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7db89e: lea eax, [eax + edx + 4] */
  eax = (uint32_t)(eax + edx + 0x4u);
/* 7db8a2: ret  */
  esp += 4; SPILL(); return;
}

void f_7db8c0(void) {
  LOAD_REGS();
L_7db8c0: /* 7db8c0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7db8c3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7db8c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db8c8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7db8cb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7db8ce: lea eax, [eax + edx + 0x10] */
  eax = (uint32_t)(eax + edx + 0x10u);
/* 7db8d2: ret  */
  esp += 4; SPILL(); return;
}

void f_7db8f0(void) {
  LOAD_REGS();
L_7db8f0: /* 7db8f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7db8f1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7db8f5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7db8f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db8f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db8f9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7db8ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7db900: mov ebp, ecx */
  ebp = ecx;
/* 7db902: jge 0x7db918 */
  if ((sf == of)) goto L_7db918;
L_7db904: /* 7db904: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7db909: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7db90e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7db913: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7db915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7db915: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7db918: /* 7db918: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db91b: jle 0x7db931 */
  if ((zf || sf != of)) goto L_7db931;
L_7db91d: /* 7db91d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7db922: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7db927: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7db92c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7db92eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7db92e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7db931: /* 7db931: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7db935: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7db938: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db93b: jle 0x7db951 */
  if ((zf || sf != of)) goto L_7db951;
L_7db93d: /* 7db93d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7db942: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7db947: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7db94c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7db94eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7db94e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7db951: /* 7db951: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db953: jge 0x7db971 */
  if ((sf == of)) goto L_7db971;
L_7db955: /* 7db955: mov esi, ebx */
  esi = ebx;
/* 7db957: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* 7db95a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7db95c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7db960: /* 7db960: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7db963: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7db965: call dword ptr [0xcfa938] */
  esp -= 4; W32(esp, 0x7db96bu); SPILL(); f_4e3d00(); if (g_unwind) return; /* Core!??1FRegistryObjectInfo@@QAE@XZ */ RELOAD();
/* 7db96b: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7db96e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 7db96f: jne 0x7db960 */
  if (!zf) goto L_7db960;
L_7db971: /* 7db971: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7db975: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7db977: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7db978: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7db979: mov ecx, ebp */
  ecx = ebp;
/* 7db97b: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7db981u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7db981: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7db982: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7db983: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7db984: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7db985: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7db9c0(void) {
  LOAD_REGS();
L_7db9c0: /* 7db9c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7db9c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7db9c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7db9c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7db9c4: mov esi, ecx */
  esi = ecx;
/* 7db9c6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7db9c9: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7db9cf: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7db9d1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7db9d3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7db9d6: push 0xac3d1c */
  { uint32_t v = 0xac3d1cu; esp -= 4; W32(esp, v); }
/* 7db9db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7db9dc: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7db9deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7db9de: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7db9e1: mov ebp, eax */
  ebp = eax;
/* 7db9e3: xor ebx, ebx */
  ebx = 0;
/* 7db9e5: xor eax, eax */
  eax = 0;
/* 7db9e7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db9e9: jle 0x7dba00 */
  if ((zf || sf != of)) goto L_7dba00;
L_7db9eb: /* 7db9eb: jmp 0x7db9f0 */
  goto L_7db9f0;
L_7db9f0: /* 7db9f0: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 7db9f8: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7db9fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7db9fc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db9fe: jl 0x7db9f0 */
  if ((sf != of)) goto L_7db9f0;
L_7dba00: /* 7dba00: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dba03: jle 0x7dba4c */
  if ((zf || sf != of)) goto L_7dba4c;
L_7dba05: /* 7dba05: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 7dba09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dba0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7dba10: /* 7dba10: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7dba12: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7dba16: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7dba19: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dba1fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dba1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dba20: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7dba25u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7dba25: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7dba28: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dba2b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7dba2c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7dba2e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 7dba32: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7dba36: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7dba38: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 7dba3c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dba3f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dba40: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7dba43: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dba45: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7dba49: jl 0x7dba10 */
  if ((sf != of)) goto L_7dba10;
L_7dba4b: /* 7dba4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7dba4c: /* 7dba4c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dba4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dba51: je 0x7dba61 */
  if (zf) goto L_7dba61;
L_7dba53: /* 7dba53: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7dba59: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dba5b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dba5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dba5e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dba61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dba61: /* 7dba61: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 7dba64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dba66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dba67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7dba68: ret  */
  esp += 4; SPILL(); return;
}

void f_7db9ed(void) {
  LOAD_REGS();
L_7db9ed: /* 7db9ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7db9f0: /* 7db9f0: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 7db9f8: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7db9fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7db9fc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7db9fe: jl 0x7db9f0 */
  if ((sf != of)) goto L_7db9f0;
L_7dba00: /* 7dba00: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dba03: jle 0x7dba4c */
  if ((zf || sf != of)) goto L_7dba4c;
L_7dba05: /* 7dba05: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 7dba09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dba0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7dba10: /* 7dba10: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7dba12: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7dba16: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7dba19: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dba1fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dba1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dba20: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7dba25u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7dba25: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7dba28: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dba2b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7dba2c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7dba2e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 7dba32: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7dba36: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7dba38: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 7dba3c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dba3f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dba40: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7dba43: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dba45: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7dba49: jl 0x7dba10 */
  if ((sf != of)) goto L_7dba10;
L_7dba4b: /* 7dba4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7dba4c: /* 7dba4c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dba4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dba51: je 0x7dba61 */
  if (zf) goto L_7dba61;
L_7dba53: /* 7dba53: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7dba59: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dba5b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dba5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dba5e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dba61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dba61: /* 7dba61: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 7dba64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dba66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dba67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7dba68: ret  */
  esp += 4; SPILL(); return;
}

void f_7dbaa0(void) {
  LOAD_REGS();
L_7dbaa0: /* 7dbaa0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbaa3: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbaa7: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbaaa: jle 0x7dbac7 */
  if ((zf || sf != of)) goto L_7dbac7;
L_7dbaac: /* 7dbaac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7dbab0: /* 7dbab0: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dbab3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dbab4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dbab6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dbab8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dbabb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbabe: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbac2: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbac5: jg 0x7dbab0 */
  if ((!zf && sf == of)) goto L_7dbab0;
L_7dbac7: /* 7dbac7: jmp 0x6c3215 */
  SPILL(); f_6c3215(); return;
}

void f_7dbae0(void) {
  LOAD_REGS();
L_7dbae0: /* 7dbae0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dbae1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dbae2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dbae3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbae4: mov esi, ecx */
  esi = ecx;
/* 7dbae6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7dbae9: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7dbaef: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dbaf1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dbaf3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7dbaf6: push 0xac3d1c */
  { uint32_t v = 0xac3d1cu; esp -= 4; W32(esp, v); }
/* 7dbafb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbafc: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7dbafeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dbafe: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7dbb01: mov ebp, eax */
  ebp = eax;
/* 7dbb03: xor ebx, ebx */
  ebx = 0;
/* 7dbb05: xor eax, eax */
  eax = 0;
/* 7dbb07: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbb09: jle 0x7dbb20 */
  if ((zf || sf != of)) goto L_7dbb20;
L_7dbb0b: /* 7dbb0b: jmp 0x7dbb10 */
  goto L_7dbb10;
L_7dbb10: /* 7dbb10: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 7dbb18: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7dbb1b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dbb1c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbb1e: jl 0x7dbb10 */
  if ((sf != of)) goto L_7dbb10;
L_7dbb20: /* 7dbb20: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbb23: jle 0x7dbb6c */
  if ((zf || sf != of)) goto L_7dbb6c;
L_7dbb25: /* 7dbb25: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 7dbb29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dbb2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7dbb30: /* 7dbb30: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7dbb32: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7dbb36: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7dbb39: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dbb3fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dbb3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbb40: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7dbb45u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7dbb45: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7dbb48: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dbb4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7dbb4c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7dbb4e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 7dbb52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7dbb56: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7dbb58: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 7dbb5c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dbb5f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dbb60: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7dbb63: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbb65: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7dbb69: jl 0x7dbb30 */
  if ((sf != of)) goto L_7dbb30;
L_7dbb6b: /* 7dbb6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7dbb6c: /* 7dbb6c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dbb6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dbb71: je 0x7dbb81 */
  if (zf) goto L_7dbb81;
L_7dbb73: /* 7dbb73: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7dbb79: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dbb7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dbb7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbb7e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dbb81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dbb81: /* 7dbb81: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 7dbb84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dbb85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dbb86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dbb87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7dbb88: ret  */
  esp += 4; SPILL(); return;
}

void f_7dbb0d(void) {
  LOAD_REGS();
L_7dbb0d: /* 7dbb0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7dbb10: /* 7dbb10: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 7dbb18: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7dbb1b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dbb1c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbb1e: jl 0x7dbb10 */
  if ((sf != of)) goto L_7dbb10;
L_7dbb20: /* 7dbb20: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbb23: jle 0x7dbb6c */
  if ((zf || sf != of)) goto L_7dbb6c;
L_7dbb25: /* 7dbb25: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 7dbb29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dbb2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7dbb30: /* 7dbb30: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7dbb32: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7dbb36: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7dbb39: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dbb3fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dbb3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbb40: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7dbb45u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7dbb45: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7dbb48: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dbb4b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7dbb4c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7dbb4e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 7dbb52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7dbb56: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7dbb58: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 7dbb5c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dbb5f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7dbb60: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7dbb63: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbb65: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7dbb69: jl 0x7dbb30 */
  if ((sf != of)) goto L_7dbb30;
L_7dbb6b: /* 7dbb6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7dbb6c: /* 7dbb6c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dbb6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dbb71: je 0x7dbb81 */
  if (zf) goto L_7dbb81;
L_7dbb73: /* 7dbb73: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7dbb79: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dbb7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dbb7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbb7e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7dbb81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dbb81: /* 7dbb81: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 7dbb84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dbb85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dbb86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dbb87: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7dbb88: ret  */
  esp += 4; SPILL(); return;
}

void f_7dbbc0(void) {
  LOAD_REGS();
L_7dbbc0: /* 7dbbc0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbbc3: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbbc7: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbbca: jle 0x7dbbe7 */
  if ((zf || sf != of)) goto L_7dbbe7;
L_7dbbcc: /* 7dbbcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7dbbd0: /* 7dbbd0: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dbbd3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dbbd4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dbbd6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dbbd8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dbbdb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbbde: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbbe2: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbbe5: jg 0x7dbbd0 */
  if ((!zf && sf == of)) goto L_7dbbd0;
L_7dbbe7: /* 7dbbe7: jmp 0x6c80a8 */
  SPILL(); f_6c80a8(); return;
}

void f_7dbc00(void) {
  LOAD_REGS();
L_7dbc00: /* 7dbc00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dbc02: push 0x9d03e9 */
  { uint32_t v = 0x9d03e9u; esp -= 4; W32(esp, v); }
/* 7dbc07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dbc0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbc0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dbc15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dbc16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbc17: mov esi, ecx */
  esi = ecx;
/* 7dbc19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7dbc1d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7dbc20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbc21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dbc23: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7dbc2b: call 0x6cc1a8 */
  esp -= 4; W32(esp, 0x7dbc30u); SPILL(); f_6cc1a8(); if (g_unwind) return; RELOAD();
/* 7dbc30: mov ecx, esi */
  ecx = esi;
/* 7dbc32: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7dbc3a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7dbc40u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7dbc40: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7dbc44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dbc45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dbc4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dbc4f: ret  */
  esp += 4; SPILL(); return;
}

void f_7dbc70(void) {
  LOAD_REGS();
L_7dbc70: /* 7dbc70: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 7dbc73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dbc75: je 0x7dbca1 */
  if (zf) goto L_7dbca1;
L_7dbc77: /* 7dbc77: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dbc79: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbc7c: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbc80: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbc83: jle 0x7dbc9c */
  if ((zf || sf != of)) goto L_7dbc9c;
L_7dbc85: /* 7dbc85: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dbc88: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dbc89: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dbc8b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dbc8d: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dbc90: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbc93: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbc97: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbc9a: jg 0x7dbc85 */
  if ((!zf && sf == of)) goto L_7dbc85;
L_7dbc9c: /* 7dbc9c: jmp 0x6c3215 */
  SPILL(); f_6c3215(); return;
L_7dbca1: /* 7dbca1: ret  */
  esp += 4; SPILL(); return;
}

void f_7dbcc0(void) {
  LOAD_REGS();
L_7dbcc0: /* 7dbcc0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 7dbcc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7dbcc5: je 0x7dbcf1 */
  if (zf) goto L_7dbcf1;
L_7dbcc7: /* 7dbcc7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dbcc9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbccc: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbcd0: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbcd3: jle 0x7dbcec */
  if ((zf || sf != of)) goto L_7dbcec;
L_7dbcd5: /* 7dbcd5: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dbcd8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dbcd9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dbcdb: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dbcdd: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dbce0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbce3: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbce7: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbcea: jg 0x7dbcd5 */
  if ((!zf && sf == of)) goto L_7dbcd5;
L_7dbcec: /* 7dbcec: jmp 0x6c80a8 */
  SPILL(); f_6c80a8(); return;
L_7dbcf1: /* 7dbcf1: ret  */
  esp += 4; SPILL(); return;
}

void f_7dbd10(void) {
  LOAD_REGS();
L_7dbd10: /* 7dbd10: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbd13: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbd17: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbd1a: jle 0x7dbd37 */
  if ((zf || sf != of)) goto L_7dbd37;
L_7dbd1c: /* 7dbd1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7dbd20: /* 7dbd20: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7dbd23: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7dbd24: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7dbd26: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7dbd28: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7dbd2b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7dbd2e: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7dbd32: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbd35: jg 0x7dbd20 */
  if ((!zf && sf == of)) goto L_7dbd20;
L_7dbd37: /* 7dbd37: jmp 0x6cb398 */
  SPILL(); f_6cb398(); return;
}

void f_7dbd50(void) {
  LOAD_REGS();
L_7dbd50: /* 7dbd50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dbd51: mov ebp, esp */
  ebp = esp;
/* 7dbd53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dbd55: push 0x9d0429 */
  { uint32_t v = 0x9d0429u; esp -= 4; W32(esp, v); }
/* 7dbd5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dbd60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbd61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dbd68: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dbd6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dbd6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbd6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dbd6e: xor edi, edi */
  edi = 0;
/* 7dbd70: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7dbd73: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7dbd76: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dbd79: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dbd7c: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dbd82u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dbd82: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7dbd85: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dbd88: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dbd8b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dbd8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dbd8f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dbd92: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7dbd95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbd96: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dbd9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbd9c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dbda0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dbda3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dbda3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dbda6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dbda9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7dbdac: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dbdaf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dbdb0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dbdb3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7dbdb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbdb7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dbdbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbdbd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dbdc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dbdc0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7dbdc3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7dbdc4: mov eax, edx */
  eax = edx;
/* 7dbdc6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7dbdc9: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7dbdcc: jne 0x7dbde3 */
  if (!zf) goto L_7dbde3;
L_7dbdce: /* 7dbdce: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dbdd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dbdd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dbdd3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dbdd6: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7dbddc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbddd: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7dbde3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dbde3: /* 7dbde3: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7dbde6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dbdecu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dbdec: mov esi, eax */
  esi = eax;
/* 7dbdee: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7dbdf4u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7dbdf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dbdf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbdf6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dbdf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbdf9: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7dbdffu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7dbdff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dbe02: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dbe05: mov esi, eax */
  esi = eax;
/* 7dbe07: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dbe0du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dbe0d: mov ebx, 2 */
  ebx = 0x2u;
/* 7dbe12: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7dbe15: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7dbe1bu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7dbe1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dbe1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbe1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbe1e: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7dbe21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbe22: call dword ptr [0xcfa93c] */
  esp -= 4; W32(esp, 0x7dbe28u); SPILL(); f_4e44d0(); if (g_unwind) return; /* Core!?GetRegistryObjects@UObject@@SAXAAV?$TArray@VFRegistryObjectInfo@@@@PAVUClass@@1H@Z */ RELOAD();
/* 7dbe28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dbe2b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7dbe2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dbe31: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dbe33: jge 0x7dbe3f */
  if ((sf == of)) goto L_7dbe3f;
L_7dbe35: /* 7dbe35: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7dbe38: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 7dbe3b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dbe3d: jmp 0x7dbe58 */
  goto L_7dbe58;
L_7dbe3f: /* 7dbe3f: push 0xb821e8 */
  { uint32_t v = 0xb821e8u; esp -= 4; W32(esp, v); }
/* 7dbe44: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dbe47: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dbe4du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dbe4d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dbe51: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_7dbe58: /* 7dbe58: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7dbe5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbe5c: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dbe62u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dbe62: test byte ptr [ebp - 0x18], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7dbe66: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dbe69: je 0x7dbe74 */
  if (zf) goto L_7dbe74;
L_7dbe6b: /* 7dbe6b: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7dbe6e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dbe74u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7dbe74: /* 7dbe74: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7dbe77: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dbe7b: call 0x6ccb6c */
  esp -= 4; W32(esp, 0x7dbe80u); SPILL(); f_6ccb6c(); if (g_unwind) return; RELOAD();
/* 7dbe80: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7dbe83: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dbe87: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dbe8du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dbe8d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dbe90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dbe91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dbe92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dbe99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dbe9a: mov esp, ebp */
  esp = ebp;
/* 7dbe9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dbe9d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7dbea0(void) {
  LOAD_REGS();
L_7dbea0: /* 7dbea0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7dbea3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7dbea8: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7dbeab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7dbeac: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7dbeaf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dbeb4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7dbeb4(); return;
}

void f_7dbeb4(void) {
  LOAD_REGS();
L_7dbeb4: /* 7dbeb4: push 0xa0f894 */
  { uint32_t v = 0xa0f894u; esp -= 4; W32(esp, v); }
/* 7dbeb9: push 0xadd1c0 */
  { uint32_t v = 0xadd1c0u; esp -= 4; W32(esp, v); }
/* 7dbebe: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7dbec4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7dbec4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dbec7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dbec9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7dbecb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7dbed0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7dbed0: guest_badaddr(0x7dbed0); return;
}

void f_7dbf50(void) {
  LOAD_REGS();
L_7dbf50: /* 7dbf50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7dbf51: mov ebp, esp */
  ebp = esp;
/* 7dbf53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dbf55: push 0x9d0493 */
  { uint32_t v = 0x9d0493u; esp -= 4; W32(esp, v); }
/* 7dbf5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7dbf60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbf61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7dbf68: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7dbf6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7dbf6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbf6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dbf6e: xor edi, edi */
  edi = 0;
/* 7dbf70: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7dbf73: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7dbf76: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7dbf79: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7dbf7c: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dbf82u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dbf82: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7dbf85: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dbf88: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dbf8b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dbf8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dbf8f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dbf92: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7dbf95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbf96: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dbf9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbf9c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dbfa0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dbfa3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dbfa3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dbfa6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dbfa9: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7dbfac: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dbfaf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dbfb0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dbfb3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7dbfb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbfb7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dbfbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbfbd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dbfc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dbfc0: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7dbfc3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dbfc9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dbfc9: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7dbfcf: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7dbfd1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dbfd4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dbfd7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dbfda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dbfdb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dbfde: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 7dbfe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dbfe2: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dbfe7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dbfe8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dbfec: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dbfefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dbfef: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7dbff5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dbff7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dbff9: je 0x7dc008 */
  if (zf) goto L_7dc008;
L_7dbffb: /* 7dbffb: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7dc000: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7dc002: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dc004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc005: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7dc008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dc008: /* 7dc008: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7dc00e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dc010: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc012: je 0x7dc019 */
  if (zf) goto L_7dc019;
L_7dc014: /* 7dc014: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7dc017: jmp 0x7dc01f */
  goto L_7dc01f;
L_7dc019: /* 7dc019: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 7dc01c: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_7dc01f: /* 7dc01f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7dc022: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7dc028u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7dc028: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 7dc02d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7dc02f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7dc032: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7dc035: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc038: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc039: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc03c: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7dc03f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc040: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc045: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc046: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dc04a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7dc04du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7dc04d: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7dc053: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7dc055: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc057: je 0x7dc066 */
  if (zf) goto L_7dc066;
L_7dc059: /* 7dc059: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7dc05e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7dc060: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7dc062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc063: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7dc066u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dc066: /* 7dc066: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7dc06c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7dc06e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc070: je 0x7dc077 */
  if (zf) goto L_7dc077;
L_7dc072: /* 7dc072: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7dc075: jmp 0x7dc07d */
  goto L_7dc07d;
L_7dc077: /* 7dc077: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7dc07a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_7dc07d: /* 7dc07d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7dc080: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7dc081: mov eax, edx */
  eax = edx;
/* 7dc083: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7dc086: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7dc089: jne 0x7dc09f */
  if (!zf) goto L_7dc09f;
L_7dc08b: /* 7dc08b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7dc08e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7dc08f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc090: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7dc093: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7dc098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc099: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7dc09fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7dc09f: /* 7dc09f: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7dc0a2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7dc0a8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7dc0a8: mov esi, eax */
  esi = eax;
/* 7dc0aa: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7dc0b0u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7dc0b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc0b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc0b2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7dc0b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc0b5: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7dc0bbu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7dc0bb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc0be: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7dc0c1: mov esi, eax */
  esi = eax;
/* 7dc0c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7dc0c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7dc0c9: mov ebx, 4 */
  ebx = 0x4u;
/* 7dc0ce: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7dc0d1: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7dc0d7u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7dc0d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7dc0d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7dc0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc0da: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7dc0dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7dc0de: call dword ptr [0xcfa93c] */
  esp -= 4; W32(esp, 0x7dc0e4u); SPILL(); f_4e44d0(); if (g_unwind) return; /* Core!?GetRegistryObjects@UObject@@SAXAAV?$TArray@VFRegistryObjectInfo@@@@PAVUClass@@1H@Z */ RELOAD();
/* 7dc0e4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dc0e7: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7dc0ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7dc0ed: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dc0ef: jge 0x7dc0fb */
  if ((sf == of)) goto L_7dc0fb;
L_7dc0f1: /* 7dc0f1: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7dc0f4: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 7dc0f7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7dc0f9: jmp 0x7dc114 */
  goto L_7dc114;
L_7dc0fb: /* 7dc0fb: push 0xb821ec */
  { uint32_t v = 0xb821ecu; esp -= 4; W32(esp, v); }
/* 7dc100: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7dc103: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dc109u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dc109: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7dc10d: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_7dc114: /* 7dc114: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7dc117: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc118: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dc11eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dc11e: test byte ptr [ebp - 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc122: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dc125: je 0x7dc139 */
  if (zf) goto L_7dc139;
L_7dc127: /* 7dc127: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dc12a: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7dc12d: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7dc130: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7dc133: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc139u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7dc139: /* 7dc139: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7dc13c: cmp eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7dc13f: jge 0x7dc14d */
  if ((sf == of)) goto L_7dc14d;
L_7dc141: /* 7dc141: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7dc144: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 7dc147: lea eax, [eax + edx + 0x24] */
  eax = (uint32_t)(eax + edx + 0x24u);
/* 7dc14b: jmp 0x7dc168 */
  goto L_7dc168;
L_7dc14d: /* 7dc14d: push 0xb821f0 */
  { uint32_t v = 0xb821f0u; esp -= 4; W32(esp, v); }
/* 7dc152: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7dc155: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7dc15bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7dc15b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7dc15e: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7dc161: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7dc165: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_7dc168: /* 7dc168: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7dc16b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7dc16c: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7dc172u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7dc172: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7dc176: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7dc179: je 0x7dc184 */
  if (zf) goto L_7dc184;
L_7dc17b: /* 7dc17b: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7dc17e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc184u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7dc184: /* 7dc184: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7dc187: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7dc18b: call 0x6ccb6c */
  esp -= 4; W32(esp, 0x7dc190u); SPILL(); f_6ccb6c(); if (g_unwind) return; RELOAD();
/* 7dc190: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7dc193: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7dc197: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc19du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dc19d: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7dc1a0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7dc1a4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc1aau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dc1aa: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7dc1ad: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7dc1b1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7dc1b7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7dc1b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7dc1ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7dc1bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7dc1bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7dc1c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7dc1c4: mov esp, ebp */
  esp = ebp;
/* 7dc1c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7dc1c7: ret 8 */
  esp += 12; SPILL(); return;
}
