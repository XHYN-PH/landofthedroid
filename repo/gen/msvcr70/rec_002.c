#include "recomp.h"
#include "rec_mod.h"

void f_406695(void) {
  LOAD_REGS();
L_406695: /* 406695: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406696: mov ebp, esp */
  ebp = esp;
/* 406698: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 406699: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40669a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40669b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40669c: xor esi, esi */
  esi = 0;
/* 40669e: cmp dword ptr [0x449228], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449228u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4066a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4066a5: je 0x40d009 */
  if (zf) goto L_40d009;
L_4066ab: /* 4066ab: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 4066ad: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4066af: call 0x4016cb */
  esp -= 4; W32(esp, 0x4066b4u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 4066b4: mov ebx, eax */
  ebx = eax;
/* 4066b6: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4066b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4066b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4066ba: je 0x406779 */
  if (zf) goto L_406779;
L_4066c0: /* 4066c0: mov esi, dword ptr [0x44b39c] */
  esi = R32((uint32_t)(0x44b39cu));
/* 4066c6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4066c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4066c9: mov edi, ebx */
  edi = ebx;
/* 4066cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4066cd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4066cf: call 0x4010eb */
  esp -= 4; W32(esp, 0x4066d4u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4066d4: xor esi, esi */
  esi = 0;
/* 4066d6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4066d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4066d9: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 4066dc: je 0x40d05c */
  if (zf) goto L_40d05c;
L_4066e2: /* 4066e2: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4066e4: cmp dword ptr [0x449228], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449228u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4066ea: je 0x40d08e */
  if (zf) goto L_40d08e;
L_4066f0: /* 4066f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4066f2: call 0x4010eb */
  esp -= 4; W32(esp, 0x4066f7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4066f7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4066f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4066fa: mov dword ptr [0x44ba24], eax */
  W32((uint32_t)(0x44ba24u), eax);
/* 4066ff: je 0x40d068 */
  if (zf) goto L_40d068;
L_406705: /* 406705: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 406707: movzx esi, word ptr [0x44b9fa] */
  esi = (uint32_t)(R16((uint32_t)(0x44b9fau)));
/* 40670e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40670f: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 406711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406712: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 406714: call 0x405d09 */
  esp -= 4; W32(esp, 0x406719u); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 406719: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 40671c: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 40671f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406720: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 406722: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406723: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 406725: call 0x405d09 */
  esp -= 4; W32(esp, 0x40672au); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 40672a: or dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40672d: lea edi, [ebx + 8] */
  edi = (uint32_t)(ebx + 0x8u);
/* 406730: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406731: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 406733: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406734: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 406736: call 0x405d09 */
  esp -= 4; W32(esp, 0x40673bu); SPILL(); f_405d09(); if (g_unwind) return; RELOAD();
/* 40673b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40673e: or eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 406741: jne 0x40d06d */
  if (!zf) goto L_40d06d;
L_406747: /* 406747: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_406749: /* 406749: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40674c: je 0x40677e */
  if (zf) goto L_40677e;
L_40674e: /* 40674e: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 406750: cmp cl, 0x30 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 406753: jl 0x406762 */
  if ((sf != of)) goto L_406762;
L_406755: /* 406755: cmp cl, 0x39 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 406758: jg 0x406762 */
  if ((!zf && sf == of)) goto L_406762;
L_40675a: /* 40675a: sub cl, 0x30 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40675d: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
L_40675f: /* 40675f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 406760: jmp 0x406749 */
  goto L_406749;
L_406762: /* 406762: cmp cl, 0x3b */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406765: jne 0x40675f */
  if (!zf) goto L_40675f;
L_406767: /* 406767: mov esi, eax */
  esi = eax;
L_406769: /* 406769: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 40676c: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40676e: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 406770: mov esi, edi */
  esi = edi;
/* 406772: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406775: jne 0x406769 */
  if (!zf) goto L_406769;
L_406777: /* 406777: jmp 0x406749 */
  goto L_406749;
L_406779: /* 406779: xor eax, eax */
  eax = 0;
/* 40677b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40677c: jmp 0x4067d3 */
  goto L_4067d3;
L_40677e: /* 40677e: mov eax, dword ptr [0x44ba20] */
  eax = R32((uint32_t)(0x44ba20u));
/* 406783: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406785: je 0x4067aa */
  if (zf) goto L_4067aa;
L_406787: /* 406787: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40678a: jne 0x4067aa */
  if (!zf) goto L_4067aa;
L_40678c: /* 40678c: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 406792: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406795: je 0x4067aa */
  if (zf) goto L_4067aa;
L_406797: /* 406797: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406798: call 0x401156 */
  esp -= 4; W32(esp, 0x40679du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40679d: push dword ptr [0x44b9c4] */
  { uint32_t v = R32((uint32_t)(0x44b9c4u)); esp -= 4; W32(esp, v); }
/* 4067a3: call 0x401156 */
  esp -= 4; W32(esp, 0x4067a8u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4067a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4067a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4067aa: /* 4067aa: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4067ad: mov dword ptr [0x44ba20], eax */
  W32((uint32_t)(0x44ba20u), eax);
/* 4067b2: mov dword ptr [0x44b9c4], ebx */
  W32((uint32_t)(0x44b9c4u), ebx);
L_4067b8: /* 4067b8: mov dword ptr [0x44b39c], ebx */
  W32((uint32_t)(0x44b39cu), ebx);
/* 4067be: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4067c0: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4067c2: mov byte ptr [0x44a9ac], al */
  W8((uint32_t)(0x44a9acu), (eax & 0xffu));
/* 4067c7: mov dword ptr [0x44b260], 1 */
  W32((uint32_t)(0x44b260u), 0x1u);
/* 4067d1: xor eax, eax */
  eax = 0;
L_4067d3: /* 4067d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4067d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4067d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4067d6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4067d7: ret  */
  esp += 4; SPILL(); return;
L_40d009: /* 40d009: cmp dword ptr [0x449224], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449224u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d00f: jne 0x4066ab */
  if (!zf) goto L_4066ab;
L_40d015: /* 40d015: mov eax, dword ptr [0x44ba20] */
  eax = R32((uint32_t)(0x44ba20u));
/* 40d01a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d01c: je 0x40d040 */
  if (zf) goto L_40d040;
L_40d01e: /* 40d01e: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d020: jne 0x40d040 */
  if (!zf) goto L_40d040;
L_40d022: /* 40d022: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 40d028: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d02b: je 0x40d040 */
  if (zf) goto L_40d040;
L_40d02d: /* 40d02d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d02e: call 0x401156 */
  esp -= 4; W32(esp, 0x40d033u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d033: push dword ptr [0x44b9c4] */
  { uint32_t v = R32((uint32_t)(0x44b9c4u)); esp -= 4; W32(esp, v); }
/* 40d039: call 0x401156 */
  esp -= 4; W32(esp, 0x40d03eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d03e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d03f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40d040: /* 40d040: mov dword ptr [0x44ba24], esi */
  W32((uint32_t)(0x44ba24u), esi);
/* 40d046: mov dword ptr [0x44ba20], esi */
  W32((uint32_t)(0x44ba20u), esi);
/* 40d04c: mov ebx, 0x44a974 */
  ebx = 0x44a974u;
/* 40d051: mov dword ptr [0x44b9c4], esi */
  W32((uint32_t)(0x44b9c4u), esi);
/* 40d057: jmp 0x4067b8 */
  goto L_4067b8;
L_40d05c: /* 40d05c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d05d: call 0x401156 */
  esp -= 4; W32(esp, 0x40d062u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d062: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d063: jmp 0x406779 */
  goto L_406779;
L_40d068: /* 40d068: xor esi, esi */
  esi = 0;
/* 40d06a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40d06b: jmp 0x40d077 */
  goto L_40d077;
L_40d06d: /* 40d06d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d06e: call 0x412e8e */
  esp -= 4; W32(esp, 0x40d073u); SPILL(); f_412e8e(); if (g_unwind) return; RELOAD();
/* 40d073: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d074: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_40d077: /* 40d077: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d078: call 0x401156 */
  esp -= 4; W32(esp, 0x40d07du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d07d: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 40d080: call 0x401156 */
  esp -= 4; W32(esp, 0x40d085u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d085: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d086: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d087: mov eax, esi */
  eax = esi;
/* 40d089: jmp 0x4067d3 */
  goto L_4067d3;
L_40d08e: /* 40d08e: mov eax, dword ptr [0x44a974] */
  eax = R32((uint32_t)(0x44a974u));
/* 40d093: mov dword ptr [0x44ba24], esi */
  W32((uint32_t)(0x44ba24u), esi);
/* 40d099: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 40d09b: mov eax, dword ptr [0x44a978] */
  eax = R32((uint32_t)(0x44a978u));
/* 40d0a0: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 40d0a3: mov eax, dword ptr [0x44a97c] */
  eax = R32((uint32_t)(0x44a97cu));
/* 40d0a8: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 40d0ab: jmp 0x40677e */
  goto L_40677e;
}

void f_4067e9(void) {
  LOAD_REGS();
L_4067e9: /* 4067e9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4067ea: mov ebp, esp */
  ebp = esp;
/* 4067ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4067ed: xor ecx, ecx */
  ecx = 0;
/* 4067ef: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4067f1: mov eax, edi */
  eax = edi;
/* 4067f3: jne 0x40cdb6 */
  if (!zf) goto L_40cdb6;
L_4067f9: /* 4067f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4067fa: ret  */
  esp += 4; SPILL(); return;
L_40cdb6: /* 40cdb6: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cdb9: je 0x40cdc4 */
  if (zf) goto L_40cdc4;
L_40cdbb: /* 40cdbb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40cdbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40cdbf: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cdc2: jne 0x40cdbb */
  if (!zf) goto L_40cdbb;
L_40cdc4: /* 40cdc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cdc5: lea eax, [ecx*4 + 4] */
  eax = (uint32_t)(ecx*4 + 0x4u);
/* 40cdcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cdcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cdce: call 0x4010eb */
  esp -= 4; W32(esp, 0x40cdd3u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40cdd3: mov esi, eax */
  esi = eax;
/* 40cdd5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cdd7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cdd8: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 40cddb: jne 0x40cde5 */
  if (!zf) goto L_40cde5;
L_40cddd: /* 40cddd: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 40cddf: call 0x40f95e */
  esp -= 4; W32(esp, 0x40cde4u); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40cde4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40cde5: /* 40cde5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 40cde7: mov ebx, edi */
  ebx = edi;
/* 40cde9: jmp 0x40cdfc */
  goto L_40cdfc;
L_40cdeb: /* 40cdeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cdec: call 0x404047 */
  esp -= 4; W32(esp, 0x40cdf1u); SPILL(); f_404047(); if (g_unwind) return; RELOAD();
/* 40cdf1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40cdf3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40cdf6: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 40cdf9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 40cdfb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40cdfc: /* 40cdfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40cdfe: jne 0x40cdeb */
  if (!zf) goto L_40cdeb;
L_40ce00: /* 40ce00: and dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 40ce02: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40ce05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40ce06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40ce07: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40ce08: ret  */
  esp += 4; SPILL(); return;
}

void f_4068a4(void) {
  LOAD_REGS();
L_4068a4: /* 4068a4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4068a6: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4068abu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4068ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4068ac: ret  */
  esp += 4; SPILL(); return;
}

void f_406926(void) {
  LOAD_REGS();
L_406926: /* 406926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406927: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 40692b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40692c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 406930: call 0x404b3a */
  esp -= 4; W32(esp, 0x406935u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 406935: lea eax, [esi + 0x40] */
  eax = (uint32_t)(esi + 0x40u);
/* 406938: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40693b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40693c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40693d: je 0x406953 */
  if (zf) goto L_406953;
L_40693f: /* 40693f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406940: push 0x43e540 */
  { uint32_t v = 0x43e540u; esp -= 4; W32(esp, v); }
/* 406945: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 406947: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40694b: call 0x40632a */
  esp -= 4; W32(esp, 0x406950u); SPILL(); f_40632a(); if (g_unwind) return; RELOAD();
/* 406950: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_406953: /* 406953: lea eax, [esi + 0x80] */
  eax = (uint32_t)(esi + 0x80u);
/* 406959: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40695c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40695d: je 0x406973 */
  if (zf) goto L_406973;
L_40695f: /* 40695f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406960: push 0x43e37c */
  { uint32_t v = 0x43e37cu; esp -= 4; W32(esp, v); }
/* 406965: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 406967: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40696b: call 0x40632a */
  esp -= 4; W32(esp, 0x406970u); SPILL(); f_40632a(); if (g_unwind) return; RELOAD();
/* 406970: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_406973: /* 406973: ret  */
  esp += 4; SPILL(); return;
}

void f_406974(void) {
  LOAD_REGS();
L_406974: /* 406974: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406975: xor ebx, ebx */
  ebx = 0;
/* 406977: cmp dword ptr [0x44b9dc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9dcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40697d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40697e: jne 0x406997 */
  if (!zf) goto L_406997;
L_406980: /* 406980: cmp dword ptr [0x4491d4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491d4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406987: jne 0x40d23c */
  if (!zf) goto L_40d23c;
L_40698d: /* 40698d: mov eax, dword ptr [0x439110] */
  eax = R32((uint32_t)(0x439110u));
/* 406992: mov dword ptr [0x44b9dc], eax */
  W32((uint32_t)(0x44b9dcu), eax);
L_406997: /* 406997: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 40699b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40699d: je 0x4069d9 */
  if (zf) goto L_4069d9;
L_40699f: /* 40699f: lea eax, [esi + 0x40] */
  eax = (uint32_t)(esi + 0x40u);
/* 4069a2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4069a4: mov ecx, esi */
  ecx = esi;
/* 4069a6: mov dword ptr [0x44b9d8], ecx */
  W32((uint32_t)(0x44b9d8u), ecx);
/* 4069ac: mov dword ptr [0x44b9d4], eax */
  W32((uint32_t)(0x44b9d4u), eax);
/* 4069b1: je 0x4069bb */
  if (zf) goto L_4069bb;
L_4069b3: /* 4069b3: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4069b5: jne 0x40d24b */
  if (!zf) goto L_40d24b;
L_4069bb: /* 4069bb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4069bd: mov dword ptr [0x44b9c8], ebx */
  W32((uint32_t)(0x44b9c8u), ebx);
/* 4069c3: je 0x4069cd */
  if (zf) goto L_4069cd;
L_4069c5: /* 4069c5: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4069c7: jne 0x40d26f */
  if (!zf) goto L_40d26f;
L_4069cd: /* 4069cd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4069cf: je 0x4069d9 */
  if (zf) goto L_4069d9;
L_4069d1: /* 4069d1: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4069d3: jne 0x40d2cc */
  if (!zf) goto L_40d2cc;
L_4069d9: /* 4069d9: call 0x40558c */
  esp -= 4; W32(esp, 0x4069deu); SPILL(); f_40558c(); if (g_unwind) return; RELOAD();
L_4069de: /* 4069de: cmp dword ptr [0x44b9c8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4069e4: je 0x40d2d6 */
  if (zf) goto L_40d2d6;
L_4069ea: /* 4069ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4069eb: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 4069f1: call 0x4063ea */
  esp -= 4; W32(esp, 0x4069f6u); SPILL(); f_4063ea(); if (g_unwind) return; RELOAD();
/* 4069f6: mov edi, eax */
  edi = eax;
/* 4069f8: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4069fa: je 0x406a9e */
  if (zf) goto L_406a9e;
L_406a00: /* 406a00: movzx eax, di */
  eax = (uint32_t)((edi & 0xffffu));
/* 406a03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406a04: call dword ptr [0x43911c] */
  esp -= 4; W32(esp, 0x406a0au); SPILL(); call_ind(R32(0x43911cu)); if (g_unwind) return; /* KERNEL32!IsValidCodePage */ RELOAD();
/* 406a0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406a0c: je 0x406a9e */
  if (zf) goto L_406a9e;
L_406a12: /* 406a12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 406a14: push dword ptr [0x44b9cc] */
  { uint32_t v = R32((uint32_t)(0x44b9ccu)); esp -= 4; W32(esp, v); }
/* 406a1a: call dword ptr [0x439118] */
  esp -= 4; W32(esp, 0x406a20u); SPILL(); call_ind(R32(0x439118u)); if (g_unwind) return; /* KERNEL32!IsValidLocale */ RELOAD();
/* 406a20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406a22: je 0x406a9e */
  if (zf) goto L_406a9e;
L_406a24: /* 406a24: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 406a28: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406a2a: mov ecx, dword ptr [0x44b9cc] */
  ecx = R32((uint32_t)(0x44b9ccu));
/* 406a30: je 0x406a44 */
  if (zf) goto L_406a44;
L_406a32: /* 406a32: mov dx, word ptr [0x44b9d0] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x44b9d0u))) & 0xffffu);
/* 406a39: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 406a3c: mov word ptr [eax + 2], dx */
  W16((uint32_t)(eax + 0x2u), (edx & 0xffffu));
/* 406a40: mov word ptr [eax + 4], di */
  W16((uint32_t)(eax + 0x4u), (edi & 0xffffu));
L_406a44: /* 406a44: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 406a48: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406a4a: je 0x406a97 */
  if (zf) goto L_406a97;
L_406a4c: /* 406a4c: cmp word ptr [eax], 0x814 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x814u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 406a51: je 0x40d2dd */
  if (zf) goto L_40d2dd;
L_406a57: /* 406a57: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 406a59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406a5a: push 0x1001 */
  { uint32_t v = 0x1001u; esp -= 4; W32(esp, v); }
/* 406a5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 406a60: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x406a66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 406a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406a68: je 0x406a9e */
  if (zf) goto L_406a9e;
L_406a6a: /* 406a6a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 406a6c: lea eax, [esi + 0x40] */
  eax = (uint32_t)(esi + 0x40u);
/* 406a6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406a70: push 0x1002 */
  { uint32_t v = 0x1002u; esp -= 4; W32(esp, v); }
/* 406a75: push dword ptr [0x44b9d0] */
  { uint32_t v = R32((uint32_t)(0x44b9d0u)); esp -= 4; W32(esp, v); }
/* 406a7b: call dword ptr [0x44b9dc] */
  { uint32_t t = R32((uint32_t)(0x44b9dcu)); esp -= 4; W32(esp, 0x406a81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 406a81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406a83: je 0x406a9e */
  if (zf) goto L_406a9e;
L_406a85: /* 406a85: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 406a87: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 406a8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406a8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406a8f: call 0x406aa2 */
  esp -= 4; W32(esp, 0x406a94u); SPILL(); f_406aa2(); if (g_unwind) return; RELOAD();
/* 406a94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_406a97: /* 406a97: xor eax, eax */
  eax = 0;
/* 406a99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_406a9a: /* 406a9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_406a9b: /* 406a9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406a9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 406a9d: ret  */
  esp += 4; SPILL(); return;
L_406a9e: /* 406a9e: xor eax, eax */
  eax = 0;
/* 406aa0: jmp 0x406a9a */
  goto L_406a9a;
L_40d23c: /* 40d23c: mov dword ptr [0x44b9dc], 0x413095 */
  W32((uint32_t)(0x44b9dcu), 0x413095u);
/* 40d246: jmp 0x406997 */
  goto L_406997;
L_40d24b: /* 40d24b: push 0x44b9d4 */
  { uint32_t v = 0x44b9d4u; esp -= 4; W32(esp, v); }
/* 40d250: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 40d252: push 0x43f2d8 */
  { uint32_t v = 0x43f2d8u; esp -= 4; W32(esp, v); }
/* 40d257: call 0x413017 */
  esp -= 4; W32(esp, 0x40d25cu); SPILL(); f_413017(); if (g_unwind) return; RELOAD();
/* 40d25c: mov ecx, dword ptr [0x44b9d8] */
  ecx = R32((uint32_t)(0x44b9d8u));
/* 40d262: mov eax, dword ptr [0x44b9d4] */
  eax = R32((uint32_t)(0x44b9d4u));
/* 40d267: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d26a: jmp 0x4069bb */
  goto L_4069bb;
L_40d26f: /* 40d26f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d271: je 0x40d27e */
  if (zf) goto L_40d27e;
L_40d273: /* 40d273: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d275: je 0x40d27e */
  if (zf) goto L_40d27e;
L_40d277: /* 40d277: call 0x413603 */
  esp -= 4; W32(esp, 0x40d27cu); SPILL(); f_413603(); if (g_unwind) return; RELOAD();
/* 40d27c: jmp 0x40d283 */
  goto L_40d283;
L_40d27e: /* 40d27e: call 0x413689 */
  esp -= 4; W32(esp, 0x40d283u); SPILL(); f_413689(); if (g_unwind) return; RELOAD();
L_40d283: /* 40d283: cmp dword ptr [0x44b9c8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b9c8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d289: jne 0x4069ea */
  if (!zf) goto L_4069ea;
L_40d28f: /* 40d28f: push 0x44b9d8 */
  { uint32_t v = 0x44b9d8u; esp -= 4; W32(esp, v); }
/* 40d294: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 40d296: push 0x43f488 */
  { uint32_t v = 0x43f488u; esp -= 4; W32(esp, v); }
/* 40d29b: call 0x413017 */
  esp -= 4; W32(esp, 0x40d2a0u); SPILL(); f_413017(); if (g_unwind) return; RELOAD();
/* 40d2a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d2a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d2a5: je 0x4069de */
  if (zf) goto L_4069de;
L_40d2ab: /* 40d2ab: mov eax, dword ptr [0x44b9d4] */
  eax = R32((uint32_t)(0x44b9d4u));
/* 40d2b0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d2b2: je 0x40d2c2 */
  if (zf) goto L_40d2c2;
L_40d2b4: /* 40d2b4: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d2b6: je 0x40d2c2 */
  if (zf) goto L_40d2c2;
L_40d2b8: /* 40d2b8: call 0x413603 */
  esp -= 4; W32(esp, 0x40d2bdu); SPILL(); f_413603(); if (g_unwind) return; RELOAD();
/* 40d2bd: jmp 0x4069de */
  goto L_4069de;
L_40d2c2: /* 40d2c2: call 0x413689 */
  esp -= 4; W32(esp, 0x40d2c7u); SPILL(); f_413689(); if (g_unwind) return; RELOAD();
/* 40d2c7: jmp 0x4069de */
  goto L_4069de;
L_40d2cc: /* 40d2cc: call 0x4135cc */
  esp -= 4; W32(esp, 0x40d2d1u); SPILL(); f_4135cc(); if (g_unwind) return; RELOAD();
/* 40d2d1: jmp 0x4069de */
  goto L_4069de;
L_40d2d6: /* 40d2d6: xor eax, eax */
  eax = 0;
/* 40d2d8: jmp 0x406a9b */
  goto L_406a9b;
L_40d2dd: /* 40d2dd: push 0x43faac */
  { uint32_t v = 0x43faacu; esp -= 4; W32(esp, v); }
/* 40d2e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d2e3: call 0x404b3a */
  esp -= 4; W32(esp, 0x40d2e8u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 40d2e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d2e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d2ea: jmp 0x406a6a */
  goto L_406a6a;
}

void f_406aa2(void) {
  LOAD_REGS();
L_406aa2: /* 406aa2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406aa3: mov ebp, esp */
  ebp = esp;
/* 406aa5: cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406aa9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 406aac: jne 0x406ab6 */
  if (!zf) goto L_406ab6;
L_406aae: /* 406aae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 406ab0: jl 0x40d9ca */
  if ((sf != of)) goto L_40d9ca;
L_406ab6: /* 406ab6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 406ab8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_406abb: /* 406abb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 406abe: call 0x401cd9 */
  esp -= 4; W32(esp, 0x406ac3u); SPILL(); f_401cd9(); if (g_unwind) return; RELOAD();
/* 406ac3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 406ac6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406ac7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406ac8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406ac9: ret  */
  esp += 4; SPILL(); return;
L_40d9ca: /* 40d9ca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40d9cc: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 40d9ce: jmp 0x406abb */
  goto L_406abb;
}

void f_406c23(void) {
  LOAD_REGS();
L_406c23: /* 406c23: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406c24: mov ebp, esp */
  ebp = esp;
/* 406c26: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406c2a: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 406c2d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 406c2f: mov dword ptr [0x44a854], eax */
  W32((uint32_t)(0x44a854u), eax);
/* 406c34: jne 0x40bbb1 */
  if (!zf) goto L_40bbb1;
L_406c3a: /* 406c3a: call 0x406c66 */
  esp -= 4; W32(esp, 0x406c3fu); SPILL(); f_406c66(); if (g_unwind) return; RELOAD();
L_406c3f: /* 406c3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 406c41: jl 0x406c64 */
  if ((sf != of)) goto L_406c64;
L_406c43: /* 406c43: mov edx, dword ptr [0x4491e8] */
  edx = R32((uint32_t)(0x4491e8u));
/* 406c49: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 406c4c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 406c4e: mov edx, dword ptr [0x4491ec] */
  edx = R32((uint32_t)(0x4491ecu));
/* 406c54: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 406c57: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 406c59: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 406c5c: mov edx, dword ptr [0x4491f4] */
  edx = R32((uint32_t)(0x4491f4u));
/* 406c62: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_406c64: /* 406c64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406c65: ret  */
  esp += 4; SPILL(); return;
L_40bbb1: /* 40bbb1: call 0x40f4d7 */
  esp -= 4; W32(esp, 0x40bbb6u); SPILL(); f_40f4d7(); if (g_unwind) return; RELOAD();
/* 40bbb6: jmp 0x406c3f */
  goto L_406c3f;
}

void f_406c66(void) {
  LOAD_REGS();
L_406c66: /* 406c66: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406c67: mov ebp, esp */
  ebp = esp;
/* 406c69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 406c6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 406c6b: and byte ptr [0x44b25c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44b25cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(0x44b25cu), r);
  }
/* 406c72: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406c73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406c74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406c75: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 406c7a: mov esi, 0x44b158 */
  esi = 0x44b158u;
/* 406c7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406c80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 406c82: call dword ptr [0x439000] */
  esp -= 4; W32(esp, 0x406c88u); SPILL(); call_ind(R32(0x439000u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 406c88: mov eax, dword ptr [0x449210] */
  eax = R32((uint32_t)(0x449210u));
/* 406c8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406c8f: mov dword ptr [0x449204], esi */
  W32((uint32_t)(0x449204u), esi);
/* 406c95: je 0x406cf8 */
  if (zf) goto L_406cf8;
L_406c97: /* 406c97: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406c9a: mov ebx, eax */
  ebx = eax;
/* 406c9c: je 0x406cf8 */
  if (zf) goto L_406cf8;
L_406c9e: /* 406c9e: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 406ca1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406ca2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 406ca4: lea esi, [ebp - 8] */
  esi = (uint32_t)(ebp + 0xfffffff8u);
/* 406ca7: xor ecx, ecx */
  ecx = 0;
/* 406ca9: mov eax, ebx */
  eax = ebx;
/* 406cab: call 0x406cfc */
  esp -= 4; W32(esp, 0x406cb0u); SPILL(); f_406cfc(); if (g_unwind) return; RELOAD();
/* 406cb0: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 406cb3: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 406cb6: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 406cb9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 406cbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406cbc: call 0x4010eb */
  esp -= 4; W32(esp, 0x406cc1u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 406cc1: mov edi, eax */
  edi = eax;
/* 406cc3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406cc6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406cc8: je 0x40bc99 */
  if (zf) goto L_40bc99;
L_406cce: /* 406cce: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 406cd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406cd2: lea ecx, [esi + edi] */
  ecx = (uint32_t)(esi + edi);
/* 406cd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406cd6: lea esi, [ebp - 8] */
  esi = (uint32_t)(ebp + 0xfffffff8u);
/* 406cd9: mov eax, ebx */
  eax = ebx;
/* 406cdb: call 0x406cfc */
  esp -= 4; W32(esp, 0x406ce0u); SPILL(); f_406cfc(); if (g_unwind) return; RELOAD();
/* 406ce0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 406ce3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 406ce4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406ce5: mov dword ptr [0x4491e8], eax */
  W32((uint32_t)(0x4491e8u), eax);
/* 406cea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406ceb: mov dword ptr [0x4491ec], edi */
  W32((uint32_t)(0x4491ecu), edi);
/* 406cf1: xor eax, eax */
  eax = 0;
L_406cf3: /* 406cf3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 406cf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406cf5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 406cf6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 406cf7: ret  */
  esp += 4; SPILL(); return;
L_406cf8: /* 406cf8: mov ebx, esi */
  ebx = esi;
/* 406cfa: jmp 0x406c9e */
  goto L_406c9e;
L_40bc99: /* 40bc99: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40bc9c: jmp 0x406cf3 */
  goto L_406cf3;
}

void f_406cfc(void) {
  LOAD_REGS();
  goto L_406cfc;
L_406bee: /* 406bee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 406bef: jmp 0x406d74 */
  goto L_406d74;
L_406bf4: /* 406bf4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 406bf5: jmp 0x406d67 */
  goto L_406d67;
L_406bfa: /* 406bfa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 406bfb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 406bfc: jmp 0x406da7 */
  goto L_406da7;
L_406c01: /* 406c01: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406c03: je 0x406c09 */
  if (zf) goto L_406c09;
L_406c05: /* 406c05: and byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi), r);
  }
/* 406c08: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_406c09: /* 406c09: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 406c0b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 406c0e: jmp 0x406d6b */
  goto L_406d6b;
L_406c13: /* 406c13: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 406c16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406c18: je 0x406c1d */
  if (zf) goto L_406c1d;
L_406c1a: /* 406c1a: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_406c1d: /* 406c1d: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
/* 406c1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 406c20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 406c21: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 406c22: ret  */
  esp += 4; SPILL(); return;
L_406cfc: /* 406cfc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406cfd: mov ebp, esp */
  ebp = esp;
/* 406cff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 406d00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406d01: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 406d04: xor edx, edx */
  edx = 0;
/* 406d06: cmp dword ptr [ebp + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406d09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406d0a: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 406d0c: mov edi, ecx */
  edi = ecx;
/* 406d0e: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* 406d14: je 0x406d1f */
  if (zf) goto L_406d1f;
L_406d16: /* 406d16: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 406d19: add dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 406d1d: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_406d1f: /* 406d1f: cmp byte ptr [eax], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406d22: je 0x40bc27 */
  if (zf) goto L_40bc27;
L_406d28: /* 406d28: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 406d2a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406d2c: je 0x406d33 */
  if (zf) goto L_406d33;
L_406d2e: /* 406d2e: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 406d30: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 406d32: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_406d33: /* 406d33: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 406d35: movzx ebx, cl */
  ebx = (uint32_t)((ecx & 0xffu));
/* 406d38: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 406d39: test byte ptr [ebx + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 406d40: jne 0x40bc38 */
  if (!zf) goto L_40bc38;
L_406d46: /* 406d46: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 406d48: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 406d4b: je 0x406bf4 */
  if (zf) goto L_406bf4;
L_406d51: /* 406d51: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406d53: jne 0x406d1f */
  if (!zf) goto L_406d1f;
L_406d55: /* 406d55: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406d58: je 0x406d5f */
  if (zf) goto L_406d5f;
L_406d5a: /* 406d5a: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406d5d: jne 0x406d1f */
  if (!zf) goto L_406d1f;
L_406d5f: /* 406d5f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406d61: je 0x406d67 */
  if (zf) goto L_406d67;
L_406d63: /* 406d63: and byte ptr [edi - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi + 0xffffffffu), r);
  }
L_406d67: /* 406d67: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_406d6b: /* 406d6b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406d6e: je 0x406c13 */
  if (zf) goto L_406c13;
L_406d74: /* 406d74: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 406d76: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406d79: je 0x406bee */
  if (zf) goto L_406bee;
L_406d7f: /* 406d7f: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406d82: je 0x406bee */
  if (zf) goto L_406bee;
L_406d88: /* 406d88: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406d8b: je 0x406c13 */
  if (zf) goto L_406c13;
L_406d91: /* 406d91: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406d95: je 0x406da0 */
  if (zf) goto L_406da0;
L_406d97: /* 406d97: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 406d9a: add dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 406d9e: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_406da0: /* 406da0: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
L_406da2: /* 406da2: xor ebx, ebx */
  ebx = 0;
/* 406da4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 406da5: xor edx, edx */
  edx = 0;
L_406da7: /* 406da7: cmp byte ptr [eax], 0x5c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406daa: je 0x406bfa */
  if (zf) goto L_406bfa;
L_406db0: /* 406db0: cmp byte ptr [eax], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406db3: je 0x40bc49 */
  if (zf) goto L_40bc49;
L_406db9: /* 406db9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406dbb: jne 0x40bc74 */
  if (!zf) goto L_40bc74;
L_406dc1: /* 406dc1: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 406dc3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 406dc5: je 0x406c01 */
  if (zf) goto L_406c01;
L_406dcb: /* 406dcb: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406dcf: jne 0x406de3 */
  if (!zf) goto L_406de3;
L_406dd1: /* 406dd1: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406dd4: je 0x406c01 */
  if (zf) goto L_406c01;
L_406dda: /* 406dda: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406ddd: je 0x406c01 */
  if (zf) goto L_406c01;
L_406de3: /* 406de3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406de5: je 0x406e02 */
  if (zf) goto L_406e02;
L_406de7: /* 406de7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406de9: je 0x406e05 */
  if (zf) goto L_406e05;
L_406deb: /* 406deb: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 406dee: test byte ptr [edx + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 406df5: jne 0x40bc86 */
  if (!zf) goto L_40bc86;
L_406dfb: /* 406dfb: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 406dfd: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 406dff: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_406e00: /* 406e00: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
L_406e02: /* 406e02: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 406e03: jmp 0x406da2 */
  goto L_406da2;
L_406e05: /* 406e05: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 406e08: test byte ptr [ecx + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 406e0f: je 0x406e00 */
  if (zf) goto L_406e00;
L_406e11: /* 406e11: jmp 0x40bc91 */
  goto L_40bc91;
L_40bc27: /* 40bc27: xor ecx, ecx */
  ecx = 0;
/* 40bc29: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bc2b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 40bc2e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40bc2f: mov edx, ecx */
  edx = ecx;
/* 40bc31: mov cl, 0x22 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x22u) & 0xffu);
/* 40bc33: jmp 0x406d51 */
  goto L_406d51;
L_40bc38: /* 40bc38: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 40bc3a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bc3c: je 0x40bc43 */
  if (zf) goto L_40bc43;
L_40bc3e: /* 40bc3e: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40bc40: mov byte ptr [edi], bl */
  W8((uint32_t)(edi), (ebx & 0xffu));
/* 40bc42: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_40bc43: /* 40bc43: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40bc44: jmp 0x406d46 */
  goto L_406d46;
L_40bc49: /* 40bc49: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40bc4c: jne 0x40bc6d */
  if (!zf) goto L_40bc6d;
L_40bc4e: /* 40bc4e: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40bc52: je 0x40bc60 */
  if (zf) goto L_40bc60;
L_40bc54: /* 40bc54: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 40bc57: cmp byte ptr [ecx], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40bc5a: jne 0x40bc60 */
  if (!zf) goto L_40bc60;
L_40bc5c: /* 40bc5c: mov eax, ecx */
  eax = ecx;
/* 40bc5e: jmp 0x40bc62 */
  goto L_40bc62;
L_40bc60: /* 40bc60: xor ebx, ebx */
  ebx = 0;
L_40bc62: /* 40bc62: xor ecx, ecx */
  ecx = 0;
/* 40bc64: cmp dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40bc67: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 40bc6a: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_40bc6d: /* 40bc6d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 40bc6f: jmp 0x406db9 */
  goto L_406db9;
L_40bc74: /* 40bc74: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bc76: je 0x40bc7c */
  if (zf) goto L_40bc7c;
L_40bc78: /* 40bc78: mov byte ptr [edi], 0x5c */
  W8((uint32_t)(edi), 0x5cu);
/* 40bc7b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_40bc7c: /* 40bc7c: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 40bc7e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 40bc7f: jne 0x40bc74 */
  if (!zf) goto L_40bc74;
L_40bc81: /* 40bc81: jmp 0x406dc1 */
  goto L_406dc1;
L_40bc86: /* 40bc86: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 40bc88: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40bc89: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40bc8a: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 40bc8c: jmp 0x406dfb */
  goto L_406dfb;
L_40bc91: /* 40bc91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40bc92: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 40bc94: jmp 0x406e00 */
  goto L_406e00;
}

void f_406e16(void) {
  LOAD_REGS();
L_406e16: /* 406e16: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406e17: mov ebp, esp */
  ebp = esp;
/* 406e19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406e1a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 406e1d: xor eax, eax */
  eax = 0;
/* 406e1f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 406e22: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 406e24: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 406e27: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 406e29: sub edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 406e2c: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 406e2f: std  */
  DF = 1;
/* 406e30: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 406e32: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 406e35: cmp byte ptr [edi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 406e37: je 0x406e3f */
  if (zf) goto L_406e3f;
L_406e39: /* 406e39: xor eax, eax */
  eax = 0;
L_406e3b: /* 406e3b: cld  */
  DF = 0;
/* 406e3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 406e3d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 406e3e: ret  */
  esp += 4; SPILL(); return;
L_406e3f: /* 406e3f: mov eax, edi */
  eax = edi;
/* 406e41: jmp 0x406e3b */
  goto L_406e3b;
}

void f_406e43(void) {
  LOAD_REGS();
L_406e43: /* 406e43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406e44: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 406e48: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406e4a: je 0x406e6a */
  if (zf) goto L_406e6a;
L_406e4c: /* 406e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406e4d: call 0x402493 */
  esp -= 4; W32(esp, 0x406e52u); SPILL(); hle_strlen(); RELOAD();
/* 406e52: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 406e53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406e54: call 0x4010eb */
  esp -= 4; W32(esp, 0x406e59u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 406e59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406e5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406e5c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406e5d: je 0x406e6a */
  if (zf) goto L_406e6a;
L_406e5f: /* 406e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406e61: call 0x404b3a */
  esp -= 4; W32(esp, 0x406e66u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 406e66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406e67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406e68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406e69: ret  */
  esp += 4; SPILL(); return;
L_406e6a: /* 406e6a: xor eax, eax */
  eax = 0;
/* 406e6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406e6d: ret  */
  esp += 4; SPILL(); return;
}

void f_406e75(void) {
  LOAD_REGS();
  goto L_406e75;
L_406e6e: /* 406e6e: call 0x4025f2 */
  esp -= 4; W32(esp, 0x406e73u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 406e73: jmp 0x406e85 */
  goto L_406e85;
L_406e75: /* 406e75: call 0x40137f */
  esp -= 4; W32(esp, 0x406e7au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 406e7a: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 406e7d: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406e83: jne 0x406e6e */
  if (!zf) goto L_406e6e;
L_406e85: /* 406e85: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 406e89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406e8a: call 0x406e92 */
  esp -= 4; W32(esp, 0x406e8fu); SPILL(); f_406e92(); if (g_unwind) return; RELOAD();
/* 406e8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406e90: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 406e91: ret  */
  esp += 4; SPILL(); return;
}

void f_406e92(void) {
  LOAD_REGS();
L_406e92: /* 406e92: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406e93: mov ebp, esp */
  ebp = esp;
/* 406e95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 406e96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406e97: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 406e9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406e9b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 406e9e: cmp dword ptr [esi + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406ea2: jne 0x40e2f2 */
  if (!zf) goto L_40e2f2;
L_406ea8: /* 406ea8: cmp ebx, 0x61 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 406eab: jge 0x406eb3 */
  if ((sf == of)) goto L_406eb3;
L_406ead: /* 406ead: mov eax, ebx */
  eax = ebx;
L_406eaf: /* 406eaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406eb0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 406eb1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 406eb2: ret  */
  esp += 4; SPILL(); return;
L_406eb3: /* 406eb3: cmp ebx, 0x7a */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 406eb6: lea eax, [ebx - 0x20] */
  eax = (uint32_t)(ebx + 0xffffffe0u);
/* 406eb9: jle 0x406eaf */
  if ((zf || sf != of)) goto L_406eaf;
L_406ebb: /* 406ebb: jmp 0x406ead */
  goto L_406ead;
L_40e2f2: /* 40e2f2: cmp dword ptr [esi + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e2f6: je 0x40e301 */
  if (zf) goto L_40e301;
L_40e2f8: /* 40e2f8: cmp ebx, 0x7f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40e2fb: jbe 0x406ea8 */
  if ((cf | zf)) goto L_406ea8;
L_40e301: /* 40e301: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40e307: jae 0x40e32f */
  if (!cf) goto L_40e32f;
L_40e309: /* 40e309: cmp dword ptr [esi + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e30d: jle 0x40e31d */
  if ((zf || sf != of)) goto L_40e31d;
L_40e30f: /* 40e30f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40e311: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e312: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e313: call 0x415666 */
  esp -= 4; W32(esp, 0x40e318u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 40e318: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e31b: jmp 0x40e327 */
  goto L_40e327;
L_40e31d: /* 40e31d: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 40e320: movzx eax, byte ptr [eax + ebx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ebx*2)));
/* 40e324: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_40e327: /* 40e327: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e329: je 0x406ead */
  if (zf) goto L_406ead;
L_40e32f: /* 40e32f: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 40e332: mov eax, ebx */
  eax = ebx;
/* 40e334: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 40e337: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 40e33a: test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e33f: je 0x40e350 */
  if (zf) goto L_40e350;
L_40e341: /* 40e341: and byte ptr [ebp + 0xa], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xau))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xau), r);
  }
/* 40e345: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40e347: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* 40e34a: mov byte ptr [ebp + 9], bl */
  W8((uint32_t)(ebp + 0x9u), (ebx & 0xffu));
/* 40e34d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40e34e: jmp 0x40e35a */
  goto L_40e35a;
L_40e350: /* 40e350: and byte ptr [ebp + 9], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x9u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x9u), r);
  }
/* 40e354: xor eax, eax */
  eax = 0;
/* 40e356: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 40e359: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_40e35a: /* 40e35a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40e35c: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 40e35f: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 40e362: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 40e364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40e365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e366: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 40e369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e36a: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 40e36f: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 40e372: call 0x40462b */
  esp -= 4; W32(esp, 0x40e377u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 40e377: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e37a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e37c: je 0x406ead */
  if (zf) goto L_406ead;
L_40e382: /* 40e382: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e385: jne 0x40e390 */
  if (!zf) goto L_40e390;
L_40e387: /* 40e387: movzx eax, byte ptr [ebp - 4] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu)));
/* 40e38b: jmp 0x406eaf */
  goto L_406eaf;
L_40e390: /* 40e390: movzx ecx, byte ptr [ebp - 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)));
/* 40e394: xor eax, eax */
  eax = 0;
/* 40e396: mov ah, byte ptr [ebp - 4] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu))) & 0xffu) << 8);
/* 40e399: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40e39b: jmp 0x406eaf */
  goto L_406eaf;
}

void f_406ebd(void) {
  LOAD_REGS();
L_406ebd: /* 406ebd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406ebe: mov ebp, esp */
  ebp = esp;
/* 406ec0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 406ec3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406ec4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406ec5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406ec6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406ec7: cld  */
  DF = 0;
/* 406ec8: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 406ecb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 406ece: test dword ptr [eax + 4], 6 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406ed5: jne 0x406f5d */
  if (!zf) goto L_406f5d;
L_406edb: /* 406edb: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 406ede: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 406ee1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 406ee4: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 406ee7: mov dword ptr [ebx - 4], eax */
  W32((uint32_t)(ebx + 0xfffffffcu), eax);
/* 406eea: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 406eed: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
L_406ef0: /* 406ef0: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406ef3: je 0x406f56 */
  if (zf) goto L_406f56;
L_406ef5: /* 406ef5: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 406ef8: cmp dword ptr [edi + ecx*4 + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + ecx*4 + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 406efd: je 0x406f44 */
  if (zf) goto L_406f44;
L_406eff: /* 406eff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406f01: lea ebp, [ebx + 0x10] */
  ebp = (uint32_t)(ebx + 0x10u);
/* 406f04: call dword ptr [edi + ecx*4 + 4] */
  { uint32_t t = R32((uint32_t)(edi + ecx*4 + 0x4u)); esp -= 4; W32(esp, 0x406f08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 406f08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406f09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406f0a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 406f0d: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 406f0f: je 0x406f44 */
  if (zf) goto L_406f44;
L_406f11: /* 406f11: js 0x406f4f */
  if (sf) goto L_406f4f;
L_406f13: /* 406f13: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 406f16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406f17: call 0x406f95 */
  esp -= 4; W32(esp, 0x406f1cu); SPILL(); f_406f95(); if (g_unwind) return; RELOAD();
/* 406f1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406f1f: lea ebp, [ebx + 0x10] */
  ebp = (uint32_t)(ebx + 0x10u);
/* 406f22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406f23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406f24: call 0x406fd7 */
  esp -= 4; W32(esp, 0x406f29u); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 406f29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406f2c: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 406f2f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 406f31: mov eax, dword ptr [edi + ecx*4 + 8] */
  eax = R32((uint32_t)(edi + ecx*4 + 0x8u));
/* 406f35: call 0x407061 */
  esp -= 4; W32(esp, 0x406f3au); SPILL(); f_407061(); if (g_unwind) return; RELOAD();
/* 406f3a: mov eax, dword ptr [edi + ecx*4] */
  eax = R32((uint32_t)(edi + ecx*4));
/* 406f3d: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 406f40: call dword ptr [edi + ecx*4 + 8] */
  { uint32_t t = R32((uint32_t)(edi + ecx*4 + 0x8u)); esp -= 4; W32(esp, 0x406f44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_406f44: /* 406f44: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 406f47: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 406f4a: mov esi, dword ptr [edi + ecx*4] */
  esi = R32((uint32_t)(edi + ecx*4));
/* 406f4d: jmp 0x406ef0 */
  goto L_406ef0;
L_406f4f: /* 406f4f: mov eax, 0 */
  eax = 0x0u;
/* 406f54: jmp 0x406f72 */
  goto L_406f72;
L_406f56: /* 406f56: mov eax, 1 */
  eax = 0x1u;
/* 406f5b: jmp 0x406f72 */
  goto L_406f72;
L_406f5d: /* 406f5d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406f5e: lea ebp, [ebx + 0x10] */
  ebp = (uint32_t)(ebx + 0x10u);
/* 406f61: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 406f63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406f64: call 0x406fd7 */
  esp -= 4; W32(esp, 0x406f69u); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 406f69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406f6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406f6d: mov eax, 1 */
  eax = 0x1u;
L_406f72: /* 406f72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406f73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 406f74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406f75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 406f76: mov esp, ebp */
  esp = ebp;
/* 406f78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406f79: ret  */
  esp += 4; SPILL(); return;
}

void f_406f7a(void) {
  LOAD_REGS();
L_406f7a: /* 406f7a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406f7b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 406f7f: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 406f81: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 406f84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406f85: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 406f88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406f89: call 0x406fd7 */
  esp -= 4; W32(esp, 0x406f8eu); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 406f8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 406f91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406f92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_406f95(void) {
  LOAD_REGS();
L_406f95: /* 406f95: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406f96: mov ebp, esp */
  ebp = esp;
/* 406f98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406f99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406f9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406f9b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 406f9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 406f9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 406fa0: push 0x406fad */
  { uint32_t v = 0x406fadu; esp -= 4; W32(esp, v); }
/* 406fa5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 406fa8: call 0x415204 */
  esp -= 4; W32(esp, 0x406fadu); SPILL(); f_415204(); if (g_unwind) return; RELOAD();
/* 406fad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406fae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 406faf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 406fb0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 406fb1: mov esp, ebp */
  esp = ebp;
/* 406fb3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 406fb4: ret  */
  esp += 4; SPILL(); return;
}

void f_406fb5(void) {
  LOAD_REGS();
L_406fb5: /* 406fb5: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 406fb9: test dword ptr [ecx + 4], 6 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 406fc0: mov eax, 1 */
  eax = 0x1u;
/* 406fc5: je 0x406fd6 */
  if (zf) goto L_406fd6;
L_406fc7: /* 406fc7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 406fcb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 406fcf: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 406fd1: mov eax, 3 */
  eax = 0x3u;
L_406fd6: /* 406fd6: ret  */
  esp += 4; SPILL(); return;
}

void f_406fd7(void) {
  LOAD_REGS();
L_406fd7: /* 406fd7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 406fd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 406fd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 406fda: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 406fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 406fdf: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 406fe1: push 0x406fb5 */
  { uint32_t v = 0x406fb5u; esp -= 4; W32(esp, v); }
/* 406fe6: push dword ptr fs:[0] */
  { uint32_t v = R32((uint32_t)(FS_BASE + 0x0u)); esp -= 4; W32(esp, v); }
/* 406fed: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
L_406ff4: /* 406ff4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 406ff8: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 406ffb: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 406ffe: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407001: je 0x407031 */
  if (zf) goto L_407031;
L_407003: /* 407003: cmp esi, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407007: je 0x407031 */
  if (zf) goto L_407031;
L_407009: /* 407009: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 40700c: mov ecx, dword ptr [ebx + esi*4] */
  ecx = R32((uint32_t)(ebx + esi*4));
/* 40700f: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 407013: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 407016: cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + esi*4 + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40701b: jne 0x406ff4 */
  if (!zf) goto L_406ff4;
L_40701d: /* 40701d: push 0x101 */
  { uint32_t v = 0x101u; esp -= 4; W32(esp, v); }
/* 407022: mov eax, dword ptr [ebx + esi*4 + 8] */
  eax = R32((uint32_t)(ebx + esi*4 + 0x8u));
/* 407026: call 0x407061 */
  esp -= 4; W32(esp, 0x40702bu); SPILL(); f_407061(); if (g_unwind) return; RELOAD();
/* 40702b: call dword ptr [ebx + esi*4 + 8] */
  { uint32_t t = R32((uint32_t)(ebx + esi*4 + 0x8u)); esp -= 4; W32(esp, 0x40702fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40702f: jmp 0x406ff4 */
  goto L_406ff4;
L_407031: /* 407031: pop dword ptr fs:[0] */
  { uint32_t v = R32(esp); esp += 4;
  W32((uint32_t)(FS_BASE + 0x0u), v);
  }
/* 407038: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40703b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40703c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40703d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40703e: ret  */
  esp += 4; SPILL(); return;
}

void f_407058(void) {
  LOAD_REGS();
L_407058: /* 407058: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40705a: mov ebx, 0x44dcf8 */
  ebx = 0x44dcf8u;
/* 40705f: jmp 0x40706b */
  goto L_40706b;
L_40706b: /* 40706b: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 40706e: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 407071: mov dword ptr [ebx + 0xc], ebp */
  W32((uint32_t)(ebx + 0xcu), ebp);
/* 407074: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 407075: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407076: ret 4 */
  esp += 8; SPILL(); return;
}

void f_407061(void) {
  LOAD_REGS();
L_407061: /* 407061: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407062: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 407063: mov ebx, 0x44dcf8 */
  ebx = 0x44dcf8u;
/* 407068: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 40706b: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 40706e: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 407071: mov dword ptr [ebx + 0xc], ebp */
  W32((uint32_t)(ebx + 0xcu), ebp);
/* 407074: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 407075: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407076: ret 4 */
  esp += 8; SPILL(); return;
}

void f_407106(void) {
  LOAD_REGS();
  goto L_407106;
L_407101: /* 407101: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 407104: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407105: ret  */
  esp += 4; SPILL(); return;
L_407106: /* 407106: xor eax, eax */
  eax = 0;
/* 407108: mov al, byte ptr [esp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 40710c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40710d: mov ebx, eax */
  ebx = eax;
/* 40710f: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 407112: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 407116: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40711c: je 0x407133 */
  if (zf) goto L_407133;
L_40711e: /* 40711e: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 407120: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407123: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407125: je 0x407101 */
  if (zf) goto L_407101;
L_407127: /* 407127: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407129: je 0x40717c */
  if (zf) goto L_40717c;
L_40712b: /* 40712b: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407131: jne 0x40711e */
  if (!zf) goto L_40711e;
L_407133: /* 407133: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 407135: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407136: mov eax, ebx */
  eax = ebx;
/* 407138: shl ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 40713b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40713c: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_40713e: /* 40713e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 407140: mov edi, 0x7efefeff */
  edi = 0x7efefeffu;
/* 407145: mov eax, ecx */
  eax = ecx;
/* 407147: mov esi, edi */
  esi = edi;
/* 407149: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 40714b: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40714d: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40714f: xor ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 407152: xor eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 407155: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 407157: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 407159: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40715c: and ecx, 0x81010100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407162: jne 0x407180 */
  if (!zf) goto L_407180;
L_407164: /* 407164: and eax, 0x81010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 407169: je 0x40713e */
  if (zf) goto L_40713e;
L_40716b: /* 40716b: and eax, 0x1010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 407170: jne 0x40717a */
  if (!zf) goto L_40717a;
L_407172: /* 407172: and esi, 0x80000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  esi = r;
  }
/* 407178: jne 0x40713e */
  if (!zf) goto L_40713e;
L_40717a: /* 40717a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40717b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_40717c: /* 40717c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40717d: xor eax, eax */
  eax = 0;
/* 40717f: ret  */
  esp += 4; SPILL(); return;
L_407180: /* 407180: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* 407183: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407185: je 0x4071bd */
  if (zf) goto L_4071bd;
L_407187: /* 407187: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407189: je 0x40717a */
  if (zf) goto L_40717a;
L_40718b: /* 40718b: cmp ah, bl */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40718d: je 0x4071b6 */
  if (zf) goto L_4071b6;
L_40718f: /* 40718f: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407191: je 0x40717a */
  if (zf) goto L_40717a;
L_407193: /* 407193: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 407196: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407198: je 0x4071af */
  if (zf) goto L_4071af;
L_40719a: /* 40719a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40719c: je 0x40717a */
  if (zf) goto L_40717a;
L_40719e: /* 40719e: cmp ah, bl */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4071a0: je 0x4071a8 */
  if (zf) goto L_4071a8;
L_4071a2: /* 4071a2: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4071a4: je 0x40717a */
  if (zf) goto L_40717a;
L_4071a6: /* 4071a6: jmp 0x40713e */
  goto L_40713e;
L_4071a8: /* 4071a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071aa: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 4071ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071ae: ret  */
  esp += 4; SPILL(); return;
L_4071af: /* 4071af: lea eax, [edx - 2] */
  eax = (uint32_t)(edx + 0xfffffffeu);
/* 4071b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071b5: ret  */
  esp += 4; SPILL(); return;
L_4071b6: /* 4071b6: lea eax, [edx - 3] */
  eax = (uint32_t)(edx + 0xfffffffdu);
/* 4071b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071bc: ret  */
  esp += 4; SPILL(); return;
L_4071bd: /* 4071bd: lea eax, [edx - 4] */
  eax = (uint32_t)(edx + 0xfffffffcu);
/* 4071c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071c3: ret  */
  esp += 4; SPILL(); return;
}

void f_4071c4(void) {
  LOAD_REGS();
  goto L_4071c4;
L_407101: /* 407101: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 407104: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407105: ret  */
  esp += 4; SPILL(); return;
L_40710c: /* 40710c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40710d: mov ebx, eax */
  ebx = eax;
/* 40710f: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 407112: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 407116: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40711c: je 0x407133 */
  if (zf) goto L_407133;
L_40711e: /* 40711e: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 407120: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407123: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407125: je 0x407101 */
  if (zf) goto L_407101;
L_407127: /* 407127: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407129: je 0x40717c */
  if (zf) goto L_40717c;
L_40712b: /* 40712b: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407131: jne 0x40711e */
  if (!zf) goto L_40711e;
L_407133: /* 407133: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 407135: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407136: mov eax, ebx */
  eax = ebx;
/* 407138: shl ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 40713b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40713c: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_40713e: /* 40713e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 407140: mov edi, 0x7efefeff */
  edi = 0x7efefeffu;
/* 407145: mov eax, ecx */
  eax = ecx;
/* 407147: mov esi, edi */
  esi = edi;
/* 407149: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 40714b: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40714d: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40714f: xor ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 407152: xor eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 407155: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 407157: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 407159: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40715c: and ecx, 0x81010100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407162: jne 0x407180 */
  if (!zf) goto L_407180;
L_407164: /* 407164: and eax, 0x81010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 407169: je 0x40713e */
  if (zf) goto L_40713e;
L_40716b: /* 40716b: and eax, 0x1010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 407170: jne 0x40717a */
  if (!zf) goto L_40717a;
L_407172: /* 407172: and esi, 0x80000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  esi = r;
  }
/* 407178: jne 0x40713e */
  if (!zf) goto L_40713e;
L_40717a: /* 40717a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40717b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_40717c: /* 40717c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40717d: xor eax, eax */
  eax = 0;
/* 40717f: ret  */
  esp += 4; SPILL(); return;
L_407180: /* 407180: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* 407183: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407185: je 0x4071bd */
  if (zf) goto L_4071bd;
L_407187: /* 407187: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407189: je 0x40717a */
  if (zf) goto L_40717a;
L_40718b: /* 40718b: cmp ah, bl */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40718d: je 0x4071b6 */
  if (zf) goto L_4071b6;
L_40718f: /* 40718f: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407191: je 0x40717a */
  if (zf) goto L_40717a;
L_407193: /* 407193: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 407196: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407198: je 0x4071af */
  if (zf) goto L_4071af;
L_40719a: /* 40719a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40719c: je 0x40717a */
  if (zf) goto L_40717a;
L_40719e: /* 40719e: cmp ah, bl */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4071a0: je 0x4071a8 */
  if (zf) goto L_4071a8;
L_4071a2: /* 4071a2: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4071a4: je 0x40717a */
  if (zf) goto L_40717a;
L_4071a6: /* 4071a6: jmp 0x40713e */
  goto L_40713e;
L_4071a8: /* 4071a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071aa: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 4071ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071ae: ret  */
  esp += 4; SPILL(); return;
L_4071af: /* 4071af: lea eax, [edx - 2] */
  eax = (uint32_t)(edx + 0xfffffffeu);
/* 4071b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071b5: ret  */
  esp += 4; SPILL(); return;
L_4071b6: /* 4071b6: lea eax, [edx - 3] */
  eax = (uint32_t)(edx + 0xfffffffdu);
/* 4071b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071bc: ret  */
  esp += 4; SPILL(); return;
L_4071bd: /* 4071bd: lea eax, [edx - 4] */
  eax = (uint32_t)(edx + 0xfffffffcu);
/* 4071c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071c3: ret  */
  esp += 4; SPILL(); return;
L_4071c4: /* 4071c4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4071c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4071c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4071ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4071cb: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4071cd: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4071d1: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4071d3: je 0x407244 */
  if (zf) goto L_407244;
L_4071d5: /* 4071d5: mov dh, byte ptr [ecx + 1] */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu) << 8);
/* 4071d8: test dh, dh */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4071da: je 0x407231 */
  if (zf) goto L_407231;
L_4071dc: /* 4071dc: mov esi, edi */
  esi = edi;
/* 4071de: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4071e2: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4071e4: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4071e7: cmp al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4071e9: je 0x407202 */
  if (zf) goto L_407202;
L_4071eb: /* 4071eb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4071ed: je 0x4071fc */
  if (zf) goto L_4071fc;
L_4071ef: /* 4071ef: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4071f1: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_4071f4: /* 4071f4: cmp al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4071f6: je 0x407202 */
  if (zf) goto L_407202;
L_4071f8: /* 4071f8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4071fa: jne 0x4071ef */
  if (!zf) goto L_4071ef;
L_4071fc: /* 4071fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4071fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4071fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4071ff: xor eax, eax */
  eax = 0;
/* 407201: ret  */
  esp += 4; SPILL(); return;
L_407202: /* 407202: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407204: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407207: cmp al, dh */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407209: jne 0x4071f4 */
  if (!zf) goto L_4071f4;
L_40720b: /* 40720b: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
L_40720e: /* 40720e: mov ah, byte ptr [ecx + 2] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ecx + 0x2u))) & 0xffu) << 8);
/* 407211: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407213: je 0x40723d */
  if (zf) goto L_40723d;
L_407215: /* 407215: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407217: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40721a: cmp al, ah */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40721c: jne 0x4071dc */
  if (!zf) goto L_4071dc;
L_40721e: /* 40721e: mov al, byte ptr [ecx + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3u))) & 0xffu);
/* 407221: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407223: je 0x40723d */
  if (zf) goto L_40723d;
L_407225: /* 407225: mov ah, byte ptr [esi - 1] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esi + 0xffffffffu))) & 0xffu) << 8);
/* 407228: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40722b: cmp al, ah */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40722d: je 0x40720e */
  if (zf) goto L_40720e;
L_40722f: /* 40722f: jmp 0x4071dc */
  goto L_4071dc;
L_407231: /* 407231: xor eax, eax */
  eax = 0;
/* 407233: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407234: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407235: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407236: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 407238: jmp 0x40710c */
  goto L_40710c;
L_40723d: /* 40723d: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 407240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407242: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407243: ret  */
  esp += 4; SPILL(); return;
L_407244: /* 407244: mov eax, edi */
  eax = edi;
/* 407246: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407247: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407248: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407249: ret  */
  esp += 4; SPILL(); return;
}

void f_407272(void) {
  LOAD_REGS();
  goto L_407272;
L_403f49: /* 403f49: jmp dword ptr [ecx*4 + 0x403f50] */
  switch (R32((uint32_t)(ecx*4 + 0x403f50u))) {
    case 0x403f70u: goto L_403f70;
    case 0x403f78u: goto L_403f78;
    case 0x403f80u: goto L_403f80;
    case 0x403f93u: goto L_403f93;
    case 0x4072e7u: goto L_4072e7;
    case 0x4072efu: goto L_4072ef;
    case 0x4072f7u: goto L_4072f7;
    case 0x4072ffu: goto L_4072ff;
    default: guest_badjump(0x403f49, R32((uint32_t)(ecx*4 + 0x403f50u))); return;
  }
L_403f70: /* 403f70: mov eax, dword ptr [esi + ecx*4 - 0xc] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff4u));
/* 403f74: mov dword ptr [edi + ecx*4 - 0xc], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff4u), eax);
L_403f78: /* 403f78: mov eax, dword ptr [esi + ecx*4 - 8] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff8u));
/* 403f7c: mov dword ptr [edi + ecx*4 - 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff8u), eax);
L_403f80: /* 403f80: mov eax, dword ptr [esi + ecx*4 - 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffffcu));
/* 403f84: mov dword ptr [edi + ecx*4 - 4], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffffcu), eax);
/* 403f88: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 403f8f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 403f91: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_403f93: /* 403f93: jmp dword ptr [edx*4 + 0x403f9c] */
  switch (R32((uint32_t)(edx*4 + 0x403f9cu))) {
    case 0x403facu: goto L_403fac;
    case 0x40730cu: goto L_40730c;
    case 0x407317u: goto L_407317;
    case 0x407328u: goto L_407328;
    default: guest_badjump(0x403f93, R32((uint32_t)(edx*4 + 0x403f9cu))); return;
  }
L_403fac: /* 403fac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 403faf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403fb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403fb1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 403fb2: ret  */
  esp += 4; SPILL(); return;
L_407272: /* 407272: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 407274: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407276: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407278: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40727b: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 40727e: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407281: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 407284: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407287: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40728a: add edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40728d: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 407290: jb 0x403f49 */
  if (cf) goto L_403f49;
L_407296: /* 407296: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 407298: jmp dword ptr [edx*4 + 0x403f9c] */
  switch (R32((uint32_t)(edx*4 + 0x403f9cu))) {
    case 0x403facu: goto L_403fac;
    case 0x40730cu: goto L_40730c;
    case 0x407317u: goto L_407317;
    case 0x407328u: goto L_407328;
    default: guest_badjump(0x407298, R32((uint32_t)(edx*4 + 0x403f9cu))); return;
  }
L_4072e7: /* 4072e7: mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe4u));
/* 4072eb: mov dword ptr [edi + ecx*4 - 0x1c], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe4u), eax);
L_4072ef: /* 4072ef: mov eax, dword ptr [esi + ecx*4 - 0x18] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe8u));
/* 4072f3: mov dword ptr [edi + ecx*4 - 0x18], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe8u), eax);
L_4072f7: /* 4072f7: mov eax, dword ptr [esi + ecx*4 - 0x14] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffecu));
/* 4072fb: mov dword ptr [edi + ecx*4 - 0x14], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffecu), eax);
L_4072ff: /* 4072ff: mov eax, dword ptr [esi + ecx*4 - 0x10] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff0u));
/* 407303: mov dword ptr [edi + ecx*4 - 0x10], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff0u), eax);
/* 407307: jmp 0x403f70 */
  goto L_403f70;
L_40730c: /* 40730c: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40730e: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407310: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407313: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407314: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407315: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407316: ret  */
  esp += 4; SPILL(); return;
L_407317: /* 407317: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407319: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40731b: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40731e: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407321: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407324: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407325: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407326: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407327: ret  */
  esp += 4; SPILL(); return;
L_407328: /* 407328: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40732a: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40732c: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40732f: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407332: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407335: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407338: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40733b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40733c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40733d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40733e: ret  */
  esp += 4; SPILL(); return;
}

void f_40729f(void) {
  LOAD_REGS();
  goto L_40729f;
L_403f49: /* 403f49: jmp dword ptr [ecx*4 + 0x403f50] */
  switch (R32((uint32_t)(ecx*4 + 0x403f50u))) {
    case 0x403f70u: goto L_403f70;
    case 0x403f78u: goto L_403f78;
    case 0x403f80u: goto L_403f80;
    case 0x403f93u: goto L_403f93;
    case 0x4072e7u: goto L_4072e7;
    case 0x4072efu: goto L_4072ef;
    case 0x4072f7u: goto L_4072f7;
    case 0x4072ffu: goto L_4072ff;
    default: guest_badjump(0x403f49, R32((uint32_t)(ecx*4 + 0x403f50u))); return;
  }
L_403f70: /* 403f70: mov eax, dword ptr [esi + ecx*4 - 0xc] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff4u));
/* 403f74: mov dword ptr [edi + ecx*4 - 0xc], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff4u), eax);
L_403f78: /* 403f78: mov eax, dword ptr [esi + ecx*4 - 8] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff8u));
/* 403f7c: mov dword ptr [edi + ecx*4 - 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff8u), eax);
L_403f80: /* 403f80: mov eax, dword ptr [esi + ecx*4 - 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffffcu));
/* 403f84: mov dword ptr [edi + ecx*4 - 4], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffffcu), eax);
/* 403f88: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 403f8f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 403f91: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_403f93: /* 403f93: jmp dword ptr [edx*4 + 0x403f9c] */
  switch (R32((uint32_t)(edx*4 + 0x403f9cu))) {
    case 0x403facu: goto L_403fac;
    case 0x40730cu: goto L_40730c;
    case 0x407317u: goto L_407317;
    case 0x407328u: goto L_407328;
    default: guest_badjump(0x403f93, R32((uint32_t)(edx*4 + 0x403f9cu))); return;
  }
L_403fac: /* 403fac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 403faf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403fb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403fb1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 403fb2: ret  */
  esp += 4; SPILL(); return;
L_40729f: /* 40729f: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4072a1: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4072a3: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 4072a5: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4072a8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4072ab: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4072ae: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4072b1: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4072b4: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4072b7: jb 0x403f49 */
  if (cf) goto L_403f49;
L_4072bd: /* 4072bd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4072bf: jmp dword ptr [edx*4 + 0x403f9c] */
  switch (R32((uint32_t)(edx*4 + 0x403f9cu))) {
    case 0x403facu: goto L_403fac;
    case 0x40730cu: goto L_40730c;
    case 0x407317u: goto L_407317;
    case 0x407328u: goto L_407328;
    default: guest_badjump(0x4072bf, R32((uint32_t)(edx*4 + 0x403f9cu))); return;
  }
L_4072e7: /* 4072e7: mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe4u));
/* 4072eb: mov dword ptr [edi + ecx*4 - 0x1c], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe4u), eax);
L_4072ef: /* 4072ef: mov eax, dword ptr [esi + ecx*4 - 0x18] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe8u));
/* 4072f3: mov dword ptr [edi + ecx*4 - 0x18], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe8u), eax);
L_4072f7: /* 4072f7: mov eax, dword ptr [esi + ecx*4 - 0x14] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffecu));
/* 4072fb: mov dword ptr [edi + ecx*4 - 0x14], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffecu), eax);
L_4072ff: /* 4072ff: mov eax, dword ptr [esi + ecx*4 - 0x10] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff0u));
/* 407303: mov dword ptr [edi + ecx*4 - 0x10], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff0u), eax);
/* 407307: jmp 0x403f70 */
  goto L_403f70;
L_40730c: /* 40730c: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40730e: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407310: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407313: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407314: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407315: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407316: ret  */
  esp += 4; SPILL(); return;
L_407317: /* 407317: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407319: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40731b: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40731e: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407321: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407324: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407325: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407326: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407327: ret  */
  esp += 4; SPILL(); return;
L_407328: /* 407328: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40732a: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40732c: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40732f: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407332: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407335: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407338: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40733b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40733c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40733d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40733e: ret  */
  esp += 4; SPILL(); return;
}

void f_4072c6(void) {
  LOAD_REGS();
  goto L_4072c6;
L_403f49: /* 403f49: jmp dword ptr [ecx*4 + 0x403f50] */
  switch (R32((uint32_t)(ecx*4 + 0x403f50u))) {
    case 0x403f70u: goto L_403f70;
    case 0x403f78u: goto L_403f78;
    case 0x403f80u: goto L_403f80;
    case 0x403f93u: goto L_403f93;
    case 0x4072e7u: goto L_4072e7;
    case 0x4072efu: goto L_4072ef;
    case 0x4072f7u: goto L_4072f7;
    case 0x4072ffu: goto L_4072ff;
    default: guest_badjump(0x403f49, R32((uint32_t)(ecx*4 + 0x403f50u))); return;
  }
L_403f70: /* 403f70: mov eax, dword ptr [esi + ecx*4 - 0xc] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff4u));
/* 403f74: mov dword ptr [edi + ecx*4 - 0xc], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff4u), eax);
L_403f78: /* 403f78: mov eax, dword ptr [esi + ecx*4 - 8] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff8u));
/* 403f7c: mov dword ptr [edi + ecx*4 - 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff8u), eax);
L_403f80: /* 403f80: mov eax, dword ptr [esi + ecx*4 - 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffffcu));
/* 403f84: mov dword ptr [edi + ecx*4 - 4], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffffcu), eax);
/* 403f88: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 403f8f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 403f91: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_403f93: /* 403f93: jmp dword ptr [edx*4 + 0x403f9c] */
  switch (R32((uint32_t)(edx*4 + 0x403f9cu))) {
    case 0x403facu: goto L_403fac;
    case 0x40730cu: goto L_40730c;
    case 0x407317u: goto L_407317;
    case 0x407328u: goto L_407328;
    default: guest_badjump(0x403f93, R32((uint32_t)(edx*4 + 0x403f9cu))); return;
  }
L_403fac: /* 403fac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 403faf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403fb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403fb1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 403fb2: ret  */
  esp += 4; SPILL(); return;
L_4072c6: /* 4072c6: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4072c8: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4072ca: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 4072cc: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4072cf: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4072d2: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4072d5: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4072d8: jb 0x403f49 */
  if (cf) goto L_403f49;
L_4072de: /* 4072de: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4072e0: jmp dword ptr [edx*4 + 0x403f9c] */
  switch (R32((uint32_t)(edx*4 + 0x403f9cu))) {
    case 0x403facu: goto L_403fac;
    case 0x40730cu: goto L_40730c;
    case 0x407317u: goto L_407317;
    case 0x407328u: goto L_407328;
    default: guest_badjump(0x4072e0, R32((uint32_t)(edx*4 + 0x403f9cu))); return;
  }
L_4072e7: /* 4072e7: mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe4u));
/* 4072eb: mov dword ptr [edi + ecx*4 - 0x1c], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe4u), eax);
L_4072ef: /* 4072ef: mov eax, dword ptr [esi + ecx*4 - 0x18] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe8u));
/* 4072f3: mov dword ptr [edi + ecx*4 - 0x18], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe8u), eax);
L_4072f7: /* 4072f7: mov eax, dword ptr [esi + ecx*4 - 0x14] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffecu));
/* 4072fb: mov dword ptr [edi + ecx*4 - 0x14], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffecu), eax);
L_4072ff: /* 4072ff: mov eax, dword ptr [esi + ecx*4 - 0x10] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff0u));
/* 407303: mov dword ptr [edi + ecx*4 - 0x10], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff0u), eax);
/* 407307: jmp 0x403f70 */
  goto L_403f70;
L_40730c: /* 40730c: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40730e: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407310: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407313: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407314: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407315: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407316: ret  */
  esp += 4; SPILL(); return;
L_407317: /* 407317: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407319: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40731b: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40731e: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407321: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407324: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407325: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407326: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407327: ret  */
  esp += 4; SPILL(); return;
L_407328: /* 407328: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40732a: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40732c: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40732f: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407332: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407335: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407338: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40733b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40733c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40733d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40733e: ret  */
  esp += 4; SPILL(); return;
}

void f_407369(void) {
  LOAD_REGS();
  goto L_407369;
L_403fde: /* 403fde: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 403fe0: jmp dword ptr [ecx*4 + 0x404004] */
  switch (R32((uint32_t)(ecx*4 + 0x404004u))) {
    case 0x404023u: goto L_404023;
    default: guest_badjump(0x403fe0, R32((uint32_t)(ecx*4 + 0x404004u))); return;
  }
L_404023: /* 404023: jmp dword ptr [edx*4 + 0x404030] */
  switch (R32((uint32_t)(edx*4 + 0x404030u))) {
    case 0x404040u: goto L_404040;
    case 0x407417u: goto L_407417;
    case 0x407424u: goto L_407424;
    case 0x407437u: goto L_407437;
    default: guest_badjump(0x404023, R32((uint32_t)(edx*4 + 0x404030u))); return;
  }
L_404040: /* 404040: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 404043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404044: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 404045: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 404046: ret  */
  esp += 4; SPILL(); return;
L_407369: /* 407369: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40736c: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40736e: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 407371: sub esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 407374: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 407377: sub edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 40737a: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40737d: jb 0x403fde */
  if (cf) goto L_403fde;
L_407383: /* 407383: std  */
  DF = 1;
/* 407384: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 407386: cld  */
  DF = 0;
/* 407387: jmp dword ptr [edx*4 + 0x404030] */
  switch (R32((uint32_t)(edx*4 + 0x404030u))) {
    case 0x404040u: goto L_404040;
    case 0x407417u: goto L_407417;
    case 0x407424u: goto L_407424;
    case 0x407437u: goto L_407437;
    default: guest_badjump(0x407387, R32((uint32_t)(edx*4 + 0x404030u))); return;
  }
L_407417: /* 407417: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40741a: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40741d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407421: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407422: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407423: ret  */
  esp += 4; SPILL(); return;
L_407424: /* 407424: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 407427: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40742a: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 40742d: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407430: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407433: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407434: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407435: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407436: ret  */
  esp += 4; SPILL(); return;
L_407437: /* 407437: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40743a: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40743d: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407440: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407443: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 407446: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407449: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40744c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40744d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40744e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40744f: ret  */
  esp += 4; SPILL(); return;
}

void f_40738e(void) {
  LOAD_REGS();
  goto L_40738e;
L_403fde: /* 403fde: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 403fe0: jmp dword ptr [ecx*4 + 0x404004] */
  switch (R32((uint32_t)(ecx*4 + 0x404004u))) {
    case 0x404023u: goto L_404023;
    default: guest_badjump(0x403fe0, R32((uint32_t)(ecx*4 + 0x404004u))); return;
  }
L_404023: /* 404023: jmp dword ptr [edx*4 + 0x404030] */
  switch (R32((uint32_t)(edx*4 + 0x404030u))) {
    case 0x404040u: goto L_404040;
    case 0x407417u: goto L_407417;
    case 0x407424u: goto L_407424;
    case 0x407437u: goto L_407437;
    default: guest_badjump(0x404023, R32((uint32_t)(edx*4 + 0x404030u))); return;
  }
L_404040: /* 404040: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 404043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404044: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 404045: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 404046: ret  */
  esp += 4; SPILL(); return;
L_40738e: /* 40738e: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 407391: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 407393: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 407396: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407399: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 40739c: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 40739f: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4073a2: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4073a5: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4073a8: jb 0x403fde */
  if (cf) goto L_403fde;
L_4073ae: /* 4073ae: std  */
  DF = 1;
/* 4073af: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4073b1: cld  */
  DF = 0;
/* 4073b2: jmp dword ptr [edx*4 + 0x404030] */
  switch (R32((uint32_t)(edx*4 + 0x404030u))) {
    case 0x404040u: goto L_404040;
    case 0x407417u: goto L_407417;
    case 0x407424u: goto L_407424;
    case 0x407437u: goto L_407437;
    default: guest_badjump(0x4073b2, R32((uint32_t)(edx*4 + 0x404030u))); return;
  }
L_407417: /* 407417: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40741a: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40741d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407421: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407422: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407423: ret  */
  esp += 4; SPILL(); return;
L_407424: /* 407424: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 407427: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40742a: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 40742d: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407430: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407433: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407434: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407435: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407436: ret  */
  esp += 4; SPILL(); return;
L_407437: /* 407437: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40743a: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40743d: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407440: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407443: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 407446: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407449: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40744c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40744d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40744e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40744f: ret  */
  esp += 4; SPILL(); return;
}

void f_4073b9(void) {
  LOAD_REGS();
  goto L_4073b9;
L_403fde: /* 403fde: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 403fe0: jmp dword ptr [ecx*4 + 0x404004] */
  switch (R32((uint32_t)(ecx*4 + 0x404004u))) {
    case 0x404023u: goto L_404023;
    default: guest_badjump(0x403fe0, R32((uint32_t)(ecx*4 + 0x404004u))); return;
  }
L_404023: /* 404023: jmp dword ptr [edx*4 + 0x404030] */
  switch (R32((uint32_t)(edx*4 + 0x404030u))) {
    case 0x404040u: goto L_404040;
    case 0x407417u: goto L_407417;
    case 0x407424u: goto L_407424;
    case 0x407437u: goto L_407437;
    default: guest_badjump(0x404023, R32((uint32_t)(edx*4 + 0x404030u))); return;
  }
L_404040: /* 404040: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 404043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 404044: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 404045: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 404046: ret  */
  esp += 4; SPILL(); return;
L_4073b9: /* 4073b9: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4073bc: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4073be: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4073c1: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4073c4: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4073c7: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4073ca: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4073cd: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4073d0: sub esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4073d3: sub edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4073d6: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4073d9: jb 0x403fde */
  if (cf) goto L_403fde;
L_4073df: /* 4073df: std  */
  DF = 1;
/* 4073e0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4073e2: cld  */
  DF = 0;
/* 4073e3: jmp dword ptr [edx*4 + 0x404030] */
  switch (R32((uint32_t)(edx*4 + 0x404030u))) {
    case 0x404040u: goto L_404040;
    case 0x407417u: goto L_407417;
    case 0x407424u: goto L_407424;
    case 0x407437u: goto L_407437;
    default: guest_badjump(0x4073e3, R32((uint32_t)(edx*4 + 0x404030u))); return;
  }
L_407417: /* 407417: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40741a: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40741d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407421: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407422: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407423: ret  */
  esp += 4; SPILL(); return;
L_407424: /* 407424: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 407427: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40742a: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 40742d: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407430: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407433: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407434: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407435: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407436: ret  */
  esp += 4; SPILL(); return;
L_407437: /* 407437: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40743a: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 40743d: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407440: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407443: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 407446: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 407449: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40744c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40744d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40744e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40744f: ret  */
  esp += 4; SPILL(); return;
}

void f_4073ea(void) {
  LOAD_REGS();
L_4073ea: /* 4073ea: mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x1cu));
/* 4073ee: mov dword ptr [edi + ecx*4 + 0x1c], eax */
  W32((uint32_t)(edi + ecx*4 + 0x1cu), eax);
  SPILL(); f_4073f2(); return;
}

void f_4073f2(void) {
  LOAD_REGS();
L_4073f2: /* 4073f2: mov eax, dword ptr [esi + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x18u));
/* 4073f6: mov dword ptr [edi + ecx*4 + 0x18], eax */
  W32((uint32_t)(edi + ecx*4 + 0x18u), eax);
  SPILL(); f_4073fa(); return;
}

void f_4073fa(void) {
  LOAD_REGS();
L_4073fa: /* 4073fa: mov eax, dword ptr [esi + ecx*4 + 0x14] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x14u));
/* 4073fe: mov dword ptr [edi + ecx*4 + 0x14], eax */
  W32((uint32_t)(edi + ecx*4 + 0x14u), eax);
  SPILL(); f_407402(); return;
}

void f_407402(void) {
  LOAD_REGS();
L_407402: /* 407402: mov eax, dword ptr [esi + ecx*4 + 0x10] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x10u));
/* 407406: mov dword ptr [edi + ecx*4 + 0x10], eax */
  W32((uint32_t)(edi + ecx*4 + 0x10u), eax);
  SPILL(); f_40740a(); return;
}

void f_40740a(void) {
  LOAD_REGS();
L_40740a: /* 40740a: mov eax, dword ptr [esi + ecx*4 + 0xc] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xcu));
/* 40740e: mov dword ptr [edi + ecx*4 + 0xc], eax */
  W32((uint32_t)(edi + ecx*4 + 0xcu), eax);
/* 407412: jmp 0x404008 */
  SPILL(); f_404008(); return;
}

void f_4074ce(void) {
  LOAD_REGS();
L_4074ce: /* 4074ce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4074cf: mov ebp, esp */
  ebp = esp;
/* 4074d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4074d2: xor eax, eax */
  eax = 0;
/* 4074d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4074d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4074d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4074d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4074d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4074d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4074da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4074db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4074dc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 4074df: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_4074e1: /* 4074e1: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 4074e3: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4074e5: je 0x4074f0 */
  if (zf) goto L_4074f0;
L_4074e7: /* 4074e7: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4074ea: bts dword ptr [esp], eax */
  { int32_t bo = (int32_t)eax; uint32_t ad = (uint32_t)(esp) + (uint32_t)(bo >> 3); uint32_t bi = bo & 7; uint32_t v = R8(ad);
  cf = (v >> bi) & 1;
  W8(ad, v | (1u << bi));
  }
/* 4074ee: jmp 0x4074e1 */
  goto L_4074e1;
L_4074f0: /* 4074f0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4074f3: mov edi, edi */
  edi = edi;
L_4074f5: /* 4074f5: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4074f7: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4074f9: je 0x407507 */
  if (zf) goto L_407507;
L_4074fb: /* 4074fb: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4074fe: bt dword ptr [esp], eax */
  { int32_t bo = (int32_t)eax; uint32_t ad = (uint32_t)(esp) + (uint32_t)(bo >> 3); uint32_t bi = bo & 7; uint32_t v = R8(ad);
  cf = (v >> bi) & 1;
  }
/* 407502: jae 0x4074f5 */
  if (!cf) goto L_4074f5;
L_407504: /* 407504: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
L_407507: /* 407507: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40750a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40750b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40750c: ret  */
  esp += 4; SPILL(); return;
}

void f_40750d(void) {
  LOAD_REGS();
L_40750d: /* 40750d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 407511: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407512: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407514: je 0x4075d1 */
  if (zf) goto L_4075d1;
L_40751a: /* 40751a: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 40751e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40751f: test edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407525: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407526: je 0x407539 */
  if (zf) goto L_407539;
L_407528: /* 407528: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40752a: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40752d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40752f: je 0x40756a */
  if (zf) goto L_40756a;
L_407531: /* 407531: test edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407537: jne 0x407528 */
  if (!zf) goto L_407528;
L_407539: /* 407539: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 40753b: mov edx, 0x7efefeff */
  edx = 0x7efefeffu;
/* 407540: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407542: xor eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 407545: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 407547: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40754a: test eax, 0x81010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40754f: je 0x407539 */
  if (zf) goto L_407539;
L_407551: /* 407551: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* 407554: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407556: je 0x407579 */
  if (zf) goto L_407579;
L_407558: /* 407558: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40755a: je 0x407574 */
  if (zf) goto L_407574;
L_40755c: /* 40755c: test eax, 0xff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407561: je 0x40756f */
  if (zf) goto L_40756f;
L_407563: /* 407563: test eax, 0xff000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407568: jne 0x407539 */
  if (!zf) goto L_407539;
L_40756a: /* 40756a: sub edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 40756d: jmp 0x40757c */
  goto L_40757c;
L_40756f: /* 40756f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 407572: jmp 0x40757c */
  goto L_40757c;
L_407574: /* 407574: sub edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 407577: jmp 0x40757c */
  goto L_40757c;
L_407579: /* 407579: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_40757c: /* 40757c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 407580: test esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407586: jne 0x407591 */
  if (!zf) goto L_407591;
L_407588: /* 407588: mov ebx, ecx */
  ebx = ecx;
/* 40758a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* 40758d: jne 0x4075eb */
  if (!zf) goto L_4075eb;
L_40758f: /* 40758f: jmp 0x4075b3 */
  goto L_4075b3;
L_407591: /* 407591: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407593: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407596: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407598: je 0x4075d7 */
  if (zf) goto L_4075d7;
L_40759a: /* 40759a: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 40759c: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40759f: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4075a2: je 0x4075cd */
  if (zf) goto L_4075cd;
L_4075a4: /* 4075a4: test esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4075aa: jne 0x407591 */
  if (!zf) goto L_407591;
L_4075ac: /* 4075ac: mov ebx, ecx */
  ebx = ecx;
/* 4075ae: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* 4075b1: jne 0x4075eb */
  if (!zf) goto L_4075eb;
L_4075b3: /* 4075b3: mov ecx, ebx */
  ecx = ebx;
/* 4075b5: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4075b8: je 0x4075cd */
  if (zf) goto L_4075cd;
L_4075ba: /* 4075ba: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4075bc: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4075bf: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 4075c1: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4075c4: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4075c6: je 0x4075cf */
  if (zf) goto L_4075cf;
L_4075c8: /* 4075c8: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4075cb: jne 0x4075ba */
  if (!zf) goto L_4075ba;
L_4075cd: /* 4075cd: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
L_4075cf: /* 4075cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4075d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4075d1: /* 4075d1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4075d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4075d6: ret  */
  esp += 4; SPILL(); return;
L_4075d7: /* 4075d7: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 4075d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4075dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4075de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4075df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4075e0: ret  */
  esp += 4; SPILL(); return;
L_4075e1: /* 4075e1: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 4075e3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4075e6: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4075e9: je 0x4075b3 */
  if (zf) goto L_4075b3;
L_4075eb: /* 4075eb: mov edx, 0x7efefeff */
  edx = 0x7efefeffu;
/* 4075f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4075f2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4075f4: xor eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4075f7: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4075f9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4075fb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4075fe: test eax, 0x81010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407603: je 0x4075e1 */
  if (zf) goto L_4075e1;
L_407605: /* 407605: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407607: je 0x4075d7 */
  if (zf) goto L_4075d7;
L_407609: /* 407609: test dh, dh */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40760b: je 0x407637 */
  if (zf) goto L_407637;
L_40760d: /* 40760d: test edx, 0xff0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407613: je 0x407627 */
  if (zf) goto L_407627;
L_407615: /* 407615: test edx, 0xff000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40761b: jne 0x4075e1 */
  if (!zf) goto L_4075e1;
L_40761d: /* 40761d: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 40761f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 407623: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407624: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407625: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407626: ret  */
  esp += 4; SPILL(); return;
L_407627: /* 407627: mov word ptr [edi], dx */
  W16((uint32_t)(edi), (edx & 0xffffu));
/* 40762a: xor edx, edx */
  edx = 0;
/* 40762c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 407630: mov byte ptr [edi + 2], dl */
  W8((uint32_t)(edi + 0x2u), (edx & 0xffu));
/* 407633: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407634: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407635: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407636: ret  */
  esp += 4; SPILL(); return;
L_407637: /* 407637: mov word ptr [edi], dx */
  W16((uint32_t)(edi), (edx & 0xffffu));
/* 40763a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40763e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40763f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407640: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407641: ret  */
  esp += 4; SPILL(); return;
}

void f_407642(void) {
  LOAD_REGS();
  goto L_407642;
L_4012a2: /* 4012a2: jmp dword ptr [ecx*4 + 0x4012b0] */
  switch (R32((uint32_t)(ecx*4 + 0x4012b0u))) {
    case 0x4012d0u: goto L_4012d0;
    case 0x4012d8u: goto L_4012d8;
    case 0x4012e0u: goto L_4012e0;
    case 0x4012e8u: goto L_4012e8;
    case 0x4012f0u: goto L_4012f0;
    case 0x4012f8u: goto L_4012f8;
    case 0x401300u: goto L_401300;
    case 0x401313u: goto L_401313;
    default: guest_badjump(0x4012a2, R32((uint32_t)(ecx*4 + 0x4012b0u))); return;
  }
L_4012d0: /* 4012d0: mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe4u));
/* 4012d4: mov dword ptr [edi + ecx*4 - 0x1c], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe4u), eax);
L_4012d8: /* 4012d8: mov eax, dword ptr [esi + ecx*4 - 0x18] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe8u));
/* 4012dc: mov dword ptr [edi + ecx*4 - 0x18], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe8u), eax);
L_4012e0: /* 4012e0: mov eax, dword ptr [esi + ecx*4 - 0x14] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffecu));
/* 4012e4: mov dword ptr [edi + ecx*4 - 0x14], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffecu), eax);
L_4012e8: /* 4012e8: mov eax, dword ptr [esi + ecx*4 - 0x10] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff0u));
/* 4012ec: mov dword ptr [edi + ecx*4 - 0x10], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff0u), eax);
L_4012f0: /* 4012f0: mov eax, dword ptr [esi + ecx*4 - 0xc] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff4u));
/* 4012f4: mov dword ptr [edi + ecx*4 - 0xc], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff4u), eax);
L_4012f8: /* 4012f8: mov eax, dword ptr [esi + ecx*4 - 8] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff8u));
/* 4012fc: mov dword ptr [edi + ecx*4 - 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff8u), eax);
L_401300: /* 401300: mov eax, dword ptr [esi + ecx*4 - 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffffcu));
/* 401304: mov dword ptr [edi + ecx*4 - 4], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffffcu), eax);
/* 401308: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 40130f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 401311: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_401313: /* 401313: jmp dword ptr [edx*4 + 0x40131c] */
  switch (R32((uint32_t)(edx*4 + 0x40131cu))) {
    case 0x40132cu: goto L_40132c;
    case 0x401346u: goto L_401346;
    case 0x407690u: goto L_407690;
    case 0x40769bu: goto L_40769b;
    default: guest_badjump(0x401313, R32((uint32_t)(edx*4 + 0x40131cu))); return;
  }
L_40132c: /* 40132c: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40132e: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 401330: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 401333: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 401336: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 401339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40133a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40133b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40133c: ret  */
  esp += 4; SPILL(); return;
L_401346: /* 401346: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 401349: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40134a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40134b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40134c: ret  */
  esp += 4; SPILL(); return;
L_407642: /* 407642: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 407644: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407646: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407648: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 40764b: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 40764e: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407651: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 407654: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407657: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40765a: add edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40765d: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 407660: jb 0x4012a2 */
  if (cf) goto L_4012a2;
L_407666: /* 407666: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 407668: jmp dword ptr [edx*4 + 0x40131c] */
  switch (R32((uint32_t)(edx*4 + 0x40131cu))) {
    case 0x40132cu: goto L_40132c;
    case 0x401346u: goto L_401346;
    case 0x407690u: goto L_407690;
    case 0x40769bu: goto L_40769b;
    default: guest_badjump(0x407668, R32((uint32_t)(edx*4 + 0x40131cu))); return;
  }
L_407690: /* 407690: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407692: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407694: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407697: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407698: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407699: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40769a: ret  */
  esp += 4; SPILL(); return;
L_40769b: /* 40769b: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40769d: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40769f: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4076a2: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4076a5: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4076a8: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4076ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4076ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4076af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4076b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4076b1: ret  */
  esp += 4; SPILL(); return;
}

void f_40766f(void) {
  LOAD_REGS();
  goto L_40766f;
L_4012a2: /* 4012a2: jmp dword ptr [ecx*4 + 0x4012b0] */
  switch (R32((uint32_t)(ecx*4 + 0x4012b0u))) {
    case 0x4012d0u: goto L_4012d0;
    case 0x4012d8u: goto L_4012d8;
    case 0x4012e0u: goto L_4012e0;
    case 0x4012e8u: goto L_4012e8;
    case 0x4012f0u: goto L_4012f0;
    case 0x4012f8u: goto L_4012f8;
    case 0x401300u: goto L_401300;
    case 0x401313u: goto L_401313;
    default: guest_badjump(0x4012a2, R32((uint32_t)(ecx*4 + 0x4012b0u))); return;
  }
L_4012d0: /* 4012d0: mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe4u));
/* 4012d4: mov dword ptr [edi + ecx*4 - 0x1c], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe4u), eax);
L_4012d8: /* 4012d8: mov eax, dword ptr [esi + ecx*4 - 0x18] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe8u));
/* 4012dc: mov dword ptr [edi + ecx*4 - 0x18], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe8u), eax);
L_4012e0: /* 4012e0: mov eax, dword ptr [esi + ecx*4 - 0x14] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffecu));
/* 4012e4: mov dword ptr [edi + ecx*4 - 0x14], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffecu), eax);
L_4012e8: /* 4012e8: mov eax, dword ptr [esi + ecx*4 - 0x10] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff0u));
/* 4012ec: mov dword ptr [edi + ecx*4 - 0x10], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff0u), eax);
L_4012f0: /* 4012f0: mov eax, dword ptr [esi + ecx*4 - 0xc] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff4u));
/* 4012f4: mov dword ptr [edi + ecx*4 - 0xc], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff4u), eax);
L_4012f8: /* 4012f8: mov eax, dword ptr [esi + ecx*4 - 8] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff8u));
/* 4012fc: mov dword ptr [edi + ecx*4 - 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff8u), eax);
L_401300: /* 401300: mov eax, dword ptr [esi + ecx*4 - 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffffcu));
/* 401304: mov dword ptr [edi + ecx*4 - 4], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffffcu), eax);
/* 401308: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 40130f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 401311: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_401313: /* 401313: jmp dword ptr [edx*4 + 0x40131c] */
  switch (R32((uint32_t)(edx*4 + 0x40131cu))) {
    case 0x40132cu: goto L_40132c;
    case 0x401346u: goto L_401346;
    case 0x407690u: goto L_407690;
    case 0x40769bu: goto L_40769b;
    default: guest_badjump(0x401313, R32((uint32_t)(edx*4 + 0x40131cu))); return;
  }
L_40132c: /* 40132c: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40132e: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 401330: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 401333: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 401336: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 401339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40133a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40133b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40133c: ret  */
  esp += 4; SPILL(); return;
L_401346: /* 401346: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 401349: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40134a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40134b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40134c: ret  */
  esp += 4; SPILL(); return;
L_40766f: /* 40766f: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 407671: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407673: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407675: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407678: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 40767b: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40767e: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 407681: jb 0x4012a2 */
  if (cf) goto L_4012a2;
L_407687: /* 407687: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 407689: jmp dword ptr [edx*4 + 0x40131c] */
  switch (R32((uint32_t)(edx*4 + 0x40131cu))) {
    case 0x40132cu: goto L_40132c;
    case 0x401346u: goto L_401346;
    case 0x407690u: goto L_407690;
    case 0x40769bu: goto L_40769b;
    default: guest_badjump(0x407689, R32((uint32_t)(edx*4 + 0x40131cu))); return;
  }
L_407690: /* 407690: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407692: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407694: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407697: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407698: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407699: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40769a: ret  */
  esp += 4; SPILL(); return;
L_40769b: /* 40769b: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40769d: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40769f: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4076a2: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4076a5: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4076a8: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4076ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4076ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4076af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4076b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4076b1: ret  */
  esp += 4; SPILL(); return;
}

void f_4076e1(void) {
  LOAD_REGS();
L_4076e1: /* 4076e1: mov eax, edi */
  eax = edi;
/* 4076e3: mov edx, 3 */
  edx = 0x3u;
/* 4076e8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4076eb: jb 0x4076f9 */
  if (cf) goto L_4076f9;
L_4076ed: /* 4076ed: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4076f0: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4076f2: jmp dword ptr [eax*4 + 0x407804] */
  { uint32_t t = R32((uint32_t)(eax*4 + 0x407804u)); SPILL(); call_ind(t); return; }
L_4076f9: /* 4076f9: jmp dword ptr [ecx*4 + 0x407838] */
  switch (R32((uint32_t)(ecx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x4076f9, R32((uint32_t)(ecx*4 + 0x407838u))); return;
  }
L_4077c3: /* 4077c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077c9: ret  */
  esp += 4; SPILL(); return;
L_4077ca: /* 4077ca: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077cd: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077d6: ret  */
  esp += 4; SPILL(); return;
L_4077d7: /* 4077d7: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077da: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077dd: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077e0: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077e8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077e9: ret  */
  esp += 4; SPILL(); return;
L_4077ea: /* 4077ea: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077ed: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077f0: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077f3: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077f6: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4077f9: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4077fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407800: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407801: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407802: ret  */
  esp += 4; SPILL(); return;
}

void f_4076f9(void) {
  LOAD_REGS();
L_4076f9: /* 4076f9: jmp dword ptr [ecx*4 + 0x407838] */
  switch (R32((uint32_t)(ecx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x4076f9, R32((uint32_t)(ecx*4 + 0x407838u))); return;
  }
L_4077c3: /* 4077c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077c9: ret  */
  esp += 4; SPILL(); return;
L_4077ca: /* 4077ca: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077cd: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077d6: ret  */
  esp += 4; SPILL(); return;
L_4077d7: /* 4077d7: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077da: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077dd: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077e0: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077e8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077e9: ret  */
  esp += 4; SPILL(); return;
L_4077ea: /* 4077ea: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077ed: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077f0: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077f3: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077f6: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4077f9: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4077fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407800: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407801: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407802: ret  */
  esp += 4; SPILL(); return;
}

void f_407700(void) {
  LOAD_REGS();
  goto L_407700;
L_4076d8: /* 4076d8: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 4076da: jmp dword ptr [ecx*4 + 0x407830] */
  switch (R32((uint32_t)(ecx*4 + 0x407830u))) {
    case 0x4077bcu: goto L_4077bc;
    default: guest_badjump(0x4076da, R32((uint32_t)(ecx*4 + 0x407830u))); return;
  }
L_407700: /* 407700: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 407703: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 407705: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 407708: sub esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 40770b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 40770e: sub edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 407711: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 407714: jb 0x4076d8 */
  if (cf) goto L_4076d8;
L_407716: /* 407716: std  */
  DF = 1;
/* 407717: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 407719: cld  */
  DF = 0;
/* 40771a: jmp dword ptr [edx*4 + 0x407838] */
  switch (R32((uint32_t)(edx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x40771a, R32((uint32_t)(edx*4 + 0x407838u))); return;
  }
L_4077bc: /* 4077bc: jmp dword ptr [edx*4 + 0x407838] */
  switch (R32((uint32_t)(edx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x4077bc, R32((uint32_t)(edx*4 + 0x407838u))); return;
  }
L_4077c3: /* 4077c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077c9: ret  */
  esp += 4; SPILL(); return;
L_4077ca: /* 4077ca: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077cd: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077d6: ret  */
  esp += 4; SPILL(); return;
L_4077d7: /* 4077d7: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077da: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077dd: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077e0: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077e8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077e9: ret  */
  esp += 4; SPILL(); return;
L_4077ea: /* 4077ea: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077ed: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077f0: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077f3: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077f6: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4077f9: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4077fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407800: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407801: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407802: ret  */
  esp += 4; SPILL(); return;
}

void f_407721(void) {
  LOAD_REGS();
  goto L_407721;
L_4076d8: /* 4076d8: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 4076da: jmp dword ptr [ecx*4 + 0x407830] */
  switch (R32((uint32_t)(ecx*4 + 0x407830u))) {
    case 0x4077bcu: goto L_4077bc;
    default: guest_badjump(0x4076da, R32((uint32_t)(ecx*4 + 0x407830u))); return;
  }
L_407721: /* 407721: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 407724: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 407726: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 407729: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 40772c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 40772f: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407732: sub esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 407735: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 407738: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40773b: jb 0x4076d8 */
  if (cf) goto L_4076d8;
L_40773d: /* 40773d: std  */
  DF = 1;
/* 40773e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 407740: cld  */
  DF = 0;
/* 407741: jmp dword ptr [edx*4 + 0x407838] */
  switch (R32((uint32_t)(edx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x407741, R32((uint32_t)(edx*4 + 0x407838u))); return;
  }
L_4077bc: /* 4077bc: jmp dword ptr [edx*4 + 0x407838] */
  switch (R32((uint32_t)(edx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x4077bc, R32((uint32_t)(edx*4 + 0x407838u))); return;
  }
L_4077c3: /* 4077c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077c9: ret  */
  esp += 4; SPILL(); return;
L_4077ca: /* 4077ca: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077cd: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077d6: ret  */
  esp += 4; SPILL(); return;
L_4077d7: /* 4077d7: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077da: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077dd: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077e0: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077e8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077e9: ret  */
  esp += 4; SPILL(); return;
L_4077ea: /* 4077ea: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077ed: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077f0: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077f3: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077f6: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4077f9: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4077fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407800: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407801: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407802: ret  */
  esp += 4; SPILL(); return;
}

void f_407748(void) {
  LOAD_REGS();
  goto L_407748;
L_4076d8: /* 4076d8: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 4076da: jmp dword ptr [ecx*4 + 0x407830] */
  switch (R32((uint32_t)(ecx*4 + 0x407830u))) {
    case 0x4077bcu: goto L_4077bc;
    default: guest_badjump(0x4076da, R32((uint32_t)(ecx*4 + 0x407830u))); return;
  }
L_407748: /* 407748: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 40774b: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40774d: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 407750: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 407753: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 407756: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 407759: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 40775c: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 40775f: sub esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 407762: sub edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 407765: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 407768: jb 0x4076d8 */
  if (cf) goto L_4076d8;
L_40776e: /* 40776e: std  */
  DF = 1;
/* 40776f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 407771: cld  */
  DF = 0;
/* 407772: jmp dword ptr [edx*4 + 0x407838] */
  switch (R32((uint32_t)(edx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x407772, R32((uint32_t)(edx*4 + 0x407838u))); return;
  }
L_4077bc: /* 4077bc: jmp dword ptr [edx*4 + 0x407838] */
  switch (R32((uint32_t)(edx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x4077bc, R32((uint32_t)(edx*4 + 0x407838u))); return;
  }
L_4077c3: /* 4077c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077c9: ret  */
  esp += 4; SPILL(); return;
L_4077ca: /* 4077ca: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077cd: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077d6: ret  */
  esp += 4; SPILL(); return;
L_4077d7: /* 4077d7: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077da: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077dd: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077e0: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077e8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077e9: ret  */
  esp += 4; SPILL(); return;
L_4077ea: /* 4077ea: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077ed: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077f0: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077f3: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077f6: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4077f9: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4077fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407800: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407801: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407802: ret  */
  esp += 4; SPILL(); return;
}

void f_407779(void) {
  LOAD_REGS();
L_407779: /* 407779: mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x1cu));
/* 40777d: mov dword ptr [edi + ecx*4 + 0x1c], eax */
  W32((uint32_t)(edi + ecx*4 + 0x1cu), eax);
  SPILL(); f_407781(); return;
}

void f_407781(void) {
  LOAD_REGS();
L_407781: /* 407781: mov eax, dword ptr [esi + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x18u));
/* 407785: mov dword ptr [edi + ecx*4 + 0x18], eax */
  W32((uint32_t)(edi + ecx*4 + 0x18u), eax);
  SPILL(); f_407789(); return;
}

void f_407789(void) {
  LOAD_REGS();
L_407789: /* 407789: mov eax, dword ptr [esi + ecx*4 + 0x14] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x14u));
/* 40778d: mov dword ptr [edi + ecx*4 + 0x14], eax */
  W32((uint32_t)(edi + ecx*4 + 0x14u), eax);
  SPILL(); f_407791(); return;
}

void f_407791(void) {
  LOAD_REGS();
L_407791: /* 407791: mov eax, dword ptr [esi + ecx*4 + 0x10] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x10u));
/* 407795: mov dword ptr [edi + ecx*4 + 0x10], eax */
  W32((uint32_t)(edi + ecx*4 + 0x10u), eax);
  SPILL(); f_407799(); return;
}

void f_407799(void) {
  LOAD_REGS();
L_407799: /* 407799: mov eax, dword ptr [esi + ecx*4 + 0xc] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xcu));
/* 40779d: mov dword ptr [edi + ecx*4 + 0xc], eax */
  W32((uint32_t)(edi + ecx*4 + 0xcu), eax);
  SPILL(); f_4077a1(); return;
}

void f_4077a1(void) {
  LOAD_REGS();
L_4077a1: /* 4077a1: mov eax, dword ptr [esi + ecx*4 + 8] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x8u));
/* 4077a5: mov dword ptr [edi + ecx*4 + 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0x8u), eax);
  SPILL(); f_4077a9(); return;
}

void f_4077a9(void) {
  LOAD_REGS();
L_4077a9: /* 4077a9: mov eax, dword ptr [esi + ecx*4 + 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x4u));
/* 4077ad: mov dword ptr [edi + ecx*4 + 4], eax */
  W32((uint32_t)(edi + ecx*4 + 0x4u), eax);
/* 4077b1: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 4077b8: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4077ba: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4077bc: jmp dword ptr [edx*4 + 0x407838] */
  switch (R32((uint32_t)(edx*4 + 0x407838u))) {
    case 0x4077c3u: goto L_4077c3;
    case 0x4077cau: goto L_4077ca;
    case 0x4077d7u: goto L_4077d7;
    case 0x4077eau: goto L_4077ea;
    default: guest_badjump(0x4077bc, R32((uint32_t)(edx*4 + 0x407838u))); return;
  }
L_4077c3: /* 4077c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077c8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077c9: ret  */
  esp += 4; SPILL(); return;
L_4077ca: /* 4077ca: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077cd: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077d6: ret  */
  esp += 4; SPILL(); return;
L_4077d7: /* 4077d7: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077da: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077dd: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077e0: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4077e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4077e8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4077e9: ret  */
  esp += 4; SPILL(); return;
L_4077ea: /* 4077ea: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 4077ed: mov byte ptr [edi + 3], al */
  W8((uint32_t)(edi + 0x3u), (eax & 0xffu));
/* 4077f0: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4077f3: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4077f6: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4077f9: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4077fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4077ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407800: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407801: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407802: ret  */
  esp += 4; SPILL(); return;
}

void f_407848(void) {
  LOAD_REGS();
L_407848: /* 407848: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407849: mov ebp, esp */
  ebp = esp;
/* 40784b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40784c: xor eax, eax */
  eax = 0;
/* 40784e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40784f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407851: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407852: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407853: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407854: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407856: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 407859: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_40785b: /* 40785b: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 40785d: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40785f: je 0x40786a */
  if (zf) goto L_40786a;
L_407861: /* 407861: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407864: bts dword ptr [esp], eax */
  { int32_t bo = (int32_t)eax; uint32_t ad = (uint32_t)(esp) + (uint32_t)(bo >> 3); uint32_t bi = bo & 7; uint32_t v = R8(ad);
  cf = (v >> bi) & 1;
  W8(ad, v | (1u << bi));
  }
/* 407868: jmp 0x40785b */
  goto L_40785b;
L_40786a: /* 40786a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40786d: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 407870: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_407872: /* 407872: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 407875: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407877: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407879: je 0x407884 */
  if (zf) goto L_407884;
L_40787b: /* 40787b: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40787e: bt dword ptr [esp], eax */
  { int32_t bo = (int32_t)eax; uint32_t ad = (uint32_t)(esp) + (uint32_t)(bo >> 3); uint32_t bi = bo & 7; uint32_t v = R8(ad);
  cf = (v >> bi) & 1;
  }
/* 407882: jae 0x407872 */
  if (!cf) goto L_407872;
L_407884: /* 407884: mov eax, ecx */
  eax = ecx;
/* 407886: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 407889: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40788a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40788b: ret  */
  esp += 4; SPILL(); return;
}

void f_407907(void) {
  LOAD_REGS();
L_407907: /* 407907: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407908: mov ebp, esp */
  ebp = esp;
/* 40790a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40790b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40790c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40790d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 407910: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 407913: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 407915: mov edi, edi */
  edi = edi;
L_407917: /* 407917: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407919: je 0x40794d */
  if (zf) goto L_40794d;
L_40791b: /* 40791b: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40791d: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407920: mov ah, byte ptr [edi] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(edi))) & 0xffu) << 8);
/* 407922: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 407925: cmp ah, al */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407927: je 0x407917 */
  if (zf) goto L_407917;
L_407929: /* 407929: sub al, 0x41 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40792b: cmp al, 0x1a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1au);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 40792d: sbb cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40792f: and cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407932: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407934: add al, 0x41 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407936: xchg al, ah */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  eax = (eax & 0xffffff00u) | ((uint32_t)(b) & 0xffu);
  eax = (eax & 0xffff00ffu) | (((uint32_t)(a) & 0xffu) << 8);
  }
/* 407938: sub al, 0x41 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40793a: cmp al, 0x1a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1au);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 40793c: sbb cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40793e: and cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407941: add al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407943: add al, 0x41 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407945: cmp al, ah */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407947: je 0x407917 */
  if (zf) goto L_407917;
L_407949: /* 407949: sbb al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40794b: sbb al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_40794d: /* 40794d: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 407950: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407951: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407952: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407953: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407954: ret  */
  esp += 4; SPILL(); return;
}

void f_407955(void) {
  LOAD_REGS();
L_407955: /* 407955: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407956: mov ebp, esp */
  ebp = esp;
/* 407958: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407959: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40795a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40795b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 40795e: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407960: je 0x4079ae */
  if (zf) goto L_4079ae;
L_407962: /* 407962: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 407965: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 407968: mov bh, 0x41 */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(0x41u) & 0xffu) << 8);
/* 40796a: mov bl, 0x5a */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5au) & 0xffu);
/* 40796c: mov dh, 0x20 */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(0x20u) & 0xffu) << 8);
/* 40796e: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_407970: /* 407970: mov ah, byte ptr [esi] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esi))) & 0xffu) << 8);
/* 407972: or ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 407974: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 407976: je 0x40799f */
  if (zf) goto L_40799f;
L_407978: /* 407978: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40797a: je 0x40799f */
  if (zf) goto L_40799f;
L_40797c: /* 40797c: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40797f: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 407982: cmp ah, bh */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 407984: jb 0x40798c */
  if (cf) goto L_40798c;
L_407986: /* 407986: cmp ah, bl */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407988: ja 0x40798c */
  if ((!cf && !zf)) goto L_40798c;
L_40798a: /* 40798a: add ah, dh */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
L_40798c: /* 40798c: cmp al, bh */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 40798e: jb 0x407996 */
  if (cf) goto L_407996;
L_407990: /* 407990: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407992: ja 0x407996 */
  if ((!cf && !zf)) goto L_407996;
L_407994: /* 407994: add al, dh */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_407996: /* 407996: cmp ah, al */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407998: jne 0x4079a5 */
  if (!zf) goto L_4079a5;
L_40799a: /* 40799a: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 40799d: jne 0x407970 */
  if (!zf) goto L_407970;
L_40799f: /* 40799f: xor ecx, ecx */
  ecx = 0;
/* 4079a1: cmp ah, al */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4079a3: je 0x4079ae */
  if (zf) goto L_4079ae;
L_4079a5: /* 4079a5: mov ecx, 0xffffffff */
  ecx = 0xffffffffu;
/* 4079aa: jb 0x4079ae */
  if (cf) goto L_4079ae;
L_4079ac: /* 4079ac: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_4079ae: /* 4079ae: mov eax, ecx */
  eax = ecx;
/* 4079b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4079b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4079b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4079b3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4079b4: ret  */
  esp += 4; SPILL(); return;
}

void f_407a0a(void) {
  LOAD_REGS();
L_407a0a: /* 407a0a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407a0b: mov ebp, esp */
  ebp = esp;
/* 407a0d: sub esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 407a10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407a11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 407a12: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 407a15: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 407a18: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 407a1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407a1e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407a1f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 407a22: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 407a25: mov ebp, dword ptr [ebp - 4] */
  ebp = R32((uint32_t)(ebp + 0xfffffffcu));
/* 407a28: call 0x407058 */
  esp -= 4; W32(esp, 0x407a2du); SPILL(); f_407058(); if (g_unwind) return; RELOAD();
/* 407a2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 407a2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407a2f: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x407a31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 407a31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407a32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407a33: mov ebx, ebp */
  ebx = ebp;
/* 407a35: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 407a36: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 407a39: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407a3a: mov ebp, ebx */
  ebp = ebx;
/* 407a3c: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407a42: jne 0x407a49 */
  if (!zf) goto L_407a49;
L_407a44: /* 407a44: mov ecx, 2 */
  ecx = 0x2u;
L_407a49: /* 407a49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 407a4a: call 0x407058 */
  esp -= 4; W32(esp, 0x407a4fu); SPILL(); f_407058(); if (g_unwind) return; RELOAD();
/* 407a4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 407a50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 407a51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407a52: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407a53: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_407a56(void) {
  LOAD_REGS();
L_407a56: /* 407a56: xor eax, eax */
  eax = 0;
/* 407a58: mov dx, word ptr [esp + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 407a5d: in al, dx */
  guest_unsupported(0x407a5d); /* in al, dx */
/* 407a5e: ret  */
  esp += 4; SPILL(); return;
}

void f_407a5f(void) {
  LOAD_REGS();
L_407a5f: /* 407a5f: mov dx, word ptr [esp + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 407a64: in ax, dx */
  guest_unsupported(0x407a64); /* in ax, dx */
/* 407a66: ret  */
  esp += 4; SPILL(); return;
}

void f_407a67(void) {
  LOAD_REGS();
L_407a67: /* 407a67: mov dx, word ptr [esp + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 407a6c: in eax, dx */
  guest_unsupported(0x407a6c); /* in eax, dx */
/* 407a6d: ret  */
  esp += 4; SPILL(); return;
}

void f_407a6e(void) {
  LOAD_REGS();
L_407a6e: /* 407a6e: xor eax, eax */
  eax = 0;
/* 407a70: mov dx, word ptr [esp + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 407a75: mov al, byte ptr [esp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 407a79: out dx, al */
  guest_unsupported(0x407a79); /* out dx, al */
/* 407a7a: ret  */
  esp += 4; SPILL(); return;
}

void f_407a7b(void) {
  LOAD_REGS();
L_407a7b: /* 407a7b: mov dx, word ptr [esp + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 407a80: mov ax, word ptr [esp + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x8u))) & 0xffffu);
/* 407a85: out dx, ax */
  guest_unsupported(0x407a85); /* out dx, ax */
/* 407a87: ret  */
  esp += 4; SPILL(); return;
}

void f_407a88(void) {
  LOAD_REGS();
L_407a88: /* 407a88: mov dx, word ptr [esp + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 407a8d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 407a91: out dx, eax */
  guest_unsupported(0x407a91); /* out dx, eax */
/* 407a92: ret  */
  esp += 4; SPILL(); return;
}

void f_407a93(void) {
  LOAD_REGS();
L_407a93: /* 407a93: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407a94: mov ebp, esp */
  ebp = esp;
/* 407a96: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 407a99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407a9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 407a9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407a9c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407a9d: cld  */
  DF = 0;
/* 407a9e: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 407aa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407aa4: test dword ptr [eax + 4], 6 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407aab: jne 0x407b24 */
  if (!zf) goto L_407b24;
L_407aad: /* 407aad: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 407ab0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 407ab3: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 407ab6: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 407ab9: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 407abc: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 407abf: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
L_407ac2: /* 407ac2: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407ac5: je 0x407b1d */
  if (zf) goto L_407b1d;
L_407ac7: /* 407ac7: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 407aca: cmp dword ptr [edi + ecx*4 + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + ecx*4 + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407acf: je 0x407b0b */
  if (zf) goto L_407b0b;
L_407ad1: /* 407ad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 407ad2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407ad3: mov ebp, dword ptr [ebx + 0x10] */
  ebp = R32((uint32_t)(ebx + 0x10u));
/* 407ad6: call dword ptr [edi + ecx*4 + 4] */
  { uint32_t t = R32((uint32_t)(edi + ecx*4 + 0x4u)); esp -= 4; W32(esp, 0x407adau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 407ada: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 407adb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407adc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 407adf: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 407ae1: je 0x407b0b */
  if (zf) goto L_407b0b;
L_407ae3: /* 407ae3: js 0x407b16 */
  if (sf) goto L_407b16;
L_407ae5: /* 407ae5: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 407ae8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407ae9: call 0x406f95 */
  esp -= 4; W32(esp, 0x407aeeu); SPILL(); f_406f95(); if (g_unwind) return; RELOAD();
/* 407aee: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 407af1: mov ebp, dword ptr [ebx + 0x10] */
  ebp = R32((uint32_t)(ebx + 0x10u));
/* 407af4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 407af5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407af6: call 0x406fd7 */
  esp -= 4; W32(esp, 0x407afbu); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 407afb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 407afe: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 407b01: mov eax, dword ptr [edi + ecx*4] */
  eax = R32((uint32_t)(edi + ecx*4));
/* 407b04: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 407b07: call dword ptr [edi + ecx*4 + 8] */
  { uint32_t t = R32((uint32_t)(edi + ecx*4 + 0x8u)); esp -= 4; W32(esp, 0x407b0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_407b0b: /* 407b0b: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 407b0e: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 407b11: mov esi, dword ptr [edi + ecx*4] */
  esi = R32((uint32_t)(edi + ecx*4));
/* 407b14: jmp 0x407ac2 */
  goto L_407ac2;
L_407b16: /* 407b16: mov eax, 0 */
  eax = 0x0u;
/* 407b1b: jmp 0x407b39 */
  goto L_407b39;
L_407b1d: /* 407b1d: mov eax, 1 */
  eax = 0x1u;
/* 407b22: jmp 0x407b39 */
  goto L_407b39;
L_407b24: /* 407b24: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407b25: mov ebp, dword ptr [ebx + 0x10] */
  ebp = R32((uint32_t)(ebx + 0x10u));
/* 407b28: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 407b2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407b2b: call 0x406fd7 */
  esp -= 4; W32(esp, 0x407b30u); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 407b30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 407b33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 407b34: mov eax, 1 */
  eax = 0x1u;
L_407b39: /* 407b39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 407b3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407b3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407b3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407b3d: mov esp, ebp */
  esp = ebp;
/* 407b3f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 407b40: ret  */
  esp += 4; SPILL(); return;
}

void f_407b41(void) {
  LOAD_REGS();
L_407b41: /* 407b41: jmp 0x407bf9 */
  SPILL(); hle_longjmp(); return;
}

void f_407b46(void) {
  LOAD_REGS();
L_407b46: /* 407b46: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 407b4a: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 407b4c: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 407b4f: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 407b52: mov dword ptr [edx + 0xc], esi */
  W32((uint32_t)(edx + 0xcu), esi);
/* 407b55: mov dword ptr [edx + 0x10], esp */
  W32((uint32_t)(edx + 0x10u), esp);
/* 407b58: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 407b5b: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 407b5e: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 407b64: mov dword ptr [edx + 0x18], eax */
  W32((uint32_t)(edx + 0x18u), eax);
/* 407b67: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407b6a: jne 0x407b75 */
  if (!zf) goto L_407b75;
L_407b6c: /* 407b6c: mov dword ptr [edx + 0x1c], 0xffffffff */
  W32((uint32_t)(edx + 0x1cu), 0xffffffffu);
/* 407b73: jmp 0x407b7b */
  goto L_407b7b;
L_407b75: /* 407b75: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 407b78: mov dword ptr [edx + 0x1c], eax */
  W32((uint32_t)(edx + 0x1cu), eax);
L_407b7b: /* 407b7b: sub eax, eax */
  eax = 0;
/* 407b7d: ret  */
  esp += 4; SPILL(); return;
}

void f_407b7e(void) { hle_setjmp3(); }

void f_407bf9(void) { hle_longjmp(); }

void f_407c71(void) {
  LOAD_REGS();
L_407c71: /* 407c71: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 407c75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407c76: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407c78: je 0x407cc0 */
  if (zf) goto L_407cc0;
L_407c7a: /* 407c7a: mov bh, byte ptr [esp + 0x10] */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu) << 8);
/* 407c7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 407c7f: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407c85: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 407c89: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 407c8d: je 0x407ca2 */
  if (zf) goto L_407ca2;
L_407c8f: /* 407c8f: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407c91: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407c94: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 407c96: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 407c99: cmp bl, bh */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407c9b: je 0x407cc9 */
  if (zf) goto L_407cc9;
L_407c9d: /* 407c9d: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407ca0: je 0x407cbf */
  if (zf) goto L_407cbf;
L_407ca2: /* 407ca2: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407ca4: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407ca7: cmp bl, bh */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407ca9: je 0x407cc4 */
  if (zf) goto L_407cc4;
L_407cab: /* 407cab: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 407cad: mov bl, byte ptr [esi - 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xffffffffu))) & 0xffu);
/* 407cb0: mov byte ptr [eax + 1], bl */
  W8((uint32_t)(eax + 0x1u), (ebx & 0xffu));
/* 407cb3: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 407cb6: cmp bl, bh */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407cb8: je 0x407cc9 */
  if (zf) goto L_407cc9;
L_407cba: /* 407cba: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407cbd: jne 0x407ca2 */
  if (!zf) goto L_407ca2;
L_407cbf: /* 407cbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_407cc0: /* 407cc0: xor eax, eax */
  eax = 0;
/* 407cc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407cc3: ret  */
  esp += 4; SPILL(); return;
L_407cc4: /* 407cc4: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 407cc6: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_407cc9: /* 407cc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407cca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407ccb: ret  */
  esp += 4; SPILL(); return;
}

void f_407ccc(void) {
  LOAD_REGS();
L_407ccc: /* 407ccc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407ccd: mov ebp, esp */
  ebp = esp;
/* 407ccf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407cd1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 407cd4: mov edx, edi */
  edx = edi;
/* 407cd6: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 407cd9: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 407cdb: mov ecx, ebx */
  ecx = ebx;
/* 407cdd: jecxz 0x407cf1 */
  if (ecx == 0) goto L_407cf1;
L_407cdf: /* 407cdf: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 407ce1: jne 0x407ce6 */
  if (!zf) goto L_407ce6;
L_407ce3: /* 407ce3: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_407ce6: /* 407ce6: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 407ce8: mov ecx, ebx */
  ecx = ebx;
/* 407cea: mov edi, edx */
  edi = edx;
/* 407cec: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 407cef: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_407cf1: /* 407cf1: mov eax, edx */
  eax = edx;
/* 407cf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407cf4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407cf5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407cf6: ret  */
  esp += 4; SPILL(); return;
}

void f_407cf7(void) {
  LOAD_REGS();
L_407cf7: /* 407cf7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407cf8: mov ebp, esp */
  ebp = esp;
/* 407cfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407cfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 407cfc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 407cff: mov edx, edi */
  edx = edi;
/* 407d01: mov esi, edi */
  esi = edi;
/* 407d03: xor eax, eax */
  eax = 0;
/* 407d05: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 407d08: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 407d0a: cmp ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407d0d: je 0x407d26 */
  if (zf) goto L_407d26;
L_407d0f: /* 407d0f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_407d12: /* 407d12: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 407d14: jae 0x407d26 */
  if (!cf) goto L_407d26;
L_407d16: /* 407d16: mov ah, byte ptr [esi] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esi))) & 0xffu) << 8);
/* 407d18: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 407d1a: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 407d1c: mov byte ptr [edi], ah */
  W8((uint32_t)(edi), ((eax >> 8) & 0xffu));
/* 407d1e: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407d21: sub edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 407d24: jmp 0x407d12 */
  goto L_407d12;
L_407d26: /* 407d26: mov eax, edx */
  eax = edx;
/* 407d28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407d29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407d2a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407d2b: ret  */
  esp += 4; SPILL(); return;
}

void f_407d2c(void) {
  LOAD_REGS();
L_407d2c: /* 407d2c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407d2d: mov ebp, esp */
  ebp = esp;
/* 407d2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407d30: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 407d33: mov edx, edi */
  edx = edi;
/* 407d35: xor eax, eax */
  eax = 0;
/* 407d37: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 407d3a: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 407d3c: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 407d3f: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 407d41: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 407d44: mov edi, edx */
  edi = edx;
/* 407d46: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 407d48: mov eax, edx */
  eax = edx;
/* 407d4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407d4b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407d4c: ret  */
  esp += 4; SPILL(); return;
}

void f_407d4d(void) {
  LOAD_REGS();
L_407d4d: /* 407d4d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 407d51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407d52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407d54: je 0x407da8 */
  if (zf) goto L_407da8;
L_407d56: /* 407d56: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 407d5a: xor ebx, ebx */
  ebx = 0;
/* 407d5c: mov bl, byte ptr [esp + 0xc] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 407d60: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407d66: je 0x407d7e */
  if (zf) goto L_407d7e;
L_407d68: /* 407d68: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 407d6a: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407d6d: xor cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407d6f: je 0x407de1 */
  if (zf) goto L_407de1;
L_407d71: /* 407d71: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 407d74: je 0x407da8 */
  if (zf) goto L_407da8;
L_407d76: /* 407d76: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407d7c: jne 0x407d68 */
  if (!zf) goto L_407d68;
L_407d7e: /* 407d7e: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 407d81: jb 0x407d95 */
  if (cf) goto L_407d95;
L_407d83: /* 407d83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407d84: mov edi, ebx */
  edi = ebx;
/* 407d86: shl ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 407d89: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 407d8b: mov edi, ebx */
  edi = ebx;
/* 407d8d: shl ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 407d90: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 407d92: jmp 0x407daf */
  goto L_407daf;
L_407d94: /* 407d94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_407d95: /* 407d95: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 407d98: je 0x407da8 */
  if (zf) goto L_407da8;
L_407d9a: /* 407d9a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 407d9c: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407d9f: xor cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407da1: je 0x407de1 */
  if (zf) goto L_407de1;
L_407da3: /* 407da3: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 407da6: jne 0x407d9a */
  if (!zf) goto L_407d9a;
L_407da8: /* 407da8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407da9: ret  */
  esp += 4; SPILL(); return;
L_407daa: /* 407daa: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 407dad: jb 0x407d94 */
  if (cf) goto L_407d94;
L_407daf: /* 407daf: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 407db1: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 407db3: mov edi, 0x7efefeff */
  edi = 0x7efefeffu;
/* 407db8: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 407dba: xor ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 407dbd: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 407dbf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407dc2: and ecx, 0x81010100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407dc8: je 0x407daa */
  if (zf) goto L_407daa;
L_407dca: /* 407dca: mov ecx, dword ptr [edx - 4] */
  ecx = R32((uint32_t)(edx + 0xfffffffcu));
/* 407dcd: xor cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407dcf: je 0x407df2 */
  if (zf) goto L_407df2;
L_407dd1: /* 407dd1: xor ch, bl */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  zf = (r) == 0;
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 407dd3: je 0x407dec */
  if (zf) goto L_407dec;
L_407dd5: /* 407dd5: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 407dd8: xor cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407dda: je 0x407de6 */
  if (zf) goto L_407de6;
L_407ddc: /* 407ddc: xor ch, bl */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  zf = (r) == 0;
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 407dde: jne 0x407daa */
  if (!zf) goto L_407daa;
L_407de0: /* 407de0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_407de1: /* 407de1: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 407de4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407de5: ret  */
  esp += 4; SPILL(); return;
L_407de6: /* 407de6: lea eax, [edx - 2] */
  eax = (uint32_t)(edx + 0xfffffffeu);
/* 407de9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407dea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407deb: ret  */
  esp += 4; SPILL(); return;
L_407dec: /* 407dec: lea eax, [edx - 3] */
  eax = (uint32_t)(edx + 0xfffffffdu);
/* 407def: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407df1: ret  */
  esp += 4; SPILL(); return;
L_407df2: /* 407df2: lea eax, [edx - 4] */
  eax = (uint32_t)(edx + 0xfffffffcu);
/* 407df5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407df6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407df7: ret  */
  esp += 4; SPILL(); return;
}

void f_407df8(void) {
  LOAD_REGS();
L_407df8: /* 407df8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407df9: mov ebp, esp */
  ebp = esp;
/* 407dfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 407dfc: xor eax, eax */
  eax = 0;
/* 407dfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407dff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407e01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407e02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407e03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407e04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407e05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 407e06: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 407e09: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_407e0b: /* 407e0b: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 407e0d: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407e0f: je 0x407e1a */
  if (zf) goto L_407e1a;
L_407e11: /* 407e11: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 407e14: bts dword ptr [esp], eax */
  { int32_t bo = (int32_t)eax; uint32_t ad = (uint32_t)(esp) + (uint32_t)(bo >> 3); uint32_t bi = bo & 7; uint32_t v = R8(ad);
  cf = (v >> bi) & 1;
  W8(ad, v | (1u << bi));
  }
/* 407e18: jmp 0x407e0b */
  goto L_407e0b;
L_407e1a: /* 407e1a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 407e1d: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 407e20: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_407e22: /* 407e22: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 407e25: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407e27: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 407e29: je 0x407e34 */
  if (zf) goto L_407e34;
L_407e2b: /* 407e2b: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407e2e: bt dword ptr [esp], eax */
  { int32_t bo = (int32_t)eax; uint32_t ad = (uint32_t)(esp) + (uint32_t)(bo >> 3); uint32_t bi = bo & 7; uint32_t v = R8(ad);
  cf = (v >> bi) & 1;
  }
/* 407e32: jb 0x407e22 */
  if (cf) goto L_407e22;
L_407e34: /* 407e34: mov eax, ecx */
  eax = ecx;
/* 407e36: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 407e39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407e3a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407e3b: ret  */
  esp += 4; SPILL(); return;
}

void f_407e3c(void) {
  LOAD_REGS();
L_407e3c: /* 407e3c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 407e3d: mov ebp, esp */
  ebp = esp;
/* 407e3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 407e40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 407e41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 407e42: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 407e45: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407e47: je 0x407e8d */
  if (zf) goto L_407e8d;
L_407e49: /* 407e49: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 407e4c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 407e4f: mov bh, 0x41 */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(0x41u) & 0xffu) << 8);
/* 407e51: mov bl, 0x5a */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5au) & 0xffu);
/* 407e53: mov dh, 0x20 */
  edx = (edx & 0xffff00ffu) | (((uint32_t)(0x20u) & 0xffu) << 8);
/* 407e55: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_407e57: /* 407e57: mov ah, byte ptr [esi] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esi))) & 0xffu) << 8);
/* 407e59: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 407e5c: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 407e5e: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 407e61: cmp ah, al */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 407e63: je 0x407e7d */
  if (zf) goto L_407e7d;
L_407e65: /* 407e65: cmp ah, bh */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 407e67: jb 0x407e6f */
  if (cf) goto L_407e6f;
L_407e69: /* 407e69: cmp ah, bl */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407e6b: ja 0x407e6f */
  if ((!cf && !zf)) goto L_407e6f;
L_407e6d: /* 407e6d: add ah, dh */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
L_407e6f: /* 407e6f: cmp al, bh */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 407e71: jb 0x407e79 */
  if (cf) goto L_407e79;
L_407e73: /* 407e73: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407e75: ja 0x407e79 */
  if ((!cf && !zf)) goto L_407e79;
L_407e77: /* 407e77: add al, dh */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_407e79: /* 407e79: cmp ah, al */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407e7b: jne 0x407e84 */
  if (!zf) goto L_407e84;
L_407e7d: /* 407e7d: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407e80: jne 0x407e57 */
  if (!zf) goto L_407e57;
L_407e82: /* 407e82: jmp 0x407e8d */
  goto L_407e8d;
L_407e84: /* 407e84: mov ecx, 0xffffffff */
  ecx = 0xffffffffu;
/* 407e89: jb 0x407e8d */
  if (cf) goto L_407e8d;
L_407e8b: /* 407e8b: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_407e8d: /* 407e8d: mov eax, ecx */
  eax = ecx;
/* 407e8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 407e90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407e91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407e92: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 407e93: ret  */
  esp += 4; SPILL(); return;
}

void f_407e94(void) { hle_CIacos(); }

void f_407ea8(void) { hle_acos(); }

void f_407eb1(void) {
  LOAD_REGS();
L_407eb1: /* 407eb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 407eb2: wait  */
/* 407eb3: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 407eb6: je 0x407f25 */
  if (zf) goto L_407f25;
L_407eb8: /* 407eb8: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 407ebe: je 0x407ec5 */
  if (zf) goto L_407ec5;
L_407ec0: /* 407ec0: call 0x409d64 */
  esp -= 4; W32(esp, 0x407ec5u); SPILL(); f_409d64(); if (g_unwind) return; RELOAD();
L_407ec5: /* 407ec5: cmp eax, 0x3ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407eca: jae 0x407ef9 */
  if (!cf) goto L_407ef9;
L_407ecc: /* 407ecc: fld1  */
  FPUSH(1.0);
/* 407ece: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 407ed0: fld1  */
  FPUSH(1.0);
/* 407ed2: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 407ed4: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 407ed6: fsqrt  */
  ST0 = sqrt(ST0);
/* 407ed8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 407eda: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
L_407edc: /* 407edc: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407ee3: jne 0x409ded */
  if (!zf) goto L_409ded;
L_407ee9: /* 407ee9: mov edx, 0xd */
  edx = 0xdu;
/* 407eee: lea ecx, [0x44e1b0] */
  ecx = (uint32_t)(0x44e1b0u);
/* 407ef4: jmp 0x409dfa */
  goto L_409dfa;
L_407ef9: /* 407ef9: ja 0x407f33 */
  if ((!cf && !zf)) goto L_407f33;
L_407efb: /* 407efb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 407eff: mov ecx, eax */
  ecx = eax;
/* 407f01: and eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 407f06: or eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 407f0a: jne 0x407f33 */
  if (!zf) goto L_407f33;
L_407f0c: /* 407f0c: and ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407f12: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 407f14: je 0x407f1a */
  if (zf) goto L_407f1a;
L_407f16: /* 407f16: fldpi  */
  FPUSH(3.141592653589793238463);
/* 407f18: jmp 0x407edc */
  goto L_407edc;
L_407f1a: /* 407f1a: fldz  */
  FPUSH(0.0);
/* 407f1c: jmp 0x407edc */
  goto L_407edc;
L_407f1e: /* 407f1e: call 0x409d7b */
  esp -= 4; W32(esp, 0x407f23u); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 407f23: jmp 0x407f40 */
  goto L_407f40;
L_407f25: /* 407f25: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407f2a: jne 0x407f1e */
  if (!zf) goto L_407f1e;
L_407f2c: /* 407f2c: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407f31: jne 0x407f1e */
  if (!zf) goto L_407f1e;
L_407f33: /* 407f33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 407f35: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 407f3b: mov eax, 1 */
  eax = 0x1u;
L_407f40: /* 407f40: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407f47: jne 0x409ded */
  if (!zf) goto L_409ded;
L_407f4d: /* 407f4d: mov edx, 0xd */
  edx = 0xdu;
/* 407f52: lea ecx, [0x44e1b0] */
  ecx = (uint32_t)(0x44e1b0u);
/* 407f58: call 0x409d13 */
  esp -= 4; W32(esp, 0x407f5du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 407f5d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 407f5e: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_407f5f(void) { hle_CIasin(); }

void f_407f73(void) { hle_asin(); }

void f_407f7c(void) {
  LOAD_REGS();
L_407f7c: /* 407f7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 407f7d: wait  */
/* 407f7e: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 407f81: je 0x407ff0 */
  if (zf) goto L_407ff0;
L_407f83: /* 407f83: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 407f89: je 0x407f90 */
  if (zf) goto L_407f90;
L_407f8b: /* 407f8b: call 0x409d64 */
  esp -= 4; W32(esp, 0x407f90u); SPILL(); f_409d64(); if (g_unwind) return; RELOAD();
L_407f90: /* 407f90: cmp eax, 0x3ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407f95: jae 0x407fc2 */
  if (!cf) goto L_407fc2;
L_407f97: /* 407f97: fld1  */
  FPUSH(1.0);
/* 407f99: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 407f9b: fld1  */
  FPUSH(1.0);
/* 407f9d: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 407f9f: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 407fa1: fsqrt  */
  ST0 = sqrt(ST0);
/* 407fa3: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
L_407fa5: /* 407fa5: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407fac: jne 0x409ded */
  if (!zf) goto L_409ded;
L_407fb2: /* 407fb2: mov edx, 0xe */
  edx = 0xeu;
/* 407fb7: lea ecx, [0x44e1c0] */
  ecx = (uint32_t)(0x44e1c0u);
/* 407fbd: jmp 0x409dfa */
  goto L_409dfa;
L_407fc2: /* 407fc2: ja 0x407ffe */
  if ((!cf && !zf)) goto L_407ffe;
L_407fc4: /* 407fc4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 407fc8: mov ecx, eax */
  ecx = eax;
/* 407fca: and eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 407fcf: or eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 407fd3: jne 0x407ffe */
  if (!zf) goto L_407ffe;
L_407fd5: /* 407fd5: and ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 407fdb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 407fdd: fld xword ptr [0x44e99a] */
  { double v = F80((uint32_t)(0x44e99au)); FPUSH(v); }
/* 407fe3: je 0x407fa5 */
  if (zf) goto L_407fa5;
L_407fe5: /* 407fe5: fchs  */
  ST0 = -ST0;
/* 407fe7: jmp 0x407fa5 */
  goto L_407fa5;
L_407fe9: /* 407fe9: call 0x409d7b */
  esp -= 4; W32(esp, 0x407feeu); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 407fee: jmp 0x40800b */
  goto L_40800b;
L_407ff0: /* 407ff0: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407ff5: jne 0x407fe9 */
  if (!zf) goto L_407fe9;
L_407ff7: /* 407ff7: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407ffc: jne 0x407fe9 */
  if (!zf) goto L_407fe9;
L_407ffe: /* 407ffe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 408000: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 408006: mov eax, 1 */
  eax = 0x1u;
L_40800b: /* 40800b: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408012: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408018: /* 408018: mov edx, 0xe */
  edx = 0xeu;
/* 40801d: lea ecx, [0x44e1c0] */
  ecx = (uint32_t)(0x44e1c0u);
/* 408023: call 0x409d13 */
  esp -= 4; W32(esp, 0x408028u); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 408028: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 408029: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_40802a(void) {
  LOAD_REGS();
L_40802a: /* 40802a: cmp dword ptr [0x44b14c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b14cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408031: je 0x4080b7 */
  if (zf) goto L_4080b7;
L_408037: /* 408037: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40803a: stmxcsr dword ptr [esp + 4] */
  guest_unsupported(0x40803a); /* stmxcsr dword ptr [esp + 4] */
/* 40803f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 408043: and eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408048: cmp eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40804d: jne 0x40805e */
  if (!zf) goto L_40805e;
L_40804f: /* 40804f: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 408052: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 408056: and ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40805a: cmp ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
L_40805e: /* 40805e: lea esp, [esp + 8] */
  esp = (uint32_t)(esp + 0x8u);
/* 408062: jne 0x4080b7 */
  if (!zf) goto L_4080b7;
L_408064: /* 408064: jmp 0x409edf */
  goto L_409edf;
L_4080b7: /* 4080b7: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 4080bb: call 0x409d94 */
  esp -= 4; W32(esp, 0x4080c0u); SPILL(); f_409d94(); if (g_unwind) return; RELOAD();
  SPILL(); f_4080c0(); return;
L_409edf: /* 409edf: movq xmm7, qword ptr [esp + 4] */
  guest_unsupported(0x409edf); /* movq xmm7, qword ptr [esp + 4] */
  SPILL(); f_409ee5(); return;
}

void f_408069(void) {
  LOAD_REGS();
L_408069: /* 408069: cmp dword ptr [0x44b14c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b14cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408070: je 0x4080a3 */
  if (zf) goto L_4080a3;
L_408072: /* 408072: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408075: stmxcsr dword ptr [esp + 4] */
  guest_unsupported(0x408075); /* stmxcsr dword ptr [esp + 4] */
/* 40807a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 40807e: and eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408083: cmp eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408088: jne 0x408099 */
  if (!zf) goto L_408099;
L_40808a: /* 40808a: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 40808d: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 408091: and ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 408095: cmp ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
L_408099: /* 408099: lea esp, [esp + 8] */
  esp = (uint32_t)(esp + 0x8u);
/* 40809d: je 0x409ec7 */
  if (zf) goto L_409ec7;
L_4080a3: /* 4080a3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4080a6: fst qword ptr [esp] */
  WF64((uint32_t)(esp), ST0);
/* 4080a9: call 0x409dd7 */
  esp -= 4; W32(esp, 0x4080aeu); SPILL(); f_409dd7(); if (g_unwind) return; RELOAD();
/* 4080ae: call 0x4080c0 */
  esp -= 4; W32(esp, 0x4080b3u); SPILL(); f_4080c0(); if (g_unwind) return; RELOAD();
/* 4080b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4080b6: ret  */
  esp += 4; SPILL(); return;
L_409ec7: /* 409ec7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 409ec8: mov ebp, esp */
  ebp = esp;
/* 409eca: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409ecd: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 409ed0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 409ed3: movq xmm7, qword ptr [esp] */
  guest_unsupported(0x409ed3); /* movq xmm7, qword ptr [esp] */
/* 409ed8: call 0x409ee5 */
  esp -= 4; W32(esp, 0x409eddu); SPILL(); f_409ee5(); if (g_unwind) return; RELOAD();
/* 409edd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 409ede: ret  */
  esp += 4; SPILL(); return;
}

void f_4080c0(void) {
  LOAD_REGS();
L_4080c0: /* 4080c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4080c1: wait  */
/* 4080c2: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 4080c5: je 0x4080fd */
  if (zf) goto L_4080fd;
L_4080c7: /* 4080c7: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4080cd: je 0x4080d5 */
  if (zf) goto L_4080d5;
L_4080cf: /* 4080cf: fldcw word ptr [0x441358] */
  FCW = R16((uint32_t)(0x441358u));
L_4080d5: /* 4080d5: fld1  */
  FPUSH(1.0);
/* 4080d7: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
L_4080d9: /* 4080d9: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4080e0: jne 0x409ded */
  if (!zf) goto L_409ded;
L_4080e6: /* 4080e6: mov edx, 0xf */
  edx = 0xfu;
/* 4080eb: lea ecx, [0x44e1d0] */
  ecx = (uint32_t)(0x44e1d0u);
/* 4080f1: jmp 0x409dfa */
  goto L_409dfa;
L_4080f6: /* 4080f6: call 0x409d7b */
  esp -= 4; W32(esp, 0x4080fbu); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 4080fb: jmp 0x40811e */
  goto L_40811e;
L_4080fd: /* 4080fd: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408102: jne 0x4080f6 */
  if (!zf) goto L_4080f6;
L_408104: /* 408104: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408109: jne 0x4080f6 */
  if (!zf) goto L_4080f6;
L_40810b: /* 40810b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40810d: fld xword ptr [0x44e99a] */
  { double v = F80((uint32_t)(0x44e99au)); FPUSH(v); }
/* 408113: test eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408118: je 0x4080d9 */
  if (zf) goto L_4080d9;
L_40811a: /* 40811a: fchs  */
  ST0 = -ST0;
/* 40811c: jmp 0x4080d9 */
  goto L_4080d9;
L_40811e: /* 40811e: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408125: jne 0x409ded */
  if (!zf) goto L_409ded;
L_40812b: /* 40812b: mov edx, 0xf */
  edx = 0xfu;
/* 408130: lea ecx, [0x44e1d0] */
  ecx = (uint32_t)(0x44e1d0u);
/* 408136: call 0x409d13 */
  esp -= 4; W32(esp, 0x40813bu); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 40813b: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 40813c: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_40813d(void) {
  LOAD_REGS();
L_40813d: /* 40813d: mov edx, 0x44e9c0 */
  edx = 0x44e9c0u;
/* 408142: jmp 0x40a280 */
  goto L_40a280;
L_40a280: /* 40a280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a281: mov ebp, esp */
  ebp = esp;
/* 40a283: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a289: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a28a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40a28d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40a290: call 0x40a449 */
  esp -= 4; W32(esp, 0x40a295u); SPILL(); f_40a449(); if (g_unwind) return; RELOAD();
/* 40a295: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a298: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40a29b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40a29e: call 0x40a449 */
  esp -= 4; W32(esp, 0x40a2a3u); SPILL(); f_40a449(); if (g_unwind) return; RELOAD();
/* 40a2a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a2a6: wait  */
/* 40a2a7: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a2ad: or byte ptr [ebp - 0x2c8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a2b4: mov byte ptr [ebp - 0x8f], 1 */
  W8((uint32_t)(ebp + 0xffffff71u), 0x1u);
/* 40a2bb: call 0x409ba7 */
  esp -= 4; W32(esp, 0x40a2c0u); SPILL(); f_409ba7(); if (g_unwind) return; RELOAD();
/* 40a2c0: call 0x40a2c8 */
  esp -= 4; W32(esp, 0x40a2c5u); SPILL(); f_40a2c8(); if (g_unwind) return; RELOAD();
/* 40a2c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a2c6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a2c7: ret  */
  esp += 4; SPILL(); return;
}

void f_408147(void) {
  LOAD_REGS();
L_408147: /* 408147: mov edx, 0x44e9c0 */
  edx = 0x44e9c0u;
/* 40814c: jmp 0x40a205 */
  goto L_40a205;
L_40a205: /* 40a205: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a206: mov ebp, esp */
  ebp = esp;
/* 40a208: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a20e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a20f: wait  */
/* 40a210: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a216: wait  */
/* 40a217: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a21e: je 0x40a234 */
  if (zf) goto L_40a234;
L_40a220: /* 40a220: call 0x409ba7 */
  esp -= 4; W32(esp, 0x40a225u); SPILL(); f_409ba7(); if (g_unwind) return; RELOAD();
/* 40a225: or byte ptr [ebp - 0x2c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a22c: call 0x40a2cf */
  esp -= 4; W32(esp, 0x40a231u); SPILL(); f_40a2cf(); if (g_unwind) return; RELOAD();
/* 40a231: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a232: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a233: ret  */
  esp += 4; SPILL(); return;
L_40a234: /* 40a234: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a236: fst qword ptr [ebp - 0x86] */
  WF64((uint32_t)(ebp + 0xffffff7au), ST0);
/* 40a23c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a23e: fst qword ptr [ebp - 0x7e] */
  WF64((uint32_t)(ebp + 0xffffff82u), ST0);
/* 40a241: jmp 0x40a220 */
  goto L_40a220;
}

void f_408151(void) { hle_CIcos(); }

void f_408165(void) { hle_cos(); }

void f_40816e(void) {
  LOAD_REGS();
L_40816e: /* 40816e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 40816f: wait  */
/* 408170: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 408173: je 0x4081c5 */
  if (zf) goto L_4081c5;
L_408175: /* 408175: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40817b: je 0x408183 */
  if (zf) goto L_408183;
L_40817d: /* 40817d: fldcw word ptr [0x441358] */
  FCW = R16((uint32_t)(0x441358u));
L_408183: /* 408183: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 408185: wait  */
/* 408186: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 408188: sahf  */
  pf = (eax >> 10) & 1;
/* 408189: jp 0x4081a8 */
  if (pf) goto L_4081a8;
L_40818b: /* 40818b: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408192: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408198: /* 408198: mov edx, 0x12 */
  edx = 0x12u;
/* 40819d: lea ecx, [0x44e1e0] */
  ecx = (uint32_t)(0x44e1e0u);
/* 4081a3: jmp 0x409dfa */
  goto L_409dfa;
L_4081a8: /* 4081a8: fld xword ptr [0x44135a] */
  { double v = F80((uint32_t)(0x44135au)); FPUSH(v); }
/* 4081ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
L_4081b0: /* 4081b0: fprem1  */
  fpu_prem(1);
/* 4081b2: wait  */
/* 4081b3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4081b5: sahf  */
  pf = (eax >> 10) & 1;
/* 4081b6: jp 0x4081b0 */
  if (pf) goto L_4081b0;
L_4081b8: /* 4081b8: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 4081ba: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 4081bc: jmp 0x40818b */
  goto L_40818b;
L_4081be: /* 4081be: call 0x409d7b */
  esp -= 4; W32(esp, 0x4081c3u); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 4081c3: jmp 0x4081e0 */
  goto L_4081e0;
L_4081c5: /* 4081c5: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4081ca: jne 0x4081be */
  if (!zf) goto L_4081be;
L_4081cc: /* 4081cc: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4081d1: jne 0x4081be */
  if (!zf) goto L_4081be;
L_4081d3: /* 4081d3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4081d5: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 4081db: mov eax, 1 */
  eax = 0x1u;
L_4081e0: /* 4081e0: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4081e7: jne 0x409ded */
  if (!zf) goto L_409ded;
L_4081ed: /* 4081ed: mov edx, 0x12 */
  edx = 0x12u;
/* 4081f2: lea ecx, [0x44e1e0] */
  ecx = (uint32_t)(0x44e1e0u);
/* 4081f8: call 0x409d13 */
  esp -= 4; W32(esp, 0x4081fdu); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 4081fd: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4081fe: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_4081ff(void) {
  LOAD_REGS();
L_4081ff: /* 4081ff: mov edx, 0x44ea1a */
  edx = 0x44ea1au;
/* 408204: jmp 0x40a416 */
  goto L_40a416;
L_40a416: /* 40a416: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a417: mov ebp, esp */
  ebp = esp;
/* 40a419: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a41f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a420: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40a423: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40a426: call 0x40a449 */
  esp -= 4; W32(esp, 0x40a42bu); SPILL(); f_40a449(); if (g_unwind) return; RELOAD();
/* 40a42b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a42e: wait  */
/* 40a42f: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a435: and byte ptr [ebp - 0x2c8], 0xfd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a43c: call 0x409b40 */
  esp -= 4; W32(esp, 0x40a441u); SPILL(); f_409b40(); if (g_unwind) return; RELOAD();
/* 40a441: call 0x40a2c8 */
  esp -= 4; W32(esp, 0x40a446u); SPILL(); f_40a2c8(); if (g_unwind) return; RELOAD();
/* 40a446: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a447: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a448: ret  */
  esp += 4; SPILL(); return;
}

void f_408209(void) {
  LOAD_REGS();
L_408209: /* 408209: mov edx, 0x44ea3a */
  edx = 0x44ea3au;
/* 40820e: jmp 0x40a416 */
  goto L_40a416;
L_40a416: /* 40a416: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a417: mov ebp, esp */
  ebp = esp;
/* 40a419: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a41f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a420: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40a423: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40a426: call 0x40a449 */
  esp -= 4; W32(esp, 0x40a42bu); SPILL(); f_40a449(); if (g_unwind) return; RELOAD();
/* 40a42b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a42e: wait  */
/* 40a42f: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a435: and byte ptr [ebp - 0x2c8], 0xfd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a43c: call 0x409b40 */
  esp -= 4; W32(esp, 0x40a441u); SPILL(); f_409b40(); if (g_unwind) return; RELOAD();
/* 40a441: call 0x40a2c8 */
  esp -= 4; W32(esp, 0x40a446u); SPILL(); f_40a2c8(); if (g_unwind) return; RELOAD();
/* 40a446: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a447: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a448: ret  */
  esp += 4; SPILL(); return;
}

void f_408213(void) {
  LOAD_REGS();
L_408213: /* 408213: mov edx, 0x44ea5a */
  edx = 0x44ea5au;
/* 408218: jmp 0x40a416 */
  goto L_40a416;
L_40a416: /* 40a416: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a417: mov ebp, esp */
  ebp = esp;
/* 40a419: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a41f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a420: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40a423: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40a426: call 0x40a449 */
  esp -= 4; W32(esp, 0x40a42bu); SPILL(); f_40a449(); if (g_unwind) return; RELOAD();
/* 40a42b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a42e: wait  */
/* 40a42f: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a435: and byte ptr [ebp - 0x2c8], 0xfd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a43c: call 0x409b40 */
  esp -= 4; W32(esp, 0x40a441u); SPILL(); f_409b40(); if (g_unwind) return; RELOAD();
/* 40a441: call 0x40a2c8 */
  esp -= 4; W32(esp, 0x40a446u); SPILL(); f_40a2c8(); if (g_unwind) return; RELOAD();
/* 40a446: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a447: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a448: ret  */
  esp += 4; SPILL(); return;
}

void f_40821d(void) {
  LOAD_REGS();
L_40821d: /* 40821d: mov edx, 0x44ea1a */
  edx = 0x44ea1au;
/* 408222: jmp 0x40a243 */
  goto L_40a243;
L_40a243: /* 40a243: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a244: mov ebp, esp */
  ebp = esp;
/* 40a246: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a24c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a24d: wait  */
/* 40a24e: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a254: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a25b: je 0x40a278 */
  if (zf) goto L_40a278;
L_40a25d: /* 40a25d: call 0x409b40 */
  esp -= 4; W32(esp, 0x40a262u); SPILL(); f_409b40(); if (g_unwind) return; RELOAD();
/* 40a262: or byte ptr [ebp - 0x2c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a269: and byte ptr [ebp - 0x2c8], 0xfd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a270: call 0x40a2cf */
  esp -= 4; W32(esp, 0x40a275u); SPILL(); f_40a2cf(); if (g_unwind) return; RELOAD();
/* 40a275: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a276: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a277: ret  */
  esp += 4; SPILL(); return;
L_40a278: /* 40a278: fst qword ptr [ebp - 0x86] */
  WF64((uint32_t)(ebp + 0xffffff7au), ST0);
/* 40a27e: jmp 0x40a25d */
  goto L_40a25d;
}

void f_408227(void) {
  LOAD_REGS();
L_408227: /* 408227: mov edx, 0x44ea3a */
  edx = 0x44ea3au;
/* 40822c: jmp 0x40a243 */
  goto L_40a243;
L_40a243: /* 40a243: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a244: mov ebp, esp */
  ebp = esp;
/* 40a246: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a24c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a24d: wait  */
/* 40a24e: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a254: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a25b: je 0x40a278 */
  if (zf) goto L_40a278;
L_40a25d: /* 40a25d: call 0x409b40 */
  esp -= 4; W32(esp, 0x40a262u); SPILL(); f_409b40(); if (g_unwind) return; RELOAD();
/* 40a262: or byte ptr [ebp - 0x2c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a269: and byte ptr [ebp - 0x2c8], 0xfd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a270: call 0x40a2cf */
  esp -= 4; W32(esp, 0x40a275u); SPILL(); f_40a2cf(); if (g_unwind) return; RELOAD();
/* 40a275: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a276: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a277: ret  */
  esp += 4; SPILL(); return;
L_40a278: /* 40a278: fst qword ptr [ebp - 0x86] */
  WF64((uint32_t)(ebp + 0xffffff7au), ST0);
/* 40a27e: jmp 0x40a25d */
  goto L_40a25d;
}

void f_408231(void) {
  LOAD_REGS();
L_408231: /* 408231: mov edx, 0x44ea5a */
  edx = 0x44ea5au;
/* 408236: jmp 0x40a243 */
  goto L_40a243;
L_40a243: /* 40a243: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a244: mov ebp, esp */
  ebp = esp;
/* 40a246: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a24c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a24d: wait  */
/* 40a24e: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a254: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a25b: je 0x40a278 */
  if (zf) goto L_40a278;
L_40a25d: /* 40a25d: call 0x409b40 */
  esp -= 4; W32(esp, 0x40a262u); SPILL(); f_409b40(); if (g_unwind) return; RELOAD();
/* 40a262: or byte ptr [ebp - 0x2c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a269: and byte ptr [ebp - 0x2c8], 0xfd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0xfdu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a270: call 0x40a2cf */
  esp -= 4; W32(esp, 0x40a275u); SPILL(); f_40a2cf(); if (g_unwind) return; RELOAD();
/* 40a275: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a276: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a277: ret  */
  esp += 4; SPILL(); return;
L_40a278: /* 40a278: fst qword ptr [ebp - 0x86] */
  WF64((uint32_t)(ebp + 0xffffff7au), ST0);
/* 40a27e: jmp 0x40a25d */
  goto L_40a25d;
}

void f_40823b(void) { hle_exp(); }

void f_408276(void) { hle_CIexp(); }

void f_4082c5(void) {
  LOAD_REGS();
L_4082c5: /* 4082c5: mov edx, 0x44e1f0 */
  edx = 0x44e1f0u;
/* 4082ca: jmp 0x40a280 */
  goto L_40a280;
L_40a280: /* 40a280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a281: mov ebp, esp */
  ebp = esp;
/* 40a283: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a289: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a28a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40a28d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40a290: call 0x40a449 */
  esp -= 4; W32(esp, 0x40a295u); SPILL(); f_40a449(); if (g_unwind) return; RELOAD();
/* 40a295: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a298: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40a29b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40a29e: call 0x40a449 */
  esp -= 4; W32(esp, 0x40a2a3u); SPILL(); f_40a449(); if (g_unwind) return; RELOAD();
/* 40a2a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a2a6: wait  */
/* 40a2a7: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a2ad: or byte ptr [ebp - 0x2c8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a2b4: mov byte ptr [ebp - 0x8f], 1 */
  W8((uint32_t)(ebp + 0xffffff71u), 0x1u);
/* 40a2bb: call 0x409ba7 */
  esp -= 4; W32(esp, 0x40a2c0u); SPILL(); f_409ba7(); if (g_unwind) return; RELOAD();
/* 40a2c0: call 0x40a2c8 */
  esp -= 4; W32(esp, 0x40a2c5u); SPILL(); f_40a2c8(); if (g_unwind) return; RELOAD();
/* 40a2c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a2c6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a2c7: ret  */
  esp += 4; SPILL(); return;
}

void f_4082cf(void) {
  LOAD_REGS();
L_4082cf: /* 4082cf: mov edx, 0x44e1f0 */
  edx = 0x44e1f0u;
/* 4082d4: jmp 0x40a205 */
  goto L_40a205;
L_40a205: /* 40a205: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a206: mov ebp, esp */
  ebp = esp;
/* 40a208: add esp, 0xfffffd30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffd30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a20e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a20f: wait  */
/* 40a210: fnstcw word ptr [ebp - 0xa4] */
  W16((uint32_t)(ebp + 0xffffff5cu), FCW);
/* 40a216: wait  */
/* 40a217: cmp dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a21e: je 0x40a234 */
  if (zf) goto L_40a234;
L_40a220: /* 40a220: call 0x409ba7 */
  esp -= 4; W32(esp, 0x40a225u); SPILL(); f_409ba7(); if (g_unwind) return; RELOAD();
/* 40a225: or byte ptr [ebp - 0x2c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
/* 40a22c: call 0x40a2cf */
  esp -= 4; W32(esp, 0x40a231u); SPILL(); f_40a2cf(); if (g_unwind) return; RELOAD();
/* 40a231: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a232: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a233: ret  */
  esp += 4; SPILL(); return;
L_40a234: /* 40a234: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a236: fst qword ptr [ebp - 0x86] */
  WF64((uint32_t)(ebp + 0xffffff7au), ST0);
/* 40a23c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a23e: fst qword ptr [ebp - 0x7e] */
  WF64((uint32_t)(ebp + 0xffffff82u), ST0);
/* 40a241: jmp 0x40a220 */
  goto L_40a220;
}

void f_4082d9(void) {
  LOAD_REGS();
L_4082d9: /* 4082d9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
L_4082db: /* 4082db: cmp dword ptr [0x44923c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44923cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4082e2: je 0x4082e8 */
  if (zf) goto L_4082e8;
L_4082e4: /* 4082e4: fprem  */
  fpu_prem(0);
/* 4082e6: jmp 0x4082ed */
  goto L_4082ed;
L_4082e8: /* 4082e8: call 0x409441 */
  esp -= 4; W32(esp, 0x4082edu); SPILL(); f_409441(); if (g_unwind) return; RELOAD();
L_4082ed: /* 4082ed: wait  */
/* 4082ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4082f0: wait  */
/* 4082f1: sahf  */
  pf = (eax >> 10) & 1;
/* 4082f2: jp 0x4082db */
  if (pf) goto L_4082db;
L_4082f4: /* 4082f4: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 4082f6: ret  */
  esp += 4; SPILL(); return;
}

void f_4082f7(void) {
  LOAD_REGS();
L_4082f7: /* 4082f7: cmp dword ptr [0x44b14c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b14cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4082fe: je 0x408384 */
  if (zf) goto L_408384;
L_408304: /* 408304: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408307: stmxcsr dword ptr [esp + 4] */
  guest_unsupported(0x408307); /* stmxcsr dword ptr [esp + 4] */
/* 40830c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 408310: and eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408315: cmp eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40831a: jne 0x40832b */
  if (!zf) goto L_40832b;
L_40831c: /* 40831c: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 40831f: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 408323: and ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 408327: cmp ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
L_40832b: /* 40832b: lea esp, [esp + 8] */
  esp = (uint32_t)(esp + 0x8u);
/* 40832f: jne 0x408384 */
  if (!zf) goto L_408384;
L_408331: /* 408331: jmp 0x40a917 */
  goto L_40a917;
L_408384: /* 408384: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 408388: call 0x409d94 */
  esp -= 4; W32(esp, 0x40838du); SPILL(); f_409d94(); if (g_unwind) return; RELOAD();
  SPILL(); f_40838d(); return;
L_40a917: /* 40a917: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40a917); /* movlpd xmm0, qword ptr [esp + 4] */
  SPILL(); f_40a91d(); return;
}

void f_408336(void) {
  LOAD_REGS();
L_408336: /* 408336: cmp dword ptr [0x44b14c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b14cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40833d: je 0x408370 */
  if (zf) goto L_408370;
L_40833f: /* 40833f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408342: stmxcsr dword ptr [esp + 4] */
  guest_unsupported(0x408342); /* stmxcsr dword ptr [esp + 4] */
/* 408347: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 40834b: and eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408350: cmp eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408355: jne 0x408366 */
  if (!zf) goto L_408366;
L_408357: /* 408357: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 40835a: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 40835e: and ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 408362: cmp ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
L_408366: /* 408366: lea esp, [esp + 8] */
  esp = (uint32_t)(esp + 0x8u);
/* 40836a: je 0x40a8ff */
  if (zf) goto L_40a8ff;
L_408370: /* 408370: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408373: fst qword ptr [esp] */
  WF64((uint32_t)(esp), ST0);
/* 408376: call 0x409dd7 */
  esp -= 4; W32(esp, 0x40837bu); SPILL(); f_409dd7(); if (g_unwind) return; RELOAD();
/* 40837b: call 0x40838d */
  esp -= 4; W32(esp, 0x408380u); SPILL(); f_40838d(); if (g_unwind) return; RELOAD();
/* 408380: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408383: ret  */
  esp += 4; SPILL(); return;
L_40a8ff: /* 40a8ff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a900: mov ebp, esp */
  ebp = esp;
/* 40a902: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40a905: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 40a908: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 40a90b: movq xmm0, qword ptr [esp] */
  guest_unsupported(0x40a90b); /* movq xmm0, qword ptr [esp] */
/* 40a910: call 0x40a91d */
  esp -= 4; W32(esp, 0x40a915u); SPILL(); f_40a91d(); if (g_unwind) return; RELOAD();
/* 40a915: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a916: ret  */
  esp += 4; SPILL(); return;
}

void f_40838d(void) {
  LOAD_REGS();
L_40838d: /* 40838d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 40838e: wait  */
/* 40838f: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 408392: je 0x4083e0 */
  if (zf) goto L_4083e0;
L_408394: /* 408394: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 408398: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40839e: je 0x4083a6 */
  if (zf) goto L_4083a6;
L_4083a0: /* 4083a0: fldcw word ptr [0x441358] */
  FCW = R16((uint32_t)(0x441358u));
L_4083a6: /* 4083a6: test eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4083ab: je 0x40840b */
  if (zf) goto L_40840b;
L_4083ad: /* 4083ad: test eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4083b2: jne 0x4083f5 */
  if (!zf) goto L_4083f5;
L_4083b4: /* 4083b4: fldln2  */
  FPUSH(0.693147180559945309417);
/* 4083b6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4083b8: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
L_4083ba: /* 4083ba: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4083c1: jne 0x409ded */
  if (!zf) goto L_409ded;
L_4083c7: /* 4083c7: lea ecx, [0x44e240] */
  ecx = (uint32_t)(0x44e240u);
/* 4083cd: mov edx, 0x1a */
  edx = 0x1au;
/* 4083d2: jmp 0x409dfa */
  goto L_409dfa;
L_4083d7: /* 4083d7: test eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4083dc: jne 0x4083f5 */
  if (!zf) goto L_4083f5;
L_4083de: /* 4083de: jmp 0x4083b4 */
  goto L_4083b4;
L_4083e0: /* 4083e0: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4083e5: jne 0x408404 */
  if (!zf) goto L_408404;
L_4083e7: /* 4083e7: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4083ec: jne 0x408404 */
  if (!zf) goto L_408404;
L_4083ee: /* 4083ee: and eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 4083f3: je 0x4083ba */
  if (zf) goto L_4083ba;
L_4083f5: /* 4083f5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4083f7: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 4083fd: mov eax, 1 */
  eax = 0x1u;
/* 408402: jmp 0x408426 */
  goto L_408426;
L_408404: /* 408404: call 0x409d7b */
  esp -= 4; W32(esp, 0x408409u); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 408409: jmp 0x408426 */
  goto L_408426;
L_40840b: /* 40840b: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408410: jne 0x4083d7 */
  if (!zf) goto L_4083d7;
L_408412: /* 408412: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408417: jne 0x4083d7 */
  if (!zf) goto L_4083d7;
L_408419: /* 408419: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40841b: fld xword ptr [0x44ea8a] */
  { double v = F80((uint32_t)(0x44ea8au)); FPUSH(v); }
/* 408421: mov eax, 2 */
  eax = 0x2u;
L_408426: /* 408426: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40842d: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408433: /* 408433: lea ecx, [0x44e240] */
  ecx = (uint32_t)(0x44e240u);
/* 408439: mov edx, 0x1a */
  edx = 0x1au;
/* 40843e: call 0x409d13 */
  esp -= 4; W32(esp, 0x408443u); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 408443: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 408444: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_408445(void) {
  LOAD_REGS();
L_408445: /* 408445: cmp dword ptr [0x44b14c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b14cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40844c: je 0x4084d2 */
  if (zf) goto L_4084d2;
L_408452: /* 408452: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408455: stmxcsr dword ptr [esp + 4] */
  guest_unsupported(0x408455); /* stmxcsr dword ptr [esp + 4] */
/* 40845a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 40845e: and eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408463: cmp eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408468: jne 0x408479 */
  if (!zf) goto L_408479;
L_40846a: /* 40846a: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 40846d: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 408471: and ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 408475: cmp ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
L_408479: /* 408479: lea esp, [esp + 8] */
  esp = (uint32_t)(esp + 0x8u);
/* 40847d: jne 0x4084d2 */
  if (!zf) goto L_4084d2;
L_40847f: /* 40847f: jmp 0x40ab83 */
  goto L_40ab83;
L_4084d2: /* 4084d2: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 4084d6: call 0x409d94 */
  esp -= 4; W32(esp, 0x4084dbu); SPILL(); f_409d94(); if (g_unwind) return; RELOAD();
  SPILL(); f_4084db(); return;
L_40ab83: /* 40ab83: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40ab83); /* movlpd xmm0, qword ptr [esp + 4] */
  SPILL(); f_40ab89(); return;
}

void f_408484(void) {
  LOAD_REGS();
L_408484: /* 408484: cmp dword ptr [0x44b14c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b14cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40848b: je 0x4084be */
  if (zf) goto L_4084be;
L_40848d: /* 40848d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408490: stmxcsr dword ptr [esp + 4] */
  guest_unsupported(0x408490); /* stmxcsr dword ptr [esp + 4] */
/* 408495: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 408499: and eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40849e: cmp eax, 0x1f80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4084a3: jne 0x4084b4 */
  if (!zf) goto L_4084b4;
L_4084a5: /* 4084a5: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 4084a8: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 4084ac: and ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4084b0: cmp ax, 0x7f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
L_4084b4: /* 4084b4: lea esp, [esp + 8] */
  esp = (uint32_t)(esp + 0x8u);
/* 4084b8: je 0x40ab6b */
  if (zf) goto L_40ab6b;
L_4084be: /* 4084be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4084c1: fst qword ptr [esp] */
  WF64((uint32_t)(esp), ST0);
/* 4084c4: call 0x409dd7 */
  esp -= 4; W32(esp, 0x4084c9u); SPILL(); f_409dd7(); if (g_unwind) return; RELOAD();
/* 4084c9: call 0x4084db */
  esp -= 4; W32(esp, 0x4084ceu); SPILL(); f_4084db(); if (g_unwind) return; RELOAD();
/* 4084ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4084d1: ret  */
  esp += 4; SPILL(); return;
L_40ab6b: /* 40ab6b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40ab6c: mov ebp, esp */
  ebp = esp;
/* 40ab6e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40ab71: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 40ab74: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 40ab77: movq xmm0, qword ptr [esp] */
  guest_unsupported(0x40ab77); /* movq xmm0, qword ptr [esp] */
/* 40ab7c: call 0x40ab89 */
  esp -= 4; W32(esp, 0x40ab81u); SPILL(); f_40ab89(); if (g_unwind) return; RELOAD();
/* 40ab81: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40ab82: ret  */
  esp += 4; SPILL(); return;
}

void f_4084db(void) {
  LOAD_REGS();
L_4084db: /* 4084db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4084dc: wait  */
/* 4084dd: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 4084e0: je 0x40852e */
  if (zf) goto L_40852e;
L_4084e2: /* 4084e2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4084e6: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4084ec: je 0x4084f4 */
  if (zf) goto L_4084f4;
L_4084ee: /* 4084ee: fldcw word ptr [0x441358] */
  FCW = R16((uint32_t)(0x441358u));
L_4084f4: /* 4084f4: test eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4084f9: je 0x408559 */
  if (zf) goto L_408559;
L_4084fb: /* 4084fb: test eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408500: jne 0x408543 */
  if (!zf) goto L_408543;
L_408502: /* 408502: fldlg2  */
  FPUSH(0.301029995663981195214);
/* 408504: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408506: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
L_408508: /* 408508: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40850f: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408515: /* 408515: lea ecx, [0x44e250] */
  ecx = (uint32_t)(0x44e250u);
/* 40851b: mov edx, 0x1b */
  edx = 0x1bu;
/* 408520: jmp 0x409dfa */
  goto L_409dfa;
L_408525: /* 408525: test eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40852a: jne 0x408543 */
  if (!zf) goto L_408543;
L_40852c: /* 40852c: jmp 0x408502 */
  goto L_408502;
L_40852e: /* 40852e: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408533: jne 0x408552 */
  if (!zf) goto L_408552;
L_408535: /* 408535: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40853a: jne 0x408552 */
  if (!zf) goto L_408552;
L_40853c: /* 40853c: and eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 408541: je 0x408508 */
  if (zf) goto L_408508;
L_408543: /* 408543: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 408545: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 40854b: mov eax, 1 */
  eax = 0x1u;
/* 408550: jmp 0x408574 */
  goto L_408574;
L_408552: /* 408552: call 0x409d7b */
  esp -= 4; W32(esp, 0x408557u); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 408557: jmp 0x408574 */
  goto L_408574;
L_408559: /* 408559: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40855e: jne 0x408525 */
  if (!zf) goto L_408525;
L_408560: /* 408560: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408565: jne 0x408525 */
  if (!zf) goto L_408525;
L_408567: /* 408567: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 408569: fld xword ptr [0x44ea8a] */
  { double v = F80((uint32_t)(0x44ea8au)); FPUSH(v); }
/* 40856f: mov eax, 2 */
  eax = 0x2u;
L_408574: /* 408574: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40857b: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408581: /* 408581: lea ecx, [0x44e250] */
  ecx = (uint32_t)(0x44e250u);
/* 408587: mov edx, 0x1b */
  edx = 0x1bu;
/* 40858c: call 0x409d13 */
  esp -= 4; W32(esp, 0x408591u); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 408591: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 408592: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_408593(void) { hle_pow(); }

void f_4085d2(void) { hle_CIpow(); }

void f_40862e(void) {
  LOAD_REGS();
L_40862e: /* 40862e: mov ecx, eax */
  ecx = eax;
/* 408630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 408631: wait  */
/* 408632: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 408635: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40863b: je 0x408642 */
  if (zf) goto L_408642;
L_40863d: /* 40863d: call 0x409d64 */
  esp -= 4; W32(esp, 0x408642u); SPILL(); f_409d64(); if (g_unwind) return; RELOAD();
L_408642: /* 408642: and ecx, 0x7ff00000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 408648: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 40864c: cmp ecx, 0x7ff00000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408652: je 0x4086f5 */
  if (zf) goto L_4086f5;
L_408658: /* 408658: call 0x409d94 */
  esp -= 4; W32(esp, 0x40865du); SPILL(); f_409d94(); if (g_unwind) return; RELOAD();
/* 40865d: je 0x4086f1 */
  if (zf) goto L_4086f1;
L_408663: /* 408663: test eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408668: je 0x408764 */
  if (zf) goto L_408764;
L_40866e: /* 40866e: mov cl, byte ptr [esp + 0xf] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 408672: and cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 408675: jne 0x4087ce */
  if (!zf) goto L_4087ce;
L_40867b: /* 40867b: fyl2x  */
  STI(1) = STI(1) * log2(ST0); FPOP();
/* 40867d: call 0x409d4f */
  esp -= 4; W32(esp, 0x408682u); SPILL(); f_409d4f(); if (g_unwind) return; RELOAD();
/* 408682: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 408685: jne 0x408689 */
  if (!zf) goto L_408689;
L_408687: /* 408687: fchs  */
  ST0 = -ST0;
L_408689: /* 408689: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408690: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408696: /* 408696: lea ecx, [0x44e260] */
  ecx = (uint32_t)(0x44e260u);
/* 40869c: mov edx, 0x1d */
  edx = 0x1du;
/* 4086a1: jmp 0x409e24 */
  goto L_409e24;
L_4086a6: /* 4086a6: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4086ad: jne 0x409ded */
  if (!zf) goto L_409ded;
L_4086b3: /* 4086b3: lea ecx, [0x44e260] */
  ecx = (uint32_t)(0x44e260u);
/* 4086b9: mov edx, 0x1d */
  edx = 0x1du;
/* 4086be: call 0x409cfc */
  esp -= 4; W32(esp, 0x4086c3u); SPILL(); f_409cfc(); if (g_unwind) return; RELOAD();
/* 4086c3: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4086c4: ret  */
  esp += 4; SPILL(); return;
L_4086c5: /* 4086c5: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 4086c9: call 0x409d94 */
  esp -= 4; W32(esp, 0x4086ceu); SPILL(); f_409d94(); if (g_unwind) return; RELOAD();
/* 4086ce: test byte ptr [esp + 0x16], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x16u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4086d3: jne 0x4086d8 */
  if (!zf) goto L_4086d8;
L_4086d5: /* 4086d5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4086d6: jmp 0x40870b */
  goto L_40870b;
L_4086d8: /* 4086d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4086da: mov eax, 1 */
  eax = 0x1u;
/* 4086df: jmp 0x4086a6 */
  goto L_4086a6;
L_4086e1: /* 4086e1: test byte ptr [esp + 0xe], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0xeu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4086e6: jne 0x4086d8 */
  if (!zf) goto L_4086d8;
L_4086e8: /* 4086e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4086ea: mov eax, 7 */
  eax = 0x7u;
/* 4086ef: jmp 0x4086a6 */
  goto L_4086a6;
L_4086f1: /* 4086f1: xor ecx, ecx */
  ecx = 0;
/* 4086f3: jmp 0x40870b */
  goto L_40870b;
L_4086f5: /* 4086f5: xor ecx, ecx */
  ecx = 0;
/* 4086f7: and eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4086fc: or eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 408700: jne 0x4086c5 */
  if (!zf) goto L_4086c5;
L_408702: /* 408702: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 408706: call 0x409d94 */
  esp -= 4; W32(esp, 0x40870bu); SPILL(); f_409d94(); if (g_unwind) return; RELOAD();
L_40870b: /* 40870b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 40870f: mov edx, eax */
  edx = eax;
/* 408711: and eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408716: and edx, 0xfffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40871c: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408721: jne 0x408729 */
  if (!zf) goto L_408729;
L_408723: /* 408723: or edx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 408727: jne 0x4086e1 */
  if (!zf) goto L_4086e1;
L_408729: /* 408729: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40872b: jne 0x4086e8 */
  if (!zf) goto L_4086e8;
L_40872d: /* 40872d: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408730: mov ecx, esp */
  ecx = esp;
/* 408732: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 408733: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408736: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 408739: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 40873d: wait  */
/* 40873e: fnsave dword ptr [ecx + 8] */
  fpu_save((uint32_t)(ecx + 0x8u));
/* 408741: call 0x4342c3 */
  esp -= 4; W32(esp, 0x408746u); SPILL(); f_4342c3(); if (g_unwind) return; RELOAD();
/* 408746: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408749: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40874a: frstor dword ptr [ecx + 8] */
  fpu_rstor((uint32_t)(ecx + 0x8u));
/* 40874d: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 40874f: add esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408752: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408754: je 0x409ded */
  if (zf) goto L_409ded;
L_40875a: /* 40875a: mov eax, 1 */
  eax = 0x1u;
/* 40875f: jmp 0x4086a6 */
  goto L_4086a6;
L_408764: /* 408764: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 408768: and eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40876d: or eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 408771: jne 0x40866e */
  if (!zf) goto L_40866e;
L_408777: /* 408777: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 408779: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 40877d: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408782: or eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 408786: je 0x4087c5 */
  if (zf) goto L_4087c5;
L_408788: /* 408788: call 0x4087f3 */
  esp -= 4; W32(esp, 0x40878du); SPILL(); f_4087f3(); if (g_unwind) return; RELOAD();
/* 40878d: mov ch, byte ptr [esp + 0xf] */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu) << 8);
/* 408791: shr ch, 7 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint32_t c = 7;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 408794: test dword ptr [esp + 0x17], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x17u))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40879c: je 0x4087b4 */
  if (zf) goto L_4087b4;
L_40879e: /* 40879e: fld xword ptr [0x44ea80] */
  { double v = F80((uint32_t)(0x44ea80u)); FPUSH(v); }
/* 4087a4: test ch, cl */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4087a6: je 0x4087aa */
  if (zf) goto L_4087aa;
L_4087a8: /* 4087a8: fchs  */
  ST0 = -ST0;
L_4087aa: /* 4087aa: mov eax, 2 */
  eax = 0x2u;
/* 4087af: jmp 0x4086a6 */
  goto L_4086a6;
L_4087b4: /* 4087b4: fldz  */
  FPUSH(0.0);
/* 4087b6: test ch, cl */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4087b8: je 0x409ded */
  if (zf) goto L_409ded;
L_4087be: /* 4087be: fchs  */
  ST0 = -ST0;
/* 4087c0: jmp 0x409ded */
  goto L_409ded;
L_4087c5: /* 4087c5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4087c7: fld1  */
  FPUSH(1.0);
/* 4087c9: jmp 0x409ded */
  goto L_409ded;
L_4087ce: /* 4087ce: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4087d0: call 0x4087f3 */
  esp -= 4; W32(esp, 0x4087d5u); SPILL(); f_4087f3(); if (g_unwind) return; RELOAD();
/* 4087d5: fchs  */
  ST0 = -ST0;
/* 4087d7: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4087d9: jne 0x40867b */
  if (!zf) goto L_40867b;
L_4087df: /* 4087df: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4087e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4087e3: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 4087e9: mov eax, 1 */
  eax = 0x1u;
/* 4087ee: jmp 0x4086a6 */
  goto L_4086a6;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409e24: /* 409e24: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409e27: fst qword ptr [esp] */
  WF64((uint32_t)(esp), ST0);
/* 409e2a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 409e2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409e31: and eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 409e36: je 0x409e75 */
  if (zf) goto L_409e75;
L_409e38: /* 409e38: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 409e3d: je 0x409e9e */
  if (zf) goto L_409e9e;
L_409e3f: /* 409e3f: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409e43: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e47: je 0x409e73 */
  if (zf) goto L_409e73;
L_409e49: /* 409e49: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e4d: jne 0x409e70 */
  if (!zf) goto L_409e70;
L_409e4f: /* 409e4f: wait  */
/* 409e50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e52: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e56: je 0x409e70 */
  if (zf) goto L_409e70;
L_409e58: /* 409e58: mov eax, 8 */
  eax = 0x8u;
L_409e5d: /* 409e5d: cmp edx, 0x1d */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 409e60: je 0x409e69 */
  if (zf) goto L_409e69;
L_409e62: /* 409e62: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e67u); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e67: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e68: ret  */
  esp += 4; SPILL(); return;
L_409e69: /* 409e69: call 0x409cfc */
  esp -= 4; W32(esp, 0x409e6eu); SPILL(); f_409cfc(); if (g_unwind) return; RELOAD();
/* 409e6e: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e6f: ret  */
  esp += 4; SPILL(); return;
L_409e70: /* 409e70: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e73: /* 409e73: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e74: ret  */
  esp += 4; SPILL(); return;
L_409e75: /* 409e75: fld qword ptr [0x44137c] */
  { double v = F64((uint32_t)(0x44137cu)); FPUSH(v); }
/* 409e7b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409e7d: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 409e7f: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 409e81: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 409e83: fabs  */
  ST0 = fabs(ST0);
/* 409e85: fcomp qword ptr [0x44136c] */
  fpu_com(ST0, F64((uint32_t)(0x44136cu)));
  FPOP();
/* 409e8b: wait  */
/* 409e8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e8e: sahf  */
  cf = (eax >> 8) & 1;
/* 409e8f: mov eax, 4 */
  eax = 0x4u;
/* 409e94: jae 0x409e5d */
  if (!cf) goto L_409e5d;
L_409e96: /* 409e96: fmul qword ptr [0x44138c] */
  ST0 = ST0 * (F64((uint32_t)(0x44138cu)));
/* 409e9c: jmp 0x409e5d */
  goto L_409e5d;
L_409e9e: /* 409e9e: fld qword ptr [0x441374] */
  { double v = F64((uint32_t)(0x441374u)); FPUSH(v); }
/* 409ea4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409ea6: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 409ea8: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 409eaa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 409eac: fabs  */
  ST0 = fabs(ST0);
/* 409eae: fcomp qword ptr [0x441364] */
  fpu_com(ST0, F64((uint32_t)(0x441364u)));
  FPOP();
/* 409eb4: wait  */
/* 409eb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409eb7: sahf  */
  cf = (eax >> 8) & 1;
  zf = (eax >> 14) & 1;
/* 409eb8: mov eax, 3 */
  eax = 0x3u;
/* 409ebd: jbe 0x409e5d */
  if ((cf | zf)) goto L_409e5d;
L_409ebf: /* 409ebf: fmul qword ptr [0x441384] */
  ST0 = ST0 * (F64((uint32_t)(0x441384u)));
/* 409ec5: jmp 0x409e5d */
  goto L_409e5d;
}

void f_4087f3(void) {
  LOAD_REGS();
L_4087f3: /* 4087f3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4087f5: frndint  */
  ST0 = fpu_round(ST0);
/* 4087f7: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4087f9: mov cl, 0 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x0u) & 0xffu);
/* 4087fb: wait  */
/* 4087fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4087fe: sahf  */
  zf = (eax >> 14) & 1;
/* 4087ff: jne 0x408818 */
  if (!zf) goto L_408818;
L_408801: /* 408801: fmul qword ptr [0x44e258] */
  ST0 = ST0 * (F64((uint32_t)(0x44e258u)));
/* 408807: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 408809: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 40880b: frndint  */
  ST0 = fpu_round(ST0);
/* 40880d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 40880f: wait  */
/* 408810: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 408812: sahf  */
  zf = (eax >> 14) & 1;
/* 408813: jne 0x408817 */
  if (!zf) goto L_408817;
L_408815: /* 408815: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_408817: /* 408817: ret  */
  esp += 4; SPILL(); return;
L_408818: /* 408818: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40881a: ret  */
  esp += 4; SPILL(); return;
}

void f_40881b(void) { hle_CIsin(); }

void f_40882f(void) { hle_sin(); }

void f_408838(void) {
  LOAD_REGS();
L_408838: /* 408838: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 408839: wait  */
/* 40883a: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 40883d: je 0x40888f */
  if (zf) goto L_40888f;
L_40883f: /* 40883f: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 408845: je 0x40884d */
  if (zf) goto L_40884d;
L_408847: /* 408847: fldcw word ptr [0x441358] */
  FCW = R16((uint32_t)(0x441358u));
L_40884d: /* 40884d: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 40884f: wait  */
/* 408850: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 408852: sahf  */
  pf = (eax >> 10) & 1;
/* 408853: jp 0x408872 */
  if (pf) goto L_408872;
L_408855: /* 408855: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40885c: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408862: /* 408862: mov edx, 0x1e */
  edx = 0x1eu;
/* 408867: lea ecx, [0x44e270] */
  ecx = (uint32_t)(0x44e270u);
/* 40886d: jmp 0x409dfa */
  goto L_409dfa;
L_408872: /* 408872: fld xword ptr [0x44135a] */
  { double v = F80((uint32_t)(0x44135au)); FPUSH(v); }
/* 408878: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
L_40887a: /* 40887a: fprem1  */
  fpu_prem(1);
/* 40887c: wait  */
/* 40887d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 40887f: sahf  */
  pf = (eax >> 10) & 1;
/* 408880: jp 0x40887a */
  if (pf) goto L_40887a;
L_408882: /* 408882: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 408884: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 408886: jmp 0x408855 */
  goto L_408855;
L_408888: /* 408888: call 0x409d7b */
  esp -= 4; W32(esp, 0x40888du); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 40888d: jmp 0x4088aa */
  goto L_4088aa;
L_40888f: /* 40888f: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408894: jne 0x408888 */
  if (!zf) goto L_408888;
L_408896: /* 408896: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40889b: jne 0x408888 */
  if (!zf) goto L_408888;
L_40889d: /* 40889d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40889f: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 4088a5: mov eax, 1 */
  eax = 0x1u;
L_4088aa: /* 4088aa: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4088b1: jne 0x409ded */
  if (!zf) goto L_409ded;
L_4088b7: /* 4088b7: mov edx, 0x1e */
  edx = 0x1eu;
/* 4088bc: lea ecx, [0x44e270] */
  ecx = (uint32_t)(0x44e270u);
/* 4088c2: call 0x409d13 */
  esp -= 4; W32(esp, 0x4088c7u); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 4088c7: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4088c8: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_4088c9(void) { hle_CIsqrt(); }

void f_4088dd(void) { hle_sqrt(); }

void f_4088e6(void) {
  LOAD_REGS();
L_4088e6: /* 4088e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4088e7: wait  */
/* 4088e8: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 4088eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4088ef: je 0x408942 */
  if (zf) goto L_408942;
L_4088f1: /* 4088f1: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4088f7: je 0x4088fe */
  if (zf) goto L_4088fe;
L_4088f9: /* 4088f9: call 0x409d64 */
  esp -= 4; W32(esp, 0x4088feu); SPILL(); f_409d64(); if (g_unwind) return; RELOAD();
L_4088fe: /* 4088fe: test eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408903: jne 0x408924 */
  if (!zf) goto L_408924;
L_408905: /* 408905: fsqrt  */
  ST0 = sqrt(ST0);
L_408907: /* 408907: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40890e: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408914: /* 408914: mov edx, 5 */
  edx = 0x5u;
/* 408919: lea ecx, [0x44e280] */
  ecx = (uint32_t)(0x44e280u);
/* 40891f: jmp 0x409dfa */
  goto L_409dfa;
L_408924: /* 408924: test eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408929: jne 0x408957 */
  if (!zf) goto L_408957;
L_40892b: /* 40892b: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408930: jne 0x408957 */
  if (!zf) goto L_408957;
L_408932: /* 408932: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408937: jne 0x408957 */
  if (!zf) goto L_408957;
L_408939: /* 408939: jmp 0x408907 */
  goto L_408907;
L_40893b: /* 40893b: call 0x409d7b */
  esp -= 4; W32(esp, 0x408940u); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 408940: jmp 0x408964 */
  goto L_408964;
L_408942: /* 408942: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408947: jne 0x40893b */
  if (!zf) goto L_40893b;
L_408949: /* 408949: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40894e: jne 0x40893b */
  if (!zf) goto L_40893b;
L_408950: /* 408950: and eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 408955: je 0x408907 */
  if (zf) goto L_408907;
L_408957: /* 408957: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 408959: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 40895f: mov eax, 1 */
  eax = 0x1u;
L_408964: /* 408964: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40896b: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408971: /* 408971: mov edx, 5 */
  edx = 0x5u;
/* 408976: lea ecx, [0x44e280] */
  ecx = (uint32_t)(0x44e280u);
/* 40897c: call 0x409d13 */
  esp -= 4; W32(esp, 0x408981u); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 408981: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 408982: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_408983(void) { hle_CItan(); }

void f_408997(void) { hle_tan(); }

void f_4089a0(void) {
  LOAD_REGS();
L_4089a0: /* 4089a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4089a1: wait  */
/* 4089a2: fnstcw word ptr [esp] */
  W16((uint32_t)(esp), FCW);
/* 4089a5: je 0x4089fb */
  if (zf) goto L_4089fb;
L_4089a7: /* 4089a7: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4089ad: je 0x4089b5 */
  if (zf) goto L_4089b5;
L_4089af: /* 4089af: fldcw word ptr [0x441358] */
  FCW = R16((uint32_t)(0x441358u));
L_4089b5: /* 4089b5: fptan  */
  ST0 = tan(ST0); FPUSH(1.0); FSW_CC &= ~0x400;
/* 4089b7: wait  */
/* 4089b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4089ba: sahf  */
  pf = (eax >> 10) & 1;
/* 4089bb: jp 0x4089dc */
  if (pf) goto L_4089dc;
L_4089bd: /* 4089bd: fstp st(0) */
  STI(0) = ST0; FPOP();
L_4089bf: /* 4089bf: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4089c6: jne 0x409ded */
  if (!zf) goto L_409ded;
L_4089cc: /* 4089cc: mov edx, 0x20 */
  edx = 0x20u;
/* 4089d1: lea ecx, [0x44e290] */
  ecx = (uint32_t)(0x44e290u);
/* 4089d7: jmp 0x409dfa */
  goto L_409dfa;
L_4089dc: /* 4089dc: fld xword ptr [0x44135a] */
  { double v = F80((uint32_t)(0x44135au)); FPUSH(v); }
/* 4089e2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
L_4089e4: /* 4089e4: fprem1  */
  fpu_prem(1);
/* 4089e6: wait  */
/* 4089e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4089e9: sahf  */
  pf = (eax >> 10) & 1;
/* 4089ea: jp 0x4089e4 */
  if (pf) goto L_4089e4;
L_4089ec: /* 4089ec: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 4089ee: fptan  */
  ST0 = tan(ST0); FPUSH(1.0); FSW_CC &= ~0x400;
/* 4089f0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4089f2: jmp 0x4089bf */
  goto L_4089bf;
L_4089f4: /* 4089f4: call 0x409d7b */
  esp -= 4; W32(esp, 0x4089f9u); SPILL(); f_409d7b(); if (g_unwind) return; RELOAD();
/* 4089f9: jmp 0x408a16 */
  goto L_408a16;
L_4089fb: /* 4089fb: test eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408a00: jne 0x4089f4 */
  if (!zf) goto L_4089f4;
L_408a02: /* 408a02: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408a07: jne 0x4089f4 */
  if (!zf) goto L_4089f4;
L_408a09: /* 408a09: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 408a0b: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 408a11: mov eax, 1 */
  eax = 0x1u;
L_408a16: /* 408a16: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408a1d: jne 0x409ded */
  if (!zf) goto L_409ded;
L_408a23: /* 408a23: mov edx, 0x20 */
  edx = 0x20u;
/* 408a28: lea ecx, [0x44e290] */
  ecx = (uint32_t)(0x44e290u);
/* 408a2e: call 0x409d13 */
  esp -= 4; W32(esp, 0x408a33u); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 408a33: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 408a34: ret  */
  esp += 4; SPILL(); return;
L_409ded: /* 409ded: cmp word ptr [esp], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409df3: je 0x409df8 */
  if (zf) goto L_409df8;
L_409df5: /* 409df5: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409df8: /* 409df8: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409df9: ret  */
  esp += 4; SPILL(); return;
L_409dfa: /* 409dfa: mov ax, word ptr [esp] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp))) & 0xffffu);
/* 409dfe: cmp ax, 0x27f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409e02: je 0x409e22 */
  if (zf) goto L_409e22;
L_409e04: /* 409e04: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e08: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e0a: /* 409e0a: wait  */
/* 409e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409e0d: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 409e11: je 0x409e1f */
  if (zf) goto L_409e1f;
L_409e13: /* 409e13: mov eax, 8 */
  eax = 0x8u;
/* 409e18: call 0x409d13 */
  esp -= 4; W32(esp, 0x409e1du); SPILL(); f_409d13(); if (g_unwind) return; RELOAD();
/* 409e1d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e1e: ret  */
  esp += 4; SPILL(); return;
L_409e1f: /* 409e1f: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
L_409e22: /* 409e22: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409e23: ret  */
  esp += 4; SPILL(); return;
}

void f_408a35(void) {
  LOAD_REGS();
L_408a35: /* 408a35: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 408a39: fld xword ptr [esp + 4] */
  { double v = F80((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_408a3d: /* 408a3d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 408a41: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 408a43: jae 0x408acf */
  if (!cf) goto L_408acf;
L_408a49: /* 408a49: xor eax, 0xe000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe000000u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 408a4e: test eax, 0xe000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 408a53: je 0x408a58 */
  if (zf) goto L_408a58;
L_408a55: /* 408a55: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 408a57: ret  */
  esp += 4; SPILL(); return;
L_408a58: /* 408a58: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 408a5b: cmp byte ptr [eax + 0x44e2a0], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44e2a0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 408a62: jne 0x408a67 */
  if (!zf) goto L_408a67;
L_408a64: /* 408a64: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 408a66: ret  */
  esp += 4; SPILL(); return;
L_408a67: /* 408a67: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 408a6b: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 408a70: je 0x408ad9 */
  if (zf) goto L_408ad9;
L_408a72: /* 408a72: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408a77: je 0x408ad9 */
  if (zf) goto L_408ad9;
L_408a79: /* 408a79: fnstcw word ptr [esp + 0x1c] */
  W16((uint32_t)(esp + 0x1cu), FCW);
/* 408a7d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 408a81: or eax, 0x33f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 408a86: and eax, 0xf3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408a8b: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 408a8f: fldcw word ptr [esp + 0x20] */
  FCW = R16((uint32_t)(esp + 0x20u));
/* 408a93: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 408a97: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408a9c: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408a9f: je 0x408ab8 */
  if (zf) goto L_408ab8;
L_408aa1: /* 408aa1: fmul dword ptr [0x44e2b0] */
  ST0 = ST0 * (F32((uint32_t)(0x44e2b0u)));
/* 408aa7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408aa9: fmul dword ptr [0x44e2b0] */
  ST0 = ST0 * (F32((uint32_t)(0x44e2b0u)));
/* 408aaf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408ab1: fldcw word ptr [esp + 0x1c] */
  FCW = R16((uint32_t)(esp + 0x1cu));
/* 408ab5: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 408ab7: ret  */
  esp += 4; SPILL(); return;
L_408ab8: /* 408ab8: fmul dword ptr [0x44e2b4] */
  ST0 = ST0 * (F32((uint32_t)(0x44e2b4u)));
/* 408abe: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408ac0: fmul dword ptr [0x44e2b4] */
  ST0 = ST0 * (F32((uint32_t)(0x44e2b4u)));
/* 408ac6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408ac8: fldcw word ptr [esp + 0x1c] */
  FCW = R16((uint32_t)(esp + 0x1cu));
/* 408acc: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 408ace: ret  */
  esp += 4; SPILL(); return;
L_408acf: /* 408acf: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 408ad3: or eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 408ad7: jne 0x408adc */
  if (!zf) goto L_408adc;
L_408ad9: /* 408ad9: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 408adb: ret  */
  esp += 4; SPILL(); return;
L_408adc: /* 408adc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 408ae0: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 408ae5: jne 0x408ad9 */
  if (!zf) goto L_408ad9;
L_408ae7: /* 408ae7: fnstcw word ptr [esp + 0x1c] */
  W16((uint32_t)(esp + 0x1cu), FCW);
/* 408aeb: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 408aef: or eax, 0x33f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 408af4: and eax, 0xf3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408af9: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 408afd: fldcw word ptr [esp + 0x20] */
  FCW = R16((uint32_t)(esp + 0x20u));
/* 408b01: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 408b05: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 408b0a: je 0x408b1d */
  if (zf) goto L_408b1d;
L_408b0c: /* 408b0c: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 408b11: je 0x408b45 */
  if (zf) goto L_408b45;
L_408b13: /* 408b13: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 408b17: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 408b19: jae 0x408b45 */
  if (!cf) goto L_408b45;
L_408b1b: /* 408b1b: jmp 0x408b25 */
  goto L_408b25;
L_408b1d: /* 408b1d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 408b21: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 408b23: jb 0x408b45 */
  if (cf) goto L_408b45;
L_408b25: /* 408b25: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408b27: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 408b29: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408b2b: fmul dword ptr [0x44e2b8] */
  ST0 = ST0 * (F32((uint32_t)(0x44e2b8u)));
/* 408b31: fstp xword ptr [esp + 4] */
  WF80((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 408b35: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 408b39: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408b3b: wait  */
/* 408b3c: fldcw word ptr [esp + 0x1c] */
  FCW = R16((uint32_t)(esp + 0x1cu));
/* 408b40: jmp 0x408a3d */
  goto L_408a3d;
L_408b45: /* 408b45: fldcw word ptr [esp + 0x1c] */
  FCW = R16((uint32_t)(esp + 0x1cu));
/* 408b49: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 408b4b: ret  */
  esp += 4; SPILL(); return;
}

void f_408b4c(void) {
  LOAD_REGS();
L_408b4c: /* 408b4c: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408b4f: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 408b52: jmp dword ptr [eax*4 + 0x44e2ee] */
  switch (R32((uint32_t)(eax*4 + 0x44e2eeu))) {
    case 0x408b59u: goto L_408b59;
    case 0x408b5fu: goto L_408b5f;
    case 0x408b64u: goto L_408b64;
    case 0x408b6au: goto L_408b6a;
    case 0x408b6fu: goto L_408b6f;
    case 0x408b75u: goto L_408b75;
    case 0x408b7bu: goto L_408b7b;
    case 0x408b81u: goto L_408b81;
    case 0x408b87u: goto L_408b87;
    case 0x408ba3u: goto L_408ba3;
    case 0x408ba8u: goto L_408ba8;
    case 0x408bbeu: goto L_408bbe;
    case 0x408bc3u: goto L_408bc3;
    case 0x408bdfu: goto L_408bdf;
    case 0x408befu: goto L_408bef;
    case 0x408c03u: goto L_408c03;
    case 0x408c13u: goto L_408c13;
    case 0x408c33u: goto L_408c33;
    case 0x408c38u: goto L_408c38;
    case 0x408c52u: goto L_408c52;
    case 0x408c57u: goto L_408c57;
    case 0x408c77u: goto L_408c77;
    case 0x408c8bu: goto L_408c8b;
    case 0x408ca3u: goto L_408ca3;
    case 0x408cb7u: goto L_408cb7;
    case 0x408cd7u: goto L_408cd7;
    case 0x408cdcu: goto L_408cdc;
    case 0x408cf6u: goto L_408cf6;
    case 0x408cfbu: goto L_408cfb;
    case 0x408d1bu: goto L_408d1b;
    case 0x408d2fu: goto L_408d2f;
    case 0x408d47u: goto L_408d47;
    case 0x408d5bu: goto L_408d5b;
    case 0x408d7bu: goto L_408d7b;
    case 0x408d80u: goto L_408d80;
    case 0x408d9au: goto L_408d9a;
    case 0x408d9fu: goto L_408d9f;
    case 0x408dbfu: goto L_408dbf;
    case 0x408dd3u: goto L_408dd3;
    case 0x408debu: goto L_408deb;
    case 0x408dffu: goto L_408dff;
    case 0x408e1fu: goto L_408e1f;
    case 0x408e24u: goto L_408e24;
    case 0x408e3eu: goto L_408e3e;
    case 0x408e43u: goto L_408e43;
    case 0x408e63u: goto L_408e63;
    case 0x408e77u: goto L_408e77;
    case 0x408e8fu: goto L_408e8f;
    case 0x408ea3u: goto L_408ea3;
    case 0x408ec3u: goto L_408ec3;
    case 0x408ec8u: goto L_408ec8;
    case 0x408ee2u: goto L_408ee2;
    case 0x408ee7u: goto L_408ee7;
    case 0x408f07u: goto L_408f07;
    case 0x408f1bu: goto L_408f1b;
    case 0x408f33u: goto L_408f33;
    case 0x408f47u: goto L_408f47;
    case 0x408f67u: goto L_408f67;
    case 0x408f6cu: goto L_408f6c;
    case 0x408f86u: goto L_408f86;
    case 0x408f8bu: goto L_408f8b;
    case 0x408fabu: goto L_408fab;
    case 0x408fbfu: goto L_408fbf;
    case 0x408fd7u: goto L_408fd7;
    default: guest_badjump(0x408b52, R32((uint32_t)(eax*4 + 0x44e2eeu))); return;
  }
L_408b59: /* 408b59: fdiv st(0) */
  ST0 = ST0 / STI(0);
/* 408b5b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408b5e: ret  */
  esp += 4; SPILL(); return;
L_408b5f: /* 408b5f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408b62: int 6 */
  guest_int(6, 0x408b62);
L_408b64: /* 408b64: fdivr st(0) */
  ST0 = STI(0) / ST0;
/* 408b66: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408b69: ret  */
  esp += 4; SPILL(); return;
L_408b6a: /* 408b6a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408b6d: int 6 */
  guest_int(6, 0x408b6d);
L_408b6f: /* 408b6f: fdiv st(0) */
  ST0 = ST0 / STI(0);
/* 408b71: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408b74: ret  */
  esp += 4; SPILL(); return;
L_408b75: /* 408b75: fdivp st(0) */
  STI(0) = STI(0) / ST0;
  FPOP();
/* 408b77: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408b7a: ret  */
  esp += 4; SPILL(); return;
L_408b7b: /* 408b7b: fdivr st(0) */
  ST0 = STI(0) / ST0;
/* 408b7d: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408b80: ret  */
  esp += 4; SPILL(); return;
L_408b81: /* 408b81: fdivrp st(0) */
  STI(0) = ST0 / STI(0);
  FPOP();
/* 408b83: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408b86: ret  */
  esp += 4; SPILL(); return;
L_408b87: /* 408b87: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408b8b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408b8d: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408b90: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408b94: call 0x408a35 */
  esp -= 4; W32(esp, 0x408b99u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408b99: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408b9d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408b9f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ba2: ret  */
  esp += 4; SPILL(); return;
L_408ba3: /* 408ba3: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ba6: int 6 */
  guest_int(6, 0x408ba6);
L_408ba8: /* 408ba8: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408bab: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408baf: call 0x408a35 */
  esp -= 4; W32(esp, 0x408bb4u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408bb4: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408bb8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408bba: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408bbd: ret  */
  esp += 4; SPILL(); return;
L_408bbe: /* 408bbe: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408bc1: int 6 */
  guest_int(6, 0x408bc1);
L_408bc3: /* 408bc3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408bc5: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408bc9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408bcb: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408bce: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408bd2: call 0x408a35 */
  esp -= 4; W32(esp, 0x408bd7u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408bd7: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408bdb: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408bde: ret  */
  esp += 4; SPILL(); return;
L_408bdf: /* 408bdf: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408be2: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408be6: call 0x408a35 */
  esp -= 4; W32(esp, 0x408bebu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408beb: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408bee: ret  */
  esp += 4; SPILL(); return;
L_408bef: /* 408bef: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408bf3: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408bf6: call 0x408a35 */
  esp -= 4; W32(esp, 0x408bfbu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408bfb: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408bff: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408c02: ret  */
  esp += 4; SPILL(); return;
L_408c03: /* 408c03: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408c07: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408c0a: call 0x408a35 */
  esp -= 4; W32(esp, 0x408c0fu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408c0f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408c12: ret  */
  esp += 4; SPILL(); return;
L_408c13: /* 408c13: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408c17: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c19: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408c1b: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408c1e: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408c22: call 0x408a35 */
  esp -= 4; W32(esp, 0x408c27u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408c27: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c29: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408c2d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408c2f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408c32: ret  */
  esp += 4; SPILL(); return;
L_408c33: /* 408c33: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408c36: int 6 */
  guest_int(6, 0x408c36);
L_408c38: /* 408c38: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408c3b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c3d: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408c41: call 0x408a35 */
  esp -= 4; W32(esp, 0x408c46u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408c46: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c48: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408c4c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408c4e: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408c51: ret  */
  esp += 4; SPILL(); return;
L_408c52: /* 408c52: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408c55: int 6 */
  guest_int(6, 0x408c55);
L_408c57: /* 408c57: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408c59: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408c5d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c5f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408c61: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408c64: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408c68: call 0x408a35 */
  esp -= 4; W32(esp, 0x408c6du); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408c6d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c6f: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408c73: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408c76: ret  */
  esp += 4; SPILL(); return;
L_408c77: /* 408c77: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408c7a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c7c: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408c80: call 0x408a35 */
  esp -= 4; W32(esp, 0x408c85u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408c85: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c87: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408c8a: ret  */
  esp += 4; SPILL(); return;
L_408c8b: /* 408c8b: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408c8f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c91: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408c94: call 0x408a35 */
  esp -= 4; W32(esp, 0x408c99u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408c99: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408c9b: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408c9f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ca2: ret  */
  esp += 4; SPILL(); return;
L_408ca3: /* 408ca3: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408ca7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408ca9: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408cac: call 0x408a35 */
  esp -= 4; W32(esp, 0x408cb1u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408cb1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 408cb3: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408cb6: ret  */
  esp += 4; SPILL(); return;
L_408cb7: /* 408cb7: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408cbb: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408cbd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408cbf: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408cc2: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408cc6: call 0x408a35 */
  esp -= 4; W32(esp, 0x408ccbu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408ccb: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408ccd: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408cd1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408cd3: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408cd6: ret  */
  esp += 4; SPILL(); return;
L_408cd7: /* 408cd7: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408cda: int 6 */
  guest_int(6, 0x408cda);
L_408cdc: /* 408cdc: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408cdf: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408ce1: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408ce5: call 0x408a35 */
  esp -= 4; W32(esp, 0x408ceau); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408cea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408cec: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408cf0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408cf2: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408cf5: ret  */
  esp += 4; SPILL(); return;
L_408cf6: /* 408cf6: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408cf9: int 6 */
  guest_int(6, 0x408cf9);
L_408cfb: /* 408cfb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408cfd: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408d01: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408d03: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408d05: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408d08: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408d0c: call 0x408a35 */
  esp -= 4; W32(esp, 0x408d11u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408d11: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408d13: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408d17: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408d1a: ret  */
  esp += 4; SPILL(); return;
L_408d1b: /* 408d1b: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408d1e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408d20: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408d24: call 0x408a35 */
  esp -= 4; W32(esp, 0x408d29u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408d29: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408d2b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408d2e: ret  */
  esp += 4; SPILL(); return;
L_408d2f: /* 408d2f: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408d33: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408d35: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408d38: call 0x408a35 */
  esp -= 4; W32(esp, 0x408d3du); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408d3d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408d3f: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408d43: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408d46: ret  */
  esp += 4; SPILL(); return;
L_408d47: /* 408d47: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408d4b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408d4d: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408d50: call 0x408a35 */
  esp -= 4; W32(esp, 0x408d55u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408d55: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 408d57: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408d5a: ret  */
  esp += 4; SPILL(); return;
L_408d5b: /* 408d5b: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408d5f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408d61: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408d63: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408d66: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408d6a: call 0x408a35 */
  esp -= 4; W32(esp, 0x408d6fu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408d6f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408d71: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408d75: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408d77: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408d7a: ret  */
  esp += 4; SPILL(); return;
L_408d7b: /* 408d7b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408d7e: int 6 */
  guest_int(6, 0x408d7e);
L_408d80: /* 408d80: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408d83: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408d85: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408d89: call 0x408a35 */
  esp -= 4; W32(esp, 0x408d8eu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408d8e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408d90: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408d94: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408d96: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408d99: ret  */
  esp += 4; SPILL(); return;
L_408d9a: /* 408d9a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408d9d: int 6 */
  guest_int(6, 0x408d9d);
L_408d9f: /* 408d9f: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408da1: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408da5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408da7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408da9: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408dac: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408db0: call 0x408a35 */
  esp -= 4; W32(esp, 0x408db5u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408db5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408db7: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408dbb: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408dbe: ret  */
  esp += 4; SPILL(); return;
L_408dbf: /* 408dbf: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408dc2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408dc4: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408dc8: call 0x408a35 */
  esp -= 4; W32(esp, 0x408dcdu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408dcd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408dcf: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408dd2: ret  */
  esp += 4; SPILL(); return;
L_408dd3: /* 408dd3: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408dd7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408dd9: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408ddc: call 0x408a35 */
  esp -= 4; W32(esp, 0x408de1u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408de1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408de3: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408de7: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408dea: ret  */
  esp += 4; SPILL(); return;
L_408deb: /* 408deb: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408def: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408df1: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408df4: call 0x408a35 */
  esp -= 4; W32(esp, 0x408df9u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408df9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 408dfb: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408dfe: ret  */
  esp += 4; SPILL(); return;
L_408dff: /* 408dff: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408e03: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e05: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408e07: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408e0a: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408e0e: call 0x408a35 */
  esp -= 4; W32(esp, 0x408e13u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408e13: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e15: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408e19: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408e1b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408e1e: ret  */
  esp += 4; SPILL(); return;
L_408e1f: /* 408e1f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408e22: int 6 */
  guest_int(6, 0x408e22);
L_408e24: /* 408e24: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408e27: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e29: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408e2d: call 0x408a35 */
  esp -= 4; W32(esp, 0x408e32u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408e32: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e34: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408e38: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408e3a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408e3d: ret  */
  esp += 4; SPILL(); return;
L_408e3e: /* 408e3e: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408e41: int 6 */
  guest_int(6, 0x408e41);
L_408e43: /* 408e43: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408e45: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408e49: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e4b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408e4d: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408e50: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408e54: call 0x408a35 */
  esp -= 4; W32(esp, 0x408e59u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408e59: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e5b: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408e5f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408e62: ret  */
  esp += 4; SPILL(); return;
L_408e63: /* 408e63: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408e66: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e68: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408e6c: call 0x408a35 */
  esp -= 4; W32(esp, 0x408e71u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408e71: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e73: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408e76: ret  */
  esp += 4; SPILL(); return;
L_408e77: /* 408e77: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408e7b: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e7d: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408e80: call 0x408a35 */
  esp -= 4; W32(esp, 0x408e85u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408e85: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e87: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408e8b: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408e8e: ret  */
  esp += 4; SPILL(); return;
L_408e8f: /* 408e8f: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408e93: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e95: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408e98: call 0x408a35 */
  esp -= 4; W32(esp, 0x408e9du); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408e9d: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 408e9f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ea2: ret  */
  esp += 4; SPILL(); return;
L_408ea3: /* 408ea3: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408ea7: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408ea9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408eab: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408eae: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408eb2: call 0x408a35 */
  esp -= 4; W32(esp, 0x408eb7u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408eb7: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408eb9: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408ebd: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408ebf: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ec2: ret  */
  esp += 4; SPILL(); return;
L_408ec3: /* 408ec3: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ec6: int 6 */
  guest_int(6, 0x408ec6);
L_408ec8: /* 408ec8: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408ecb: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408ecd: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408ed1: call 0x408a35 */
  esp -= 4; W32(esp, 0x408ed6u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408ed6: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408ed8: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408edc: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408ede: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ee1: ret  */
  esp += 4; SPILL(); return;
L_408ee2: /* 408ee2: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ee5: int 6 */
  guest_int(6, 0x408ee5);
L_408ee7: /* 408ee7: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408ee9: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408eed: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408eef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408ef1: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408ef4: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408ef8: call 0x408a35 */
  esp -= 4; W32(esp, 0x408efdu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408efd: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408eff: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408f03: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408f06: ret  */
  esp += 4; SPILL(); return;
L_408f07: /* 408f07: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408f0a: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408f0c: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408f10: call 0x408a35 */
  esp -= 4; W32(esp, 0x408f15u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408f15: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408f17: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408f1a: ret  */
  esp += 4; SPILL(); return;
L_408f1b: /* 408f1b: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408f1f: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408f21: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408f24: call 0x408a35 */
  esp -= 4; W32(esp, 0x408f29u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408f29: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408f2b: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408f2f: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408f32: ret  */
  esp += 4; SPILL(); return;
L_408f33: /* 408f33: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408f37: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408f39: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408f3c: call 0x408a35 */
  esp -= 4; W32(esp, 0x408f41u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408f41: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 408f43: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408f46: ret  */
  esp += 4; SPILL(); return;
L_408f47: /* 408f47: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408f4b: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408f4d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408f4f: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408f52: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408f56: call 0x408a35 */
  esp -= 4; W32(esp, 0x408f5bu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408f5b: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408f5d: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408f61: fxch st(7) */
  { double t = ST0; ST0 = STI(7); STI(7) = t; }
/* 408f63: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408f66: ret  */
  esp += 4; SPILL(); return;
L_408f67: /* 408f67: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408f6a: int 6 */
  guest_int(6, 0x408f6a);
L_408f6c: /* 408f6c: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408f6f: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408f71: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408f75: call 0x408a35 */
  esp -= 4; W32(esp, 0x408f7au); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408f7a: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408f7c: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408f80: fxch st(7) */
  { double t = ST0; ST0 = STI(7); STI(7) = t; }
/* 408f82: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408f85: ret  */
  esp += 4; SPILL(); return;
L_408f86: /* 408f86: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408f89: int 6 */
  guest_int(6, 0x408f89);
L_408f8b: /* 408f8b: fxch st(7) */
  { double t = ST0; ST0 = STI(7); STI(7) = t; }
/* 408f8d: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408f91: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408f93: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 408f95: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408f98: fstp xword ptr [esp + 0x20] */
  WF80((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 408f9c: call 0x408a35 */
  esp -= 4; W32(esp, 0x408fa1u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408fa1: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408fa3: fld xword ptr [esp + 0x20] */
  { double v = F80((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 408fa7: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408faa: ret  */
  esp += 4; SPILL(); return;
L_408fab: /* 408fab: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408fae: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408fb0: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408fb4: call 0x408a35 */
  esp -= 4; W32(esp, 0x408fb9u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408fb9: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408fbb: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408fbe: ret  */
  esp += 4; SPILL(); return;
L_408fbf: /* 408fbf: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408fc3: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408fc5: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408fc8: call 0x408a35 */
  esp -= 4; W32(esp, 0x408fcdu); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408fcd: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408fcf: fld xword ptr [esp + 0xc] */
  { double v = F80((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 408fd3: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408fd6: ret  */
  esp += 4; SPILL(); return;
L_408fd7: /* 408fd7: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408fdb: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408fdd: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408fe0: call 0x408a35 */
  esp -= 4; W32(esp, 0x408fe5u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408fe5: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 408fe7: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408fea: ret  */
  esp += 4; SPILL(); return;
}

void f_408feb(void) {
  LOAD_REGS();
L_408feb: /* 408feb: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 408fee: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 408ff1: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 408ff5: call 0x408a35 */
  esp -= 4; W32(esp, 0x408ffau); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 408ffa: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 408ffd: ret  */
  esp += 4; SPILL(); return;
}

void f_408ffe(void) {
  LOAD_REGS();
L_408ffe: /* 408ffe: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409001: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 409005: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 409008: call 0x408a35 */
  esp -= 4; W32(esp, 0x40900du); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 40900d: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409010: ret  */
  esp += 4; SPILL(); return;
}

void f_409011(void) {
  LOAD_REGS();
L_409011: /* 409011: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 409012: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 409016: and eax, 0x7f800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40901b: cmp eax, 0x7f800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 409020: je 0x409055 */
  if (zf) goto L_409055;
L_409022: /* 409022: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409024: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 409029: je 0x409038 */
  if (zf) goto L_409038;
L_40902b: /* 40902b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 40902f: call 0x408feb */
  esp -= 4; W32(esp, 0x409034u); SPILL(); f_408feb(); if (g_unwind) return; RELOAD();
/* 409034: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 409035: ret 4 */
  esp += 8; SPILL(); return;
L_409038: /* 409038: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40903a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40903d: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 409040: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 409044: call 0x408feb */
  esp -= 4; W32(esp, 0x409049u); SPILL(); f_408feb(); if (g_unwind) return; RELOAD();
/* 409049: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 40904c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40904e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409051: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 409052: ret 4 */
  esp += 8; SPILL(); return;
L_409055: /* 409055: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 409059: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40905a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_40905d(void) {
  LOAD_REGS();
L_40905d: /* 40905d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40905e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 409062: and eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409067: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40906c: je 0x4090a1 */
  if (zf) goto L_4090a1;
L_40906e: /* 40906e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409070: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 409075: je 0x409084 */
  if (zf) goto L_409084;
L_409077: /* 409077: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 40907b: call 0x408feb */
  esp -= 4; W32(esp, 0x409080u); SPILL(); f_408feb(); if (g_unwind) return; RELOAD();
/* 409080: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 409081: ret 8 */
  esp += 12; SPILL(); return;
L_409084: /* 409084: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409086: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409089: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 40908c: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 409090: call 0x408feb */
  esp -= 4; W32(esp, 0x409095u); SPILL(); f_408feb(); if (g_unwind) return; RELOAD();
/* 409095: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 409098: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40909a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40909d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40909e: ret 8 */
  esp += 12; SPILL(); return;
L_4090a1: /* 4090a1: fdiv qword ptr [esp + 8] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x8u)));
/* 4090a5: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4090a6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4090a9(void) {
  LOAD_REGS();
L_4090a9: /* 4090a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4090aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4090ac: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 4090b1: je 0x4090c0 */
  if (zf) goto L_4090c0;
L_4090b3: /* 4090b3: fild word ptr [esp + 8] */
  { double v = (double)(int16_t)R16((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4090b7: call 0x408feb */
  esp -= 4; W32(esp, 0x4090bcu); SPILL(); f_408feb(); if (g_unwind) return; RELOAD();
/* 4090bc: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4090bd: ret 4 */
  esp += 8; SPILL(); return;
L_4090c0: /* 4090c0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4090c2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4090c5: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 4090c8: fild word ptr [esp + 0x14] */
  { double v = (double)(int16_t)R16((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4090cc: call 0x408feb */
  esp -= 4; W32(esp, 0x4090d1u); SPILL(); f_408feb(); if (g_unwind) return; RELOAD();
/* 4090d1: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 4090d4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4090d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4090d9: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4090da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4090dd(void) {
  LOAD_REGS();
L_4090dd: /* 4090dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4090de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4090e0: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 4090e5: je 0x4090f4 */
  if (zf) goto L_4090f4;
L_4090e7: /* 4090e7: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4090eb: call 0x408feb */
  esp -= 4; W32(esp, 0x4090f0u); SPILL(); f_408feb(); if (g_unwind) return; RELOAD();
/* 4090f0: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4090f1: ret 4 */
  esp += 8; SPILL(); return;
L_4090f4: /* 4090f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4090f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4090f9: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 4090fc: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 409100: call 0x408feb */
  esp -= 4; W32(esp, 0x409105u); SPILL(); f_408feb(); if (g_unwind) return; RELOAD();
/* 409105: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 409108: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40910a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40910d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40910e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_409111(void) {
  LOAD_REGS();
L_409111: /* 409111: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 409112: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 409116: and eax, 0x7f800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40911b: cmp eax, 0x7f800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7f800000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 409120: je 0x409155 */
  if (zf) goto L_409155;
L_409122: /* 409122: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409124: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 409129: je 0x409138 */
  if (zf) goto L_409138;
L_40912b: /* 40912b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 40912f: call 0x408ffe */
  esp -= 4; W32(esp, 0x409134u); SPILL(); f_408ffe(); if (g_unwind) return; RELOAD();
/* 409134: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 409135: ret 4 */
  esp += 8; SPILL(); return;
L_409138: /* 409138: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40913a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40913d: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 409140: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 409144: call 0x408ffe */
  esp -= 4; W32(esp, 0x409149u); SPILL(); f_408ffe(); if (g_unwind) return; RELOAD();
/* 409149: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 40914c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40914e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409151: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 409152: ret 4 */
  esp += 8; SPILL(); return;
L_409155: /* 409155: fdivr dword ptr [esp + 8] */
  ST0 = (F32((uint32_t)(esp + 0x8u))) / ST0;
/* 409159: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40915a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_40915d(void) {
  LOAD_REGS();
L_40915d: /* 40915d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40915e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 409162: and eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409167: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40916c: je 0x4091a1 */
  if (zf) goto L_4091a1;
L_40916e: /* 40916e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409170: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 409175: je 0x409184 */
  if (zf) goto L_409184;
L_409177: /* 409177: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 40917b: call 0x408ffe */
  esp -= 4; W32(esp, 0x409180u); SPILL(); f_408ffe(); if (g_unwind) return; RELOAD();
/* 409180: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 409181: ret 8 */
  esp += 12; SPILL(); return;
L_409184: /* 409184: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409186: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409189: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 40918c: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 409190: call 0x408ffe */
  esp -= 4; W32(esp, 0x409195u); SPILL(); f_408ffe(); if (g_unwind) return; RELOAD();
/* 409195: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 409198: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40919a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40919d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40919e: ret 8 */
  esp += 12; SPILL(); return;
L_4091a1: /* 4091a1: fdivr qword ptr [esp + 8] */
  ST0 = (F64((uint32_t)(esp + 0x8u))) / ST0;
/* 4091a5: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4091a6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4091a9(void) {
  LOAD_REGS();
L_4091a9: /* 4091a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4091aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4091ac: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 4091b1: je 0x4091c0 */
  if (zf) goto L_4091c0;
L_4091b3: /* 4091b3: fild word ptr [esp + 8] */
  { double v = (double)(int16_t)R16((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4091b7: call 0x408ffe */
  esp -= 4; W32(esp, 0x4091bcu); SPILL(); f_408ffe(); if (g_unwind) return; RELOAD();
/* 4091bc: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4091bd: ret 4 */
  esp += 8; SPILL(); return;
L_4091c0: /* 4091c0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4091c2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4091c5: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 4091c8: fild word ptr [esp + 0x14] */
  { double v = (double)(int16_t)R16((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4091cc: call 0x408ffe */
  esp -= 4; W32(esp, 0x4091d1u); SPILL(); f_408ffe(); if (g_unwind) return; RELOAD();
/* 4091d1: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 4091d4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4091d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4091d9: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4091da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4091dd(void) {
  LOAD_REGS();
L_4091dd: /* 4091dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4091de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4091e0: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 4091e5: je 0x4091f4 */
  if (zf) goto L_4091f4;
L_4091e7: /* 4091e7: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4091eb: call 0x408ffe */
  esp -= 4; W32(esp, 0x4091f0u); SPILL(); f_408ffe(); if (g_unwind) return; RELOAD();
/* 4091f0: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4091f1: ret 4 */
  esp += 8; SPILL(); return;
L_4091f4: /* 4091f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4091f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4091f9: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 4091fc: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 409200: call 0x408ffe */
  esp -= 4; W32(esp, 0x409205u); SPILL(); f_408ffe(); if (g_unwind) return; RELOAD();
/* 409205: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 409208: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40920a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40920d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40920e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_409211(void) {
  LOAD_REGS();
L_409211: /* 409211: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 409212: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409215: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 409218: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 40921c: call 0x408a35 */
  esp -= 4; W32(esp, 0x409221u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 409221: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409224: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 409225: ret  */
  esp += 4; SPILL(); return;
}

void f_409226(void) {
  LOAD_REGS();
L_409226: /* 409226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 409227: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40922a: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 40922e: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 409231: call 0x408a35 */
  esp -= 4; W32(esp, 0x409236u); SPILL(); f_408a35(); if (g_unwind) return; RELOAD();
/* 409236: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409239: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40923a: ret  */
  esp += 4; SPILL(); return;
}

void f_40923b(void) {
  LOAD_REGS();
L_40923b: /* 40923b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40923c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40923d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40923e: mov eax, dword ptr [esp + 0x16] */
  eax = R32((uint32_t)(esp + 0x16u));
/* 409242: xor eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 409247: test eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40924c: jne 0x4093d5 */
  if (!zf) goto L_4093d5;
L_409252: /* 409252: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 409255: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409258: cmp byte ptr [eax + 0x44e2bc], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44e2bcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40925f: je 0x4093d5 */
  if (zf) goto L_4093d5;
L_409265: /* 409265: mov eax, dword ptr [esp + 0x16] */
  eax = R32((uint32_t)(esp + 0x16u));
/* 409269: and eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40926e: cmp eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 409273: je 0x4093d5 */
  if (zf) goto L_4093d5;
L_409279: /* 409279: mov eax, dword ptr [esp + 0x2e] */
  eax = R32((uint32_t)(esp + 0x2eu));
/* 40927d: and eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 409282: je 0x4093d5 */
  if (zf) goto L_4093d5;
L_409288: /* 409288: cmp eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40928d: je 0x4093d5 */
  if (zf) goto L_4093d5;
L_409293: /* 409293: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 409297: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 409299: jne 0x4093d5 */
  if (!zf) goto L_4093d5;
L_40929f: /* 40929f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4092a3: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 4092a5: jne 0x4093d5 */
  if (!zf) goto L_4093d5;
L_4092ab: /* 4092ab: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4092af: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4092b4: add eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4092b7: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 4092bb: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4092c1: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  ebx = r;
  }
/* 4092c3: ja 0x409323 */
  if ((!cf && !zf)) goto L_409323;
L_4092c5: /* 4092c5: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4092c9: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4092ce: add eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4092d1: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 4092d5: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4092db: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 4092dd: js 0x4093d5 */
  if (sf) goto L_4093d5;
L_4092e3: /* 4092e3: fld xword ptr [esp + 0x28] */
  { double v = F80((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 4092e7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4092eb: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 4092ef: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4092f5: mov ecx, ebx */
  ecx = ebx;
/* 4092f7: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4092f9: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4092fc: or ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 4092ff: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 409301: mov ebx, eax */
  ebx = eax;
/* 409303: and ebx, 0x8000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 409309: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 40930b: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 40930f: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 409313: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 409317: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409319: fprem  */
  fpu_prem(0);
/* 40931b: fstp xword ptr [esp + 0x28] */
  WF80((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 40931f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409321: jmp 0x4092c5 */
  goto L_4092c5;
L_409323: /* 409323: test edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 409329: jne 0x409333 */
  if (!zf) goto L_409333;
L_40932b: /* 40932b: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 40932f: fstp xword ptr [esp + 0x1c] */
  WF80((uint32_t)(esp + 0x1cu), ST0); FPOP();
L_409333: /* 409333: fnstcw word ptr [esp + 0x34] */
  W16((uint32_t)(esp + 0x34u), FCW);
/* 409337: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 40933b: or eax, 0x33f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 409340: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 409344: fldcw word ptr [esp + 0x38] */
  FCW = R16((uint32_t)(esp + 0x38u));
/* 409348: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 40934c: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409351: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 409355: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 40935b: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 40935d: and ebx, 0x3f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 409360: or ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 409363: add ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 409366: mov ecx, ebx */
  ecx = ebx;
/* 409368: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 40936c: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 409370: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 409376: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40937b: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 40937d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 409381: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 409385: fabs  */
  ST0 = fabs(ST0);
/* 409387: fld xword ptr [esp + 0x28] */
  { double v = F80((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 40938b: fabs  */
  ST0 = fabs(ST0);
L_40938d: /* 40938d: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 40938f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409391: and eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 409396: jne 0x40939a */
  if (!zf) goto L_40939a;
L_409398: /* 409398: fsub st(1) */
  ST0 = ST0 - STI(1);
L_40939a: /* 40939a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40939c: fmul qword ptr [0x44e2dc] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2dcu)));
/* 4093a2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4093a4: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4093a7: jne 0x40938d */
  if (!zf) goto L_40938d;
L_4093a9: /* 4093a9: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 4093ad: fstp xword ptr [esp + 0x28] */
  WF80((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4093b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4093b3: fld xword ptr [esp + 0x1c] */
  { double v = F80((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4093b7: fld xword ptr [0x44e2e4] */
  { double v = F80((uint32_t)(0x44e2e4u)); FPUSH(v); }
/* 4093bd: fprem  */
  fpu_prem(0);
/* 4093bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4093c1: fld xword ptr [esp + 0x28] */
  { double v = F80((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 4093c5: fldcw word ptr [esp + 0x34] */
  FCW = R16((uint32_t)(esp + 0x34u));
/* 4093c9: and ebx, 0x8000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebx = r;
  }
/* 4093cf: je 0x4093df */
  if (zf) goto L_4093df;
L_4093d1: /* 4093d1: fchs  */
  ST0 = -ST0;
/* 4093d3: jmp 0x4093df */
  goto L_4093df;
L_4093d5: /* 4093d5: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4093d9: fld xword ptr [esp + 0x28] */
  { double v = F80((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 4093dd: fprem  */
  fpu_prem(0);
L_4093df: /* 4093df: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4093e5: je 0x40943d */
  if (zf) goto L_40943d;
L_4093e7: /* 4093e7: fnstsw word ptr [esp + 0x3c] */
  W16((uint32_t)(esp + 0x3cu), fpu_sw());
/* 4093eb: test edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4093f1: je 0x409412 */
  if (zf) goto L_409412;
L_4093f3: /* 4093f3: fnstcw word ptr [esp + 0x34] */
  W16((uint32_t)(esp + 0x34u), FCW);
/* 4093f7: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 4093fb: or eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 409400: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 409404: fldcw word ptr [esp + 0x38] */
  FCW = R16((uint32_t)(esp + 0x38u));
/* 409408: fmul qword ptr [0x44e2d4] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2d4u)));
/* 40940e: fldcw word ptr [esp + 0x34] */
  FCW = R16((uint32_t)(esp + 0x34u));
L_409412: /* 409412: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 409416: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409418: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40941a: fld xword ptr [esp + 0x1c] */
  { double v = F80((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 40941e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409420: and eax, 0x4300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4300u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409425: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409428: fnstenv [esp] */
  fpu_stenv((uint32_t)(esp));
/* 40942b: and dword ptr [esp + 4], 0xbcff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0xbcffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x4u), r);
  }
/* 409433: or dword ptr [esp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + 0x4u), r);
  }
/* 409437: fldenv [esp] */
  fpu_ldenv((uint32_t)(esp));
/* 40943a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40943d: /* 40943d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40943e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40943f: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 409440: ret  */
  esp += 4; SPILL(); return;
}

void f_409441(void) {
  LOAD_REGS();
L_409441: /* 409441: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 409442: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409445: fstp xword ptr [esp + 0x18] */
  WF80((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 409449: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 40944c: xor edx, edx */
  edx = 0;
/* 40944e: mov eax, dword ptr [esp + 6] */
  eax = R32((uint32_t)(esp + 0x6u));
/* 409452: test eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 409457: je 0x409463 */
  if (zf) goto L_409463;
L_409459: /* 409459: call 0x40923b */
  esp -= 4; W32(esp, 0x40945eu); SPILL(); f_40923b(); if (g_unwind) return; RELOAD();
/* 40945e: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409461: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 409462: ret  */
  esp += 4; SPILL(); return;
L_409463: /* 409463: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 409466: fld xword ptr [esp + 0x18] */
  { double v = F80((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 40946a: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 40946d: or eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 409471: je 0x4094ec */
  if (zf) goto L_4094ec;
L_409473: /* 409473: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409475: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 409479: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 40947c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40947e: or edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 409481: fnstcw word ptr [esp + 0x24] */
  W16((uint32_t)(esp + 0x24u), FCW);
/* 409485: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 409489: or eax, 0x33f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40948e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 409492: fldcw word ptr [esp + 0x28] */
  FCW = R16((uint32_t)(esp + 0x28u));
/* 409496: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 40949a: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40949f: cmp eax, 0x7fbe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fbeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4094a4: ja 0x4094be */
  if ((!cf && !zf)) goto L_4094be;
L_4094a6: /* 4094a6: or edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4094a9: fmul qword ptr [0x44e2cc] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2ccu)));
/* 4094af: fstp xword ptr [esp + 0x18] */
  WF80((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4094b3: fmul qword ptr [0x44e2cc] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2ccu)));
/* 4094b9: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 4094bc: jmp 0x4094de */
  goto L_4094de;
L_4094be: /* 4094be: fnstcw word ptr [esp + 0x24] */
  W16((uint32_t)(esp + 0x24u), FCW);
/* 4094c2: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 4094c6: or eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4094cb: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 4094cf: fldcw word ptr [esp + 0x28] */
  FCW = R16((uint32_t)(esp + 0x28u));
/* 4094d3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4094d5: fmul qword ptr [0x44e2cc] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2ccu)));
/* 4094db: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
L_4094de: /* 4094de: fldcw word ptr [esp + 0x24] */
  FCW = R16((uint32_t)(esp + 0x24u));
/* 4094e2: call 0x40923b */
  esp -= 4; W32(esp, 0x4094e7u); SPILL(); f_40923b(); if (g_unwind) return; RELOAD();
/* 4094e7: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4094ea: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4094eb: ret  */
  esp += 4; SPILL(); return;
L_4094ec: /* 4094ec: fprem  */
  fpu_prem(0);
/* 4094ee: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4094f1: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4094f2: ret  */
  esp += 4; SPILL(); return;
}

void f_4094f3(void) {
  LOAD_REGS();
L_4094f3: /* 4094f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4094f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4094f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4094f6: mov eax, dword ptr [esp + 0x16] */
  eax = R32((uint32_t)(esp + 0x16u));
/* 4094fa: xor eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4094ff: test eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 409504: jne 0x40968d */
  if (!zf) goto L_40968d;
L_40950a: /* 40950a: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 40950d: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409510: cmp byte ptr [eax + 0x44e2bc], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44e2bcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 409517: je 0x40968d */
  if (zf) goto L_40968d;
L_40951d: /* 40951d: mov eax, dword ptr [esp + 0x16] */
  eax = R32((uint32_t)(esp + 0x16u));
/* 409521: and eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409526: cmp eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40952b: je 0x40968d */
  if (zf) goto L_40968d;
L_409531: /* 409531: mov eax, dword ptr [esp + 0x2e] */
  eax = R32((uint32_t)(esp + 0x2eu));
/* 409535: and eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 40953a: je 0x40968d */
  if (zf) goto L_40968d;
L_409540: /* 409540: cmp eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 409545: je 0x40968d */
  if (zf) goto L_40968d;
L_40954b: /* 40954b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 40954f: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 409551: jne 0x40968d */
  if (!zf) goto L_40968d;
L_409557: /* 409557: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 40955b: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 40955d: jne 0x40968d */
  if (!zf) goto L_40968d;
L_409563: /* 409563: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 409567: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40956c: add eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40956f: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 409573: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 409579: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  ebx = r;
  }
/* 40957b: ja 0x4095db */
  if ((!cf && !zf)) goto L_4095db;
L_40957d: /* 40957d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 409581: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409586: add eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 409589: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 40958d: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 409593: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 409595: js 0x40968d */
  if (sf) goto L_40968d;
L_40959b: /* 40959b: fld xword ptr [esp + 0x28] */
  { double v = F80((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 40959f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4095a3: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 4095a7: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4095ad: mov ecx, ebx */
  ecx = ebx;
/* 4095af: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4095b1: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4095b4: or ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 4095b7: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4095b9: mov ebx, eax */
  ebx = eax;
/* 4095bb: and ebx, 0x8000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4095c1: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4095c3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 4095c7: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4095cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 4095cf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4095d1: fprem  */
  fpu_prem(0);
/* 4095d3: fstp xword ptr [esp + 0x28] */
  WF80((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4095d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4095d9: jmp 0x40957d */
  goto L_40957d;
L_4095db: /* 4095db: test ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4095e1: jne 0x4095eb */
  if (!zf) goto L_4095eb;
L_4095e3: /* 4095e3: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4095e7: fstp xword ptr [esp + 0x1c] */
  WF80((uint32_t)(esp + 0x1cu), ST0); FPOP();
L_4095eb: /* 4095eb: fnstcw word ptr [esp + 0x34] */
  W16((uint32_t)(esp + 0x34u), FCW);
/* 4095ef: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 4095f3: or eax, 0x33f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4095f8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 4095fc: fldcw word ptr [esp + 0x38] */
  FCW = R16((uint32_t)(esp + 0x38u));
/* 409600: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 409604: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409609: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 40960d: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 409613: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 409615: and ebx, 0x3f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 409618: or ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 40961b: add ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 40961e: mov ecx, ebx */
  ecx = ebx;
/* 409620: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 409624: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 409628: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 40962e: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409633: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 409635: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 409639: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 40963d: fabs  */
  ST0 = fabs(ST0);
/* 40963f: fld xword ptr [esp + 0x28] */
  { double v = F80((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 409643: fabs  */
  ST0 = fabs(ST0);
L_409645: /* 409645: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 409647: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 409649: and eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 40964e: jne 0x409652 */
  if (!zf) goto L_409652;
L_409650: /* 409650: fsub st(1) */
  ST0 = ST0 - STI(1);
L_409652: /* 409652: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409654: fmul qword ptr [0x44e2dc] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2dcu)));
/* 40965a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40965c: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 40965f: jne 0x409645 */
  if (!zf) goto L_409645;
L_409661: /* 409661: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 409665: fstp xword ptr [esp + 0x28] */
  WF80((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 409669: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40966b: fld xword ptr [esp + 0x1c] */
  { double v = F80((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 40966f: fld xword ptr [0x44e2e4] */
  { double v = F80((uint32_t)(0x44e2e4u)); FPUSH(v); }
/* 409675: fprem1  */
  fpu_prem(1);
/* 409677: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409679: fld xword ptr [esp + 0x28] */
  { double v = F80((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 40967d: fldcw word ptr [esp + 0x34] */
  FCW = R16((uint32_t)(esp + 0x34u));
/* 409681: and ebx, 0x8000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebx = r;
  }
/* 409687: je 0x409697 */
  if (zf) goto L_409697;
L_409689: /* 409689: fchs  */
  ST0 = -ST0;
/* 40968b: jmp 0x409697 */
  goto L_409697;
L_40968d: /* 40968d: fld xword ptr [esp + 0x10] */
  { double v = F80((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 409691: fld xword ptr [esp + 0x28] */
  { double v = F80((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 409695: fprem1  */
  fpu_prem(1);
L_409697: /* 409697: test edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40969d: je 0x4096f5 */
  if (zf) goto L_4096f5;
L_40969f: /* 40969f: fnstsw word ptr [esp + 0x3c] */
  W16((uint32_t)(esp + 0x3cu), fpu_sw());
/* 4096a3: test edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4096a9: je 0x4096ca */
  if (zf) goto L_4096ca;
L_4096ab: /* 4096ab: fnstcw word ptr [esp + 0x34] */
  W16((uint32_t)(esp + 0x34u), FCW);
/* 4096af: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 4096b3: or eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4096b8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 4096bc: fldcw word ptr [esp + 0x38] */
  FCW = R16((uint32_t)(esp + 0x38u));
/* 4096c0: fmul qword ptr [0x44e2d4] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2d4u)));
/* 4096c6: fldcw word ptr [esp + 0x34] */
  FCW = R16((uint32_t)(esp + 0x34u));
L_4096ca: /* 4096ca: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4096ce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4096d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4096d2: fld xword ptr [esp + 0x1c] */
  { double v = F80((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 4096d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4096d8: and eax, 0x4300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4300u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4096dd: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4096e0: fnstenv [esp] */
  fpu_stenv((uint32_t)(esp));
/* 4096e3: and dword ptr [esp + 4], 0xbcff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0xbcffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x4u), r);
  }
/* 4096eb: or dword ptr [esp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + 0x4u), r);
  }
/* 4096ef: fldenv [esp] */
  fpu_ldenv((uint32_t)(esp));
/* 4096f2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4096f5: /* 4096f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4096f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4096f7: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4096f8: ret  */
  esp += 4; SPILL(); return;
}

void f_4096f9(void) {
  LOAD_REGS();
L_4096f9: /* 4096f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4096fa: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4096fd: fstp xword ptr [esp + 0x18] */
  WF80((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 409701: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 409704: mov edx, 0 */
  edx = 0x0u;
/* 409709: mov eax, dword ptr [esp + 6] */
  eax = R32((uint32_t)(esp + 0x6u));
/* 40970d: test eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 409712: je 0x40971e */
  if (zf) goto L_40971e;
L_409714: /* 409714: call 0x4094f3 */
  esp -= 4; W32(esp, 0x409719u); SPILL(); f_4094f3(); if (g_unwind) return; RELOAD();
/* 409719: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40971c: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 40971d: ret  */
  esp += 4; SPILL(); return;
L_40971e: /* 40971e: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 409721: fld xword ptr [esp + 0x18] */
  { double v = F80((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 409725: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 409728: or eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 40972c: je 0x4097a7 */
  if (zf) goto L_4097a7;
L_40972e: /* 40972e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409730: fstp xword ptr [esp + 0xc] */
  WF80((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 409734: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 409737: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409739: or edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 40973c: fnstcw word ptr [esp + 0x24] */
  W16((uint32_t)(esp + 0x24u), FCW);
/* 409740: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 409744: or eax, 0x33f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33fu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 409749: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 40974d: fldcw word ptr [esp + 0x28] */
  FCW = R16((uint32_t)(esp + 0x28u));
/* 409751: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 409755: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40975a: cmp eax, 0x7fbe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fbeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40975f: ja 0x409779 */
  if ((!cf && !zf)) goto L_409779;
L_409761: /* 409761: or edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 409764: fmul qword ptr [0x44e2cc] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2ccu)));
/* 40976a: fstp xword ptr [esp + 0x18] */
  WF80((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 40976e: fmul qword ptr [0x44e2cc] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2ccu)));
/* 409774: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
/* 409777: jmp 0x409799 */
  goto L_409799;
L_409779: /* 409779: fnstcw word ptr [esp + 0x24] */
  W16((uint32_t)(esp + 0x24u), FCW);
/* 40977d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 409781: or eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 409786: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 40978a: fldcw word ptr [esp + 0x28] */
  FCW = R16((uint32_t)(esp + 0x28u));
/* 40978e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409790: fmul qword ptr [0x44e2cc] */
  ST0 = ST0 * (F64((uint32_t)(0x44e2ccu)));
/* 409796: fstp xword ptr [esp] */
  WF80((uint32_t)(esp), ST0); FPOP();
L_409799: /* 409799: fldcw word ptr [esp + 0x24] */
  FCW = R16((uint32_t)(esp + 0x24u));
/* 40979d: call 0x4094f3 */
  esp -= 4; W32(esp, 0x4097a2u); SPILL(); f_4094f3(); if (g_unwind) return; RELOAD();
/* 4097a2: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4097a5: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4097a6: ret  */
  esp += 4; SPILL(); return;
L_4097a7: /* 4097a7: fprem  */
  fpu_prem(0);
/* 4097a9: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4097ac: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 4097ad: ret  */
  esp += 4; SPILL(); return;
}

void f_4097ae(void) {
  LOAD_REGS();
L_4097ae: /* 4097ae: call 0x409441 */
  esp -= 4; W32(esp, 0x4097b3u); SPILL(); f_409441(); if (g_unwind) return; RELOAD();
/* 4097b3: ret  */
  esp += 4; SPILL(); return;
}

void f_4097b4(void) {
  LOAD_REGS();
L_4097b4: /* 4097b4: call 0x4096f9 */
  esp -= 4; W32(esp, 0x4097b9u); SPILL(); f_4096f9(); if (g_unwind) return; RELOAD();
/* 4097b9: ret  */
  esp += 4; SPILL(); return;
}

void f_4097ba(void) {
  LOAD_REGS();
L_4097ba: /* 4097ba: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* 4097bc: ret  */
  esp += 4; SPILL(); return;
}

void f_4097bd(void) {
  LOAD_REGS();
L_4097bd: /* 4097bd: fptan  */
  ST0 = tan(ST0); FPUSH(1.0); FSW_CC &= ~0x400;
/* 4097bf: ret  */
  esp += 4; SPILL(); return;
}

void f_4097c0(void) { hle_ceil(); }

void f_4098db(void) { hle_floor(); }

void f_4099fa(void) { hle_modf(); }

void f_409b40(void) {
  LOAD_REGS();
L_409b40: /* 409b40: cmp byte ptr [edx + 0xe], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0xeu))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 409b44: jne 0x409b57 */
  if (!zf) goto L_409b57;
L_409b46: /* 409b46: mov bx, word ptr [ebp - 0xa4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffff5cu))) & 0xffffu);
/* 409b4d: or bh, 2 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409b50: and bh, 0xfe */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409b53: mov bl, 0x3f */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3fu) & 0xffu);
/* 409b55: jmp 0x409b5b */
  goto L_409b5b;
L_409b57: /* 409b57: mov bx, 0x133f */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(0x133fu) & 0xffffu);
L_409b5b: /* 409b5b: mov word ptr [ebp - 0xa2], bx */
  W16((uint32_t)(ebp + 0xffffff5eu), (ebx & 0xffffu));
/* 409b62: fldcw word ptr [ebp - 0xa2] */
  FCW = R16((uint32_t)(ebp + 0xffffff5eu));
/* 409b68: mov ebx, 0x44e9ac */
  ebx = 0x44e9acu;
/* 409b6d: fxam  */
  fpu_xam();
/* 409b6f: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 409b75: wait  */
/* 409b76: fnstsw word ptr [ebp - 0xa0] */
  W16((uint32_t)(ebp + 0xffffff60u), fpu_sw());
/* 409b7c: mov byte ptr [ebp - 0x90], 0 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 409b83: wait  */
/* 409b84: mov cl, byte ptr [ebp - 0x9f] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff61u))) & 0xffu);
/* 409b8a: shl cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409b8c: sar cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((int32_t)(int8_t)a >> c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409b8e: rol cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 1;
  uint32_t cc = c % 8;
  uint8_t r = (uint8_t)(cc ? (((uint32_t)a << cc) | ((uint32_t)a >> (8 - cc))) : a);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409b90: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 409b92: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409b94: xlatb  */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8(ebx + (eax & 0xff))) & 0xffu);
/* 409b95: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 409b98: and ecx, 0x404 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 409b9e: mov ebx, edx */
  ebx = edx;
/* 409ba0: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 409ba2: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 409ba5: jmp dword ptr [ebx] */
  { uint32_t t = R32((uint32_t)(ebx)); SPILL(); call_ind(t); return; }
}

void f_409ba7(void) {
  LOAD_REGS();
L_409ba7: /* 409ba7: cmp byte ptr [edx + 0xe], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0xeu))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 409bab: jne 0x409bbe */
  if (!zf) goto L_409bbe;
L_409bad: /* 409bad: mov bx, word ptr [ebp - 0xa4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffff5cu))) & 0xffffu);
/* 409bb4: or bh, 2 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409bb7: and bh, 0xfe */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409bba: mov bl, 0x3f */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3fu) & 0xffu);
/* 409bbc: jmp 0x409bc2 */
  goto L_409bc2;
L_409bbe: /* 409bbe: mov bx, 0x133f */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(0x133fu) & 0xffffu);
L_409bc2: /* 409bc2: mov word ptr [ebp - 0xa2], bx */
  W16((uint32_t)(ebp + 0xffffff5eu), (ebx & 0xffffu));
/* 409bc9: fldcw word ptr [ebp - 0xa2] */
  FCW = R16((uint32_t)(ebp + 0xffffff5eu));
/* 409bcf: mov ebx, 0x44e9ac */
  ebx = 0x44e9acu;
/* 409bd4: fxam  */
  fpu_xam();
/* 409bd6: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 409bdc: wait  */
/* 409bdd: fnstsw word ptr [ebp - 0xa0] */
  W16((uint32_t)(ebp + 0xffffff60u), fpu_sw());
/* 409be3: mov byte ptr [ebp - 0x90], 0 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 409bea: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409bec: mov cl, byte ptr [ebp - 0x9f] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff61u))) & 0xffu);
/* 409bf2: fxam  */
  fpu_xam();
/* 409bf4: wait  */
/* 409bf5: fnstsw word ptr [ebp - 0xa0] */
  W16((uint32_t)(ebp + 0xffffff60u), fpu_sw());
/* 409bfb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409bfd: mov ch, byte ptr [ebp - 0x9f] */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xffffff61u))) & 0xffu) << 8);
/* 409c03: shl ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409c05: sar ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((int32_t)(int8_t)a >> c);
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409c07: rol ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint32_t c = 1;
  uint32_t cc = c % 8;
  uint8_t r = (uint8_t)(cc ? (((uint32_t)a << cc) | ((uint32_t)a >> (8 - cc))) : a);
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409c09: mov al, ch */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((ecx >> 8) & 0xffu)) & 0xffu);
/* 409c0b: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409c0d: xlatb  */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8(ebx + (eax & 0xff))) & 0xffu);
/* 409c0e: mov ah, al */
  eax = (eax & 0xffff00ffu) | (((uint32_t)((eax & 0xffu)) & 0xffu) << 8);
/* 409c10: shl cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409c12: sar cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((int32_t)(int8_t)a >> c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409c14: rol cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 1;
  uint32_t cc = c % 8;
  uint8_t r = (uint8_t)(cc ? (((uint32_t)a << cc) | ((uint32_t)a >> (8 - cc))) : a);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409c16: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 409c18: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409c1a: xlatb  */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8(ebx + (eax & 0xff))) & 0xffu);
/* 409c1b: shl ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409c1d: shl ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 409c1f: or al, ah */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409c21: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 409c24: and ecx, 0x404 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 409c2a: mov ebx, edx */
  ebx = edx;
/* 409c2c: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 409c2e: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 409c31: jmp dword ptr [ebx] */
  { uint32_t t = R32((uint32_t)(ebx)); SPILL(); call_ind(t); return; }
}

void f_409c38(void) {
  LOAD_REGS();
L_409c38: /* 409c38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c3c: fldz  */
  FPUSH(0.0);
/* 409c3e: ret  */
  esp += 4; SPILL(); return;
}

void f_409c3f(void) {
  LOAD_REGS();
L_409c3f: /* 409c3f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c41: fld1  */
  FPUSH(1.0);
/* 409c43: ret  */
  esp += 4; SPILL(); return;
}

void f_409c44(void) {
  LOAD_REGS();
L_409c44: /* 409c44: fstp xword ptr [ebp - 0x9e] */
  WF80((uint32_t)(ebp + 0xffffff62u), ST0); FPOP();
/* 409c4a: fld xword ptr [ebp - 0x9e] */
  { double v = F80((uint32_t)(ebp + 0xffffff62u)); FPUSH(v); }
/* 409c50: test byte ptr [ebp - 0x97], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff69u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 409c57: je 0x409c61 */
  if (zf) goto L_409c61;
L_409c59: /* 409c59: mov byte ptr [ebp - 0x90], 7 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x7u);
/* 409c60: ret  */
  esp += 4; SPILL(); return;
L_409c61: /* 409c61: mov byte ptr [ebp - 0x90], 1 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x1u);
/* 409c68: fadd qword ptr [0x44e9a4] */
  ST0 = ST0 + (F64((uint32_t)(0x44e9a4u)));
/* 409c6e: ret  */
  esp += 4; SPILL(); return;
}

void f_409c6f(void) {
  LOAD_REGS();
L_409c6f: /* 409c6f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
  SPILL(); f_409c71(); return;
}

void f_409c71(void) {
  LOAD_REGS();
L_409c71: /* 409c71: fstp xword ptr [ebp - 0x9e] */
  WF80((uint32_t)(ebp + 0xffffff62u), ST0); FPOP();
/* 409c77: fld xword ptr [ebp - 0x9e] */
  { double v = F80((uint32_t)(ebp + 0xffffff62u)); FPUSH(v); }
/* 409c7d: test byte ptr [ebp - 0x97], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff69u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 409c84: je 0x409c8f */
  if (zf) goto L_409c8f;
L_409c86: /* 409c86: mov byte ptr [ebp - 0x90], 7 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x7u);
/* 409c8d: jmp 0x409c96 */
  goto L_409c96;
L_409c8f: /* 409c8f: mov byte ptr [ebp - 0x90], 1 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x1u);
L_409c96: /* 409c96: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 409c98: ret  */
  esp += 4; SPILL(); return;
}

void f_409c99(void) {
  LOAD_REGS();
L_409c99: /* 409c99: fstp xword ptr [ebp - 0x9e] */
  WF80((uint32_t)(ebp + 0xffffff62u), ST0); FPOP();
/* 409c9f: fld xword ptr [ebp - 0x9e] */
  { double v = F80((uint32_t)(ebp + 0xffffff62u)); FPUSH(v); }
/* 409ca5: test byte ptr [ebp - 0x97], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff69u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 409cac: je 0x409cce */
  if (zf) goto L_409cce;
L_409cae: /* 409cae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409cb0: fstp xword ptr [ebp - 0x9e] */
  WF80((uint32_t)(ebp + 0xffffff62u), ST0); FPOP();
/* 409cb6: fld xword ptr [ebp - 0x9e] */
  { double v = F80((uint32_t)(ebp + 0xffffff62u)); FPUSH(v); }
/* 409cbc: test byte ptr [ebp - 0x97], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff69u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 409cc3: je 0x409cce */
  if (zf) goto L_409cce;
L_409cc5: /* 409cc5: mov byte ptr [ebp - 0x90], 7 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x7u);
/* 409ccc: jmp 0x409cd5 */
  goto L_409cd5;
L_409cce: /* 409cce: mov byte ptr [ebp - 0x90], 1 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x1u);
L_409cd5: /* 409cd5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 409cd7: ret  */
  esp += 4; SPILL(); return;
}

void f_409cd8(void) {
  LOAD_REGS();
L_409cd8: /* 409cd8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409cda: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409cdc: fld xword ptr [0x44e990] */
  { double v = F80((uint32_t)(0x44e990u)); FPUSH(v); }
/* 409ce2: cmp byte ptr [ebp - 0x90], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff70u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 409ce9: jg 0x409cf2 */
  if ((!zf && sf == of)) goto L_409cf2;
L_409ceb: /* 409ceb: mov byte ptr [ebp - 0x90], 1 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x1u);
L_409cf2: /* 409cf2: or cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409cf4: ret  */
  esp += 4; SPILL(); return;
}

void f_409cfc(void) {
  LOAD_REGS();
L_409cfc: /* 409cfc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 409cfd: mov ebp, esp */
  ebp = esp;
/* 409cff: add esp, -0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409d02: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 409d05: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 409d08: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 409d0b: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 409d0e: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 409d11: jmp 0x409d1c */
  goto L_409d1c;
L_409d1c: /* 409d1c: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 409d1f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 409d22: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 409d25: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 409d28: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 409d2b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 409d2e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 409d31: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 409d34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 409d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 409d36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 409d37: call 0x4365aa */
  esp -= 4; W32(esp, 0x409d3cu); SPILL(); f_4365aa(); if (g_unwind) return; RELOAD();
/* 409d3c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409d3f: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 409d42: cmp word ptr [ebp + 8], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409d48: je 0x409d4d */
  if (zf) goto L_409d4d;
L_409d4a: /* 409d4a: fldcw word ptr [ebp + 8] */
  FCW = R16((uint32_t)(ebp + 0x8u));
L_409d4d: /* 409d4d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 409d4e: ret  */
  esp += 4; SPILL(); return;
}

void f_409d13(void) {
  LOAD_REGS();
L_409d13: /* 409d13: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 409d14: mov ebp, esp */
  ebp = esp;
/* 409d16: add esp, -0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409d19: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 409d1c: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 409d1f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 409d22: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 409d25: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 409d28: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 409d2b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 409d2e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 409d31: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 409d34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 409d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 409d36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 409d37: call 0x4365aa */
  esp -= 4; W32(esp, 0x409d3cu); SPILL(); f_4365aa(); if (g_unwind) return; RELOAD();
/* 409d3c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409d3f: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 409d42: cmp word ptr [ebp + 8], 0x27f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x27fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 409d48: je 0x409d4d */
  if (zf) goto L_409d4d;
L_409d4a: /* 409d4a: fldcw word ptr [ebp + 8] */
  FCW = R16((uint32_t)(ebp + 0x8u));
L_409d4d: /* 409d4d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 409d4e: ret  */
  esp += 4; SPILL(); return;
}

void f_409d4f(void) {
  LOAD_REGS();
L_409d4f: /* 409d4f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 409d51: frndint  */
  ST0 = fpu_round(ST0);
/* 409d53: fsubr st(1), st(0) */
  STI(1) = ST0 - STI(1);
/* 409d55: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409d57: fchs  */
  ST0 = -ST0;
/* 409d59: f2xm1  */
  ST0 = exp2(ST0) - 1.0;
/* 409d5b: fld1  */
  FPUSH(1.0);
/* 409d5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 409d5f: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 409d61: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 409d63: ret  */
  esp += 4; SPILL(); return;
}

void f_409d64(void) {
  LOAD_REGS();
L_409d64: /* 409d64: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 409d68: and edx, 0x300 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 409d6e: or edx, 0x7f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 409d71: mov word ptr [esp + 6], dx */
  W16((uint32_t)(esp + 0x6u), (edx & 0xffffu));
/* 409d76: fldcw word ptr [esp + 6] */
  FCW = R16((uint32_t)(esp + 0x6u));
/* 409d7a: ret  */
  esp += 4; SPILL(); return;
}

void f_409d7b(void) {
  LOAD_REGS();
L_409d7b: /* 409d7b: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 409d80: je 0x409d88 */
  if (zf) goto L_409d88;
L_409d82: /* 409d82: mov eax, 7 */
  eax = 0x7u;
/* 409d87: ret  */
  esp += 4; SPILL(); return;
L_409d88: /* 409d88: fadd qword ptr [0x441350] */
  ST0 = ST0 + (F64((uint32_t)(0x441350u)));
/* 409d8e: mov eax, 1 */
  eax = 0x1u;
/* 409d93: ret  */
  esp += 4; SPILL(); return;
}

void f_409d94(void) {
  LOAD_REGS();
L_409d94: /* 409d94: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 409d97: and eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409d9c: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 409da1: je 0x409da6 */
  if (zf) goto L_409da6;
L_409da3: /* 409da3: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 409da5: ret  */
  esp += 4; SPILL(); return;
L_409da6: /* 409da6: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 409da9: sub esp, 0xa */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 409dac: or eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* 409db1: mov dword ptr [esp + 6], eax */
  W32((uint32_t)(esp + 0x6u), eax);
/* 409db5: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 409db8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 409dba: shld eax, ecx, 0xb */
  { uint32_t a = eax, b = ecx, c = (0xbu) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  eax = r;
  } }
/* 409dbe: shl ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 409dc1: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 409dc5: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 409dc8: fld xword ptr [esp] */
  { double v = F80((uint32_t)(esp)); FPUSH(v); }
/* 409dcb: add esp, 0xa */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 409dce: test eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  }
/* 409dd3: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 409dd6: ret  */
  esp += 4; SPILL(); return;
}

void f_409dd7(void) {
  LOAD_REGS();
L_409dd7: /* 409dd7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 409ddb: and eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 409de0: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 409de5: je 0x409de8 */
  if (zf) goto L_409de8;
L_409de7: /* 409de7: ret  */
  esp += 4; SPILL(); return;
L_409de8: /* 409de8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 409dec: ret  */
  esp += 4; SPILL(); return;
}

void f_409ee5(void) {
  LOAD_REGS();
L_409ee5: /* 409ee5: unpcklpd xmm7, xmm7 */
  guest_unsupported(0x409ee5); /* unpcklpd xmm7, xmm7 */
/* 409ee9: movapd xmm2, xmm7 */
  guest_unsupported(0x409ee9); /* movapd xmm2, xmm7 */
/* 409eed: andpd xmm2, xmmword ptr [0x4413b0] */
  guest_unsupported(0x409eed); /* andpd xmm2, xmmword ptr [0x4413b0] */
/* 409ef5: comisd xmm2, xmmword ptr [0x441520] */
  guest_unsupported(0x409ef5); /* comisd xmm2, xmmword ptr [0x441520] */
/* 409efd: jp 0x40a189 */
  if (pf) goto L_40a189;
L_409f03: /* 409f03: jae 0x40a15e */
  if (!cf) goto L_40a15e;
L_409f09: /* 409f09: comisd xmm2, xmmword ptr [0x441500] */
  guest_unsupported(0x409f09); /* comisd xmm2, xmmword ptr [0x441500] */
/* 409f11: jae 0x409f81 */
  if (!cf) goto L_409f81;
L_409f13: /* 409f13: comisd xmm2, xmmword ptr [0x441510] */
  guest_unsupported(0x409f13); /* comisd xmm2, xmmword ptr [0x441510] */
/* 409f1b: jb 0x40a117 */
  if (cf) goto L_40a117;
L_409f21: /* 409f21: movapd xmm1, xmm2 */
  guest_unsupported(0x409f21); /* movapd xmm1, xmm2 */
/* 409f25: mulpd xmm1, xmm2 */
  guest_unsupported(0x409f25); /* mulpd xmm1, xmm2 */
/* 409f29: movapd xmm3, xmm1 */
  guest_unsupported(0x409f29); /* movapd xmm3, xmm1 */
/* 409f2d: mulpd xmm3, xmm1 */
  guest_unsupported(0x409f2d); /* mulpd xmm3, xmm1 */
/* 409f31: movapd xmm5, xmmword ptr [0x441490] */
  guest_unsupported(0x409f31); /* movapd xmm5, xmmword ptr [0x441490] */
/* 409f39: mulpd xmm5, xmm3 */
  guest_unsupported(0x409f39); /* mulpd xmm5, xmm3 */
/* 409f3d: addpd xmm5, xmmword ptr [0x441480] */
  guest_unsupported(0x409f3d); /* addpd xmm5, xmmword ptr [0x441480] */
/* 409f45: mulpd xmm5, xmm3 */
  guest_unsupported(0x409f45); /* mulpd xmm5, xmm3 */
/* 409f49: addpd xmm5, xmmword ptr [0x441470] */
  guest_unsupported(0x409f49); /* addpd xmm5, xmmword ptr [0x441470] */
/* 409f51: mulpd xmm5, xmm3 */
  guest_unsupported(0x409f51); /* mulpd xmm5, xmm3 */
/* 409f55: addpd xmm5, xmmword ptr [0x441460] */
  guest_unsupported(0x409f55); /* addpd xmm5, xmmword ptr [0x441460] */
/* 409f5d: mulsd xmm5, xmm1 */
  guest_unsupported(0x409f5d); /* mulsd xmm5, xmm1 */
/* 409f61: movapd xmm3, xmm5 */
  guest_unsupported(0x409f61); /* movapd xmm3, xmm5 */
/* 409f65: shufpd xmm3, xmm3, 1 */
  guest_unsupported(0x409f65); /* shufpd xmm3, xmm3, 1 */
/* 409f6a: addsd xmm5, xmm3 */
  guest_unsupported(0x409f6a); /* addsd xmm5, xmm3 */
/* 409f6e: mulsd xmm5, xmm7 */
  guest_unsupported(0x409f6e); /* mulsd xmm5, xmm7 */
/* 409f72: subsd xmm7, xmm5 */
  guest_unsupported(0x409f72); /* subsd xmm7, xmm5 */
/* 409f76: movq qword ptr [esp + 4], xmm7 */
  guest_unsupported(0x409f76); /* movq qword ptr [esp + 4], xmm7 */
/* 409f7c: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 409f80: ret  */
  esp += 4; SPILL(); return;
L_409f81: /* 409f81: comisd xmm2, xmmword ptr [0x4414f0] */
  guest_unsupported(0x409f81); /* comisd xmm2, xmmword ptr [0x4414f0] */
/* 409f89: jae 0x40a01f */
  if (!cf) goto L_40a01f;
L_409f8f: /* 409f8f: movapd xmm1, xmm2 */
  guest_unsupported(0x409f8f); /* movapd xmm1, xmm2 */
/* 409f93: mulpd xmm1, xmm2 */
  guest_unsupported(0x409f93); /* mulpd xmm1, xmm2 */
/* 409f97: movapd xmm3, xmm1 */
  guest_unsupported(0x409f97); /* movapd xmm3, xmm1 */
/* 409f9b: mulpd xmm3, xmm1 */
  guest_unsupported(0x409f9b); /* mulpd xmm3, xmm1 */
/* 409f9f: movapd xmm5, xmmword ptr [0x441450] */
  guest_unsupported(0x409f9f); /* movapd xmm5, xmmword ptr [0x441450] */
/* 409fa7: mulpd xmm5, xmm3 */
  guest_unsupported(0x409fa7); /* mulpd xmm5, xmm3 */
/* 409fab: addpd xmm5, xmmword ptr [0x441440] */
  guest_unsupported(0x409fab); /* addpd xmm5, xmmword ptr [0x441440] */
/* 409fb3: mulpd xmm5, xmm3 */
  guest_unsupported(0x409fb3); /* mulpd xmm5, xmm3 */
/* 409fb7: addpd xmm5, xmmword ptr [0x441430] */
  guest_unsupported(0x409fb7); /* addpd xmm5, xmmword ptr [0x441430] */
/* 409fbf: mulpd xmm5, xmm3 */
  guest_unsupported(0x409fbf); /* mulpd xmm5, xmm3 */
/* 409fc3: addpd xmm5, xmmword ptr [0x441420] */
  guest_unsupported(0x409fc3); /* addpd xmm5, xmmword ptr [0x441420] */
/* 409fcb: mulpd xmm5, xmm3 */
  guest_unsupported(0x409fcb); /* mulpd xmm5, xmm3 */
/* 409fcf: addpd xmm5, xmmword ptr [0x441410] */
  guest_unsupported(0x409fcf); /* addpd xmm5, xmmword ptr [0x441410] */
/* 409fd7: mulpd xmm5, xmm3 */
  guest_unsupported(0x409fd7); /* mulpd xmm5, xmm3 */
/* 409fdb: addpd xmm5, xmmword ptr [0x441400] */
  guest_unsupported(0x409fdb); /* addpd xmm5, xmmword ptr [0x441400] */
/* 409fe3: mulpd xmm5, xmm3 */
  guest_unsupported(0x409fe3); /* mulpd xmm5, xmm3 */
/* 409fe7: addpd xmm5, xmmword ptr [0x4413f0] */
  guest_unsupported(0x409fe7); /* addpd xmm5, xmmword ptr [0x4413f0] */
/* 409fef: mulpd xmm5, xmm3 */
  guest_unsupported(0x409fef); /* mulpd xmm5, xmm3 */
/* 409ff3: addpd xmm5, xmmword ptr [0x4413e0] */
  guest_unsupported(0x409ff3); /* addpd xmm5, xmmword ptr [0x4413e0] */
/* 409ffb: mulsd xmm5, xmm1 */
  guest_unsupported(0x409ffb); /* mulsd xmm5, xmm1 */
/* 409fff: movapd xmm3, xmm5 */
  guest_unsupported(0x409fff); /* movapd xmm3, xmm5 */
/* 40a003: shufpd xmm3, xmm3, 1 */
  guest_unsupported(0x40a003); /* shufpd xmm3, xmm3, 1 */
/* 40a008: addsd xmm5, xmm3 */
  guest_unsupported(0x40a008); /* addsd xmm5, xmm3 */
/* 40a00c: mulsd xmm5, xmm7 */
  guest_unsupported(0x40a00c); /* mulsd xmm5, xmm7 */
/* 40a010: subsd xmm7, xmm5 */
  guest_unsupported(0x40a010); /* subsd xmm7, xmm5 */
/* 40a014: movq qword ptr [esp + 4], xmm7 */
  guest_unsupported(0x40a014); /* movq qword ptr [esp + 4], xmm7 */
/* 40a01a: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40a01e: ret  */
  esp += 4; SPILL(); return;
L_40a01f: /* 40a01f: movq xmm6, xmm7 */
  guest_unsupported(0x40a01f); /* movq xmm6, xmm7 */
/* 40a023: xorpd xmm6, xmm2 */
  guest_unsupported(0x40a023); /* xorpd xmm6, xmm2 */
/* 40a027: comisd xmm2, xmmword ptr [0x4414e0] */
  guest_unsupported(0x40a027); /* comisd xmm2, xmmword ptr [0x4414e0] */
/* 40a02f: jae 0x40a080 */
  if (!cf) goto L_40a080;
L_40a031: /* 40a031: movq xmm0, qword ptr [0x4414d0] */
  guest_unsupported(0x40a031); /* movq xmm0, qword ptr [0x4414d0] */
/* 40a039: movq xmm5, qword ptr [0x4413d0] */
  guest_unsupported(0x40a039); /* movq xmm5, qword ptr [0x4413d0] */
/* 40a041: movq xmm3, xmm2 */
  guest_unsupported(0x40a041); /* movq xmm3, xmm2 */
/* 40a045: addsd xmm3, xmm0 */
  guest_unsupported(0x40a045); /* addsd xmm3, xmm0 */
/* 40a049: psrlq xmm3, 0x2c */
  guest_unsupported(0x40a049); /* psrlq xmm3, 0x2c */
/* 40a04e: psubd xmm3, xmm5 */
  guest_unsupported(0x40a04e); /* psubd xmm3, xmm5 */
/* 40a052: movd eax, xmm3 */
  guest_unsupported(0x40a052); /* movd eax, xmm3 */
/* 40a056: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 40a059: movq xmm5, qword ptr [eax*8 + 0x446678] */
  guest_unsupported(0x40a059); /* movq xmm5, qword ptr [eax*8 + 0x446678] */
/* 40a062: movq xmm3, xmm2 */
  guest_unsupported(0x40a062); /* movq xmm3, xmm2 */
/* 40a066: subsd xmm2, xmm5 */
  guest_unsupported(0x40a066); /* subsd xmm2, xmm5 */
/* 40a06a: mulsd xmm3, xmm5 */
  guest_unsupported(0x40a06a); /* mulsd xmm3, xmm5 */
/* 40a06e: addsd xmm3, qword ptr [0x4414c0] */
  guest_unsupported(0x40a06e); /* addsd xmm3, qword ptr [0x4414c0] */
/* 40a076: divsd xmm2, xmm3 */
  guest_unsupported(0x40a076); /* divsd xmm2, xmm3 */
/* 40a07a: unpcklpd xmm2, xmm2 */
  guest_unsupported(0x40a07a); /* unpcklpd xmm2, xmm2 */
/* 40a07e: jmp 0x40a099 */
  goto L_40a099;
L_40a080: /* 40a080: mov eax, 0x300 */
  eax = 0x300u;
/* 40a085: movq xmm0, xmm2 */
  guest_unsupported(0x40a085); /* movq xmm0, xmm2 */
/* 40a089: movq xmm2, qword ptr [0x4414b0] */
  guest_unsupported(0x40a089); /* movq xmm2, qword ptr [0x4414b0] */
/* 40a091: divsd xmm2, xmm0 */
  guest_unsupported(0x40a091); /* divsd xmm2, xmm0 */
/* 40a095: unpcklpd xmm2, xmm2 */
  guest_unsupported(0x40a095); /* unpcklpd xmm2, xmm2 */
L_40a099: /* 40a099: movq xmm0, qword ptr [eax*8 + 0x446668] */
  guest_unsupported(0x40a099); /* movq xmm0, qword ptr [eax*8 + 0x446668] */
/* 40a0a2: movq xmm4, qword ptr [eax*8 + 0x446670] */
  guest_unsupported(0x40a0a2); /* movq xmm4, qword ptr [eax*8 + 0x446670] */
/* 40a0ab: movapd xmm1, xmm2 */
  guest_unsupported(0x40a0ab); /* movapd xmm1, xmm2 */
/* 40a0af: mulpd xmm1, xmm2 */
  guest_unsupported(0x40a0af); /* mulpd xmm1, xmm2 */
/* 40a0b3: movapd xmm3, xmm1 */
  guest_unsupported(0x40a0b3); /* movapd xmm3, xmm1 */
/* 40a0b7: mulpd xmm3, xmm1 */
  guest_unsupported(0x40a0b7); /* mulpd xmm3, xmm1 */
/* 40a0bb: movapd xmm5, xmmword ptr [0x441490] */
  guest_unsupported(0x40a0bb); /* movapd xmm5, xmmword ptr [0x441490] */
/* 40a0c3: mulpd xmm5, xmm3 */
  guest_unsupported(0x40a0c3); /* mulpd xmm5, xmm3 */
/* 40a0c7: addpd xmm5, xmmword ptr [0x441480] */
  guest_unsupported(0x40a0c7); /* addpd xmm5, xmmword ptr [0x441480] */
/* 40a0cf: mulpd xmm5, xmm3 */
  guest_unsupported(0x40a0cf); /* mulpd xmm5, xmm3 */
/* 40a0d3: addpd xmm5, xmmword ptr [0x441470] */
  guest_unsupported(0x40a0d3); /* addpd xmm5, xmmword ptr [0x441470] */
/* 40a0db: mulpd xmm5, xmm3 */
  guest_unsupported(0x40a0db); /* mulpd xmm5, xmm3 */
/* 40a0df: addpd xmm5, xmmword ptr [0x441460] */
  guest_unsupported(0x40a0df); /* addpd xmm5, xmmword ptr [0x441460] */
/* 40a0e7: mulsd xmm5, xmm1 */
  guest_unsupported(0x40a0e7); /* mulsd xmm5, xmm1 */
/* 40a0eb: movapd xmm3, xmm5 */
  guest_unsupported(0x40a0eb); /* movapd xmm3, xmm5 */
/* 40a0ef: shufpd xmm3, xmm3, 1 */
  guest_unsupported(0x40a0ef); /* shufpd xmm3, xmm3, 1 */
/* 40a0f4: addsd xmm5, xmm3 */
  guest_unsupported(0x40a0f4); /* addsd xmm5, xmm3 */
/* 40a0f8: mulsd xmm5, xmm2 */
  guest_unsupported(0x40a0f8); /* mulsd xmm5, xmm2 */
/* 40a0fc: subsd xmm5, xmm4 */
  guest_unsupported(0x40a0fc); /* subsd xmm5, xmm4 */
/* 40a100: subsd xmm5, xmm2 */
  guest_unsupported(0x40a100); /* subsd xmm5, xmm2 */
/* 40a104: subsd xmm0, xmm5 */
  guest_unsupported(0x40a104); /* subsd xmm0, xmm5 */
/* 40a108: orpd xmm0, xmm6 */
  guest_unsupported(0x40a108); /* orpd xmm0, xmm6 */
/* 40a10c: movq qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40a10c); /* movq qword ptr [esp + 4], xmm0 */
/* 40a112: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40a116: ret  */
  esp += 4; SPILL(); return;
L_40a117: /* 40a117: comisd xmm2, xmmword ptr [0x4414a0] */
  guest_unsupported(0x40a117); /* comisd xmm2, xmmword ptr [0x4414a0] */
/* 40a11f: jne 0x40a126 */
  if (!zf) goto L_40a126;
L_40a121: /* 40a121: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40a125: ret  */
  esp += 4; SPILL(); return;
L_40a126: /* 40a126: comisd xmm2, xmmword ptr [0x441530] */
  guest_unsupported(0x40a126); /* comisd xmm2, xmmword ptr [0x441530] */
/* 40a12e: jae 0x40a14d */
  if (!cf) goto L_40a14d;
L_40a130: /* 40a130: fld qword ptr [0x441540] */
  { double v = F64((uint32_t)(0x441540u)); FPUSH(v); }
/* 40a136: fmul qword ptr [0x441540] */
  ST0 = ST0 * (F64((uint32_t)(0x441540u)));
/* 40a13c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40a13f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 40a142: fld qword ptr [esp] */
  { double v = F64((uint32_t)(esp)); FPUSH(v); }
/* 40a145: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a148: fadd qword ptr [esp + 4] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x4u)));
/* 40a14c: ret  */
  esp += 4; SPILL(); return;
L_40a14d: /* 40a14d: fld qword ptr [0x441540] */
  { double v = F64((uint32_t)(0x441540u)); FPUSH(v); }
/* 40a153: fmul qword ptr [0x441540] */
  ST0 = ST0 * (F64((uint32_t)(0x441540u)));
/* 40a159: fadd qword ptr [esp + 4] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x4u)));
/* 40a15d: ret  */
  esp += 4; SPILL(); return;
L_40a15e: /* 40a15e: movq xmm0, xmm2 */
  guest_unsupported(0x40a15e); /* movq xmm0, xmm2 */
/* 40a162: movq xmm3, qword ptr [0x4413a0] */
  guest_unsupported(0x40a162); /* movq xmm3, qword ptr [0x4413a0] */
/* 40a16a: andpd xmm0, xmm3 */
  guest_unsupported(0x40a16a); /* andpd xmm0, xmm3 */
/* 40a16e: ucomisd xmm0, xmm3 */
  guest_unsupported(0x40a16e); /* ucomisd xmm0, xmm3 */
/* 40a172: jp 0x40a189 */
  if (pf) goto L_40a189;
L_40a174: /* 40a174: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40a178: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 40a17b: fld qword ptr [0x441540] */
  { double v = F64((uint32_t)(0x441540u)); FPUSH(v); }
/* 40a181: fadd qword ptr [eax*8 + 0x4413c0] */
  ST0 = ST0 + (F64((uint32_t)(eax*8 + 0x4413c0u)));
/* 40a188: ret  */
  esp += 4; SPILL(); return;
L_40a189: /* 40a189: mov edx, 0x3eb */
  edx = 0x3ebu;
/* 40a18e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40a191: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 40a195: mov edx, esp */
  edx = esp;
/* 40a197: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40a19a: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 40a19e: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 40a1a2: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 40a1a5: call 0x436052 */
  esp -= 4; W32(esp, 0x40a1aau); SPILL(); f_436052(); if (g_unwind) return; RELOAD();
/* 40a1aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a1ad: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40a1b1: ret  */
  esp += 4; SPILL(); return;
}

void f_40a1b2(void) {
  LOAD_REGS();
L_40a1b2: /* 40a1b2: mov byte ptr [ebp - 0x90], 0xfe */
  W8((uint32_t)(ebp + 0xffffff70u), 0xfeu);
/* 40a1b9: fabs  */
  ST0 = fabs(ST0);
/* 40a1bb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a1bd: fabs  */
  ST0 = fabs(ST0);
/* 40a1bf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a1c1: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* 40a1c3: or cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40a1c5: je 0x40a1cb */
  if (zf) goto L_40a1cb;
L_40a1c7: /* 40a1c7: fldpi  */
  FPUSH(3.141592653589793238463);
/* 40a1c9: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
L_40a1cb: /* 40a1cb: or ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 40a1cd: je 0x40a1d1 */
  if (zf) goto L_40a1d1;
L_40a1cf: /* 40a1cf: fchs  */
  ST0 = -ST0;
L_40a1d1: /* 40a1d1: ret  */
  esp += 4; SPILL(); return;
}

void f_40a1d2(void) {
  LOAD_REGS();
L_40a1d2: /* 40a1d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a1d4: fld xword ptr [0x44e99a] */
  { double v = F80((uint32_t)(0x44e99au)); FPUSH(v); }
/* 40a1da: ret  */
  esp += 4; SPILL(); return;
}

void f_40a1db(void) {
  LOAD_REGS();
L_40a1db: /* 40a1db: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a1dd: or cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40a1df: je 0x40a1ec */
  if (zf) goto L_40a1ec;
L_40a1e1: /* 40a1e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a1e3: fldpi  */
  FPUSH(3.141592653589793238463);
/* 40a1e5: or ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 40a1e7: je 0x40a1eb */
  if (zf) goto L_40a1eb;
L_40a1e9: /* 40a1e9: fchs  */
  ST0 = -ST0;
L_40a1eb: /* 40a1eb: ret  */
  esp += 4; SPILL(); return;
L_40a1ec: /* 40a1ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a1ee: fldz  */
  FPUSH(0.0);
/* 40a1f0: or ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 40a1f2: je 0x40a1eb */
  if (zf) goto L_40a1eb;
L_40a1f4: /* 40a1f4: fchs  */
  ST0 = -ST0;
/* 40a1f6: ret  */
  esp += 4; SPILL(); return;
}

void f_40a1f7(void) {
  LOAD_REGS();
  goto L_40a1f7;
L_409cf5: /* 409cf5: or cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409cf7: je 0x409cfb */
  if (zf) goto L_409cfb;
L_409cf9: /* 409cf9: fchs  */
  ST0 = -ST0;
L_409cfb: /* 409cfb: ret  */
  esp += 4; SPILL(); return;
L_40a1f7: /* 40a1f7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a1f9: mov cl, ch */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((ecx >> 8) & 0xffu)) & 0xffu);
/* 40a1fb: call 0x40a1d2 */
  esp -= 4; W32(esp, 0x40a200u); SPILL(); f_40a1d2(); if (g_unwind) return; RELOAD();
/* 40a200: jmp 0x409cf5 */
  goto L_409cf5;
}

void f_40a2c8(void) {
  LOAD_REGS();
L_40a2c8: /* 40a2c8: and byte ptr [ebp - 0x2c8], 0xfe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffd38u), r);
  }
  SPILL(); f_40a2cf(); return;
}

void f_40a2cf(void) {
  LOAD_REGS();
L_40a2cf: /* 40a2cf: cmp dword ptr [0x44f64c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f64cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a2d6: jne 0x40a327 */
  if (!zf) goto L_40a327;
L_40a2d8: /* 40a2d8: fst qword ptr [ebp - 0x2d0] */
  WF64((uint32_t)(ebp + 0xfffffd30u), ST0);
/* 40a2de: mov al, byte ptr [ebp - 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff70u))) & 0xffu);
/* 40a2e4: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40a2e6: je 0x40a302 */
  if (zf) goto L_40a302;
L_40a2e8: /* 40a2e8: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40a2ea: je 0x40a347 */
  if (zf) goto L_40a347;
L_40a2ec: /* 40a2ec: cmp al, 0xfe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40a2ee: je 0x40a32f */
  if (zf) goto L_40a32f;
L_40a2f0: /* 40a2f0: or al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40a2f2: je 0x40a327 */
  if (zf) goto L_40a327;
L_40a2f4: /* 40a2f4: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 40a2f7: mov dword ptr [ebp - 0x8e], eax */
  W32((uint32_t)(ebp + 0xffffff72u), eax);
/* 40a2fd: jmp 0x40a3b4 */
  goto L_40a3b4;
L_40a302: /* 40a302: mov ax, word ptr [ebp - 0xa4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffff5cu))) & 0xffffu);
/* 40a309: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40a30d: jne 0x40a327 */
  if (!zf) goto L_40a327;
L_40a30f: /* 40a30f: wait  */
/* 40a310: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 40a312: and ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40a316: je 0x40a327 */
  if (zf) goto L_40a327;
L_40a318: /* 40a318: mov dword ptr [ebp - 0x8e], 8 */
  W32((uint32_t)(ebp + 0xffffff72u), 0x8u);
/* 40a322: jmp 0x40a3b4 */
  goto L_40a3b4;
L_40a327: /* 40a327: fldcw word ptr [ebp - 0xa4] */
  FCW = R16((uint32_t)(ebp + 0xffffff5cu));
/* 40a32d: wait  */
/* 40a32e: ret  */
  esp += 4; SPILL(); return;
L_40a32f: /* 40a32f: mov ax, word ptr [ebp - 0x2ca] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffd36u))) & 0xffffu);
/* 40a336: and ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40a33a: or ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  zf = (r) == 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40a33d: je 0x40a35a */
  if (zf) goto L_40a35a;
L_40a33f: /* 40a33f: cmp ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40a343: je 0x40a388 */
  if (zf) goto L_40a388;
L_40a345: /* 40a345: jmp 0x40a302 */
  goto L_40a302;
L_40a347: /* 40a347: mov ax, word ptr [ebp - 0x2ca] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffd36u))) & 0xffffu);
/* 40a34e: and ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40a352: cmp ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40a356: je 0x40a388 */
  if (zf) goto L_40a388;
L_40a358: /* 40a358: jmp 0x40a302 */
  goto L_40a302;
L_40a35a: /* 40a35a: mov dword ptr [ebp - 0x8e], 4 */
  W32((uint32_t)(ebp + 0xffffff72u), 0x4u);
/* 40a364: fld qword ptr [0x441560] */
  { double v = F64((uint32_t)(0x441560u)); FPUSH(v); }
/* 40a36a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a36c: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 40a36e: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 40a370: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 40a372: fabs  */
  ST0 = fabs(ST0);
/* 40a374: fcomp qword ptr [0x441550] */
  fpu_com(ST0, F64((uint32_t)(0x441550u)));
  FPOP();
/* 40a37a: wait  */
/* 40a37b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 40a37d: sahf  */
  cf = (eax >> 8) & 1;
/* 40a37e: jae 0x40a3b4 */
  if (!cf) goto L_40a3b4;
L_40a380: /* 40a380: fmul qword ptr [0x441570] */
  ST0 = ST0 * (F64((uint32_t)(0x441570u)));
/* 40a386: jmp 0x40a3b4 */
  goto L_40a3b4;
L_40a388: /* 40a388: mov dword ptr [ebp - 0x8e], 3 */
  W32((uint32_t)(ebp + 0xffffff72u), 0x3u);
/* 40a392: fld qword ptr [0x441558] */
  { double v = F64((uint32_t)(0x441558u)); FPUSH(v); }
/* 40a398: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a39a: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 40a39c: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 40a39e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 40a3a0: fabs  */
  ST0 = fabs(ST0);
/* 40a3a2: fcomp qword ptr [0x441548] */
  fpu_com(ST0, F64((uint32_t)(0x441548u)));
  FPOP();
/* 40a3a8: wait  */
/* 40a3a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 40a3ab: sahf  */
  cf = (eax >> 8) & 1;
  zf = (eax >> 14) & 1;
/* 40a3ac: jbe 0x40a3b4 */
  if ((cf | zf)) goto L_40a3b4;
L_40a3ae: /* 40a3ae: fmul qword ptr [0x441568] */
  ST0 = ST0 * (F64((uint32_t)(0x441568u)));
L_40a3b4: /* 40a3b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40a3b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40a3b6: mov ebx, dword ptr [ebp - 0x94] */
  ebx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 40a3bc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40a3bd: mov dword ptr [ebp - 0x8a], ebx */
  W32((uint32_t)(ebp + 0xffffff76u), ebx);
/* 40a3c3: test byte ptr [ebp - 0x2c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd38u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40a3ca: jne 0x40a3e6 */
  if (!zf) goto L_40a3e6;
L_40a3cc: /* 40a3cc: cld  */
  DF = 0;
/* 40a3cd: lea esi, [ebp + 8] */
  esi = (uint32_t)(ebp + 0x8u);
/* 40a3d0: lea edi, [ebp - 0x86] */
  edi = (uint32_t)(ebp + 0xffffff7au);
/* 40a3d6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40a3d7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40a3d8: cmp byte ptr [ebx + 0xc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40a3dc: je 0x40a3e6 */
  if (zf) goto L_40a3e6;
L_40a3de: /* 40a3de: lea esi, [ebp + 0x10] */
  esi = (uint32_t)(ebp + 0x10u);
/* 40a3e1: lea edi, [ebp - 0x7e] */
  edi = (uint32_t)(ebp + 0xffffff82u);
/* 40a3e4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40a3e5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
L_40a3e6: /* 40a3e6: fstp qword ptr [ebp - 0x76] */
  WF64((uint32_t)(ebp + 0xffffff8au), ST0); FPOP();
/* 40a3e9: lea eax, [ebp - 0x8e] */
  eax = (uint32_t)(ebp + 0xffffff72u);
/* 40a3ef: lea ebx, [ebp - 0xa4] */
  ebx = (uint32_t)(ebp + 0xffffff5cu);
/* 40a3f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a3f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40a3f7: mov ebx, dword ptr [ebp - 0x94] */
  ebx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 40a3fd: mov al, byte ptr [ebx + 0xe] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xeu))) & 0xffu);
/* 40a400: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 40a403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40a404: call 0x4365aa */
  esp -= 4; W32(esp, 0x40a409u); SPILL(); f_4365aa(); if (g_unwind) return; RELOAD();
/* 40a409: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a40c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40a40d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40a40e: fld qword ptr [ebp - 0x76] */
  { double v = F64((uint32_t)(ebp + 0xffffff8au)); FPUSH(v); }
/* 40a411: jmp 0x40a327 */
  goto L_40a327;
}

void f_40a449(void) {
  LOAD_REGS();
L_40a449: /* 40a449: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40a44a: mov ebp, esp */
  ebp = esp;
/* 40a44c: add esp, -0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a44f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40a450: mov ax, word ptr [ebp + 0xe] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xeu))) & 0xffffu);
/* 40a454: mov bx, ax */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
/* 40a457: and ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40a45b: cmp ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40a45f: jne 0x40a47f */
  if (!zf) goto L_40a47f;
L_40a461: /* 40a461: or bx, 0x7fff */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x7fffu);
  uint16_t r = (uint16_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40a466: mov word ptr [ebp - 2], bx */
  W16((uint32_t)(ebp + 0xfffffffeu), (ebx & 0xffffu));
/* 40a46a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 40a46d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 40a470: shld eax, ebx, 0xb */
  { uint32_t a = eax, b = ebx, c = (0xbu) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  eax = r;
  } }
/* 40a474: mov dword ptr [ebp - 6], eax */
  W32((uint32_t)(ebp + 0xfffffffau), eax);
/* 40a477: mov dword ptr [ebp - 0xa], ebx */
  W32((uint32_t)(ebp + 0xfffffff6u), ebx);
/* 40a47a: fld xword ptr [ebp - 0xa] */
  { double v = F80((uint32_t)(ebp + 0xfffffff6u)); FPUSH(v); }
/* 40a47d: jmp 0x40a482 */
  goto L_40a482;
L_40a47f: /* 40a47f: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_40a482: /* 40a482: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40a483: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40a484: ret  */
  esp += 4; SPILL(); return;
}

void f_40a485(void) {
  LOAD_REGS();
  goto L_40a485;
L_409c33: /* 409c33: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409c35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c37: ret  */
  esp += 4; SPILL(); return;
L_409cf5: /* 409cf5: or cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409cf7: je 0x409cfb */
  if (zf) goto L_409cfb;
L_409cf9: /* 409cf9: fchs  */
  ST0 = -ST0;
L_409cfb: /* 409cfb: ret  */
  esp += 4; SPILL(); return;
L_40a485: /* 40a485: mov byte ptr [ebp - 0x90], 0xff */
  W8((uint32_t)(ebp + 0xffffff70u), 0xffu);
/* 40a48c: call 0x40a52e */
  esp -= 4; W32(esp, 0x40a491u); SPILL(); f_40a52e(); if (g_unwind) return; RELOAD();
/* 40a491: or bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40a493: je 0x40a513 */
  if (zf) goto L_40a513;
L_40a495: /* 40a495: call 0x40a575 */
  esp -= 4; W32(esp, 0x40a49au); SPILL(); f_40a575(); if (g_unwind) return; RELOAD();
/* 40a49a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 40a49c: jmp 0x40a4f0 */
  goto L_40a4f0;
L_40a4f0: /* 40a4f0: fld1  */
  FPUSH(1.0);
/* 40a4f2: fchs  */
  ST0 = -ST0;
/* 40a4f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a4f6: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 40a4f8: jmp 0x409c33 */
  goto L_409c33;
L_40a513: /* 40a513: call 0x40a89b */
  esp -= 4; W32(esp, 0x40a518u); SPILL(); f_40a89b(); if (g_unwind) return; RELOAD();
/* 40a518: jmp 0x409cf5 */
  goto L_409cf5;
}

void f_40a49e(void) {
  LOAD_REGS();
L_40a49e: /* 40a49e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 40a4a0: fabs  */
  ST0 = fabs(ST0);
/* 40a4a2: fld xword ptr [0x44ea10] */
  { double v = F80((uint32_t)(0x44ea10u)); FPUSH(v); }
/* 40a4a8: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 40a4aa: wait  */
/* 40a4ab: fnstsw word ptr [ebp - 0xa0] */
  W16((uint32_t)(ebp + 0xffffff60u), fpu_sw());
/* 40a4b1: wait  */
/* 40a4b2: test byte ptr [ebp - 0x9f], 0x41 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff61u))); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40a4b9: jne 0x40a51d */
  if (!zf) goto L_40a51d;
L_40a4bb: /* 40a4bb: call 0x40a52e */
  esp -= 4; W32(esp, 0x40a4c0u); SPILL(); f_40a52e(); if (g_unwind) return; RELOAD();
/* 40a4c0: or bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40a4c2: je 0x40a51d */
  if (zf) goto L_40a51d;
L_40a4c4: /* 40a4c4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 40a4c6: call 0x40a563 */
  esp -= 4; W32(esp, 0x40a4cbu); SPILL(); f_40a563(); if (g_unwind) return; RELOAD();
/* 40a4cb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a4cd: call 0x40a575 */
  esp -= 4; W32(esp, 0x40a4d2u); SPILL(); f_40a575(); if (g_unwind) return; RELOAD();
/* 40a4d2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 40a4d4: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 40a4d6: ret  */
  esp += 4; SPILL(); return;
L_40a51d: /* 40a51d: mov byte ptr [ebp - 0x90], 8 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x8u);
  SPILL(); f_40a524(); return;
}

void f_40a4d7(void) {
  LOAD_REGS();
  goto L_40a4d7;
L_409c33: /* 409c33: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409c35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c37: ret  */
  esp += 4; SPILL(); return;
L_40a4d7: /* 40a4d7: mov byte ptr [ebp - 0x90], 0xff */
  W8((uint32_t)(ebp + 0xffffff70u), 0xffu);
/* 40a4de: call 0x40a52e */
  esp -= 4; W32(esp, 0x40a4e3u); SPILL(); f_40a52e(); if (g_unwind) return; RELOAD();
/* 40a4e3: or bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40a4e5: je 0x40a89b */
  if (zf) { SPILL(); f_40a89b(); return; }
L_40a4eb: /* 40a4eb: call 0x40a563 */
  esp -= 4; W32(esp, 0x40a4f0u); SPILL(); f_40a563(); if (g_unwind) return; RELOAD();
/* 40a4f0: fld1  */
  FPUSH(1.0);
/* 40a4f2: fchs  */
  ST0 = -ST0;
/* 40a4f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a4f6: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 40a4f8: jmp 0x409c33 */
  goto L_409c33;
}

void f_40a4fd(void) {
  LOAD_REGS();
  goto L_40a4fd;
L_409cf5: /* 409cf5: or cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409cf7: je 0x409cfb */
  if (zf) goto L_409cfb;
L_409cf9: /* 409cf9: fchs  */
  ST0 = -ST0;
L_409cfb: /* 409cfb: ret  */
  esp += 4; SPILL(); return;
L_40a4fd: /* 40a4fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a4ff: fld xword ptr [0x44ea80] */
  { double v = F80((uint32_t)(0x44ea80u)); FPUSH(v); }
/* 40a505: jmp 0x409cf5 */
  goto L_409cf5;
}

void f_40a50a(void) {
  LOAD_REGS();
L_40a50a: /* 40a50a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a50c: fld xword ptr [0x44ea80] */
  { double v = F80((uint32_t)(0x44ea80u)); FPUSH(v); }
/* 40a512: ret  */
  esp += 4; SPILL(); return;
}

void f_40a524(void) {
  LOAD_REGS();
  goto L_40a524;
L_409cf5: /* 409cf5: or cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 409cf7: je 0x409cfb */
  if (zf) goto L_409cfb;
L_409cf9: /* 409cf9: fchs  */
  ST0 = -ST0;
L_409cfb: /* 409cfb: ret  */
  esp += 4; SPILL(); return;
L_40a524: /* 40a524: call 0x409c3f */
  esp -= 4; W32(esp, 0x40a529u); SPILL(); f_409c3f(); if (g_unwind) return; RELOAD();
/* 40a529: jmp 0x409cf5 */
  goto L_409cf5;
}

void f_40a52e(void) {
  LOAD_REGS();
  goto L_40a52e;
L_409c33: /* 409c33: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409c35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c37: ret  */
  esp += 4; SPILL(); return;
L_40a52e: /* 40a52e: fldl2e  */
  FPUSH(1.442695040888963407360);
/* 40a530: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 40a532: xor ebx, ebx */
  ebx = 0;
/* 40a534: call 0x40a8bc */
  esp -= 4; W32(esp, 0x40a539u); SPILL(); f_40a8bc(); if (g_unwind) return; RELOAD();
/* 40a539: not bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(~(ebx & 0xffu)) & 0xffu);
/* 40a53b: test byte ptr [ebp - 0x9f], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff61u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40a542: je 0x40a54d */
  if (zf) goto L_40a54d;
L_40a544: /* 40a544: call 0x40a575 */
  esp -= 4; W32(esp, 0x40a549u); SPILL(); f_40a575(); if (g_unwind) return; RELOAD();
/* 40a549: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a54b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_40a54d: /* 40a54d: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40a550: jne 0x409c33 */
  if (!zf) goto L_409c33;
L_40a556: /* 40a556: not bh */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(~((ebx >> 8) & 0xffu)) & 0xffu) << 8);
/* 40a558: fld1  */
  FPUSH(1.0);
/* 40a55a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 40a55c: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 40a55e: jmp 0x409c33 */
  goto L_409c33;
}

void f_40a563(void) {
  LOAD_REGS();
L_40a563: /* 40a563: call 0x40a575 */
  esp -= 4; W32(esp, 0x40a568u); SPILL(); f_40a575(); if (g_unwind) return; RELOAD();
/* 40a568: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 40a56a: or bh, bh */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 40a56c: jne 0x40a574 */
  if (!zf) goto L_40a574;
L_40a56e: /* 40a56e: fld1  */
  FPUSH(1.0);
/* 40a570: fadd st(1), st(0) */
  STI(1) = STI(1) + ST0;
/* 40a572: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_40a574: /* 40a574: ret  */
  esp += 4; SPILL(); return;
}

void f_40a575(void) {
  LOAD_REGS();
L_40a575: /* 40a575: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 40a577: fld1  */
  FPUSH(1.0);
/* 40a579: or bh, bh */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 40a57b: jne 0x40a583 */
  if (!zf) goto L_40a583;
L_40a57d: /* 40a57d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 40a57f: fchs  */
  ST0 = -ST0;
/* 40a581: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
L_40a583: /* 40a583: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 40a585: ret  */
  esp += 4; SPILL(); return;
}

void f_40a5a4(void) {
  LOAD_REGS();
L_40a5a4: /* 40a5a4: unpcklpd xmm0, xmm0 */
  guest_unsupported(0x40a5a4); /* unpcklpd xmm0, xmm0 */
/* 40a5a8: movapd xmm1, xmmword ptr [0x4415c0] */
  guest_unsupported(0x40a5a8); /* movapd xmm1, xmmword ptr [0x4415c0] */
/* 40a5b0: movapd xmm6, xmmword ptr [0x4415b0] */
  guest_unsupported(0x40a5b0); /* movapd xmm6, xmmword ptr [0x4415b0] */
/* 40a5b8: movapd xmm2, xmmword ptr [0x4415d0] */
  guest_unsupported(0x40a5b8); /* movapd xmm2, xmmword ptr [0x4415d0] */
/* 40a5c0: movapd xmm3, xmmword ptr [0x4415e0] */
  guest_unsupported(0x40a5c0); /* movapd xmm3, xmmword ptr [0x4415e0] */
/* 40a5c8: pextrw eax, xmm0, 3 */
  guest_unsupported(0x40a5c8); /* pextrw eax, xmm0, 3 */
/* 40a5cd: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40a5d2: mov edx, 0x408f */
  edx = 0x408fu;
/* 40a5d7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40a5d9: sub eax, 0x3c90 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c90u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40a5de: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 40a5e0: cmp edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40a5e6: jae 0x40a7f4 */
  if (!cf) goto L_40a7f4;
L_40a5ec: /* 40a5ec: mulpd xmm1, xmm0 */
  guest_unsupported(0x40a5ec); /* mulpd xmm1, xmm0 */
/* 40a5f0: addpd xmm1, xmm6 */
  guest_unsupported(0x40a5f0); /* addpd xmm1, xmm6 */
/* 40a5f4: movapd xmm7, xmm1 */
  guest_unsupported(0x40a5f4); /* movapd xmm7, xmm1 */
/* 40a5f8: subpd xmm1, xmm6 */
  guest_unsupported(0x40a5f8); /* subpd xmm1, xmm6 */
/* 40a5fc: mulpd xmm2, xmm1 */
  guest_unsupported(0x40a5fc); /* mulpd xmm2, xmm1 */
/* 40a600: movapd xmm4, xmmword ptr [0x4415f0] */
  guest_unsupported(0x40a600); /* movapd xmm4, xmmword ptr [0x4415f0] */
/* 40a608: mulpd xmm3, xmm1 */
  guest_unsupported(0x40a608); /* mulpd xmm3, xmm1 */
/* 40a60c: movapd xmm5, xmmword ptr [0x441600] */
  guest_unsupported(0x40a60c); /* movapd xmm5, xmmword ptr [0x441600] */
/* 40a614: subpd xmm0, xmm2 */
  guest_unsupported(0x40a614); /* subpd xmm0, xmm2 */
/* 40a618: movd eax, xmm7 */
  guest_unsupported(0x40a618); /* movd eax, xmm7 */
/* 40a61c: mov ecx, eax */
  ecx = eax;
/* 40a61e: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40a621: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 40a624: sar eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 40a627: mov edx, eax */
  edx = eax;
/* 40a629: subpd xmm0, xmm3 */
  guest_unsupported(0x40a629); /* subpd xmm0, xmm3 */
/* 40a62d: movapd xmm2, xmmword ptr [ecx + 0x441610] */
  guest_unsupported(0x40a62d); /* movapd xmm2, xmmword ptr [ecx + 0x441610] */
/* 40a635: mulpd xmm4, xmm0 */
  guest_unsupported(0x40a635); /* mulpd xmm4, xmm0 */
/* 40a639: movapd xmm1, xmm0 */
  guest_unsupported(0x40a639); /* movapd xmm1, xmm0 */
/* 40a63d: mulpd xmm0, xmm0 */
  guest_unsupported(0x40a63d); /* mulpd xmm0, xmm0 */
/* 40a641: addpd xmm5, xmm4 */
  guest_unsupported(0x40a641); /* addpd xmm5, xmm4 */
/* 40a645: mulsd xmm0, xmm0 */
  guest_unsupported(0x40a645); /* mulsd xmm0, xmm0 */
/* 40a649: addsd xmm1, xmm2 */
  guest_unsupported(0x40a649); /* addsd xmm1, xmm2 */
/* 40a64d: unpckhpd xmm2, xmm2 */
  guest_unsupported(0x40a64d); /* unpckhpd xmm2, xmm2 */
/* 40a651: movdqa xmm6, xmmword ptr [0x441590] */
  guest_unsupported(0x40a651); /* movdqa xmm6, xmmword ptr [0x441590] */
/* 40a659: pand xmm7, xmm6 */
  guest_unsupported(0x40a659); /* pand xmm7, xmm6 */
/* 40a65d: movdqa xmm6, xmmword ptr [0x4415a0] */
  guest_unsupported(0x40a65d); /* movdqa xmm6, xmmword ptr [0x4415a0] */
/* 40a665: paddq xmm7, xmm6 */
  guest_unsupported(0x40a665); /* paddq xmm7, xmm6 */
/* 40a669: psllq xmm7, 0x2e */
  guest_unsupported(0x40a669); /* psllq xmm7, 0x2e */
/* 40a66e: mulpd xmm0, xmm5 */
  guest_unsupported(0x40a66e); /* mulpd xmm0, xmm5 */
/* 40a672: addsd xmm1, xmm0 */
  guest_unsupported(0x40a672); /* addsd xmm1, xmm0 */
/* 40a676: orpd xmm2, xmm7 */
  guest_unsupported(0x40a676); /* orpd xmm2, xmm7 */
/* 40a67a: unpckhpd xmm0, xmm0 */
  guest_unsupported(0x40a67a); /* unpckhpd xmm0, xmm0 */
/* 40a67e: addsd xmm0, xmm1 */
  guest_unsupported(0x40a67e); /* addsd xmm0, xmm1 */
/* 40a682: add edx, 0x37e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x37eu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40a688: cmp edx, 0x77c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x77cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40a68e: ja 0x40a6a9 */
  if ((!cf && !zf)) goto L_40a6a9;
L_40a690: /* 40a690: mulsd xmm0, xmm2 */
  guest_unsupported(0x40a690); /* mulsd xmm0, xmm2 */
/* 40a694: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40a697: addsd xmm0, xmm2 */
  guest_unsupported(0x40a697); /* addsd xmm0, xmm2 */
/* 40a69b: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40a69b); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40a6a1: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40a6a5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a6a8: ret  */
  esp += 4; SPILL(); return;
L_40a6a9: /* 40a6a9: sub esp, 0x12 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40a6ac: wait  */
/* 40a6ad: fnstcw word ptr [esp + 0x10] */
  W16((uint32_t)(esp + 0x10u), FCW);
/* 40a6b1: mov dx, word ptr [esp + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x10u))) & 0xffffu);
/* 40a6b6: or dx, 0x300 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x300u);
  uint16_t r = (uint16_t)(a | b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40a6bb: mov word ptr [esp], dx */
  W16((uint32_t)(esp), (edx & 0xffffu));
/* 40a6bf: fldcw word ptr [esp] */
  FCW = R16((uint32_t)(esp));
/* 40a6c2: mov edx, eax */
  edx = eax;
/* 40a6c4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 40a6c6: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40a6c8: movdqa xmm6, xmmword ptr [0x441580] */
  guest_unsupported(0x40a6c8); /* movdqa xmm6, xmmword ptr [0x441580] */
/* 40a6d0: pandn xmm6, xmm2 */
  guest_unsupported(0x40a6d0); /* pandn xmm6, xmm2 */
/* 40a6d4: add eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40a6d9: movd xmm3, eax */
  guest_unsupported(0x40a6d9); /* movd xmm3, eax */
/* 40a6dd: psllq xmm3, 0x34 */
  guest_unsupported(0x40a6dd); /* psllq xmm3, 0x34 */
/* 40a6e2: orpd xmm6, xmm3 */
  guest_unsupported(0x40a6e2); /* orpd xmm6, xmm3 */
/* 40a6e6: add edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40a6ec: movd xmm4, edx */
  guest_unsupported(0x40a6ec); /* movd xmm4, edx */
/* 40a6f0: psllq xmm4, 0x34 */
  guest_unsupported(0x40a6f0); /* psllq xmm4, 0x34 */
/* 40a6f5: movlpd qword ptr [esp], xmm0 */
  guest_unsupported(0x40a6f5); /* movlpd qword ptr [esp], xmm0 */
/* 40a6fa: fld qword ptr [esp] */
  { double v = F64((uint32_t)(esp)); FPUSH(v); }
/* 40a6fd: movlpd qword ptr [esp + 8], xmm6 */
  guest_unsupported(0x40a6fd); /* movlpd qword ptr [esp + 8], xmm6 */
/* 40a703: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 40a707: fmul st(1), st(0) */
  STI(1) = STI(1) * ST0;
/* 40a709: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 40a70b: movlpd qword ptr [esp], xmm4 */
  guest_unsupported(0x40a70b); /* movlpd qword ptr [esp], xmm4 */
/* 40a710: fld qword ptr [esp] */
  { double v = F64((uint32_t)(esp)); FPUSH(v); }
/* 40a713: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 40a715: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 40a718: movlpd xmm0, qword ptr [esp] */
  guest_unsupported(0x40a718); /* movlpd xmm0, qword ptr [esp] */
/* 40a71d: fldcw word ptr [esp + 0x10] */
  FCW = R16((uint32_t)(esp + 0x10u));
/* 40a721: add esp, 0x12 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a724: pextrw ecx, xmm0, 3 */
  guest_unsupported(0x40a724); /* pextrw ecx, xmm0, 3 */
/* 40a729: and ecx, 0x7ff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40a72f: cmp ecx, 0x7ff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40a735: jae 0x40a73e */
  if (!cf) goto L_40a73e;
L_40a737: /* 40a737: cmp ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a73a: je 0x40a745 */
  if (zf) goto L_40a745;
L_40a73c: /* 40a73c: jmp 0x40a778 */
  goto L_40a778;
L_40a73e: /* 40a73e: mov edx, 0xe */
  edx = 0xeu;
/* 40a743: jmp 0x40a74a */
  goto L_40a74a;
L_40a745: /* 40a745: mov edx, 0xf */
  edx = 0xfu;
L_40a74a: /* 40a74a: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40a74d: movlpd qword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0x40a74d); /* movlpd qword ptr [esp + 0x10], xmm0 */
/* 40a753: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 40a757: mov edx, esp */
  edx = esp;
/* 40a759: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40a75c: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 40a760: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40a763: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 40a767: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 40a76a: call 0x436052 */
  esp -= 4; W32(esp, 0x40a76fu); SPILL(); f_436052(); if (g_unwind) return; RELOAD();
/* 40a76f: movlpd xmm0, qword ptr [esp + 0x10] */
  guest_unsupported(0x40a76f); /* movlpd xmm0, qword ptr [esp + 0x10] */
/* 40a775: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40a778: /* 40a778: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40a77b: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40a77b); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40a781: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40a785: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a788: ret  */
  esp += 4; SPILL(); return;
L_40a789: /* 40a789: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40a78e: jae 0x40a7c1 */
  if (!cf) goto L_40a7c1;
L_40a790: /* 40a790: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40a794: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40a799: jae 0x40a7ae */
  if (!cf) goto L_40a7ae;
L_40a79b: /* 40a79b: movlpd xmm0, qword ptr [0x441a28] */
  guest_unsupported(0x40a79b); /* movlpd xmm0, qword ptr [0x441a28] */
/* 40a7a3: mulsd xmm0, xmm0 */
  guest_unsupported(0x40a7a3); /* mulsd xmm0, xmm0 */
/* 40a7a7: mov edx, 0xe */
  edx = 0xeu;
/* 40a7ac: jmp 0x40a74a */
  goto L_40a74a;
L_40a7ae: /* 40a7ae: movlpd xmm0, qword ptr [0x441a30] */
  guest_unsupported(0x40a7ae); /* movlpd xmm0, qword ptr [0x441a30] */
/* 40a7b6: mulsd xmm0, xmm0 */
  guest_unsupported(0x40a7b6); /* mulsd xmm0, xmm0 */
/* 40a7ba: mov edx, 0xf */
  edx = 0xfu;
/* 40a7bf: jmp 0x40a74a */
  goto L_40a74a;
L_40a7c1: /* 40a7c1: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 40a7c5: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40a7ca: ja 0x40a7ea */
  if ((!cf && !zf)) goto L_40a7ea;
L_40a7cc: /* 40a7cc: cmp edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a7cf: jne 0x40a7ea */
  if (!zf) goto L_40a7ea;
L_40a7d1: /* 40a7d1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40a7d5: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a7da: jne 0x40a7e3 */
  if (!zf) goto L_40a7e3;
L_40a7dc: /* 40a7dc: fld qword ptr [0x441a18] */
  { double v = F64((uint32_t)(0x441a18u)); FPUSH(v); }
/* 40a7e2: ret  */
  esp += 4; SPILL(); return;
L_40a7e3: /* 40a7e3: fld qword ptr [0x441a20] */
  { double v = F64((uint32_t)(0x441a20u)); FPUSH(v); }
/* 40a7e9: ret  */
  esp += 4; SPILL(); return;
L_40a7ea: /* 40a7ea: mov edx, 0x3ea */
  edx = 0x3eau;
/* 40a7ef: jmp 0x40a74a */
  goto L_40a74a;
L_40a7f4: /* 40a7f4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40a7f8: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40a7fd: cmp eax, 0x40900000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40900000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40a802: jae 0x40a789 */
  if (!cf) goto L_40a789;
L_40a804: /* 40a804: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40a804); /* movlpd xmm0, qword ptr [esp + 4] */
/* 40a80a: addsd xmm0, qword ptr [0x441a10] */
  guest_unsupported(0x40a80a); /* addsd xmm0, qword ptr [0x441a10] */
/* 40a812: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40a815: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40a815); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40a81b: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40a81f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40a822: ret  */
  esp += 4; SPILL(); return;
}

void f_40a823(void) {
  LOAD_REGS();
  goto L_40a823;
L_409c33: /* 409c33: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 409c35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c37: ret  */
  esp += 4; SPILL(); return;
L_40a823: /* 40a823: mov byte ptr [ebp - 0x90], 0xfe */
  W8((uint32_t)(ebp + 0xffffff70u), 0xfeu);
/* 40a82a: xor ch, ch */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(0) & 0xffu) << 8);
/* 40a82c: fldl2e  */
  FPUSH(1.442695040888963407360);
/* 40a82e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 40a830: call 0x40a8bc */
  esp -= 4; W32(esp, 0x40a835u); SPILL(); f_40a8bc(); if (g_unwind) return; RELOAD();
/* 40a835: fld1  */
  FPUSH(1.0);
/* 40a837: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 40a839: test byte ptr [ebp - 0x9f], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff61u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40a840: je 0x40a856 */
  if (zf) goto L_40a856;
L_40a842: /* 40a842: fld1  */
  FPUSH(1.0);
/* 40a844: cmp dword ptr [0x44923c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44923cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a84b: je 0x40a851 */
  if (zf) goto L_40a851;
L_40a84d: /* 40a84d: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 40a84f: jmp 0x40a856 */
  goto L_40a856;
L_40a851: /* 40a851: call 0x409226 */
  esp -= 4; W32(esp, 0x40a856u); SPILL(); f_409226(); if (g_unwind) return; RELOAD();
L_40a856: /* 40a856: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40a859: jne 0x40a85d */
  if (!zf) goto L_40a85d;
L_40a85b: /* 40a85b: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
L_40a85d: /* 40a85d: or ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 40a85f: je 0x409c33 */
  if (zf) goto L_409c33;
L_40a865: /* 40a865: fchs  */
  ST0 = -ST0;
/* 40a867: jmp 0x409c33 */
  goto L_409c33;
}

void f_40a89b(void) {
  LOAD_REGS();
L_40a89b: /* 40a89b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a89d: fld xword ptr [0x44ea80] */
  { double v = F80((uint32_t)(0x44ea80u)); FPUSH(v); }
/* 40a8a3: mov byte ptr [ebp - 0x90], 3 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x3u);
/* 40a8aa: ret  */
  esp += 4; SPILL(); return;
}

void f_40a8ab(void) {
  LOAD_REGS();
  goto L_40a8ab;
L_409c3a: /* 409c3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c3c: fldz  */
  FPUSH(0.0);
/* 409c3e: ret  */
  esp += 4; SPILL(); return;
L_40a8ab: /* 40a8ab: or cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40a8ad: jne 0x409c3a */
  if (!zf) goto L_409c3a;
L_40a8b3: /* 40a8b3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a8b5: fld xword ptr [0x44ea80] */
  { double v = F80((uint32_t)(0x44ea80u)); FPUSH(v); }
/* 40a8bb: ret  */
  esp += 4; SPILL(); return;
}

void f_40a8bc(void) {
  LOAD_REGS();
  goto L_40a8bc;
L_409c3a: /* 409c3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 409c3c: fldz  */
  FPUSH(0.0);
/* 409c3e: ret  */
  esp += 4; SPILL(); return;
L_40a86c: /* 40a86c: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40a86d: ftst  */
  fpu_com(ST0, 0.0);
/* 40a86f: wait  */
/* 40a870: fnstsw word ptr [ebp - 0xa0] */
  W16((uint32_t)(ebp + 0xffffff60u), fpu_sw());
/* 40a876: wait  */
/* 40a877: test byte ptr [ebp - 0x9f], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff61u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40a87e: jne 0x40a88f */
  if (!zf) goto L_40a88f;
L_40a880: /* 40a880: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 40a882: fld xword ptr [0x44ea80] */
  { double v = F80((uint32_t)(0x44ea80u)); FPUSH(v); }
/* 40a888: or ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 40a88a: je 0x40a88e */
  if (zf) goto L_40a88e;
L_40a88c: /* 40a88c: fchs  */
  ST0 = -ST0;
L_40a88e: /* 40a88e: ret  */
  esp += 4; SPILL(); return;
L_40a88f: /* 40a88f: mov byte ptr [ebp - 0x90], 4 */
  W8((uint32_t)(ebp + 0xffffff70u), 0x4u);
/* 40a896: jmp 0x409c3a */
  goto L_409c3a;
L_40a8bc: /* 40a8bc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 40a8be: fabs  */
  ST0 = fabs(ST0);
/* 40a8c0: fld xword ptr [0x44ea94] */
  { double v = F80((uint32_t)(0x44ea94u)); FPUSH(v); }
/* 40a8c6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 40a8c8: wait  */
/* 40a8c9: fnstsw word ptr [ebp - 0xa0] */
  W16((uint32_t)(ebp + 0xffffff60u), fpu_sw());
/* 40a8cf: wait  */
/* 40a8d0: test byte ptr [ebp - 0x9f], 0x41 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffff61u))); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40a8d7: jne 0x40a86c */
  if (!zf) goto L_40a86c;
L_40a8d9: /* 40a8d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 40a8db: frndint  */
  ST0 = fpu_round(ST0);
/* 40a8dd: ftst  */
  fpu_com(ST0, 0.0);
/* 40a8df: wait  */
/* 40a8e0: fnstsw word ptr [ebp - 0xa0] */
  W16((uint32_t)(ebp + 0xffffff60u), fpu_sw());
/* 40a8e6: wait  */
/* 40a8e7: mov dl, byte ptr [ebp - 0x9f] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffff61u))) & 0xffu);
/* 40a8ed: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 40a8ef: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 40a8f1: ftst  */
  fpu_com(ST0, 0.0);
/* 40a8f3: wait  */
/* 40a8f4: fnstsw word ptr [ebp - 0xa0] */
  W16((uint32_t)(ebp + 0xffffff60u), fpu_sw());
/* 40a8fa: fabs  */
  ST0 = fabs(ST0);
/* 40a8fc: f2xm1  */
  ST0 = exp2(ST0) - 1.0;
/* 40a8fe: ret  */
  esp += 4; SPILL(); return;
}

void f_40a91d(void) {
  LOAD_REGS();
L_40a91d: /* 40a91d: mov edx, 0 */
  edx = 0x0u;
L_40a922: /* 40a922: movapd xmm5, xmm0 */
  guest_unsupported(0x40a922); /* movapd xmm5, xmm0 */
/* 40a926: unpcklpd xmm0, xmm0 */
  guest_unsupported(0x40a926); /* unpcklpd xmm0, xmm0 */
/* 40a92a: psrlq xmm5, 0x34 */
  guest_unsupported(0x40a92a); /* psrlq xmm5, 0x34 */
/* 40a92f: pextrw ecx, xmm5, 0 */
  guest_unsupported(0x40a92f); /* pextrw ecx, xmm5, 0 */
/* 40a934: movapd xmm1, xmmword ptr [0x441a40] */
  guest_unsupported(0x40a934); /* movapd xmm1, xmmword ptr [0x441a40] */
/* 40a93c: movapd xmm3, xmmword ptr [0x441aa0] */
  guest_unsupported(0x40a93c); /* movapd xmm3, xmmword ptr [0x441aa0] */
/* 40a944: movapd xmm4, xmmword ptr [0x441a50] */
  guest_unsupported(0x40a944); /* movapd xmm4, xmmword ptr [0x441a50] */
/* 40a94c: movapd xmm6, xmmword ptr [0x441a60] */
  guest_unsupported(0x40a94c); /* movapd xmm6, xmmword ptr [0x441a60] */
/* 40a954: andpd xmm0, xmm1 */
  guest_unsupported(0x40a954); /* andpd xmm0, xmm1 */
/* 40a958: orpd xmm0, xmm3 */
  guest_unsupported(0x40a958); /* orpd xmm0, xmm3 */
/* 40a95c: addpd xmm4, xmm0 */
  guest_unsupported(0x40a95c); /* addpd xmm4, xmm0 */
/* 40a960: pextrw eax, xmm4, 0 */
  guest_unsupported(0x40a960); /* pextrw eax, xmm4, 0 */
/* 40a965: and eax, 0x7f0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7f0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40a96a: movapd xmm4, xmmword ptr [eax + 0x441b10] */
  guest_unsupported(0x40a96a); /* movapd xmm4, xmmword ptr [eax + 0x441b10] */
/* 40a972: movapd xmm7, xmmword ptr [eax + 0x441f20] */
  guest_unsupported(0x40a972); /* movapd xmm7, xmmword ptr [eax + 0x441f20] */
/* 40a97a: andpd xmm6, xmm0 */
  guest_unsupported(0x40a97a); /* andpd xmm6, xmm0 */
/* 40a97e: subpd xmm0, xmm6 */
  guest_unsupported(0x40a97e); /* subpd xmm0, xmm6 */
/* 40a982: mulpd xmm6, xmm4 */
  guest_unsupported(0x40a982); /* mulpd xmm6, xmm4 */
/* 40a986: subpd xmm6, xmm3 */
  guest_unsupported(0x40a986); /* subpd xmm6, xmm3 */
/* 40a98a: addsd xmm7, xmm6 */
  guest_unsupported(0x40a98a); /* addsd xmm7, xmm6 */
/* 40a98e: mulpd xmm0, xmm4 */
  guest_unsupported(0x40a98e); /* mulpd xmm0, xmm4 */
/* 40a992: movapd xmm4, xmm0 */
  guest_unsupported(0x40a992); /* movapd xmm4, xmm0 */
/* 40a996: addpd xmm0, xmm6 */
  guest_unsupported(0x40a996); /* addpd xmm0, xmm6 */
/* 40a99a: and ecx, 0xfff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40a9a0: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40a9a3: cmp ecx, 0x7fd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40a9a9: ja 0x40aa5d */
  if ((!cf && !zf)) goto L_40aa5d;
L_40a9af: /* 40a9af: sub ecx, 0x3fe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3feu);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40a9b5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40a9b7: cvtsi2sd xmm6, ecx */
  guest_unsupported(0x40a9b7); /* cvtsi2sd xmm6, ecx */
/* 40a9bb: unpcklpd xmm6, xmm6 */
  guest_unsupported(0x40a9bb); /* unpcklpd xmm6, xmm6 */
/* 40a9bf: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 40a9c2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40a9c4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 40a9c9: mov edx, 0 */
  edx = 0x0u;
/* 40a9ce: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40a9d1: cmove edx, ecx */
  if (zf) { edx = ecx; }
/* 40a9d4: movapd xmm1, xmmword ptr [0x441ae0] */
  guest_unsupported(0x40a9d4); /* movapd xmm1, xmmword ptr [0x441ae0] */
/* 40a9dc: movapd xmm3, xmm0 */
  guest_unsupported(0x40a9dc); /* movapd xmm3, xmm0 */
/* 40a9e0: movapd xmm2, xmmword ptr [0x441af0] */
  guest_unsupported(0x40a9e0); /* movapd xmm2, xmmword ptr [0x441af0] */
/* 40a9e8: mulpd xmm1, xmm0 */
  guest_unsupported(0x40a9e8); /* mulpd xmm1, xmm0 */
/* 40a9ec: mulpd xmm3, xmm3 */
  guest_unsupported(0x40a9ec); /* mulpd xmm3, xmm3 */
/* 40a9f0: addpd xmm1, xmm2 */
  guest_unsupported(0x40a9f0); /* addpd xmm1, xmm2 */
/* 40a9f4: movapd xmm2, xmmword ptr [0x441b00] */
  guest_unsupported(0x40a9f4); /* movapd xmm2, xmmword ptr [0x441b00] */
/* 40a9fc: mulsd xmm3, xmm3 */
  guest_unsupported(0x40a9fc); /* mulsd xmm3, xmm3 */
/* 40aa00: movapd xmm5, xmmword ptr [0x441a70] */
  guest_unsupported(0x40aa00); /* movapd xmm5, xmmword ptr [0x441a70] */
/* 40aa08: mulpd xmm6, xmm5 */
  guest_unsupported(0x40aa08); /* mulpd xmm6, xmm5 */
/* 40aa0c: movapd xmm5, xmmword ptr [edx + 0x441a80] */
  guest_unsupported(0x40aa0c); /* movapd xmm5, xmmword ptr [edx + 0x441a80] */
/* 40aa14: andpd xmm4, xmm5 */
  guest_unsupported(0x40aa14); /* andpd xmm4, xmm5 */
/* 40aa18: addpd xmm7, xmm6 */
  guest_unsupported(0x40aa18); /* addpd xmm7, xmm6 */
/* 40aa1c: addpd xmm7, xmm4 */
  guest_unsupported(0x40aa1c); /* addpd xmm7, xmm4 */
/* 40aa20: mulpd xmm1, xmm0 */
  guest_unsupported(0x40aa20); /* mulpd xmm1, xmm0 */
/* 40aa24: mulsd xmm3, xmm0 */
  guest_unsupported(0x40aa24); /* mulsd xmm3, xmm0 */
/* 40aa28: addpd xmm1, xmm2 */
  guest_unsupported(0x40aa28); /* addpd xmm1, xmm2 */
/* 40aa2c: movapd xmm6, xmm7 */
  guest_unsupported(0x40aa2c); /* movapd xmm6, xmm7 */
/* 40aa30: unpckhpd xmm6, xmm6 */
  guest_unsupported(0x40aa30); /* unpckhpd xmm6, xmm6 */
/* 40aa34: mulpd xmm1, xmm3 */
  guest_unsupported(0x40aa34); /* mulpd xmm1, xmm3 */
/* 40aa38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40aa3b: movapd xmm0, xmm1 */
  guest_unsupported(0x40aa3b); /* movapd xmm0, xmm1 */
/* 40aa3f: unpckhpd xmm1, xmm1 */
  guest_unsupported(0x40aa3f); /* unpckhpd xmm1, xmm1 */
/* 40aa43: addsd xmm0, xmm1 */
  guest_unsupported(0x40aa43); /* addsd xmm0, xmm1 */
/* 40aa47: addsd xmm0, xmm6 */
  guest_unsupported(0x40aa47); /* addsd xmm0, xmm6 */
/* 40aa4b: addsd xmm0, xmm7 */
  guest_unsupported(0x40aa4b); /* addsd xmm0, xmm7 */
/* 40aa4f: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40aa4f); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40aa55: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40aa59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40aa5c: ret  */
  esp += 4; SPILL(); return;
L_40aa5d: /* 40aa5d: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40aa5d); /* movlpd xmm0, qword ptr [esp + 4] */
/* 40aa63: movapd xmm1, xmmword ptr [0x441ab0] */
  guest_unsupported(0x40aa63); /* movapd xmm1, xmmword ptr [0x441ab0] */
/* 40aa6b: cmpeqsd xmm1, xmm0 */
  guest_unsupported(0x40aa6b); /* cmpeqsd xmm1, xmm0 */
/* 40aa70: pextrw eax, xmm1, 0 */
  guest_unsupported(0x40aa70); /* pextrw eax, xmm1, 0 */
/* 40aa75: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40aa78: ja 0x40aac2 */
  if ((!cf && !zf)) goto L_40aac2;
L_40aa7a: /* 40aa7a: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40aa7d: je 0x40aadd */
  if (zf) goto L_40aadd;
L_40aa7f: /* 40aa7f: cmp ecx, 0x7fe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7feu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40aa85: ja 0x40aaf3 */
  if ((!cf && !zf)) goto L_40aaf3;
L_40aa87: /* 40aa87: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40aa87); /* movlpd xmm0, qword ptr [esp + 4] */
/* 40aa8d: movapd xmm1, xmmword ptr [0x441a40] */
  guest_unsupported(0x40aa8d); /* movapd xmm1, xmmword ptr [0x441a40] */
/* 40aa95: movapd xmm2, xmmword ptr [0x441aa0] */
  guest_unsupported(0x40aa95); /* movapd xmm2, xmmword ptr [0x441aa0] */
/* 40aa9d: andpd xmm0, xmm1 */
  guest_unsupported(0x40aa9d); /* andpd xmm0, xmm1 */
/* 40aaa1: orpd xmm0, xmm2 */
  guest_unsupported(0x40aaa1); /* orpd xmm0, xmm2 */
/* 40aaa5: cmpeqsd xmm2, xmm0 */
  guest_unsupported(0x40aaa5); /* cmpeqsd xmm2, xmm0 */
/* 40aaaa: pextrw eax, xmm2, 0 */
  guest_unsupported(0x40aaaa); /* pextrw eax, xmm2, 0 */
/* 40aaaf: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40aab2: je 0x40aabb */
  if (zf) goto L_40aabb;
L_40aab4: /* 40aab4: fld qword ptr [0x441ad8] */
  { double v = F64((uint32_t)(0x441ad8u)); FPUSH(v); }
/* 40aaba: ret  */
  esp += 4; SPILL(); return;
L_40aabb: /* 40aabb: mov edx, 0x3e8 */
  edx = 0x3e8u;
/* 40aac0: jmp 0x40ab11 */
  goto L_40ab11;
L_40aac2: /* 40aac2: movlpd xmm2, qword ptr [0x441aa0] */
  guest_unsupported(0x40aac2); /* movlpd xmm2, qword ptr [0x441aa0] */
/* 40aaca: divsd xmm2, xmm0 */
  guest_unsupported(0x40aaca); /* divsd xmm2, xmm0 */
/* 40aace: movlpd xmm1, qword ptr [0x441ad0] */
  guest_unsupported(0x40aace); /* movlpd xmm1, qword ptr [0x441ad0] */
/* 40aad6: mov edx, 2 */
  edx = 0x2u;
/* 40aadb: jmp 0x40ab11 */
  goto L_40ab11;
L_40aadd: /* 40aadd: movlpd xmm1, qword ptr [0x441ac0] */
  guest_unsupported(0x40aadd); /* movlpd xmm1, qword ptr [0x441ac0] */
/* 40aae5: mulsd xmm0, xmm1 */
  guest_unsupported(0x40aae5); /* mulsd xmm0, xmm1 */
/* 40aae9: mov edx, 0xffffffcc */
  edx = 0xffffffccu;
/* 40aaee: jmp 0x40a922 */
  goto L_40a922;
L_40aaf3: /* 40aaf3: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40aaf6: and ecx, 0x7ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40aafc: cmp ecx, 0x7ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40ab02: jae 0x40ab3e */
  if (!cf) goto L_40ab3e;
L_40ab04: /* 40ab04: xorpd xmm1, xmm1 */
  guest_unsupported(0x40ab04); /* xorpd xmm1, xmm1 */
/* 40ab08: divsd xmm1, xmm1 */
  guest_unsupported(0x40ab08); /* divsd xmm1, xmm1 */
/* 40ab0c: mov edx, 3 */
  edx = 0x3u;
L_40ab11: /* 40ab11: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40ab14: movlpd qword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0x40ab14); /* movlpd qword ptr [esp + 0x10], xmm1 */
/* 40ab1a: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 40ab1e: mov edx, esp */
  edx = esp;
/* 40ab20: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40ab23: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 40ab27: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40ab2a: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 40ab2e: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 40ab31: call 0x436052 */
  esp -= 4; W32(esp, 0x40ab36u); SPILL(); f_436052(); if (g_unwind) return; RELOAD();
/* 40ab36: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 40ab3a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40ab3d: ret  */
  esp += 4; SPILL(); return;
L_40ab3e: /* 40ab3e: movlpd xmm2, qword ptr [esp + 4] */
  guest_unsupported(0x40ab3e); /* movlpd xmm2, qword ptr [esp + 4] */
/* 40ab44: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40ab44); /* movlpd xmm0, qword ptr [esp + 4] */
/* 40ab4a: movd eax, xmm2 */
  guest_unsupported(0x40ab4a); /* movd eax, xmm2 */
/* 40ab4e: psrlq xmm2, 0x20 */
  guest_unsupported(0x40ab4e); /* psrlq xmm2, 0x20 */
/* 40ab53: movd ecx, xmm2 */
  guest_unsupported(0x40ab53); /* movd ecx, xmm2 */
/* 40ab57: and ecx, 0xfffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40ab5d: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40ab5f: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ab62: je 0x40ab04 */
  if (zf) goto L_40ab04;
L_40ab64: /* 40ab64: mov edx, 0x3e8 */
  edx = 0x3e8u;
/* 40ab69: jmp 0x40ab11 */
  goto L_40ab11;
}

void f_40ab89(void) {
  LOAD_REGS();
L_40ab89: /* 40ab89: mov edx, 0 */
  edx = 0x0u;
L_40ab8e: /* 40ab8e: movapd xmm5, xmm0 */
  guest_unsupported(0x40ab8e); /* movapd xmm5, xmm0 */
/* 40ab92: unpcklpd xmm0, xmm0 */
  guest_unsupported(0x40ab92); /* unpcklpd xmm0, xmm0 */
/* 40ab96: psrlq xmm5, 0x34 */
  guest_unsupported(0x40ab96); /* psrlq xmm5, 0x34 */
/* 40ab9b: pextrw ecx, xmm5, 0 */
  guest_unsupported(0x40ab9b); /* pextrw ecx, xmm5, 0 */
/* 40aba0: movapd xmm1, xmmword ptr [0x442330] */
  guest_unsupported(0x40aba0); /* movapd xmm1, xmmword ptr [0x442330] */
/* 40aba8: movapd xmm2, xmmword ptr [0x442340] */
  guest_unsupported(0x40aba8); /* movapd xmm2, xmmword ptr [0x442340] */
/* 40abb0: movapd xmm3, xmmword ptr [0x4423a0] */
  guest_unsupported(0x40abb0); /* movapd xmm3, xmmword ptr [0x4423a0] */
/* 40abb8: movapd xmm4, xmmword ptr [0x442350] */
  guest_unsupported(0x40abb8); /* movapd xmm4, xmmword ptr [0x442350] */
/* 40abc0: movapd xmm6, xmmword ptr [0x442360] */
  guest_unsupported(0x40abc0); /* movapd xmm6, xmmword ptr [0x442360] */
/* 40abc8: andpd xmm0, xmm1 */
  guest_unsupported(0x40abc8); /* andpd xmm0, xmm1 */
/* 40abcc: orpd xmm0, xmm3 */
  guest_unsupported(0x40abcc); /* orpd xmm0, xmm3 */
/* 40abd0: addpd xmm4, xmm0 */
  guest_unsupported(0x40abd0); /* addpd xmm4, xmm0 */
/* 40abd4: pextrw eax, xmm4, 0 */
  guest_unsupported(0x40abd4); /* pextrw eax, xmm4, 0 */
/* 40abd9: and eax, 0x7f0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7f0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40abde: movapd xmm4, xmmword ptr [eax + 0x442830] */
  guest_unsupported(0x40abde); /* movapd xmm4, xmmword ptr [eax + 0x442830] */
/* 40abe6: movapd xmm7, xmmword ptr [eax + 0x442420] */
  guest_unsupported(0x40abe6); /* movapd xmm7, xmmword ptr [eax + 0x442420] */
/* 40abee: andpd xmm6, xmm0 */
  guest_unsupported(0x40abee); /* andpd xmm6, xmm0 */
/* 40abf2: subpd xmm0, xmm6 */
  guest_unsupported(0x40abf2); /* subpd xmm0, xmm6 */
/* 40abf6: mulpd xmm6, xmm4 */
  guest_unsupported(0x40abf6); /* mulpd xmm6, xmm4 */
/* 40abfa: subpd xmm6, xmm2 */
  guest_unsupported(0x40abfa); /* subpd xmm6, xmm2 */
/* 40abfe: addsd xmm7, xmm6 */
  guest_unsupported(0x40abfe); /* addsd xmm7, xmm6 */
/* 40ac02: mulpd xmm0, xmm4 */
  guest_unsupported(0x40ac02); /* mulpd xmm0, xmm4 */
/* 40ac06: movapd xmm4, xmm0 */
  guest_unsupported(0x40ac06); /* movapd xmm4, xmm0 */
/* 40ac0a: addpd xmm0, xmm6 */
  guest_unsupported(0x40ac0a); /* addpd xmm0, xmm6 */
/* 40ac0e: and ecx, 0xfff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40ac14: sub ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40ac17: cmp ecx, 0x7fd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40ac1d: ja 0x40ace1 */
  if ((!cf && !zf)) goto L_40ace1;
L_40ac23: /* 40ac23: sub ecx, 0x3fe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3feu);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40ac29: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40ac2b: cvtsi2sd xmm6, ecx */
  guest_unsupported(0x40ac2b); /* cvtsi2sd xmm6, ecx */
/* 40ac2f: unpcklpd xmm6, xmm6 */
  guest_unsupported(0x40ac2f); /* unpcklpd xmm6, xmm6 */
/* 40ac33: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 40ac36: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ac38: mov ecx, 0x10 */
  ecx = 0x10u;
/* 40ac3d: mov edx, 0 */
  edx = 0x0u;
/* 40ac42: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ac45: cmove edx, ecx */
  if (zf) { edx = ecx; }
/* 40ac48: movapd xmm1, xmmword ptr [0x4423e0] */
  guest_unsupported(0x40ac48); /* movapd xmm1, xmmword ptr [0x4423e0] */
/* 40ac50: movapd xmm3, xmm0 */
  guest_unsupported(0x40ac50); /* movapd xmm3, xmm0 */
/* 40ac54: movapd xmm2, xmmword ptr [0x4423f0] */
  guest_unsupported(0x40ac54); /* movapd xmm2, xmmword ptr [0x4423f0] */
/* 40ac5c: mulpd xmm1, xmm0 */
  guest_unsupported(0x40ac5c); /* mulpd xmm1, xmm0 */
/* 40ac60: mulpd xmm3, xmm3 */
  guest_unsupported(0x40ac60); /* mulpd xmm3, xmm3 */
/* 40ac64: addpd xmm1, xmm2 */
  guest_unsupported(0x40ac64); /* addpd xmm1, xmm2 */
/* 40ac68: movapd xmm2, xmmword ptr [0x442400] */
  guest_unsupported(0x40ac68); /* movapd xmm2, xmmword ptr [0x442400] */
/* 40ac70: mulsd xmm3, xmm3 */
  guest_unsupported(0x40ac70); /* mulsd xmm3, xmm3 */
/* 40ac74: movapd xmm5, xmmword ptr [0x442370] */
  guest_unsupported(0x40ac74); /* movapd xmm5, xmmword ptr [0x442370] */
/* 40ac7c: mulpd xmm6, xmm5 */
  guest_unsupported(0x40ac7c); /* mulpd xmm6, xmm5 */
/* 40ac80: movapd xmm5, xmmword ptr [edx + 0x442380] */
  guest_unsupported(0x40ac80); /* movapd xmm5, xmmword ptr [edx + 0x442380] */
/* 40ac88: andpd xmm4, xmm5 */
  guest_unsupported(0x40ac88); /* andpd xmm4, xmm5 */
/* 40ac8c: addpd xmm7, xmm6 */
  guest_unsupported(0x40ac8c); /* addpd xmm7, xmm6 */
/* 40ac90: addpd xmm7, xmm4 */
  guest_unsupported(0x40ac90); /* addpd xmm7, xmm4 */
/* 40ac94: mulpd xmm1, xmm0 */
  guest_unsupported(0x40ac94); /* mulpd xmm1, xmm0 */
/* 40ac98: mulsd xmm3, xmm0 */
  guest_unsupported(0x40ac98); /* mulsd xmm3, xmm0 */
/* 40ac9c: addpd xmm1, xmm2 */
  guest_unsupported(0x40ac9c); /* addpd xmm1, xmm2 */
/* 40aca0: movapd xmm2, xmmword ptr [0x442410] */
  guest_unsupported(0x40aca0); /* movapd xmm2, xmmword ptr [0x442410] */
/* 40aca8: mulpd xmm2, xmm0 */
  guest_unsupported(0x40aca8); /* mulpd xmm2, xmm0 */
/* 40acac: movapd xmm6, xmm7 */
  guest_unsupported(0x40acac); /* movapd xmm6, xmm7 */
/* 40acb0: unpckhpd xmm6, xmm6 */
  guest_unsupported(0x40acb0); /* unpckhpd xmm6, xmm6 */
/* 40acb4: mulpd xmm1, xmm3 */
  guest_unsupported(0x40acb4); /* mulpd xmm1, xmm3 */
/* 40acb8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40acbb: movapd xmm0, xmm1 */
  guest_unsupported(0x40acbb); /* movapd xmm0, xmm1 */
/* 40acbf: addpd xmm1, xmm2 */
  guest_unsupported(0x40acbf); /* addpd xmm1, xmm2 */
/* 40acc3: unpckhpd xmm0, xmm0 */
  guest_unsupported(0x40acc3); /* unpckhpd xmm0, xmm0 */
/* 40acc7: addsd xmm0, xmm1 */
  guest_unsupported(0x40acc7); /* addsd xmm0, xmm1 */
/* 40accb: addsd xmm0, xmm6 */
  guest_unsupported(0x40accb); /* addsd xmm0, xmm6 */
/* 40accf: addsd xmm0, xmm7 */
  guest_unsupported(0x40accf); /* addsd xmm0, xmm7 */
/* 40acd3: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40acd3); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40acd9: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40acdd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40ace0: ret  */
  esp += 4; SPILL(); return;
L_40ace1: /* 40ace1: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40ace1); /* movlpd xmm0, qword ptr [esp + 4] */
/* 40ace7: movapd xmm1, xmmword ptr [0x4423b0] */
  guest_unsupported(0x40ace7); /* movapd xmm1, xmmword ptr [0x4423b0] */
/* 40acef: cmpeqsd xmm1, xmm0 */
  guest_unsupported(0x40acef); /* cmpeqsd xmm1, xmm0 */
/* 40acf4: pextrw eax, xmm1, 0 */
  guest_unsupported(0x40acf4); /* pextrw eax, xmm1, 0 */
/* 40acf9: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40acfc: ja 0x40ad46 */
  if ((!cf && !zf)) goto L_40ad46;
L_40acfe: /* 40acfe: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ad01: je 0x40ad61 */
  if (zf) goto L_40ad61;
L_40ad03: /* 40ad03: cmp ecx, 0x7fe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7feu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40ad09: ja 0x40ad77 */
  if ((!cf && !zf)) goto L_40ad77;
L_40ad0b: /* 40ad0b: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40ad0b); /* movlpd xmm0, qword ptr [esp + 4] */
/* 40ad11: movapd xmm1, xmmword ptr [0x442330] */
  guest_unsupported(0x40ad11); /* movapd xmm1, xmmword ptr [0x442330] */
/* 40ad19: movapd xmm2, xmmword ptr [0x4423a0] */
  guest_unsupported(0x40ad19); /* movapd xmm2, xmmword ptr [0x4423a0] */
/* 40ad21: andpd xmm0, xmm1 */
  guest_unsupported(0x40ad21); /* andpd xmm0, xmm1 */
/* 40ad25: orpd xmm0, xmm2 */
  guest_unsupported(0x40ad25); /* orpd xmm0, xmm2 */
/* 40ad29: cmpeqsd xmm2, xmm0 */
  guest_unsupported(0x40ad29); /* cmpeqsd xmm2, xmm0 */
/* 40ad2e: pextrw eax, xmm2, 0 */
  guest_unsupported(0x40ad2e); /* pextrw eax, xmm2, 0 */
/* 40ad33: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ad36: je 0x40ad3f */
  if (zf) goto L_40ad3f;
L_40ad38: /* 40ad38: fld qword ptr [0x4423d8] */
  { double v = F64((uint32_t)(0x4423d8u)); FPUSH(v); }
/* 40ad3e: ret  */
  esp += 4; SPILL(); return;
L_40ad3f: /* 40ad3f: mov edx, 0x3e9 */
  edx = 0x3e9u;
/* 40ad44: jmp 0x40ad95 */
  goto L_40ad95;
L_40ad46: /* 40ad46: movlpd xmm2, qword ptr [0x4423a0] */
  guest_unsupported(0x40ad46); /* movlpd xmm2, qword ptr [0x4423a0] */
/* 40ad4e: divsd xmm2, xmm0 */
  guest_unsupported(0x40ad4e); /* divsd xmm2, xmm0 */
/* 40ad52: movlpd xmm1, qword ptr [0x4423d0] */
  guest_unsupported(0x40ad52); /* movlpd xmm1, qword ptr [0x4423d0] */
/* 40ad5a: mov edx, 8 */
  edx = 0x8u;
/* 40ad5f: jmp 0x40ad95 */
  goto L_40ad95;
L_40ad61: /* 40ad61: movlpd xmm1, qword ptr [0x4423c0] */
  guest_unsupported(0x40ad61); /* movlpd xmm1, qword ptr [0x4423c0] */
/* 40ad69: mulsd xmm0, xmm1 */
  guest_unsupported(0x40ad69); /* mulsd xmm0, xmm1 */
/* 40ad6d: mov edx, 0xffffffcc */
  edx = 0xffffffccu;
/* 40ad72: jmp 0x40ab8e */
  goto L_40ab8e;
L_40ad77: /* 40ad77: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40ad7a: and ecx, 0x7ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40ad80: cmp ecx, 0x7ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40ad86: jae 0x40adc2 */
  if (!cf) goto L_40adc2;
L_40ad88: /* 40ad88: xorpd xmm1, xmm1 */
  guest_unsupported(0x40ad88); /* xorpd xmm1, xmm1 */
/* 40ad8c: divsd xmm1, xmm1 */
  guest_unsupported(0x40ad8c); /* divsd xmm1, xmm1 */
/* 40ad90: mov edx, 9 */
  edx = 0x9u;
L_40ad95: /* 40ad95: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40ad98: movlpd qword ptr [esp + 0x10], xmm1 */
  guest_unsupported(0x40ad98); /* movlpd qword ptr [esp + 0x10], xmm1 */
/* 40ad9e: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 40ada2: mov edx, esp */
  edx = esp;
/* 40ada4: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40ada7: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 40adab: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40adae: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 40adb2: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 40adb5: call 0x436052 */
  esp -= 4; W32(esp, 0x40adbau); SPILL(); f_436052(); if (g_unwind) return; RELOAD();
/* 40adba: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 40adbe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40adc1: ret  */
  esp += 4; SPILL(); return;
L_40adc2: /* 40adc2: movlpd xmm2, qword ptr [esp + 4] */
  guest_unsupported(0x40adc2); /* movlpd xmm2, qword ptr [esp + 4] */
/* 40adc8: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40adc8); /* movlpd xmm0, qword ptr [esp + 4] */
/* 40adce: movd eax, xmm2 */
  guest_unsupported(0x40adce); /* movd eax, xmm2 */
/* 40add2: psrlq xmm2, 0x20 */
  guest_unsupported(0x40add2); /* psrlq xmm2, 0x20 */
/* 40add7: movd ecx, xmm2 */
  guest_unsupported(0x40add7); /* movd ecx, xmm2 */
/* 40addb: and ecx, 0xfffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40ade1: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40ade3: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ade6: je 0x40ad88 */
  if (zf) goto L_40ad88;
L_40ade8: /* 40ade8: mov edx, 0x3e9 */
  edx = 0x3e9u;
/* 40aded: jmp 0x40ad95 */
  goto L_40ad95;
}
