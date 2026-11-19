#include "recomp.h"
#include "rec_mod.h"

void f_904c7a(void) {
  LOAD_REGS();
L_904c7a: /* 904c7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_904c80: /* 904c80: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 904c83: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 904c89: cmp edi, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 904c8c: jge 0x904d77 */
  if ((sf == of)) goto L_904d77;
L_904c92: /* 904c92: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 904c95: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 904c98: mov ecx, dword ptr [eax + edx*8 + 0x10] */
  ecx = R32((uint32_t)(eax + edx*8 + 0x10u));
/* 904c9c: lea esi, [eax + edx*8] */
  esi = (uint32_t)(eax + edx*8);
/* 904c9f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x904ca5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 904ca5: lea ecx, [ebp - 0x2bc] */
  ecx = (uint32_t)(ebp + 0xfffffd44u);
/* 904cab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904cac: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* 904caf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904cb1: call dword ptr [0xcfacd8] */
  esp -= 4; W32(esp, 0x904cb7u); SPILL(); f_4e368e(); if (g_unwind) return; /* Core!?appFindPackageFile@@YAHPBGPBVFGuid@@PAG@Z */ RELOAD();
/* 904cb7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904cba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904cbc: jne 0x904d71 */
  if (!zf) goto L_904d71;
L_904cc2: /* 904cc2: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 904cc5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x904ccbu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 904ccb: push 0xaf2150 */
  { uint32_t v = 0xaf2150u; esp -= 4; W32(esp, v); }
/* 904cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904cd1: lea eax, [ebp - 0x2bc] */
  eax = (uint32_t)(ebp + 0xfffffd44u);
/* 904cd7: push 0xaf215c */
  { uint32_t v = 0xaf215cu; esp -= 4; W32(esp, v); }
/* 904cdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904cdd: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x904ce3u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 904ce3: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 904ce9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 904ceb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 904ced: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904cf0: lea eax, [ebp - 0x2bc] */
  eax = (uint32_t)(ebp + 0xfffffd44u);
/* 904cf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904cf7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x904cfau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 904cfa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 904cfc: jg 0x904d71 */
  if ((!zf && sf == of)) goto L_904d71;
L_904cfe: /* 904cfe: inc dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x70u), r);
  }
/* 904d01: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 904d04: or eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 904d09: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 904d0c: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 904d0f: mov edx, dword ptr [ecx + 0x74] */
  edx = R32((uint32_t)(ecx + 0x74u));
/* 904d12: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 904d14: je 0x904d1a */
  if (zf) goto L_904d1a;
L_904d16: /* 904d16: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 904d18: jne 0x904d71 */
  if (!zf) goto L_904d71;
L_904d1a: /* 904d1a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 904d1d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x904d23u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 904d23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904d24: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 904d27: push 0xaf2168 */
  { uint32_t v = 0xaf2168u; esp -= 4; W32(esp, v); }
/* 904d2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 904d2d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x904d33u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 904d33: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904d36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904d37: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* 904d3a: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 904d3e: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x904d44u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 904d44: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 904d47: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 904d4b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x904d51u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 904d51: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 904d54: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 904d57: mov dword ptr [ecx + 0x6c], 1 */
  W32((uint32_t)(ecx + 0x6cu), 0x1u);
/* 904d5e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904d61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 904d68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 904d69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 904d6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 904d6b: mov esp, ebp */
  esp = ebp;
/* 904d6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 904d6e: ret 8 */
  esp += 12; SPILL(); return;
L_904d71: /* 904d71: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 904d72: jmp 0x904c80 */
  goto L_904c80;
L_904d77: /* 904d77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 904d78: lea ecx, [ebx - 0x28] */
  ecx = (uint32_t)(ebx + 0xffffffd8u);
/* 904d7b: call 0x6c155f */
  esp -= 4; W32(esp, 0x904d80u); SPILL(); f_6c155f(); if (g_unwind) return; RELOAD();
/* 904d80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 904d83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 904d84: mov dword ptr [ebx + 0x64], 1 */
  W32((uint32_t)(ebx + 0x64u), 0x1u);
/* 904d8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 904d8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 904d93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 904d94: mov esp, ebp */
  esp = ebp;
/* 904d96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 904d97: ret 8 */
  esp += 12; SPILL(); return;
}

void f_904d9a(void) {
  LOAD_REGS();
L_904d9a: /* 904d9a: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 904d9d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 904da2: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 904da5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 904da6: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 904da9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x904daeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_904dae(); return;
}

void f_904dae(void) {
  LOAD_REGS();
L_904dae: /* 904dae: push 0xa20c98 */
  { uint32_t v = 0xa20c98u; esp -= 4; W32(esp, v); }
/* 904db3: push 0xaf21a4 */
  { uint32_t v = 0xaf21a4u; esp -= 4; W32(esp, v); }
/* 904db8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x904dbeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 904dbe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 904dc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904dc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 904dc5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x904dcau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_904dca: guest_badaddr(0x904dca); return;
}

void f_904fc0(void) {
  LOAD_REGS();
L_904fc0: /* 904fc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 904fc1: mov esi, ecx */
  esi = ecx;
/* 904fc3: call 0x6c7d6a */
  esp -= 4; W32(esp, 0x904fc8u); SPILL(); f_6c7d6a(); if (g_unwind) return; RELOAD();
/* 904fc8: mov dword ptr [esi], 0xa20d18 */
  W32((uint32_t)(esi), 0xa20d18u);
/* 904fce: mov dword ptr [esi + 0x28], 0xa20cf0 */
  W32((uint32_t)(esi + 0x28u), 0xa20cf0u);
/* 904fd5: mov eax, esi */
  eax = esi;
/* 904fd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 904fd8: ret  */
  esp += 4; SPILL(); return;
}

void f_904ff0(void) {
  LOAD_REGS();
L_904ff0: /* 904ff0: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 904ff3: ret  */
  esp += 4; SPILL(); return;
}

void f_905010(void) {
  LOAD_REGS();
L_905010: /* 905010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905011: mov esi, ecx */
  esi = ecx;
/* 905013: call 0x6c5e70 */
  esp -= 4; W32(esp, 0x905018u); SPILL(); f_6c5e70(); if (g_unwind) return; RELOAD();
/* 905018: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90501d: je 0x90502e */
  if (zf) goto L_90502e;
L_90501f: /* 90501f: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 905024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905025: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x90502bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 90502b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90502e: /* 90502e: mov eax, esi */
  eax = esi;
/* 905030: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905031: ret 4 */
  esp += 8; SPILL(); return;
}

void f_905050(void) {
  LOAD_REGS();
L_905050: /* 905050: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 905052: push 0x9da158 */
  { uint32_t v = 0x9da158u; esp -= 4; W32(esp, v); }
/* 905057: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 90505d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90505e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 905065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 905066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905067: mov esi, ecx */
  esi = ecx;
/* 905069: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 90506d: mov dword ptr [esi], 0xa20d18 */
  W32((uint32_t)(esi), 0xa20d18u);
/* 905073: mov dword ptr [esi + 0x28], 0xa20cf0 */
  W32((uint32_t)(esi + 0x28u), 0xa20cf0u);
/* 90507a: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 905082: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x905088u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 905088: mov ecx, esi */
  ecx = esi;
/* 90508a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 905092: call 0x6cc824 */
  esp -= 4; W32(esp, 0x905097u); SPILL(); f_6cc824(); if (g_unwind) return; RELOAD();
/* 905097: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90509b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90509c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9050a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9050a6: ret  */
  esp += 4; SPILL(); return;
}

void f_9050d0(void) {
  LOAD_REGS();
L_9050d0: /* 9050d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9050d2: push 0x9da178 */
  { uint32_t v = 0x9da178u; esp -= 4; W32(esp, v); }
/* 9050d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9050dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9050de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9050e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9050e6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9050ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9050eb: mov esi, ecx */
  esi = ecx;
/* 9050ed: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9050f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9050f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9050f3: mov ecx, esi */
  ecx = esi;
/* 9050f5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 9050f9: call 0x6c2eff */
  esp -= 4; W32(esp, 0x9050feu); SPILL(); f_6c2eff(); if (g_unwind) return; RELOAD();
/* 9050fe: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 905104: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 90510c: mov dword ptr [esi], 0xa1fb18 */
  W32((uint32_t)(esi), 0xa1fb18u);
/* 905112: mov dword ptr [esi + 0x28], 0xa1faec */
  W32((uint32_t)(esi + 0x28u), 0xa1faecu);
/* 905119: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x90511fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 90511f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 905123: mov eax, esi */
  eax = esi;
/* 905125: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905126: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90512d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905130: ret 8 */
  esp += 12; SPILL(); return;
}

void f_905160(void) {
  LOAD_REGS();
L_905160: /* 905160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 905161: mov ebp, esp */
  ebp = esp;
/* 905163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 905165: push 0x9da198 */
  { uint32_t v = 0x9da198u; esp -= 4; W32(esp, v); }
/* 90516a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 905170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 905178: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90517b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 90517e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90517f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905180: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905181: mov esi, ecx */
  esi = ecx;
/* 905183: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 905186: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 905189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90518a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90518b: mov ecx, esi */
  ecx = esi;
/* 90518d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 905190: call 0x6c648d */
  esp -= 4; W32(esp, 0x905195u); SPILL(); f_6c648d(); if (g_unwind) return; RELOAD();
/* 905195: xor edi, edi */
  edi = 0;
/* 905197: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 90519a: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 90519d: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 9051a3: push 0xcf21d8 */
  { uint32_t v = 0xcf21d8u; esp -= 4; W32(esp, v); }
/* 9051a8: mov dword ptr [esi], 0xa20d18 */
  W32((uint32_t)(esi), 0xa20d18u);
/* 9051ae: mov dword ptr [ebx], 0xa20cf0 */
  W32((uint32_t)(ebx), 0xa20cf0u);
/* 9051b4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 9051b8: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x9051beu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 9051be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9051bf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9051c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9051c2: push 0xaf1d70 */
  { uint32_t v = 0xaf1d70u; esp -= 4; W32(esp, v); }
/* 9051c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9051c8: push 0xcf1a90 */
  { uint32_t v = 0xcf1a90u; esp -= 4; W32(esp, v); }
/* 9051cd: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 9051d0: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x9051d6u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 9051d6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9051d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9051db: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 9051de: mov edi, eax */
  edi = eax;
/* 9051e0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x9051e6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 9051e6: push 0xcf1a90 */
  { uint32_t v = 0xcf1a90u; esp -= 4; W32(esp, v); }
/* 9051eb: mov ecx, edi */
  ecx = edi;
/* 9051ed: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x9051f3u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 9051f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9051f5: jne 0x90520f */
  if (!zf) goto L_90520f;
L_9051f7: /* 9051f7: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 9051fc: push 0xaf2390 */
  { uint32_t v = 0xaf2390u; esp -= 4; W32(esp, v); }
/* 905201: push 0xaf23d4 */
  { uint32_t v = 0xaf23d4u; esp -= 4; W32(esp, v); }
/* 905206: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x90520cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 90520c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90520f: /* 90520f: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x905215u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 905215: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 90521b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 90521d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 905220: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 905222: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 905223: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 905225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 905227: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905229: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90522a: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x905230u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 905230: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905233: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 905239: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90523a: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 90523d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90523e: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 905241: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 905243: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 905244: mov ecx, eax */
  ecx = eax;
/* 905246: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x905249u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 905249: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90524b: je 0x90527f */
  if (zf) goto L_90527f;
L_90524d: /* 90524d: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 905250: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 905253: push 0x8b2 */
  { uint32_t v = 0x8b2u; esp -= 4; W32(esp, v); }
/* 905258: push 0x7d0 */
  { uint32_t v = 0x7d0u; esp -= 4; W32(esp, v); }
/* 90525d: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905260: push 0xaf1db0 */
  { uint32_t v = 0xaf1db0u; esp -= 4; W32(esp, v); }
/* 905265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905266: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x90526cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 90526c: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 90526f: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 905272: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 905274: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905277: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x90527du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90527d: jmp 0x905294 */
  goto L_905294;
L_90527f: /* 90527f: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 905282: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905284: je 0x90528d */
  if (zf) goto L_90528d;
L_905286: /* 905286: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 905288: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90528a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x90528du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90528d: /* 90528d: mov dword ptr [esi + 0x3c], 0 */
  W32((uint32_t)(esi + 0x3cu), 0x0u);
L_905294: /* 905294: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 905297: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905298: mov eax, esi */
  eax = esi;
/* 90529a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90529b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9052a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9052a3: mov esp, ebp */
  esp = ebp;
/* 9052a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9052a6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9052a9(void) {
  LOAD_REGS();
L_9052a9: /* 9052a9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9052ac: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 9052b1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 9052b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9052b5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 9052b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9052bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_9052bd(); return;
}

void f_9052bd(void) {
  LOAD_REGS();
L_9052bd: /* 9052bd: push 0xa20da8 */
  { uint32_t v = 0xa20da8u; esp -= 4; W32(esp, v); }
/* 9052c2: push 0xaf1df4 */
  { uint32_t v = 0xaf1df4u; esp -= 4; W32(esp, v); }
/* 9052c7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x9052cdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 9052cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9052d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9052d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9052d4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x9052d9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_9052d9: guest_badaddr(0x9052d9); return;
}

void f_905340(void) {
  LOAD_REGS();
L_905340: /* 905340: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 905344: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905346: je 0x90534d */
  if (zf) goto L_90534d;
L_905348: /* 905348: jmp 0x6c7194 */
  SPILL(); f_6c7194(); return;
L_90534d: /* 90534d: ret  */
  esp += 4; SPILL(); return;
}

void f_905360(void) {
  LOAD_REGS();
L_905360: /* 905360: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 905364: mov byte ptr [0xcf2e78], al */
  W8((uint32_t)(0xcf2e78u), (eax & 0xffu));
/* 905369: ret  */
  esp += 4; SPILL(); return;
}

void f_905370(void) {
  LOAD_REGS();
L_905370: /* 905370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 905374: mov dword ptr [0xaf2594], eax */
  W32((uint32_t)(0xaf2594u), eax);
/* 905379: ret  */
  esp += 4; SPILL(); return;
}

void f_905380(void) {
  LOAD_REGS();
L_905380: /* 905380: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 905384: mov byte ptr [0xaf2598], al */
  W8((uint32_t)(0xaf2598u), (eax & 0xffu));
/* 905389: ret  */
  esp += 4; SPILL(); return;
}

void f_905390(void) {
  LOAD_REGS();
L_905390: /* 905390: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 905394: mov dword ptr [0xcf2e74], eax */
  W32((uint32_t)(0xcf2e74u), eax);
/* 905399: ret  */
  esp += 4; SPILL(); return;
}

void f_9053a0(void) {
  LOAD_REGS();
L_9053a0: /* 9053a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9053a2: push 0x9da1ee */
  { uint32_t v = 0x9da1eeu; esp -= 4; W32(esp, v); }
/* 9053a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9053ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9053ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9053b5: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9053b8: mov al, byte ptr [esp + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x80u))) & 0xffu);
/* 9053bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9053c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9053c1: xor ebp, ebp */
  ebp = 0;
/* 9053c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9053c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9053c5: mov byte ptr [esp + 0x44], al */
  W8((uint32_t)(esp + 0x44u), (eax & 0xffu));
/* 9053c9: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 9053cd: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* 9053d1: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 9053d5: mov edi, dword ptr [esp + 0x88] */
  edi = R32((uint32_t)(esp + 0x88u));
/* 9053dc: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 9053e0: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9053e2: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 9053e6: jbe 0x905407 */
  if ((cf | zf)) goto L_905407;
L_9053e8: /* 9053e8: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9053ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9053ed: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 9053f1: call 0x905c60 */
  esp -= 4; W32(esp, 0x9053f6u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 9053f6: mov edx, edi */
  edx = edi;
/* 9053f8: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 9053fc: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9053fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9053ff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 905400: call 0x905c80 */
  esp -= 4; W32(esp, 0x905405u); SPILL(); f_905c80(); if (g_unwind) return; RELOAD();
/* 905405: jmp 0x90542a */
  goto L_90542a;
L_905407: /* 905407: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 90540b: call 0x905c60 */
  esp -= 4; W32(esp, 0x905410u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 905410: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905412: jae 0x90542a */
  if (!cf) goto L_90542a;
L_905414: /* 905414: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 905418: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 90541c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90541d: lea edx, [ecx + edi*2] */
  edx = (uint32_t)(ecx + edi*2);
/* 905420: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 905424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905425: call 0x905e90 */
  esp -= 4; W32(esp, 0x90542au); SPILL(); f_905e90(); if (g_unwind) return; RELOAD();
L_90542a: /* 90542a: xor esi, esi */
  esi = 0;
/* 90542c: xor eax, eax */
  eax = 0;
/* 90542e: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 905430: jbe 0x905455 */
  if ((cf | zf)) goto L_905455;
L_905432: /* 905432: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
L_905439: /* 905439: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 90543d: mov cx, word ptr [edx + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 905441: mov word ptr [ebx + eax*2], cx */
  W16((uint32_t)(ebx + eax*2), (ecx & 0xffffu));
/* 905445: mov cx, word ptr [edx + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 905449: cmp cx, si */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 90544c: jbe 0x905450 */
  if ((cf | zf)) goto L_905450;
L_90544e: /* 90544e: mov esi, ecx */
  esi = ecx;
L_905450: /* 905450: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 905451: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905453: jb 0x905439 */
  if (cf) goto L_905439;
L_905455: /* 905455: mov dl, byte ptr [esp + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x90u))) & 0xffu);
/* 90545c: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 905460: mov byte ptr [esp + 0x24], dl */
  W8((uint32_t)(esp + 0x24u), (edx & 0xffu));
/* 905464: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 905468: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 90546c: mov al, byte ptr [esp + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x90u))) & 0xffu);
/* 905473: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 905477: mov byte ptr [esp + 0x14], al */
  W8((uint32_t)(esp + 0x14u), (eax & 0xffu));
/* 90547b: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 90547f: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 905483: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 905487: mov byte ptr [esp + 0x7c], 2 */
  W8((uint32_t)(esp + 0x7cu), 0x2u);
/* 90548c: call 0x905ee0 */
  esp -= 4; W32(esp, 0x905491u); SPILL(); f_905ee0(); if (g_unwind) return; RELOAD();
/* 905491: mov eax, dword ptr [0xcf2e74] */
  eax = R32((uint32_t)(0xcf2e74u));
/* 905496: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 90549a: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 90549e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90549f: mov ecx, dword ptr [0xaf2594] */
  ecx = R32((uint32_t)(0xaf2594u));
/* 9054a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9054a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9054a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9054a8: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 9054ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9054ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9054ae: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 9054b2: mov byte ptr [esp + 0x94], 3 */
  W8((uint32_t)(esp + 0x94u), 0x3u);
/* 9054ba: call 0x908020 */
  esp -= 4; W32(esp, 0x9054bfu); SPILL(); f_908020(); if (g_unwind) return; RELOAD();
/* 9054bf: mov al, byte ptr [esp + 0x90] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x90u))) & 0xffu);
/* 9054c6: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 9054ca: mov byte ptr [esp + 0x34], al */
  W8((uint32_t)(esp + 0x34u), (eax & 0xffu));
/* 9054ce: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 9054d2: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 9054d6: mov al, byte ptr [0xcf2e78] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf2e78u))) & 0xffu);
/* 9054db: mov bl, 4 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* 9054dd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9054df: mov byte ptr [esp + 0x7c], bl */
  W8((uint32_t)(esp + 0x7cu), (ebx & 0xffu));
/* 9054e3: mov dword ptr [esp + 0x88], ebp */
  W32((uint32_t)(esp + 0x88u), ebp);
/* 9054ea: je 0x9056ec */
  if (zf) goto L_9056ec;
L_9054f0: /* 9054f0: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 9054f7: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9054f9: mov word ptr [ecx], 1 */
  W16((uint32_t)(ecx), 0x1u);
/* 9054fe: call 0x6c242d */
  esp -= 4; W32(esp, 0x905503u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 905503: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905506: mov dword ptr [esp + 0x90], eax */
  W32((uint32_t)(esp + 0x90u), eax);
/* 90550d: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90550f: mov byte ptr [esp + 0x7c], 5 */
  W8((uint32_t)(esp + 0x7cu), 0x5u);
/* 905514: je 0x905535 */
  if (zf) goto L_905535;
L_905516: /* 905516: push 0x6c6b5e */
  { uint32_t v = 0x6c6b5eu; esp -= 4; W32(esp, v); }
/* 90551b: push 0x905ec0 */
  { uint32_t v = 0x905ec0u; esp -= 4; W32(esp, v); }
/* 905520: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 905523: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 905525: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 905527: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905528: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 90552e: call 0x99cafe */
  esp -= 4; W32(esp, 0x905533u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 905533: jmp 0x905537 */
  goto L_905537;
L_905535: /* 905535: xor edi, edi */
  edi = 0;
L_905537: /* 905537: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 90553e: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 905542: mov byte ptr [esp + 0x7c], bl */
  W8((uint32_t)(esp + 0x7cu), (ebx & 0xffu));
/* 905546: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 90554a: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 90554c: xor ebp, ebp */
  ebp = 0;
/* 90554e: xor edx, edx */
  edx = 0;
L_905550: /* 905550: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905552: je 0x905588 */
  if (zf) goto L_905588;
L_905554: /* 905554: mov eax, ebx */
  eax = ebx;
/* 905556: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905558: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90555b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90555d: jae 0x905588 */
  if (!cf) goto L_905588;
L_90555f: /* 90555f: mov eax, dword ptr [esi + edx*4] */
  eax = R32((uint32_t)(esi + edx*4));
/* 905562: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905565: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 905568: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90556a: jne 0x905577 */
  if (!zf) goto L_905577;
L_90556c: /* 90556c: xor eax, eax */
  eax = 0;
/* 90556e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 90556f: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 905572: lea ebp, [ecx + eax*2] */
  ebp = (uint32_t)(ecx + eax*2);
/* 905575: jmp 0x905550 */
  goto L_905550;
L_905577: /* 905577: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 90557a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90557c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90557f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 905580: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 905583: lea ebp, [ecx + eax*2] */
  ebp = (uint32_t)(ecx + eax*2);
/* 905586: jmp 0x905550 */
  goto L_905550;
L_905588: /* 905588: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 90558c: xor ebx, ebx */
  ebx = 0;
/* 90558e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905590: jne 0x905596 */
  if (!zf) goto L_905596;
L_905592: /* 905592: xor eax, eax */
  eax = 0;
/* 905594: jmp 0x90559f */
  goto L_90559f;
L_905596: /* 905596: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 90559a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90559c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_90559f: /* 90559f: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* 9055a2: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 9055a4: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 9055a7: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 9055aa: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9055ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9055ad: call 0x6c242d */
  esp -= 4; W32(esp, 0x9055b2u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9055b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9055b5: xor ebp, ebp */
  ebp = 0;
/* 9055b7: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 9055ba: xor edx, edx */
  edx = 0;
L_9055bc: /* 9055bc: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9055c0: mov dword ptr [esp + 0x90], edx */
  W32((uint32_t)(esp + 0x90u), edx);
/* 9055c7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9055c9: je 0x905686 */
  if (zf) goto L_905686;
L_9055cf: /* 9055cf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9055d3: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9055d5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9055d8: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9055da: jae 0x905686 */
  if (!cf) goto L_905686;
L_9055e0: /* 9055e0: xor esi, esi */
  esi = 0;
L_9055e2: /* 9055e2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9055e6: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 9055e9: mov ebx, dword ptr [ecx + 0x10] */
  ebx = R32((uint32_t)(ecx + 0x10u));
/* 9055ec: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9055ee: je 0x90567e */
  if (zf) goto L_90567e;
L_9055f4: /* 9055f4: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 9055f7: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9055f9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9055fc: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9055fe: jae 0x90567e */
  if (!cf) goto L_90567e;
L_905600: /* 905600: mov ecx, ebx */
  ecx = ebx;
/* 905602: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 905605: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905606: call 0x9082e0 */
  esp -= 4; W32(esp, 0x90560bu); SPILL(); f_9082e0(); if (g_unwind) return; RELOAD();
/* 90560b: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 905612: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905615: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 905617: jne 0x90566f */
  if (!zf) goto L_90566f;
L_905619: /* 905619: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 90561d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 90561e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 90561f: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 905622: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 905623: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 905624: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 905627: mov ecx, dword ptr [eax + esi*4 - 4] */
  ecx = R32((uint32_t)(eax + esi*4 + 0xfffffffcu));
/* 90562b: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90562e: mov cx, word ptr [ecx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 905631: mov word ptr [eax + ebp*2 - 6], cx */
  W16((uint32_t)(eax + ebp*2 + 0xfffffffau), (ecx & 0xffffu));
/* 905636: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 90563a: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 90563d: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 905640: mov ecx, dword ptr [eax + esi*4 - 4] */
  ecx = R32((uint32_t)(eax + esi*4 + 0xfffffffcu));
/* 905644: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 905647: mov cx, word ptr [ecx + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 90564b: mov word ptr [eax + ebp*2 - 4], cx */
  W16((uint32_t)(eax + ebp*2 + 0xfffffffcu), (ecx & 0xffffu));
/* 905650: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 905654: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 905657: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 90565a: mov ecx, dword ptr [eax + esi*4 - 4] */
  ecx = R32((uint32_t)(eax + esi*4 + 0xfffffffcu));
/* 90565e: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 905661: mov cx, word ptr [ecx + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x8u))) & 0xffffu);
/* 905665: mov word ptr [eax + ebp*2 - 2], cx */
  W16((uint32_t)(eax + ebp*2 + 0xfffffffeu), (ecx & 0xffffu));
/* 90566a: jmp 0x9055e2 */
  goto L_9055e2;
L_90566f: /* 90566f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 905672: add eax, -3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905675: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 905676: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 905679: jmp 0x9055e2 */
  goto L_9055e2;
L_90567e: /* 90567e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 90567f: xor ebx, ebx */
  ebx = 0;
/* 905681: jmp 0x9055bc */
  goto L_9055bc;
L_905686: /* 905686: xor ecx, ecx */
  ecx = 0;
/* 905688: lea eax, [ebp + ebp] */
  eax = (uint32_t)(ebp + ebp);
L_90568c: /* 90568c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 905690: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 905694: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905696: je 0x905930 */
  if (zf) goto L_905930;
L_90569c: /* 90569c: mov esi, ebp */
  esi = ebp;
/* 90569e: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9056a0: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 9056a3: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9056a5: jae 0x905930 */
  if (!cf) goto L_905930;
L_9056ab: /* 9056ab: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 9056ae: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 9056b1: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9056b4: mov dx, word ptr [edx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 9056b7: mov word ptr [eax + esi - 2], dx */
  W16((uint32_t)(eax + esi + 0xfffffffeu), (edx & 0xffffu));
/* 9056bc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9056c0: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 9056c3: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9056c6: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 9056c9: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9056cc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9056cd: mov dx, word ptr [edx + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x4u))) & 0xffffu);
/* 9056d1: mov word ptr [eax + esi - 4], dx */
  W16((uint32_t)(eax + esi + 0xfffffffcu), (edx & 0xffffu));
/* 9056d6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9056da: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 9056dd: mov edx, dword ptr [edx + ecx*4 - 4] */
  edx = R32((uint32_t)(edx + ecx*4 + 0xfffffffcu));
/* 9056e1: mov dx, word ptr [edx + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x8u))) & 0xffffu);
/* 9056e5: mov word ptr [eax + esi - 2], dx */
  W16((uint32_t)(eax + esi + 0xfffffffeu), (edx & 0xffffu));
/* 9056ea: jmp 0x90568c */
  goto L_90568c;
L_9056ec: /* 9056ec: mov cl, byte ptr [0xaf2598] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xaf2598u))) & 0xffu);
/* 9056f2: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 9056f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9056fa: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 9056fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9056ff: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 905703: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905705: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 905709: call 0x907b40 */
  esp -= 4; W32(esp, 0x90570eu); SPILL(); f_907b40(); if (g_unwind) return; RELOAD();
/* 90570e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 905715: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 905719: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 905720: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905722: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 905725: je 0x90573d */
  if (zf) goto L_90573d;
L_905727: /* 905727: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 90572b: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 90572d: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  zf = r == 0;
  esi = r;
  }
/* 905730: mov dword ptr [esp + 0x84], esi */
  W32((uint32_t)(esp + 0x84u), esi);
/* 905737: je 0x90573d */
  if (zf) goto L_90573d;
L_905739: /* 905739: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90573a: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
L_90573d: /* 90573d: xor esi, esi */
  esi = 0;
/* 90573f: mov si, word ptr [edx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 905742: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 905745: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* 90574c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90574d: call 0x6c242d */
  esp -= 4; W32(esp, 0x905752u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 905752: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905755: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 90575c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90575e: mov byte ptr [esp + 0x7c], 6 */
  W8((uint32_t)(esp + 0x7cu), 0x6u);
/* 905763: je 0x905786 */
  if (zf) goto L_905786;
L_905765: /* 905765: push 0x6c6b5e */
  { uint32_t v = 0x6c6b5eu; esp -= 4; W32(esp, v); }
/* 90576a: push 0x905ec0 */
  { uint32_t v = 0x905ec0u; esp -= 4; W32(esp, v); }
/* 90576f: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 905772: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905773: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 905775: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905776: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 905778: call 0x99cafe */
  esp -= 4; W32(esp, 0x90577du); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 90577d: mov dword ptr [esp + 0x84], edi */
  W32((uint32_t)(esp + 0x84u), edi);
/* 905784: jmp 0x90578d */
  goto L_90578d;
L_905786: /* 905786: mov dword ptr [esp + 0x84], ebp */
  W32((uint32_t)(esp + 0x84u), ebp);
L_90578d: /* 90578d: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 905794: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 90579b: mov byte ptr [esp + 0x7c], bl */
  W8((uint32_t)(esp + 0x7cu), (ebx & 0xffu));
/* 90579f: xor ebp, ebp */
  ebp = 0;
/* 9057a1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9057a3: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 9057aa: xor ebx, ebx */
  ebx = 0;
/* 9057ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 9057ae: jbe 0x90584d */
  if ((cf | zf)) goto L_90584d;
L_9057b4: /* 9057b4: mov edx, ecx */
  edx = ecx;
/* 9057b6: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
L_9057b9: /* 9057b9: mov al, byte ptr [0xaf2598] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xaf2598u))) & 0xffu);
/* 9057be: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9057c0: jne 0x9057e8 */
  if (!zf) goto L_9057e8;
L_9057c2: /* 9057c2: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9057c6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9057ca: mov esi, ebp */
  esi = ebp;
L_9057cc: /* 9057cc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9057ce: je 0x9057e4 */
  if (zf) goto L_9057e4;
L_9057d0: /* 9057d0: mov eax, edx */
  eax = edx;
/* 9057d2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9057d4: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9057d7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9057d9: jae 0x9057e4 */
  if (!cf) goto L_9057e4;
L_9057db: /* 9057db: cmp dword ptr [ecx + esi*4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9057df: je 0x9057e4 */
  if (zf) goto L_9057e4;
L_9057e1: /* 9057e1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9057e2: jmp 0x9057cc */
  goto L_9057cc;
L_9057e4: /* 9057e4: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9057e6: jmp 0x9057fd */
  goto L_9057fd;
L_9057e8: /* 9057e8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 9057ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9057ee: jne 0x9057f4 */
  if (!zf) goto L_9057f4;
L_9057f0: /* 9057f0: xor esi, esi */
  esi = 0;
/* 9057f2: jmp 0x9057fd */
  goto L_9057fd;
L_9057f4: /* 9057f4: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 9057f8: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9057fa: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
L_9057fd: /* 9057fd: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 905800: mov dword ptr [edi - 8], 1 */
  W32((uint32_t)(edi + 0xfffffff8u), 0x1u);
/* 905807: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905808: call 0x6c242d */
  esp -= 4; W32(esp, 0x90580du); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90580d: mov dword ptr [edi - 4], esi */
  W32((uint32_t)(edi + 0xfffffffcu), esi);
/* 905810: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 905812: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905815: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 905817: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 905819: mov eax, ebp */
  eax = ebp;
/* 90581b: jge 0x905837 */
  if ((sf == of)) goto L_905837;
L_90581d: /* 90581d: xor ecx, ecx */
  ecx = 0;
L_90581f: /* 90581f: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 905823: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 905825: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 905828: mov bp, word ptr [ebp + eax*4] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + eax*4))) & 0xffffu);
/* 90582d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90582e: mov word ptr [ecx + edx - 2], bp */
  W16((uint32_t)(ecx + edx + 0xfffffffeu), (ebp & 0xffffu));
/* 905833: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 905835: jl 0x90581f */
  if ((sf != of)) goto L_90581f;
L_905837: /* 905837: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 90583e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 90583f: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 905842: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905844: lea ebp, [esi + 1] */
  ebp = (uint32_t)(esi + 0x1u);
/* 905847: jb 0x9057b9 */
  if (cf) goto L_9057b9;
L_90584d: /* 90584d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 905851: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 905855: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905857: je 0x90592e */
  if (zf) goto L_90592e;
L_90585d: /* 90585d: mov eax, ebp */
  eax = ebp;
/* 90585f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905861: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  zf = r == 0;
  eax = r;
  }
/* 905864: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 90586b: je 0x90592e */
  if (zf) goto L_90592e;
L_905871: /* 905871: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 905878: xor eax, eax */
  eax = 0;
/* 90587a: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 90587d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 90587e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 905881: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 905888: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 90588b: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 905891: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 905895: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905897: jne 0x90589d */
  if (!zf) goto L_90589d;
L_905899: /* 905899: xor eax, eax */
  eax = 0;
/* 90589b: jmp 0x9058a6 */
  goto L_9058a6;
L_90589d: /* 90589d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9058a1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9058a3: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_9058a6: /* 9058a6: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 9058a9: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9058ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9058ac: call 0x6c242d */
  esp -= 4; W32(esp, 0x9058b1u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9058b1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 9058b4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9058b8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9058bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9058bd: jne 0x9058c3 */
  if (!zf) goto L_9058c3;
L_9058bf: /* 9058bf: xor eax, eax */
  eax = 0;
/* 9058c1: jmp 0x9058cc */
  goto L_9058cc;
L_9058c3: /* 9058c3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9058c7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9058c9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_9058cc: /* 9058cc: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9058cf: xor ecx, ecx */
  ecx = 0;
/* 9058d1: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 9058d4: xor eax, eax */
  eax = 0;
L_9058d6: /* 9058d6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9058da: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9058de: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9058e0: je 0x90592e */
  if (zf) goto L_90592e;
L_9058e2: /* 9058e2: mov edi, ebp */
  edi = ebp;
/* 9058e4: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 9058e6: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 9058e9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9058eb: jae 0x90592e */
  if (!cf) goto L_90592e;
L_9058ed: /* 9058ed: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 9058f0: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 9058f3: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9058f6: mov dx, word ptr [edx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 9058f9: mov word ptr [eax + edi - 2], dx */
  W16((uint32_t)(eax + edi + 0xfffffffeu), (edx & 0xffffu));
/* 9058fe: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 905902: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 905905: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905908: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 90590b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90590e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 90590f: mov dx, word ptr [edx + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x4u))) & 0xffffu);
/* 905913: mov word ptr [eax + edi - 4], dx */
  W16((uint32_t)(eax + edi + 0xfffffffcu), (edx & 0xffffu));
/* 905918: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 90591c: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 90591f: mov edx, dword ptr [edx + ecx*4 - 4] */
  edx = R32((uint32_t)(edx + ecx*4 + 0xfffffffcu));
/* 905923: mov dx, word ptr [edx + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x8u))) & 0xffffu);
/* 905927: mov word ptr [eax + edi - 2], dx */
  W16((uint32_t)(eax + edi + 0xfffffffeu), (edx & 0xffffu));
/* 90592c: jmp 0x9058d6 */
  goto L_9058d6;
L_90592e: /* 90592e: xor ebx, ebx */
  ebx = 0;
L_905930: /* 905930: xor edi, edi */
  edi = 0;
L_905932: /* 905932: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 905936: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905938: je 0x9059c0 */
  if (zf) goto L_9059c0;
L_90593e: /* 90593e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 905942: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905944: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 905947: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905949: jae 0x9059c0 */
  if (!cf) goto L_9059c0;
L_90594b: /* 90594b: xor esi, esi */
  esi = 0;
L_90594d: /* 90594d: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 905951: mov ecx, dword ptr [ebp + edi*4] */
  ecx = R32((uint32_t)(ebp + edi*4));
/* 905955: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 905958: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90595a: je 0x905987 */
  if (zf) goto L_905987;
L_90595c: /* 90595c: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 90595f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905961: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 905964: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905966: jae 0x905987 */
  if (!cf) goto L_905987;
L_905968: /* 905968: mov eax, edx */
  eax = edx;
/* 90596a: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 90596d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90596e: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905973u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905973: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 905977: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90597a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 90597b: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 90597e: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 905981: mov dword ptr [ecx + esi*4 - 4], ebx */
  W32((uint32_t)(ecx + esi*4 + 0xfffffffcu), ebx);
/* 905985: jmp 0x90594d */
  goto L_90594d;
L_905987: /* 905987: mov esi, dword ptr [ebp + edi*4] */
  esi = R32((uint32_t)(ebp + edi*4));
/* 90598b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90598d: je 0x9059aa */
  if (zf) goto L_9059aa;
L_90598f: /* 90598f: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 905992: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905993: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905998u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905999: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 90599c: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 90599f: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 9059a2: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9059a7u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9059a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9059aa: /* 9059aa: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9059ae: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9059af: mov dword ptr [eax + edi*4 - 4], ebx */
  W32((uint32_t)(eax + edi*4 + 0xfffffffcu), ebx);
/* 9059b3: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9059b7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9059bb: jmp 0x905932 */
  goto L_905932;
L_9059c0: /* 9059c0: xor esi, esi */
  esi = 0;
L_9059c2: /* 9059c2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9059c4: je 0x9059ed */
  if (zf) goto L_9059ed;
L_9059c6: /* 9059c6: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 9059c8: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 9059cb: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9059cd: jae 0x9059ed */
  if (!cf) goto L_9059ed;
L_9059cf: /* 9059cf: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 9059d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9059d3: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9059d8u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9059d8: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9059dc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9059df: mov dword ptr [edx + esi*4], ebx */
  W32((uint32_t)(edx + esi*4), ebx);
/* 9059e2: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9059e6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9059ea: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9059eb: jmp 0x9059c2 */
  goto L_9059c2;
L_9059ed: /* 9059ed: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 9059f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9059f2: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9059f7u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9059f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9059fa: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 9059fe: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 905a02: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 905a06: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 905a0a: mov byte ptr [esp + 0x7c], 2 */
  W8((uint32_t)(esp + 0x7cu), 0x2u);
/* 905a0f: call 0x905f00 */
  esp -= 4; W32(esp, 0x905a14u); SPILL(); f_905f00(); if (g_unwind) return; RELOAD();
/* 905a14: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 905a18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 905a19: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905a1eu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905a1e: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 905a22: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 905a26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905a27: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 905a2b: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 905a2f: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905a34u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905a34: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 905a38: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 905a3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905a3d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 905a41: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 905a45: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905a4au); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905a4a: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 905a51: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905a54: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 905a5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905a5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905a5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 905a5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 905a5f: add esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905a62: ret  */
  esp += 4; SPILL(); return;
}

void f_905a70(void) {
  LOAD_REGS();
L_905a70: /* 905a70: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 905a76: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 905a78: push 0x9da20b */
  { uint32_t v = 0x9da20bu; esp -= 4; W32(esp, v); }
/* 905a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905a7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 905a85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 905a86: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 905a87: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 905a8b: and ebp, 0xffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 905a91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905a92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905a93: lea eax, [ebp + ebp*2] */
  eax = (uint32_t)(ebp + ebp*2);
/* 905a97: lea ecx, [eax*4 + 4] */
  ecx = (uint32_t)(eax*4 + 0x4u);
/* 905a9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 905a9f: call 0x6c242d */
  esp -= 4; W32(esp, 0x905aa4u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 905aa4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905aa7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 905aab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905aad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 905ab5: je 0x905ad3 */
  if (zf) goto L_905ad3;
L_905ab7: /* 905ab7: push 0x6c6b5e */
  { uint32_t v = 0x6c6b5eu; esp -= 4; W32(esp, v); }
/* 905abc: push 0x905ec0 */
  { uint32_t v = 0x905ec0u; esp -= 4; W32(esp, v); }
/* 905ac1: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 905ac4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 905ac5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 905ac7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905ac8: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 905aca: call 0x99cafe */
  esp -= 4; W32(esp, 0x905acfu); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 905acf: mov eax, esi */
  eax = esi;
/* 905ad1: jmp 0x905ad5 */
  goto L_905ad5;
L_905ad3: /* 905ad3: xor eax, eax */
  eax = 0;
L_905ad5: /* 905ad5: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 905ad9: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 905add: and esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 905ae3: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 905aeb: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 905aee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905aef: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 905af1: call 0x6c242d */
  esp -= 4; W32(esp, 0x905af6u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 905af6: mov edx, eax */
  edx = eax;
/* 905af8: mov ecx, esi */
  ecx = esi;
/* 905afa: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 905afd: mov edi, edx */
  edi = edx;
/* 905aff: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 905b02: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 905b04: mov ecx, esi */
  ecx = esi;
/* 905b06: xor esi, esi */
  esi = 0;
/* 905b08: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905b0b: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 905b0e: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 905b10: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 905b14: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 905b16: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 905b1a: jle 0x905bbd */
  if ((zf || sf != of)) goto L_905bbd;
L_905b20: /* 905b20: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 905b24: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 905b28: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
L_905b2b: /* 905b2b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 905b2d: mov ebp, dword ptr [edi - 4] */
  ebp = R32((uint32_t)(edi + 0xfffffffcu));
/* 905b30: mov ecx, dword ptr [edi - 8] */
  ecx = R32((uint32_t)(edi + 0xfffffff8u));
/* 905b33: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 905b37: mov dword ptr [esi + eax], ecx */
  W32((uint32_t)(esi + eax), ecx);
/* 905b3a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 905b3c: lea eax, [ebp + ebp] */
  eax = (uint32_t)(ebp + ebp);
/* 905b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905b41: mov dword ptr [esi + edx + 4], ebp */
  W32((uint32_t)(esi + edx + 0x4u), ebp);
/* 905b45: call 0x6c242d */
  esp -= 4; W32(esp, 0x905b4au); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 905b4a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 905b4c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905b4f: mov dword ptr [esi + ecx + 8], eax */
  W32((uint32_t)(esi + ecx + 0x8u), eax);
/* 905b53: xor eax, eax */
  eax = 0;
/* 905b55: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 905b57: jbe 0x905ba4 */
  if ((cf | zf)) goto L_905ba4;
L_905b59: /* 905b59: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 905b5b: xor ecx, ecx */
  ecx = 0;
/* 905b5d: mov cx, word ptr [edx + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 905b61: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 905b65: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 905b68: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905b6b: jne 0x905b95 */
  if (!zf) goto L_905b95;
L_905b6d: /* 905b6d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 905b6f: xor ebp, ebp */
  ebp = 0;
/* 905b71: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 905b75: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 905b79: mov word ptr [edx + eax*2], cx */
  W16((uint32_t)(edx + eax*2), (ecx & 0xffffu));
/* 905b7d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 905b7f: mov bp, word ptr [edx + eax*2] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 905b83: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 905b87: mov dword ptr [edx + ebp*4], ecx */
  W32((uint32_t)(edx + ebp*4), ecx);
/* 905b8a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 905b8e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 905b8f: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 905b93: jmp 0x905b9f */
  goto L_905b9f;
L_905b95: /* 905b95: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 905b97: mov edx, dword ptr [esi + edx + 8] */
  edx = R32((uint32_t)(esi + edx + 0x8u));
/* 905b9b: mov word ptr [edx + eax*2], cx */
  W16((uint32_t)(edx + eax*2), (ecx & 0xffffu));
L_905b9f: /* 905b9f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 905ba0: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905ba2: jb 0x905b59 */
  if (cf) goto L_905b59;
L_905ba4: /* 905ba4: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 905ba8: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 905bab: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 905bae: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 905baf: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 905bb3: jne 0x905b2b */
  if (!zf) goto L_905b2b;
L_905bb9: /* 905bb9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_905bbd: /* 905bbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905bbe: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905bc3u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905bc3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 905bc7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905bca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 905bd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905bd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905bd3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 905bd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 905bd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905bd8: ret  */
  esp += 4; SPILL(); return;
}

void f_905be0(void) {
  LOAD_REGS();
L_905be0: /* 905be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905be1: mov esi, ecx */
  esi = ecx;
/* 905be3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 905be6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905be7: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905becu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905bec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905bef: xor eax, eax */
  eax = 0;
/* 905bf1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 905bf4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 905bf7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 905bfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905bfb: ret  */
  esp += 4; SPILL(); return;
}

void f_905c00(void) {
  LOAD_REGS();
L_905c00: /* 905c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905c01: mov esi, ecx */
  esi = ecx;
/* 905c03: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 905c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905c07: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905c0cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905c0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905c0f: xor eax, eax */
  eax = 0;
/* 905c11: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 905c14: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 905c17: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 905c1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905c1b: ret  */
  esp += 4; SPILL(); return;
}

void f_905c20(void) {
  LOAD_REGS();
L_905c20: /* 905c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905c21: mov esi, ecx */
  esi = ecx;
/* 905c23: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 905c26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905c27: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905c2cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905c2c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905c2f: xor eax, eax */
  eax = 0;
/* 905c31: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 905c34: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 905c37: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 905c3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905c3b: ret  */
  esp += 4; SPILL(); return;
}

void f_905c60(void) {
  LOAD_REGS();
L_905c60: /* 905c60: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 905c63: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905c65: jne 0x905c6a */
  if (!zf) goto L_905c6a;
L_905c67: /* 905c67: xor eax, eax */
  eax = 0;
/* 905c69: ret  */
  esp += 4; SPILL(); return;
L_905c6a: /* 905c6a: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 905c6d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905c6f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 905c71: ret  */
  esp += 4; SPILL(); return;
}

void f_905c80(void) {
  LOAD_REGS();
L_905c80: /* 905c80: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 905c83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 905c84: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 905c85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905c87: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 905c8b: mov edi, ecx */
  edi = ecx;
/* 905c8d: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 905c91: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 905c94: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 905c97: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 905c99: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 905c9b: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905c9d: jae 0x905da1 */
  if (!cf) goto L_905da1;
L_905ca3: /* 905ca3: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 905ca6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905ca8: je 0x905cb4 */
  if (zf) goto L_905cb4;
L_905caa: /* 905caa: mov ecx, eax */
  ecx = eax;
/* 905cac: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 905cae: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 905cb0: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905cb2: jb 0x905cb6 */
  if (cf) goto L_905cb6;
L_905cb4: /* 905cb4: mov ecx, ebp */
  ecx = ebp;
L_905cb6: /* 905cb6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905cb8: jne 0x905cbe */
  if (!zf) goto L_905cbe;
L_905cba: /* 905cba: xor eax, eax */
  eax = 0;
/* 905cbc: jmp 0x905cc2 */
  goto L_905cc2;
L_905cbe: /* 905cbe: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905cc0: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_905cc2: /* 905cc2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905cc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 905cc6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 905cca: jge 0x905cce */
  if ((sf == of)) goto L_905cce;
L_905ccc: /* 905ccc: xor eax, eax */
  eax = 0;
L_905cce: /* 905cce: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 905cd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905cd2: call 0x6c242d */
  esp -= 4; W32(esp, 0x905cd7u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 905cd7: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 905cdb: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 905cdf: mov ecx, eax */
  ecx = eax;
/* 905ce1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 905ce4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905ce7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905ce9: je 0x905cff */
  if (zf) goto L_905cff;
L_905ceb: /* 905ceb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905ced: je 0x905cf5 */
  if (zf) goto L_905cf5;
L_905cef: /* 905cef: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 905cf2: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
L_905cf5: /* 905cf5: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905cf8: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 905cfb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905cfd: jne 0x905ceb */
  if (!zf) goto L_905ceb;
L_905cff: /* 905cff: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 905d01: mov eax, ecx */
  eax = ecx;
/* 905d03: jbe 0x905d1f */
  if ((cf | zf)) goto L_905d1f;
L_905d05: /* 905d05: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 905d09: mov edx, ebp */
  edx = ebp;
L_905d0b: /* 905d0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905d0d: je 0x905d19 */
  if (zf) goto L_905d19;
L_905d0f: /* 905d0f: mov di, word ptr [esi] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 905d12: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 905d15: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_905d19: /* 905d19: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905d1c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 905d1d: jne 0x905d0b */
  if (!zf) goto L_905d0b;
L_905d1f: /* 905d1f: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 905d22: lea esi, [ebp + ebp] */
  esi = (uint32_t)(ebp + ebp);
/* 905d26: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905d28: lea edx, [esi + ecx] */
  edx = (uint32_t)(esi + ecx);
/* 905d2b: je 0x905d49 */
  if (zf) goto L_905d49;
L_905d2d: /* 905d2d: mov eax, edx */
  eax = edx;
/* 905d2f: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905d31: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905d33: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_905d35: /* 905d35: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905d37: je 0x905d3f */
  if (zf) goto L_905d3f;
L_905d39: /* 905d39: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 905d3c: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
L_905d3f: /* 905d3f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905d42: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 905d45: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905d47: jne 0x905d35 */
  if (!zf) goto L_905d35;
L_905d49: /* 905d49: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 905d4d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 905d50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 905d51: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905d56u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905d56: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 905d5a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 905d5e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905d61: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 905d64: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 905d67: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 905d6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905d6c: jne 0x905d85 */
  if (!zf) goto L_905d85;
L_905d6e: /* 905d6e: xor eax, eax */
  eax = 0;
/* 905d70: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 905d73: mov eax, ebp */
  eax = ebp;
/* 905d75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905d76: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 905d79: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 905d7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905d7d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 905d7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 905d7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905d82: ret 0xc */
  esp += 16; SPILL(); return;
L_905d85: /* 905d85: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 905d88: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 905d8b: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905d8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905d8e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 905d90: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905d92: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 905d95: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 905d98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905d99: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 905d9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 905d9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905d9e: ret 0xc */
  esp += 16; SPILL(); return;
L_905da1: /* 905da1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 905da5: mov ecx, eax */
  ecx = eax;
/* 905da7: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 905da9: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 905dab: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905dad: jae 0x905e1f */
  if (!cf) goto L_905e1f;
L_905daf: /* 905daf: lea ebx, [ebp + ebp] */
  ebx = (uint32_t)(ebp + ebp);
/* 905db3: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905db5: lea esi, [ebx + edx] */
  esi = (uint32_t)(ebx + edx);
/* 905db8: je 0x905dd6 */
  if (zf) goto L_905dd6;
L_905dba: /* 905dba: mov ecx, esi */
  ecx = esi;
/* 905dbc: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_905dbe: /* 905dbe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905dc0: je 0x905dcc */
  if (zf) goto L_905dcc;
L_905dc2: /* 905dc2: mov di, word ptr [ecx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 905dc5: mov word ptr [esi], di */
  W16((uint32_t)(esi), (edi & 0xffffu));
/* 905dc8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_905dcc: /* 905dcc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 905dcf: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 905dd2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905dd4: jne 0x905dbe */
  if (!zf) goto L_905dbe;
L_905dd6: /* 905dd6: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 905dd9: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 905ddd: mov ecx, eax */
  ecx = eax;
/* 905ddf: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 905de1: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 905de3: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebp = r;
  }
/* 905de5: je 0x905df7 */
  if (zf) goto L_905df7;
L_905de7: /* 905de7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905de9: je 0x905df1 */
  if (zf) goto L_905df1;
L_905deb: /* 905deb: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 905dee: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
L_905df1: /* 905df1: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905df4: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 905df5: jne 0x905de7 */
  if (!zf) goto L_905de7;
L_905df7: /* 905df7: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 905dfa: mov eax, edx */
  eax = edx;
/* 905dfc: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905dfe: je 0x905e0d */
  if (zf) goto L_905e0d;
L_905e00: /* 905e00: mov dx, word ptr [esi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 905e03: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 905e06: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905e09: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905e0b: jne 0x905e00 */
  if (!zf) goto L_905e00;
L_905e0d: /* 905e0d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 905e10: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905e12: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 905e15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905e16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905e17: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 905e18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 905e19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905e1c: ret 0xc */
  esp += 16; SPILL(); return;
L_905e1f: /* 905e1f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 905e21: jbe 0x905e7c */
  if ((cf | zf)) goto L_905e7c;
L_905e23: /* 905e23: add ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 905e25: mov ecx, eax */
  ecx = eax;
/* 905e27: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 905e29: mov esi, eax */
  esi = eax;
/* 905e2b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905e2d: je 0x905e43 */
  if (zf) goto L_905e43;
L_905e2f: /* 905e2f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905e31: je 0x905e39 */
  if (zf) goto L_905e39;
L_905e33: /* 905e33: mov bx, word ptr [ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 905e36: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
L_905e39: /* 905e39: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 905e3c: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 905e3f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905e41: jne 0x905e2f */
  if (!zf) goto L_905e2f;
L_905e43: /* 905e43: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 905e46: mov eax, ecx */
  eax = ecx;
/* 905e48: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905e4a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905e4c: je 0x905e5f */
  if (zf) goto L_905e5f;
L_905e4e: /* 905e4e: mov si, word ptr [eax - 2] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xfffffffeu))) & 0xffffu);
/* 905e52: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905e55: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 905e58: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905e5a: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 905e5d: jne 0x905e4e */
  if (!zf) goto L_905e4e;
L_905e5f: /* 905e5f: lea ecx, [edx + ebp] */
  ecx = (uint32_t)(edx + ebp);
/* 905e62: mov eax, edx */
  eax = edx;
/* 905e64: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905e66: je 0x905e79 */
  if (zf) goto L_905e79;
L_905e68: /* 905e68: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_905e6c: /* 905e6c: mov si, word ptr [edx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 905e6f: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 905e72: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 905e75: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905e77: jne 0x905e6c */
  if (!zf) goto L_905e6c;
L_905e79: /* 905e79: add dword ptr [edi + 8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi + 0x8u), r);
  }
L_905e7c: /* 905e7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905e7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905e7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 905e7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 905e80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905e83: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_905e90(void) {
  LOAD_REGS();
L_905e90: /* 905e90: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 905e94: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 905e98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905e9a: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 905e9d: mov esi, eax */
  esi = eax;
/* 905e9f: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905ea1: je 0x905eb5 */
  if (zf) goto L_905eb5;
L_905ea3: /* 905ea3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_905ea4: /* 905ea4: mov bx, word ptr [edx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 905ea7: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 905eaa: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 905ead: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 905eb0: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905eb2: jne 0x905ea4 */
  if (!zf) goto L_905ea4;
L_905eb4: /* 905eb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_905eb5: /* 905eb5: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 905eb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905eb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905eba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_905ec0(void) {
  LOAD_REGS();
L_905ec0: /* 905ec0: mov eax, ecx */
  eax = ecx;
/* 905ec2: xor ecx, ecx */
  ecx = 0;
/* 905ec4: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 905eca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 905ecd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 905ed0: ret  */
  esp += 4; SPILL(); return;
}

void f_905ee0(void) {
  LOAD_REGS();
L_905ee0: /* 905ee0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 905ee1: mov eax, ecx */
  eax = ecx;
/* 905ee3: mov cl, byte ptr [esp + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 905ee7: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 905ee9: xor ecx, ecx */
  ecx = 0;
/* 905eeb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 905eee: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 905ef1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 905ef4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 905ef5: ret  */
  esp += 4; SPILL(); return;
}

void f_905f00(void) {
  LOAD_REGS();
L_905f00: /* 905f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905f01: mov esi, ecx */
  esi = ecx;
/* 905f03: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 905f06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905f07: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x905f0cu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 905f0c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905f0f: xor eax, eax */
  eax = 0;
/* 905f11: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 905f14: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 905f17: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 905f1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905f1b: ret  */
  esp += 4; SPILL(); return;
}

void f_905f20(void) {
  LOAD_REGS();
L_905f20: /* 905f20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 905f24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905f25: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 905f29: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 905f2c: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 905f2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905f31: je 0x905f53 */
  if (zf) goto L_905f53;
L_905f33: /* 905f33: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_905f37: /* 905f37: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 905f3a: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905f3c: jne 0x905f48 */
  if (!zf) goto L_905f48;
L_905f3e: /* 905f3e: cmp dword ptr [eax + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905f41: je 0x905f55 */
  if (zf) goto L_905f55;
L_905f43: /* 905f43: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 905f46: jmp 0x905f4f */
  goto L_905f4f;
L_905f48: /* 905f48: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905f4a: je 0x905f55 */
  if (zf) goto L_905f55;
L_905f4c: /* 905f4c: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
L_905f4f: /* 905f4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905f51: jne 0x905f37 */
  if (!zf) goto L_905f37;
L_905f53: /* 905f53: xor eax, eax */
  eax = 0;
L_905f55: /* 905f55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905f56: ret  */
  esp += 4; SPILL(); return;
}

void f_905f60(void) {
  LOAD_REGS();
L_905f60: /* 905f60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 905f64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905f65: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 905f69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905f6a: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 905f6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905f6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 905f71: call 0x905f20 */
  esp -= 4; W32(esp, 0x905f76u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 905f76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 905f79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905f7b: jne 0x905f84 */
  if (!zf) goto L_905f84;
L_905f7d: /* 905f7d: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905f7f: jne 0x905f84 */
  if (!zf) goto L_905f84;
L_905f81: /* 905f81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905f82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905f83: ret  */
  esp += 4; SPILL(); return;
L_905f84: /* 905f84: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 905f87: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 905f8b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905f8d: jne 0x905f95 */
  if (!zf) goto L_905f95;
L_905f8f: /* 905f8f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 905f92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905f93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905f94: ret  */
  esp += 4; SPILL(); return;
L_905f95: /* 905f95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905f96: mov eax, ecx */
  eax = ecx;
/* 905f98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905f99: ret  */
  esp += 4; SPILL(); return;
}

void f_905fa0(void) {
  LOAD_REGS();
L_905fa0: /* 905fa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 905fa1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 905fa2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 905fa3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 905fa7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 905fa8: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 905fac: xor edx, edx */
  edx = 0;
/* 905fae: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
L_905fb1: /* 905fb1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 905fb3: je 0x905fec */
  if (zf) goto L_905fec;
L_905fb5: /* 905fb5: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 905fb8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 905fba: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 905fbd: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 905fbf: jae 0x905fec */
  if (!cf) goto L_905fec;
L_905fc1: /* 905fc1: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 905fc4: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 905fc6: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 905fc8: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905fca: jne 0x905fe0 */
  if (!zf) goto L_905fe0;
L_905fcc: /* 905fcc: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 905fcf: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 905fd2: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905fd4: jne 0x905fe0 */
  if (!zf) goto L_905fe0;
L_905fd6: /* 905fd6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 905fd9: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 905fdc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 905fde: je 0x905fe3 */
  if (zf) goto L_905fe3;
L_905fe0: /* 905fe0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 905fe1: jmp 0x905fb1 */
  goto L_905fb1;
L_905fe3: /* 905fe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905fe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905fe5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 905fe6: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 905fe8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 905fe9: ret 8 */
  esp += 12; SPILL(); return;
L_905fec: /* 905fec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 905fed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 905fee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 905fef: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 905ff1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 905ff2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_906000(void) {
  LOAD_REGS();
L_906000: /* 906000: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 906003: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 906004: mov ebx, ecx */
  ebx = ecx;
/* 906006: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 906007: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906008: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 90600b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90600c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90600e: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 906012: jne 0x906018 */
  if (!zf) goto L_906018;
L_906014: /* 906014: xor ecx, ecx */
  ecx = 0;
/* 906016: jmp 0x90601f */
  goto L_90601f;
L_906018: /* 906018: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 90601b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90601d: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_90601f: /* 90601f: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 906024: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 906028: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 90602a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90602d: mov eax, edx */
  eax = edx;
/* 90602f: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 906032: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 906034: mov ebp, edx */
  ebp = edx;
/* 906036: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906038: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 90603c: jne 0x906042 */
  if (!zf) goto L_906042;
L_90603e: /* 90603e: xor eax, eax */
  eax = 0;
/* 906040: jmp 0x90604a */
  goto L_90604a;
L_906042: /* 906042: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 906045: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 906047: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_90604a: /* 90604a: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90604c: jae 0x9060a9 */
  if (!cf) goto L_9060a9;
L_90604e: /* 90604e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906050: mov eax, ebp */
  eax = ebp;
/* 906052: jge 0x906056 */
  if ((sf == of)) goto L_906056;
L_906054: /* 906054: xor eax, eax */
  eax = 0;
L_906056: /* 906056: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 90605d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90605e: call 0x6c242d */
  esp -= 4; W32(esp, 0x906063u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 906063: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 906066: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906069: mov edi, eax */
  edi = eax;
/* 90606b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90606e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90606f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906071: mov ecx, esi */
  ecx = esi;
/* 906073: call 0x909ca0 */
  esp -= 4; W32(esp, 0x906078u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 906078: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 90607b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90607e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90607f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906080: mov ecx, esi */
  ecx = esi;
/* 906082: call 0x909c90 */
  esp -= 4; W32(esp, 0x906087u); SPILL(); f_909c90(); if (g_unwind) return; RELOAD();
/* 906087: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90608a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90608b: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x906090u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 906090: lea ecx, [edi + ebp*4] */
  ecx = (uint32_t)(edi + ebp*4);
/* 906093: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906096: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 906099: mov ecx, esi */
  ecx = esi;
/* 90609b: call 0x909a40 */
  esp -= 4; W32(esp, 0x9060a0u); SPILL(); f_909a40(); if (g_unwind) return; RELOAD();
/* 9060a0: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 9060a3: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 9060a6: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_9060a9: /* 9060a9: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9060ad: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 9060b1: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9060b7: xor eax, eax */
  eax = 0;
/* 9060b9: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9060bd: lea ebp, [ecx + 1] */
  ebp = (uint32_t)(ecx + 0x1u);
/* 9060c0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 9060c3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9060c5: je 0x9060cf */
  if (zf) goto L_9060cf;
L_9060c7: /* 9060c7: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 9060ca: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9060cc: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_9060cf: /* 9060cf: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9060d1: mov ecx, edi */
  ecx = edi;
/* 9060d3: jae 0x9060f9 */
  if (!cf) goto L_9060f9;
L_9060d5: /* 9060d5: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 9060d8: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 9060dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9060dd: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 9060e1: call 0x909a80 */
  esp -= 4; W32(esp, 0x9060e6u); SPILL(); f_909a80(); if (g_unwind) return; RELOAD();
/* 9060e6: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9060ea: mov ecx, ebp */
  ecx = ebp;
/* 9060ec: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9060ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9060ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9060f0: mov ecx, edi */
  ecx = edi;
/* 9060f2: call 0x909ed0 */
  esp -= 4; W32(esp, 0x9060f7u); SPILL(); f_909ed0(); if (g_unwind) return; RELOAD();
/* 9060f7: jmp 0x906114 */
  goto L_906114;
L_9060f9: /* 9060f9: call 0x909a80 */
  esp -= 4; W32(esp, 0x9060feu); SPILL(); f_909a80(); if (g_unwind) return; RELOAD();
/* 9060fe: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 906100: jae 0x906114 */
  if (!cf) goto L_906114;
L_906102: /* 906102: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 906105: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 906108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906109: lea edx, [ecx + ebp*4] */
  edx = (uint32_t)(ecx + ebp*4);
/* 90610c: mov ecx, edi */
  ecx = edi;
/* 90610e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90610f: call 0x90a0e0 */
  esp -= 4; W32(esp, 0x906114u); SPILL(); f_90a0e0(); if (g_unwind) return; RELOAD();
L_906114: /* 906114: xor eax, eax */
  eax = 0;
/* 906116: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906118: jle 0x90612a */
  if ((zf || sf != of)) goto L_90612a;
L_90611a: /* 90611a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 90611d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90611e: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 906120: mov dword ptr [ecx + eax*4 - 4], 0 */
  W32((uint32_t)(ecx + eax*4 + 0xfffffffcu), 0x0u);
/* 906128: jl 0x90611a */
  if ((sf != of)) goto L_90611a;
L_90612a: /* 90612a: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 90612e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906130: jle 0x9066b6 */
  if ((zf || sf != of)) goto L_9066b6;
L_906136: /* 906136: xor eax, eax */
  eax = 0;
/* 906138: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 90613c: jmp 0x906146 */
  goto L_906146;
L_90613e: /* 90613e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 906142: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_906146: /* 906146: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 906149: mov edx, eax */
  edx = eax;
/* 90614b: xor ebp, ebp */
  ebp = 0;
/* 90614d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 906150: mov bp, word ptr [ecx + edx] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx))) & 0xffffu);
/* 906154: mov edx, eax */
  edx = eax;
/* 906156: xor edi, edi */
  edi = 0;
/* 906158: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90615b: mov di, word ptr [ecx + edx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx))) & 0xffffu);
/* 90615f: mov edx, eax */
  edx = eax;
/* 906161: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 906164: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 906169: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 90616d: xor eax, eax */
  eax = 0;
/* 90616f: mov ax, word ptr [ecx + edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx))) & 0xffffu);
/* 906173: mov ecx, ebx */
  ecx = ebx;
/* 906175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906177: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 906178: mov byte ptr [esp + 0x44], 0 */
  W8((uint32_t)(esp + 0x44u), 0x0u);
/* 90617d: mov byte ptr [esp + 0x45], 0 */
  W8((uint32_t)(esp + 0x45u), 0x0u);
/* 906182: mov byte ptr [esp + 0x46], 0 */
  W8((uint32_t)(esp + 0x46u), 0x0u);
/* 906187: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 90618b: call 0x908300 */
  esp -= 4; W32(esp, 0x906190u); SPILL(); f_908300(); if (g_unwind) return; RELOAD();
/* 906190: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906192: jne 0x9066a7 */
  if (!zf) goto L_9066a7;
L_906198: /* 906198: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 90619a: call 0x6c242d */
  esp -= 4; W32(esp, 0x90619fu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90619f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9061a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9061a4: je 0x9061c4 */
  if (zf) goto L_9061c4;
L_9061a6: /* 9061a6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9061aa: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9061ad: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 9061af: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 9061b2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9061b5: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 9061b8: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 9061bb: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 9061be: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9061c2: jmp 0x9061cc */
  goto L_9061cc;
L_9061c4: /* 9061c4: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_9061cc: /* 9061cc: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 9061d0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9061d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9061d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9061d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9061d7: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9061db: call 0x905f20 */
  esp -= 4; W32(esp, 0x9061e0u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 9061e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9061e3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9061e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9061e9: jne 0x906246 */
  if (!zf) goto L_906246;
L_9061eb: /* 9061eb: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 9061ed: mov byte ptr [esp + 0x34], al */
  W8((uint32_t)(esp + 0x34u), (eax & 0xffu));
/* 9061f1: call 0x6c242d */
  esp -= 4; W32(esp, 0x9061f6u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9061f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9061f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9061fb: je 0x906219 */
  if (zf) goto L_906219;
L_9061fd: /* 9061fd: xor ecx, ecx */
  ecx = 0;
/* 9061ff: mov dword ptr [eax + 0xc], ebp */
  W32((uint32_t)(eax + 0xcu), ebp);
/* 906202: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 906205: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 906208: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 90620b: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 90620e: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 906211: mov dword ptr [eax], 2 */
  W32((uint32_t)(eax), 0x2u);
/* 906217: jmp 0x90621b */
  goto L_90621b;
L_906219: /* 906219: xor eax, eax */
  eax = 0;
L_90621b: /* 90621b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 90621e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 906222: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 906225: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 906228: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 90622b: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 90622e: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 906231: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 906234: mov dword ptr [ecx + ebp*4], eax */
  W32((uint32_t)(ecx + ebp*4), eax);
/* 906237: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 90623a: mov dword ptr [edx + edi*4], eax */
  W32((uint32_t)(edx + edi*4), eax);
/* 90623d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 906241: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 906244: jmp 0x90626c */
  goto L_90626c;
L_906246: /* 906246: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 90624a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 90624d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90624f: je 0x906260 */
  if (zf) goto L_906260;
L_906251: /* 906251: push 0xaf25a0 */
  { uint32_t v = 0xaf25a0u; esp -= 4; W32(esp, v); }
/* 906256: call 0x99cea6 */
  esp -= 4; W32(esp, 0x90625bu); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 90625b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90625e: jmp 0x90626c */
  goto L_90626c;
L_906260: /* 906260: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 906264: mov byte ptr [esp + 0x38], 1 */
  W8((uint32_t)(esp + 0x38u), 0x1u);
/* 906269: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_90626c: /* 90626c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 906270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906271: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906272: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 906273: call 0x905f20 */
  esp -= 4; W32(esp, 0x906278u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 906278: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90627b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 90627f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906281: jne 0x9062e2 */
  if (!zf) goto L_9062e2;
L_906283: /* 906283: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 906285: mov byte ptr [esp + 0x34], al */
  W8((uint32_t)(esp + 0x34u), (eax & 0xffu));
/* 906289: call 0x6c242d */
  esp -= 4; W32(esp, 0x90628eu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90628e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 906292: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906295: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906297: je 0x9062b5 */
  if (zf) goto L_9062b5;
L_906299: /* 906299: xor edx, edx */
  edx = 0;
/* 90629b: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 90629e: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 9062a1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9062a4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 9062a7: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 9062aa: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 9062ad: mov dword ptr [eax], 2 */
  W32((uint32_t)(eax), 0x2u);
/* 9062b3: jmp 0x9062b7 */
  goto L_9062b7;
L_9062b5: /* 9062b5: xor eax, eax */
  eax = 0;
L_9062b7: /* 9062b7: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9062ba: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9062be: mov edx, dword ptr [edx + edi*4] */
  edx = R32((uint32_t)(edx + edi*4));
/* 9062c1: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 9062c4: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9062c7: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 9062ca: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 9062cd: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9062d0: mov dword ptr [edx + edi*4], eax */
  W32((uint32_t)(edx + edi*4), eax);
/* 9062d3: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 9062d6: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 9062d9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9062dd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 9062e0: jmp 0x906308 */
  goto L_906308;
L_9062e2: /* 9062e2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9062e6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9062e9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9062eb: je 0x9062fc */
  if (zf) goto L_9062fc;
L_9062ed: /* 9062ed: push 0xaf25a0 */
  { uint32_t v = 0xaf25a0u; esp -= 4; W32(esp, v); }
/* 9062f2: call 0x99cea6 */
  esp -= 4; W32(esp, 0x9062f7u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 9062f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9062fa: jmp 0x906308 */
  goto L_906308;
L_9062fc: /* 9062fc: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 906300: mov byte ptr [esp + 0x39], 1 */
  W8((uint32_t)(esp + 0x39u), 0x1u);
/* 906305: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_906308: /* 906308: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 90630c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90630d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90630e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90630f: call 0x905f20 */
  esp -= 4; W32(esp, 0x906314u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 906314: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906317: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 90631b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90631d: jne 0x906429 */
  if (!zf) goto L_906429;
L_906323: /* 906323: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 906325: call 0x6c242d */
  esp -= 4; W32(esp, 0x90632au); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90632a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90632d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90632f: je 0x90634d */
  if (zf) goto L_90634d;
L_906331: /* 906331: xor ecx, ecx */
  ecx = 0;
/* 906333: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 906336: mov dword ptr [eax + 0x10], ebp */
  W32((uint32_t)(eax + 0x10u), ebp);
/* 906339: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90633c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 90633f: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 906342: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 906345: mov dword ptr [eax], 2 */
  W32((uint32_t)(eax), 0x2u);
/* 90634b: jmp 0x90634f */
  goto L_90634f;
L_90634d: /* 90634d: xor eax, eax */
  eax = 0;
L_90634f: /* 90634f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 906352: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 906355: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 906358: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 90635b: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 90635e: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 906361: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 906364: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 906367: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 90636a: mov dword ptr [edx + ebp*4], eax */
  W32((uint32_t)(edx + ebp*4), eax);
/* 90636d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 906371: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_906374: /* 906374: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 906377: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 90637a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 90637c: mov edi, eax */
  edi = eax;
/* 90637e: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 906381: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 906384: jae 0x906616 */
  if (!cf) goto L_906616;
L_90638a: /* 90638a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90638d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90638f: je 0x90639d */
  if (zf) goto L_90639d;
L_906391: /* 906391: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 906393: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 906396: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 906399: mov ebx, eax */
  ebx = eax;
/* 90639b: ja 0x9063a2 */
  if ((!cf && !zf)) goto L_9063a2;
L_90639d: /* 90639d: mov ebx, 1 */
  ebx = 0x1u;
L_9063a2: /* 9063a2: mov ecx, esi */
  ecx = esi;
/* 9063a4: call 0x909a40 */
  esp -= 4; W32(esp, 0x9063a9u); SPILL(); f_909a40(); if (g_unwind) return; RELOAD();
/* 9063a9: mov ebp, eax */
  ebp = eax;
/* 9063ab: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  ebp = r;
  }
/* 9063ad: mov eax, ebp */
  eax = ebp;
/* 9063af: jns 0x9063b3 */
  if (!sf) goto L_9063b3;
L_9063b1: /* 9063b1: xor eax, eax */
  eax = 0;
L_9063b3: /* 9063b3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9063b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9063b7: call 0x6c242d */
  esp -= 4; W32(esp, 0x9063bcu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9063bc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9063bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9063c2: mov ebx, eax */
  ebx = eax;
/* 9063c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9063c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9063c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9063c7: mov ecx, esi */
  ecx = esi;
/* 9063c9: call 0x909ca0 */
  esp -= 4; W32(esp, 0x9063ceu); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 9063ce: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 9063d2: mov ecx, esi */
  ecx = esi;
/* 9063d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9063d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9063d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9063d8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9063dc: call 0x90b400 */
  esp -= 4; W32(esp, 0x9063e1u); SPILL(); f_90b400(); if (g_unwind) return; RELOAD();
/* 9063e1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9063e5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9063e8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9063eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9063ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9063ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9063ee: mov ecx, esi */
  ecx = esi;
/* 9063f0: call 0x909ca0 */
  esp -= 4; W32(esp, 0x9063f5u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 9063f5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9063f8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9063fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9063fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9063fd: mov ecx, esi */
  ecx = esi;
/* 9063ff: call 0x909c90 */
  esp -= 4; W32(esp, 0x906404u); SPILL(); f_909c90(); if (g_unwind) return; RELOAD();
/* 906404: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 906407: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906408: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90640du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90640d: lea edx, [ebx + ebp*4] */
  edx = (uint32_t)(ebx + ebp*4);
/* 906410: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906413: mov ecx, esi */
  ecx = esi;
/* 906415: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 906418: call 0x909a40 */
  esp -= 4; W32(esp, 0x90641du); SPILL(); f_909a40(); if (g_unwind) return; RELOAD();
/* 90641d: lea eax, [ebx + eax*4 + 4] */
  eax = (uint32_t)(ebx + eax*4 + 0x4u);
/* 906421: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 906424: jmp 0x9066a4 */
  goto L_9066a4;
L_906429: /* 906429: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 90642d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 906430: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906432: je 0x906443 */
  if (zf) goto L_906443;
L_906434: /* 906434: push 0xaf25a0 */
  { uint32_t v = 0xaf25a0u; esp -= 4; W32(esp, v); }
/* 906439: call 0x99cea6 */
  esp -= 4; W32(esp, 0x90643eu); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 90643e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906441: jmp 0x90644f */
  goto L_90644f;
L_906443: /* 906443: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 906447: mov byte ptr [esp + 0x3a], 1 */
  W8((uint32_t)(esp + 0x3au), 0x1u);
/* 90644c: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_90644f: /* 90644f: mov al, byte ptr [esp + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x30u))) & 0xffu);
/* 906453: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906455: je 0x906374 */
  if (zf) goto L_906374;
L_90645b: /* 90645b: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 90645f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 906463: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906464: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906465: call 0x905fa0 */
  esp -= 4; W32(esp, 0x90646au); SPILL(); f_905fa0(); if (g_unwind) return; RELOAD();
/* 90646a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90646c: jne 0x9065cf */
  if (!zf) goto L_9065cf;
L_906472: /* 906472: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 906475: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 906478: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90647a: mov edi, eax */
  edi = eax;
/* 90647c: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90647f: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 906482: jae 0x906537 */
  if (!cf) goto L_906537;
L_906488: /* 906488: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90648b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90648d: je 0x9064a4 */
  if (zf) goto L_9064a4;
L_90648f: /* 90648f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 906491: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 906494: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 906497: jbe 0x9064a4 */
  if ((cf | zf)) goto L_9064a4;
L_906499: /* 906499: mov ecx, esi */
  ecx = esi;
/* 90649b: call 0x909a40 */
  esp -= 4; W32(esp, 0x9064a0u); SPILL(); f_909a40(); if (g_unwind) return; RELOAD();
/* 9064a0: mov ebx, eax */
  ebx = eax;
/* 9064a2: jmp 0x9064a9 */
  goto L_9064a9;
L_9064a4: /* 9064a4: mov ebx, 1 */
  ebx = 0x1u;
L_9064a9: /* 9064a9: mov ecx, esi */
  ecx = esi;
/* 9064ab: call 0x909a40 */
  esp -= 4; W32(esp, 0x9064b0u); SPILL(); f_909a40(); if (g_unwind) return; RELOAD();
/* 9064b0: mov ebp, eax */
  ebp = eax;
/* 9064b2: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  ebp = r;
  }
/* 9064b4: mov eax, ebp */
  eax = ebp;
/* 9064b6: jns 0x9064ba */
  if (!sf) goto L_9064ba;
L_9064b8: /* 9064b8: xor eax, eax */
  eax = 0;
L_9064ba: /* 9064ba: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 9064c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9064c2: call 0x6c242d */
  esp -= 4; W32(esp, 0x9064c7u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9064c7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9064ca: mov ebx, eax */
  ebx = eax;
/* 9064cc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9064cf: mov ecx, esi */
  ecx = esi;
/* 9064d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9064d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9064d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9064d4: call 0x909ca0 */
  esp -= 4; W32(esp, 0x9064d9u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 9064d9: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 9064dd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9064e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9064e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9064e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9064e5: mov ecx, esi */
  ecx = esi;
/* 9064e7: call 0x90b400 */
  esp -= 4; W32(esp, 0x9064ecu); SPILL(); f_90b400(); if (g_unwind) return; RELOAD();
/* 9064ec: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 9064f0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9064f3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9064f6: mov ecx, esi */
  ecx = esi;
/* 9064f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9064f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9064fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9064fb: call 0x909ca0 */
  esp -= 4; W32(esp, 0x906500u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 906500: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 906503: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 906506: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906507: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906508: mov ecx, esi */
  ecx = esi;
/* 90650a: call 0x909c90 */
  esp -= 4; W32(esp, 0x90650fu); SPILL(); f_909c90(); if (g_unwind) return; RELOAD();
/* 90650f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 906512: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906513: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x906518u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 906518: lea ecx, [ebx + ebp*4] */
  ecx = (uint32_t)(ebx + ebp*4);
/* 90651b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90651e: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 906521: mov ecx, esi */
  ecx = esi;
/* 906523: call 0x909a40 */
  esp -= 4; W32(esp, 0x906528u); SPILL(); f_909a40(); if (g_unwind) return; RELOAD();
/* 906528: lea edx, [ebx + eax*4 + 4] */
  edx = (uint32_t)(ebx + eax*4 + 0x4u);
/* 90652c: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 90652f: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 906532: jmp 0x9066a7 */
  goto L_9066a7;
L_906537: /* 906537: mov ecx, eax */
  ecx = eax;
/* 906539: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90653b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90653e: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 906541: mov ecx, esi */
  ecx = esi;
/* 906543: jae 0x90658c */
  if (!cf) goto L_90658c;
L_906545: /* 906545: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 906548: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90654a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90654b: call 0x909ca0 */
  esp -= 4; W32(esp, 0x906550u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 906550: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 906553: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 906557: mov edx, eax */
  edx = eax;
/* 906559: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90655a: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 90655c: mov ecx, 1 */
  ecx = 0x1u;
/* 906561: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 906564: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 906566: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906568: mov ecx, esi */
  ecx = esi;
/* 90656a: call 0x90b400 */
  esp -= 4; W32(esp, 0x90656fu); SPILL(); f_90b400(); if (g_unwind) return; RELOAD();
/* 90656f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 906572: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906574: je 0x90669e */
  if (zf) goto L_90669e;
L_90657a: /* 90657a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90657e: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 906580: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 906583: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906585: jne 0x90657a */
  if (!zf) goto L_90657a;
L_906587: /* 906587: jmp 0x90669e */
  goto L_90669e;
L_90658c: /* 90658c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90658d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90658e: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 906591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906592: call 0x909ca0 */
  esp -= 4; W32(esp, 0x906597u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 906597: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 90659a: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 90659d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90659f: je 0x9065b0 */
  if (zf) goto L_9065b0;
L_9065a1: /* 9065a1: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 9065a4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9065a7: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9065aa: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9065ac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9065ae: jne 0x9065a1 */
  if (!zf) goto L_9065a1;
L_9065b0: /* 9065b0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 9065b3: mov eax, edi */
  eax = edi;
/* 9065b5: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9065b7: je 0x90669e */
  if (zf) goto L_90669e;
L_9065bd: /* 9065bd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9065c1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9065c3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9065c6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9065c8: jne 0x9065bd */
  if (!zf) goto L_9065bd;
L_9065ca: /* 9065ca: jmp 0x90669e */
  goto L_90669e;
L_9065cf: /* 9065cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9065d0: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9065d5u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9065d5: mov al, byte ptr [esp + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3cu))) & 0xffu);
/* 9065d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9065dc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9065de: je 0x9065eb */
  if (zf) goto L_9065eb;
L_9065e0: /* 9065e0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9065e4: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
L_9065eb: /* 9065eb: mov al, byte ptr [esp + 0x39] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x39u))) & 0xffu);
/* 9065ef: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9065f1: je 0x9065fe */
  if (zf) goto L_9065fe;
L_9065f3: /* 9065f3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9065f7: mov dword ptr [ecx + 8], 0 */
  W32((uint32_t)(ecx + 0x8u), 0x0u);
L_9065fe: /* 9065fe: mov al, byte ptr [esp + 0x3a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3au))) & 0xffu);
/* 906602: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906604: je 0x9066a7 */
  if (zf) goto L_9066a7;
L_90660a: /* 90660a: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 906611: jmp 0x9066a7 */
  goto L_9066a7;
L_906616: /* 906616: mov ecx, eax */
  ecx = eax;
/* 906618: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90661a: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90661d: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 906620: mov ecx, esi */
  ecx = esi;
/* 906622: jae 0x906664 */
  if (!cf) goto L_906664;
L_906624: /* 906624: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 906627: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906628: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906629: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90662a: call 0x909ca0 */
  esp -= 4; W32(esp, 0x90662fu); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 90662f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 906632: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 906636: mov edx, eax */
  edx = eax;
/* 906638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906639: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 90663b: mov ecx, 1 */
  ecx = 0x1u;
/* 906640: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 906643: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 906645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906647: mov ecx, esi */
  ecx = esi;
/* 906649: call 0x90b400 */
  esp -= 4; W32(esp, 0x90664eu); SPILL(); f_90b400(); if (g_unwind) return; RELOAD();
/* 90664e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 906651: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906653: je 0x90669e */
  if (zf) goto L_90669e;
L_906655: /* 906655: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 906659: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 90665b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 90665e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906660: jne 0x906655 */
  if (!zf) goto L_906655;
L_906662: /* 906662: jmp 0x90669e */
  goto L_90669e;
L_906664: /* 906664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906665: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906666: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 906669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90666a: call 0x909ca0 */
  esp -= 4; W32(esp, 0x90666fu); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 90666f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 906672: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 906675: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906677: je 0x906688 */
  if (zf) goto L_906688;
L_906679: /* 906679: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 90667c: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90667f: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 906682: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906684: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 906686: jne 0x906679 */
  if (!zf) goto L_906679;
L_906688: /* 906688: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 90668b: mov eax, edi */
  eax = edi;
/* 90668d: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90668f: je 0x90669e */
  if (zf) goto L_90669e;
L_906691: /* 906691: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 906695: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 906697: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90669a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90669c: jne 0x906691 */
  if (!zf) goto L_906691;
L_90669e: /* 90669e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9066a1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_9066a4: /* 9066a4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_9066a7: /* 9066a7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9066ab: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9066ac: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9066b0: jne 0x90613e */
  if (!zf) goto L_90613e;
L_9066b6: /* 9066b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9066b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9066b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9066b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9066ba: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9066bd: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9066c0(void) {
  LOAD_REGS();
L_9066c0: /* 9066c0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9066c3: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9066c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9066c7: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 9066cb: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9066cf: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9066d3: xor edx, edx */
  edx = 0;
/* 9066d5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9066d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9066d7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9066da: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 9066de: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9066e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_9066e3: /* 9066e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9066e5: je 0x906775 */
  if (zf) goto L_906775;
L_9066eb: /* 9066eb: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9066ef: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9066f2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9066f4: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9066f7: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9066f9: jae 0x906775 */
  if (!cf) goto L_906775;
L_9066fb: /* 9066fb: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 9066fe: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 906702: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906703: xor ebp, ebp */
  ebp = 0;
/* 906705: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 906708: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 90670a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90670b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90670c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90670d: call 0x905f60 */
  esp -= 4; W32(esp, 0x906712u); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 906712: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906717: jne 0x90671e */
  if (!zf) goto L_90671e;
L_906719: /* 906719: mov ebp, 1 */
  ebp = 0x1u;
L_90671e: /* 90671e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 906721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906723: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906724: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 906728: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 90672c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90672d: call 0x905f60 */
  esp -= 4; W32(esp, 0x906732u); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 906732: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906735: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906737: jne 0x90673a */
  if (!zf) goto L_90673a;
L_906739: /* 906739: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_90673a: /* 90673a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 90673e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90673f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 906740: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906742: call 0x905f60 */
  esp -= 4; W32(esp, 0x906747u); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 906747: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90674a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90674c: jne 0x90674f */
  if (!zf) goto L_90674f;
L_90674e: /* 90674e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_90674f: /* 90674f: cmp ebp, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 906753: jle 0x906761 */
  if ((zf || sf != of)) goto L_906761;
L_906755: /* 906755: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 906759: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 90675d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_906761: /* 906761: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 906765: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 906769: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90676a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 90676e: mov edx, eax */
  edx = eax;
/* 906770: jmp 0x9066e3 */
  goto L_9066e3;
L_906775: /* 906775: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 906779: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90677a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90677b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90677c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90677e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90677f: jne 0x90678a */
  if (!zf) goto L_90678a;
L_906781: /* 906781: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 906784: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906787: ret 8 */
  esp += 12; SPILL(); return;
L_90678a: /* 90678a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90678e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906791: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9067a0(void) {
  LOAD_REGS();
L_9067a0: /* 9067a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9067a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9067a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9067a3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9067a7: xor ebp, ebp */
  ebp = 0;
/* 9067a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9067aa: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9067ad: mov edi, ecx */
  edi = ecx;
/* 9067af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9067b1: jne 0x9067b7 */
  if (!zf) goto L_9067b7;
L_9067b3: /* 9067b3: xor ebx, ebx */
  ebx = 0;
/* 9067b5: jmp 0x9067bf */
  goto L_9067bf;
L_9067b7: /* 9067b7: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 9067ba: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 9067bc: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
L_9067bf: /* 9067bf: mov al, byte ptr [edi + 0x1c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1cu))) & 0xffu);
/* 9067c2: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 9067c6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9067c8: je 0x9067dd */
  if (zf) goto L_9067dd;
L_9067ca: /* 9067ca: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9067ce: mov ecx, edi */
  ecx = edi;
/* 9067d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9067d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9067d2: call 0x9066c0 */
  esp -= 4; W32(esp, 0x9067d7u); SPILL(); f_9066c0(); if (g_unwind) return; RELOAD();
/* 9067d7: mov byte ptr [edi + 0x1c], 0 */
  W8((uint32_t)(edi + 0x1cu), 0x0u);
/* 9067db: jmp 0x9067ef */
  goto L_9067ef;
L_9067dd: /* 9067dd: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9067e1: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 9067e7: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 9067ea: call 0x99ceac */
  esp -= 4; W32(esp, 0x9067efu); SPILL(); hle_ftol(); RELOAD();
L_9067ef: /* 9067ef: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9067f2: jne 0x906806 */
  if (!zf) goto L_906806;
L_9067f4: /* 9067f4: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 9067f8: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 9067fe: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 906801: call 0x99ceac */
  esp -= 4; W32(esp, 0x906806u); SPILL(); hle_ftol(); RELOAD();
L_906806: /* 906806: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 906809: mov ecx, eax */
  ecx = eax;
L_90680b: /* 90680b: mov edx, dword ptr [esi + ecx*4] */
  edx = R32((uint32_t)(esi + ecx*4));
/* 90680e: cmp dword ptr [edx + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 906812: jl 0x906821 */
  if ((sf != of)) goto L_906821;
L_906814: /* 906814: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 906815: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 906817: jl 0x90681b */
  if ((sf != of)) goto L_90681b;
L_906819: /* 906819: xor ecx, ecx */
  ecx = 0;
L_90681b: /* 90681b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90681d: jne 0x90680b */
  if (!zf) goto L_90680b;
L_90681f: /* 90681f: jmp 0x906824 */
  goto L_906824;
L_906821: /* 906821: mov ebp, dword ptr [esi + ecx*4] */
  ebp = R32((uint32_t)(esi + ecx*4));
L_906824: /* 906824: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 906827: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 90682d: fst dword ptr [edi + 0x18] */
  WF32((uint32_t)(edi + 0x18u), ST0);
/* 906830: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 906836: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 906838: and eax, 0x4100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 90683d: mov eax, ebp */
  eax = ebp;
/* 90683f: jne 0x906848 */
  if (!zf) goto L_906848;
L_906841: /* 906841: mov dword ptr [edi + 0x18], 0x3d4ccccd */
  W32((uint32_t)(edi + 0x18u), 0x3d4ccccdu);
L_906848: /* 906848: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 906849: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90684a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90684b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90684c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_906850(void) {
  LOAD_REGS();
L_906850: /* 906850: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 906854: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906855: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 906859: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90685b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 90685d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90685f: je 0x90686b */
  if (zf) goto L_90686b;
L_906861: /* 906861: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906864: je 0x90686b */
  if (zf) goto L_90686b;
L_906866: /* 906866: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906869: jne 0x906890 */
  if (!zf) goto L_906890;
L_90686b: /* 90686b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90686e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906870: je 0x90687c */
  if (zf) goto L_90687c;
L_906872: /* 906872: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906875: je 0x90687c */
  if (zf) goto L_90687c;
L_906877: /* 906877: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90687a: jne 0x906890 */
  if (!zf) goto L_906890;
L_90687c: /* 90687c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90687f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906881: je 0x90688d */
  if (zf) goto L_90688d;
L_906883: /* 906883: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906886: je 0x90688d */
  if (zf) goto L_90688d;
L_906888: /* 906888: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90688b: jne 0x906890 */
  if (!zf) goto L_906890;
L_90688d: /* 90688d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_906890: /* 906890: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 906891: ret  */
  esp += 4; SPILL(); return;
}

void f_9068a0(void) {
  LOAD_REGS();
L_9068a0: /* 9068a0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9068a4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9068a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9068a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9068aa: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9068ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9068af: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9068b3: mov dword ptr [edx], 0xffffffff */
  W32((uint32_t)(edx), 0xffffffffu);
/* 9068b9: mov dword ptr [edi], 0xffffffff */
  W32((uint32_t)(edi), 0xffffffffu);
/* 9068bf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9068c1: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068c3: je 0x9068cf */
  if (zf) goto L_9068cf;
L_9068c5: /* 9068c5: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068c8: je 0x9068cf */
  if (zf) goto L_9068cf;
L_9068ca: /* 9068ca: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068cd: jne 0x9068d6 */
  if (!zf) goto L_9068d6;
L_9068cf: /* 9068cf: cmp dword ptr [edx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068d2: jne 0x90690e */
  if (!zf) goto L_90690e;
L_9068d4: /* 9068d4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_9068d6: /* 9068d6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9068d9: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 9068db: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068dd: je 0x9068e9 */
  if (zf) goto L_9068e9;
L_9068df: /* 9068df: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068e2: je 0x9068e9 */
  if (zf) goto L_9068e9;
L_9068e4: /* 9068e4: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068e7: jne 0x9068f0 */
  if (!zf) goto L_9068f0;
L_9068e9: /* 9068e9: cmp dword ptr [edx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068ec: jne 0x90690e */
  if (!zf) goto L_90690e;
L_9068ee: /* 9068ee: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_9068f0: /* 9068f0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9068f3: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 9068f5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068f7: je 0x906903 */
  if (zf) goto L_906903;
L_9068f9: /* 9068f9: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9068fc: je 0x906903 */
  if (zf) goto L_906903;
L_9068fe: /* 9068fe: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906901: jne 0x906910 */
  if (!zf) goto L_906910;
L_906903: /* 906903: cmp dword ptr [edx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906906: jne 0x90690e */
  if (!zf) goto L_90690e;
L_906908: /* 906908: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 906909: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90690a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 90690c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90690d: ret  */
  esp += 4; SPILL(); return;
L_90690e: /* 90690e: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
L_906910: /* 906910: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 906911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 906912: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 906913: ret  */
  esp += 4; SPILL(); return;
}

void f_906920(void) {
  LOAD_REGS();
L_906920: /* 906920: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906921: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 906922: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 906923: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 906927: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906928: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 90692a: xor cl, cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 90692c: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 90692f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906930: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 906934: mov byte ptr [esp + 0x12], bl */
  W8((uint32_t)(esp + 0x12u), (ebx & 0xffu));
/* 906938: mov byte ptr [esp + 0x13], cl */
  W8((uint32_t)(esp + 0x13u), (ecx & 0xffu));
/* 90693c: xor esi, esi */
  esi = 0;
L_90693e: /* 90693e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906940: je 0x9069cd */
  if (zf) goto L_9069cd;
L_906946: /* 906946: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 906949: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90694b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90694e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 906950: jae 0x9069cd */
  if (!cf) goto L_9069cd;
L_906952: /* 906952: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906954: jne 0x90696e */
  if (!zf) goto L_90696e;
L_906956: /* 906956: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 906959: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 90695b: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90695d: je 0x906969 */
  if (zf) goto L_906969;
L_90695f: /* 90695f: cmp dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906962: je 0x906969 */
  if (zf) goto L_906969;
L_906964: /* 906964: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906967: jne 0x90696e */
  if (!zf) goto L_90696e;
L_906969: /* 906969: mov byte ptr [esp + 0x13], 1 */
  W8((uint32_t)(esp + 0x13u), 0x1u);
L_90696e: /* 90696e: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 906972: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906974: jne 0x90698f */
  if (!zf) goto L_90698f;
L_906976: /* 906976: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 906979: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 90697c: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90697e: je 0x90698a */
  if (zf) goto L_90698a;
L_906980: /* 906980: cmp dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906983: je 0x90698a */
  if (zf) goto L_90698a;
L_906985: /* 906985: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906988: jne 0x90698f */
  if (!zf) goto L_90698f;
L_90698a: /* 90698a: mov byte ptr [esp + 0x12], 1 */
  W8((uint32_t)(esp + 0x12u), 0x1u);
L_90698f: /* 90698f: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906991: jne 0x9069a9 */
  if (!zf) goto L_9069a9;
L_906993: /* 906993: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 906996: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 906999: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90699b: je 0x9069a7 */
  if (zf) goto L_9069a7;
L_90699d: /* 90699d: cmp dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9069a0: je 0x9069a7 */
  if (zf) goto L_9069a7;
L_9069a2: /* 9069a2: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9069a5: jne 0x9069a9 */
  if (!zf) goto L_9069a9;
L_9069a7: /* 9069a7: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_9069a9: /* 9069a9: mov cl, byte ptr [esp + 0x13] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 9069ad: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9069af: je 0x9069bd */
  if (zf) goto L_9069bd;
L_9069b1: /* 9069b1: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 9069b5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9069b7: je 0x9069bd */
  if (zf) goto L_9069bd;
L_9069b9: /* 9069b9: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9069bb: jne 0x9069c3 */
  if (!zf) goto L_9069c3;
L_9069bd: /* 9069bd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9069be: jmp 0x90693e */
  goto L_90693e;
L_9069c3: /* 9069c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9069c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9069c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9069c6: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 9069c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9069c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9069ca: ret 8 */
  esp += 12; SPILL(); return;
L_9069cd: /* 9069cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9069ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9069cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9069d0: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 9069d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9069d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9069d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9069e0(void) {
  LOAD_REGS();
L_9069e0: /* 9069e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9069e2: push 0x9da240 */
  { uint32_t v = 0x9da240u; esp -= 4; W32(esp, v); }
/* 9069e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9069ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9069ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9069f5: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9069f8: mov al, byte ptr [esp + 0x70] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x70u))) & 0xffu);
/* 9069fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9069fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9069fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9069ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906a00: mov edi, ecx */
  edi = ecx;
/* 906a02: xor esi, esi */
  esi = 0;
/* 906a04: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 906a08: mov byte ptr [esp + 0x30], al */
  W8((uint32_t)(esp + 0x30u), (eax & 0xffu));
/* 906a0c: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 906a10: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 906a14: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 906a18: mov cl, byte ptr [esp + 0x80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x80u))) & 0xffu);
/* 906a1f: mov dword ptr [esp + 0x78], esi */
  W32((uint32_t)(esp + 0x78u), esi);
/* 906a23: mov byte ptr [esp + 0x40], cl */
  W8((uint32_t)(esp + 0x40u), (ecx & 0xffu));
/* 906a27: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 906a2b: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 906a2f: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 906a33: mov dl, byte ptr [esp + 0x80] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x80u))) & 0xffu);
/* 906a3a: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 906a3e: mov byte ptr [esp + 0x60], dl */
  W8((uint32_t)(esp + 0x60u), (edx & 0xffu));
/* 906a42: mov dword ptr [esp + 0x68], esi */
  W32((uint32_t)(esp + 0x68u), esi);
/* 906a46: mov dword ptr [esp + 0x6c], esi */
  W32((uint32_t)(esp + 0x6cu), esi);
/* 906a4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906a4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906a4c: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 906a50: mov byte ptr [esp + 0x80], 2 */
  W8((uint32_t)(esp + 0x80u), 0x2u);
/* 906a58: call 0x909ac0 */
  esp -= 4; W32(esp, 0x906a5du); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 906a5d: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 906a60: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 906a62: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 906a65: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 906a67: jl 0x906a74 */
  if ((sf != of)) goto L_906a74;
L_906a69: /* 906a69: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 906a6c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 906a6f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 906a72: jmp 0x906a7d */
  goto L_906a7d;
L_906a74: /* 906a74: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 906a77: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 906a7a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
L_906a7d: /* 906a7d: mov cl, byte ptr [edi + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x8u))) & 0xffu);
/* 906a80: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 906a83: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906a85: je 0x906a8c */
  if (zf) goto L_906a8c;
L_906a87: /* 906a87: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 906a8a: jmp 0x906a8f */
  goto L_906a8f;
L_906a8c: /* 906a8c: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
L_906a8f: /* 906a8f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906a91: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 906a95: je 0x906a9c */
  if (zf) goto L_906a9c;
L_906a97: /* 906a97: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 906a9a: jmp 0x906a9f */
  goto L_906a9f;
L_906a9c: /* 906a9c: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
L_906a9f: /* 906a9f: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 906aa3: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 906aa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906aa8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906aa9: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906aad: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 906ab1: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 906ab5: call 0x909cf0 */
  esp -= 4; W32(esp, 0x906abau); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 906aba: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 906abe: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 906ac2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906ac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906ac4: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906ac8: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 906acc: call 0x909cf0 */
  esp -= 4; W32(esp, 0x906ad1u); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 906ad1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 906ad3: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 906ad7: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906ad9: je 0x906ae3 */
  if (zf) goto L_906ae3;
L_906adb: /* 906adb: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 906adf: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 906ae1: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
L_906ae3: /* 906ae3: mov ebp, dword ptr [edx + 8] */
  ebp = R32((uint32_t)(edx + 0x8u));
/* 906ae6: xor eax, eax */
  eax = 0;
/* 906ae8: mov ax, word ptr [edi + esi*2 - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + esi*2 + 0xfffffffcu))) & 0xffffu);
/* 906aed: xor ecx, ecx */
  ecx = 0;
/* 906aef: mov cx, word ptr [edi + esi*2 - 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + esi*2 + 0xfffffffeu))) & 0xffffu);
/* 906af4: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 906af6: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 906af9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906afb: je 0x906c05 */
  if (zf) goto L_906c05;
L_906b01: /* 906b01: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906b03: je 0x906c05 */
  if (zf) goto L_906c05;
L_906b09: /* 906b09: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906b0b: je 0x906b11 */
  if (zf) goto L_906b11;
L_906b0d: /* 906b0d: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906b0f: jne 0x906b19 */
  if (!zf) goto L_906b19;
L_906b11: /* 906b11: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906b13: je 0x906b30 */
  if (zf) goto L_906b30;
L_906b15: /* 906b15: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906b17: je 0x906b30 */
  if (zf) goto L_906b30;
L_906b19: /* 906b19: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 906b1e: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906b23u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906b23: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 906b28: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906b2du); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906b2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_906b30: /* 906b30: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_906b34: /* 906b34: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 906b38: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 906b3c: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 906b40: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 906b44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906b45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906b46: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906b4a: call 0x909cf0 */
  esp -= 4; W32(esp, 0x906b4fu); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 906b4f: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 906b53: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 906b57: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 906b5e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 906b62: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 906b65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906b66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 906b67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906b68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906b69: call 0x905f60 */
  esp -= 4; W32(esp, 0x906b6eu); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 906b6e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906b71: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 906b75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906b77: je 0x906e79 */
  if (zf) goto L_906e79;
L_906b7d: /* 906b7d: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 906b80: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906b82: jge 0x906e79 */
  if ((sf == of)) goto L_906e79;
L_906b88: /* 906b88: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 906b8b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906b8d: jl 0x906b98 */
  if ((sf != of)) goto L_906b98;
L_906b8f: /* 906b8f: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906b92: je 0x906e79 */
  if (zf) goto L_906e79;
L_906b98: /* 906b98: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 906b9c: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 906ba0: mov esi, eax */
  esi = eax;
/* 906ba2: call 0x905c60 */
  esp -= 4; W32(esp, 0x906ba7u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 906ba7: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 906bab: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 906bae: xor ecx, ecx */
  ecx = 0;
/* 906bb0: xor edx, edx */
  edx = 0;
/* 906bb2: mov cx, word ptr [edi + eax*2 - 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*2 + 0xfffffffcu))) & 0xffffu);
/* 906bb7: mov dx, word ptr [edi + eax*2 - 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*2 + 0xfffffffeu))) & 0xffffu);
/* 906bbc: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 906bbe: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 906bc1: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906bc3: je 0x906c92 */
  if (zf) goto L_906c92;
L_906bc9: /* 906bc9: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906bcb: je 0x906c92 */
  if (zf) goto L_906c92;
L_906bd1: /* 906bd1: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906bd3: je 0x906bd9 */
  if (zf) goto L_906bd9;
L_906bd5: /* 906bd5: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906bd7: jne 0x906be9 */
  if (!zf) goto L_906be9;
L_906bd9: /* 906bd9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906bdb: je 0x906cc3 */
  if (zf) goto L_906cc3;
L_906be1: /* 906be1: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906be3: je 0x906cc3 */
  if (zf) goto L_906cc3;
L_906be9: /* 906be9: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 906bee: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906bf3u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906bf3: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 906bf8: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906bfdu); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906bfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906c00: jmp 0x906cc3 */
  goto L_906cc3;
L_906c05: /* 906c05: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c07: je 0x906c3d */
  if (zf) goto L_906c3d;
L_906c09: /* 906c09: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c0b: je 0x906c3d */
  if (zf) goto L_906c3d;
L_906c0d: /* 906c0d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c0f: je 0x906c15 */
  if (zf) goto L_906c15;
L_906c11: /* 906c11: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c13: jne 0x906c1d */
  if (!zf) goto L_906c1d;
L_906c15: /* 906c15: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c17: je 0x906c34 */
  if (zf) goto L_906c34;
L_906c19: /* 906c19: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c1b: je 0x906c34 */
  if (zf) goto L_906c34;
L_906c1d: /* 906c1d: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 906c22: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906c27u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906c27: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 906c2c: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906c31u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906c31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_906c34: /* 906c34: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 906c38: jmp 0x906b34 */
  goto L_906b34;
L_906c3d: /* 906c3d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c3f: je 0x906c75 */
  if (zf) goto L_906c75;
L_906c41: /* 906c41: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c43: je 0x906c75 */
  if (zf) goto L_906c75;
L_906c45: /* 906c45: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c47: je 0x906c4d */
  if (zf) goto L_906c4d;
L_906c49: /* 906c49: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c4b: jne 0x906c55 */
  if (!zf) goto L_906c55;
L_906c4d: /* 906c4d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c4f: je 0x906c6c */
  if (zf) goto L_906c6c;
L_906c51: /* 906c51: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c53: je 0x906c6c */
  if (zf) goto L_906c6c;
L_906c55: /* 906c55: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 906c5a: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906c5fu); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906c5f: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 906c64: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906c69u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906c69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_906c6c: /* 906c6c: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 906c70: jmp 0x906b34 */
  goto L_906b34;
L_906c75: /* 906c75: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c77: je 0x906b30 */
  if (zf) goto L_906b30;
L_906c7d: /* 906c7d: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c7f: je 0x906b30 */
  if (zf) goto L_906b30;
L_906c85: /* 906c85: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c87: je 0x906c34 */
  if (zf) goto L_906c34;
L_906c89: /* 906c89: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 906c8d: jmp 0x906b34 */
  goto L_906b34;
L_906c92: /* 906c92: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c94: je 0x906cff */
  if (zf) goto L_906cff;
L_906c96: /* 906c96: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c98: je 0x906cff */
  if (zf) goto L_906cff;
L_906c9a: /* 906c9a: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906c9c: je 0x906ca2 */
  if (zf) goto L_906ca2;
L_906c9e: /* 906c9e: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906ca0: jne 0x906caa */
  if (!zf) goto L_906caa;
L_906ca2: /* 906ca2: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906ca4: je 0x906cc1 */
  if (zf) goto L_906cc1;
L_906ca6: /* 906ca6: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906ca8: je 0x906cc1 */
  if (zf) goto L_906cc1;
L_906caa: /* 906caa: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 906caf: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906cb4u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906cb4: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 906cb9: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906cbeu); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906cbe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_906cc1: /* 906cc1: mov edi, ebp */
  edi = ebp;
L_906cc3: /* 906cc3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 906cc7: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 906cce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906ccf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 906cd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906cd2: call 0x905f60 */
  esp -= 4; W32(esp, 0x906cd7u); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 906cd7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906cda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906cdc: je 0x906d43 */
  if (zf) goto L_906d43;
L_906cde: /* 906cde: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 906ce1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906ce3: jge 0x906d43 */
  if ((sf == of)) goto L_906d43;
L_906ce5: /* 906ce5: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 906ce9: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 906cec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906cee: jl 0x906df8 */
  if ((sf != of)) goto L_906df8;
L_906cf4: /* 906cf4: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906cf7: jne 0x906df8 */
  if (!zf) goto L_906df8;
L_906cfd: /* 906cfd: jmp 0x906d47 */
  goto L_906d47;
L_906cff: /* 906cff: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d01: je 0x906d32 */
  if (zf) goto L_906d32;
L_906d03: /* 906d03: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d05: je 0x906d32 */
  if (zf) goto L_906d32;
L_906d07: /* 906d07: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d09: je 0x906d0f */
  if (zf) goto L_906d0f;
L_906d0b: /* 906d0b: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d0d: jne 0x906d17 */
  if (!zf) goto L_906d17;
L_906d0f: /* 906d0f: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d11: je 0x906d2e */
  if (zf) goto L_906d2e;
L_906d13: /* 906d13: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d15: je 0x906d2e */
  if (zf) goto L_906d2e;
L_906d17: /* 906d17: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 906d1c: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906d21u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906d21: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 906d26: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906d2bu); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906d2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_906d2e: /* 906d2e: mov edi, esi */
  edi = esi;
/* 906d30: jmp 0x906cc3 */
  goto L_906cc3;
L_906d32: /* 906d32: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d34: je 0x906cc3 */
  if (zf) goto L_906cc3;
L_906d36: /* 906d36: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d38: je 0x906cc3 */
  if (zf) goto L_906cc3;
L_906d3a: /* 906d3a: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d3c: je 0x906cc1 */
  if (zf) goto L_906cc1;
L_906d3e: /* 906d3e: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 906d41: jmp 0x906cc3 */
  goto L_906cc3;
L_906d43: /* 906d43: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_906d47: /* 906d47: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 906d4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906d4f: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 906d53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906d54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906d55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906d56: call 0x905f60 */
  esp -= 4; W32(esp, 0x906d5bu); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 906d5b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906d5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906d60: je 0x906df8 */
  if (zf) goto L_906df8;
L_906d66: /* 906d66: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 906d69: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906d6b: jge 0x906df8 */
  if ((sf == of)) goto L_906df8;
L_906d71: /* 906d71: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 906d74: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906d76: jl 0x906d7d */
  if ((sf != of)) goto L_906d7d;
L_906d78: /* 906d78: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906d7b: je 0x906df8 */
  if (zf) goto L_906df8;
L_906d7d: /* 906d7d: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 906d7f: call 0x6c242d */
  esp -= 4; W32(esp, 0x906d84u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 906d84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906d87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906d89: je 0x906da1 */
  if (zf) goto L_906da1;
L_906d8b: /* 906d8b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 906d8e: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 906d91: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 906d93: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 906d96: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 906d99: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 906d9c: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 906d9f: jmp 0x906da6 */
  goto L_906da6;
L_906da1: /* 906da1: xor eax, eax */
  eax = 0;
/* 906da3: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_906da6: /* 906da6: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 906daa: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 906dae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906daf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906db0: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 906db4: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 906db8: call 0x909ac0 */
  esp -= 4; W32(esp, 0x906dbdu); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 906dbd: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 906dc0: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 906dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906dc6: jl 0x906dd3 */
  if ((sf != of)) goto L_906dd3;
L_906dc8: /* 906dc8: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 906dcb: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 906dce: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 906dd1: jmp 0x906ddc */
  goto L_906ddc;
L_906dd3: /* 906dd3: mov dword ptr [ecx + 0x14], ebx */
  W32((uint32_t)(ecx + 0x14u), ebx);
/* 906dd6: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 906dd9: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
L_906ddc: /* 906ddc: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 906de0: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 906de4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906de6: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906dea: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 906dee: call 0x909cf0 */
  esp -= 4; W32(esp, 0x906df3u); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 906df3: inc dword ptr [ebp + 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x28u), r);
  }
/* 906df6: jmp 0x906dff */
  goto L_906dff;
L_906df8: /* 906df8: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 906dfc: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_906dff: /* 906dff: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 906e03: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 906e07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906e08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906e09: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 906e0d: call 0x909ac0 */
  esp -= 4; W32(esp, 0x906e12u); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 906e12: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 906e15: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 906e19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906e1b: jl 0x906e28 */
  if ((sf != of)) goto L_906e28;
L_906e1d: /* 906e1d: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 906e20: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 906e23: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 906e26: jmp 0x906e31 */
  goto L_906e31;
L_906e28: /* 906e28: mov dword ptr [ecx + 0x14], ebx */
  W32((uint32_t)(ecx + 0x14u), ebx);
/* 906e2b: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 906e2e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_906e31: /* 906e31: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 906e35: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 906e39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906e3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906e3b: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906e3f: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 906e43: call 0x909cf0 */
  esp -= 4; W32(esp, 0x906e48u); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 906e48: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 906e4c: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 906e53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906e54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906e55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906e56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906e57: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 906e5b: mov ebx, edi */
  ebx = edi;
/* 906e5d: call 0x905f60 */
  esp -= 4; W32(esp, 0x906e62u); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 906e62: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 906e66: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 906e6a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906e6d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 906e71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 906e73: jne 0x906b7d */
  if (!zf) goto L_906b7d;
L_906e79: /* 906e79: mov dl, byte ptr [esp + 0x80] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x80u))) & 0xffu);
/* 906e80: xor ebx, ebx */
  ebx = 0;
/* 906e82: mov byte ptr [esp + 0x50], dl */
  W8((uint32_t)(esp + 0x50u), (edx & 0xffu));
/* 906e86: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 906e8a: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 906e8e: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 906e92: mov byte ptr [esp + 0x78], 3 */
  W8((uint32_t)(esp + 0x78u), 0x3u);
/* 906e97: xor esi, esi */
  esi = 0;
L_906e99: /* 906e99: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 906e9d: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906e9f: je 0x906ec3 */
  if (zf) goto L_906ec3;
L_906ea1: /* 906ea1: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 906ea5: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 906ea7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 906eaa: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 906eac: jae 0x906ec3 */
  if (!cf) goto L_906ec3;
L_906eae: /* 906eae: lea eax, [ecx + esi*4] */
  eax = (uint32_t)(ecx + esi*4);
/* 906eb1: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 906eb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906eb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906eb7: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 906ebb: call 0x909ac0 */
  esp -= 4; W32(esp, 0x906ec0u); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 906ec0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 906ec1: jmp 0x906e99 */
  goto L_906e99;
L_906ec3: /* 906ec3: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 906ec7: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 906ecb: call 0x905c60 */
  esp -= 4; W32(esp, 0x906ed0u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 906ed0: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 906ed4: call 0x905c60 */
  esp -= 4; W32(esp, 0x906ed9u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 906ed9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 906edb: jbe 0x906ef0 */
  if ((cf | zf)) goto L_906ef0;
L_906edd: /* 906edd: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 906ee1: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 906ee5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906ee6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906ee7: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906eeb: call 0x905e90 */
  esp -= 4; W32(esp, 0x906ef0u); SPILL(); f_905e90(); if (g_unwind) return; RELOAD();
L_906ef0: /* 906ef0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 906ef4: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 906ef8: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 906efc: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 906f00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906f01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906f02: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906f06: call 0x909cf0 */
  esp -= 4; W32(esp, 0x906f0bu); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 906f0b: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 906f0f: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 906f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906f14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906f15: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906f19: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 906f1d: call 0x909cf0 */
  esp -= 4; W32(esp, 0x906f22u); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 906f22: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 906f26: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 906f2a: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 906f2e: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 906f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906f33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906f34: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 906f38: call 0x909cf0 */
  esp -= 4; W32(esp, 0x906f3du); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 906f3d: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 906f40: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 906f47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 906f48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906f49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 906f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 906f4b: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 906f4f: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 906f53: call 0x905f60 */
  esp -= 4; W32(esp, 0x906f58u); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 906f58: mov esi, eax */
  esi = eax;
/* 906f5a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 906f5d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906f5f: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 906f63: je 0x9071e4 */
  if (zf) goto L_9071e4;
L_906f69: /* 906f69: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 906f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906f6e: jge 0x9071e4 */
  if ((sf == of)) goto L_9071e4;
L_906f74: /* 906f74: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 906f77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 906f79: jl 0x906f84 */
  if ((sf != of)) goto L_906f84;
L_906f7b: /* 906f7b: cmp dword ptr [esi + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906f7e: je 0x9071e4 */
  if (zf) goto L_9071e4;
L_906f84: /* 906f84: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 906f88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 906f89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 906f8a: mov ecx, ebp */
  ecx = ebp;
/* 906f8c: call 0x906920 */
  esp -= 4; W32(esp, 0x906f91u); SPILL(); f_906920(); if (g_unwind) return; RELOAD();
/* 906f91: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 906f93: je 0x9071e4 */
  if (zf) goto L_9071e4;
L_906f99: /* 906f99: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 906f9d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 906fa1: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 906fa5: call 0x905c60 */
  esp -= 4; W32(esp, 0x906faau); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 906faa: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 906fae: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 906fb1: xor ecx, ecx */
  ecx = 0;
/* 906fb3: xor edx, edx */
  edx = 0;
/* 906fb5: mov cx, word ptr [edi + eax*2 - 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*2 + 0xfffffffcu))) & 0xffffu);
/* 906fba: mov dx, word ptr [edi + eax*2 - 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*2 + 0xfffffffeu))) & 0xffffu);
/* 906fbf: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 906fc1: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 906fc4: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906fc6: je 0x907040 */
  if (zf) goto L_907040;
L_906fc8: /* 906fc8: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906fca: je 0x907040 */
  if (zf) goto L_907040;
L_906fcc: /* 906fcc: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906fce: je 0x906fd4 */
  if (zf) goto L_906fd4;
L_906fd0: /* 906fd0: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906fd2: jne 0x906fdc */
  if (!zf) goto L_906fdc;
L_906fd4: /* 906fd4: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906fd6: je 0x906ff3 */
  if (zf) goto L_906ff3;
L_906fd8: /* 906fd8: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 906fda: je 0x906ff3 */
  if (zf) goto L_906ff3;
L_906fdc: /* 906fdc: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 906fe1: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906fe6u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906fe6: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 906feb: call 0x99cea6 */
  esp -= 4; W32(esp, 0x906ff0u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 906ff0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_906ff3: /* 906ff3: mov esi, edi */
  esi = edi;
L_906ff5: /* 906ff5: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 906ff9: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 906ffd: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 907004: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 907005: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907007: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 907008: call 0x905f60 */
  esp -= 4; W32(esp, 0x90700du); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 90700d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907010: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907012: je 0x9070cb */
  if (zf) goto L_9070cb;
L_907018: /* 907018: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 90701b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90701d: jge 0x9070cb */
  if ((sf == of)) goto L_9070cb;
L_907023: /* 907023: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 907027: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 90702a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90702c: jl 0x90716d */
  if ((sf != of)) goto L_90716d;
L_907032: /* 907032: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907035: jne 0x90716d */
  if (!zf) goto L_90716d;
L_90703b: /* 90703b: jmp 0x9070cf */
  goto L_9070cf;
L_907040: /* 907040: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907042: je 0x907073 */
  if (zf) goto L_907073;
L_907044: /* 907044: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907046: je 0x907073 */
  if (zf) goto L_907073;
L_907048: /* 907048: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90704a: je 0x907050 */
  if (zf) goto L_907050;
L_90704c: /* 90704c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90704e: jne 0x907058 */
  if (!zf) goto L_907058;
L_907050: /* 907050: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907052: je 0x90706f */
  if (zf) goto L_90706f;
L_907054: /* 907054: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907056: je 0x90706f */
  if (zf) goto L_90706f;
L_907058: /* 907058: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 90705d: call 0x99cea6 */
  esp -= 4; W32(esp, 0x907062u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 907062: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 907067: call 0x99cea6 */
  esp -= 4; W32(esp, 0x90706cu); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 90706c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90706f: /* 90706f: mov esi, ebp */
  esi = ebp;
/* 907071: jmp 0x906ff5 */
  goto L_906ff5;
L_907073: /* 907073: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907075: je 0x9070af */
  if (zf) goto L_9070af;
L_907077: /* 907077: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907079: je 0x9070af */
  if (zf) goto L_9070af;
L_90707b: /* 90707b: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90707d: je 0x907083 */
  if (zf) goto L_907083;
L_90707f: /* 90707f: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907081: jne 0x907093 */
  if (!zf) goto L_907093;
L_907083: /* 907083: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907085: je 0x906ff5 */
  if (zf) goto L_906ff5;
L_90708b: /* 90708b: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90708d: je 0x906ff5 */
  if (zf) goto L_906ff5;
L_907093: /* 907093: push 0xaf2624 */
  { uint32_t v = 0xaf2624u; esp -= 4; W32(esp, v); }
/* 907098: call 0x99cea6 */
  esp -= 4; W32(esp, 0x90709du); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 90709d: push 0xaf25e8 */
  { uint32_t v = 0xaf25e8u; esp -= 4; W32(esp, v); }
/* 9070a2: call 0x99cea6 */
  esp -= 4; W32(esp, 0x9070a7u); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 9070a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9070aa: jmp 0x906ff5 */
  goto L_906ff5;
L_9070af: /* 9070af: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9070b1: je 0x906ff3 */
  if (zf) goto L_906ff3;
L_9070b7: /* 9070b7: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9070b9: je 0x906ff3 */
  if (zf) goto L_906ff3;
L_9070bf: /* 9070bf: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9070c1: je 0x90706f */
  if (zf) goto L_90706f;
L_9070c3: /* 9070c3: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 9070c6: jmp 0x906ff5 */
  goto L_906ff5;
L_9070cb: /* 9070cb: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_9070cf: /* 9070cf: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9070d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9070d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9070d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9070d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9070d7: call 0x905f60 */
  esp -= 4; W32(esp, 0x9070dcu); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 9070dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9070df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9070e1: je 0x90716d */
  if (zf) goto L_90716d;
L_9070e7: /* 9070e7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9070ea: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9070ec: jge 0x90716d */
  if ((sf == of)) goto L_90716d;
L_9070ee: /* 9070ee: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 9070f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9070f3: jl 0x9070fa */
  if ((sf != of)) goto L_9070fa;
L_9070f5: /* 9070f5: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9070f8: je 0x90716d */
  if (zf) goto L_90716d;
L_9070fa: /* 9070fa: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 9070fc: call 0x6c242d */
  esp -= 4; W32(esp, 0x907101u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 907101: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 907105: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907108: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90710a: je 0x907126 */
  if (zf) goto L_907126;
L_90710c: /* 90710c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 907110: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 907113: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 907115: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 907118: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 90711b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 90711e: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 907121: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 907124: jmp 0x907128 */
  goto L_907128;
L_907126: /* 907126: xor eax, eax */
  eax = 0;
L_907128: /* 907128: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 90712c: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 907130: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 907134: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907135: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907136: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 90713a: call 0x909ac0 */
  esp -= 4; W32(esp, 0x90713fu); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 90713f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 907143: mov ecx, ebp */
  ecx = ebp;
/* 907145: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907146: call 0x907250 */
  esp -= 4; W32(esp, 0x90714bu); SPILL(); f_907250(); if (g_unwind) return; RELOAD();
/* 90714b: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 90714f: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 907153: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907154: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907155: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 907159: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 90715d: call 0x909cf0 */
  esp -= 4; W32(esp, 0x907162u); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 907162: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 907165: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 907169: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90716a: mov dword ptr [ebp + 0x28], eax */
  W32((uint32_t)(ebp + 0x28u), eax);
L_90716d: /* 90716d: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 907171: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 907175: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907176: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907177: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 90717b: call 0x909ac0 */
  esp -= 4; W32(esp, 0x907180u); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 907180: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 907184: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 907188: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907189: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90718a: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 90718e: call 0x909ac0 */
  esp -= 4; W32(esp, 0x907193u); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 907193: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 907197: mov ecx, ebp */
  ecx = ebp;
/* 907199: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90719a: call 0x907250 */
  esp -= 4; W32(esp, 0x90719fu); SPILL(); f_907250(); if (g_unwind) return; RELOAD();
/* 90719f: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9071a3: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 9071a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9071a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9071a9: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 9071ad: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 9071b1: call 0x909cf0 */
  esp -= 4; W32(esp, 0x9071b6u); SPILL(); f_909cf0(); if (g_unwind) return; RELOAD();
/* 9071b6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9071ba: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9071be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9071bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9071c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9071c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9071c2: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9071c6: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 9071ca: call 0x905f60 */
  esp -= 4; W32(esp, 0x9071cfu); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 9071cf: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 9071d3: mov esi, eax */
  esi = eax;
/* 9071d5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9071d8: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9071dc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9071de: jne 0x906f69 */
  if (!zf) goto L_906f69;
L_9071e4: /* 9071e4: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 9071e8: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 9071ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9071ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9071ee: mov ecx, ebp */
  ecx = ebp;
/* 9071f0: call 0x907280 */
  esp -= 4; W32(esp, 0x9071f5u); SPILL(); f_907280(); if (g_unwind) return; RELOAD();
/* 9071f5: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 9071f9: mov byte ptr [esp + 0x78], 2 */
  W8((uint32_t)(esp + 0x78u), 0x2u);
/* 9071fe: call 0x905be0 */
  esp -= 4; W32(esp, 0x907203u); SPILL(); f_905be0(); if (g_unwind) return; RELOAD();
/* 907203: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 907207: mov byte ptr [esp + 0x78], 1 */
  W8((uint32_t)(esp + 0x78u), 0x1u);
/* 90720c: call 0x905be0 */
  esp -= 4; W32(esp, 0x907211u); SPILL(); f_905be0(); if (g_unwind) return; RELOAD();
/* 907211: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 907215: mov byte ptr [esp + 0x78], 0 */
  W8((uint32_t)(esp + 0x78u), 0x0u);
/* 90721a: call 0x905be0 */
  esp -= 4; W32(esp, 0x90721fu); SPILL(); f_905be0(); if (g_unwind) return; RELOAD();
/* 90721f: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 907223: mov dword ptr [esp + 0x78], 0xffffffff */
  W32((uint32_t)(esp + 0x78u), 0xffffffffu);
/* 90722b: call 0x905c00 */
  esp -= 4; W32(esp, 0x907230u); SPILL(); f_905c00(); if (g_unwind) return; RELOAD();
/* 907230: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 907234: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 907235: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 907236: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 907237: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 907238: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 90723f: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907242: ret 8 */
  esp += 12; SPILL(); return;
}

void f_907250(void) {
  LOAD_REGS();
L_907250: /* 907250: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 907253: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 907255: jl 0x907267 */
  if ((sf != of)) goto L_907267;
L_907257: /* 907257: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90725b: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 90725e: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 907261: mov dword ptr [edx + 0x10], eax */
  W32((uint32_t)(edx + 0x10u), eax);
/* 907264: ret 4 */
  esp += 8; SPILL(); return;
L_907267: /* 907267: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90726b: mov dword ptr [eax + 0x14], 0xffffffff */
  W32((uint32_t)(eax + 0x14u), 0xffffffffu);
/* 907272: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 907275: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 907278: ret 4 */
  esp += 8; SPILL(); return;
}

void f_907280(void) {
  LOAD_REGS();
L_907280: /* 907280: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 907283: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 907284: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907285: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 907289: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90728a: mov esi, ecx */
  esi = ecx;
/* 90728c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90728d: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 907290: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907292: jne 0x907298 */
  if (!zf) goto L_907298;
L_907294: /* 907294: xor eax, eax */
  eax = 0;
/* 907296: jmp 0x9072a0 */
  goto L_9072a0;
L_907298: /* 907298: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 90729b: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90729d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_9072a0: /* 9072a0: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 9072a3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9072a5: jl 0x9072c1 */
  if ((sf != of)) goto L_9072c1;
L_9072a7: /* 9072a7: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
L_9072aa: /* 9072aa: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 9072ad: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 9072b0: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 9072b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9072b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9072b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9072b7: mov ecx, ebx */
  ecx = ebx;
/* 9072b9: call 0x90a690 */
  esp -= 4; W32(esp, 0x9072beu); SPILL(); f_90a690(); if (g_unwind) return; RELOAD();
/* 9072be: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 9072bf: jns 0x9072aa */
  if (!sf) goto L_9072aa;
L_9072c1: /* 9072c1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9072c5: xor ebp, ebp */
  ebp = 0;
/* 9072c7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 9072ca: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9072cc: jne 0x9072d4 */
  if (!zf) goto L_9072d4;
L_9072ce: /* 9072ce: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 9072d2: jmp 0x9072e0 */
  goto L_9072e0;
L_9072d4: /* 9072d4: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 9072d7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9072d9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9072dc: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
L_9072e0: /* 9072e0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9072e4: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 9072e8: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9072ea: jle 0x907460 */
  if ((zf || sf != of)) goto L_907460;
L_9072f0: /* 9072f0: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9072f3: jmp 0x9072f9 */
  goto L_9072f9;
L_9072f5: /* 9072f5: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
L_9072f9: /* 9072f9: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 9072fc: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9072ff: lea ebx, [eax + ebp*4] */
  ebx = (uint32_t)(eax + ebp*4);
/* 907302: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 907305: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 907307: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 90730b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90730e: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 907311: mov edi, eax */
  edi = eax;
/* 907313: jae 0x9073c9 */
  if (!cf) goto L_9073c9;
L_907319: /* 907319: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90731c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90731e: je 0x90732c */
  if (zf) goto L_90732c;
L_907320: /* 907320: mov ecx, eax */
  ecx = eax;
/* 907322: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 907324: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 907327: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 90732a: ja 0x907331 */
  if ((!cf && !zf)) goto L_907331;
L_90732c: /* 90732c: mov ecx, 1 */
  ecx = 0x1u;
L_907331: /* 907331: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907333: jne 0x907339 */
  if (!zf) goto L_907339;
L_907335: /* 907335: xor eax, eax */
  eax = 0;
/* 907337: jmp 0x90733e */
  goto L_90733e;
L_907339: /* 907339: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90733b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_90733e: /* 90733e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 907340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 907342: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 907346: jge 0x90734a */
  if ((sf == of)) goto L_90734a;
L_907348: /* 907348: xor eax, eax */
  eax = 0;
L_90734a: /* 90734a: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 907351: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907352: call 0x6c242d */
  esp -= 4; W32(esp, 0x907357u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 907357: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90735a: mov ebx, eax */
  ebx = eax;
/* 90735c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90735f: mov ecx, esi */
  ecx = esi;
/* 907361: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 907362: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 907363: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907364: call 0x909ca0 */
  esp -= 4; W32(esp, 0x907369u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 907369: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 90736d: mov ebp, eax */
  ebp = eax;
/* 90736f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907370: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907372: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907373: mov ecx, esi */
  ecx = esi;
/* 907375: call 0x90b400 */
  esp -= 4; W32(esp, 0x90737au); SPILL(); f_90b400(); if (g_unwind) return; RELOAD();
/* 90737a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 90737d: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 907380: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907381: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907382: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 907383: mov ecx, esi */
  ecx = esi;
/* 907385: call 0x909ca0 */
  esp -= 4; W32(esp, 0x90738au); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 90738a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90738d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 907390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907392: mov ecx, esi */
  ecx = esi;
/* 907394: call 0x909c90 */
  esp -= 4; W32(esp, 0x907399u); SPILL(); f_909c90(); if (g_unwind) return; RELOAD();
/* 907399: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90739c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90739d: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9073a2u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9073a2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9073a6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9073a9: lea ecx, [ebx + eax*4] */
  ecx = (uint32_t)(ebx + eax*4);
/* 9073ac: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 9073af: mov ecx, esi */
  ecx = esi;
/* 9073b1: call 0x909a40 */
  esp -= 4; W32(esp, 0x9073b6u); SPILL(); f_909a40(); if (g_unwind) return; RELOAD();
/* 9073b6: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 9073ba: lea edx, [ebx + eax*4 + 4] */
  edx = (uint32_t)(ebx + eax*4 + 0x4u);
/* 9073be: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 9073c1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 9073c4: jmp 0x90744f */
  goto L_90744f;
L_9073c9: /* 9073c9: mov ecx, eax */
  ecx = eax;
/* 9073cb: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9073cd: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 9073d0: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9073d3: mov ecx, esi */
  ecx = esi;
/* 9073d5: jae 0x907413 */
  if (!cf) goto L_907413;
L_9073d7: /* 9073d7: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 9073da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9073db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9073dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9073dd: call 0x909ca0 */
  esp -= 4; W32(esp, 0x9073e2u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 9073e2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9073e5: mov edx, 1 */
  edx = 0x1u;
/* 9073ea: mov ecx, eax */
  ecx = eax;
/* 9073ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9073ed: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9073ef: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 9073f2: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9073f4: mov ecx, esi */
  ecx = esi;
/* 9073f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9073f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9073f8: call 0x90b400 */
  esp -= 4; W32(esp, 0x9073fdu); SPILL(); f_90b400(); if (g_unwind) return; RELOAD();
/* 9073fd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 907400: mov eax, edi */
  eax = edi;
/* 907402: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907404: je 0x90744b */
  if (zf) goto L_90744b;
L_907406: /* 907406: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 907408: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90740a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90740d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90740f: jne 0x907406 */
  if (!zf) goto L_907406;
L_907411: /* 907411: jmp 0x90744b */
  goto L_90744b;
L_907413: /* 907413: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907415: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 907418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907419: call 0x909ca0 */
  esp -= 4; W32(esp, 0x90741eu); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 90741e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 907421: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 907424: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907426: je 0x907437 */
  if (zf) goto L_907437;
L_907428: /* 907428: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 90742b: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90742e: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 907431: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907433: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 907435: jne 0x907428 */
  if (!zf) goto L_907428;
L_907437: /* 907437: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 90743a: mov eax, edi */
  eax = edi;
/* 90743c: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90743e: je 0x90744b */
  if (zf) goto L_90744b;
L_907440: /* 907440: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 907442: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 907444: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 907447: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907449: jne 0x907440 */
  if (!zf) goto L_907440;
L_90744b: /* 90744b: add dword ptr [esi + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x8u), r);
  }
L_90744f: /* 90744f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 907453: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 907454: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907456: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 90745a: jl 0x9072f5 */
  if ((sf != of)) goto L_9072f5;
L_907460: /* 907460: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 907461: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 907462: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 907463: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 907464: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907467: ret 8 */
  esp += 12; SPILL(); return;
}

void f_907470(void) {
  LOAD_REGS();
L_907470: /* 907470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 907471: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907472: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 907476: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907477: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 907478: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 90747c: mov esi, ecx */
  esi = ecx;
/* 90747e: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 907481: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 907483: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 907484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907485: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907486: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 90748a: call 0x905f20 */
  esp -= 4; W32(esp, 0x90748fu); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 90748f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 907492: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907495: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907497: je 0x9074bd */
  if (zf) goto L_9074bd;
L_907499: /* 907499: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 90749c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90749e: jl 0x9074aa */
  if ((sf != of)) goto L_9074aa;
L_9074a0: /* 9074a0: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 9074a3: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 9074a6: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9074a8: jmp 0x9074b2 */
  goto L_9074b2;
L_9074aa: /* 9074aa: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 9074ad: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9074b0: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_9074b2: /* 9074b2: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9074b5: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9074b7: jne 0x9075ae */
  if (!zf) goto L_9075ae;
L_9074bd: /* 9074bd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9074c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9074c2: je 0x9074e8 */
  if (zf) goto L_9074e8;
L_9074c4: /* 9074c4: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 9074c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9074c9: jl 0x9074d5 */
  if ((sf != of)) goto L_9074d5;
L_9074cb: /* 9074cb: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 9074ce: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 9074d1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9074d3: jmp 0x9074dd */
  goto L_9074dd;
L_9074d5: /* 9074d5: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 9074d8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 9074db: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_9074dd: /* 9074dd: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9074e0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9074e2: jne 0x9075ae */
  if (!zf) goto L_9075ae;
L_9074e8: /* 9074e8: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 9074eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9074ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9074ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9074ee: call 0x905f20 */
  esp -= 4; W32(esp, 0x9074f3u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 9074f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9074f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9074f9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9074fb: je 0x907521 */
  if (zf) goto L_907521;
L_9074fd: /* 9074fd: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 907500: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 907502: jl 0x90750e */
  if ((sf != of)) goto L_90750e;
L_907504: /* 907504: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 907507: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 90750a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90750c: jmp 0x907516 */
  goto L_907516;
L_90750e: /* 90750e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 907511: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 907514: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_907516: /* 907516: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 907519: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90751b: jne 0x9075ae */
  if (!zf) goto L_9075ae;
L_907521: /* 907521: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 907524: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907526: je 0x907548 */
  if (zf) goto L_907548;
L_907528: /* 907528: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 90752b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90752d: jl 0x907539 */
  if ((sf != of)) goto L_907539;
L_90752f: /* 90752f: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 907532: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 907535: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907537: jmp 0x907541 */
  goto L_907541;
L_907539: /* 907539: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 90753c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 90753f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_907541: /* 907541: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 907544: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907546: jne 0x9075ae */
  if (!zf) goto L_9075ae;
L_907548: /* 907548: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 90754c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90754d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90754e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90754f: call 0x905f20 */
  esp -= 4; W32(esp, 0x907554u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 907554: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 907557: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90755a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90755c: je 0x90757e */
  if (zf) goto L_90757e;
L_90755e: /* 90755e: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 907561: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 907563: jl 0x90756f */
  if ((sf != of)) goto L_90756f;
L_907565: /* 907565: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 907568: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 90756b: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90756d: jmp 0x907577 */
  goto L_907577;
L_90756f: /* 90756f: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 907572: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 907575: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_907577: /* 907577: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 90757a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90757c: jne 0x9075ae */
  if (!zf) goto L_9075ae;
L_90757e: /* 90757e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 907581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907583: je 0x9075a5 */
  if (zf) goto L_9075a5;
L_907585: /* 907585: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 907588: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90758a: jl 0x907596 */
  if ((sf != of)) goto L_907596;
L_90758c: /* 90758c: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 90758f: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 907592: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907594: jmp 0x90759e */
  goto L_90759e;
L_907596: /* 907596: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 907599: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 90759c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_90759e: /* 90759e: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9075a1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9075a3: jne 0x9075ae */
  if (!zf) goto L_9075ae;
L_9075a5: /* 9075a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9075a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9075a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9075a8: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 9075aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9075ab: ret 8 */
  esp += 12; SPILL(); return;
L_9075ae: /* 9075ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9075af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9075b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9075b1: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 9075b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9075b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9075c0(void) {
  LOAD_REGS();
L_9075c0: /* 9075c0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9075c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9075c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9075c5: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 9075c9: xor ebp, ebp */
  ebp = 0;
/* 9075cb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9075ce: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9075d0: jne 0x9075d8 */
  if (!zf) goto L_9075d8;
L_9075d2: /* 9075d2: mov dword ptr [esp + 8], ebp */
  W32((uint32_t)(esp + 0x8u), ebp);
/* 9075d6: jmp 0x9075e4 */
  goto L_9075e4;
L_9075d8: /* 9075d8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 9075db: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9075dd: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9075e0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_9075e4: /* 9075e4: cmp dword ptr [esp + 8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9075e8: jle 0x90767a */
  if ((zf || sf != of)) goto L_90767a;
L_9075ee: /* 9075ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9075ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_9075f0: /* 9075f0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9075f3: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9075f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9075f8: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9075fc: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 9075ff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907601: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 907605: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 90760c: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 90760f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907610: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x907615u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 907615: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 907618: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 90761b: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90761e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 907621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907623: jne 0x907629 */
  if (!zf) goto L_907629;
L_907625: /* 907625: xor ebx, ebx */
  ebx = 0;
/* 907627: jmp 0x907631 */
  goto L_907631;
L_907629: /* 907629: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 90762c: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 90762e: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
L_907631: /* 907631: xor edi, edi */
  edi = 0;
/* 907633: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 907635: jle 0x90766b */
  if ((zf || sf != of)) goto L_90766b;
L_907637: /* 907637: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 90763b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90763e: mov esi, edx */
  esi = edx;
/* 907640: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 907643: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 907646: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 907648: jl 0x907655 */
  if ((sf != of)) goto L_907655;
L_90764a: /* 90764a: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 90764d: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 907650: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 907653: jmp 0x907662 */
  goto L_907662;
L_907655: /* 907655: mov dword ptr [ecx + 0x14], 0xffffffff */
  W32((uint32_t)(ecx + 0x14u), 0xffffffffu);
/* 90765c: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 90765f: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
L_907662: /* 907662: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 907663: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907665: jl 0x907637 */
  if ((sf != of)) goto L_907637;
L_907667: /* 907667: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_90766b: /* 90766b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90766f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 907670: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907672: jl 0x9075f0 */
  if ((sf != of)) goto L_9075f0;
L_907678: /* 907678: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 907679: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_90767a: /* 90767a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90767b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90767c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90767f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_907690(void) {
  LOAD_REGS();
L_907690: /* 907690: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 907694: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907695: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907696: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 907697: mov al, byte ptr [ecx + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8u))) & 0xffu);
/* 90769a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90769c: je 0x9076a6 */
  if (zf) goto L_9076a6;
L_90769e: /* 90769e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 9076a1: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 9076a4: jmp 0x9076ac */
  goto L_9076ac;
L_9076a6: /* 9076a6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9076a9: mov ebp, dword ptr [edx + 0xc] */
  ebp = R32((uint32_t)(edx + 0xcu));
L_9076ac: /* 9076ac: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9076b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9076b1: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 9076b9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9076bc: mov edi, dword ptr [edx + ebp*4] */
  edi = R32((uint32_t)(edx + ebp*4));
/* 9076bf: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9076c1: je 0x90774e */
  if (zf) goto L_90774e;
L_9076c7: /* 9076c7: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 9076ca: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 9076cd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9076cf: je 0x9076fe */
  if (zf) goto L_9076fe;
L_9076d1: /* 9076d1: mov ebx, dword ptr [ecx + 0x20] */
  ebx = R32((uint32_t)(ecx + 0x20u));
/* 9076d4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9076d6: jl 0x9076dd */
  if ((sf != of)) goto L_9076dd;
L_9076d8: /* 9076d8: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 9076db: jmp 0x9076e0 */
  goto L_9076e0;
L_9076dd: /* 9076dd: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
L_9076e0: /* 9076e0: cmp edx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9076e3: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9076e6: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9076e8: jne 0x9076fe */
  if (!zf) goto L_9076fe;
L_9076ea: /* 9076ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9076ec: je 0x907731 */
  if (zf) goto L_907731;
L_9076ee: /* 9076ee: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 9076f1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9076f3: jge 0x9076fe */
  if ((sf == of)) goto L_9076fe;
L_9076f5: /* 9076f5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9076f7: jl 0x907744 */
  if ((sf != of)) goto L_907744;
L_9076f9: /* 9076f9: cmp dword ptr [eax + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9076fc: jne 0x907744 */
  if (!zf) goto L_907744;
L_9076fe: /* 9076fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907700: je 0x907731 */
  if (zf) goto L_907731;
L_907702: /* 907702: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 907705: mov ebx, dword ptr [ecx + 0x1c] */
  ebx = R32((uint32_t)(ecx + 0x1cu));
/* 907708: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90770a: jl 0x907711 */
  if ((sf != of)) goto L_907711;
L_90770c: /* 90770c: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 90770f: jmp 0x907714 */
  goto L_907714;
L_907711: /* 907711: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
L_907714: /* 907714: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907716: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 907719: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90771b: jne 0x907731 */
  if (!zf) goto L_907731;
L_90771d: /* 90771d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90771f: je 0x907731 */
  if (zf) goto L_907731;
L_907721: /* 907721: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 907724: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 907726: jge 0x907731 */
  if ((sf == of)) goto L_907731;
L_907728: /* 907728: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90772a: jl 0x90774a */
  if ((sf != of)) goto L_90774a;
L_90772c: /* 90772c: cmp dword ptr [esi + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90772f: jne 0x90774a */
  if (!zf) goto L_90774a;
L_907731: /* 907731: cmp dword ptr [edi + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907734: jne 0x90773b */
  if (!zf) goto L_90773b;
L_907736: /* 907736: mov edi, dword ptr [edi + 0x14] */
  edi = R32((uint32_t)(edi + 0x14u));
/* 907739: jmp 0x90773e */
  goto L_90773e;
L_90773b: /* 90773b: mov edi, dword ptr [edi + 0x18] */
  edi = R32((uint32_t)(edi + 0x18u));
L_90773e: /* 90773e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907740: jne 0x9076c7 */
  if (!zf) goto L_9076c7;
L_907742: /* 907742: jmp 0x90774e */
  goto L_90774e;
L_907744: /* 907744: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 907748: jmp 0x90774e */
  goto L_90774e;
L_90774a: /* 90774a: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
L_90774e: /* 90774e: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 907752: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 907756: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907758: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 90775a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 90775d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90775e: je 0x907794 */
  if (zf) goto L_907794;
L_907760: /* 907760: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 907764: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907765: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907766: call 0x907470 */
  esp -= 4; W32(esp, 0x90776bu); SPILL(); f_907470(); if (g_unwind) return; RELOAD();
/* 90776b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90776d: je 0x90778b */
  if (zf) goto L_90778b;
L_90776f: /* 90776f: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 907772: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 907776: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907778: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 907779: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 90777c: mov byte ptr [esi + 8], al */
  W8((uint32_t)(esi + 0x8u), (eax & 0xffu));
/* 90777f: xor eax, eax */
  eax = 0;
/* 907781: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907783: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 907784: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 907785: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 907788: ret 0x10 */
  esp += 20; SPILL(); return;
L_90778b: /* 90778b: cmp dword ptr [edi + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90778e: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 907791: mov byte ptr [esi + 8], cl */
  W8((uint32_t)(esi + 0x8u), (ecx & 0xffu));
L_907794: /* 907794: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 907798: xor eax, eax */
  eax = 0;
/* 90779a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90779c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90779d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90779e: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9077a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9077a2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_9077b0(void) {
  LOAD_REGS();
L_9077b0: /* 9077b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 9077b2: push 0x9da263 */
  { uint32_t v = 0x9da263u; esp -= 4; W32(esp, v); }
/* 9077b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 9077bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9077be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 9077c5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9077c8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 9077cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9077cd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9077ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9077cf: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 9077d2: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 9077d6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 9077d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9077da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9077db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9077dc: mov ecx, edx */
  ecx = edx;
/* 9077de: call 0x909c60 */
  esp -= 4; W32(esp, 0x9077e3u); SPILL(); f_909c60(); if (g_unwind) return; RELOAD();
/* 9077e3: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 9077e7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 9077ea: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 9077ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9077ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9077ef: mov ecx, ebx */
  ecx = ebx;
/* 9077f1: call 0x90a2e0 */
  esp -= 4; W32(esp, 0x9077f6u); SPILL(); f_90a2e0(); if (g_unwind) return; RELOAD();
/* 9077f6: mov al, byte ptr [esp + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3cu))) & 0xffu);
/* 9077fa: xor edx, edx */
  edx = 0;
/* 9077fc: mov byte ptr [esp + 0x14], al */
  W8((uint32_t)(esp + 0x14u), (eax & 0xffu));
/* 907800: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 907804: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 907808: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 90780c: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 907810: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 907814: xor edi, edi */
  edi = 0;
L_907816: /* 907816: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 907819: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90781b: je 0x9078c5 */
  if (zf) goto L_9078c5;
L_907821: /* 907821: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 907824: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 907826: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 907829: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90782b: jae 0x9078c5 */
  if (!cf) goto L_9078c5;
L_907831: /* 907831: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 907834: lea edx, [ecx + edi*4] */
  edx = (uint32_t)(ecx + edi*4);
/* 907837: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90783a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90783d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90783f: jne 0x907845 */
  if (!zf) goto L_907845;
L_907841: /* 907841: xor eax, eax */
  eax = 0;
/* 907843: jmp 0x90784d */
  goto L_90784d;
L_907845: /* 907845: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 907848: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90784a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_90784d: /* 90784d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 907851: cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 907854: jae 0x9078ad */
  if (!cf) goto L_9078ad;
L_907856: /* 907856: xor esi, esi */
  esi = 0;
L_907858: /* 907858: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 90785b: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 90785e: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 907861: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907863: je 0x907888 */
  if (zf) goto L_907888;
L_907865: /* 907865: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 907868: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90786a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90786d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90786f: jae 0x907888 */
  if (!cf) goto L_907888;
L_907871: /* 907871: mov eax, edx */
  eax = edx;
/* 907873: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 907877: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 90787a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90787b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90787c: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 907880: call 0x909ac0 */
  esp -= 4; W32(esp, 0x907885u); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 907885: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 907886: jmp 0x907858 */
  goto L_907858;
L_907888: /* 907888: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 90788b: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 90788e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907890: je 0x9078bb */
  if (zf) goto L_9078bb;
L_907892: /* 907892: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 907895: call 0x905be0 */
  esp -= 4; W32(esp, 0x90789au); SPILL(); f_905be0(); if (g_unwind) return; RELOAD();
/* 90789a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90789b: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9078a0u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9078a0: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9078a4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9078a7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9078a8: jmp 0x907816 */
  goto L_907816;
L_9078ad: /* 9078ad: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 9078b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9078b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9078b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9078b4: mov ecx, ebx */
  ecx = ebx;
/* 9078b6: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x9078bbu); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
L_9078bb: /* 9078bb: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9078bf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9078c0: jmp 0x907816 */
  goto L_907816;
L_9078c5: /* 9078c5: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9078c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9078cb: je 0x907a29 */
  if (zf) goto L_907a29;
L_9078d1: /* 9078d1: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9078d3: mov eax, edx */
  eax = edx;
/* 9078d5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  zf = r == 0;
  eax = r;
  }
/* 9078d8: je 0x907a29 */
  if (zf) goto L_907a29;
L_9078de: /* 9078de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9078df: call 0x6c242d */
  esp -= 4; W32(esp, 0x9078e4u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9078e4: mov edi, eax */
  edi = eax;
/* 9078e6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9078ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9078ed: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 9078f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9078f3: jne 0x9078f9 */
  if (!zf) goto L_9078f9;
L_9078f5: /* 9078f5: xor ecx, ecx */
  ecx = 0;
/* 9078f7: jmp 0x907902 */
  goto L_907902;
L_9078f9: /* 9078f9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9078fd: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9078ff: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_907902: /* 907902: mov edx, ecx */
  edx = ecx;
/* 907904: xor eax, eax */
  eax = 0;
/* 907906: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 907909: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 90790b: mov ecx, edx */
  ecx = edx;
/* 90790d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 90790f: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 907912: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 907914: call 0x6c242d */
  esp -= 4; W32(esp, 0x907919u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 907919: mov esi, eax */
  esi = eax;
/* 90791b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90791e: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 907922: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907924: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* 907929: je 0x907966 */
  if (zf) goto L_907966;
L_90792b: /* 90792b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90792f: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 907932: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 907935: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 90793c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90793d: call 0x6c242d */
  esp -= 4; W32(esp, 0x907942u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 907942: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 907945: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 907947: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90794a: xor eax, eax */
  eax = 0;
/* 90794c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90794e: jle 0x907962 */
  if ((zf || sf != of)) goto L_907962;
L_907950: /* 907950: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 907952: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 907953: mov dword ptr [edx + eax*4 - 4], 0xffffffff */
  W32((uint32_t)(edx + eax*4 + 0xfffffffcu), 0xffffffffu);
/* 90795b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90795e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907960: jl 0x907950 */
  if ((sf != of)) goto L_907950;
L_907962: /* 907962: mov ebx, esi */
  ebx = esi;
/* 907964: jmp 0x907968 */
  goto L_907968;
L_907966: /* 907966: xor ebx, ebx */
  ebx = 0;
L_907968: /* 907968: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 90796c: mov byte ptr [esp + 0x2c], 0 */
  W8((uint32_t)(esp + 0x2cu), 0x0u);
L_907971: /* 907971: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 907975: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 907978: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 90797c: xor esi, esi */
  esi = 0;
L_90797e: /* 90797e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907980: je 0x9079b6 */
  if (zf) goto L_9079b6;
L_907982: /* 907982: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 907986: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 907988: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90798b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90798d: jae 0x9079b6 */
  if (!cf) goto L_9079b6;
L_90798f: /* 90798f: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 907993: cmp byte ptr [esi + eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 907997: jne 0x9079b3 */
  if (!zf) goto L_9079b3;
L_907999: /* 907999: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 90799c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90799d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9079a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9079a2: call 0x908f00 */
  esp -= 4; W32(esp, 0x9079a7u); SPILL(); f_908f00(); if (g_unwind) return; RELOAD();
/* 9079a7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9079ab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9079ad: jle 0x9079b3 */
  if ((zf || sf != of)) goto L_9079b3;
L_9079af: /* 9079af: mov edi, eax */
  edi = eax;
/* 9079b1: mov ebp, esi */
  ebp = esi;
L_9079b3: /* 9079b3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9079b4: jmp 0x90797e */
  goto L_90797e;
L_9079b6: /* 9079b6: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 9079ba: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9079be: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 9079c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9079c6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9079c9: jnp 0x907a01 */
  if (!pf) goto L_907a01;
L_9079cb: /* 9079cb: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9079cf: mov byte ptr [edx + ebp], 1 */
  W8((uint32_t)(edx + ebp), 0x1u);
/* 9079d3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9079d7: mov ecx, dword ptr [eax + ebp*4] */
  ecx = R32((uint32_t)(eax + ebp*4));
/* 9079da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9079db: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9079df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9079e0: call 0x908d80 */
  esp -= 4; W32(esp, 0x9079e5u); SPILL(); f_908d80(); if (g_unwind) return; RELOAD();
/* 9079e5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9079e9: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 9079ed: lea eax, [edx + ebp*4] */
  eax = (uint32_t)(edx + ebp*4);
/* 9079f0: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 9079f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9079f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9079f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9079f7: call 0x90a690 */
  esp -= 4; W32(esp, 0x9079fcu); SPILL(); f_90a690(); if (g_unwind) return; RELOAD();
/* 9079fc: jmp 0x907971 */
  goto L_907971;
L_907a01: /* 907a01: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907a03: je 0x907a1c */
  if (zf) goto L_907a1c;
L_907a05: /* 907a05: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 907a07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907a08: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x907a0du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 907a0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 907a0e: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 907a14: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x907a19u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 907a19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_907a1c: /* 907a1c: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 907a20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907a21: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x907a26u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 907a26: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_907a29: /* 907a29: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 907a2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907a2e: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x907a33u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 907a33: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 907a37: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 907a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 907a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 907a43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 907a44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 907a45: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907a48: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_907a50(void) {
  LOAD_REGS();
L_907a50: /* 907a50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 907a54: and eax, 0x80000001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 907a59: jns 0x907a60 */
  if (!sf) goto L_907a60;
L_907a5b: /* 907a5b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 907a5c: or eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 907a5f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_907a60: /* 907a60: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 907a62: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 907a64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 907a65: ret 4 */
  esp += 8; SPILL(); return;
}

void f_907a70(void) {
  LOAD_REGS();
L_907a70: /* 907a70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 907a74: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 907a78: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 907a7a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907a7c: jne 0x907a91 */
  if (!zf) goto L_907a91;
L_907a7e: /* 907a7e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 907a81: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 907a85: xor ecx, ecx */
  ecx = 0;
/* 907a87: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907a89: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 907a8c: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 907a8e: ret 0xc */
  esp += 16; SPILL(); return;
L_907a91: /* 907a91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907a92: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 907a95: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907a97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 907a98: jne 0x907aad */
  if (!zf) goto L_907aad;
L_907a9a: /* 907a9a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 907a9d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 907aa1: xor ecx, ecx */
  ecx = 0;
/* 907aa3: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907aa5: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 907aa8: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 907aaa: ret 0xc */
  esp += 16; SPILL(); return;
L_907aad: /* 907aad: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 907ab1: xor eax, eax */
  eax = 0;
/* 907ab3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907ab5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 907ab8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_907ac0(void) {
  LOAD_REGS();
L_907ac0: /* 907ac0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 907ac4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 907ac8: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907aca: je 0x907adb */
  if (zf) goto L_907adb;
L_907acc: /* 907acc: cmp dword ptr [ecx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907acf: je 0x907adb */
  if (zf) goto L_907adb;
L_907ad1: /* 907ad1: cmp dword ptr [ecx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907ad4: je 0x907adb */
  if (zf) goto L_907adb;
L_907ad6: /* 907ad6: xor eax, eax */
  eax = 0;
/* 907ad8: ret 8 */
  esp += 12; SPILL(); return;
L_907adb: /* 907adb: mov eax, 1 */
  eax = 0x1u;
/* 907ae0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_907af0(void) {
  LOAD_REGS();
L_907af0: /* 907af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907af1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 907af5: push 0x320 */
  { uint32_t v = 0x320u; esp -= 4; W32(esp, v); }
/* 907afa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907afb: mov edx, ecx */
  edx = ecx;
/* 907afd: call 0x907ac0 */
  esp -= 4; W32(esp, 0x907b02u); SPILL(); f_907ac0(); if (g_unwind) return; RELOAD();
/* 907b02: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907b04: je 0x907b2e */
  if (zf) goto L_907b2e;
L_907b06: /* 907b06: push 0x32c */
  { uint32_t v = 0x32cu; esp -= 4; W32(esp, v); }
/* 907b0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907b0c: mov ecx, edx */
  ecx = edx;
/* 907b0e: call 0x907ac0 */
  esp -= 4; W32(esp, 0x907b13u); SPILL(); f_907ac0(); if (g_unwind) return; RELOAD();
/* 907b13: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907b15: je 0x907b2e */
  if (zf) goto L_907b2e;
L_907b17: /* 907b17: push 0x2db */
  { uint32_t v = 0x2dbu; esp -= 4; W32(esp, v); }
/* 907b1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907b1d: mov ecx, edx */
  ecx = edx;
/* 907b1f: call 0x907ac0 */
  esp -= 4; W32(esp, 0x907b24u); SPILL(); f_907ac0(); if (g_unwind) return; RELOAD();
/* 907b24: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907b26: je 0x907b2e */
  if (zf) goto L_907b2e;
L_907b28: /* 907b28: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 907b2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 907b2b: ret 4 */
  esp += 8; SPILL(); return;
L_907b2e: /* 907b2e: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 907b30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 907b31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_907b40(void) {
  LOAD_REGS();
L_907b40: /* 907b40: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 907b43: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 907b47: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 907b4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907b4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 907b4d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 907b50: xor edi, edi */
  edi = 0;
/* 907b52: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 907b55: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907b57: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 907b5b: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 907b5f: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 907b63: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 907b67: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 907b6b: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 907b6f: jne 0x907b77 */
  if (!zf) goto L_907b77;
L_907b71: /* 907b71: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 907b75: jmp 0x907b83 */
  goto L_907b83;
L_907b77: /* 907b77: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 907b7a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 907b7c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 907b7f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_907b83: /* 907b83: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 907b87: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 907b8b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907b8d: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 907b91: jle 0x907ff8 */
  if ((zf || sf != of)) goto L_907ff8;
L_907b97: /* 907b97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 907b98: mov ebx, dword ptr [esp + 0x68] */
  ebx = R32((uint32_t)(esp + 0x68u));
/* 907b9c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907b9d: jmp 0x907ba8 */
  goto L_907ba8;
L_907b9f: /* 907b9f: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 907ba3: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 907ba6: xor edi, edi */
  edi = 0;
L_907ba8: /* 907ba8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 907bab: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 907baf: mov ebp, dword ptr [eax + ecx*4] */
  ebp = R32((uint32_t)(eax + ecx*4));
/* 907bb2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 907bb5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907bb7: jne 0x907bbf */
  if (!zf) goto L_907bbf;
L_907bb9: /* 907bb9: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 907bbd: jmp 0x907bcb */
  goto L_907bcb;
L_907bbf: /* 907bbf: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 907bc2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 907bc4: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 907bc7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_907bcb: /* 907bcb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 907bce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 907bd0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 907bd3: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 907bd6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 907bd8: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 907bdc: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 907be0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 907be4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907be7: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 907beb: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 907bef: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 907bf3: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 907bf7: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 907bfb: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 907bff: jle 0x907c9c */
  if ((zf || sf != of)) goto L_907c9c;
L_907c05: /* 907c05: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 907c08: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 907c0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907c0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907c0e: call 0x906850 */
  esp -= 4; W32(esp, 0x907c13u); SPILL(); f_906850(); if (g_unwind) return; RELOAD();
/* 907c13: mov ecx, edi */
  ecx = edi;
/* 907c15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907c18: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907c1a: jne 0x907c26 */
  if (!zf) goto L_907c26;
L_907c1c: /* 907c1c: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 907c20: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 907c24: jmp 0x907c36 */
  goto L_907c36;
L_907c26: /* 907c26: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 907c2a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907c2c: jne 0x907c3a */
  if (!zf) goto L_907c3a;
L_907c2e: /* 907c2e: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 907c32: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_907c36: /* 907c36: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
L_907c3a: /* 907c3a: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907c3f: jle 0x907c9c */
  if ((zf || sf != of)) goto L_907c9c;
L_907c41: /* 907c41: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 907c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907c45: call 0x9082e0 */
  esp -= 4; W32(esp, 0x907c4au); SPILL(); f_9082e0(); if (g_unwind) return; RELOAD();
/* 907c4a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 907c4d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907c50: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907c52: je 0x907c60 */
  if (zf) goto L_907c60;
L_907c54: /* 907c54: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 907c57: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 907c5b: cmp edi, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907c5e: jmp 0x907c8c */
  goto L_907c8c;
L_907c60: /* 907c60: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 907c64: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 907c68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907c69: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 907c6c: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 907c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907c72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907c73: call 0x9068a0 */
  esp -= 4; W32(esp, 0x907c78u); SPILL(); f_9068a0(); if (g_unwind) return; RELOAD();
/* 907c78: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 907c7c: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 907c80: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907c83: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907c85: jne 0x907c9c */
  if (!zf) goto L_907c9c;
L_907c87: /* 907c87: cmp dword ptr [esp + 0x30], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_907c8c: /* 907c8c: jne 0x907c9c */
  if (!zf) goto L_907c9c;
L_907c8e: /* 907c8e: mov eax, edi */
  eax = edi;
/* 907c90: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 907c94: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 907c98: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_907c9c: /* 907c9c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 907ca0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907ca2: je 0x907d13 */
  if (zf) goto L_907d13;
L_907ca4: /* 907ca4: mov al, byte ptr [esp + 0x70] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x70u))) & 0xffu);
/* 907ca8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907caa: je 0x907d13 */
  if (zf) goto L_907d13;
L_907cac: /* 907cac: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 907caf: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 907cb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907cb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907cb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907cb7: mov ecx, ebx */
  ecx = ebx;
/* 907cb9: call 0x90aae0 */
  esp -= 4; W32(esp, 0x907cbeu); SPILL(); f_90aae0(); if (g_unwind) return; RELOAD();
/* 907cbe: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 907cc1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907cc3: jne 0x907cc9 */
  if (!zf) goto L_907cc9;
L_907cc5: /* 907cc5: xor eax, eax */
  eax = 0;
/* 907cc7: jmp 0x907cd1 */
  goto L_907cd1;
L_907cc9: /* 907cc9: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 907ccc: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 907cce: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_907cd1: /* 907cd1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 907cd5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 907cd9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 907cdb: mov ecx, esi */
  ecx = esi;
/* 907cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907cde: call 0x907a50 */
  esp -= 4; W32(esp, 0x907ce3u); SPILL(); f_907a50(); if (g_unwind) return; RELOAD();
/* 907ce3: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 907ce7: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 907ceb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907cec: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 907cef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907cf0: mov byte ptr [esp + 0x74], al */
  W8((uint32_t)(esp + 0x74u), (eax & 0xffu));
/* 907cf4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 907cf6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907cf7: mov ecx, esi */
  ecx = esi;
/* 907cf9: call 0x907a70 */
  esp -= 4; W32(esp, 0x907cfeu); SPILL(); f_907a70(); if (g_unwind) return; RELOAD();
/* 907cfe: mov cl, byte ptr [esp + 0x6c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x6cu))) & 0xffu);
/* 907d02: cmp cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 907d04: je 0x907d3b */
  if (zf) goto L_907d3b;
L_907d06: /* 907d06: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 907d09: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 907d0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907d0e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907d11: jmp 0x907d34 */
  goto L_907d34;
L_907d13: /* 907d13: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 907d17: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 907d19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 907d1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907d1b: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 907d1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907d20: call 0x907a70 */
  esp -= 4; W32(esp, 0x907d25u); SPILL(); f_907a70(); if (g_unwind) return; RELOAD();
/* 907d25: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907d27: jne 0x907d3b */
  if (!zf) goto L_907d3b;
L_907d29: /* 907d29: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 907d2c: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 907d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907d31: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907d33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_907d34: /* 907d34: mov ecx, ebx */
  ecx = ebx;
/* 907d36: call 0x90aae0 */
  esp -= 4; W32(esp, 0x907d3bu); SPILL(); f_90aae0(); if (g_unwind) return; RELOAD();
L_907d3b: /* 907d3b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 907d3e: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 907d42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907d43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907d45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907d46: mov ecx, ebx */
  ecx = ebx;
/* 907d48: call 0x90aae0 */
  esp -= 4; W32(esp, 0x907d4du); SPILL(); f_90aae0(); if (g_unwind) return; RELOAD();
/* 907d4d: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 907d50: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 907d54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907d55: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907d57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907d58: mov ecx, ebx */
  ecx = ebx;
/* 907d5a: call 0x90aae0 */
  esp -= 4; W32(esp, 0x907d5fu); SPILL(); f_90aae0(); if (g_unwind) return; RELOAD();
/* 907d5f: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 907d62: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 907d66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907d67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907d69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907d6a: mov ecx, ebx */
  ecx = ebx;
/* 907d6c: call 0x90aae0 */
  esp -= 4; W32(esp, 0x907d71u); SPILL(); f_90aae0(); if (g_unwind) return; RELOAD();
/* 907d71: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 907d75: mov ecx, 6 */
  ecx = 0x6u;
/* 907d7a: lea esi, [esp + 0x34] */
  esi = (uint32_t)(esp + 0x34u);
/* 907d7e: lea edi, [esp + 0x4c] */
  edi = (uint32_t)(esp + 0x4cu);
/* 907d82: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 907d84: mov esi, 1 */
  esi = 0x1u;
/* 907d89: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907d8b: jle 0x907e23 */
  if ((zf || sf != of)) goto L_907e23;
L_907d91: /* 907d91: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 907d94: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 907d98: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 907d9b: lea edi, [edx + esi*4] */
  edi = (uint32_t)(edx + esi*4);
/* 907d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907d9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907da0: call 0x906850 */
  esp -= 4; W32(esp, 0x907da5u); SPILL(); f_906850(); if (g_unwind) return; RELOAD();
/* 907da5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907da8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907dab: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 907daf: je 0x907ddd */
  if (zf) goto L_907ddd;
L_907db1: /* 907db1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 907db4: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 907db8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907db9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907dbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907dbc: mov ecx, ebx */
  ecx = ebx;
/* 907dbe: call 0x90aae0 */
  esp -= 4; W32(esp, 0x907dc3u); SPILL(); f_90aae0(); if (g_unwind) return; RELOAD();
/* 907dc3: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 907dc7: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 907dcb: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 907dcf: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 907dd3: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 907dd7: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 907ddb: jmp 0x907e16 */
  goto L_907e16;
L_907ddd: /* 907ddd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 907ddf: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 907de2: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 907de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907de6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907de8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907de9: mov ecx, ebx */
  ecx = ebx;
/* 907deb: call 0x90aae0 */
  esp -= 4; W32(esp, 0x907df0u); SPILL(); f_90aae0(); if (g_unwind) return; RELOAD();
/* 907df0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 907df3: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 907df6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 907df8: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 907dfc: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 907dff: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 907e02: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 907e05: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 907e09: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 907e0c: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 907e0f: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 907e12: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
L_907e16: /* 907e16: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 907e1a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 907e1b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907e1d: jl 0x907d91 */
  if ((sf != of)) goto L_907d91;
L_907e23: /* 907e23: mov al, byte ptr [esp + 0x70] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x70u))) & 0xffu);
/* 907e27: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907e29: je 0x907e53 */
  if (zf) goto L_907e53;
L_907e2b: /* 907e2b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 907e2f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 907e33: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 907e34: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907e36: je 0x907fd1 */
  if (zf) goto L_907fd1;
L_907e3c: /* 907e3c: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 907e3f: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 907e43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907e44: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907e46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907e47: mov ecx, ebx */
  ecx = ebx;
/* 907e49: call 0x90aae0 */
  esp -= 4; W32(esp, 0x907e4eu); SPILL(); f_90aae0(); if (g_unwind) return; RELOAD();
/* 907e4e: jmp 0x907fd1 */
  goto L_907fd1;
L_907e53: /* 907e53: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 907e56: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 907e59: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 907e5b: mov dword ptr [esp + 0x6c], 0xffffffff */
  W32((uint32_t)(esp + 0x6cu), 0xffffffffu);
/* 907e63: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 907e66: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 907e69: mov esi, eax */
  esi = eax;
/* 907e6b: jae 0x907f31 */
  if (!cf) goto L_907f31;
L_907e71: /* 907e71: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 907e74: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907e76: je 0x907e84 */
  if (zf) goto L_907e84;
L_907e78: /* 907e78: mov ecx, eax */
  ecx = eax;
/* 907e7a: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 907e7c: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 907e7f: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 907e82: ja 0x907e89 */
  if ((!cf && !zf)) goto L_907e89;
L_907e84: /* 907e84: mov ecx, 1 */
  ecx = 0x1u;
L_907e89: /* 907e89: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 907e8b: jne 0x907e91 */
  if (!zf) goto L_907e91;
L_907e8d: /* 907e8d: xor eax, eax */
  eax = 0;
/* 907e8f: jmp 0x907e96 */
  goto L_907e96;
L_907e91: /* 907e91: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 907e93: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_907e96: /* 907e96: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 907e98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 907e9a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 907e9e: jge 0x907ea2 */
  if ((sf == of)) goto L_907ea2;
L_907ea0: /* 907ea0: xor eax, eax */
  eax = 0;
L_907ea2: /* 907ea2: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 907ea9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907eaa: call 0x6c242d */
  esp -= 4; W32(esp, 0x907eafu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 907eaf: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 907eb2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907eb5: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907eb7: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 907ebb: mov ebp, eax */
  ebp = eax;
/* 907ebd: je 0x907ed3 */
  if (zf) goto L_907ed3;
L_907ebf: /* 907ebf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 907ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907ec1: call 0x90b770 */
  esp -= 4; W32(esp, 0x907ec6u); SPILL(); f_90b770(); if (g_unwind) return; RELOAD();
/* 907ec6: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 907ec9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907ecc: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 907ecf: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907ed1: jne 0x907ebf */
  if (!zf) goto L_907ebf;
L_907ed3: /* 907ed3: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 907ed7: mov ecx, ebx */
  ecx = ebx;
/* 907ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907eda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 907edc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907edd: call 0x90b4d0 */
  esp -= 4; W32(esp, 0x907ee2u); SPILL(); f_90b4d0(); if (g_unwind) return; RELOAD();
/* 907ee2: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 907ee5: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 907ee8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 907ee9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907eea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907eeb: mov ecx, ebx */
  ecx = ebx;
/* 907eed: call 0x90b4a0 */
  esp -= 4; W32(esp, 0x907ef2u); SPILL(); f_90b4a0(); if (g_unwind) return; RELOAD();
/* 907ef2: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 907ef5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 907ef8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907efa: mov ecx, ebx */
  ecx = ebx;
/* 907efc: call 0x90b490 */
  esp -= 4; W32(esp, 0x907f01u); SPILL(); f_90b490(); if (g_unwind) return; RELOAD();
/* 907f01: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 907f04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907f05: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x907f0au); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 907f0a: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 907f0e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 907f12: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 907f15: mov ecx, ebx */
  ecx = ebx;
/* 907f17: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 907f1a: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 907f1d: call 0x909aa0 */
  esp -= 4; W32(esp, 0x907f22u); SPILL(); f_909aa0(); if (g_unwind) return; RELOAD();
/* 907f22: lea ecx, [esi + eax*4 + 4] */
  ecx = (uint32_t)(esi + eax*4 + 0x4u);
/* 907f26: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 907f29: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 907f2c: jmp 0x907fbf */
  goto L_907fbf;
L_907f31: /* 907f31: mov edx, eax */
  edx = eax;
/* 907f33: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 907f35: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 907f38: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 907f3b: jae 0x907f7f */
  if (!cf) goto L_907f7f;
L_907f3d: /* 907f3d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 907f40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 907f41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907f42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 907f43: mov ecx, ebx */
  ecx = ebx;
/* 907f45: call 0x90b4a0 */
  esp -= 4; W32(esp, 0x907f4au); SPILL(); f_90b4a0(); if (g_unwind) return; RELOAD();
/* 907f4a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 907f4d: lea edx, [esp + 0x6c] */
  edx = (uint32_t)(esp + 0x6cu);
/* 907f51: mov ecx, eax */
  ecx = eax;
/* 907f53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907f54: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 907f56: mov edx, 1 */
  edx = 0x1u;
/* 907f5b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 907f5e: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 907f60: mov ecx, ebx */
  ecx = ebx;
/* 907f62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 907f63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907f64: call 0x90b4d0 */
  esp -= 4; W32(esp, 0x907f69u); SPILL(); f_90b4d0(); if (g_unwind) return; RELOAD();
/* 907f69: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 907f6c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907f6e: je 0x907fbb */
  if (zf) goto L_907fbb;
L_907f70: /* 907f70: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 907f74: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 907f76: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 907f79: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907f7b: jne 0x907f70 */
  if (!zf) goto L_907f70;
L_907f7d: /* 907f7d: jmp 0x907fbb */
  goto L_907fbb;
L_907f7f: /* 907f7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907f81: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 907f84: mov ecx, ebx */
  ecx = ebx;
/* 907f86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 907f87: call 0x90b4a0 */
  esp -= 4; W32(esp, 0x907f8cu); SPILL(); f_90b4a0(); if (g_unwind) return; RELOAD();
/* 907f8c: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 907f8f: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 907f92: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907f94: je 0x907fa5 */
  if (zf) goto L_907fa5;
L_907f96: /* 907f96: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 907f99: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 907f9c: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 907f9f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907fa1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 907fa3: jne 0x907f96 */
  if (!zf) goto L_907f96;
L_907fa5: /* 907fa5: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 907fa8: mov eax, esi */
  eax = esi;
/* 907faa: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907fac: je 0x907fbb */
  if (zf) goto L_907fbb;
L_907fae: /* 907fae: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 907fb2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 907fb4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 907fb7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 907fb9: jne 0x907fae */
  if (!zf) goto L_907fae;
L_907fbb: /* 907fbb: add dword ptr [ebx + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0x8u), r);
  }
L_907fbf: /* 907fbf: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 907fc3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 907fc7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 907fc8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 907fca: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 907fce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 907fcf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_907fd1: /* 907fd1: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 907fd5: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 907fd9: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 907fdd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 907fe1: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 907fe5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 907fe9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 907fea: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 907fec: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 907ff0: jl 0x907b9f */
  if ((sf != of)) goto L_907b9f;
L_907ff6: /* 907ff6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 907ff7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_907ff8: /* 907ff8: mov al, byte ptr [esp + 0x68] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x68u))) & 0xffu);
/* 907ffc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 907ffd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 907fff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 908000: je 0x90800c */
  if (zf) goto L_90800c;
L_908002: /* 908002: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 908006: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
L_90800c: /* 90800c: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90800f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_908020(void) {
  LOAD_REGS();
L_908020: /* 908020: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 908026: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 908028: push 0x9da288 */
  { uint32_t v = 0x9da288u; esp -= 4; W32(esp, v); }
/* 90802d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90802e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 908032: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 908039: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90803c: add eax, -6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffau);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90803f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908041: mov esi, ecx */
  esi = ecx;
/* 908043: xor ebp, ebp */
  ebp = 0;
/* 908045: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908048: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908049: mov dword ptr [esi + 0x18], ebp */
  W32((uint32_t)(esi + 0x18u), ebp);
/* 90804c: mov byte ptr [esi + 0x1c], 1 */
  W8((uint32_t)(esi + 0x1cu), 0x1u);
/* 908050: jge 0x908057 */
  if ((sf == of)) goto L_908057;
L_908052: /* 908052: mov eax, 1 */
  eax = 0x1u;
L_908057: /* 908057: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 90805b: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 90805f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908061: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 908064: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 908067: je 0x90815c */
  if (zf) goto L_90815c;
L_90806d: /* 90806d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 908070: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908072: je 0x90807b */
  if (zf) goto L_90807b;
L_908074: /* 908074: mov ebp, dword ptr [edi + 8] */
  ebp = R32((uint32_t)(edi + 0x8u));
/* 908077: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 908079: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
L_90807b: /* 90807b: mov ecx, esi */
  ecx = esi;
/* 90807d: call 0x905c60 */
  esp -= 4; W32(esp, 0x908082u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 908082: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 908084: ja 0x9080b8 */
  if ((!cf && !zf)) goto L_9080b8;
L_908086: /* 908086: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 908089: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90808c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 90808f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908092: call 0x90b6b0 */
  esp -= 4; W32(esp, 0x908097u); SPILL(); f_90b6b0(); if (g_unwind) return; RELOAD();
/* 908097: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 90809a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90809d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90809e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90809f: mov ecx, esi */
  ecx = esi;
/* 9080a1: call 0x909e90 */
  esp -= 4; W32(esp, 0x9080a6u); SPILL(); f_909e90(); if (g_unwind) return; RELOAD();
/* 9080a6: mov ecx, edi */
  ecx = edi;
/* 9080a8: call 0x905c60 */
  esp -= 4; W32(esp, 0x9080adu); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 9080ad: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 9080b0: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 9080b3: jmp 0x908157 */
  goto L_908157;
L_9080b8: /* 9080b8: mov ecx, edi */
  ecx = edi;
/* 9080ba: call 0x905c60 */
  esp -= 4; W32(esp, 0x9080bfu); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 9080bf: mov ecx, esi */
  ecx = esi;
/* 9080c1: mov ebp, eax */
  ebp = eax;
/* 9080c3: call 0x909cd0 */
  esp -= 4; W32(esp, 0x9080c8u); SPILL(); f_909cd0(); if (g_unwind) return; RELOAD();
/* 9080c8: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9080ca: ja 0x90810d */
  if ((!cf && !zf)) goto L_90810d;
L_9080cc: /* 9080cc: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 9080cf: mov ecx, esi */
  ecx = esi;
/* 9080d1: call 0x905c60 */
  esp -= 4; W32(esp, 0x9080d6u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 9080d6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9080d9: lea ebp, [ebp + eax*2] */
  ebp = (uint32_t)(ebp + eax*2);
/* 9080dd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9080e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9080e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9080e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9080e3: call 0x90b6b0 */
  esp -= 4; W32(esp, 0x9080e8u); SPILL(); f_90b6b0(); if (g_unwind) return; RELOAD();
/* 9080e8: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 9080eb: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 9080ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9080f1: mov ecx, esi */
  ecx = esi;
/* 9080f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9080f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9080f5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9080f6: call 0x909ea0 */
  esp -= 4; W32(esp, 0x9080fbu); SPILL(); f_909ea0(); if (g_unwind) return; RELOAD();
/* 9080fb: mov ecx, edi */
  ecx = edi;
/* 9080fd: call 0x905c60 */
  esp -= 4; W32(esp, 0x908102u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 908102: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 908105: lea edx, [ecx + eax*2] */
  edx = (uint32_t)(ecx + eax*2);
/* 908108: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 90810b: jmp 0x90815a */
  goto L_90815a;
L_90810d: /* 90810d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 908110: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 908113: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908114: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908115: mov ecx, esi */
  ecx = esi;
/* 908117: call 0x909e90 */
  esp -= 4; W32(esp, 0x90811cu); SPILL(); f_909e90(); if (g_unwind) return; RELOAD();
/* 90811c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90811f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908120: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x908125u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 908125: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908128: mov ecx, edi */
  ecx = edi;
/* 90812a: call 0x905c60 */
  esp -= 4; W32(esp, 0x90812fu); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 90812f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908131: jge 0x908135 */
  if ((sf == of)) goto L_908135;
L_908133: /* 908133: xor eax, eax */
  eax = 0;
L_908135: /* 908135: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 908138: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908139: call 0x6c242d */
  esp -= 4; W32(esp, 0x90813eu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90813e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908141: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 908144: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 908147: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 90814a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90814b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90814c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90814d: mov ecx, esi */
  ecx = esi;
/* 90814f: call 0x909ea0 */
  esp -= 4; W32(esp, 0x908154u); SPILL(); f_909ea0(); if (g_unwind) return; RELOAD();
/* 908154: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_908157: /* 908157: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_90815a: /* 90815a: xor ebp, ebp */
  ebp = 0;
L_90815c: /* 90815c: mov al, byte ptr [esp + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x50u))) & 0xffu);
/* 908160: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 908164: mov byte ptr [esp + 0x2c], al */
  W8((uint32_t)(esp + 0x2cu), (eax & 0xffu));
/* 908168: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 90816c: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 908170: mov cl, byte ptr [esp + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x50u))) & 0xffu);
/* 908174: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 908178: mov byte ptr [esp + 0xc], cl */
  W8((uint32_t)(esp + 0xcu), (ecx & 0xffu));
/* 90817c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 908180: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 908184: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 908188: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 90818c: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 908190: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908191: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 908195: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908196: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908197: mov ecx, esi */
  ecx = esi;
/* 908199: mov byte ptr [esp + 0x50], 1 */
  W8((uint32_t)(esp + 0x50u), 0x1u);
/* 90819e: call 0x906000 */
  esp -= 4; W32(esp, 0x9081a3u); SPILL(); f_906000(); if (g_unwind) return; RELOAD();
/* 9081a3: mov dl, byte ptr [esp + 0x50] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x50u))) & 0xffu);
/* 9081a7: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 9081ab: mov byte ptr [esp + 0x1c], dl */
  W8((uint32_t)(esp + 0x1cu), (edx & 0xffu));
/* 9081af: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 9081b3: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 9081b7: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 9081bb: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 9081bd: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 9081c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9081c2: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 9081c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9081c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9081c8: mov ecx, esi */
  ecx = esi;
/* 9081ca: mov byte ptr [esp + 0x54], 2 */
  W8((uint32_t)(esp + 0x54u), 0x2u);
/* 9081cf: call 0x909050 */
  esp -= 4; W32(esp, 0x9081d4u); SPILL(); f_909050(); if (g_unwind) return; RELOAD();
/* 9081d4: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 9081d8: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 9081dc: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 9081e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9081e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9081e2: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 9081e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9081e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9081e8: mov ecx, esi */
  ecx = esi;
/* 9081ea: call 0x908330 */
  esp -= 4; W32(esp, 0x9081efu); SPILL(); f_908330(); if (g_unwind) return; RELOAD();
/* 9081ef: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9081f3: xor edi, edi */
  edi = 0;
L_9081f5: /* 9081f5: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9081f7: je 0x908225 */
  if (zf) goto L_908225;
L_9081f9: /* 9081f9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9081fd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9081ff: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 908202: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 908204: jae 0x908225 */
  if (!cf) goto L_908225;
L_908206: /* 908206: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 908209: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90820b: je 0x908222 */
  if (zf) goto L_908222;
L_90820d: /* 90820d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 908210: call 0x905be0 */
  esp -= 4; W32(esp, 0x908215u); SPILL(); f_905be0(); if (g_unwind) return; RELOAD();
/* 908215: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908216: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90821bu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90821b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 90821f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_908222: /* 908222: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 908223: jmp 0x9081f5 */
  goto L_9081f5;
L_908225: /* 908225: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 908229: xor edi, edi */
  edi = 0;
L_90822b: /* 90822b: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90822d: je 0x908271 */
  if (zf) goto L_908271;
L_90822f: /* 90822f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 908233: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908235: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 908238: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90823a: jae 0x908271 */
  if (!cf) goto L_908271;
L_90823c: /* 90823c: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 90823f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908241: je 0x90826e */
  if (zf) goto L_90826e;
L_908243: /* 908243: cmp dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908246: jne 0x90824d */
  if (!zf) goto L_90824d;
L_908248: /* 908248: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 90824b: jmp 0x908250 */
  goto L_908250;
L_90824d: /* 90824d: mov esi, dword ptr [eax + 0x18] */
  esi = R32((uint32_t)(eax + 0x18u));
L_908250: /* 908250: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 908252: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 908253: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 908255: jne 0x908260 */
  if (!zf) goto L_908260;
L_908257: /* 908257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908258: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90825du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90825d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_908260: /* 908260: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908262: mov eax, esi */
  eax = esi;
/* 908264: jne 0x908243 */
  if (!zf) goto L_908243;
L_908266: /* 908266: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 90826a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
L_90826e: /* 90826e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 90826f: jmp 0x90822b */
  goto L_90822b;
L_908271: /* 908271: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908272: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x908277u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 908277: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 90827b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 90827f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908282: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 908286: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 90828a: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 90828e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90828f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908290: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 908294: mov byte ptr [esp + 0x4c], 0 */
  W8((uint32_t)(esp + 0x4cu), 0x0u);
/* 908299: call 0x90a110 */
  esp -= 4; W32(esp, 0x90829eu); SPILL(); f_90a110(); if (g_unwind) return; RELOAD();
/* 90829e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9082a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9082a3: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9082a8u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9082a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9082ab: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 9082af: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 9082b3: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 9082b7: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 9082bb: mov dword ptr [esp + 0x44], 0xffffffff */
  W32((uint32_t)(esp + 0x44u), 0xffffffffu);
/* 9082c3: call 0x905be0 */
  esp -= 4; W32(esp, 0x9082c8u); SPILL(); f_905be0(); if (g_unwind) return; RELOAD();
/* 9082c8: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 9082cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9082cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9082ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9082cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 9082d6: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9082d9: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_9082e0(void) {
  LOAD_REGS();
L_9082e0: /* 9082e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9082e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9082e6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9082e9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9082eb: jne 0x9082f0 */
  if (!zf) goto L_9082f0;
L_9082ed: /* 9082ed: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 9082ef: ret  */
  esp += 4; SPILL(); return;
L_9082f0: /* 9082f0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9082f3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9082f5: jne 0x9082fa */
  if (!zf) goto L_9082fa;
L_9082f7: /* 9082f7: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 9082f9: ret  */
  esp += 4; SPILL(); return;
L_9082fa: /* 9082fa: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9082fc: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9082ff: ret  */
  esp += 4; SPILL(); return;
}

void f_908300(void) {
  LOAD_REGS();
L_908300: /* 908300: mov cx, word ptr [esp + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 908305: mov dx, word ptr [esp + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x8u))) & 0xffffu);
/* 90830a: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 90830d: jne 0x908314 */
  if (!zf) goto L_908314;
L_90830f: /* 90830f: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 908311: ret 0xc */
  esp += 16; SPILL(); return;
L_908314: /* 908314: mov ax, word ptr [esp + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0xcu))) & 0xffffu);
/* 908319: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 90831c: jne 0x908323 */
  if (!zf) goto L_908323;
L_90831e: /* 90831e: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 908320: ret 0xc */
  esp += 16; SPILL(); return;
L_908323: /* 908323: cmp dx, ax */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 908326: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 908329: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_908330(void) {
  LOAD_REGS();
L_908330: /* 908330: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 908332: push 0x9da2c6 */
  { uint32_t v = 0x9da2c6u; esp -= 4; W32(esp, v); }
/* 908337: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 90833d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90833e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 908345: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 908348: mov al, byte ptr [esp + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x2u))) & 0xffu);
/* 90834c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90834d: mov ebx, dword ptr [ecx + 0x10] */
  ebx = R32((uint32_t)(ecx + 0x10u));
/* 908350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908351: xor ebp, ebp */
  ebp = 0;
/* 908353: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908354: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908355: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 908359: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 90835d: mov byte ptr [esp + 0x78], al */
  W8((uint32_t)(esp + 0x78u), (eax & 0xffu));
/* 908361: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 908365: mov dword ptr [esp + 0x80], ebp */
  W32((uint32_t)(esp + 0x80u), ebp);
/* 90836c: mov dword ptr [esp + 0x84], ebp */
  W32((uint32_t)(esp + 0x84u), ebp);
/* 908373: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 90837a: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 90837e: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
L_908382: /* 908382: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 908389: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90838c: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90838e: je 0x90880f */
  if (zf) goto L_90880f;
L_908394: /* 908394: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 908397: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 90839b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90839d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9083a0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9083a2: jae 0x90880f */
  if (!cf) goto L_90880f;
L_9083a8: /* 9083a8: mov byte ptr [esp + 0x58], 0 */
  W8((uint32_t)(esp + 0x58u), 0x0u);
/* 9083ad: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 9083b1: xor edi, edi */
  edi = 0;
L_9083b3: /* 9083b3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9083b7: mov eax, dword ptr [esi + ecx] */
  eax = R32((uint32_t)(esi + ecx));
/* 9083ba: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 9083bd: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9083c0: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9083c2: je 0x9083f5 */
  if (zf) goto L_9083f5;
L_9083c4: /* 9083c4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 9083c7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9083c9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9083cc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9083ce: jae 0x9083f5 */
  if (!cf) goto L_9083f5;
L_9083d0: /* 9083d0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9083d4: mov eax, dword ptr [esi + edx] */
  eax = R32((uint32_t)(esi + edx));
/* 9083d7: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 9083da: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 9083dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9083de: call 0x9082e0 */
  esp -= 4; W32(esp, 0x9083e3u); SPILL(); f_9082e0(); if (g_unwind) return; RELOAD();
/* 9083e3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9083e6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9083e8: jne 0x9083ee */
  if (!zf) goto L_9083ee;
L_9083ea: /* 9083ea: inc dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x2cu), r);
  }
L_9083ee: /* 9083ee: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 9083f2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9083f3: jmp 0x9083b3 */
  goto L_9083b3;
L_9083f5: /* 9083f5: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9083f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9083fb: jle 0x90877e */
  if ((zf || sf != of)) goto L_90877e;
L_908401: /* 908401: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 908402: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x908402);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 908404: xor esi, esi */
  esi = 0;
/* 908406: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 90840a: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 90840e: mov edi, edx */
  edi = edx;
/* 908410: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908412: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 908416: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 90841a: jle 0x90866c */
  if ((zf || sf != of)) goto L_90866c;
L_908420: /* 908420: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 908424: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
L_908428: /* 908428: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 90842a: call 0x6c242d */
  esp -= 4; W32(esp, 0x90842fu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90842f: mov esi, eax */
  esi = eax;
/* 908431: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908434: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 908438: xor edi, edi */
  edi = 0;
/* 90843a: mov byte ptr [esp + 0x90], 1 */
  W8((uint32_t)(esp + 0x90u), 0x1u);
/* 908442: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908444: je 0x908476 */
  if (zf) goto L_908476;
L_908446: /* 908446: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 90844a: mov ecx, esi */
  ecx = esi;
/* 90844c: xor eax, eax */
  eax = 0;
/* 90844e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 908450: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 908453: lea eax, [esp + 0x13] */
  eax = (uint32_t)(esp + 0x13u);
/* 908457: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908458: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90845b: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 90845e: call 0x909a20 */
  esp -= 4; W32(esp, 0x908463u); SPILL(); f_909a20(); if (g_unwind) return; RELOAD();
/* 908463: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 908466: mov dword ptr [esi + 0x20], 0xffffffff */
  W32((uint32_t)(esi + 0x20u), 0xffffffffu);
/* 90846d: mov byte ptr [esi + 0x24], 0 */
  W8((uint32_t)(esi + 0x24u), 0x0u);
/* 908471: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 908474: jmp 0x908478 */
  goto L_908478;
L_908476: /* 908476: xor esi, esi */
  esi = 0;
L_908478: /* 908478: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 90847c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 908480: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 908484: mov ebp, esi */
  ebp = esi;
/* 908486: lea edi, [ecx + eax] */
  edi = (uint32_t)(ecx + eax);
/* 908489: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90848b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90848d: mov byte ptr [esp + 0x90], 0 */
  W8((uint32_t)(esp + 0x90u), 0x0u);
/* 908495: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 908499: mov byte ptr [esp + 0x12], 1 */
  W8((uint32_t)(esp + 0x12u), 0x1u);
/* 90849e: jge 0x908582 */
  if ((sf == of)) goto L_908582;
L_9084a4: /* 9084a4: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 9084a8: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 9084ab: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9084af: lea esi, [edi*4] */
  esi = (uint32_t)(edi*4);
L_9084b6: /* 9084b6: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 9084bd: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9084c1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 9084c4: mov ecx, dword ptr [edx + eax] */
  ecx = R32((uint32_t)(edx + eax));
/* 9084c7: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 9084ca: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 9084ce: mov edx, dword ptr [esi + eax] */
  edx = R32((uint32_t)(esi + eax));
/* 9084d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9084d2: call 0x9082e0 */
  esp -= 4; W32(esp, 0x9084d7u); SPILL(); f_9082e0(); if (g_unwind) return; RELOAD();
/* 9084d7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9084db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9084de: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9084e0: je 0x90854d */
  if (zf) goto L_90854d;
L_9084e2: /* 9084e2: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 9084e6: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9084ea: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9084eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9084ec: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9084ee: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 9084f2: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 9084f6: jne 0x908512 */
  if (!zf) goto L_908512;
L_9084f8: /* 9084f8: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 9084fc: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 908500: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 908501: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908503: jne 0x90853e */
  if (!zf) goto L_90853e;
L_908505: /* 908505: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 908509: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90850c: jge 0x90853e */
  if ((sf == of)) goto L_90853e;
L_90850e: /* 90850e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908510: jle 0x90853e */
  if ((zf || sf != of)) goto L_90853e;
L_908512: /* 908512: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 908516: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 908518: jne 0x90853e */
  if (!zf) goto L_90853e;
L_90851a: /* 90851a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90851e: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 908522: mov eax, esi */
  eax = esi;
/* 908524: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 908525: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908528: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 908529: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 90852d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 908530: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908532: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908533: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 908536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908537: call 0x909ac0 */
  esp -= 4; W32(esp, 0x90853cu); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 90853c: jmp 0x908570 */
  goto L_908570;
L_90853e: /* 90853e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 908542: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 908543: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908546: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 908547: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 90854b: jmp 0x908574 */
  goto L_908574;
L_90854d: /* 90854d: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 908551: mov eax, esi */
  eax = esi;
/* 908553: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 908554: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908557: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 908558: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90855a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 90855e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 908561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908562: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 908565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908566: call 0x909ac0 */
  esp -= 4; W32(esp, 0x90856bu); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 90856b: mov byte ptr [esp + 0x12], 0 */
  W8((uint32_t)(esp + 0x12u), 0x0u);
L_908570: /* 908570: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_908574: /* 908574: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908578: jl 0x9084b6 */
  if ((sf != of)) goto L_9084b6;
L_90857e: /* 90857e: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
L_908582: /* 908582: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 908586: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* 908589: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 90858d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90858f: jne 0x908624 */
  if (!zf) goto L_908624;
L_908595: /* 908595: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 908599: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90859c: jge 0x908624 */
  if ((sf == of)) goto L_908624;
L_9085a2: /* 9085a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9085a4: jle 0x908624 */
  if ((zf || sf != of)) goto L_908624;
L_9085a6: /* 9085a6: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 9085ae: lea esi, [edi*4] */
  esi = (uint32_t)(edi*4);
/* 9085b5: jmp 0x9085bb */
  goto L_9085bb;
L_9085b7: /* 9085b7: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_9085bb: /* 9085bb: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 9085c2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9085c6: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 9085c9: mov edx, dword ptr [eax + ecx] */
  edx = R32((uint32_t)(eax + ecx));
/* 9085cc: mov edi, dword ptr [edx + 0x10] */
  edi = R32((uint32_t)(edx + 0x10u));
/* 9085cf: mov eax, dword ptr [esi + edi] */
  eax = R32((uint32_t)(esi + edi));
/* 9085d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9085d3: call 0x9082e0 */
  esp -= 4; W32(esp, 0x9085d8u); SPILL(); f_9082e0(); if (g_unwind) return; RELOAD();
/* 9085d8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9085db: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 9085de: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9085e0: mov eax, esi */
  eax = esi;
/* 9085e2: jne 0x9085f9 */
  if (!zf) goto L_9085f9;
L_9085e4: /* 9085e4: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 9085e7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9085e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9085ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9085eb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9085ee: call 0x909ac0 */
  esp -= 4; W32(esp, 0x9085f3u); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 9085f3: inc dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x34u), r);
  }
/* 9085f7: jmp 0x90860c */
  goto L_90860c;
L_9085f9: /* 9085f9: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9085fb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9085fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9085ff: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 908602: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908603: call 0x909ac0 */
  esp -= 4; W32(esp, 0x908608u); SPILL(); f_909ac0(); if (g_unwind) return; RELOAD();
/* 908608: inc dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x20u), r);
  }
L_90860c: /* 90860c: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 908610: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 908614: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908616: jl 0x9085b7 */
  if ((sf != of)) goto L_9085b7;
L_908618: /* 908618: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 90861c: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_908624: /* 908624: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 90862b: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 90862f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908631: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 908638: call 0x90a120 */
  esp -= 4; W32(esp, 0x90863du); SPILL(); f_90a120(); if (g_unwind) return; RELOAD();
/* 90863d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 908641: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 908645: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 908649: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 90864d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90864e: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908650: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 908652: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908654: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 908658: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 90865c: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 908660: jl 0x908428 */
  if ((sf != of)) goto L_908428;
L_908666: /* 908666: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 90866a: mov esi, eax */
  esi = eax;
L_90866c: /* 90866c: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 90866f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 908673: xor ebp, ebp */
  ebp = 0;
/* 908675: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908677: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908679: je 0x908763 */
  if (zf) goto L_908763;
L_90867f: /* 90867f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 908681: call 0x6c242d */
  esp -= 4; W32(esp, 0x908686u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 908686: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908689: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90868b: je 0x9086c0 */
  if (zf) goto L_9086c0;
L_90868d: /* 90868d: mov edx, eax */
  edx = eax;
/* 90868f: xor ecx, ecx */
  ecx = 0;
/* 908691: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 908693: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 908696: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 90869a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 90869d: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 9086a1: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 9086a4: mov dword ptr [eax + 0x10], ebp */
  W32((uint32_t)(eax + 0x10u), ebp);
/* 9086a7: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 9086aa: mov dword ptr [eax + 0x18], ebp */
  W32((uint32_t)(eax + 0x18u), ebp);
/* 9086ad: mov dword ptr [eax + 0x1c], ebp */
  W32((uint32_t)(eax + 0x1cu), ebp);
/* 9086b0: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 9086b7: mov byte ptr [eax + 0x24], 0 */
  W8((uint32_t)(eax + 0x24u), 0x0u);
/* 9086bb: mov dword ptr [eax + 0x28], ebp */
  W32((uint32_t)(eax + 0x28u), ebp);
/* 9086be: jmp 0x9086c2 */
  goto L_9086c2;
L_9086c0: /* 9086c0: xor eax, eax */
  eax = 0;
L_9086c2: /* 9086c2: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9086c4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9086c8: mov byte ptr [esp + 0x12], 1 */
  W8((uint32_t)(esp + 0x12u), 0x1u);
/* 9086cd: jle 0x908748 */
  if ((zf || sf != of)) goto L_908748;
L_9086cf: /* 9086cf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
L_9086d2: /* 9086d2: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 9086d9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9086dd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9086e0: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 9086e3: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* 9086e6: mov ecx, dword ptr [edi + esi] */
  ecx = R32((uint32_t)(edi + esi));
/* 9086e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9086ea: call 0x9082e0 */
  esp -= 4; W32(esp, 0x9086efu); SPILL(); f_9082e0(); if (g_unwind) return; RELOAD();
/* 9086ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9086f2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9086f4: jne 0x908717 */
  if (!zf) goto L_908717;
L_9086f6: /* 9086f6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9086fa: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
/* 9086fe: mov eax, esi */
  eax = esi;
/* 908700: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 908701: lea ecx, [edx + 0xc] */
  ecx = (uint32_t)(edx + 0xcu);
/* 908704: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 908706: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908707: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 908709: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 90870c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90870f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908710: call 0x90a690 */
  esp -= 4; W32(esp, 0x908715u); SPILL(); f_90a690(); if (g_unwind) return; RELOAD();
/* 908715: jmp 0x90873e */
  goto L_90873e;
L_908717: /* 908717: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 90871b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90871d: jne 0x90873b */
  if (!zf) goto L_90873b;
L_90871f: /* 90871f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 908723: mov eax, esi */
  eax = esi;
/* 908725: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 908728: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 90872a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90872b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90872d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 908730: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908733: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908734: call 0x90a690 */
  esp -= 4; W32(esp, 0x908739u); SPILL(); f_90a690(); if (g_unwind) return; RELOAD();
/* 908739: jmp 0x90873e */
  goto L_90873e;
L_90873b: /* 90873b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_90873e: /* 90873e: cmp ebp, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908742: jl 0x9086d2 */
  if ((sf != of)) goto L_9086d2;
L_908744: /* 908744: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
L_908748: /* 908748: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 90874f: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 908753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908754: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 908756: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908757: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 90875e: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x908763u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
L_908763: /* 908763: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 908767: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90876b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 90876c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90876f: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 908773: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 908777: xor ebp, ebp */
  ebp = 0;
/* 908779: jmp 0x908382 */
  goto L_908382;
L_90877e: /* 90877e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 908780: call 0x6c242d */
  esp -= 4; W32(esp, 0x908785u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 908785: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908788: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90878a: je 0x9087bf */
  if (zf) goto L_9087bf;
L_90878c: /* 90878c: mov edx, eax */
  edx = eax;
/* 90878e: xor ecx, ecx */
  ecx = 0;
/* 908790: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 908792: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 908795: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 908799: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 90879c: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 9087a0: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 9087a3: mov dword ptr [eax + 0x10], ebp */
  W32((uint32_t)(eax + 0x10u), ebp);
/* 9087a6: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 9087a9: mov dword ptr [eax + 0x18], ebp */
  W32((uint32_t)(eax + 0x18u), ebp);
/* 9087ac: mov dword ptr [eax + 0x1c], ebp */
  W32((uint32_t)(eax + 0x1cu), ebp);
/* 9087af: mov dword ptr [eax + 0x20], 0xffffffff */
  W32((uint32_t)(eax + 0x20u), 0xffffffffu);
/* 9087b6: mov byte ptr [eax + 0x24], 0 */
  W8((uint32_t)(eax + 0x24u), 0x0u);
/* 9087ba: mov dword ptr [eax + 0x28], ebp */
  W32((uint32_t)(eax + 0x28u), ebp);
/* 9087bd: jmp 0x9087c1 */
  goto L_9087c1;
L_9087bf: /* 9087bf: xor eax, eax */
  eax = 0;
L_9087c1: /* 9087c1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9087c5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9087c9: xor esi, esi */
  esi = 0;
L_9087cb: /* 9087cb: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 9087d2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9087d5: mov edx, dword ptr [edi + ecx] */
  edx = R32((uint32_t)(edi + ecx));
/* 9087d8: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 9087db: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9087dd: je 0x908748 */
  if (zf) goto L_908748;
L_9087e3: /* 9087e3: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 9087e6: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9087e8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9087eb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9087ed: jae 0x908748 */
  if (!cf) goto L_908748;
L_9087f3: /* 9087f3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9087f7: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 9087fa: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 9087fd: lea eax, [edx + esi*4] */
  eax = (uint32_t)(edx + esi*4);
/* 908800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908801: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 908803: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 908806: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908807: call 0x90a690 */
  esp -= 4; W32(esp, 0x90880cu); SPILL(); f_90a690(); if (g_unwind) return; RELOAD();
/* 90880c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 90880d: jmp 0x9087cb */
  goto L_9087cb;
L_90880f: /* 90880f: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 908813: mov dword ptr [esp + 0x6c], ebp */
  W32((uint32_t)(esp + 0x6cu), ebp);
/* 908817: mov byte ptr [esp + 0x68], dl */
  W8((uint32_t)(esp + 0x68u), (edx & 0xffu));
/* 90881b: mov dword ptr [esp + 0x70], ebp */
  W32((uint32_t)(esp + 0x70u), ebp);
/* 90881f: mov dword ptr [esp + 0x74], ebp */
  W32((uint32_t)(esp + 0x74u), ebp);
/* 908823: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 90882a: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 90882e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90882f: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 908833: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908834: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 908838: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908839: mov byte ptr [esp + 0x9c], 2 */
  W8((uint32_t)(esp + 0x9cu), 0x2u);
/* 908841: call 0x9077b0 */
  esp -= 4; W32(esp, 0x908846u); SPILL(); f_9077b0(); if (g_unwind) return; RELOAD();
/* 908846: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 90884d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 908850: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 908853: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908854: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908856: call 0x90b6e0 */
  esp -= 4; W32(esp, 0x90885bu); SPILL(); f_90b6e0(); if (g_unwind) return; RELOAD();
/* 90885b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90885e: mov esi, eax */
  esi = eax;
/* 908860: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 908863: mov ecx, edi */
  ecx = edi;
/* 908865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908867: call 0x90a310 */
  esp -= 4; W32(esp, 0x90886cu); SPILL(); f_90a310(); if (g_unwind) return; RELOAD();
/* 90886c: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 908870: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 908873: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908875: je 0x908c19 */
  if (zf) goto L_908c19;
L_90887b: /* 90887b: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 90887f: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 908881: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* 908884: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 908888: je 0x908c19 */
  if (zf) goto L_908c19;
L_90888e: /* 90888e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 908890: call 0x6c242d */
  esp -= 4; W32(esp, 0x908895u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 908895: mov esi, eax */
  esi = eax;
/* 908897: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90889a: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 90889e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9088a0: mov byte ptr [esp + 0x90], 3 */
  W8((uint32_t)(esp + 0x90u), 0x3u);
/* 9088a8: je 0x9088e1 */
  if (zf) goto L_9088e1;
L_9088aa: /* 9088aa: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9088ae: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 9088b1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9088b4: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9088b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9088b8: call 0x6c242d */
  esp -= 4; W32(esp, 0x9088bdu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9088bd: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9088c0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 9088c2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9088c5: xor eax, eax */
  eax = 0;
/* 9088c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9088c9: jle 0x9088dd */
  if ((zf || sf != of)) goto L_9088dd;
L_9088cb: /* 9088cb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9088cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9088ce: mov dword ptr [ecx + eax*4 - 4], 0xffffffff */
  W32((uint32_t)(ecx + eax*4 + 0xfffffffcu), 0xffffffffu);
/* 9088d6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9088d9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9088db: jl 0x9088cb */
  if ((sf != of)) goto L_9088cb;
L_9088dd: /* 9088dd: mov ebx, esi */
  ebx = esi;
/* 9088df: jmp 0x9088e3 */
  goto L_9088e3;
L_9088e1: /* 9088e1: xor ebx, ebx */
  ebx = 0;
L_9088e3: /* 9088e3: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 9088e7: xor esi, esi */
  esi = 0;
/* 9088e9: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 9088ed: mov byte ptr [esp + 0x90], 2 */
  W8((uint32_t)(esp + 0x90u), 0x2u);
/* 9088f5: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 9088f9: mov dword ptr [esp + 0x4c], 0x461c4000 */
  W32((uint32_t)(esp + 0x4cu), 0x461c4000u);
/* 908901: xor ebp, ebp */
  ebp = 0;
L_908903: /* 908903: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908905: je 0x9089bc */
  if (zf) goto L_9089bc;
L_90890b: /* 90890b: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 90890f: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908911: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 908914: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 908916: jae 0x9089bc */
  if (!cf) goto L_9089bc;
L_90891c: /* 90891c: xor ebx, ebx */
  ebx = 0;
/* 90891e: xor esi, esi */
  esi = 0;
/* 908920: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
L_908924: /* 908924: mov eax, dword ptr [edi + ebp*4] */
  eax = R32((uint32_t)(edi + ebp*4));
/* 908927: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 90892a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90892c: je 0x90895a */
  if (zf) goto L_90895a;
L_90892e: /* 90892e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 908931: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 908933: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 908936: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 908938: jae 0x90895a */
  if (!cf) goto L_90895a;
L_90893a: /* 90893a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 90893e: mov eax, edx */
  eax = edx;
/* 908940: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 908947: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 90894a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90894b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90894c: call 0x908f70 */
  esp -= 4; W32(esp, 0x908951u); SPILL(); f_908f70(); if (g_unwind) return; RELOAD();
/* 908951: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 908955: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 908957: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 908958: jmp 0x908924 */
  goto L_908924;
L_90895a: /* 90895a: mov eax, dword ptr [edi + ebp*4] */
  eax = R32((uint32_t)(edi + ebp*4));
/* 90895d: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 908961: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908964: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 908967: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908969: jne 0x90896f */
  if (!zf) goto L_90896f;
L_90896b: /* 90896b: xor eax, eax */
  eax = 0;
/* 90896d: jmp 0x908977 */
  goto L_908977;
L_90896f: /* 90896f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 908972: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908974: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_908977: /* 908977: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 90897b: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 90897f: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 908987: fidiv dword ptr [esp + 0x3c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x3cu)));
/* 90898b: fcom dword ptr [esp + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4cu)));
/* 90898f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 908991: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 908994: jp 0x9089ac */
  if (pf) goto L_9089ac;
L_908996: /* 908996: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 90899a: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 90899e: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 9089a2: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 9089a6: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9089a7: jmp 0x908903 */
  goto L_908903;
L_9089ac: /* 9089ac: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 9089b0: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 9089b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9089b6: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9089b7: jmp 0x908903 */
  goto L_908903;
L_9089bc: /* 9089bc: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 9089bf: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 9089c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9089c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9089c5: mov ecx, ebp */
  ecx = ebp;
/* 9089c7: call 0x908c60 */
  esp -= 4; W32(esp, 0x9089ccu); SPILL(); f_908c60(); if (g_unwind) return; RELOAD();
/* 9089cc: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 9089d0: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 9089d7: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 9089da: lea eax, [edx + esi*4] */
  eax = (uint32_t)(edx + esi*4);
/* 9089dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9089de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9089e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9089e1: mov ecx, edi */
  ecx = edi;
/* 9089e3: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x9089e8u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 9089e8: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 9089ec: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 9089ef: mov byte ptr [eax + 0x24], 1 */
  W8((uint32_t)(eax + 0x24u), 0x1u);
/* 9089f3: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 9089f7: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 9089fa: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9089fd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 908a00: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908a02: jne 0x908a08 */
  if (!zf) goto L_908a08;
L_908a04: /* 908a04: xor eax, eax */
  eax = 0;
/* 908a06: jmp 0x908a10 */
  goto L_908a10;
L_908a08: /* 908a08: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 908a0b: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908a0d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_908a10: /* 908a10: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 908a12: and al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_908a14: /* 908a14: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
L_908a18: /* 908a18: mov dword ptr [esp + 0x24], 0xbf800000 */
  W32((uint32_t)(esp + 0x24u), 0xbf800000u);
/* 908a20: xor esi, esi */
  esi = 0;
L_908a22: /* 908a22: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908a24: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 908a28: je 0x908b86 */
  if (zf) goto L_908b86;
L_908a2e: /* 908a2e: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 908a32: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908a34: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 908a37: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 908a39: jae 0x908b86 */
  if (!cf) goto L_908b86;
L_908a3f: /* 908a3f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 908a42: mov cl, byte ptr [eax + 0x24] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x24u))) & 0xffu);
/* 908a45: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 908a47: jne 0x908b71 */
  if (!zf) goto L_908b71;
L_908a4d: /* 908a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908a4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908a4f: mov ecx, ebp */
  ecx = ebp;
/* 908a51: call 0x908e30 */
  esp -= 4; W32(esp, 0x908a56u); SPILL(); f_908e30(); if (g_unwind) return; RELOAD();
/* 908a56: fcom dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
/* 908a5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 908a5c: and eax, 0x4100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 908a61: jne 0x908a7d */
  if (!zf) goto L_908a7d;
L_908a63: /* 908a63: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 908a67: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 908a6b: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 908a6f: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 908a76: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 908a7a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 908a7b: jmp 0x908a22 */
  goto L_908a22;
L_908a7d: /* 908a7d: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 908a81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 908a83: and eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 908a88: jne 0x908b71 */
  if (!zf) goto L_908b71;
L_908a8e: /* 908a8e: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 908a92: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 908a95: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 908a98: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908a9a: jne 0x908aa0 */
  if (!zf) goto L_908aa0;
L_908a9c: /* 908a9c: xor ebx, ebx */
  ebx = 0;
/* 908a9e: jmp 0x908aa8 */
  goto L_908aa8;
L_908aa0: /* 908aa0: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 908aa3: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 908aa5: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
L_908aa8: /* 908aa8: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 908aab: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 908aaf: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 908ab1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 908ab4: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908ab7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 908abb: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 908abd: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 908ac0: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 908ac3: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 908ac7: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 908acb: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 908acf: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 908ad3: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 908ad7: jle 0x908b4f */
  if ((zf || sf != of)) goto L_908b4f;
L_908ad9: /* 908ad9: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 908add: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 908ae1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908ae2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 908ae5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908ae6: call 0x906850 */
  esp -= 4; W32(esp, 0x908aebu); SPILL(); f_906850(); if (g_unwind) return; RELOAD();
/* 908aeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908aee: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908af0: jne 0x908afe */
  if (!zf) goto L_908afe;
L_908af2: /* 908af2: mov eax, ebp */
  eax = ebp;
/* 908af4: mov ebp, edi */
  ebp = edi;
/* 908af6: mov edi, eax */
  edi = eax;
/* 908af8: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* 908afc: jmp 0x908b0e */
  goto L_908b0e;
L_908afe: /* 908afe: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 908b02: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908b04: jne 0x908b12 */
  if (!zf) goto L_908b12;
L_908b06: /* 908b06: mov eax, ebp */
  eax = ebp;
/* 908b08: mov ebp, ecx */
  ebp = ecx;
/* 908b0a: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
L_908b0e: /* 908b0e: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
L_908b12: /* 908b12: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908b15: jle 0x908b4f */
  if ((zf || sf != of)) goto L_908b4f;
L_908b17: /* 908b17: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 908b1b: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 908b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908b20: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 908b24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908b25: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 908b29: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 908b2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908b2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908b2e: call 0x9068a0 */
  esp -= 4; W32(esp, 0x908b33u); SPILL(); f_9068a0(); if (g_unwind) return; RELOAD();
/* 908b33: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 908b37: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908b3a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908b3c: jne 0x908b4f */
  if (!zf) goto L_908b4f;
L_908b3e: /* 908b3e: cmp dword ptr [esp + 0x3c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908b43: jne 0x908b4f */
  if (!zf) goto L_908b4f;
L_908b45: /* 908b45: mov eax, edi */
  eax = edi;
/* 908b47: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 908b4b: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
L_908b4f: /* 908b4f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 908b53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908b54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908b55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908b56: call 0x907a70 */
  esp -= 4; W32(esp, 0x908b5bu); SPILL(); f_907a70(); if (g_unwind) return; RELOAD();
/* 908b5b: mov cl, byte ptr [esp + 0x12] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 908b5f: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 908b63: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 908b67: cmp cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 908b69: jne 0x908b71 */
  if (!zf) goto L_908b71;
L_908b6b: /* 908b6b: mov edx, esi */
  edx = esi;
/* 908b6d: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
L_908b71: /* 908b71: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 908b75: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 908b79: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 908b80: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 908b81: jmp 0x908a22 */
  goto L_908a22;
L_908b86: /* 908b86: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 908b8a: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 908b90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 908b92: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 908b95: jnp 0x908bfe */
  if (!pf) goto L_908bfe;
L_908b97: /* 908b97: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 908b9b: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 908b9e: mov byte ptr [eax + 0x24], 1 */
  W8((uint32_t)(eax + 0x24u), 0x1u);
/* 908ba2: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 908ba6: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 908ba9: mov ecx, ebp */
  ecx = ebp;
/* 908bab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908bac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908bad: call 0x908c60 */
  esp -= 4; W32(esp, 0x908bb2u); SPILL(); f_908c60(); if (g_unwind) return; RELOAD();
/* 908bb2: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 908bb6: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 908bb9: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 908bbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908bbd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 908bbf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908bc0: mov ecx, edi */
  ecx = edi;
/* 908bc2: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x908bc7u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 908bc7: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 908bcb: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 908bce: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908bd1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 908bd4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908bd6: jne 0x908bdc */
  if (!zf) goto L_908bdc;
L_908bd8: /* 908bd8: xor eax, eax */
  eax = 0;
/* 908bda: jmp 0x908be4 */
  goto L_908be4;
L_908bdc: /* 908bdc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 908bdf: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908be1: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_908be4: /* 908be4: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 908be6: mov al, byte ptr [esp + 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x12u))) & 0xffu);
/* 908bea: je 0x908a14 */
  if (zf) goto L_908a14;
L_908bf0: /* 908bf0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 908bf2: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 908bf5: mov byte ptr [esp + 0x12], cl */
  W8((uint32_t)(esp + 0x12u), (ecx & 0xffu));
/* 908bf9: jmp 0x908a18 */
  goto L_908a18;
L_908bfe: /* 908bfe: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908c00: je 0x908c19 */
  if (zf) goto L_908c19;
L_908c02: /* 908c02: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 908c04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 908c05: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x908c0au); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 908c0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908c0b: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 908c11: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x908c16u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 908c16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_908c19: /* 908c19: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 908c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908c1e: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x908c23u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 908c23: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 908c2a: xor eax, eax */
  eax = 0;
/* 908c2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908c2d: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 908c31: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 908c35: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 908c39: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x908c3eu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 908c3e: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 908c45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908c48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 908c4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 908c50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 908c51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 908c52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 908c53: add esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908c59: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_908c60(void) {
  LOAD_REGS();
L_908c60: /* 908c60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908c61: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 908c65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908c66: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908c67: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 908c6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908c6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908c6d: xor ebx, ebx */
  ebx = 0;
L_908c6f: /* 908c6f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 908c72: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 908c76: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908c78: je 0x908d6d */
  if (zf) goto L_908d6d;
L_908c7e: /* 908c7e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 908c81: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908c83: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 908c86: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 908c88: jae 0x908d6d */
  if (!cf) goto L_908d6d;
L_908c8e: /* 908c8e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 908c91: xor esi, esi */
  esi = 0;
/* 908c93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908c95: mov edi, edx */
  edi = edx;
/* 908c97: jle 0x908cb0 */
  if ((zf || sf != of)) goto L_908cb0;
L_908c99: /* 908c99: mov edx, dword ptr [edi + ebx*4] */
  edx = R32((uint32_t)(edi + ebx*4));
/* 908c9c: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 908c9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_908ca0: /* 908ca0: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908ca2: je 0x908ccf */
  if (zf) goto L_908ccf;
L_908ca4: /* 908ca4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 908ca5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 908ca8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908caa: jl 0x908ca0 */
  if ((sf != of)) goto L_908ca0;
L_908cac: /* 908cac: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_908cb0: /* 908cb0: mov edx, dword ptr [edi + ebx*4] */
  edx = R32((uint32_t)(edi + ebx*4));
/* 908cb3: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908cb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908cb8: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 908cba: jl 0x908cc9 */
  if ((sf != of)) goto L_908cc9;
L_908cbc: /* 908cbc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 908cbe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 908cbf: mov edi, dword ptr [edx + eax*4 + 4] */
  edi = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 908cc3: mov dword ptr [edx + eax*4 + 8], edi */
  W32((uint32_t)(edx + eax*4 + 0x8u), edi);
/* 908cc7: jns 0x908cbc */
  if (!sf) goto L_908cbc;
L_908cc9: /* 908cc9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 908ccb: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 908ccd: jmp 0x908cd3 */
  goto L_908cd3;
L_908ccf: /* 908ccf: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_908cd3: /* 908cd3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 908cd6: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 908cd9: xor edx, edx */
  edx = 0;
/* 908cdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908cdd: jle 0x908cf7 */
  if ((zf || sf != of)) goto L_908cf7;
L_908cdf: /* 908cdf: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* 908ce2: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 908ce5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_908ce7: /* 908ce7: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908ce9: je 0x908d17 */
  if (zf) goto L_908d17;
L_908ceb: /* 908ceb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 908cec: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908cef: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908cf1: jl 0x908ce7 */
  if ((sf != of)) goto L_908ce7;
L_908cf3: /* 908cf3: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_908cf7: /* 908cf7: mov edx, dword ptr [edi + ebx*4] */
  edx = R32((uint32_t)(edi + ebx*4));
/* 908cfa: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908cfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908cff: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 908d02: jl 0x908d11 */
  if ((sf != of)) goto L_908d11;
L_908d04: /* 908d04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 908d06: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 908d07: mov edi, dword ptr [edx + eax*4 + 4] */
  edi = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 908d0b: mov dword ptr [edx + eax*4 + 8], edi */
  W32((uint32_t)(edx + eax*4 + 0x8u), edi);
/* 908d0f: jns 0x908d04 */
  if (!sf) goto L_908d04;
L_908d11: /* 908d11: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 908d13: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 908d15: jmp 0x908d1b */
  goto L_908d1b;
L_908d17: /* 908d17: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_908d1b: /* 908d1b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 908d1e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 908d21: xor edx, edx */
  edx = 0;
/* 908d23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908d25: jle 0x908d3f */
  if ((zf || sf != of)) goto L_908d3f;
L_908d27: /* 908d27: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* 908d2a: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 908d2d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_908d2f: /* 908d2f: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908d31: je 0x908d63 */
  if (zf) goto L_908d63;
L_908d33: /* 908d33: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 908d34: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908d37: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908d39: jl 0x908d2f */
  if ((sf != of)) goto L_908d2f;
L_908d3b: /* 908d3b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_908d3f: /* 908d3f: mov edx, dword ptr [edi + ebx*4] */
  edx = R32((uint32_t)(edi + ebx*4));
/* 908d42: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908d45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908d47: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 908d4a: jl 0x908d59 */
  if ((sf != of)) goto L_908d59;
L_908d4c: /* 908d4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 908d4e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 908d4f: mov edi, dword ptr [edx + eax*4 + 4] */
  edi = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 908d53: mov dword ptr [edx + eax*4 + 8], edi */
  W32((uint32_t)(edx + eax*4 + 0x8u), edi);
/* 908d57: jns 0x908d4c */
  if (!sf) goto L_908d4c;
L_908d59: /* 908d59: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 908d5b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 908d5c: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 908d5e: jmp 0x908c6f */
  goto L_908c6f;
L_908d63: /* 908d63: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 908d67: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 908d68: jmp 0x908c6f */
  goto L_908c6f;
L_908d6d: /* 908d6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 908d6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 908d6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 908d70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 908d71: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 908d72: ret 8 */
  esp += 12; SPILL(); return;
}

void f_908d80(void) {
  LOAD_REGS();
L_908d80: /* 908d80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 908d84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908d85: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 908d89: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 908d8c: xor edx, edx */
  edx = 0;
/* 908d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908d8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908d90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908d92: jle 0x908da4 */
  if ((zf || sf != of)) goto L_908da4;
L_908d94: /* 908d94: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 908d96: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_908d98: /* 908d98: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908d9a: je 0x908dbe */
  if (zf) goto L_908dbe;
L_908d9c: /* 908d9c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 908d9d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908da0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908da2: jl 0x908d98 */
  if ((sf != of)) goto L_908d98;
L_908da4: /* 908da4: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 908da6: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908da9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908dab: jl 0x908dba */
  if ((sf != of)) goto L_908dba;
L_908dad: /* 908dad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 908daf: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 908db0: mov edi, dword ptr [edx + eax*4 + 4] */
  edi = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 908db4: mov dword ptr [edx + eax*4 + 8], edi */
  W32((uint32_t)(edx + eax*4 + 0x8u), edi);
/* 908db8: jns 0x908dad */
  if (!sf) goto L_908dad;
L_908dba: /* 908dba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 908dbc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_908dbe: /* 908dbe: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 908dc1: xor edx, edx */
  edx = 0;
/* 908dc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908dc5: jle 0x908dd8 */
  if ((zf || sf != of)) goto L_908dd8;
L_908dc7: /* 908dc7: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 908dca: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_908dcc: /* 908dcc: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908dce: je 0x908df3 */
  if (zf) goto L_908df3;
L_908dd0: /* 908dd0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 908dd1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908dd4: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908dd6: jl 0x908dcc */
  if ((sf != of)) goto L_908dcc;
L_908dd8: /* 908dd8: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 908ddb: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908dde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908de0: jl 0x908def */
  if ((sf != of)) goto L_908def;
L_908de2: /* 908de2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 908de4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 908de5: mov edi, dword ptr [edx + eax*4 + 4] */
  edi = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 908de9: mov dword ptr [edx + eax*4 + 8], edi */
  W32((uint32_t)(edx + eax*4 + 0x8u), edi);
/* 908ded: jns 0x908de2 */
  if (!sf) goto L_908de2;
L_908def: /* 908def: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 908df1: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
L_908df3: /* 908df3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 908df6: xor edx, edx */
  edx = 0;
/* 908df8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908dfa: jle 0x908e0d */
  if ((zf || sf != of)) goto L_908e0d;
L_908dfc: /* 908dfc: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 908dff: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_908e01: /* 908e01: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908e03: je 0x908e28 */
  if (zf) goto L_908e28;
L_908e05: /* 908e05: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 908e06: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908e09: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908e0b: jl 0x908e01 */
  if ((sf != of)) goto L_908e01;
L_908e0d: /* 908e0d: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 908e10: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 908e13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908e15: jl 0x908e24 */
  if ((sf != of)) goto L_908e24;
L_908e17: /* 908e17: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 908e19: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 908e1a: mov edi, dword ptr [edx + eax*4 + 4] */
  edi = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 908e1e: mov dword ptr [edx + eax*4 + 8], edi */
  W32((uint32_t)(edx + eax*4 + 0x8u), edi);
/* 908e22: jns 0x908e17 */
  if (!sf) goto L_908e17;
L_908e24: /* 908e24: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 908e26: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_908e28: /* 908e28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 908e29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 908e2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 908e2b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_908e30(void) {
  LOAD_REGS();
L_908e30: /* 908e30: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 908e33: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 908e37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908e38: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908e39: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 908e3d: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 908e40: xor ebx, ebx */
  ebx = 0;
/* 908e42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908e43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908e44: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 908e48: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 908e4c: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_908e50: /* 908e50: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908e52: je 0x908ee3 */
  if (zf) goto L_908ee3;
L_908e58: /* 908e58: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 908e5b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908e5d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 908e60: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 908e62: jae 0x908ee3 */
  if (!cf) goto L_908ee3;
L_908e64: /* 908e64: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* 908e67: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 908e6a: xor ecx, ecx */
  ecx = 0;
/* 908e6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908e6e: jle 0x908e8a */
  if ((zf || sf != of)) goto L_908e8a;
L_908e70: /* 908e70: mov edx, dword ptr [edi + ebx*4] */
  edx = R32((uint32_t)(edi + ebx*4));
/* 908e73: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 908e75: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
L_908e78: /* 908e78: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908e7a: je 0x908e86 */
  if (zf) goto L_908e86;
L_908e7c: /* 908e7c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 908e7d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 908e80: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908e82: jl 0x908e78 */
  if ((sf != of)) goto L_908e78;
L_908e84: /* 908e84: jmp 0x908e8a */
  goto L_908e8a;
L_908e86: /* 908e86: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_908e8a: /* 908e8a: xor edx, edx */
  edx = 0;
/* 908e8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908e8e: jle 0x908eab */
  if ((zf || sf != of)) goto L_908eab;
L_908e90: /* 908e90: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* 908e93: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 908e96: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
L_908e99: /* 908e99: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908e9b: je 0x908ea7 */
  if (zf) goto L_908ea7;
L_908e9d: /* 908e9d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 908e9e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 908ea1: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908ea3: jl 0x908e99 */
  if ((sf != of)) goto L_908e99;
L_908ea5: /* 908ea5: jmp 0x908eab */
  goto L_908eab;
L_908ea7: /* 908ea7: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_908eab: /* 908eab: xor edx, edx */
  edx = 0;
/* 908ead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908eaf: jle 0x908ecc */
  if ((zf || sf != of)) goto L_908ecc;
L_908eb1: /* 908eb1: mov ecx, dword ptr [edi + ebx*4] */
  ecx = R32((uint32_t)(edi + ebx*4));
/* 908eb4: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 908eb7: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
L_908eba: /* 908eba: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908ebc: je 0x908ec8 */
  if (zf) goto L_908ec8;
L_908ebe: /* 908ebe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 908ebf: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 908ec2: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908ec4: jl 0x908eba */
  if ((sf != of)) goto L_908eba;
L_908ec6: /* 908ec6: jmp 0x908ecc */
  goto L_908ecc;
L_908ec8: /* 908ec8: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_908ecc: /* 908ecc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 908ed0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 908ed4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 908ed5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 908ed6: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 908eda: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 908ede: jmp 0x908e50 */
  goto L_908e50;
L_908ee3: /* 908ee3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 908ee7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 908ee8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 908ee9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 908eea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 908eeb: fidiv dword ptr [esp + 4] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x4u)));
/* 908eef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908ef2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_908f00(void) {
  LOAD_REGS();
L_908f00: /* 908f00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908f01: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 908f05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908f06: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 908f0a: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 908f0d: xor eax, eax */
  eax = 0;
/* 908f0f: xor edx, edx */
  edx = 0;
/* 908f11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908f12: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908f14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908f15: jle 0x908f2f */
  if ((zf || sf != of)) goto L_908f2f;
L_908f17: /* 908f17: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 908f1a: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
L_908f1c: /* 908f1c: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908f1e: je 0x908f2a */
  if (zf) goto L_908f2a;
L_908f20: /* 908f20: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 908f21: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 908f24: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908f26: jl 0x908f1c */
  if ((sf != of)) goto L_908f1c;
L_908f28: /* 908f28: jmp 0x908f2f */
  goto L_908f2f;
L_908f2a: /* 908f2a: mov eax, 1 */
  eax = 0x1u;
L_908f2f: /* 908f2f: xor esi, esi */
  esi = 0;
/* 908f31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908f33: jle 0x908f49 */
  if ((zf || sf != of)) goto L_908f49;
L_908f35: /* 908f35: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 908f38: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
L_908f3a: /* 908f3a: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908f3c: je 0x908f48 */
  if (zf) goto L_908f48;
L_908f3e: /* 908f3e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 908f3f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 908f42: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908f44: jl 0x908f3a */
  if ((sf != of)) goto L_908f3a;
L_908f46: /* 908f46: jmp 0x908f49 */
  goto L_908f49;
L_908f48: /* 908f48: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_908f49: /* 908f49: xor esi, esi */
  esi = 0;
/* 908f4b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 908f4d: jle 0x908f68 */
  if ((zf || sf != of)) goto L_908f68;
L_908f4f: /* 908f4f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 908f52: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
L_908f54: /* 908f54: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 908f56: je 0x908f67 */
  if (zf) goto L_908f67;
L_908f58: /* 908f58: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 908f59: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 908f5c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 908f5e: jl 0x908f54 */
  if ((sf != of)) goto L_908f54;
L_908f60: /* 908f60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 908f61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 908f62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 908f63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 908f64: ret 8 */
  esp += 12; SPILL(); return;
L_908f67: /* 908f67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_908f68: /* 908f68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 908f69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 908f6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 908f6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 908f6c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_908f70(void) {
  LOAD_REGS();
L_908f70: /* 908f70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908f71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908f72: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 908f76: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908f77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908f78: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 908f7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908f7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908f7e: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 908f86: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 908f89: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 908f8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908f8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908f8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908f8e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 908f92: call 0x905f60 */
  esp -= 4; W32(esp, 0x908f97u); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 908f97: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908f9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908f9c: je 0x908fa6 */
  if (zf) goto L_908fa6;
L_908f9e: /* 908f9e: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_908fa6: /* 908fa6: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 908fa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908faa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908fab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 908fac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908fad: call 0x905f60 */
  esp -= 4; W32(esp, 0x908fb2u); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 908fb2: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 908fb6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908fb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908fbb: je 0x908fbe */
  if (zf) goto L_908fbe;
L_908fbd: /* 908fbd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_908fbe: /* 908fbe: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 908fc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908fc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 908fc4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 908fc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908fc6: call 0x905f60 */
  esp -= 4; W32(esp, 0x908fcbu); SPILL(); f_905f60(); if (g_unwind) return; RELOAD();
/* 908fcb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 908fce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908fd0: je 0x908fd3 */
  if (zf) goto L_908fd3;
L_908fd2: /* 908fd2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_908fd3: /* 908fd3: mov eax, edi */
  eax = edi;
/* 908fd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 908fd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 908fd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 908fd8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 908fd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 908fda: ret 8 */
  esp += 12; SPILL(); return;
}

void f_908fe0(void) {
  LOAD_REGS();
L_908fe0: /* 908fe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 908fe1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 908fe5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 908fe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 908fe7: xor ebx, ebx */
  ebx = 0;
/* 908fe9: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 908fec: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 908ff0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 908ff2: jne 0x908ff8 */
  if (!zf) goto L_908ff8;
L_908ff4: /* 908ff4: xor eax, eax */
  eax = 0;
/* 908ff6: jmp 0x909000 */
  goto L_909000;
L_908ff8: /* 908ff8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 908ffb: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 908ffd: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_909000: /* 909000: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 909002: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 909006: jle 0x909032 */
  if ((zf || sf != of)) goto L_909032;
L_909008: /* 909008: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909009: mov edi, eax */
  edi = eax;
L_90900b: /* 90900b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90900d: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 909010: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909012: jne 0x909018 */
  if (!zf) goto L_909018;
L_909014: /* 909014: xor eax, eax */
  eax = 0;
/* 909016: jmp 0x909020 */
  goto L_909020;
L_909018: /* 909018: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 90901b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90901d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_909020: /* 909020: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 909023: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 909026: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909028: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 90902a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 90902b: jne 0x90900b */
  if (!zf) goto L_90900b;
L_90902d: /* 90902d: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 909031: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_909032: /* 909032: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 909036: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90903a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90903b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90903c: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 90903e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 90903f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_909050(void) {
  LOAD_REGS();
L_909050: /* 909050: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 909052: push 0x9da2e9 */
  { uint32_t v = 0x9da2e9u; esp -= 4; W32(esp, v); }
/* 909057: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 90905d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90905e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 909065: sub esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90906b: mov eax, dword ptr [esp + 0xf0] */
  eax = R32((uint32_t)(esp + 0xf0u));
/* 909072: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909073: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909074: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 909075: lea ebp, [eax + eax*2] */
  ebp = (uint32_t)(eax + eax*2);
/* 909078: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909079: add ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 90907b: xor ebx, ebx */
  ebx = 0;
/* 90907d: mov eax, ebp */
  eax = ebp;
/* 90907f: xor edi, edi */
  edi = 0;
/* 909081: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 909084: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909087: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 90908b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 90908f: mov byte ptr [esp + 0x13], bl */
  W8((uint32_t)(esp + 0x13u), (ebx & 0xffu));
/* 909093: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 909097: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 90909e: jmp 0x9090a4 */
  goto L_9090a4;
L_9090a0: /* 9090a0: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_9090a4: /* 9090a4: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 9090ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9090ac: call 0x6c242d */
  esp -= 4; W32(esp, 0x9090b1u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9090b1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9090b4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9090b8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9090ba: mov dword ptr [esp + 0xec], ebx */
  W32((uint32_t)(esp + 0xecu), ebx);
/* 9090c1: je 0x9090e1 */
  if (zf) goto L_9090e1;
L_9090c3: /* 9090c3: push 0x905c20 */
  { uint32_t v = 0x905c20u; esp -= 4; W32(esp, v); }
/* 9090c8: push 0x909900 */
  { uint32_t v = 0x909900u; esp -= 4; W32(esp, v); }
/* 9090cd: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 9090d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9090d1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9090d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9090d4: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 9090d6: call 0x99cafe */
  esp -= 4; W32(esp, 0x9090dbu); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 9090db: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 9090df: jmp 0x9090e5 */
  goto L_9090e5;
L_9090e1: /* 9090e1: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
L_9090e5: /* 9090e5: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 9090e9: mov al, byte ptr [esp + 0x13] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 9090ed: xor ebp, ebp */
  ebp = 0;
/* 9090ef: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 9090f3: mov dword ptr [esp + 0xec], 0xffffffff */
  W32((uint32_t)(esp + 0xecu), 0xffffffffu);
/* 9090fe: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 909102: mov byte ptr [esp + 0x3c], dl */
  W8((uint32_t)(esp + 0x3cu), (edx & 0xffu));
/* 909106: mov byte ptr [esp + 0x3d], al */
  W8((uint32_t)(esp + 0x3du), (eax & 0xffu));
/* 90910a: mov byte ptr [esp + 0x44], bl */
  W8((uint32_t)(esp + 0x44u), (ebx & 0xffu));
/* 90910e: call 0x90b110 */
  esp -= 4; W32(esp, 0x909113u); SPILL(); f_90b110(); if (g_unwind) return; RELOAD();
/* 909113: mov eax, dword ptr [esp + 0x100] */
  eax = R32((uint32_t)(esp + 0x100u));
/* 90911a: mov dword ptr [esp + 0xec], 1 */
  W32((uint32_t)(esp + 0xecu), 0x1u);
/* 909125: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 909127: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 90912b: jle 0x909577 */
  if ((zf || sf != of)) goto L_909577;
L_909131: /* 909131: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
L_909135: /* 909135: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 90913c: mov edx, dword ptr [esp + 0xf8] */
  edx = R32((uint32_t)(esp + 0xf8u));
/* 909143: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909144: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 909148: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909149: call 0x9067a0 */
  esp -= 4; W32(esp, 0x90914eu); SPILL(); f_9067a0(); if (g_unwind) return; RELOAD();
/* 90914e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909150: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 909154: je 0x90956e */
  if (zf) goto L_90956e;
L_90915a: /* 90915a: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 90915e: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 909162: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 909166: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909167: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909168: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 90916c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 909170: call 0x90a620 */
  esp -= 4; W32(esp, 0x909175u); SPILL(); f_90a620(); if (g_unwind) return; RELOAD();
/* 909175: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 909179: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 90917d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90917f: jne 0x909554 */
  if (!zf) goto L_909554;
L_909185: /* 909185: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 909189: lea edx, [esp + 0xdc] */
  edx = (uint32_t)(esp + 0xdcu);
/* 909190: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909191: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909192: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 909196: call 0x90a330 */
  esp -= 4; W32(esp, 0x90919bu); SPILL(); f_90a330(); if (g_unwind) return; RELOAD();
/* 90919b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 90919f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 9091a2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9091a4: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 9091ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9091ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9091ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9091ae: call 0x905f20 */
  esp -= 4; W32(esp, 0x9091b3u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 9091b3: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 9091b5: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9091b9: call 0x6c242d */
  esp -= 4; W32(esp, 0x9091beu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9091be: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9091c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9091c3: je 0x90921e */
  if (zf) goto L_90921e;
L_9091c5: /* 9091c5: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9091c9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9091cd: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 9091d1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9091d5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9091d6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9091d7: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 9091db: mov edx, eax */
  edx = eax;
/* 9091dd: mov byte ptr [esp + 0xcc], 1 */
  W8((uint32_t)(esp + 0xccu), 0x1u);
/* 9091e5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 9091e7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9091eb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9091ee: mov ecx, dword ptr [esp + 0xcc] */
  ecx = R32((uint32_t)(esp + 0xccu));
/* 9091f5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 9091f8: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 9091fc: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 909200: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 909203: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 909207: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 90920a: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 90920d: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 909210: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 909213: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 909216: mov byte ptr [eax + 0x24], bl */
  W8((uint32_t)(eax + 0x24u), (ebx & 0xffu));
/* 909219: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 90921c: jmp 0x909220 */
  goto L_909220;
L_90921e: /* 90921e: xor eax, eax */
  eax = 0;
L_909220: /* 909220: mov ecx, esi */
  ecx = esi;
/* 909222: lea edx, [esp + 0x78] */
  edx = (uint32_t)(esp + 0x78u);
/* 909226: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 90922a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90922b: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 90922e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 909230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909231: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 909232: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 909235: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x90923au); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 90923a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 90923e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 909241: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 909243: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 90924a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90924b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90924c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90924d: call 0x905f20 */
  esp -= 4; W32(esp, 0x909252u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 909252: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 909254: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 909258: call 0x6c242d */
  esp -= 4; W32(esp, 0x90925du); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90925d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909260: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909262: je 0x9092bc */
  if (zf) goto L_9092bc;
L_909264: /* 909264: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 909268: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 90926c: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 909270: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 909274: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 909275: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 909276: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 90927a: mov edx, eax */
  edx = eax;
/* 90927c: mov byte ptr [esp + 0xc0], bl */
  W8((uint32_t)(esp + 0xc0u), (ebx & 0xffu));
/* 909283: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 909285: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 909289: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 90928c: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* 909293: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 909296: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 90929a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90929e: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 9092a1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9092a5: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 9092a8: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 9092ab: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 9092ae: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 9092b1: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 9092b4: mov byte ptr [eax + 0x24], bl */
  W8((uint32_t)(eax + 0x24u), (ebx & 0xffu));
/* 9092b7: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 9092ba: jmp 0x9092be */
  goto L_9092be;
L_9092bc: /* 9092bc: xor eax, eax */
  eax = 0;
L_9092be: /* 9092be: mov ecx, esi */
  ecx = esi;
/* 9092c0: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* 9092c4: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 9092c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9092c9: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9092cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9092ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9092cf: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9092d0: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9092d3: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x9092d8u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 9092d8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9092dc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9092df: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 9092e2: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 9092e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9092ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9092eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9092ec: call 0x905f20 */
  esp -= 4; W32(esp, 0x9092f1u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 9092f1: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 9092f3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9092f7: call 0x6c242d */
  esp -= 4; W32(esp, 0x9092fcu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9092fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9092ff: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909301: je 0x90935c */
  if (zf) goto L_90935c;
L_909303: /* 909303: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 909307: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 90930b: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 90930f: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 909313: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 909314: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 909315: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 909319: mov edx, eax */
  edx = eax;
/* 90931b: mov byte ptr [esp + 0x9c], 1 */
  W8((uint32_t)(esp + 0x9cu), 0x1u);
/* 909323: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 909325: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 909329: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 90932c: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 909333: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 909336: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 90933a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90933e: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 909341: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 909345: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 909348: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 90934b: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 90934e: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 909351: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 909354: mov byte ptr [eax + 0x24], bl */
  W8((uint32_t)(eax + 0x24u), (ebx & 0xffu));
/* 909357: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 90935a: jmp 0x90935e */
  goto L_90935e;
L_90935c: /* 90935c: xor eax, eax */
  eax = 0;
L_90935e: /* 90935e: mov ecx, esi */
  ecx = esi;
/* 909360: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 909364: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 909368: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909369: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 90936c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90936e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90936f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 909370: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 909373: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x909378u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 909378: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 90937c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 90937f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 909382: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 909389: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90938a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90938b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90938c: call 0x905f20 */
  esp -= 4; W32(esp, 0x909391u); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 909391: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 909393: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 909397: call 0x6c242d */
  esp -= 4; W32(esp, 0x90939cu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90939c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90939f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9093a1: je 0x9093fb */
  if (zf) goto L_9093fb;
L_9093a3: /* 9093a3: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9093a7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9093ab: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 9093af: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9093b3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9093b4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9093b5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 9093b9: mov edx, eax */
  edx = eax;
/* 9093bb: mov byte ptr [esp + 0xa8], bl */
  W8((uint32_t)(esp + 0xa8u), (ebx & 0xffu));
/* 9093c2: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 9093c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 9093c8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 9093cb: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 9093d2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 9093d5: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 9093d9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9093dd: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 9093e0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9093e4: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 9093e7: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 9093ea: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 9093ed: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 9093f0: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 9093f3: mov byte ptr [eax + 0x24], bl */
  W8((uint32_t)(eax + 0x24u), (ebx & 0xffu));
/* 9093f6: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 9093f9: jmp 0x9093fd */
  goto L_9093fd;
L_9093fb: /* 9093fb: xor eax, eax */
  eax = 0;
L_9093fd: /* 9093fd: mov ecx, esi */
  ecx = esi;
/* 9093ff: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 909403: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 909407: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909408: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 90940b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90940d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90940e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 90940f: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 909412: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x909417u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 909417: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 90941b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90941d: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 909420: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 909427: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90942a: call 0x905f20 */
  esp -= 4; W32(esp, 0x90942fu); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 90942f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 909431: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 909435: call 0x6c242d */
  esp -= 4; W32(esp, 0x90943au); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90943a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90943d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90943f: je 0x90949a */
  if (zf) goto L_90949a;
L_909441: /* 909441: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 909445: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 909449: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 90944d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 909451: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 909452: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 909453: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 909457: mov edx, eax */
  edx = eax;
/* 909459: mov byte ptr [esp + 0xb4], 1 */
  W8((uint32_t)(esp + 0xb4u), 0x1u);
/* 909461: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 909463: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 909467: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 90946a: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 909471: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 909474: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 909478: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90947c: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 90947f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 909483: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 909486: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 909489: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 90948c: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 90948f: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 909492: mov byte ptr [eax + 0x24], bl */
  W8((uint32_t)(eax + 0x24u), (ebx & 0xffu));
/* 909495: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 909498: jmp 0x90949c */
  goto L_90949c;
L_90949a: /* 90949a: xor eax, eax */
  eax = 0;
L_90949c: /* 90949c: mov ecx, esi */
  ecx = esi;
/* 90949e: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 9094a2: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 9094a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9094a7: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 9094aa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9094ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9094ad: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9094ae: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9094b1: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x9094b6u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 9094b6: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9094ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 9094bc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 9094bf: mov eax, dword ptr [esp + 0xfc] */
  eax = R32((uint32_t)(esp + 0xfcu));
/* 9094c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9094c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9094c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9094c9: call 0x905f20 */
  esp -= 4; W32(esp, 0x9094ceu); SPILL(); f_905f20(); if (g_unwind) return; RELOAD();
/* 9094ce: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 9094d0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9094d4: call 0x6c242d */
  esp -= 4; W32(esp, 0x9094d9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9094d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9094dc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9094de: je 0x909538 */
  if (zf) goto L_909538;
L_9094e0: /* 9094e0: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9094e4: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9094e8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 9094ec: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9094f0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9094f1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9094f2: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 9094f6: mov edx, eax */
  edx = eax;
/* 9094f8: mov byte ptr [esp + 0xd8], bl */
  W8((uint32_t)(esp + 0xd8u), (ebx & 0xffu));
/* 9094ff: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 909501: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 909505: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 909508: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 90950f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 909512: mov dl, byte ptr [esp + 0x13] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 909516: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90951a: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 90951d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 909521: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 909524: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 909527: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 90952a: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 90952d: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 909530: mov byte ptr [eax + 0x24], bl */
  W8((uint32_t)(eax + 0x24u), (ebx & 0xffu));
/* 909533: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 909536: jmp 0x90953a */
  goto L_90953a;
L_909538: /* 909538: xor eax, eax */
  eax = 0;
L_90953a: /* 90953a: mov ecx, esi */
  ecx = esi;
/* 90953c: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 909540: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 909544: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909545: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 909548: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90954a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90954b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 90954c: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90954f: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x909554u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
L_909554: /* 909554: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 909558: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 90955f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 909560: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 909562: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 909566: jl 0x909135 */
  if ((sf != of)) goto L_909135;
L_90956c: /* 90956c: jmp 0x909573 */
  goto L_909573;
L_90956e: /* 90956e: mov byte ptr [esp + 0x13], 1 */
  W8((uint32_t)(esp + 0x13u), 0x1u);
L_909573: /* 909573: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
L_909577: /* 909577: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 909579: jle 0x909693 */
  if ((zf || sf != of)) goto L_909693;
L_90957f: /* 90957f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 909583: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 909587: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
L_90958a: /* 90958a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 90958c: mov ecx, dword ptr [esp + 0xf8] */
  ecx = R32((uint32_t)(esp + 0xf8u));
/* 909593: mov ebp, dword ptr [esp + 0xfc] */
  ebp = R32((uint32_t)(esp + 0xfcu));
/* 90959a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90959b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90959d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90959e: call 0x9069e0 */
  esp -= 4; W32(esp, 0x9095a3u); SPILL(); f_9069e0(); if (g_unwind) return; RELOAD();
/* 9095a3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 9095a5: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 9095a9: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 9095ad: mov byte ptr [esp + 0x54], bl */
  W8((uint32_t)(esp + 0x54u), (ebx & 0xffu));
/* 9095b1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 9095b3: mov eax, edx */
  eax = edx;
/* 9095b5: mov ecx, dword ptr [edx + 0x20] */
  ecx = R32((uint32_t)(edx + 0x20u));
/* 9095b8: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 9095bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9095bd: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9095c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9095c2: mov eax, dword ptr [esp + 0x100] */
  eax = R32((uint32_t)(esp + 0x100u));
/* 9095c9: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 9095cd: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 9095d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9095d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9095d3: call 0x907690 */
  esp -= 4; W32(esp, 0x9095d8u); SPILL(); f_907690(); if (g_unwind) return; RELOAD();
/* 9095d8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9095da: je 0x90967d */
  if (zf) goto L_90967d;
L_9095e0: /* 9095e0: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 9095e2: call 0x6c242d */
  esp -= 4; W32(esp, 0x9095e7u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 9095e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9095ea: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9095ec: je 0x909629 */
  if (zf) goto L_909629;
L_9095ee: /* 9095ee: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 9095f2: mov ecx, eax */
  ecx = eax;
/* 9095f4: mov ebp, edi */
  ebp = edi;
/* 9095f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9095f7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 9095f9: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 9095fd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 909600: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 909604: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 909607: mov cl, byte ptr [esp + 0x13] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x13u))) & 0xffu);
/* 90960b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 90960f: mov byte ptr [eax + 0xc], cl */
  W8((uint32_t)(eax + 0xcu), (ecx & 0xffu));
/* 909612: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 909615: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 909618: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 90961b: mov dword ptr [eax + 0x1c], ebp */
  W32((uint32_t)(eax + 0x1cu), ebp);
/* 90961e: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 909621: mov byte ptr [eax + 0x24], bl */
  W8((uint32_t)(eax + 0x24u), (ebx & 0xffu));
/* 909624: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 909627: jmp 0x90962b */
  goto L_90962b;
L_909629: /* 909629: xor eax, eax */
  eax = 0;
L_90962b: /* 90962b: mov ecx, dword ptr [esp + 0xf8] */
  ecx = R32((uint32_t)(esp + 0xf8u));
/* 909632: mov ebp, dword ptr [esp + 0xfc] */
  ebp = R32((uint32_t)(esp + 0xfcu));
/* 909639: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90963a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90963b: mov ecx, eax */
  ecx = eax;
/* 90963d: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 909641: call 0x9069e0 */
  esp -= 4; W32(esp, 0x909646u); SPILL(); f_9069e0(); if (g_unwind) return; RELOAD();
/* 909646: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 909649: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 90964d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90964e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 909650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909651: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* 909654: call 0x90a8d0 */
  esp -= 4; W32(esp, 0x909659u); SPILL(); f_90a8d0(); if (g_unwind) return; RELOAD();
/* 909659: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 90965d: mov edx, dword ptr [esp + 0xf8] */
  edx = R32((uint32_t)(esp + 0xf8u));
/* 909664: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 909668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909669: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90966a: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 90966e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90966f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909670: call 0x907690 */
  esp -= 4; W32(esp, 0x909675u); SPILL(); f_907690(); if (g_unwind) return; RELOAD();
/* 909675: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 909677: jne 0x9095e0 */
  if (!zf) goto L_9095e0;
L_90967d: /* 90967d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 909681: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 909684: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 909685: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 909689: jne 0x90958a */
  if (!zf) goto L_90958a;
L_90968f: /* 90968f: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
L_909693: /* 909693: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 909695: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 909699: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 9096a1: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 9096a9: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 9096ad: jle 0x90971f */
  if ((zf || sf != of)) goto L_90971f;
L_9096af: /* 9096af: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9096b3: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
L_9096b6: /* 9096b6: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* 9096b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9096ba: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 9096be: call 0x908fe0 */
  esp -= 4; W32(esp, 0x9096c3u); SPILL(); f_908fe0(); if (g_unwind) return; RELOAD();
/* 9096c3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 9096c5: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9096c7: jne 0x9096cd */
  if (!zf) goto L_9096cd;
L_9096c9: /* 9096c9: xor eax, eax */
  eax = 0;
/* 9096cb: jmp 0x9096d5 */
  goto L_9096d5;
L_9096cd: /* 9096cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 9096d0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9096d2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_9096d5: /* 9096d5: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 9096dc: mov dword ptr [esp + 0x88], ebx */
  W32((uint32_t)(esp + 0x88u), ebx);
/* 9096e3: fild qword ptr [esp + 0x84] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9096ea: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 9096f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9096f2: fcom qword ptr [esp + 0x6c] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x6cu)));
/* 9096f6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9096f8: and eax, 0x4100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 9096fd: jne 0x90970d */
  if (!zf) goto L_90970d;
L_9096ff: /* 9096ff: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 909703: fstp qword ptr [esp + 0x6c] */
  WF64((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 909707: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 90970b: jmp 0x90970f */
  goto L_90970f;
L_90970d: /* 90970d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_90970f: /* 90970f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 909713: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 909716: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 909717: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 909719: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 90971d: jl 0x9096b6 */
  if ((sf != of)) goto L_9096b6;
L_90971f: /* 90971f: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 909723: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 909727: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 90972a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90972c: mov ecx, dword ptr [esp + 0xf4] */
  ecx = R32((uint32_t)(esp + 0xf4u));
/* 909733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909734: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909735: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 909739: call 0x9075c0 */
  esp -= 4; W32(esp, 0x90973eu); SPILL(); f_9075c0(); if (g_unwind) return; RELOAD();
/* 90973e: xor esi, esi */
  esi = 0;
/* 909740: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 909742: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 909746: jle 0x9097d0 */
  if ((zf || sf != of)) goto L_9097d0;
L_90974c: /* 90974c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 909750: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 909753: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_909757: /* 909757: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90975b: je 0x9097c0 */
  if (zf) goto L_9097c0;
L_90975d: /* 90975d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 90975f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909761: jne 0x909769 */
  if (!zf) goto L_909769;
L_909763: /* 909763: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 909767: jmp 0x909775 */
  goto L_909775;
L_909769: /* 909769: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 90976c: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90976e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 909771: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_909775: /* 909775: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 909779: xor eax, eax */
  eax = 0;
/* 90977b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90977d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 909781: jle 0x9097c0 */
  if ((zf || sf != of)) goto L_9097c0;
L_909783: /* 909783: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 909785: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 909788: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90978a: je 0x9097af */
  if (zf) goto L_9097af;
L_90978c: /* 90978c: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 90978f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909790: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x909795u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 909795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 909796: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 909799: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 90979c: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 90979f: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9097a4u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9097a4: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9097a8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9097ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9097af: /* 9097af: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9097b3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9097b4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9097b6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9097ba: jl 0x909783 */
  if ((sf != of)) goto L_909783;
L_9097bc: /* 9097bc: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
L_9097c0: /* 9097c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9097c1: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9097c4: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9097c6: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 9097ca: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 9097ce: jl 0x909757 */
  if ((sf != of)) goto L_909757;
L_9097d0: /* 9097d0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9097d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9097d6: je 0x9097f5 */
  if (zf) goto L_9097f5;
L_9097d8: /* 9097d8: mov ecx, dword ptr [eax - 4] */
  ecx = R32((uint32_t)(eax + 0xfffffffcu));
/* 9097db: lea ebp, [eax - 4] */
  ebp = (uint32_t)(eax + 0xfffffffcu);
/* 9097de: push 0x905c20 */
  { uint32_t v = 0x905c20u; esp -= 4; W32(esp, v); }
/* 9097e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9097e4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9097e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9097e7: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9097ecu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9097ec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9097ed: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9097f2u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9097f2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9097f5: /* 9097f5: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 9097fc: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 909800: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909801: mov dword ptr [esp + 0xf0], 0xffffffff */
  W32((uint32_t)(esp + 0xf0u), 0xffffffffu);
/* 90980c: call 0x90a320 */
  esp -= 4; W32(esp, 0x909811u); SPILL(); f_90a320(); if (g_unwind) return; RELOAD();
/* 909811: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 909815: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 909817: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909818: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* 90981f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909821: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 909825: call 0x90a550 */
  esp -= 4; W32(esp, 0x90982au); SPILL(); f_90a550(); if (g_unwind) return; RELOAD();
/* 90982a: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 90982e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90982f: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x909834u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 909834: mov eax, dword ptr [0xcf2e80] */
  eax = R32((uint32_t)(0xcf2e80u));
/* 909839: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90983c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 90983d: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 909841: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 909845: mov dword ptr [0xcf2e80], eax */
  W32((uint32_t)(0xcf2e80u), eax);
/* 90984a: jne 0x909864 */
  if (!zf) goto L_909864;
L_90984c: /* 90984c: mov eax, dword ptr [0xcf2e7c] */
  eax = R32((uint32_t)(0xcf2e7cu));
/* 909851: mov dword ptr [0xcf2e7c], ebx */
  W32((uint32_t)(0xcf2e7cu), ebx);
/* 909857: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909859: je 0x909864 */
  if (zf) goto L_909864;
L_90985b: /* 90985b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90985c: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x909861u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 909861: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_909864: /* 909864: cmp byte ptr [esp + 0x13], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x13u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 909868: je 0x9090a0 */
  if (zf) goto L_9090a0;
L_90986e: /* 90986e: mov ecx, dword ptr [esp + 0xe4] */
  ecx = R32((uint32_t)(esp + 0xe4u));
/* 909875: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909876: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 909877: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 909878: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 909879: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 909880: add esp, 0xe0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909886: ret 0x10 */
  esp += 20; SPILL(); return;
}
