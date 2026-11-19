#include "recomp.h"
#include "rec_mod.h"

void f_1090b4ae(void) {
  LOAD_REGS();
  goto L_1090b4ae;
L_1090b44d: /* 1090b44d: mov eax, dword ptr [0x10959d98] */
  eax = R32((uint32_t)(0x10959d98u));
/* 1090b452: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090b454: mov eax, dword ptr [0x10959d4c] */
  eax = R32((uint32_t)(0x10959d4cu));
/* 1090b459: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090b45b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b45d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b45e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b460: push 0x1092982c */
  { uint32_t v = 0x1092982cu; esp -= 4; W32(esp, v); }
/* 1090b465: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090b46c: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090b46fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090b46f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b471: je 0x1090b47b */
  if (zf) goto L_1090b47b;
L_1090b473: /* 1090b473: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090b475: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b477: mov ecx, eax */
  ecx = eax;
/* 1090b479: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090b47bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090b47b: /* 1090b47b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b47e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090b482: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b488u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b488: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1090b48b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090b48f: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b495u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b495: xor eax, eax */
  eax = 0;
/* 1090b497: lea esp, [ebp - 0x3d4] */
  esp = (uint32_t)(ebp + 0xfffffc2cu);
/* 1090b49d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090b4a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090b4a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090b4a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090b4a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090b4aa: mov esp, ebp */
  esp = ebp;
/* 1090b4ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090b4ad: ret  */
  esp += 4; SPILL(); return;
L_1090b4ae: /* 1090b4ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090b4b0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b4b2: mov ecx, esi */
  ecx = esi;
/* 1090b4b4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090b4b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090b4b7: jmp 0x1090b44d */
  goto L_1090b44d;
}

void f_1090b4b9(void) {
  LOAD_REGS();
L_1090b4b9: /* 1090b4b9: mov eax, 0x1090b44d */
  eax = 0x1090b44du;
/* 1090b4be: ret  */
  esp += 4; SPILL(); return;
}

void f_1090b648(void) {
  LOAD_REGS();
L_1090b648: /* 1090b648: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090b64b: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090b650: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 1090b653: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b654: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 1090b657: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090b65cu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090b65c(); return;
}

void f_1090b65c(void) {
  LOAD_REGS();
  goto L_1090b65c;
L_1090b497: /* 1090b497: lea esp, [ebp - 0x3d4] */
  esp = (uint32_t)(ebp + 0xfffffc2cu);
/* 1090b49d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090b4a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090b4a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090b4a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090b4a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090b4aa: mov esp, ebp */
  esp = ebp;
/* 1090b4ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090b4ad: ret  */
  esp += 4; SPILL(); return;
L_1090b65c: /* 1090b65c: push 0x109212c8 */
  { uint32_t v = 0x109212c8u; esp -= 4; W32(esp, v); }
/* 1090b661: push 0x10929888 */
  { uint32_t v = 0x10929888u; esp -= 4; W32(esp, v); }
/* 1090b666: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090b66cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090b66c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b66f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b671: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b673: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090b678u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
/* 1090b678: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090b67eu); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090b67e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b680: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b684: push 0x1092990c */
  { uint32_t v = 0x1092990cu; esp -= 4; W32(esp, v); }
/* 1090b689: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b68b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b68c: call dword ptr [0x10959cd0] */
  esp -= 4; W32(esp, 0x1090b692u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 1090b692: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b695: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b697: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090b69a: mov esi, eax */
  esi = eax;
/* 1090b69c: call dword ptr [0x10959c00] */
  esp -= 4; W32(esp, 0x1090b6a2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 1090b6a2: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090b6a8u); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090b6a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b6a9: mov ecx, esi */
  ecx = esi;
/* 1090b6ab: call dword ptr [0x10959b00] */
  esp -= 4; W32(esp, 0x1090b6b1u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 1090b6b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b6b3: jne 0x1090b6cd */
  if (!zf) goto L_1090b6cd;
L_1090b6b5: /* 1090b6b5: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 1090b6ba: push 0x1092d1a0 */
  { uint32_t v = 0x1092d1a0u; esp -= 4; W32(esp, v); }
/* 1090b6bf: push 0x1092d1e4 */
  { uint32_t v = 0x1092d1e4u; esp -= 4; W32(esp, v); }
/* 1090b6c4: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x1090b6cau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 1090b6ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090b6cd: /* 1090b6cd: call dword ptr [0x10959cc4] */
  esp -= 4; W32(esp, 0x1090b6d3u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 1090b6d3: mov ecx, dword ptr [0x10959cc8] */
  ecx = R32((uint32_t)(0x10959cc8u));
/* 1090b6d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b6db: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090b6de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b6e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090b6e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b6e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b6e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b6e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b6e8: call dword ptr [0x10959ccc] */
  esp -= 4; W32(esp, 0x1090b6eeu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 1090b6ee: mov esi, eax */
  esi = eax;
/* 1090b6f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090b6f2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b6f5: mov ecx, esi */
  ecx = esi;
/* 1090b6f7: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x1090b6fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090b6fa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090b6fc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 1090b6ff: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090b702: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 1090b705: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090b708: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090b70a: jge 0x1090b712 */
  if ((sf == of)) goto L_1090b712;
L_1090b70c: /* 1090b70c: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090b712: /* 1090b712: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090b715: fmul qword ptr [0x109201b8] */
  ST0 = ST0 * (F64((uint32_t)(0x109201b8u)));
/* 1090b71b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090b71d: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090b720: jge 0x1090b728 */
  if ((sf == of)) goto L_1090b728;
L_1090b722: /* 1090b722: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090b728: /* 1090b728: mov edx, dword ptr [0x10959d84] */
  edx = R32((uint32_t)(0x10959d84u));
/* 1090b72e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1090b730: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090b735: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090b737: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 1090b739: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090b73c: fadd qword ptr [0x109201a8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201a8u)));
/* 1090b742: fsub qword ptr [ebp - 0x68] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffff98u)));
/* 1090b745: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090b748: push 0x1092994c */
  { uint32_t v = 0x1092994cu; esp -= 4; W32(esp, v); }
/* 1090b74d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b74e: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090b754u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090b754: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b757: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b75a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090b75e: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b764u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b764: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1090b767: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090b76b: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b771u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b771: mov eax, esi */
  eax = esi;
/* 1090b773: jmp 0x1090b497 */
  goto L_1090b497;
}

void f_1090b778(void) {
  LOAD_REGS();
L_1090b778: /* 1090b778: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 1090b77b: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090b780: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 1090b783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b784: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 1090b787: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090b78cu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090b78c(); return;
}

void f_1090b78c(void) {
  LOAD_REGS();
L_1090b78c: /* 1090b78c: push 0x109212ac */
  { uint32_t v = 0x109212acu; esp -= 4; W32(esp, v); }
/* 1090b791: push 0x10929980 */
  { uint32_t v = 0x10929980u; esp -= 4; W32(esp, v); }
/* 1090b796: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090b79cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090b79c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b79f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b7a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b7a3: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090b7a8u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090b7a8: guest_badaddr(0x1090b7a8); return;
}

void f_1090b9a0(void) {
  LOAD_REGS();
L_1090b9a0: /* 1090b9a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090b9a1: mov ebp, esp */
  ebp = esp;
/* 1090b9a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090b9a5: push 0x1091bc09 */
  { uint32_t v = 0x1091bc09u; esp -= 4; W32(esp, v); }
/* 1090b9aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090b9b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b9b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090b9b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b9b9: mov eax, 0x2068 */
  eax = 0x2068u;
/* 1090b9be: call 0x10918780 */
  esp -= 4; W32(esp, 0x1090b9c3u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 1090b9c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090b9c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b9c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090b9c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090b9c9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090b9d0: call dword ptr [0x10959c48] */
  esp -= 4; W32(esp, 0x1090b9d6u); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 1090b9d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b9d8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 1090b9db: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
/* 1090b9e2: jne 0x1090b9fc */
  if (!zf) goto L_1090b9fc;
L_1090b9e4: /* 1090b9e4: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 1090b9e9: push 0x1092ec98 */
  { uint32_t v = 0x1092ec98u; esp -= 4; W32(esp, v); }
/* 1090b9ee: push 0x1092ec8c */
  { uint32_t v = 0x1092ec8cu; esp -= 4; W32(esp, v); }
/* 1090b9f3: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x1090b9f9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 1090b9f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090b9fc: /* 1090b9fc: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 1090b9ff: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090ba04u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090ba04: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_1090ba07: /* 1090ba07: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090ba0c: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ba0f: jge 0x1090bb85 */
  if ((sf == of)) goto L_1090bb85;
L_1090ba15: /* 1090ba15: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090ba17: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090ba1a: call dword ptr [0x10959be8] */
  esp -= 4; W32(esp, 0x1090ba20u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 1090ba20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ba22: jne 0x1090bb5c */
  if (!zf) goto L_1090bb5c;
L_1090ba28: /* 1090ba28: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090ba2d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090ba2f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 1090ba32: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 1090ba35: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ba37: je 0x1090bb61 */
  if (zf) goto L_1090bb61;
L_1090ba3d: /* 1090ba3d: call dword ptr [0x10959c38] */
  esp -= 4; W32(esp, 0x1090ba43u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 1090ba43: push 0x10929988 */
  { uint32_t v = 0x10929988u; esp -= 4; W32(esp, v); }
/* 1090ba48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ba49: call dword ptr [0x10959d68] */
  esp -= 4; W32(esp, 0x1090ba4fu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 1090ba4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ba52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ba54: je 0x1090bb5c */
  if (zf) goto L_1090bb5c;
L_1090ba5a: /* 1090ba5a: mov edx, dword ptr [0x10959ce8] */
  edx = R32((uint32_t)(0x10959ce8u));
/* 1090ba60: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090ba62: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090ba65: call dword ptr [0x10959c38] */
  esp -= 4; W32(esp, 0x1090ba6bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 1090ba6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ba6c: push 0x10929998 */
  { uint32_t v = 0x10929998u; esp -= 4; W32(esp, v); }
/* 1090ba71: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090ba73: call dword ptr [0x10959bec] */
  esp -= 4; W32(esp, 0x1090ba79u); SPILL(); f_4e2ee6(); if (g_unwind) return; /* Core!?appMsgf@@YA?BHHPBGZZ */ RELOAD();
/* 1090ba79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ba7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ba7e: je 0x1090bb5c */
  if (zf) goto L_1090bb5c;
L_1090ba84: /* 1090ba84: mov cx, word ptr [0x10931540] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x10931540u))) & 0xffffu);
/* 1090ba8b: mov word ptr [ebp - 0x2078], cx */
  W16((uint32_t)(ebp + 0xffffdf88u), (ecx & 0xffffu));
/* 1090ba92: xor eax, eax */
  eax = 0;
/* 1090ba94: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 1090ba99: lea edi, [ebp - 0x2076] */
  edi = (uint32_t)(ebp + 0xffffdf8au);
/* 1090ba9f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1090baa1: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 1090baa3: xor eax, eax */
  eax = 0;
/* 1090baa5: mov ecx, 0x13 */
  ecx = 0x13u;
/* 1090baaa: lea edi, [ebp - 0x78] */
  edi = (uint32_t)(ebp + 0xffffff88u);
/* 1090baad: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1090baaf: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 1090bab2: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 1090bab5: lea edx, [ebp - 0x2078] */
  edx = (uint32_t)(ebp + 0xffffdf88u);
/* 1090babb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090babc: mov dword ptr [ebp - 0x78], 0x4c */
  W32((uint32_t)(ebp + 0xffffff88u), 0x4cu);
/* 1090bac3: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 1090bac6: mov dword ptr [ebp - 0x58], 0x2000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x2000u);
/* 1090bacd: mov dword ptr [ebp - 0x6c], 0x10929a28 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x10929a28u);
/* 1090bad4: mov dword ptr [ebp - 0x3c], 0x10931542 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x10931542u);
/* 1090badb: mov dword ptr [ebp - 0x48], 0x10929a40 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x10929a40u);
/* 1090bae2: mov dword ptr [ebp - 0x44], 0xe */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xeu);
/* 1090bae9: call dword ptr [0x1095a4b0] */
  esp -= 4; W32(esp, 0x1090baefu); SPILL(); call_ind(R32(0x1095a4b0u)); if (g_unwind) return; /* comdlg32!GetSaveFileNameA */ RELOAD();
/* 1090baef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090baf1: je 0x1090bb5c */
  if (zf) goto L_1090bb5c;
L_1090baf3: /* 1090baf3: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090baf9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090bafb: mov ebx, dword ptr [edx + esi*4] */
  ebx = R32((uint32_t)(edx + esi*4));
/* 1090bafe: lea eax, [ebp - 0x2078] */
  eax = (uint32_t)(ebp + 0xffffdf88u);
/* 1090bb04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090bb06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090bb07: call dword ptr [0x10959d70] */
  esp -= 4; W32(esp, 0x1090bb0du); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* 1090bb0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090bb10: mov ecx, ebx */
  ecx = ebx;
/* 1090bb12: mov edi, eax */
  edi = eax;
/* 1090bb14: call dword ptr [0x10959c38] */
  esp -= 4; W32(esp, 0x1090bb1au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 1090bb1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090bb1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090bb1c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090bb1f: push 0x10929a58 */
  { uint32_t v = 0x10929a58u; esp -= 4; W32(esp, v); }
/* 1090bb24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090bb25: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090bb2bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090bb2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090bb2e: mov ecx, eax */
  ecx = eax;
/* 1090bb30: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090bb34: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090bb3au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090bb3a: mov edi, dword ptr [0x10959d0c] */
  edi = R32((uint32_t)(0x10959d0cu));
/* 1090bb40: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 1090bb42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1090bb45: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 1090bb48: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090bb4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090bb4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090bb4d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090bb4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090bb4f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090bb52: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090bb56: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090bb5cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090bb5c: /* 1090bb5c: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090bb61: /* 1090bb61: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090bb64: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1090bb65: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090bb67: jge 0x1090bb85 */
  if ((sf == of)) goto L_1090bb85;
L_1090bb69: /* 1090bb69: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090bb6b: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 1090bb6e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090bb70: je 0x1090bb61 */
  if (zf) goto L_1090bb61;
L_1090bb72: /* 1090bb72: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090bb75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090bb76: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090bb7cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090bb7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090bb7e: je 0x1090bb5c */
  if (zf) goto L_1090bb5c;
L_1090bb80: /* 1090bb80: jmp 0x1090ba07 */
  goto L_1090ba07;
L_1090bb85: /* 1090bb85: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090bb88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090bb89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090bb8a: mov eax, 1 */
  eax = 0x1u;
/* 1090bb8f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090bb96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090bb97: mov esp, ebp */
  esp = ebp;
/* 1090bb99: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090bb9a: ret  */
  esp += 4; SPILL(); return;
}

void f_1090bb9b(void) {
  LOAD_REGS();
L_1090bb9b: /* 1090bb9b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090bb9e: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090bba3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 1090bba6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090bba7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 1090bbaa: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090bbafu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090bbaf(); return;
}

void f_1090bbaf(void) {
  LOAD_REGS();
L_1090bbaf: /* 1090bbaf: push 0x109212e0 */
  { uint32_t v = 0x109212e0u; esp -= 4; W32(esp, v); }
/* 1090bbb4: push 0x10929aa8 */
  { uint32_t v = 0x10929aa8u; esp -= 4; W32(esp, v); }
/* 1090bbb9: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090bbbfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090bbbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090bbc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090bbc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090bbc6: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090bbcbu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090bbcb: guest_badaddr(0x1090bbcb); return;
}

void f_1090bc60(void) {
  LOAD_REGS();
L_1090bc60: /* 1090bc60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090bc61: mov ebp, esp */
  ebp = esp;
/* 1090bc63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090bc65: push 0x1091bc36 */
  { uint32_t v = 0x1091bc36u; esp -= 4; W32(esp, v); }
/* 1090bc6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090bc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090bc71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090bc78: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090bc7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090bc7e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 1090bc81: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 1090bc83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bc86: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090bc89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090bc8a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 1090bc8d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090bc91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090bc92: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090bc95: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090bc98: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x1090bc9eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 1090bc9e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bca1: xor edi, edi */
  edi = 0;
/* 1090bca3: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090bca6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1090bca9: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x1090bcafu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 1090bcaf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bcb2: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bcb4: mov ebx, 2 */
  ebx = 0x2u;
/* 1090bcb9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 1090bcbc: jne 0x1090bcd6 */
  if (!zf) goto L_1090bcd6;
L_1090bcbe: /* 1090bcbe: push 0x2b3 */
  { uint32_t v = 0x2b3u; esp -= 4; W32(esp, v); }
/* 1090bcc3: push 0x1092ef34 */
  { uint32_t v = 0x1092ef34u; esp -= 4; W32(esp, v); }
/* 1090bcc8: push 0x1092ef2c */
  { uint32_t v = 0x1092ef2cu; esp -= 4; W32(esp, v); }
/* 1090bccd: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x1090bcd3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 1090bcd3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090bcd6: /* 1090bcd6: mov ecx, dword ptr [0x1095a324] */
  ecx = R32((uint32_t)(0x1095a324u));
/* 1090bcdc: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090bcde: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bce0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090bce4: je 0x1090bcfd */
  if (zf) goto L_1090bcfd;
L_1090bce6: /* 1090bce6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bce9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090bceb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bced: je 0x1090bcf4 */
  if (zf) goto L_1090bcf4;
L_1090bcef: /* 1090bcef: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090bcf2: jmp 0x1090bcf6 */
  goto L_1090bcf6;
L_1090bcf4: /* 1090bcf4: xor eax, eax */
  eax = 0;
L_1090bcf6: /* 1090bcf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090bcf7: call dword ptr [0x1095a3bc] */
  esp -= 4; W32(esp, 0x1090bcfdu); SPILL(); f_d814c9(); if (g_unwind) return; /* Window!?SetExec@WTerminal@@QAEXPAVFExec@@@Z */ RELOAD();
L_1090bcfd: /* 1090bcfd: mov edx, dword ptr [0x10959b18] */
  edx = R32((uint32_t)(0x10959b18u));
/* 1090bd03: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1090bd06: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 1090bd0c: call dword ptr [0x10959f9c] */
  esp -= 4; W32(esp, 0x1090bd12u); SPILL(); call_ind(R32(0x10959f9cu)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* 1090bd12: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd15: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 1090bd18: call dword ptr [0x10959fa0] */
  esp -= 4; W32(esp, 0x1090bd1eu); SPILL(); call_ind(R32(0x10959fa0u)); if (g_unwind) return; /* KERNEL32!GetCurrentThread */ RELOAD();
/* 1090bd1e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd21: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 1090bd24: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090bd26: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 1090bd29: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 1090bd2c: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090bd2f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090bd32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090bd34: jge 0x1090bd3c */
  if ((sf == of)) goto L_1090bd3c;
L_1090bd36: /* 1090bd36: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090bd3c: /* 1090bd3c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090bd3f: fmul qword ptr [0x109201b8] */
  ST0 = ST0 * (F64((uint32_t)(0x109201b8u)));
/* 1090bd45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090bd47: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 1090bd4a: jge 0x1090bd52 */
  if ((sf == of)) goto L_1090bd52;
L_1090bd4c: /* 1090bd4c: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090bd52: /* 1090bd52: mov edx, dword ptr [0x10959d84] */
  edx = R32((uint32_t)(0x10959d84u));
/* 1090bd58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1090bd5a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd5d: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 1090bd5f: fadd qword ptr [0x109201a8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201a8u)));
/* 1090bd65: fstp qword ptr [eax + 0x10] */
  WF64((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 1090bd68: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd6b: mov ecx, eax */
  ecx = eax;
/* 1090bd6d: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 1090bd70: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 1090bd73: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 1090bd76: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd79: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 1090bd7c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd7f: mov dword ptr [edx + 0x20], edi */
  W32((uint32_t)(edx + 0x20u), edi);
/* 1090bd82: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd85: mov dword ptr [eax + 0x28], edi */
  W32((uint32_t)(eax + 0x28u), edi);
/* 1090bd88: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd8b: mov dword ptr [ecx + 0x2c], 0xa */
  W32((uint32_t)(ecx + 0x2cu), 0xau);
/* 1090bd92: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd95: mov dword ptr [edx + 0x34], edi */
  W32((uint32_t)(edx + 0x34u), edi);
/* 1090bd98: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bd9b: mov dword ptr [eax + 0x30], edi */
  W32((uint32_t)(eax + 0x30u), edi);
/* 1090bd9e: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x1090bda4u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 1090bda4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bda7: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090bdaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090bdab: push 0x1092ef14 */
  { uint32_t v = 0x1092ef14u; esp -= 4; W32(esp, v); }
/* 1090bdb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090bdb1: call dword ptr [0x10959bdc] */
  esp -= 4; W32(esp, 0x1090bdb7u); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 1090bdb7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bdba: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 1090bdbd: imul edx, edx, 0x1e */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1eu);
  edx = (uint32_t)r;
  }
/* 1090bdc0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090bdc3: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* 1090bdc6: xor ebx, ebx */
  ebx = 0;
/* 1090bdc8: jmp 0x1090bdd0 */
  goto L_1090bdd0;
L_1090bdd0: /* 1090bdd0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bdd3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090bdd6: sub ecx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1090bdd9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1090bdda: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090bddc: jge 0x1090be22 */
  if ((sf == of)) goto L_1090be22;
L_1090bdde: /* 1090bdde: lea esi, [eax + 0x38] */
  esi = (uint32_t)(eax + 0x38u);
/* 1090bde1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1090bde3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090bde5: mov ecx, esi */
  ecx = esi;
/* 1090bde7: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090bdedu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090bded: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 1090bdf0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1090bdf2: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 1090bdf5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bdf7: je 0x1090be04 */
  if (zf) goto L_1090be04;
L_1090bdf9: /* 1090bdf9: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090bdfe: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090be04u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
L_1090be04: /* 1090be04: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090be05: jmp 0x1090bdd0 */
  goto L_1090bdd0;
L_1090be22: /* 1090be22: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090be25: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090be27: je 0x1090be39 */
  if (zf) goto L_1090be39;
L_1090be29: /* 1090be29: sub ecx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1090be2c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1090be2d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1090be2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090be30: lea ecx, [eax + 0x44] */
  ecx = (uint32_t)(eax + 0x44u);
/* 1090be33: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090be39u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_1090be39: /* 1090be39: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090be3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090be3e: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 1090be41: mov edx, dword ptr [0x10959be0] */
  edx = R32((uint32_t)(0x10959be0u));
/* 1090be47: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090be49: je 0x1090be55 */
  if (zf) goto L_1090be55;
L_1090be4b: /* 1090be4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090be4c: call dword ptr [0x10959be4] */
  esp -= 4; W32(esp, 0x1090be52u); SPILL(); f_4e1b2c(); if (g_unwind) return; /* Core!?appRandInit@@YAXH@Z */ RELOAD();
/* 1090be52: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090be55: /* 1090be55: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x1090be5bu); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 1090be5b: push 0x1092eef8 */
  { uint32_t v = 0x1092eef8u; esp -= 4; W32(esp, v); }
/* 1090be60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090be61: call dword ptr [0x10959cb4] */
  esp -= 4; W32(esp, 0x1090be67u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 1090be67: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090be6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090be6d: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 1090be70: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090be73: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090be76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090be77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090be78: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090be7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090be80: mov esp, ebp */
  esp = ebp;
/* 1090be82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090be83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090bdca(void) {
  LOAD_REGS();
L_1090bdca: /* 1090bdca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1090bdd0: /* 1090bdd0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bdd3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090bdd6: sub ecx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1090bdd9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1090bdda: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090bddc: jge 0x1090be22 */
  if ((sf == of)) goto L_1090be22;
L_1090bdde: /* 1090bdde: lea esi, [eax + 0x38] */
  esi = (uint32_t)(eax + 0x38u);
/* 1090bde1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1090bde3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090bde5: mov ecx, esi */
  ecx = esi;
/* 1090bde7: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090bdedu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090bded: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 1090bdf0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1090bdf2: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 1090bdf5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bdf7: je 0x1090be04 */
  if (zf) goto L_1090be04;
L_1090bdf9: /* 1090bdf9: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090bdfe: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090be04u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
L_1090be04: /* 1090be04: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090be05: jmp 0x1090bdd0 */
  goto L_1090bdd0;
L_1090be22: /* 1090be22: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090be25: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090be27: je 0x1090be39 */
  if (zf) goto L_1090be39;
L_1090be29: /* 1090be29: sub ecx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1090be2c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1090be2d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1090be2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090be30: lea ecx, [eax + 0x44] */
  ecx = (uint32_t)(eax + 0x44u);
/* 1090be33: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090be39u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_1090be39: /* 1090be39: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090be3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090be3e: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 1090be41: mov edx, dword ptr [0x10959be0] */
  edx = R32((uint32_t)(0x10959be0u));
/* 1090be47: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090be49: je 0x1090be55 */
  if (zf) goto L_1090be55;
L_1090be4b: /* 1090be4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090be4c: call dword ptr [0x10959be4] */
  esp -= 4; W32(esp, 0x1090be52u); SPILL(); f_4e1b2c(); if (g_unwind) return; /* Core!?appRandInit@@YAXH@Z */ RELOAD();
/* 1090be52: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090be55: /* 1090be55: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x1090be5bu); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 1090be5b: push 0x1092eef8 */
  { uint32_t v = 0x1092eef8u; esp -= 4; W32(esp, v); }
/* 1090be60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090be61: call dword ptr [0x10959cb4] */
  esp -= 4; W32(esp, 0x1090be67u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 1090be67: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090be6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090be6d: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 1090be70: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090be73: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090be76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090be77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090be78: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090be7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090be80: mov esp, ebp */
  esp = ebp;
/* 1090be82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090be83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090be07(void) {
  LOAD_REGS();
L_1090be07: /* 1090be07: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090be0a: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090be0f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 1090be12: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 1090be15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090be16: jmp 0x1090beb1 */
  goto L_1090beb1;
L_1090beb1: /* 1090beb1: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090beb6u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090beb6: guest_badaddr(0x1090beb6); return;
}

void f_1090be1b(void) {
  LOAD_REGS();
L_1090be1b: /* 1090be1b: push 0x1092132c */
  { uint32_t v = 0x1092132cu; esp -= 4; W32(esp, v); }
/* 1090be20: jmp 0x1090be9f */
  goto L_1090be9f;
L_1090be9f: /* 1090be9f: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090bea4: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090beaau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090beaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090bead: xor edi, edi */
  edi = 0;
/* 1090beaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090beb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090beb1: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090beb6u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090beb6: guest_badaddr(0x1090beb6); return;
}

void f_1090be86(void) {
  LOAD_REGS();
L_1090be86: /* 1090be86: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 1090be89: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090be8e: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 1090be91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090be92: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 1090be95: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090be9au); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090be9a(); return;
}

void f_1090be9a(void) {
  LOAD_REGS();
L_1090be9a: /* 1090be9a: push 0x1092130c */
  { uint32_t v = 0x1092130cu; esp -= 4; W32(esp, v); }
/* 1090be9f: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090bea4: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090beaau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090beaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090bead: xor edi, edi */
  edi = 0;
/* 1090beaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090beb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090beb1: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090beb6u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090beb6: guest_badaddr(0x1090beb6); return;
}

void f_1090bf60(void) {
  LOAD_REGS();
L_1090bf60: /* 1090bf60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090bf61: mov ebp, esp */
  ebp = esp;
/* 1090bf63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090bf65: push 0x1091bc50 */
  { uint32_t v = 0x1091bc50u; esp -= 4; W32(esp, v); }
/* 1090bf6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090bf70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090bf71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090bf78: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090bf7b: mov eax, dword ptr [0x10959b18] */
  eax = R32((uint32_t)(0x10959b18u));
/* 1090bf80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090bf81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090bf82: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 1090bf85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090bf87: xor ebx, ebx */
  ebx = 0;
/* 1090bf89: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bf8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090bf8c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090bf8f: je 0x1090c34d */
  if (zf) goto L_1090c34d;
L_1090bf95: /* 1090bf95: mov ecx, dword ptr [0x10959b1c] */
  ecx = R32((uint32_t)(0x10959b1cu));
/* 1090bf9b: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bf9d: jne 0x1090c34d */
  if (!zf) goto L_1090c34d;
L_1090bfa3: /* 1090bfa3: mov ecx, dword ptr [0x10959ea4] */
  ecx = R32((uint32_t)(0x10959ea4u));
/* 1090bfa9: call dword ptr [0x10959ea0] */
  esp -= 4; W32(esp, 0x1090bfafu); SPILL(); f_6c7b0d(); if (g_unwind) return; /* Engine!?Clear@FStats@@QAEXXZ */ RELOAD();
/* 1090bfaf: mov edx, dword ptr [0x10959be0] */
  edx = R32((uint32_t)(0x10959be0u));
/* 1090bfb5: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bfb7: je 0x1090bfd8 */
  if (zf) goto L_1090bfd8;
L_1090bfb9: /* 1090bfb9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090bfbc: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 1090bfbf: cmp ecx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090bfc2: jne 0x1090bfc9 */
  if (!zf) goto L_1090bfc9;
L_1090bfc4: /* 1090bfc4: mov dword ptr [eax + 0x34], ebx */
  W32((uint32_t)(eax + 0x34u), ebx);
/* 1090bfc7: jmp 0x1090bfd8 */
  goto L_1090bfd8;
L_1090bfc9: /* 1090bfc9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090bfcc: jle 0x1090bfd8 */
  if ((zf || sf != of)) goto L_1090bfd8;
L_1090bfce: /* 1090bfce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090bfcf: call dword ptr [0x10959d2c] */
  esp -= 4; W32(esp, 0x1090bfd5u); SPILL(); f_4e3201(); if (g_unwind) return; /* Core!?appRequestExit@@YAXH@Z */ RELOAD();
/* 1090bfd5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090bfd8: /* 1090bfd8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090bfda: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 1090bfdd: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 1090bfe0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 1090bfe3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090bfe6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090bfe8: jge 0x1090bff0 */
  if ((sf == of)) goto L_1090bff0;
L_1090bfea: /* 1090bfea: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090bff0: /* 1090bff0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090bff3: fmul qword ptr [0x109201b8] */
  ST0 = ST0 * (F64((uint32_t)(0x109201b8u)));
/* 1090bff9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090bffb: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090bffe: jge 0x1090c006 */
  if ((sf == of)) goto L_1090c006;
L_1090c000: /* 1090c000: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090c006: /* 1090c006: mov edx, dword ptr [0x10959d84] */
  edx = R32((uint32_t)(0x10959d84u));
/* 1090c00c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1090c00e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c011: mov ecx, dword ptr [0x10959be0] */
  ecx = R32((uint32_t)(0x10959be0u));
/* 1090c017: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 1090c019: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1090c01c: fadd qword ptr [0x109201a8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201a8u)));
/* 1090c022: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 1090c025: fsub qword ptr [eax + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0x10u)));
/* 1090c028: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090c02a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c02c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c02f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 1090c032: jne 0x1090c057 */
  if (!zf) goto L_1090c057;
L_1090c034: /* 1090c034: cmp dword ptr [eax + 0x50], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x50u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c037: jne 0x1090c057 */
  if (!zf) goto L_1090c057;
L_1090c039: /* 1090c039: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090c03b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090c03e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090c040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090c041: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x1090c044u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c044: mov eax, dword ptr [0x10959bd0] */
  eax = R32((uint32_t)(0x10959bd0u));
/* 1090c049: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090c04b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c04d: je 0x1090c093 */
  if (zf) goto L_1090c093;
L_1090c04f: /* 1090c04f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090c051: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090c052: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x1090c055u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c055: jmp 0x1090c093 */
  goto L_1090c093;
L_1090c057: /* 1090c057: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090c059: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090c05b: push 0x3d088889 */
  { uint32_t v = 0x3d088889u; esp -= 4; W32(esp, v); }
/* 1090c060: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x1090c063u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c063: mov ecx, dword ptr [0x10959bd0] */
  ecx = R32((uint32_t)(0x10959bd0u));
/* 1090c069: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090c06b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c06d: je 0x1090c079 */
  if (zf) goto L_1090c079;
L_1090c06f: /* 1090c06f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090c071: push 0x3d088889 */
  { uint32_t v = 0x3d088889u; esp -= 4; W32(esp, v); }
/* 1090c076: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x1090c079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090c079: /* 1090c079: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c07c: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 1090c07f: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090c082: jge 0x1090c090 */
  if ((sf == of)) goto L_1090c090;
L_1090c084: /* 1090c084: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 1090c087: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 1090c08a: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 1090c08d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_1090c090: /* 1090c090: inc dword ptr [eax + 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x28u), r);
  }
L_1090c093: /* 1090c093: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c096: fld qword ptr [ebp - 0x20] */
  { double v = F64((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 1090c099: inc dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x20u), r);
  }
/* 1090c09c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c09f: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 1090c0a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c0a5: fld qword ptr [ecx + 0x18] */
  { double v = F64((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 1090c0a8: fadd qword ptr [0x109213c8] */
  ST0 = ST0 + (F64((uint32_t)(0x109213c8u)));
/* 1090c0ae: fcomp qword ptr [ecx + 0x10] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 1090c0b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c0b3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090c0b6: jp 0x1090c0e2 */
  if (pf) goto L_1090c0e2;
L_1090c0b8: /* 1090c0b8: fild dword ptr [ecx + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 1090c0bb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090c0bd: fld qword ptr [ecx + 0x10] */
  { double v = F64((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 1090c0c0: fsub qword ptr [ecx + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x18u)));
/* 1090c0c3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 1090c0c5: fstp dword ptr [eax + 0x7c] */
  WF32((uint32_t)(eax + 0x7cu), ST0); FPOP();
/* 1090c0c8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c0cb: mov ecx, eax */
  ecx = eax;
/* 1090c0cd: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 1090c0d0: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 1090c0d3: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 1090c0d6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c0d9: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 1090c0dc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c0df: mov dword ptr [edx + 0x20], ebx */
  W32((uint32_t)(edx + 0x20u), ebx);
L_1090c0e2: /* 1090c0e2: mov eax, dword ptr [0x10959be0] */
  eax = R32((uint32_t)(0x10959be0u));
/* 1090c0e7: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c0e9: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090c0f0: jne 0x1090c18e */
  if (!zf) goto L_1090c18e;
L_1090c0f6: /* 1090c0f6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c0f9: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c0fc: je 0x1090c251 */
  if (zf) goto L_1090c251;
L_1090c102: /* 1090c102: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090c104: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090c106: mov ecx, eax */
  ecx = eax;
/* 1090c108: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x1090c10eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c10e: fcom qword ptr [0x10921158] */
  fpu_com(ST0, F64((uint32_t)(0x10921158u)));
/* 1090c114: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090c117: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c119: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c11c: jne 0x1090c18c */
  if (!zf) goto L_1090c18c;
L_1090c11e: /* 1090c11e: fdivr qword ptr [0x109213c8] */
  ST0 = (F64((uint32_t)(0x109213c8u))) / ST0;
/* 1090c124: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 1090c127: call 0x109014ab */
  esp -= 4; W32(esp, 0x1090c12cu); SPILL(); f_109014ab(); if (g_unwind) return; RELOAD();
/* 1090c12c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c12f: fsub qword ptr [eax + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0x10u)));
/* 1090c132: fsubr qword ptr [ebp - 0x20] */
  ST0 = (F64((uint32_t)(ebp + 0xffffffe0u))) - ST0;
/* 1090c135: fld dword ptr [0x109213c0] */
  { double v = F32((uint32_t)(0x109213c0u)); FPUSH(v); }
/* 1090c13b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 1090c13d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c13f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c142: jne 0x1090c15c */
  if (!zf) goto L_1090c15c;
L_1090c144: /* 1090c144: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 1090c14b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 1090c14d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090c150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c151: call dword ptr [0x10959bd4] */
  esp -= 4; W32(esp, 0x1090c157u); SPILL(); f_4e3e22(); if (g_unwind) return; /* Core!?appSleep@@YAXM@Z */ RELOAD();
/* 1090c157: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c15a: jmp 0x1090c18e */
  goto L_1090c18e;
L_1090c15c: /* 1090c15c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 1090c15f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090c162: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c163: call dword ptr [0x10959bd4] */
  esp -= 4; W32(esp, 0x1090c169u); SPILL(); f_4e3e22(); if (g_unwind) return; /* Core!?appSleep@@YAXM@Z */ RELOAD();
/* 1090c169: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c16c: jmp 0x1090c18e */
  goto L_1090c18e;
L_1090c18c: /* 1090c18c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_1090c18e: /* 1090c18e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c191: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c194: je 0x1090c251 */
  if (zf) goto L_1090c251;
L_1090c19a: /* 1090c19a: mov esi, dword ptr [0x1095a13c] */
  esi = R32((uint32_t)(0x1095a13cu));
/* 1090c1a0: mov edi, dword ptr [0x1095a124] */
  edi = R32((uint32_t)(0x1095a124u));
/* 1090c1a6: mov ebx, dword ptr [0x1095a140] */
  ebx = R32((uint32_t)(0x1095a140u));
L_1090c1ac: /* 1090c1ac: mov ecx, dword ptr [0x10959d60] */
  ecx = R32((uint32_t)(0x10959d60u));
/* 1090c1b2: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c1b5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090c1b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c1b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c1bb: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090c1c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c1c4: je 0x1090c1ce */
  if (zf) goto L_1090c1ce;
L_1090c1c6: /* 1090c1c6: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090c1c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c1ca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090c1ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c1cc: jmp 0x1090c1d4 */
  goto L_1090c1d4;
L_1090c1ce: /* 1090c1ce: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 1090c1d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c1d2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090c1d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090c1d4: /* 1090c1d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c1d6: je 0x1090c24c */
  if (zf) goto L_1090c24c;
L_1090c1d8: /* 1090c1d8: cmp dword ptr [ebp - 0x48], 0x12 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c1dc: jne 0x1090c202 */
  if (!zf) goto L_1090c202;
L_1090c1de: /* 1090c1de: mov ecx, dword ptr [0x10959cfc] */
  ecx = R32((uint32_t)(0x10959cfcu));
/* 1090c1e4: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c1e7: je 0x1090c1f7 */
  if (zf) goto L_1090c1f7;
L_1090c1e9: /* 1090c1e9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c1ec: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090c1ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c1ef: call 0x1090b9a0 */
  esp -= 4; W32(esp, 0x1090c1f4u); SPILL(); f_1090b9a0(); if (g_unwind) return; RELOAD();
/* 1090c1f4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090c1f7: /* 1090c1f7: mov eax, dword ptr [0x10959b1c] */
  eax = R32((uint32_t)(0x10959b1cu));
/* 1090c1fc: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_1090c202: /* 1090c202: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090c205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c206: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090c208u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c208: mov edx, dword ptr [0x10959d60] */
  edx = R32((uint32_t)(0x10959d60u));
/* 1090c20e: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c211: je 0x1090c23d */
  if (zf) goto L_1090c23d;
L_1090c213: /* 1090c213: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 1090c216: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c217: call dword ptr [0x1095a144] */
  esp -= 4; W32(esp, 0x1090c21du); SPILL(); call_ind(R32(0x1095a144u)); if (g_unwind) return; /* USER32!DispatchMessageW */ RELOAD();
/* 1090c21d: jmp 0x1090c1ac */
  goto L_1090c1ac;
L_1090c23d: /* 1090c23d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090c240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c241: call dword ptr [0x1095a128] */
  esp -= 4; W32(esp, 0x1090c247u); SPILL(); call_ind(R32(0x1095a128u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* 1090c247: jmp 0x1090c1ac */
  goto L_1090c1ac;
L_1090c24c: /* 1090c24c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c24f: xor ebx, ebx */
  ebx = 0;
L_1090c251: /* 1090c251: mov edx, dword ptr [0x10959cfc] */
  edx = R32((uint32_t)(0x10959cfcu));
/* 1090c257: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c259: je 0x1090c2a9 */
  if (zf) goto L_1090c2a9;
L_1090c25b: /* 1090c25b: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c25e: je 0x1090c2a9 */
  if (zf) goto L_1090c2a9;
L_1090c260: /* 1090c260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090c261: call dword ptr [0x1095a12c] */
  esp -= 4; W32(esp, 0x1090c267u); SPILL(); call_ind(R32(0x1095a12cu)); if (g_unwind) return; /* USER32!GetForegroundWindow */ RELOAD();
/* 1090c267: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c268: call dword ptr [0x1095a130] */
  esp -= 4; W32(esp, 0x1090c26eu); SPILL(); call_ind(R32(0x1095a130u)); if (g_unwind) return; /* USER32!GetWindowThreadProcessId */ RELOAD();
/* 1090c26e: mov esi, eax */
  esi = eax;
/* 1090c270: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c273: sub esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1090c276: mov ecx, dword ptr [0x1092ef68] */
  ecx = R32((uint32_t)(0x1092ef68u));
/* 1090c27c: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 1090c27e: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 1090c280: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1090c281: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c283: je 0x1090c35e */
  if (zf) goto L_1090c35e;
L_1090c289: /* 1090c289: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c28b: jne 0x1090c2a3 */
  if (!zf) goto L_1090c2a3;
L_1090c28d: /* 1090c28d: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 1090c290: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090c292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c293: call dword ptr [0x10959f94] */
  esp -= 4; W32(esp, 0x1090c299u); SPILL(); call_ind(R32(0x10959f94u)); if (g_unwind) return; /* KERNEL32!SetThreadPriority */ RELOAD();
L_1090c299: /* 1090c299: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090c29a: call dword ptr [0x10959f98] */
  esp -= 4; W32(esp, 0x1090c2a0u); SPILL(); call_ind(R32(0x10959f98u)); if (g_unwind) return; /* KERNEL32!Sleep */ RELOAD();
L_1090c2a0: /* 1090c2a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_1090c2a3: /* 1090c2a3: mov dword ptr [0x1092ef68], esi */
  W32((uint32_t)(0x1092ef68u), esi);
L_1090c2a9: /* 1090c2a9: cmp dword ptr [eax + 0x50], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x50u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c2ac: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 1090c2b3: je 0x1090c2d4 */
  if (zf) goto L_1090c2d4;
L_1090c2b5: /* 1090c2b5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090c2b7: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 1090c2ba: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 1090c2bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090c2bf: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 1090c2c2: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 1090c2c5: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090c2ca: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090c2cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c2cd: push 0x1092ef5c */
  { uint32_t v = 0x1092ef5cu; esp -= 4; W32(esp, v); }
/* 1090c2d2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090c2d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090c2d4: /* 1090c2d4: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090c2d6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c2d9: sub eax, dword ptr [ecx + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090c2dc: mov edx, dword ptr [0x10959e9c] */
  edx = R32((uint32_t)(0x10959e9cu));
/* 1090c2e2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 1090c2e5: mov edx, dword ptr [0x10959ea4] */
  edx = R32((uint32_t)(0x10959ea4u));
/* 1090c2eb: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 1090c2ee: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 1090c2f1: mov eax, dword ptr [0x10959e9c] */
  eax = R32((uint32_t)(0x10959e9cu));
/* 1090c2f6: mov edx, dword ptr [0x10959ea4] */
  edx = R32((uint32_t)(0x10959ea4u));
/* 1090c2fc: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* 1090c302: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 1090c305: mov edx, dword ptr [0x10959bd8] */
  edx = R32((uint32_t)(0x10959bd8u));
/* 1090c30b: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 1090c30d: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 1090c310: mov eax, dword ptr [0x10959bd8] */
  eax = R32((uint32_t)(0x10959bd8u));
/* 1090c315: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 1090c317: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090c319: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c31c: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 1090c31f: mov edx, dword ptr [0x10959be0] */
  edx = R32((uint32_t)(0x10959be0u));
/* 1090c325: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c327: je 0x1090c34d */
  if (zf) goto L_1090c34d;
L_1090c329: /* 1090c329: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c32c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 1090c32f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c332: jne 0x1090c376 */
  if (!zf) goto L_1090c376;
L_1090c334: /* 1090c334: mov ecx, dword ptr [0x10959ea4] */
  ecx = R32((uint32_t)(0x10959ea4u));
/* 1090c33a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c33b: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 1090c33e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c33f: call dword ptr [0x10959eac] */
  esp -= 4; W32(esp, 0x1090c345u); SPILL(); f_6c7c3e(); if (g_unwind) return; /* Engine!?UpdateString@FStats@@QAEXAAVFString@@H@Z */ RELOAD();
/* 1090c345: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c348: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 1090c34b: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
L_1090c34d: /* 1090c34d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090c350: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090c357: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090c358: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090c359: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090c35a: mov esp, ebp */
  esp = ebp;
/* 1090c35c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090c35d: ret  */
  esp += 4; SPILL(); return;
L_1090c35e: /* 1090c35e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c360: je 0x1090c299 */
  if (zf) goto L_1090c299;
L_1090c366: /* 1090c366: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 1090c369: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090c36a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c36b: call dword ptr [0x10959f94] */
  esp -= 4; W32(esp, 0x1090c371u); SPILL(); call_ind(R32(0x10959f94u)); if (g_unwind) return; /* KERNEL32!SetThreadPriority */ RELOAD();
/* 1090c371: jmp 0x1090c2a0 */
  goto L_1090c2a0;
L_1090c376: /* 1090c376: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 1090c379: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 1090c37c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090c37e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1090c380: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090c383: jge 0x1090c38c */
  if ((sf == of)) goto L_1090c38c;
L_1090c385: /* 1090c385: mov edi, 2 */
  edi = 0x2u;
/* 1090c38a: jmp 0x1090c394 */
  goto L_1090c394;
L_1090c38c: /* 1090c38c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090c38e: mov edi, eax */
  edi = eax;
/* 1090c390: jl 0x1090c394 */
  if ((sf != of)) goto L_1090c394;
L_1090c392: /* 1090c392: mov edi, ecx */
  edi = ecx;
L_1090c394: /* 1090c394: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 1090c397: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 1090c39a: lea edx, [ecx + eax*4 - 0xc] */
  edx = (uint32_t)(ecx + eax*4 + 0xfffffff4u);
/* 1090c39e: mov ecx, dword ptr [0x10959ea4] */
  ecx = R32((uint32_t)(0x10959ea4u));
/* 1090c3a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090c3a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c3a6: call dword ptr [0x10959eac] */
  esp -= 4; W32(esp, 0x1090c3acu); SPILL(); f_6c7c3e(); if (g_unwind) return; /* Engine!?UpdateString@FStats@@QAEXAAVFString@@H@Z */ RELOAD();
/* 1090c3ac: mov eax, dword ptr [0x10959e9c] */
  eax = R32((uint32_t)(0x10959e9cu));
/* 1090c3b1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090c3b4: mov edx, dword ptr [0x10959ea4] */
  edx = R32((uint32_t)(0x10959ea4u));
/* 1090c3ba: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 1090c3bd: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 1090c3c0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090c3c2: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 1090c3c5: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 1090c3c8: jge 0x1090c3d0 */
  if ((sf == of)) goto L_1090c3d0;
L_1090c3ca: /* 1090c3ca: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090c3d0: /* 1090c3d0: mov edx, dword ptr [0x10959d84] */
  edx = R32((uint32_t)(0x10959d84u));
/* 1090c3d6: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 1090c3d8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090c3db: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 1090c3de: fmul qword ptr [0x10921370] */
  ST0 = ST0 * (F64((uint32_t)(0x10921370u)));
/* 1090c3e4: fstp dword ptr [ecx + edi*4 - 4] */
  WF32((uint32_t)(ecx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1090c3e8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090c3eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090c3ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090c3ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090c3f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090c3f5: mov esp, ebp */
  esp = ebp;
/* 1090c3f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090c3f8: ret  */
  esp += 4; SPILL(); return;
}

void f_1090c16e(void) {
  LOAD_REGS();
L_1090c16e: /* 1090c16e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 1090c171: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090c176: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 1090c179: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 1090c17c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c17d: jmp 0x1090c424 */
  goto L_1090c424;
L_1090c424: /* 1090c424: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090c429u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090c429: guest_badaddr(0x1090c429); return;
}

void f_1090c182(void) {
  LOAD_REGS();
L_1090c182: /* 1090c182: push 0x10921398 */
  { uint32_t v = 0x10921398u; esp -= 4; W32(esp, v); }
/* 1090c187: jmp 0x1090c412 */
  goto L_1090c412;
L_1090c412: /* 1090c412: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090c417: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090c41du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090c41d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c420: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c424: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090c429u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090c429: guest_badaddr(0x1090c429); return;
}

void f_1090c21f(void) {
  LOAD_REGS();
L_1090c21f: /* 1090c21f: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 1090c222: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090c227: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090c22a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 1090c22d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c22e: jmp 0x1090c424 */
  goto L_1090c424;
L_1090c424: /* 1090c424: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090c429u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090c429: guest_badaddr(0x1090c429); return;
}

void f_1090c233(void) {
  LOAD_REGS();
L_1090c233: /* 1090c233: push 0x1092137c */
  { uint32_t v = 0x1092137cu; esp -= 4; W32(esp, v); }
/* 1090c238: jmp 0x1090c412 */
  goto L_1090c412;
L_1090c412: /* 1090c412: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090c417: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090c41du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090c41d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c420: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c424: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090c429u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090c429: guest_badaddr(0x1090c429); return;
}

void f_1090c3f9(void) {
  LOAD_REGS();
L_1090c3f9: /* 1090c3f9: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 1090c3fc: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090c401: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 1090c404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c405: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 1090c408: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090c40du); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090c40d(); return;
}

void f_1090c40d(void) {
  LOAD_REGS();
L_1090c40d: /* 1090c40d: push 0x10921350 */
  { uint32_t v = 0x10921350u; esp -= 4; W32(esp, v); }
/* 1090c412: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090c417: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090c41du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090c41d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c420: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c424: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090c429u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090c429: guest_badaddr(0x1090c429); return;
}

void f_1090c570(void) {
  LOAD_REGS();
L_1090c570: /* 1090c570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090c571: mov ebp, esp */
  ebp = esp;
/* 1090c573: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090c575: push 0x1091bcfd */
  { uint32_t v = 0x1091bcfdu; esp -= 4; W32(esp, v); }
/* 1090c57a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090c580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c581: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090c588: sub esp, 0x8a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8a0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090c58e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090c58f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090c590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090c591: mov esi, ecx */
  esi = ecx;
/* 1090c593: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090c596: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 1090c599: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090c5a0: mov eax, dword ptr [0x10959b18] */
  eax = R32((uint32_t)(0x10959b18u));
/* 1090c5a5: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 1090c5ab: mov ecx, dword ptr [0x10959be0] */
  ecx = R32((uint32_t)(0x10959be0u));
/* 1090c5b1: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090c5b4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090c5b8: je 0x1090cbd9 */
  if (zf) goto L_1090cbd9;
L_1090c5be: /* 1090c5be: mov ebx, dword ptr [esi + 0x30] */
  ebx = R32((uint32_t)(esi + 0x30u));
/* 1090c5c1: sub ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1090c5c4: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 1090c5c7: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x1090c5cdu); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 1090c5cd: push 0x1092f37c */
  { uint32_t v = 0x1092f37cu; esp -= 4; W32(esp, v); }
/* 1090c5d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c5d3: call dword ptr [0x10959cb4] */
  esp -= 4; W32(esp, 0x1090c5d9u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 1090c5d9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090c5db: mov edi, eax */
  edi = eax;
/* 1090c5dd: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 1090c5e0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 1090c5e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090c5e5: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 1090c5e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090c5ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c5ed: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 1090c5f0: mov dword ptr [ebp - 0x4c], 0x42c80000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x42c80000u);
/* 1090c5f7: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x1090c5fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c5fd: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 1090c603: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c605: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090c607: call dword ptr [0x10959b9c] */
  esp -= 4; W32(esp, 0x1090c60du); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 1090c60d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c60e: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 1090c614: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090c61au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090c61a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 1090c61c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c61f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c620: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 1090c626: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090c62a: call dword ptr [0x10959ba0] */
  esp -= 4; W32(esp, 0x1090c630u); SPILL(); f_4e4052(); if (g_unwind) return; /* Core!?LeftChop@FString@@QBE?AV1@H@Z */ RELOAD();
/* 1090c630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c631: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 1090c637: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090c63b: call dword ptr [0x10959ca4] */
  esp -= 4; W32(esp, 0x1090c641u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090c641: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c644: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090c648: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090c64eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090c64e: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 1090c654: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c655: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 1090c658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c659: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 1090c65c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c65d: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 1090c660: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c661: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 1090c664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c665: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 1090c66b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c66c: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 1090c66f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c670: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 1090c673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c674: call dword ptr [0x10959ba4] */
  esp -= 4; W32(esp, 0x1090c67au); SPILL(); f_4e3e31(); if (g_unwind) return; /* Core!?appSystemTime@@YAXAAH0000000@Z */ RELOAD();
/* 1090c67a: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 1090c67d: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 1090c680: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 1090c683: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c687: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 1090c68a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c68b: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 1090c68e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c68f: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 1090c692: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c693: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c695: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 1090c69b: push 0x1092f338 */
  { uint32_t v = 0x1092f338u; esp -= 4; W32(esp, v); }
/* 1090c6a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c6a1: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090c6a7u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090c6a7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c6aa: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090c6ae: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x1090c6b4u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 1090c6b4: mov edx, dword ptr [0x10959ba8] */
  edx = R32((uint32_t)(0x10959ba8u));
/* 1090c6ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c6bb: mov eax, dword ptr [0x10959bac] */
  eax = R32((uint32_t)(0x10959bacu));
/* 1090c6c0: mov ecx, dword ptr [0x10959bb0] */
  ecx = R32((uint32_t)(0x10959bb0u));
/* 1090c6c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c6c7: mov edx, dword ptr [0x10959bb4] */
  edx = R32((uint32_t)(0x10959bb4u));
/* 1090c6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c6ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c6cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c6d0: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 1090c6d6: push 0x1092f2fc */
  { uint32_t v = 0x1092f2fcu; esp -= 4; W32(esp, v); }
/* 1090c6db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c6dc: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090c6e2u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090c6e2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c6e5: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 1090c6eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c6ec: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c6ef: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090c6f3: call dword ptr [0x10959bb8] */
  esp -= 4; W32(esp, 0x1090c6f9u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 1090c6f9: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090c6fe: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 1090c701: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 1090c705: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090c70bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090c70b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c70d: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090c711: je 0x1090c789 */
  if (zf) goto L_1090c789;
L_1090c713: /* 1090c713: xor edx, edx */
  edx = 0;
/* 1090c715: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090c718: mov ecx, 1 */
  ecx = 0x1u;
/* 1090c71d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1090c720: /* 1090c720: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090c722: jge 0x1090c73b */
  if ((sf == of)) goto L_1090c73b;
L_1090c724: /* 1090c724: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 1090c727: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 1090c72a: fcomp dword ptr [ebp - 0x4c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb4u)));
  FPOP();
/* 1090c72d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c72f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c732: jne 0x1090c738 */
  if (!zf) goto L_1090c738;
L_1090c734: /* 1090c734: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1090c735: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_1090c738: /* 1090c738: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1090c739: jmp 0x1090c720 */
  goto L_1090c720;
L_1090c73b: /* 1090c73b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 1090c73e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090c741: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c744: fmul dword ptr [0x10921418] */
  ST0 = ST0 * (F32((uint32_t)(0x10921418u)));
/* 1090c74a: fidiv dword ptr [ebp - 0x44] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)));
/* 1090c74d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090c750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090c751: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c752: push 0x1092f290 */
  { uint32_t v = 0x1092f290u; esp -= 4; W32(esp, v); }
/* 1090c757: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c758: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090c75eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090c75e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c762: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 1090c765: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 1090c769: call dword ptr [0x10959ca4] */
  esp -= 4; W32(esp, 0x1090c76fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090c76f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c772: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090c776: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090c77cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090c77c: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 1090c77f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c780: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c783: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090c789u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_1090c789: /* 1090c789: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 1090c78c: mov dword ptr [ebp - 0x24], 0x447a0000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x447a0000u);
/* 1090c793: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 1090c79a: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 1090c7a1: fdiv dword ptr [esi + 0x34] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x34u)));
/* 1090c7a4: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 1090c7ab: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 1090c7ae: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x1090c7b4u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 1090c7b4: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090c7b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c7b8: push 0x1092f27c */
  { uint32_t v = 0x1092f27cu; esp -= 4; W32(esp, v); }
/* 1090c7bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c7be: call dword ptr [0x10959bc0] */
  esp -= 4; W32(esp, 0x1090c7c4u); SPILL(); f_4e44a8(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAM@Z */ RELOAD();
/* 1090c7c4: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 1090c7c7: fcomp dword ptr [0x109213c0] */
  fpu_com(ST0, F32((uint32_t)(0x109213c0u)));
  FPOP();
/* 1090c7cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c7d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c7d2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090c7d5: jp 0x1090c7de */
  if (pf) goto L_1090c7de;
L_1090c7d7: /* 1090c7d7: mov dword ptr [ebp - 0x40], 0x461c4000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x461c4000u);
L_1090c7de: /* 1090c7de: fld dword ptr [0x10920e8c] */
  { double v = F32((uint32_t)(0x10920e8cu)); FPUSH(v); }
/* 1090c7e4: mov edx, 1 */
  edx = 0x1u;
/* 1090c7e9: fdiv dword ptr [ebp - 0x40] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 1090c7ec: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 1090c7ef: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
L_1090c7f2: /* 1090c7f2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090c7f4: jge 0x1090c83d */
  if ((sf == of)) goto L_1090c83d;
L_1090c7f6: /* 1090c7f6: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 1090c7f9: fld dword ptr [0x10920e8c] */
  { double v = F32((uint32_t)(0x10920e8cu)); FPUSH(v); }
/* 1090c7ff: fdiv dword ptr [eax + edx*4] */
  ST0 = ST0 / (F32((uint32_t)(eax + edx*4)));
/* 1090c802: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 1090c805: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 1090c808: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 1090c80a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c80c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090c80f: jnp 0x1090c814 */
  if (!pf) goto L_1090c814;
L_1090c811: /* 1090c811: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
L_1090c814: /* 1090c814: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 1090c817: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 1090c819: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c81b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c81e: je 0x1090c825 */
  if (zf) goto L_1090c825;
L_1090c820: /* 1090c820: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 1090c823: jmp 0x1090c827 */
  goto L_1090c827;
L_1090c825: /* 1090c825: fstp st(0) */
  STI(0) = ST0; FPOP();
L_1090c827: /* 1090c827: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1090c829: fcom dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
/* 1090c82c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c82e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c831: je 0x1090c838 */
  if (zf) goto L_1090c838;
L_1090c833: /* 1090c833: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 1090c835: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
L_1090c838: /* 1090c838: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1090c83a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1090c83b: jmp 0x1090c7f2 */
  goto L_1090c7f2;
L_1090c83d: /* 1090c83d: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 1090c840: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 1090c842: fmul dword ptr [0x10920e8c] */
  ST0 = ST0 * (F32((uint32_t)(0x10920e8cu)));
/* 1090c848: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 1090c84b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 1090c84d: call dword ptr [0x10959bc4] */
  esp -= 4; W32(esp, 0x1090c853u); SPILL(); f_4e3d0f(); if (g_unwind) return; /* Core!?appRand@@YAHXZ */ RELOAD();
/* 1090c853: mov edi, eax */
  edi = eax;
/* 1090c855: xor esi, esi */
  esi = 0;
L_1090c857: /* 1090c857: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090c859: jge 0x1090c8a8 */
  if ((sf == of)) goto L_1090c8a8;
L_1090c85b: /* 1090c85b: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 1090c85e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c860: je 0x1090c88f */
  if (zf) goto L_1090c88f;
L_1090c862: /* 1090c862: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c864: je 0x1090c88f */
  if (zf) goto L_1090c88f;
L_1090c866: /* 1090c866: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 1090c869: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 1090c86c: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* 1090c86f: fcomp dword ptr [ebp - 0x4c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb4u)));
  FPOP();
/* 1090c872: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090c874: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c877: jne 0x1090c8a5 */
  if (!zf) goto L_1090c8a5;
L_1090c879: /* 1090c879: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 1090c87c: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 1090c87f: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 1090c882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c883: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c886: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090c88cu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090c88c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1090c88d: jmp 0x1090c857 */
  goto L_1090c857;
L_1090c88f: /* 1090c88f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 1090c892: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 1090c895: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 1090c898: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 1090c89b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c89c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c89f: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090c8a5u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_1090c8a5: /* 1090c8a5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1090c8a6: jmp 0x1090c857 */
  goto L_1090c857;
L_1090c8a8: /* 1090c8a8: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 1090c8ae: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090c8b4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090c8b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c8b5: lea edx, [ebp - 0x8ac] */
  edx = (uint32_t)(ebp + 0xfffff754u);
/* 1090c8bb: push 0x1092f230 */
  { uint32_t v = 0x1092f230u; esp -= 4; W32(esp, v); }
/* 1090c8c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c8c1: call dword ptr [0x10959da4] */
  esp -= 4; W32(esp, 0x1090c8c7u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 1090c8c7: mov eax, dword ptr [0x10959d98] */
  eax = R32((uint32_t)(0x10959d98u));
/* 1090c8cc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090c8ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c8d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c8d2: lea edx, [ebp - 0x8ac] */
  edx = (uint32_t)(ebp + 0xfffff754u);
/* 1090c8d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c8d9: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c8dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c8dd: call dword ptr [0x10959bc8] */
  esp -= 4; W32(esp, 0x1090c8e3u); SPILL(); f_4e1d39(); if (g_unwind) return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 1090c8e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c8e6: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090c8eb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c8ee: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1090c8f4u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1090c8f4: mov ecx, dword ptr [0x10959d98] */
  ecx = R32((uint32_t)(0x10959d98u));
/* 1090c8fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090c8fc: mov esi, dword ptr [0x10959bcc] */
  esi = R32((uint32_t)(0x10959bccu));
/* 1090c902: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c903: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c906: push 0x1092f1f0 */
  { uint32_t v = 0x1092f1f0u; esp -= 4; W32(esp, v); }
/* 1090c90b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c90c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090c90eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c90e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 1090c911: mov ebx, dword ptr [0x10959bf8] */
  ebx = R32((uint32_t)(0x10959bf8u));
/* 1090c917: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c91a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090c91b: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090c91e: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1090c922: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c925: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 1090c928: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1090c92c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 1090c92f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 1090c933: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 1090c936: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090c939: push 0x1092f178 */
  { uint32_t v = 0x1092f178u; esp -= 4; W32(esp, v); }
/* 1090c93e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c93f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090c941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c941: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c945: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c948: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 1090c94c: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090c952u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090c952: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c955: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090c959: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090c95fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090c95f: mov edx, dword ptr [0x10959d98] */
  edx = R32((uint32_t)(0x10959d98u));
/* 1090c965: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090c967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c968: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c96b: push 0x1092f1f0 */
  { uint32_t v = 0x1092f1f0u; esp -= 4; W32(esp, v); }
/* 1090c970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c971: call dword ptr [0x10959bc8] */
  esp -= 4; W32(esp, 0x1090c977u); SPILL(); f_4e1d39(); if (g_unwind) return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 1090c977: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c97a: lea edx, [ebp - 0xa8] */
  edx = (uint32_t)(ebp + 0xffffff58u);
/* 1090c980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c981: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c984: call dword ptr [0x10959ca4] */
  esp -= 4; W32(esp, 0x1090c98au); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090c98a: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 1090c98d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090c98f: je 0x1090c99e */
  if (zf) goto L_1090c99e;
L_1090c991: /* 1090c991: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 1090c994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c995: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c998: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090c99eu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
L_1090c99e: /* 1090c99e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 1090c9a1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090c9a4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090c9a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090c9a8: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 1090c9ab: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090c9ae: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1090c9b2: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c9b5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 1090c9b8: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 1090c9bc: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 1090c9bf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090c9c2: push 0x1092f100 */
  { uint32_t v = 0x1092f100u; esp -= 4; W32(esp, v); }
/* 1090c9c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090c9c8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090c9cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090c9ca: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090c9cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c9ce: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090c9d1: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 1090c9d5: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090c9dbu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090c9db: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c9de: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090c9e2: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090c9e8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090c9e8: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 1090c9ee: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090c9f4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090c9f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090c9f5: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090c9f8: push 0x1092f0a8 */
  { uint32_t v = 0x1092f0a8u; esp -= 4; W32(esp, v); }
/* 1090c9fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090c9fe: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090ca00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090ca00: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ca03: mov ecx, eax */
  ecx = eax;
/* 1090ca05: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 1090ca09: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090ca0fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090ca0f: mov ecx, dword ptr [0x10959d98] */
  ecx = R32((uint32_t)(0x10959d98u));
/* 1090ca15: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090ca17: mov edi, dword ptr [0x10959bc8] */
  edi = R32((uint32_t)(0x10959bc8u));
/* 1090ca1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090ca1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ca1f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 1090ca22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ca23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090ca25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090ca25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ca28: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090ca2b: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090ca2f: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090ca35u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090ca35: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090ca3a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090ca3d: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1090ca43u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1090ca43: mov ecx, dword ptr [0x10959d98] */
  ecx = R32((uint32_t)(0x10959d98u));
/* 1090ca49: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090ca4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090ca4c: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 1090ca4f: push 0x1092f060 */
  { uint32_t v = 0x1092f060u; esp -= 4; W32(esp, v); }
/* 1090ca54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ca55: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090ca57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090ca57: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ca5a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 1090ca5d: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090ca63u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090ca63: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 1090ca69: mov esi, eax */
  esi = eax;
/* 1090ca6b: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090ca71u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090ca71: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 1090ca74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ca75: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090ca78: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1090ca7c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090ca7f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 1090ca82: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1090ca86: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 1090ca89: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 1090ca8d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 1090ca90: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090ca93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ca94: push 0x1092f000 */
  { uint32_t v = 0x1092f000u; esp -= 4; W32(esp, v); }
/* 1090ca99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090ca9a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090ca9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090ca9c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ca9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090caa0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090caa3: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 1090caa7: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090caadu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090caad: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090cab0: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090cab4: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090cabau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090caba: mov edx, dword ptr [0x10959d98] */
  edx = R32((uint32_t)(0x10959d98u));
/* 1090cac0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090cac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cac3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090cac6: push 0x1092f060 */
  { uint32_t v = 0x1092f060u; esp -= 4; W32(esp, v); }
/* 1090cacb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090cacc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090caceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090cace: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090cad1: call dword ptr [0x10959d40] */
  esp -= 4; W32(esp, 0x1090cad7u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 1090cad7: push 0x1092eff4 */
  { uint32_t v = 0x1092eff4u; esp -= 4; W32(esp, v); }
/* 1090cadc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cadd: call dword ptr [0x10959cb4] */
  esp -= 4; W32(esp, 0x1090cae3u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 1090cae3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090cae6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090cae8: je 0x1090cb32 */
  if (zf) goto L_1090cb32;
L_1090caea: /* 1090caea: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 1090caed: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090caf0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090caf3: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090caf6: push 0x1092efec */
  { uint32_t v = 0x1092efecu; esp -= 4; W32(esp, v); }
/* 1090cafb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090cafc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090cafeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090cafe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090cb01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cb02: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090cb05: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 1090cb09: call dword ptr [0x10959ca4] */
  esp -= 4; W32(esp, 0x1090cb0fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090cb0f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090cb12: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090cb16: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090cb1cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090cb1c: mov eax, dword ptr [0x10959d98] */
  eax = R32((uint32_t)(0x10959d98u));
/* 1090cb21: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090cb23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090cb24: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090cb27: push 0x1092efd4 */
  { uint32_t v = 0x1092efd4u; esp -= 4; W32(esp, v); }
/* 1090cb2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090cb2d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090cb2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090cb2f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090cb32: /* 1090cb32: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090cb37: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090cb39: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090cb3b: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x1090cb3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090cb3e: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 1090cb44: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090cb4au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090cb4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cb4b: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 1090cb4e: push 0x1092ef88 */
  { uint32_t v = 0x1092ef88u; esp -= 4; W32(esp, v); }
/* 1090cb53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cb54: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090cb56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090cb56: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090cb59: mov ecx, eax */
  ecx = eax;
/* 1090cb5b: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 1090cb5f: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090cb65u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090cb65: mov ecx, dword ptr [0x10959d98] */
  ecx = R32((uint32_t)(0x10959d98u));
/* 1090cb6b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090cb6d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090cb6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cb71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cb73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cb75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cb77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090cb79: push 0x1092ef6c */
  { uint32_t v = 0x1092ef6cu; esp -= 4; W32(esp, v); }
/* 1090cb7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cb7f: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x1090cb82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090cb82: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090cb85: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090cb89: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090cb8fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090cb8f: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 1090cb92: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 1090cb96: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090cb9cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090cb9c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090cb9f: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090cba3: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090cba9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090cba9: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 1090cbaf: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090cbb3: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090cbb9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090cbb9: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 1090cbbf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090cbc3: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090cbc9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090cbc9: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 1090cbcf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090cbd3: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090cbd9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090cbd9: /* 1090cbd9: mov eax, dword ptr [0x1095a324] */
  eax = R32((uint32_t)(0x1095a324u));
/* 1090cbde: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090cbe0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090cbe2: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 1090cbe6: je 0x1090cbf0 */
  if (zf) goto L_1090cbf0;
L_1090cbe8: /* 1090cbe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cbea: call dword ptr [0x1095a3bc] */
  esp -= 4; W32(esp, 0x1090cbf0u); SPILL(); f_d814c9(); if (g_unwind) return; /* Window!?SetExec@WTerminal@@QAEXPAVFExec@@@Z */ RELOAD();
L_1090cbf0: /* 1090cbf0: mov edx, dword ptr [0x10959bf0] */
  edx = R32((uint32_t)(0x10959bf0u));
/* 1090cbf6: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 1090cbf9: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 1090cbfc: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 1090cc02: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090cc09: call 0x1090118b */
  esp -= 4; W32(esp, 0x1090cc0eu); SPILL(); f_1090118b(); if (g_unwind) return; RELOAD();
/* 1090cc0e: add esi, 0x38 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1090cc11: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 1090cc14: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090cc17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cc18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cc1a: mov ecx, esi */
  ecx = esi;
/* 1090cc1c: mov dword ptr [ebp - 4], 0x13 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 1090cc23: call 0x10901320 */
  esp -= 4; W32(esp, 0x1090cc28u); SPILL(); f_10901320(); if (g_unwind) return; RELOAD();
/* 1090cc28: mov ecx, esi */
  ecx = esi;
/* 1090cc2a: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 1090cc31: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090cc37u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090cc37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090cc3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090cc3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090cc3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090cc43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090cc44: mov esp, ebp */
  esp = ebp;
/* 1090cc46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090cc47: ret  */
  esp += 4; SPILL(); return;
}

void f_1090cc48(void) {
  LOAD_REGS();
L_1090cc48: /* 1090cc48: mov ecx, dword ptr [ebp - 0x84] */
  ecx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 1090cc4e: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090cc53: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 1090cc56: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 1090cc59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090cc5a: jmp 0x1090cc8e */
  goto L_1090cc8e;
L_1090cc8e: /* 1090cc8e: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090cc93u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090cc93: guest_badaddr(0x1090cc93); return;
}

void f_1090cc5c(void) {
  LOAD_REGS();
L_1090cc5c: /* 1090cc5c: push 0x109213f8 */
  { uint32_t v = 0x109213f8u; esp -= 4; W32(esp, v); }
/* 1090cc61: jmp 0x1090cc7c */
  goto L_1090cc7c;
L_1090cc7c: /* 1090cc7c: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090cc81: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090cc87u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090cc87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090cc8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cc8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cc8e: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090cc93u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090cc93: guest_badaddr(0x1090cc93); return;
}

void f_1090cc63(void) {
  LOAD_REGS();
L_1090cc63: /* 1090cc63: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 1090cc66: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090cc6b: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 1090cc6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090cc6f: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 1090cc72: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090cc77u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090cc77(); return;
}

void f_1090cc77(void) {
  LOAD_REGS();
L_1090cc77: /* 1090cc77: push 0x109213d4 */
  { uint32_t v = 0x109213d4u; esp -= 4; W32(esp, v); }
/* 1090cc7c: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090cc81: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090cc87u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090cc87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090cc8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cc8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cc8e: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090cc93u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090cc93: guest_badaddr(0x1090cc93); return;
}

void f_1090ce70(void) {
  LOAD_REGS();
L_1090ce70: /* 1090ce70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090ce71: mov ebp, esp */
  ebp = esp;
/* 1090ce73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090ce75: push 0x1091bd38 */
  { uint32_t v = 0x1091bd38u; esp -= 4; W32(esp, v); }
/* 1090ce7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090ce80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ce81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090ce88: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090ce8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090ce8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ce8d: mov esi, ecx */
  esi = ecx;
/* 1090ce8f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ce91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090ce92: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090ce95: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090ce9c: jne 0x1090ceb6 */
  if (!zf) goto L_1090ceb6;
L_1090ce9e: /* 1090ce9e: push 0x3e3 */
  { uint32_t v = 0x3e3u; esp -= 4; W32(esp, v); }
/* 1090cea3: push 0x10929ab0 */
  { uint32_t v = 0x10929ab0u; esp -= 4; W32(esp, v); }
/* 1090cea8: push 0x10929ad0 */
  { uint32_t v = 0x10929ad0u; esp -= 4; W32(esp, v); }
/* 1090cead: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x1090ceb3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 1090ceb3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090ceb6: /* 1090ceb6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090ceb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ceb9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 1090cebc: call 0x109013de */
  esp -= 4; W32(esp, 0x1090cec1u); SPILL(); f_109013de(); if (g_unwind) return; RELOAD();
/* 1090cec1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_1090cec5: /* 1090cec5: mov eax, dword ptr [0x10959b18] */
  SPILL(); host_frame_loop(); if (g_unwind) return; RELOAD(); goto L_1090cee4;
/* 1090ceca: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090cecd: je 0x1090cee4 */
  if (zf) goto L_1090cee4;
L_1090cecf: /* 1090cecf: mov ecx, dword ptr [0x10959b1c] */
  ecx = R32((uint32_t)(0x10959b1cu));
/* 1090ced5: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ced8: jne 0x1090cee4 */
  if (!zf) goto L_1090cee4;
L_1090ceda: /* 1090ceda: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 1090cedd: call 0x1090117c */
  esp -= 4; W32(esp, 0x1090cee2u); SPILL(); f_1090117c(); if (g_unwind) return; RELOAD();
/* 1090cee2: jmp 0x1090cec5 */
  goto L_1090cec5;
L_1090cee4: /* 1090cee4: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 1090cee7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090ceeb: call 0x109012ee */
  esp -= 4; W32(esp, 0x1090cef0u); SPILL(); f_109012ee(); if (g_unwind) return; RELOAD();
/* 1090cef0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090cef3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090cef4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090cef5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090cefc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090cefd: mov esp, ebp */
  esp = ebp;
/* 1090ceff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090cf00: ret  */
  esp += 4; SPILL(); return;
}

void f_1090cf01(void) {
  LOAD_REGS();
L_1090cf01: /* 1090cf01: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090cf04: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090cf09: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090cf0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cf0d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090cf10: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090cf15u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090cf15(); return;
}

void f_1090cf15(void) {
  LOAD_REGS();
L_1090cf15: /* 1090cf15: push 0x1092141c */
  { uint32_t v = 0x1092141cu; esp -= 4; W32(esp, v); }
/* 1090cf1a: push 0x10929ad8 */
  { uint32_t v = 0x10929ad8u; esp -= 4; W32(esp, v); }
/* 1090cf1f: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090cf25u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090cf25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090cf28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cf2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090cf2c: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090cf31u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090cf31: guest_badaddr(0x1090cf31); return;
}

void f_1090cf80(void) {
  LOAD_REGS();
L_1090cf80: /* 1090cf80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090cf81: mov ebp, esp */
  ebp = esp;
/* 1090cf83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090cf85: push 0x1091bdba */
  { uint32_t v = 0x1091bdbau; esp -= 4; W32(esp, v); }
/* 1090cf8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090cf90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090cf91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090cf98: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090cf9b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1090cf9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090cf9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090cfa0: xor esi, esi */
  esi = 0;
/* 1090cfa2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090cfa4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090cfa5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090cfa8: mov edi, ecx */
  edi = ecx;
/* 1090cfaa: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 1090cfad: jne 0x1090cfc7 */
  if (!zf) goto L_1090cfc7;
L_1090cfaf: /* 1090cfaf: push 0xe0 */
  { uint32_t v = 0xe0u; esp -= 4; W32(esp, v); }
/* 1090cfb4: push 0x1092e7b0 */
  { uint32_t v = 0x1092e7b0u; esp -= 4; W32(esp, v); }
/* 1090cfb9: push 0x1092e7a8 */
  { uint32_t v = 0x1092e7a8u; esp -= 4; W32(esp, v); }
/* 1090cfbe: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x1090cfc4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 1090cfc4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090cfc7: /* 1090cfc7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1090cfca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090cfcb: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x1090cfd1u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 1090cfd1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090cfd4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090cfd6: je 0x1090d0b8 */
  if (zf) goto L_1090d0b8;
L_1090cfdc: /* 1090cfdc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090cfdd: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1090cfe0: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090cfe6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090cfe6: push 0x1092f3a0 */
  { uint32_t v = 0x1092f3a0u; esp -= 4; W32(esp, v); }
/* 1090cfeb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090cfee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090cfef: mov ecx, eax */
  ecx = eax;
/* 1090cff1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090cff5: call dword ptr [0x10959b94] */
  esp -= 4; W32(esp, 0x1090cffbu); SPILL(); f_4e2c48(); if (g_unwind) return; /* Core!??DFString@@QBE?AV0@PBG@Z */ RELOAD();
/* 1090cffb: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1090cffe: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090d002: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090d008u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090d008: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090d00b: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090d011u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090d011: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 1090d013: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d014: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d017: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 1090d01a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d01b: mov ecx, edi */
  ecx = edi;
/* 1090d01d: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x1090d020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d020: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
L_1090d024: /* 1090d024: cmp esi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090d027: jge 0x1090d0d6 */
  if ((sf == of)) goto L_1090d0d6;
L_1090d02d: /* 1090d02d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090d02e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090d031: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090d037u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090d037: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1090d03a: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 1090d03d: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 1090d040: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d041: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090d044: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d045: mov ecx, eax */
  ecx = eax;
/* 1090d047: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090d04b: call dword ptr [0x10959b98] */
  esp -= 4; W32(esp, 0x1090d051u); SPILL(); f_4e3594(); if (g_unwind) return; /* Core!??DFString@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 1090d051: mov ecx, eax */
  ecx = eax;
/* 1090d053: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090d057: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090d05du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090d05d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 1090d05f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d061: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d064: mov ecx, edi */
  ecx = edi;
/* 1090d066: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x1090d069u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d069: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d06b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090d06e: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 1090d071: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090d075: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090d07bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090d07b: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090d07e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090d082: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090d088u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090d088: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d08a: je 0x1090d0cd */
  if (zf) goto L_1090d0cd;
L_1090d08c: /* 1090d08c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
L_1090d090: /* 1090d090: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090d093: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d094: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d096: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1090d099: call 0x10901320 */
  esp -= 4; W32(esp, 0x1090d09eu); SPILL(); f_10901320(); if (g_unwind) return; RELOAD();
/* 1090d09e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1090d0a1: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090d0a5: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090d0abu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090d0ab: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090d0ae: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090d0b2: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090d0b8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090d0b8: /* 1090d0b8: xor eax, eax */
  eax = 0;
/* 1090d0ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090d0bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090d0c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090d0c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d0c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090d0c7: mov esp, ebp */
  esp = ebp;
/* 1090d0c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090d0ca: ret 0xc */
  esp += 16; SPILL(); return;
L_1090d0cd: /* 1090d0cd: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1090d0d0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1090d0d1: jmp 0x1090d024 */
  goto L_1090d024;
L_1090d0d6: /* 1090d0d6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090d0d9: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090d0dfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090d0df: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 1090d0e1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d0e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d0e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d0e6: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 1090d0e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d0ea: mov ecx, edi */
  ecx = edi;
/* 1090d0ec: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x1090d0efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d0ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d0f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1090d0f3: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 1090d0f7: call 0x1090114f */
  esp -= 4; W32(esp, 0x1090d0fcu); SPILL(); f_1090114f(); if (g_unwind) return; RELOAD();
/* 1090d0fc: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 1090d0ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d102: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090d105: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 1090d109: call 0x10901320 */
  esp -= 4; W32(esp, 0x1090d10eu); SPILL(); f_10901320(); if (g_unwind) return; RELOAD();
/* 1090d10e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090d111: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090d115: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090d11bu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090d11b: xor esi, esi */
  esi = 0;
/* 1090d11d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1090d120: /* 1090d120: cmp esi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090d123: jge 0x1090d193 */
  if ((sf == of)) goto L_1090d193;
L_1090d125: /* 1090d125: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090d126: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090d129: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090d12fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090d12f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1090d132: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 1090d135: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 1090d138: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d139: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090d13c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d13d: mov ecx, eax */
  ecx = eax;
/* 1090d13f: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 1090d143: call dword ptr [0x10959b98] */
  esp -= 4; W32(esp, 0x1090d149u); SPILL(); f_4e3594(); if (g_unwind) return; /* Core!??DFString@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 1090d149: mov ecx, eax */
  ecx = eax;
/* 1090d14b: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 1090d14f: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090d155u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090d155: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 1090d157: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d159: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d15b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d15c: mov ecx, edi */
  ecx = edi;
/* 1090d15e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x1090d161u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d163: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090d166: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 1090d169: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 1090d16d: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090d173u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090d173: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090d176: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090d17a: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090d180u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090d180: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d182: je 0x1090d18d */
  if (zf) goto L_1090d18d;
L_1090d184: /* 1090d184: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 1090d188: jmp 0x1090d090 */
  goto L_1090d090;
L_1090d18d: /* 1090d18d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1090d190: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1090d191: jmp 0x1090d120 */
  goto L_1090d120;
L_1090d193: /* 1090d193: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090d196: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 1090d198: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d19a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d19b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090d19c: mov ecx, edi */
  ecx = edi;
/* 1090d19e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x1090d1a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d1a1: mov esi, eax */
  esi = eax;
/* 1090d1a3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090d1a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d1a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d1a9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1090d1ac: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 1090d1b0: call 0x10901320 */
  esp -= 4; W32(esp, 0x1090d1b5u); SPILL(); f_10901320(); if (g_unwind) return; RELOAD();
/* 1090d1b5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1090d1b8: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090d1bc: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090d1c2u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090d1c2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090d1c5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090d1c9: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090d1cfu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090d1cf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090d1d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090d1d3: mov eax, esi */
  eax = esi;
/* 1090d1d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d1d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090d1dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090d1de: mov esp, ebp */
  esp = ebp;
/* 1090d1e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090d1e1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_1090d1e4(void) {
  LOAD_REGS();
L_1090d1e4: /* 1090d1e4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090d1e7: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090d1ec: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090d1ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d1f0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090d1f3: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090d1f8u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090d1f8(); return;
}

void f_1090d1f8(void) {
  LOAD_REGS();
L_1090d1f8: /* 1090d1f8: push 0x10921438 */
  { uint32_t v = 0x10921438u; esp -= 4; W32(esp, v); }
/* 1090d1fd: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090d202: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090d208u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090d208: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d20b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d20d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d20f: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090d214u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090d214: guest_badaddr(0x1090d214); return;
}

void f_1090d2d0(void) {
  LOAD_REGS();
L_1090d2d0: /* 1090d2d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090d2d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d2d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d2d3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1090d2d7: mov esi, ecx */
  esi = ecx;
/* 1090d2d9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d2db: je 0x1090d321 */
  if (zf) goto L_1090d321;
L_1090d2dd: /* 1090d2dd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1090d2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d2e1: call 0x10901258 */
  esp -= 4; W32(esp, 0x1090d2e6u); SPILL(); f_10901258(); if (g_unwind) return; RELOAD();
/* 1090d2e6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1090d2e9: xor ebx, ebx */
  ebx = 0;
/* 1090d2eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090d2ed: jle 0x1090d321 */
  if ((zf || sf != of)) goto L_1090d321;
L_1090d2ef: /* 1090d2ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090d2f0: xor ebp, ebp */
  ebp = 0;
L_1090d2f2: /* 1090d2f2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1090d2f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d2f6: mov ecx, esi */
  ecx = esi;
/* 1090d2f8: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090d2feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090d2fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090d300: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 1090d303: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 1090d306: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d308: je 0x1090d315 */
  if (zf) goto L_1090d315;
L_1090d30a: /* 1090d30a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1090d30c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090d30e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d30f: call dword ptr [0x10959bb8] */
  esp -= 4; W32(esp, 0x1090d315u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_1090d315: /* 1090d315: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1090d318: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090d319: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1090d31c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090d31e: jl 0x1090d2f2 */
  if ((sf != of)) goto L_1090d2f2;
L_1090d320: /* 1090d320: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_1090d321: /* 1090d321: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090d322: mov eax, esi */
  eax = esi;
/* 1090d324: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d325: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090d326: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090d350(void) {
  LOAD_REGS();
L_1090d350: /* 1090d350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d351: mov esi, ecx */
  esi = ecx;
/* 1090d353: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090d356: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d357: xor edi, edi */
  edi = 0;
/* 1090d359: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090d35b: jle 0x1090d376 */
  if ((zf || sf != of)) goto L_1090d376;
L_1090d35d: /* 1090d35d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090d35e: xor ebx, ebx */
  ebx = 0;
L_1090d360: /* 1090d360: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1090d362: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090d364: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090d36au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090d36a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090d36d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1090d36e: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090d371: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090d373: jl 0x1090d360 */
  if ((sf != of)) goto L_1090d360;
L_1090d375: /* 1090d375: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_1090d376: /* 1090d376: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1090d37a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d37b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1090d37d: mov ecx, esi */
  ecx = esi;
/* 1090d37f: call dword ptr [0x10959b90] */
  esp -= 4; W32(esp, 0x1090d385u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 1090d385: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090d386: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d387: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090d3a0(void) {
  LOAD_REGS();
L_1090d3a0: /* 1090d3a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090d3a1: mov ebp, esp */
  ebp = esp;
/* 1090d3a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090d3a5: push 0x1091bdf0 */
  { uint32_t v = 0x1091bdf0u; esp -= 4; W32(esp, v); }
/* 1090d3aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090d3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d3b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090d3b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090d3bb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1090d3be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090d3bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d3c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d3c1: xor edi, edi */
  edi = 0;
/* 1090d3c3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d3c5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090d3c8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1090d3cb: je 0x1090d3f1 */
  if (zf) goto L_1090d3f1;
L_1090d3cd: /* 1090d3cd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1090d3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d3d1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090d3d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d3d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d3d6: call 0x1090105f */
  esp -= 4; W32(esp, 0x1090d3dbu); SPILL(); f_1090105f(); if (g_unwind) return; RELOAD();
L_1090d3db: /* 1090d3db: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* 1090d3de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090d3e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090d3e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090d3e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d3ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090d3eb: mov esp, ebp */
  esp = ebp;
/* 1090d3ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090d3ee: ret 0xc */
  esp += 16; SPILL(); return;
L_1090d3f1: /* 1090d3f1: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 1090d3f6: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d3f8: je 0x1090d406 */
  if (zf) goto L_1090d406;
L_1090d3fa: /* 1090d3fa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1090d3fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d3fe: call dword ptr [0x10959f8c] */
  esp -= 4; W32(esp, 0x1090d404u); SPILL(); call_ind(R32(0x10959f8cu)); if (g_unwind) return; /* KERNEL32!RemoveDirectoryW */ RELOAD();
/* 1090d404: jmp 0x1090d44e */
  goto L_1090d44e;
L_1090d406: /* 1090d406: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 1090d409: mov ebx, dword ptr [0x10959d90] */
  ebx = R32((uint32_t)(0x10959d90u));
/* 1090d40f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d410: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090d412u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d412: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d415: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d417: je 0x1090d435 */
  if (zf) goto L_1090d435;
L_1090d419: /* 1090d419: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d41a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090d41cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d41c: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090d41f: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090d422: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090d425: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d428: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090d42b: call 0x10918780 */
  esp -= 4; W32(esp, 0x1090d430u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 1090d430: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090d433: mov edi, esp */
  edi = esp;
L_1090d435: /* 1090d435: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d436: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090d438u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d438: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d43c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d43d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d43e: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x1090d444u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 1090d444: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d447: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d448: call dword ptr [0x10959f90] */
  esp -= 4; W32(esp, 0x1090d44eu); SPILL(); call_ind(R32(0x10959f90u)); if (g_unwind) return; /* KERNEL32!RemoveDirectoryA */ RELOAD();
L_1090d44e: /* 1090d44e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d450: jne 0x1090d46b */
  if (!zf) goto L_1090d46b;
L_1090d452: /* 1090d452: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090d455: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d457: jne 0x1090d464 */
  if (!zf) goto L_1090d464;
L_1090d459: /* 1090d459: call dword ptr [0x10959f38] */
  esp -= 4; W32(esp, 0x1090d45fu); SPILL(); call_ind(R32(0x10959f38u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 1090d45f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d462: je 0x1090d46b */
  if (zf) goto L_1090d46b;
L_1090d464: /* 1090d464: xor eax, eax */
  eax = 0;
/* 1090d466: jmp 0x1090d3db */
  goto L_1090d3db;
L_1090d46b: /* 1090d46b: mov eax, 1 */
  eax = 0x1u;
/* 1090d470: jmp 0x1090d3db */
  goto L_1090d3db;
}

void f_1090d475(void) {
  LOAD_REGS();
L_1090d475: /* 1090d475: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090d478: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090d47d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090d480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d481: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090d484: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090d489u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090d489(); return;
}

void f_1090d489(void) {
  LOAD_REGS();
L_1090d489: /* 1090d489: push 0x10921490 */
  { uint32_t v = 0x10921490u; esp -= 4; W32(esp, v); }
/* 1090d48e: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090d493: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090d499u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090d499: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d49c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d49e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d4a0: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090d4a5u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090d4a5: guest_badaddr(0x1090d4a5); return;
}

void f_1090d500(void) {
  LOAD_REGS();
L_1090d500: /* 1090d500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090d501: mov ebp, esp */
  ebp = esp;
/* 1090d503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090d505: push 0x1091be28 */
  { uint32_t v = 0x1091be28u; esp -= 4; W32(esp, v); }
/* 1090d50a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090d510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090d518: sub esp, 0x3ac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090d51e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090d51f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d520: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d521: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 1090d528: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090d52b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090d52e: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090d535: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x1090d53bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 1090d53b: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 1090d540: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d543: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090d547: je 0x1090d5eb */
  if (zf) goto L_1090d5eb;
L_1090d54d: /* 1090d54d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090d550: lea ecx, [ebp - 0x278] */
  ecx = (uint32_t)(ebp + 0xfffffd88u);
/* 1090d556: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d558: call dword ptr [0x10959f78] */
  esp -= 4; W32(esp, 0x1090d55eu); SPILL(); call_ind(R32(0x10959f78u)); if (g_unwind) return; /* KERNEL32!FindFirstFileW */ RELOAD();
/* 1090d55e: mov edi, eax */
  edi = eax;
/* 1090d560: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d563: je 0x1090d70a */
  if (zf) goto L_1090d70a;
L_1090d569: /* 1090d569: mov esi, dword ptr [0x10959d68] */
  esi = R32((uint32_t)(0x10959d68u));
/* 1090d56f: nop  */
L_1090d570: /* 1090d570: lea eax, [ebp - 0x24c] */
  eax = (uint32_t)(ebp + 0xfffffdb4u);
/* 1090d576: push 0x1092f3ac */
  { uint32_t v = 0x1092f3acu; esp -= 4; W32(esp, v); }
/* 1090d57b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d57c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090d57eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d57e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d583: je 0x1090d5d4 */
  if (zf) goto L_1090d5d4;
L_1090d585: /* 1090d585: lea ecx, [ebp - 0x24c] */
  ecx = (uint32_t)(ebp + 0xfffffdb4u);
/* 1090d58b: push 0x1092f3a4 */
  { uint32_t v = 0x1092f3a4u; esp -= 4; W32(esp, v); }
/* 1090d590: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d591: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090d593u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d593: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d596: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d598: je 0x1090d5d4 */
  if (zf) goto L_1090d5d4;
L_1090d59a: /* 1090d59a: test byte ptr [ebp - 0x278], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffd88u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d5a1: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 1090d5a4: jne 0x1090d5a9 */
  if (!zf) goto L_1090d5a9;
L_1090d5a6: /* 1090d5a6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_1090d5a9: /* 1090d5a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d5ab: je 0x1090d5d4 */
  if (zf) goto L_1090d5d4;
L_1090d5ad: /* 1090d5ad: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1090d5af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d5b1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090d5b4: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090d5bau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090d5ba: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 1090d5bd: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090d5c0: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 1090d5c3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d5c5: je 0x1090d5d4 */
  if (zf) goto L_1090d5d4;
L_1090d5c7: /* 1090d5c7: lea edx, [ebp - 0x24c] */
  edx = (uint32_t)(ebp + 0xfffffdb4u);
/* 1090d5cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d5ce: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090d5d4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
L_1090d5d4: /* 1090d5d4: lea eax, [ebp - 0x278] */
  eax = (uint32_t)(ebp + 0xfffffd88u);
/* 1090d5da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d5db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d5dc: call dword ptr [0x10959f7c] */
  esp -= 4; W32(esp, 0x1090d5e2u); SPILL(); call_ind(R32(0x10959f7cu)); if (g_unwind) return; /* KERNEL32!FindNextFileW */ RELOAD();
/* 1090d5e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d5e4: jne 0x1090d570 */
  if (!zf) goto L_1090d570;
L_1090d5e6: /* 1090d5e6: jmp 0x1090d6fe */
  goto L_1090d6fe;
L_1090d5eb: /* 1090d5eb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 1090d5ee: mov ebx, dword ptr [0x10959d90] */
  ebx = R32((uint32_t)(0x10959d90u));
/* 1090d5f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d5f5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090d5f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d5f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d5fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d5fc: jne 0x1090d602 */
  if (!zf) goto L_1090d602;
L_1090d5fe: /* 1090d5fe: xor edi, edi */
  edi = 0;
/* 1090d600: jmp 0x1090d61e */
  goto L_1090d61e;
L_1090d602: /* 1090d602: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d603: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090d605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d605: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090d608: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090d60b: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090d60e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d611: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090d614: call 0x10918780 */
  esp -= 4; W32(esp, 0x1090d619u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 1090d619: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090d61c: mov edi, esp */
  edi = esp;
L_1090d61e: /* 1090d61e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d61f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090d621u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d621: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d625: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d626: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d627: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x1090d62du); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 1090d62d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d630: lea ecx, [ebp - 0x3b8] */
  ecx = (uint32_t)(ebp + 0xfffffc48u);
/* 1090d636: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d637: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d638: call dword ptr [0x10959f80] */
  esp -= 4; W32(esp, 0x1090d63eu); SPILL(); call_ind(R32(0x10959f80u)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* 1090d63e: mov edi, eax */
  edi = eax;
/* 1090d640: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d643: je 0x1090d70a */
  if (zf) goto L_1090d70a;
L_1090d649: /* 1090d649: mov esi, dword ptr [0x10959d68] */
  esi = R32((uint32_t)(0x10959d68u));
/* 1090d64f: nop  */
L_1090d650: /* 1090d650: lea edx, [ebp - 0x38c] */
  edx = (uint32_t)(ebp + 0xfffffc74u);
/* 1090d656: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d657: call dword ptr [0x10959b88] */
  esp -= 4; W32(esp, 0x1090d65du); SPILL(); f_4e3c9c(); if (g_unwind) return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */ RELOAD();
/* 1090d65d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d660: cmp eax, 0x104 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090d665: jl 0x1090d66c */
  if ((sf != of)) goto L_1090d66c;
L_1090d667: /* 1090d667: mov eax, 0x104 */
  eax = 0x104u;
L_1090d66c: /* 1090d66c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d66d: lea eax, [ebp - 0x38c] */
  eax = (uint32_t)(ebp + 0xfffffc74u);
/* 1090d673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d674: lea ecx, [ebp - 0x230] */
  ecx = (uint32_t)(ebp + 0xfffffdd0u);
/* 1090d67a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d67b: call dword ptr [0x10959b8c] */
  esp -= 4; W32(esp, 0x1090d681u); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* 1090d681: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d684: lea edx, [ebp - 0x230] */
  edx = (uint32_t)(ebp + 0xfffffdd0u);
/* 1090d68a: push 0x1092f3ac */
  { uint32_t v = 0x1092f3acu; esp -= 4; W32(esp, v); }
/* 1090d68f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d690: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090d692u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d692: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d695: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d697: je 0x1090d6e8 */
  if (zf) goto L_1090d6e8;
L_1090d699: /* 1090d699: lea eax, [ebp - 0x230] */
  eax = (uint32_t)(ebp + 0xfffffdd0u);
/* 1090d69f: push 0x1092f3a4 */
  { uint32_t v = 0x1092f3a4u; esp -= 4; W32(esp, v); }
/* 1090d6a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d6a5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090d6a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090d6a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d6aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d6ac: je 0x1090d6e8 */
  if (zf) goto L_1090d6e8;
L_1090d6ae: /* 1090d6ae: test byte ptr [ebp - 0x3b8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffc48u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d6b5: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 1090d6b8: jne 0x1090d6bd */
  if (!zf) goto L_1090d6bd;
L_1090d6ba: /* 1090d6ba: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_1090d6bd: /* 1090d6bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d6bf: je 0x1090d6e8 */
  if (zf) goto L_1090d6e8;
L_1090d6c1: /* 1090d6c1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1090d6c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d6c5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090d6c8: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090d6ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090d6ce: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090d6d1: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 1090d6d4: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 1090d6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d6d9: je 0x1090d6e8 */
  if (zf) goto L_1090d6e8;
L_1090d6db: /* 1090d6db: lea eax, [ebp - 0x230] */
  eax = (uint32_t)(ebp + 0xfffffdd0u);
/* 1090d6e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d6e2: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090d6e8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
L_1090d6e8: /* 1090d6e8: lea ecx, [ebp - 0x3b8] */
  ecx = (uint32_t)(ebp + 0xfffffc48u);
/* 1090d6ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d6ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d6f0: call dword ptr [0x10959f84] */
  esp -= 4; W32(esp, 0x1090d6f6u); SPILL(); call_ind(R32(0x10959f84u)); if (g_unwind) return; /* KERNEL32!FindNextFileA */ RELOAD();
/* 1090d6f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d6f8: jne 0x1090d650 */
  if (!zf) goto L_1090d650;
L_1090d6fe: /* 1090d6fe: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090d701: je 0x1090d70a */
  if (zf) goto L_1090d70a;
L_1090d703: /* 1090d703: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d704: call dword ptr [0x10959f88] */
  esp -= 4; W32(esp, 0x1090d70au); SPILL(); call_ind(R32(0x10959f88u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_1090d70a: /* 1090d70a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 1090d70d: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090d710: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d711: mov ecx, esi */
  ecx = esi;
/* 1090d713: call 0x109010a0 */
  esp -= 4; W32(esp, 0x1090d718u); SPILL(); f_109010a0(); if (g_unwind) return; RELOAD();
/* 1090d718: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 1090d71c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090d71f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d720: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d722: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090d725: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090d729: call 0x10901320 */
  esp -= 4; W32(esp, 0x1090d72eu); SPILL(); f_10901320(); if (g_unwind) return; RELOAD();
/* 1090d72e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090d731: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090d735: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090d73bu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090d73b: mov eax, esi */
  eax = esi;
/* 1090d73d: lea esp, [ebp - 0x3c4] */
  esp = (uint32_t)(ebp + 0xfffffc3cu);
/* 1090d743: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090d746: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090d74d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090d74e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d74f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090d750: mov esp, ebp */
  esp = ebp;
/* 1090d752: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090d753: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1090d756(void) {
  LOAD_REGS();
L_1090d756: /* 1090d756: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 1090d759: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090d75e: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 1090d761: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090d762: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 1090d765: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090d76au); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090d76a(); return;
}

void f_1090d76a(void) {
  LOAD_REGS();
L_1090d76a: /* 1090d76a: push 0x109214e8 */
  { uint32_t v = 0x109214e8u; esp -= 4; W32(esp, v); }
/* 1090d76f: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090d774: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090d77au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090d77a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d77d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d77f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d781: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090d786u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090d786: guest_badaddr(0x1090d786); return;
}

void f_1090d840(void) {
  LOAD_REGS();
L_1090d840: /* 1090d840: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090d842: push 0x1091be49 */
  { uint32_t v = 0x1091be49u; esp -= 4; W32(esp, v); }
/* 1090d847: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090d84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d84e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090d855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d856: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090d857: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d858: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090d859: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 1090d85d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1090d860: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1090d862: mov esi, ecx */
  esi = ecx;
/* 1090d864: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d865: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 1090d869: call dword ptr [0x10959b84] */
  esp -= 4; W32(esp, 0x1090d86fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 1090d86f: xor ebx, ebx */
  ebx = 0;
/* 1090d871: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 1090d874: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090d877: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 1090d87b: jle 0x1090d8af */
  if ((zf || sf != of)) goto L_1090d8af;
L_1090d87d: /* 1090d87d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090d87e: xor ebp, ebp */
  ebp = 0;
L_1090d880: /* 1090d880: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 1090d882: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090d884: mov ecx, esi */
  ecx = esi;
/* 1090d886: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090d88cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090d88c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090d88e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 1090d891: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 1090d894: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d896: je 0x1090d8a3 */
  if (zf) goto L_1090d8a3;
L_1090d898: /* 1090d898: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1090d89a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090d89c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d89d: call dword ptr [0x10959bb8] */
  esp -= 4; W32(esp, 0x1090d8a3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_1090d8a3: /* 1090d8a3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1090d8a6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090d8a7: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1090d8aa: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090d8ac: jl 0x1090d880 */
  if ((sf != of)) goto L_1090d880;
L_1090d8ae: /* 1090d8ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_1090d8af: /* 1090d8af: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1090d8b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090d8b4: mov eax, esi */
  eax = esi;
/* 1090d8b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d8b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090d8b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090d8bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d8c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090d900(void) {
  LOAD_REGS();
L_1090d900: /* 1090d900: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090d902: push 0x1091be69 */
  { uint32_t v = 0x1091be69u; esp -= 4; W32(esp, v); }
/* 1090d907: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090d90d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d90e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090d915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d917: mov esi, ecx */
  esi = ecx;
/* 1090d919: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090d91d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090d920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d921: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090d923: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 1090d92b: call 0x109010d2 */
  esp -= 4; W32(esp, 0x1090d930u); SPILL(); f_109010d2(); if (g_unwind) return; RELOAD();
/* 1090d930: mov ecx, esi */
  ecx = esi;
/* 1090d932: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090d93a: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090d940u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090d940: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090d944: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d945: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090d94c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d94f: ret  */
  esp += 4; SPILL(); return;
}

void f_1090d970(void) {
  LOAD_REGS();
L_1090d970: /* 1090d970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090d972: push 0x1091be88 */
  { uint32_t v = 0x1091be88u; esp -= 4; W32(esp, v); }
/* 1090d977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090d97d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d97e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090d985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090d986: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090d987: mov esi, ecx */
  esi = ecx;
/* 1090d989: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090d98d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1090d990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090d992: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1090d99a: je 0x1090d9aa */
  if (zf) goto L_1090d9aa;
L_1090d99c: /* 1090d99c: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090d9a2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090d9a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090d9a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090d9a7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090d9aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090d9aa: /* 1090d9aa: mov ecx, esi */
  ecx = esi;
/* 1090d9ac: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 1090d9b3: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 1090d9ba: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090d9c2: call 0x109011a4 */
  esp -= 4; W32(esp, 0x1090d9c7u); SPILL(); f_109011a4(); if (g_unwind) return; RELOAD();
/* 1090d9c7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090d9cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090d9cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090d9d3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090d9d6: ret  */
  esp += 4; SPILL(); return;
}

void f_1090da00(void) {
  LOAD_REGS();
L_1090da00: /* 1090da00: jmp 0x10901203 */
  SPILL(); f_10901203(); return;
}

void f_1090da20(void) {
  LOAD_REGS();
L_1090da20: /* 1090da20: jmp 0x10901203 */
  SPILL(); f_10901203(); return;
}

void f_1090da40(void) {
  LOAD_REGS();
L_1090da40: /* 1090da40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090da42: push 0x1091beac */
  { uint32_t v = 0x1091beacu; esp -= 4; W32(esp, v); }
/* 1090da47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090da4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090da4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090da55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090da56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090da57: mov esi, ecx */
  esi = ecx;
/* 1090da59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090da5d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 1090da60: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1090da68: call 0x10901203 */
  esp -= 4; W32(esp, 0x1090da6du); SPILL(); f_10901203(); if (g_unwind) return; RELOAD();
/* 1090da6d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 1090da70: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090da78: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090da7eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090da7e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090da82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090da83: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090da8a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090da8d: ret  */
  esp += 4; SPILL(); return;
}

void f_1090dab0(void) {
  LOAD_REGS();
L_1090dab0: /* 1090dab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090dab1: mov esi, ecx */
  esi = ecx;
/* 1090dab3: call 0x10901091 */
  esp -= 4; W32(esp, 0x1090dab8u); SPILL(); f_10901091(); if (g_unwind) return; RELOAD();
/* 1090dab8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090dabd: je 0x1090dacc */
  if (zf) goto L_1090dacc;
L_1090dabf: /* 1090dabf: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 1090dac4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090dac6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090dac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090dac9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090daccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090dacc: /* 1090dacc: mov eax, esi */
  eax = esi;
/* 1090dace: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090dacf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090daf0(void) {
  LOAD_REGS();
L_1090daf0: /* 1090daf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090daf1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 1090daf5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090daf7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090daf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090daf9: mov esi, dword ptr [0x10959d64] */
  esi = R32((uint32_t)(0x10959d64u));
/* 1090daff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090db00: mov ebp, ecx */
  ebp = ecx;
/* 1090db02: jge 0x1090db18 */
  if ((sf == of)) goto L_1090db18;
L_1090db04: /* 1090db04: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 1090db09: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090db0e: push 0x1092ebc8 */
  { uint32_t v = 0x1092ebc8u; esp -= 4; W32(esp, v); }
/* 1090db13: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090db15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090db15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090db18: /* 1090db18: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090db1b: jle 0x1090db31 */
  if ((zf || sf != of)) goto L_1090db31;
L_1090db1d: /* 1090db1d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 1090db22: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090db27: push 0x1092ebb4 */
  { uint32_t v = 0x1092ebb4u; esp -= 4; W32(esp, v); }
/* 1090db2c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090db2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090db2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090db31: /* 1090db31: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1090db35: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 1090db38: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090db3b: jle 0x1090db51 */
  if ((zf || sf != of)) goto L_1090db51;
L_1090db3d: /* 1090db3d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 1090db42: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090db47: push 0x1092eb98 */
  { uint32_t v = 0x1092eb98u; esp -= 4; W32(esp, v); }
/* 1090db4c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090db4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090db4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090db51: /* 1090db51: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090db53: jge 0x1090db70 */
  if ((sf == of)) goto L_1090db70;
L_1090db55: /* 1090db55: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 1090db58: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1090db5b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1090db5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1090db60: /* 1090db60: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 1090db63: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090db65: call 0x10901091 */
  esp -= 4; W32(esp, 0x1090db6au); SPILL(); f_10901091(); if (g_unwind) return; RELOAD();
/* 1090db6a: add esi, 0x24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1090db6d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1090db6e: jne 0x1090db60 */
  if (!zf) goto L_1090db60;
L_1090db70: /* 1090db70: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1090db74: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 1090db76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090db77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090db78: mov ecx, ebp */
  ecx = ebp;
/* 1090db7a: call dword ptr [0x10959c4c] */
  esp -= 4; W32(esp, 0x1090db80u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 1090db80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090db81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090db82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090db83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090db84: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090dbc0(void) {
  LOAD_REGS();
L_1090dbc0: /* 1090dbc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090dbc2: push 0x1091bec9 */
  { uint32_t v = 0x1091bec9u; esp -= 4; W32(esp, v); }
/* 1090dbc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090dbcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090dbce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090dbd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090dbd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090dbd7: mov esi, ecx */
  esi = ecx;
/* 1090dbd9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090dbdd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090dbe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090dbe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090dbe3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 1090dbeb: call 0x10901069 */
  esp -= 4; W32(esp, 0x1090dbf0u); SPILL(); f_10901069(); if (g_unwind) return; RELOAD();
/* 1090dbf0: mov ecx, esi */
  ecx = esi;
/* 1090dbf2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090dbfa: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090dc00u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090dc00: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090dc04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090dc05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090dc0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090dc0f: ret  */
  esp += 4; SPILL(); return;
}

void f_1090dc30(void) {
  LOAD_REGS();
L_1090dc30: /* 1090dc30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090dc32: push 0x1091bee8 */
  { uint32_t v = 0x1091bee8u; esp -= 4; W32(esp, v); }
/* 1090dc37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090dc3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090dc3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090dc45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090dc46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090dc47: mov esi, ecx */
  esi = ecx;
/* 1090dc49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090dc4d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1090dc50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090dc52: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1090dc5a: je 0x1090dc6a */
  if (zf) goto L_1090dc6a;
L_1090dc5c: /* 1090dc5c: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090dc62: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090dc64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090dc66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090dc67: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090dc6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090dc6a: /* 1090dc6a: mov ecx, esi */
  ecx = esi;
/* 1090dc6c: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 1090dc73: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 1090dc7a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090dc82: call 0x109011ef */
  esp -= 4; W32(esp, 0x1090dc87u); SPILL(); f_109011ef(); if (g_unwind) return; RELOAD();
/* 1090dc87: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090dc8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090dc8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090dc93: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090dc96: ret  */
  esp += 4; SPILL(); return;
}

void f_1090dcc0(void) {
  LOAD_REGS();
L_1090dcc0: /* 1090dcc0: jmp 0x10901497 */
  SPILL(); f_10901497(); return;
}

void f_1090dce0(void) {
  LOAD_REGS();
L_1090dce0: /* 1090dce0: jmp 0x10901497 */
  SPILL(); f_10901497(); return;
}

void f_1090dd00(void) {
  LOAD_REGS();
L_1090dd00: /* 1090dd00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090dd02: push 0x1091bf0c */
  { uint32_t v = 0x1091bf0cu; esp -= 4; W32(esp, v); }
/* 1090dd07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090dd0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090dd0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090dd15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090dd16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090dd17: mov esi, ecx */
  esi = ecx;
/* 1090dd19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090dd1d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 1090dd20: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1090dd28: call 0x10901497 */
  esp -= 4; W32(esp, 0x1090dd2du); SPILL(); f_10901497(); if (g_unwind) return; RELOAD();
/* 1090dd2d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 1090dd30: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090dd38: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090dd3eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090dd3e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090dd42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090dd43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090dd4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090dd4d: ret  */
  esp += 4; SPILL(); return;
}

void f_1090dd70(void) {
  LOAD_REGS();
L_1090dd70: /* 1090dd70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090dd71: mov esi, ecx */
  esi = ecx;
/* 1090dd73: call 0x10901361 */
  esp -= 4; W32(esp, 0x1090dd78u); SPILL(); f_10901361(); if (g_unwind) return; RELOAD();
/* 1090dd78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090dd7d: je 0x1090dd8c */
  if (zf) goto L_1090dd8c;
L_1090dd7f: /* 1090dd7f: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 1090dd84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090dd86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090dd88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090dd89: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090dd8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090dd8c: /* 1090dd8c: mov eax, esi */
  eax = esi;
/* 1090dd8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090dd8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090ddb0(void) {
  LOAD_REGS();
L_1090ddb0: /* 1090ddb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090ddb1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 1090ddb5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090ddb7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090ddb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ddb9: mov esi, dword ptr [0x10959d64] */
  esi = R32((uint32_t)(0x10959d64u));
/* 1090ddbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090ddc0: mov ebp, ecx */
  ebp = ecx;
/* 1090ddc2: jge 0x1090ddd8 */
  if ((sf == of)) goto L_1090ddd8;
L_1090ddc4: /* 1090ddc4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 1090ddc9: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090ddce: push 0x1092ebc8 */
  { uint32_t v = 0x1092ebc8u; esp -= 4; W32(esp, v); }
/* 1090ddd3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090ddd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090ddd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090ddd8: /* 1090ddd8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090dddb: jle 0x1090ddf1 */
  if ((zf || sf != of)) goto L_1090ddf1;
L_1090dddd: /* 1090dddd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 1090dde2: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090dde7: push 0x1092ebb4 */
  { uint32_t v = 0x1092ebb4u; esp -= 4; W32(esp, v); }
/* 1090ddec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090ddeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090ddee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090ddf1: /* 1090ddf1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1090ddf5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 1090ddf8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ddfb: jle 0x1090de11 */
  if ((zf || sf != of)) goto L_1090de11;
L_1090ddfd: /* 1090ddfd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 1090de02: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090de07: push 0x1092eb98 */
  { uint32_t v = 0x1092eb98u; esp -= 4; W32(esp, v); }
/* 1090de0c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090de0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090de0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090de11: /* 1090de11: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090de13: jge 0x1090de30 */
  if ((sf == of)) goto L_1090de30;
L_1090de15: /* 1090de15: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 1090de18: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1090de1b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1090de1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1090de20: /* 1090de20: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 1090de23: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090de25: call 0x10901361 */
  esp -= 4; W32(esp, 0x1090de2au); SPILL(); f_10901361(); if (g_unwind) return; RELOAD();
/* 1090de2a: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1090de2d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1090de2e: jne 0x1090de20 */
  if (!zf) goto L_1090de20;
L_1090de30: /* 1090de30: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1090de34: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 1090de36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090de37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090de38: mov ecx, ebp */
  ecx = ebp;
/* 1090de3a: call dword ptr [0x10959c4c] */
  esp -= 4; W32(esp, 0x1090de40u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 1090de40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090de41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090de42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090de43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090de44: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090de80(void) {
  LOAD_REGS();
L_1090de80: /* 1090de80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090de82: push 0x1091bf29 */
  { uint32_t v = 0x1091bf29u; esp -= 4; W32(esp, v); }
/* 1090de87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090de8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090de8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090de95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090de96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090de97: mov esi, ecx */
  esi = ecx;
/* 1090de99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090de9d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090dea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090dea1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090dea3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 1090deab: call 0x10901285 */
  esp -= 4; W32(esp, 0x1090deb0u); SPILL(); f_10901285(); if (g_unwind) return; RELOAD();
/* 1090deb0: mov ecx, esi */
  ecx = esi;
/* 1090deb2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090deba: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090dec0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090dec0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090dec4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090dec5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090decc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090decf: ret  */
  esp += 4; SPILL(); return;
}

void f_1090def0(void) {
  LOAD_REGS();
L_1090def0: /* 1090def0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090def2: push 0x1091bf48 */
  { uint32_t v = 0x1091bf48u; esp -= 4; W32(esp, v); }
/* 1090def7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090defd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090defe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090df05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090df06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090df07: mov esi, ecx */
  esi = ecx;
/* 1090df09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090df0d: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x1090df13u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 1090df13: xor eax, eax */
  eax = 0;
/* 1090df15: mov ecx, esi */
  ecx = esi;
/* 1090df17: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1090df1b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 1090df1e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 1090df25: call 0x109010dc */
  esp -= 4; W32(esp, 0x1090df2au); SPILL(); f_109010dc(); if (g_unwind) return; RELOAD();
/* 1090df2a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090df2e: mov eax, esi */
  eax = esi;
/* 1090df30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090df31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090df38: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090df3b: ret  */
  esp += 4; SPILL(); return;
}

void f_1090df60(void) {
  LOAD_REGS();
L_1090df60: /* 1090df60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090df62: push 0x1091bf68 */
  { uint32_t v = 0x1091bf68u; esp -= 4; W32(esp, v); }
/* 1090df67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090df6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090df6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090df75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090df76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090df77: mov esi, ecx */
  esi = ecx;
/* 1090df79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090df7d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1090df80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090df82: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1090df8a: je 0x1090df9a */
  if (zf) goto L_1090df9a;
L_1090df8c: /* 1090df8c: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090df92: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090df94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090df96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090df97: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090df9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090df9a: /* 1090df9a: mov ecx, esi */
  ecx = esi;
/* 1090df9c: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 1090dfa3: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 1090dfaa: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090dfb2: call 0x10901226 */
  esp -= 4; W32(esp, 0x1090dfb7u); SPILL(); f_10901226(); if (g_unwind) return; RELOAD();
/* 1090dfb7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090dfbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090dfbc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090dfc3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090dfc6: ret  */
  esp += 4; SPILL(); return;
}

void f_1090dff0(void) {
  LOAD_REGS();
L_1090dff0: /* 1090dff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090dff2: push 0x1091bf88 */
  { uint32_t v = 0x1091bf88u; esp -= 4; W32(esp, v); }
/* 1090dff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090dffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090dffe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e007: mov esi, ecx */
  esi = ecx;
/* 1090e009: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090e00d: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x1090e013u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 1090e013: xor eax, eax */
  eax = 0;
/* 1090e015: mov ecx, esi */
  ecx = esi;
/* 1090e017: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1090e01b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 1090e01e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 1090e025: call 0x109010dc */
  esp -= 4; W32(esp, 0x1090e02au); SPILL(); f_109010dc(); if (g_unwind) return; RELOAD();
/* 1090e02a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090e02e: mov eax, esi */
  eax = esi;
/* 1090e030: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e031: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e038: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e03b: ret  */
  esp += 4; SPILL(); return;
}

void f_1090e060(void) {
  LOAD_REGS();
L_1090e060: /* 1090e060: jmp 0x109013d4 */
  SPILL(); f_109013d4(); return;
}

void f_1090e080(void) {
  LOAD_REGS();
L_1090e080: /* 1090e080: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e082: push 0x1091bfc7 */
  { uint32_t v = 0x1091bfc7u; esp -= 4; W32(esp, v); }
/* 1090e087: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e08d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e08e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e095: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e099: mov esi, ecx */
  esi = ecx;
/* 1090e09b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e09c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 1090e0a0: mov dword ptr [esi], 0x10920310 */
  W32((uint32_t)(esi), 0x10920310u);
/* 1090e0a6: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 1090e0a9: mov ecx, edi */
  ecx = edi;
/* 1090e0ab: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 1090e0b3: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 1090e0b7: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x1090e0bdu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 1090e0bd: mov ecx, edi */
  ecx = edi;
/* 1090e0bf: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 1090e0c4: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 1090e0cb: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 1090e0d2: call 0x109010dc */
  esp -= 4; W32(esp, 0x1090e0d7u); SPILL(); f_109010dc(); if (g_unwind) return; RELOAD();
/* 1090e0d7: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 1090e0da: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 1090e0df: mov dword ptr [esi], 0x10921538 */
  W32((uint32_t)(esi), 0x10921538u);
/* 1090e0e5: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x1090e0ebu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 1090e0eb: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 1090e0ee: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 1090e0f3: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x1090e0f9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 1090e0f9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1090e0fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e0fe: mov eax, esi */
  eax = esi;
/* 1090e100: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e101: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e108: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e10b: ret  */
  esp += 4; SPILL(); return;
}

void f_1090e140(void) {
  LOAD_REGS();
L_1090e140: /* 1090e140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e141: mov ebp, esp */
  ebp = esp;
/* 1090e143: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e145: push 0x1091bfe0 */
  { uint32_t v = 0x1091bfe0u; esp -= 4; W32(esp, v); }
/* 1090e14a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e151: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e158: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e15b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090e15e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e15f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e160: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e161: mov esi, ecx */
  esi = ecx;
/* 1090e163: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e166: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e167: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 1090e16a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e171: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1090e177u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1090e177: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090e17a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e17b: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 1090e17e: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1090e184u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1090e184: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e187: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e188: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e189: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e190: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e191: mov esp, ebp */
  esp = ebp;
/* 1090e193: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e194: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_1090e197(void) {
  LOAD_REGS();
L_1090e197: /* 1090e197: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e19a: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e19f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090e1a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e1a3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090e1a6: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e1abu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e1ab(); return;
}

void f_1090e1ab(void) {
  LOAD_REGS();
L_1090e1ab: /* 1090e1ab: push 0x10921598 */
  { uint32_t v = 0x10921598u; esp -= 4; W32(esp, v); }
/* 1090e1b0: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e1b5: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e1bbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e1bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e1be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e1c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e1c2: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e1c7u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e1c7: guest_badaddr(0x1090e1c7); return;
}

void f_1090e200(void) {
  LOAD_REGS();
L_1090e200: /* 1090e200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e201: mov ebp, esp */
  ebp = esp;
/* 1090e203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e205: push 0x1091bff0 */
  { uint32_t v = 0x1091bff0u; esp -= 4; W32(esp, v); }
/* 1090e20a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e218: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e21b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090e21d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e21e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e21f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e220: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e223: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e225: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090e227: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e22e: call dword ptr [eax + 0x34] */
  { uint32_t t = R32((uint32_t)(eax + 0x34u)); esp -= 4; W32(esp, 0x1090e231u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e231: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e234: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e235: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e236: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e23d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e23e: mov esp, ebp */
  esp = ebp;
/* 1090e240: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e241: ret  */
  esp += 4; SPILL(); return;
}

void f_1090e242(void) {
  LOAD_REGS();
L_1090e242: /* 1090e242: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e245: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e24a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 1090e24d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e24e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 1090e251: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e256u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e256(); return;
}

void f_1090e256(void) {
  LOAD_REGS();
L_1090e256: /* 1090e256: push 0x109215cc */
  { uint32_t v = 0x109215ccu; esp -= 4; W32(esp, v); }
/* 1090e25b: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e260: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e266u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e266: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e26b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e26d: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e272u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e272: guest_badaddr(0x1090e272); return;
}

void f_1090e2a0(void) {
  LOAD_REGS();
L_1090e2a0: /* 1090e2a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e2a1: mov ebp, esp */
  ebp = esp;
/* 1090e2a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e2a5: push 0x1091c000 */
  { uint32_t v = 0x1091c000u; esp -= 4; W32(esp, v); }
/* 1090e2aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e2b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e2b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e2b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e2b9: mov eax, 0x2008 */
  eax = 0x2008u;
/* 1090e2be: call 0x10918780 */
  esp -= 4; W32(esp, 0x1090e2c3u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 1090e2c3: mov ax, word ptr [0x10958ea4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x10958ea4u))) & 0xffffu);
/* 1090e2c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e2ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e2cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e2cc: mov edx, ecx */
  edx = ecx;
/* 1090e2ce: mov word ptr [ebp - 0x2018], ax */
  W16((uint32_t)(ebp + 0xffffdfe8u), (eax & 0xffffu));
/* 1090e2d5: xor eax, eax */
  eax = 0;
/* 1090e2d7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e2da: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 1090e2df: lea edi, [ebp - 0x2016] */
  edi = (uint32_t)(ebp + 0xffffdfeau);
/* 1090e2e5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1090e2e7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 1090e2ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e2eb: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 1090e2f0: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 1090e2f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e2f7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090e2fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e2fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1090e2fe: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 1090e300: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090e302: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e303: mov ecx, edx */
  ecx = edx;
/* 1090e305: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e30c: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x1090e30fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e30f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1090e312: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 1090e318: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e319: mov esi, eax */
  esi = eax;
/* 1090e31b: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1090e321u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1090e321: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e324: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e325: mov eax, esi */
  eax = esi;
/* 1090e327: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e328: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e32f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e330: mov esp, ebp */
  esp = ebp;
/* 1090e332: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e333: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1090e336(void) {
  LOAD_REGS();
L_1090e336: /* 1090e336: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e339: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e33e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090e341: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e342: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1090e345: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e34au); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e34a(); return;
}

void f_1090e34a(void) {
  LOAD_REGS();
L_1090e34a: /* 1090e34a: push 0x10921600 */
  { uint32_t v = 0x10921600u; esp -= 4; W32(esp, v); }
/* 1090e34f: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e354: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e35au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e35a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e35d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e35f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e361: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e366u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e366: guest_badaddr(0x1090e366); return;
}

void f_1090e3b0(void) {
  LOAD_REGS();
L_1090e3b0: /* 1090e3b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e3b1: mov ebp, esp */
  ebp = esp;
/* 1090e3b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e3b5: push 0x1091c010 */
  { uint32_t v = 0x1091c010u; esp -= 4; W32(esp, v); }
/* 1090e3ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e3c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e3c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e3cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e3cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e3cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e3ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e3d1: mov esi, ecx */
  esi = ecx;
/* 1090e3d3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e3da: call dword ptr [0x10959b80] */
  esp -= 4; W32(esp, 0x1090e3e0u); SPILL(); f_4e292d(); if (g_unwind) return; /* Core!?appStaticString1024@@YAPAGXZ */ RELOAD();
/* 1090e3e0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1090e3e3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090e3e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e3e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1090e3ea: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 1090e3ef: mov edi, eax */
  edi = eax;
/* 1090e3f1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1090e3f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e3f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e3f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e3f6: mov ecx, esi */
  ecx = esi;
/* 1090e3f8: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x1090e3fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e3fb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e3fe: mov eax, edi */
  eax = edi;
/* 1090e400: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e401: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e402: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e409: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e40a: mov esp, ebp */
  esp = ebp;
/* 1090e40c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e40d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_1090e410(void) {
  LOAD_REGS();
L_1090e410: /* 1090e410: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e413: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e418: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090e41b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e41c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090e41f: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e424u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e424(); return;
}

void f_1090e424(void) {
  LOAD_REGS();
L_1090e424: /* 1090e424: push 0x10921640 */
  { uint32_t v = 0x10921640u; esp -= 4; W32(esp, v); }
/* 1090e429: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e42e: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e434u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e434: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e437: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e439: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e43b: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e440u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e440: guest_badaddr(0x1090e440); return;
}

void f_1090e480(void) {
  LOAD_REGS();
L_1090e480: /* 1090e480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e481: mov ebp, esp */
  ebp = esp;
/* 1090e483: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e485: push 0x1091c020 */
  { uint32_t v = 0x1091c020u; esp -= 4; W32(esp, v); }
/* 1090e48a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e491: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e498: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e49e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 1090e4a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090e4a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e4a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e4a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e4a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e4a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e4aa: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 1090e4ac: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 1090e4b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e4b3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090e4b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e4b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1090e4ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e4bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e4c2: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x1090e4c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e4c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090e4c7: je 0x1090e4f6 */
  if (zf) goto L_1090e4f6;
L_1090e4c9: /* 1090e4c9: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 1090e4cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e4d0: call dword ptr [0x10959bf4] */
  esp -= 4; W32(esp, 0x1090e4d6u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 1090e4d6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1090e4d9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 1090e4db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e4de: mov eax, 1 */
  eax = 0x1u;
/* 1090e4e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e4e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e4ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e4ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e4ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e4f0: mov esp, ebp */
  esp = ebp;
/* 1090e4f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e4f3: ret 0x10 */
  esp += 20; SPILL(); return;
L_1090e4f6: /* 1090e4f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e4f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e4fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e4fb: xor eax, eax */
  eax = 0;
/* 1090e4fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e504: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e505: mov esp, ebp */
  esp = ebp;
/* 1090e507: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e508: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1090e50b(void) {
  LOAD_REGS();
L_1090e50b: /* 1090e50b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e50e: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e513: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090e516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e517: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090e51a: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e51fu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e51f(); return;
}

void f_1090e51f(void) {
  LOAD_REGS();
L_1090e51f: /* 1090e51f: push 0x1092167c */
  { uint32_t v = 0x1092167cu; esp -= 4; W32(esp, v); }
/* 1090e524: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e529: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e52fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e52f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e532: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e536: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e53bu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e53b: guest_badaddr(0x1090e53b); return;
}

void f_1090e570(void) {
  LOAD_REGS();
L_1090e570: /* 1090e570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e571: mov ebp, esp */
  ebp = esp;
/* 1090e573: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e575: push 0x1091c030 */
  { uint32_t v = 0x1091c030u; esp -= 4; W32(esp, v); }
/* 1090e57a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e581: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e588: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e58e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 1090e591: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090e593: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e594: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e595: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e596: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e599: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e59a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 1090e59c: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 1090e5a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e5a3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090e5a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e5a7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1090e5aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e5ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e5b2: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x1090e5b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e5b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090e5b7: je 0x1090e5e9 */
  if (zf) goto L_1090e5e9;
L_1090e5b9: /* 1090e5b9: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 1090e5bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e5c0: call dword ptr [0x10959b7c] */
  esp -= 4; W32(esp, 0x1090e5c6u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 1090e5c6: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 1090e5c9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1090e5cc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 1090e5ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e5d1: mov eax, 1 */
  eax = 0x1u;
/* 1090e5d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e5d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e5e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e5e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e5e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e5e3: mov esp, ebp */
  esp = ebp;
/* 1090e5e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e5e6: ret 0x10 */
  esp += 20; SPILL(); return;
L_1090e5e9: /* 1090e5e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e5ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e5ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e5ee: xor eax, eax */
  eax = 0;
/* 1090e5f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e5f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e5f8: mov esp, ebp */
  esp = ebp;
/* 1090e5fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e5fb: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1090e5fe(void) {
  LOAD_REGS();
L_1090e5fe: /* 1090e5fe: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e601: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e606: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090e609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e60a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090e60d: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e612u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e612(); return;
}

void f_1090e612(void) {
  LOAD_REGS();
L_1090e612: /* 1090e612: push 0x109216b8 */
  { uint32_t v = 0x109216b8u; esp -= 4; W32(esp, v); }
/* 1090e617: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e61c: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e622u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e622: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e625: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e629: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e62eu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e62e: guest_badaddr(0x1090e62e); return;
}

void f_1090e660(void) {
  LOAD_REGS();
L_1090e660: /* 1090e660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e661: mov ebp, esp */
  ebp = esp;
/* 1090e663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e665: push 0x1091c040 */
  { uint32_t v = 0x1091c040u; esp -= 4; W32(esp, v); }
/* 1090e66a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e678: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e67e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 1090e681: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090e683: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e685: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e686: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e689: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e68a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 1090e68c: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 1090e692: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e693: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090e696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e697: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1090e69a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e69b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e6a2: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x1090e6a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e6a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090e6a7: je 0x1090e702 */
  if (zf) goto L_1090e702;
L_1090e6a9: /* 1090e6a9: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 1090e6af: push 0x1092f3b0 */
  { uint32_t v = 0x1092f3b0u; esp -= 4; W32(esp, v); }
/* 1090e6b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e6b5: call dword ptr [0x10959d68] */
  esp -= 4; W32(esp, 0x1090e6bbu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 1090e6bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e6be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090e6c0: jne 0x1090e6cd */
  if (!zf) goto L_1090e6cd;
L_1090e6c2: /* 1090e6c2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1090e6c5: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 1090e6cb: jmp 0x1090e6ea */
  goto L_1090e6ea;
L_1090e6cd: /* 1090e6cd: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 1090e6d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e6d4: call dword ptr [0x10959bf4] */
  esp -= 4; W32(esp, 0x1090e6dau); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 1090e6da: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 1090e6dd: xor ecx, ecx */
  ecx = 0;
/* 1090e6df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e6e2: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090e6e5: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 1090e6e8: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_1090e6ea: /* 1090e6ea: mov eax, 1 */
  eax = 0x1u;
/* 1090e6ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e6f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e6f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e6fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e6fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e6fc: mov esp, ebp */
  esp = ebp;
/* 1090e6fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e6ff: ret 0x10 */
  esp += 20; SPILL(); return;
L_1090e702: /* 1090e702: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e705: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e706: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e707: xor eax, eax */
  eax = 0;
/* 1090e709: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e710: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e711: mov esp, ebp */
  esp = ebp;
/* 1090e713: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e714: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1090e717(void) {
  LOAD_REGS();
L_1090e717: /* 1090e717: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e71a: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e71f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090e722: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e723: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1090e726: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e72bu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e72b(); return;
}

void f_1090e72b(void) {
  LOAD_REGS();
L_1090e72b: /* 1090e72b: push 0x109216f8 */
  { uint32_t v = 0x109216f8u; esp -= 4; W32(esp, v); }
/* 1090e730: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e735: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e73bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e73b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e73e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e740: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e742: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e747u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e747: guest_badaddr(0x1090e747); return;
}

void f_1090e790(void) {
  LOAD_REGS();
L_1090e790: /* 1090e790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e791: mov ebp, esp */
  ebp = esp;
/* 1090e793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e795: push 0x1091c050 */
  { uint32_t v = 0x1091c050u; esp -= 4; W32(esp, v); }
/* 1090e79a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e7a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e7a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e7a8: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e7ab: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1090e7ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e7af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e7b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e7b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e7b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e7b5: mov esi, ecx */
  esi = ecx;
/* 1090e7b7: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090e7ba: push 0x1092f3bc */
  { uint32_t v = 0x1092f3bcu; esp -= 4; W32(esp, v); }
/* 1090e7bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e7c0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e7c7: call dword ptr [0x10959da4] */
  esp -= 4; W32(esp, 0x1090e7cdu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 1090e7cd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 1090e7d0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090e7d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e7d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e7d6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090e7d9: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090e7dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e7dd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1090e7e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e7e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e7e2: mov ecx, esi */
  ecx = esi;
/* 1090e7e4: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090e7e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e7e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e7ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e7eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e7ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e7f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e7f4: mov esp, ebp */
  esp = ebp;
/* 1090e7f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e7f7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1090e7fa(void) {
  LOAD_REGS();
L_1090e7fa: /* 1090e7fa: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e7fd: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e802: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090e805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e806: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090e809: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e80eu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e80e(); return;
}

void f_1090e80e(void) {
  LOAD_REGS();
L_1090e80e: /* 1090e80e: push 0x10921734 */
  { uint32_t v = 0x10921734u; esp -= 4; W32(esp, v); }
/* 1090e813: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e818: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e81eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e81e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e821: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e823: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e825: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e82au); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e82a: guest_badaddr(0x1090e82a); return;
}

void f_1090e860(void) {
  LOAD_REGS();
L_1090e860: /* 1090e860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e861: mov ebp, esp */
  ebp = esp;
/* 1090e863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e865: push 0x1091c060 */
  { uint32_t v = 0x1091c060u; esp -= 4; W32(esp, v); }
/* 1090e86a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e878: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e87b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 1090e87e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e87f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e881: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e884: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e887: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090e88a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 1090e88d: push 0x1092efec */
  { uint32_t v = 0x1092efecu; esp -= 4; W32(esp, v); }
/* 1090e892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e893: mov esi, ecx */
  esi = ecx;
/* 1090e895: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e89c: call dword ptr [0x10959da4] */
  esp -= 4; W32(esp, 0x1090e8a2u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 1090e8a2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 1090e8a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090e8a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e8aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e8ab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090e8ae: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090e8b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e8b2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1090e8b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e8b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090e8b7: mov ecx, esi */
  ecx = esi;
/* 1090e8b9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090e8bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e8bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e8bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e8c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e8c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e8c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e8c9: mov esp, ebp */
  esp = ebp;
/* 1090e8cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e8cc: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1090e8cf(void) {
  LOAD_REGS();
L_1090e8cf: /* 1090e8cf: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e8d2: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e8d7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090e8da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e8db: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090e8de: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e8e3u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e8e3(); return;
}

void f_1090e8e3(void) {
  LOAD_REGS();
L_1090e8e3: /* 1090e8e3: push 0x10921770 */
  { uint32_t v = 0x10921770u; esp -= 4; W32(esp, v); }
/* 1090e8e8: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e8ed: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e8f3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e8f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e8f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e8f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e8fa: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e8ffu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e8ff: guest_badaddr(0x1090e8ff); return;
}

void f_1090e930(void) {
  LOAD_REGS();
L_1090e930: /* 1090e930: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e931: mov ebp, esp */
  ebp = esp;
/* 1090e933: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e935: push 0x1091c070 */
  { uint32_t v = 0x1091c070u; esp -= 4; W32(esp, v); }
/* 1090e93a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090e940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e941: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090e948: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090e94b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1090e94e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090e94f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e950: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090e951: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090e953: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090e956: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090e95d: mov eax, 0x1092f3b0 */
  eax = 0x1092f3b0u;
/* 1090e962: jne 0x1090e969 */
  if (!zf) goto L_1090e969;
L_1090e964: /* 1090e964: mov eax, 0x1092f3c4 */
  eax = 0x1092f3c4u;
L_1090e969: /* 1090e969: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 1090e96c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090e96e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090e96f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e970: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090e973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e974: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090e977: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090e978: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090e97bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090e97b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090e97e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090e97f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090e980: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090e987: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090e988: mov esp, ebp */
  esp = ebp;
/* 1090e98a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090e98b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_1090e98e(void) {
  LOAD_REGS();
L_1090e98e: /* 1090e98e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090e991: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090e996: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 1090e999: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090e99a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 1090e99d: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e9a2u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090e9a2(); return;
}

void f_1090e9a2(void) {
  LOAD_REGS();
L_1090e9a2: /* 1090e9a2: push 0x109217b0 */
  { uint32_t v = 0x109217b0u; esp -= 4; W32(esp, v); }
/* 1090e9a7: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090e9ac: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090e9b2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090e9b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090e9b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e9b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090e9b9: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090e9beu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090e9be: guest_badaddr(0x1090e9be); return;
}

void f_1090e9f0(void) {
  LOAD_REGS();
L_1090e9f0: /* 1090e9f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090e9f1: mov ebp, esp */
  ebp = esp;
/* 1090e9f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090e9f5: push 0x1091c080 */
  { uint32_t v = 0x1091c080u; esp -= 4; W32(esp, v); }
/* 1090e9fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090ea00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ea01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090ea08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090ea0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090ea0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ea0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090ea0e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 1090ea11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090ea14: mov esi, ecx */
  esi = ecx;
/* 1090ea16: push 0x1092f3d4 */
  { uint32_t v = 0x1092f3d4u; esp -= 4; W32(esp, v); }
/* 1090ea1b: mov ecx, edi */
  ecx = edi;
/* 1090ea1d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090ea24: call dword ptr [0x10959b78] */
  esp -= 4; W32(esp, 0x1090ea2au); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 1090ea2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090ea2b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 1090ea2e: call 0x1090119a */
  esp -= 4; W32(esp, 0x1090ea33u); SPILL(); f_1090119a(); if (g_unwind) return; RELOAD();
/* 1090ea33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090ea36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090ea37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090ea38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090ea3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090ea40: mov esp, ebp */
  esp = ebp;
/* 1090ea42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090ea43: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090ea46(void) {
  LOAD_REGS();
L_1090ea46: /* 1090ea46: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090ea49: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090ea4e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090ea51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090ea52: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1090ea55: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090ea5au); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090ea5a(); return;
}

void f_1090ea5a(void) {
  LOAD_REGS();
L_1090ea5a: /* 1090ea5a: push 0x109217ec */
  { uint32_t v = 0x109217ecu; esp -= 4; W32(esp, v); }
/* 1090ea5f: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090ea64: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090ea6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090ea6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ea6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090ea6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090ea71: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090ea76u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090ea76: guest_badaddr(0x1090ea76); return;
}

void f_1090eab0(void) {
  LOAD_REGS();
L_1090eab0: /* 1090eab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090eab1: mov ebp, esp */
  ebp = esp;
/* 1090eab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090eab5: push 0x1091c090 */
  { uint32_t v = 0x1091c090u; esp -= 4; W32(esp, v); }
/* 1090eaba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090eac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090eac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090eac8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090eacb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090eacc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1090eacf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ead0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090ead1: mov esi, ecx */
  esi = ecx;
/* 1090ead3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090ead6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090ead9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090eadc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090eadd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090eade: push 0x1092f418 */
  { uint32_t v = 0x1092f418u; esp -= 4; W32(esp, v); }
/* 1090eae3: xor edi, edi */
  edi = 0;
/* 1090eae5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090eae6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1090eae9: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090eaefu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090eaef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090eaf2: /* 1090eaf2: cmp edi, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090eaf5: jge 0x1090eb57 */
  if ((sf == of)) goto L_1090eb57;
L_1090eaf7: /* 1090eaf7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 1090eafa: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 1090eafd: xor ecx, ecx */
  ecx = 0;
/* 1090eaff: nop  */
L_1090eb00: /* 1090eb00: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090eb03: je 0x1090eb13 */
  if (zf) goto L_1090eb13;
L_1090eb05: /* 1090eb05: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090eb07: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 1090eb0a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1090eb0b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1090eb0e: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* 1090eb11: jmp 0x1090eb00 */
  goto L_1090eb00;
L_1090eb13: /* 1090eb13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090eb14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090eb15: push 0x1092f3f0 */
  { uint32_t v = 0x1092f3f0u; esp -= 4; W32(esp, v); }
/* 1090eb1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090eb1b: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090eb21u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090eb21: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090eb24: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1090eb25: jmp 0x1090eaf2 */
  goto L_1090eaf2;
L_1090eb57: /* 1090eb57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090eb5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090eb5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090eb5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090eb63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090eb64: mov esp, ebp */
  esp = ebp;
/* 1090eb66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090eb67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090eb27(void) {
  LOAD_REGS();
L_1090eb27: /* 1090eb27: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090eb2a: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090eb2f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090eb32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090eb33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1090eb36: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090eb3bu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090eb3b(); return;
}

void f_1090eb3b(void) {
  LOAD_REGS();
L_1090eb3b: /* 1090eb3b: push 0x10921820 */
  { uint32_t v = 0x10921820u; esp -= 4; W32(esp, v); }
/* 1090eb40: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090eb45: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090eb4bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090eb4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090eb4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090eb50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090eb52: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090eb57u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
/* 1090eb57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090eb5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090eb5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090eb5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090eb63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090eb64: mov esp, ebp */
  esp = ebp;
/* 1090eb66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090eb67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090eba0(void) {
  LOAD_REGS();
L_1090eba0: /* 1090eba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090eba1: mov ebp, esp */
  ebp = esp;
/* 1090eba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090eba5: push 0x1091c0a8 */
  { uint32_t v = 0x1091c0a8u; esp -= 4; W32(esp, v); }
/* 1090ebaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090ebb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ebb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090ebb8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090ebbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090ebbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ebbd: mov ebx, ecx */
  ebx = ecx;
/* 1090ebbf: xor esi, esi */
  esi = 0;
/* 1090ebc1: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ebc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090ebc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090ebc7: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 1090ebca: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 1090ebcd: je 0x1090ebd4 */
  if (zf) goto L_1090ebd4;
L_1090ebcf: /* 1090ebcf: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* 1090ebd2: jmp 0x1090ebd6 */
  goto L_1090ebd6;
L_1090ebd4: /* 1090ebd4: xor edi, edi */
  edi = 0;
L_1090ebd6: /* 1090ebd6: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 1090ebd9: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 1090ebdc: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 1090ebdf: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 1090ebe2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_1090ebe6: /* 1090ebe6: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ebe9: jge 0x1090ec30 */
  if ((sf == of)) goto L_1090ec30;
L_1090ebeb: /* 1090ebeb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090ebee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ebf0: je 0x1090ec09 */
  if (zf) goto L_1090ec09;
L_1090ebf2: /* 1090ebf2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 1090ebf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ebf5: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 1090ebf8: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1090ebfb: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 1090ebff: call dword ptr [0x10959b74] */
  esp -= 4; W32(esp, 0x1090ec05u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 1090ec05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ec07: je 0x1090ec2a */
  if (zf) goto L_1090ec2a;
L_1090ec09: /* 1090ec09: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1090ec0b: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 1090ec0e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1090ec11: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090ec13: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 1090ec16: lea ebx, [eax + 0x10] */
  ebx = (uint32_t)(eax + 0x10u);
/* 1090ec19: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090ec1fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090ec1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ec20: mov ecx, ebx */
  ecx = ebx;
/* 1090ec22: call 0x109010d7 */
  esp -= 4; W32(esp, 0x1090ec27u); SPILL(); f_109010d7(); if (g_unwind) return; RELOAD();
/* 1090ec27: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_1090ec2a: /* 1090ec2a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 1090ec2b: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 1090ec2e: jmp 0x1090ebe6 */
  goto L_1090ebe6;
L_1090ec30: /* 1090ec30: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090ec33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ec35: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090ec39: je 0x1090ec43 */
  if (zf) goto L_1090ec43;
L_1090ec3b: /* 1090ec3b: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090ec3e: call 0x109014ce */
  esp -= 4; W32(esp, 0x1090ec43u); SPILL(); f_109014ce(); if (g_unwind) return; RELOAD();
L_1090ec43: /* 1090ec43: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090ec46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ec48: je 0x1090ec5a */
  if (zf) goto L_1090ec5a;
L_1090ec4a: /* 1090ec4a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090ec4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ec4f: je 0x1090ec6d */
  if (zf) goto L_1090ec6d;
L_1090ec51: /* 1090ec51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ec52: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 1090ec55: call 0x10901438 */
  esp -= 4; W32(esp, 0x1090ec5au); SPILL(); f_10901438(); if (g_unwind) return; RELOAD();
L_1090ec5a: /* 1090ec5a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090ec5d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090ec64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090ec65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090ec66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090ec67: mov esp, ebp */
  esp = ebp;
/* 1090ec69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090ec6a: ret 8 */
  esp += 12; SPILL(); return;
L_1090ec6d: /* 1090ec6d: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
/* 1090ec70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090ec72: mov ecx, esi */
  ecx = esi;
/* 1090ec74: call 0x109011bd */
  esp -= 4; W32(esp, 0x1090ec79u); SPILL(); f_109011bd(); if (g_unwind) return; RELOAD();
/* 1090ec79: mov ecx, esi */
  ecx = esi;
/* 1090ec7b: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 1090ec82: call 0x109010dc */
  esp -= 4; W32(esp, 0x1090ec87u); SPILL(); f_109010dc(); if (g_unwind) return; RELOAD();
/* 1090ec87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090ec8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090ec8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090ec8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090ec93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090ec94: mov esp, ebp */
  esp = ebp;
/* 1090ec96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090ec97: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090ec9a(void) {
  LOAD_REGS();
L_1090ec9a: /* 1090ec9a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090ec9d: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090eca2: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 1090eca5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090eca6: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 1090eca9: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090ecaeu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090ecae(); return;
}

void f_1090ecae(void) {
  LOAD_REGS();
L_1090ecae: /* 1090ecae: push 0x10921844 */
  { uint32_t v = 0x10921844u; esp -= 4; W32(esp, v); }
/* 1090ecb3: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090ecb8: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090ecbeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090ecbe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ecc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090ecc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090ecc5: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090eccau); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090ecca: guest_badaddr(0x1090ecca); return;
}

void f_1090ed20(void) {
  LOAD_REGS();
L_1090ed20: /* 1090ed20: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090ed23: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090ed27: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ed2a: jle 0x1090ed47 */
  if ((zf || sf != of)) goto L_1090ed47;
L_1090ed2c: /* 1090ed2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090ed30: /* 1090ed30: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 1090ed33: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1090ed34: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090ed36: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1090ed38: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 1090ed3b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090ed3e: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090ed42: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ed45: jg 0x1090ed30 */
  if ((!zf && sf == of)) goto L_1090ed30;
L_1090ed47: /* 1090ed47: jmp 0x109010dc */
  SPILL(); f_109010dc(); return;
}

void f_1090ed60(void) {
  LOAD_REGS();
L_1090ed60: /* 1090ed60: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 1090ed63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ed65: je 0x1090ed91 */
  if (zf) goto L_1090ed91;
L_1090ed67: /* 1090ed67: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090ed69: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090ed6c: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090ed70: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ed73: jle 0x1090ed8c */
  if ((zf || sf != of)) goto L_1090ed8c;
L_1090ed75: /* 1090ed75: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 1090ed78: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1090ed79: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090ed7b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1090ed7d: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 1090ed80: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090ed83: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090ed87: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ed8a: jg 0x1090ed75 */
  if ((!zf && sf == of)) goto L_1090ed75;
L_1090ed8c: /* 1090ed8c: jmp 0x109010dc */
  SPILL(); f_109010dc(); return;
L_1090ed91: /* 1090ed91: ret  */
  esp += 4; SPILL(); return;
}

void f_1090edb0(void) {
  LOAD_REGS();
L_1090edb0: /* 1090edb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090edb1: mov ebp, esp */
  ebp = esp;
/* 1090edb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090edb5: push 0x1091c0f4 */
  { uint32_t v = 0x1091c0f4u; esp -= 4; W32(esp, v); }
/* 1090edba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090edc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090edc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090edc8: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090edcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090edcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090edcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090edce: mov edi, ecx */
  edi = ecx;
/* 1090edd0: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 1090edd3: xor ebx, ebx */
  ebx = 0;
/* 1090edd5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090edd7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090edda: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 1090eddd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1090ede0: je 0x1090efdc */
  if (zf) goto L_1090efdc;
L_1090ede6: /* 1090ede6: cmp dword ptr [edi + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ede9: jne 0x1090efdc */
  if (!zf) goto L_1090efdc;
L_1090edef: /* 1090edef: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090edf2: mov dword ptr [edi + 0x14], ebx */
  W32((uint32_t)(edi + 0x14u), ebx);
/* 1090edf5: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x1090edfbu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 1090edfb: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 1090edfe: mov dword ptr [ebp - 0x6c], edi */
  W32((uint32_t)(ebp + 0xffffff94u), edi);
/* 1090ee01: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 1090ee04: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 1090ee07: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090ee0b: jmp 0x1090ee10 */
  goto L_1090ee10;
L_1090ee10: /* 1090ee10: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ee13: jge 0x1090ef5b */
  if ((sf == of)) goto L_1090ef5b;
L_1090ee19: /* 1090ee19: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1090ee1b: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 1090ee1e: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1090ee21: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 1090ee25: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090ee2bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090ee2b: push 0x1092e0cc */
  { uint32_t v = 0x1092e0ccu; esp -= 4; W32(esp, v); }
/* 1090ee30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ee31: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090ee34: push 0x1092f48c */
  { uint32_t v = 0x1092f48cu; esp -= 4; W32(esp, v); }
/* 1090ee39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090ee3a: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090ee40u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090ee40: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ee43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ee44: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090ee47: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090ee4b: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090ee51u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090ee51: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090ee54: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090ee58: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090ee5eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090ee5e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 1090ee60: lea eax, [edx + esi + 0x10] */
  eax = (uint32_t)(edx + esi + 0x10u);
/* 1090ee64: xor edx, edx */
  edx = 0;
/* 1090ee66: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 1090ee69: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 1090ee6c: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 1090ee6f: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 1090ee72: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
L_1090ee76: /* 1090ee76: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ee79: jge 0x1090ef11 */
  if ((sf == of)) goto L_1090ef11;
L_1090ee7f: /* 1090ee7f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090ee82: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 1090ee85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ee87: mov dword ptr [ebp - 0x14], 0x1092f488 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1092f488u);
/* 1090ee8e: jne 0x1090ef0a */
  if (!zf) goto L_1090ef0a;
L_1090ee90: /* 1090ee90: mov dword ptr [ebp - 0x14], 0x10958ea4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10958ea4u);
/* 1090ee97: mov edi, 0x10958ea4 */
  edi = 0x10958ea4u;
L_1090ee9c: /* 1090ee9c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090ee9e: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 1090eea1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090eea3: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 1090eea6: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 1090eea9: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090eeafu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090eeaf: mov ecx, ebx */
  ecx = ebx;
/* 1090eeb1: mov esi, eax */
  esi = eax;
/* 1090eeb3: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090eeb9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090eeb9: mov ecx, 0x1092e0cc */
  ecx = 0x1092e0ccu;
/* 1090eebe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090eebf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090eec2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090eec3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090eec4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090eec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090eec6: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 1090eec9: push 0x1092f46c */
  { uint32_t v = 0x1092f46cu; esp -= 4; W32(esp, v); }
/* 1090eece: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090eecf: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090eed5u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090eed5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090eed8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090eed9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090eedc: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090eee0: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090eee6u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090eee6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 1090eee9: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090eeed: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090eef3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090eef3: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 1090eef6: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 1090eef9: mov ebx, dword ptr [ebp - 0x68] */
  ebx = R32((uint32_t)(ebp + 0xffffff98u));
/* 1090eefc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1090eefd: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 1090ef00: mov edx, eax */
  edx = eax;
/* 1090ef02: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 1090ef05: jmp 0x1090ee76 */
  goto L_1090ee76;
L_1090ef0a: /* 1090ef0a: mov edi, 0x1092f488 */
  edi = 0x1092f488u;
/* 1090ef0f: jmp 0x1090ee9c */
  goto L_1090ee9c;
L_1090ef11: /* 1090ef11: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 1090ef14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ef16: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090ef1a: je 0x1090ef24 */
  if (zf) goto L_1090ef24;
L_1090ef1c: /* 1090ef1c: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 1090ef1f: call 0x10901398 */
  esp -= 4; W32(esp, 0x1090ef24u); SPILL(); f_10901398(); if (g_unwind) return; RELOAD();
L_1090ef24: /* 1090ef24: mov eax, 0x1092e0cc */
  eax = 0x1092e0ccu;
/* 1090ef29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ef2a: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 1090ef2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ef2e: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090ef34u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090ef34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ef37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ef38: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090ef3b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090ef3f: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090ef45u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090ef45: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 1090ef48: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090ef4c: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090ef52u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090ef52: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090ef53: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 1090ef56: jmp 0x1090ee10 */
  goto L_1090ee10;
L_1090ef5b: /* 1090ef5b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 1090ef5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ef60: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090ef64: je 0x1090ef6e */
  if (zf) goto L_1090ef6e;
L_1090ef66: /* 1090ef66: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 1090ef69: call 0x109011b3 */
  esp -= 4; W32(esp, 0x1090ef6eu); SPILL(); f_109011b3(); if (g_unwind) return; RELOAD();
L_1090ef6e: /* 1090ef6e: mov ecx, dword ptr [0x10959d98] */
  ecx = R32((uint32_t)(0x10959d98u));
/* 1090ef74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090ef76: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090ef79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090ef7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ef7b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090ef7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090ef7f: call dword ptr [0x10959bc8] */
  esp -= 4; W32(esp, 0x1090ef85u); SPILL(); f_4e1d39(); if (g_unwind) return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 1090ef85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ef88: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090ef8b: mov esi, eax */
  esi = eax;
/* 1090ef8d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090ef91: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090ef97u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090ef97: mov eax, esi */
  eax = esi;
/* 1090ef99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090ef9c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090efa3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090efa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090efa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090efa6: mov esp, ebp */
  esp = ebp;
/* 1090efa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090efa9: ret 4 */
  esp += 8; SPILL(); return;
L_1090efdc: /* 1090efdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090efdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090efe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090efe1: mov eax, 1 */
  eax = 0x1u;
/* 1090efe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090efed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090efee: mov esp, ebp */
  esp = ebp;
/* 1090eff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090eff1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090ee0d(void) {
  LOAD_REGS();
L_1090ee0d: /* 1090ee0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1090ee10: /* 1090ee10: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ee13: jge 0x1090ef5b */
  if ((sf == of)) goto L_1090ef5b;
L_1090ee19: /* 1090ee19: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1090ee1b: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 1090ee1e: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1090ee21: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 1090ee25: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090ee2bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090ee2b: push 0x1092e0cc */
  { uint32_t v = 0x1092e0ccu; esp -= 4; W32(esp, v); }
/* 1090ee30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ee31: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090ee34: push 0x1092f48c */
  { uint32_t v = 0x1092f48cu; esp -= 4; W32(esp, v); }
/* 1090ee39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090ee3a: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090ee40u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090ee40: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ee43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ee44: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090ee47: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090ee4b: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090ee51u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090ee51: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090ee54: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090ee58: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090ee5eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090ee5e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 1090ee60: lea eax, [edx + esi + 0x10] */
  eax = (uint32_t)(edx + esi + 0x10u);
/* 1090ee64: xor edx, edx */
  edx = 0;
/* 1090ee66: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 1090ee69: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 1090ee6c: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 1090ee6f: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 1090ee72: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
L_1090ee76: /* 1090ee76: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ee79: jge 0x1090ef11 */
  if ((sf == of)) goto L_1090ef11;
L_1090ee7f: /* 1090ee7f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090ee82: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 1090ee85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ee87: mov dword ptr [ebp - 0x14], 0x1092f488 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1092f488u);
/* 1090ee8e: jne 0x1090ef0a */
  if (!zf) goto L_1090ef0a;
L_1090ee90: /* 1090ee90: mov dword ptr [ebp - 0x14], 0x10958ea4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10958ea4u);
/* 1090ee97: mov edi, 0x10958ea4 */
  edi = 0x10958ea4u;
L_1090ee9c: /* 1090ee9c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090ee9e: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 1090eea1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090eea3: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 1090eea6: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 1090eea9: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090eeafu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090eeaf: mov ecx, ebx */
  ecx = ebx;
/* 1090eeb1: mov esi, eax */
  esi = eax;
/* 1090eeb3: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090eeb9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090eeb9: mov ecx, 0x1092e0cc */
  ecx = 0x1092e0ccu;
/* 1090eebe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090eebf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090eec2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090eec3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090eec4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090eec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090eec6: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 1090eec9: push 0x1092f46c */
  { uint32_t v = 0x1092f46cu; esp -= 4; W32(esp, v); }
/* 1090eece: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090eecf: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090eed5u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090eed5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090eed8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090eed9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090eedc: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090eee0: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090eee6u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090eee6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 1090eee9: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090eeed: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090eef3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090eef3: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 1090eef6: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 1090eef9: mov ebx, dword ptr [ebp - 0x68] */
  ebx = R32((uint32_t)(ebp + 0xffffff98u));
/* 1090eefc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1090eefd: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 1090ef00: mov edx, eax */
  edx = eax;
/* 1090ef02: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 1090ef05: jmp 0x1090ee76 */
  goto L_1090ee76;
L_1090ef0a: /* 1090ef0a: mov edi, 0x1092f488 */
  edi = 0x1092f488u;
/* 1090ef0f: jmp 0x1090ee9c */
  goto L_1090ee9c;
L_1090ef11: /* 1090ef11: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 1090ef14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ef16: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090ef1a: je 0x1090ef24 */
  if (zf) goto L_1090ef24;
L_1090ef1c: /* 1090ef1c: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 1090ef1f: call 0x10901398 */
  esp -= 4; W32(esp, 0x1090ef24u); SPILL(); f_10901398(); if (g_unwind) return; RELOAD();
L_1090ef24: /* 1090ef24: mov eax, 0x1092e0cc */
  eax = 0x1092e0ccu;
/* 1090ef29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ef2a: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 1090ef2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ef2e: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090ef34u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090ef34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ef37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ef38: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090ef3b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090ef3f: call dword ptr [0x10959bbc] */
  esp -= 4; W32(esp, 0x1090ef45u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 1090ef45: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 1090ef48: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090ef4c: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090ef52u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090ef52: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090ef53: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 1090ef56: jmp 0x1090ee10 */
  goto L_1090ee10;
L_1090ef5b: /* 1090ef5b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 1090ef5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ef60: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090ef64: je 0x1090ef6e */
  if (zf) goto L_1090ef6e;
L_1090ef66: /* 1090ef66: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 1090ef69: call 0x109011b3 */
  esp -= 4; W32(esp, 0x1090ef6eu); SPILL(); f_109011b3(); if (g_unwind) return; RELOAD();
L_1090ef6e: /* 1090ef6e: mov ecx, dword ptr [0x10959d98] */
  ecx = R32((uint32_t)(0x10959d98u));
/* 1090ef74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090ef76: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090ef79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090ef7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ef7b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090ef7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090ef7f: call dword ptr [0x10959bc8] */
  esp -= 4; W32(esp, 0x1090ef85u); SPILL(); f_4e1d39(); if (g_unwind) return; /* Core!?appSaveStringToFile@@YAHABVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 1090ef85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ef88: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090ef8b: mov esi, eax */
  esi = eax;
/* 1090ef8d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090ef91: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090ef97u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090ef97: mov eax, esi */
  eax = esi;
/* 1090ef99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090ef9c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090efa3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090efa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090efa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090efa6: mov esp, ebp */
  esp = ebp;
/* 1090efa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090efa9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090efac(void) {
  LOAD_REGS();
L_1090efac: /* 1090efac: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090efaf: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090efb4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 1090efb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090efb8: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 1090efbb: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090efc0u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090efc0(); return;
}

void f_1090efc0(void) {
  LOAD_REGS();
L_1090efc0: /* 1090efc0: push 0x1092187c */
  { uint32_t v = 0x1092187cu; esp -= 4; W32(esp, v); }
/* 1090efc5: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090efca: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090efd0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090efd0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090efd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090efd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090efd7: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090efdcu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
/* 1090efdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090efdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090efe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090efe1: mov eax, 1 */
  eax = 0x1u;
/* 1090efe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090efed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090efee: mov esp, ebp */
  esp = ebp;
/* 1090eff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090eff1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090f0a0(void) {
  LOAD_REGS();
L_1090f0a0: /* 1090f0a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090f0a3: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090f0a7: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f0aa: jle 0x1090f0c7 */
  if ((zf || sf != of)) goto L_1090f0c7;
L_1090f0ac: /* 1090f0ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090f0b0: /* 1090f0b0: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 1090f0b3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1090f0b4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090f0b6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1090f0b8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 1090f0bb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090f0be: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090f0c2: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f0c5: jg 0x1090f0b0 */
  if ((!zf && sf == of)) goto L_1090f0b0;
L_1090f0c7: /* 1090f0c7: jmp 0x10901262 */
  SPILL(); f_10901262(); return;
}

void f_1090f0e0(void) {
  LOAD_REGS();
L_1090f0e0: /* 1090f0e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f0e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090f0e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090f0e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f0e4: mov esi, ecx */
  esi = ecx;
/* 1090f0e6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 1090f0e9: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090f0ef: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f0f1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f0f3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1090f0f6: push 0x1092eb7c */
  { uint32_t v = 0x1092eb7cu; esp -= 4; W32(esp, v); }
/* 1090f0fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f0fc: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090f0feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f0fe: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f101: mov ebp, eax */
  ebp = eax;
/* 1090f103: xor ebx, ebx */
  ebx = 0;
/* 1090f105: xor eax, eax */
  eax = 0;
/* 1090f107: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f109: jle 0x1090f120 */
  if ((zf || sf != of)) goto L_1090f120;
L_1090f10b: /* 1090f10b: jmp 0x1090f110 */
  goto L_1090f110;
L_1090f110: /* 1090f110: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 1090f118: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f11b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1090f11c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f11e: jl 0x1090f110 */
  if ((sf != of)) goto L_1090f110;
L_1090f120: /* 1090f120: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f123: jle 0x1090f16c */
  if ((zf || sf != of)) goto L_1090f16c;
L_1090f125: /* 1090f125: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 1090f129: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f12a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1090f130: /* 1090f130: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 1090f132: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1090f136: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 1090f139: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f13fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090f13f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f140: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090f145u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090f145: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f148: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f14b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090f14c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090f14e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 1090f152: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1090f156: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 1090f158: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 1090f15c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090f15f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090f160: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090f163: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f165: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1090f169: jl 0x1090f130 */
  if ((sf != of)) goto L_1090f130;
L_1090f16b: /* 1090f16b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_1090f16c: /* 1090f16c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1090f16f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f171: je 0x1090f181 */
  if (zf) goto L_1090f181;
L_1090f173: /* 1090f173: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090f179: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f17b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f17d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f17e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090f181u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090f181: /* 1090f181: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 1090f184: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f185: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f186: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f187: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1090f188: ret  */
  esp += 4; SPILL(); return;
}

void f_1090f10d(void) {
  LOAD_REGS();
L_1090f10d: /* 1090f10d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1090f110: /* 1090f110: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 1090f118: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f11b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1090f11c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f11e: jl 0x1090f110 */
  if ((sf != of)) goto L_1090f110;
L_1090f120: /* 1090f120: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f123: jle 0x1090f16c */
  if ((zf || sf != of)) goto L_1090f16c;
L_1090f125: /* 1090f125: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 1090f129: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f12a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1090f130: /* 1090f130: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 1090f132: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1090f136: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 1090f139: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f13fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090f13f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f140: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090f145u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090f145: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f148: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f14b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090f14c: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090f14e: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 1090f152: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1090f156: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 1090f158: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 1090f15c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090f15f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090f160: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090f163: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f165: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1090f169: jl 0x1090f130 */
  if ((sf != of)) goto L_1090f130;
L_1090f16b: /* 1090f16b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_1090f16c: /* 1090f16c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1090f16f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f171: je 0x1090f181 */
  if (zf) goto L_1090f181;
L_1090f173: /* 1090f173: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090f179: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f17b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f17d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f17e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090f181u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090f181: /* 1090f181: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 1090f184: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f185: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f186: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f187: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1090f188: ret  */
  esp += 4; SPILL(); return;
}

void f_1090f1c0(void) {
  LOAD_REGS();
L_1090f1c0: /* 1090f1c0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 1090f1c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f1c5: je 0x1090f1f1 */
  if (zf) goto L_1090f1f1;
L_1090f1c7: /* 1090f1c7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f1c9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090f1cc: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090f1d0: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f1d3: jle 0x1090f1ec */
  if ((zf || sf != of)) goto L_1090f1ec;
L_1090f1d5: /* 1090f1d5: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 1090f1d8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1090f1d9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090f1db: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1090f1dd: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 1090f1e0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090f1e3: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090f1e7: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f1ea: jg 0x1090f1d5 */
  if ((!zf && sf == of)) goto L_1090f1d5;
L_1090f1ec: /* 1090f1ec: jmp 0x10901262 */
  SPILL(); f_10901262(); return;
L_1090f1f1: /* 1090f1f1: ret  */
  esp += 4; SPILL(); return;
}

void f_1090f210(void) {
  LOAD_REGS();
L_1090f210: /* 1090f210: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090f213: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090f217: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f21a: jle 0x1090f237 */
  if ((zf || sf != of)) goto L_1090f237;
L_1090f21c: /* 1090f21c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090f220: /* 1090f220: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 1090f223: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1090f224: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090f226: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1090f228: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 1090f22b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090f22e: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090f232: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f235: jg 0x1090f220 */
  if ((!zf && sf == of)) goto L_1090f220;
L_1090f237: /* 1090f237: jmp 0x1090123f */
  SPILL(); f_1090123f(); return;
}

void f_1090f250(void) {
  LOAD_REGS();
L_1090f250: /* 1090f250: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f251: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090f252: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090f253: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f254: mov esi, ecx */
  esi = ecx;
/* 1090f256: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 1090f259: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090f25f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f261: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f263: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1090f266: push 0x1092eb7c */
  { uint32_t v = 0x1092eb7cu; esp -= 4; W32(esp, v); }
/* 1090f26b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f26c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090f26eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f26e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f271: mov ebp, eax */
  ebp = eax;
/* 1090f273: xor ebx, ebx */
  ebx = 0;
/* 1090f275: xor eax, eax */
  eax = 0;
/* 1090f277: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f279: jle 0x1090f290 */
  if ((zf || sf != of)) goto L_1090f290;
L_1090f27b: /* 1090f27b: jmp 0x1090f280 */
  goto L_1090f280;
L_1090f280: /* 1090f280: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 1090f288: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f28b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1090f28c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f28e: jl 0x1090f280 */
  if ((sf != of)) goto L_1090f280;
L_1090f290: /* 1090f290: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f293: jle 0x1090f2dc */
  if ((zf || sf != of)) goto L_1090f2dc;
L_1090f295: /* 1090f295: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 1090f299: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f29a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1090f2a0: /* 1090f2a0: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 1090f2a2: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1090f2a6: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 1090f2a9: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f2afu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090f2af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f2b0: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090f2b5u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090f2b5: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f2b8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f2bb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090f2bc: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090f2be: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 1090f2c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1090f2c6: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 1090f2c8: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 1090f2cc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090f2cf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090f2d0: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090f2d3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f2d5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1090f2d9: jl 0x1090f2a0 */
  if ((sf != of)) goto L_1090f2a0;
L_1090f2db: /* 1090f2db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_1090f2dc: /* 1090f2dc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1090f2df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f2e1: je 0x1090f2f1 */
  if (zf) goto L_1090f2f1;
L_1090f2e3: /* 1090f2e3: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090f2e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f2eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f2ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f2ee: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090f2f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090f2f1: /* 1090f2f1: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 1090f2f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f2f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f2f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f2f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1090f2f8: ret  */
  esp += 4; SPILL(); return;
}

void f_1090f27d(void) {
  LOAD_REGS();
L_1090f27d: /* 1090f27d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1090f280: /* 1090f280: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 1090f288: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f28b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1090f28c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f28e: jl 0x1090f280 */
  if ((sf != of)) goto L_1090f280;
L_1090f290: /* 1090f290: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f293: jle 0x1090f2dc */
  if ((zf || sf != of)) goto L_1090f2dc;
L_1090f295: /* 1090f295: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 1090f299: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f29a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1090f2a0: /* 1090f2a0: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 1090f2a2: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1090f2a6: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 1090f2a9: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f2afu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090f2af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f2b0: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090f2b5u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090f2b5: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090f2b8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f2bb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090f2bc: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090f2be: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 1090f2c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1090f2c6: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 1090f2c8: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 1090f2cc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090f2cf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090f2d0: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090f2d3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f2d5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 1090f2d9: jl 0x1090f2a0 */
  if ((sf != of)) goto L_1090f2a0;
L_1090f2db: /* 1090f2db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_1090f2dc: /* 1090f2dc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 1090f2df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f2e1: je 0x1090f2f1 */
  if (zf) goto L_1090f2f1;
L_1090f2e3: /* 1090f2e3: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090f2e9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f2eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f2ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f2ee: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090f2f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090f2f1: /* 1090f2f1: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 1090f2f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f2f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f2f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f2f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1090f2f8: ret  */
  esp += 4; SPILL(); return;
}

void f_1090f330(void) {
  LOAD_REGS();
L_1090f330: /* 1090f330: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 1090f333: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f335: je 0x1090f361 */
  if (zf) goto L_1090f361;
L_1090f337: /* 1090f337: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f339: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090f33c: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090f340: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f343: jle 0x1090f35c */
  if ((zf || sf != of)) goto L_1090f35c;
L_1090f345: /* 1090f345: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 1090f348: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1090f349: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090f34b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1090f34d: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 1090f350: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090f353: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090f357: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f35a: jg 0x1090f345 */
  if ((!zf && sf == of)) goto L_1090f345;
L_1090f35c: /* 1090f35c: jmp 0x1090123f */
  SPILL(); f_1090123f(); return;
L_1090f361: /* 1090f361: ret  */
  esp += 4; SPILL(); return;
}

void f_1090f380(void) {
  LOAD_REGS();
L_1090f380: /* 1090f380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f381: mov esi, ecx */
  esi = ecx;
/* 1090f383: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090f386: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f387: xor edi, edi */
  edi = 0;
/* 1090f389: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090f38b: jle 0x1090f3a5 */
  if ((zf || sf != of)) goto L_1090f3a5;
L_1090f38d: /* 1090f38d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090f38e: xor ebx, ebx */
  ebx = 0;
L_1090f390: /* 1090f390: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1090f392: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090f394: call 0x10901361 */
  esp -= 4; W32(esp, 0x1090f399u); SPILL(); f_10901361(); if (g_unwind) return; RELOAD();
/* 1090f399: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090f39c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1090f39d: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090f3a0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f3a2: jl 0x1090f390 */
  if ((sf != of)) goto L_1090f390;
L_1090f3a4: /* 1090f3a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_1090f3a5: /* 1090f3a5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1090f3a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f3aa: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 1090f3ac: mov ecx, esi */
  ecx = esi;
/* 1090f3ae: call dword ptr [0x10959b90] */
  esp -= 4; W32(esp, 0x1090f3b4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 1090f3b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090f3b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f3b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090f3d0(void) {
  LOAD_REGS();
L_1090f3d0: /* 1090f3d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090f3d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f3d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f3d3: mov edi, ecx */
  edi = ecx;
/* 1090f3d5: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 1090f3d8: xor ebp, ebp */
  ebp = 0;
/* 1090f3da: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 1090f3db: js 0x1090f43d */
  if (sf) goto L_1090f43d;
L_1090f3dd: /* 1090f3dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090f3de: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 1090f3e1: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
L_1090f3e4: /* 1090f3e4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1090f3e8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 1090f3ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f3eb: lea ecx, [ebx + ecx + 4] */
  ecx = (uint32_t)(ebx + ecx + 0x4u);
/* 1090f3ef: call dword ptr [0x10959b74] */
  esp -= 4; W32(esp, 0x1090f3f5u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 1090f3f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f3f7: je 0x1090f404 */
  if (zf) goto L_1090f404;
L_1090f3f9: /* 1090f3f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090f3fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f3fc: mov ecx, edi */
  ecx = edi;
/* 1090f3fe: call 0x10901285 */
  esp -= 4; W32(esp, 0x1090f403u); SPILL(); f_10901285(); if (g_unwind) return; RELOAD();
/* 1090f403: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_1090f404: /* 1090f404: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 1090f405: sub ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1090f408: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090f40a: jge 0x1090f3e4 */
  if ((sf == of)) goto L_1090f3e4;
L_1090f40c: /* 1090f40c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f40e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f40f: je 0x1090f43d */
  if (zf) goto L_1090f43d;
L_1090f411: /* 1090f411: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 1090f414: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 1090f417: lea eax, [edx + edx + 8] */
  eax = (uint32_t)(edx + edx + 0x8u);
/* 1090f41b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f41d: jle 0x1090f436 */
  if ((zf || sf != of)) goto L_1090f436;
L_1090f41f: /* 1090f41f: nop  */
L_1090f420: /* 1090f420: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 1090f423: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1090f424: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1090f426: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 1090f428: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 1090f42b: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 1090f42e: lea edx, [ecx + ecx + 8] */
  edx = (uint32_t)(ecx + ecx + 0x8u);
/* 1090f432: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f434: jg 0x1090f420 */
  if ((!zf && sf == of)) goto L_1090f420;
L_1090f436: /* 1090f436: mov ecx, edi */
  ecx = edi;
/* 1090f438: call 0x109010dc */
  esp -= 4; W32(esp, 0x1090f43du); SPILL(); f_109010dc(); if (g_unwind) return; RELOAD();
L_1090f43d: /* 1090f43d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090f43e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f43f: mov eax, ebp */
  eax = ebp;
/* 1090f441: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f442: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090f470(void) {
  LOAD_REGS();
L_1090f470: /* 1090f470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090f471: mov ebp, esp */
  ebp = esp;
/* 1090f473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090f475: push 0x1091c110 */
  { uint32_t v = 0x1091c110u; esp -= 4; W32(esp, v); }
/* 1090f47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090f480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090f488: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090f48b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090f48c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f48d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f48e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 1090f491: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090f494: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090f496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f497: mov esi, ecx */
  esi = ecx;
/* 1090f499: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090f4a0: call 0x10901488 */
  esp -= 4; W32(esp, 0x1090f4a5u); SPILL(); f_10901488(); if (g_unwind) return; RELOAD();
/* 1090f4a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f4a7: je 0x1090f4b2 */
  if (zf) goto L_1090f4b2;
L_1090f4a9: /* 1090f4a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f4aa: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 1090f4ad: call 0x10901438 */
  esp -= 4; W32(esp, 0x1090f4b2u); SPILL(); f_10901438(); if (g_unwind) return; RELOAD();
L_1090f4b2: /* 1090f4b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090f4b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090f4b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f4b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090f4be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f4bf: mov esp, ebp */
  esp = ebp;
/* 1090f4c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f4c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090f4c5(void) {
  LOAD_REGS();
L_1090f4c5: /* 1090f4c5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090f4c8: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090f4cd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090f4d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f4d1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1090f4d4: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090f4d9u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090f4d9(); return;
}

void f_1090f4d9(void) {
  LOAD_REGS();
L_1090f4d9: /* 1090f4d9: push 0x109218ac */
  { uint32_t v = 0x109218acu; esp -= 4; W32(esp, v); }
/* 1090f4de: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090f4e3: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090f4e9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090f4e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f4ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090f4ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090f4f0: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090f4f5u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090f4f5: guest_badaddr(0x1090f4f5); return;
}

void f_1090f530(void) {
  LOAD_REGS();
L_1090f530: /* 1090f530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090f531: mov ebp, esp */
  ebp = esp;
/* 1090f533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090f535: push 0x1091c131 */
  { uint32_t v = 0x1091c131u; esp -= 4; W32(esp, v); }
/* 1090f53a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090f540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090f548: sub esp, 0x238 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x238u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090f54e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090f551: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f553: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090f554: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f555: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f556: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090f559: mov edi, ecx */
  edi = ecx;
/* 1090f55b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090f562: jne 0x1090f56d */
  if (!zf) goto L_1090f56d;
L_1090f564: /* 1090f564: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 1090f567: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f56du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
L_1090f56d: /* 1090f56d: mov ebx, dword ptr [0x10959d74] */
  ebx = R32((uint32_t)(0x10959d74u));
/* 1090f573: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f574: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f57a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f57b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090f57du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f57d: lea ecx, [ebp - 0x244] */
  ecx = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f583: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f586: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f587: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x1090f58du); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 1090f58d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f590: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090f593: jl 0x1090f5ae */
  if ((sf != of)) goto L_1090f5ae;
L_1090f595: /* 1090f595: mov ecx, 0x2e */
  ecx = 0x2eu;
/* 1090f59a: cmp word ptr [ebp + eax*2 - 0x24c], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + eax*2 + 0xfffffdb4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f5a2: je 0x1090f5c3 */
  if (zf) goto L_1090f5c3;
L_1090f5a4: /* 1090f5a4: cmp word ptr [ebp + eax*2 - 0x24e], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + eax*2 + 0xfffffdb2u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f5ac: je 0x1090f5c3 */
  if (zf) goto L_1090f5c3;
L_1090f5ae: /* 1090f5ae: lea edx, [ebp - 0x244] */
  edx = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f5b4: push 0x1092df2c */
  { uint32_t v = 0x1092df2cu; esp -= 4; W32(esp, v); }
/* 1090f5b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090f5ba: call dword ptr [0x10959d48] */
  esp -= 4; W32(esp, 0x1090f5c0u); SPILL(); f_4e35ad(); if (g_unwind) return; /* Core!?appStrcat@@YAPAGPAGPBG@Z */ RELOAD();
/* 1090f5c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090f5c3: /* 1090f5c3: mov esi, dword ptr [0x10959d68] */
  esi = R32((uint32_t)(0x10959d68u));
/* 1090f5c9: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f5cf: push 0x1092f4b8 */
  { uint32_t v = 0x1092f4b8u; esp -= 4; W32(esp, v); }
/* 1090f5d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f5d5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090f5d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f5d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f5da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f5dc: jne 0x1090f5f1 */
  if (!zf) goto L_1090f5f1;
L_1090f5de: /* 1090f5de: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 1090f5e1: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f5e7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090f5e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f5e8: lea ecx, [ebp - 0x244] */
  ecx = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f5ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f5ef: jmp 0x1090f617 */
  goto L_1090f617;
L_1090f5f1: /* 1090f5f1: lea edx, [ebp - 0x244] */
  edx = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f5f7: push 0x1092f49c */
  { uint32_t v = 0x1092f49cu; esp -= 4; W32(esp, v); }
/* 1090f5fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090f5fd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090f5ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f5ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f602: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f604: jne 0x1090f61c */
  if (!zf) goto L_1090f61c;
L_1090f606: /* 1090f606: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 1090f609: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f60fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090f60f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f610: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_1090f617: /* 1090f617: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090f619u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f619: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090f61c: /* 1090f61c: lea ecx, [ebp - 0x244] */
  ecx = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f623: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090f626: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090f62cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090f62c: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090f62f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1090f632: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090f633: mov ecx, edi */
  ecx = edi;
/* 1090f635: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090f639: call 0x10901357 */
  esp -= 4; W32(esp, 0x1090f63eu); SPILL(); f_10901357(); if (g_unwind) return; RELOAD();
/* 1090f63e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090f641: mov esi, eax */
  esi = eax;
/* 1090f643: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090f647: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090f64du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090f64d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f64f: jne 0x1090f6a6 */
  if (!zf) goto L_1090f6a6;
L_1090f651: /* 1090f651: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090f654: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f656: jne 0x1090f66f */
  if (!zf) goto L_1090f66f;
L_1090f658: /* 1090f658: mov eax, dword ptr [0x10959d98] */
  eax = R32((uint32_t)(0x10959d98u));
/* 1090f65d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090f65f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f661: lea eax, [ebp - 0x244] */
  eax = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f668: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090f66bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f66b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090f66d: jl 0x1090f6a6 */
  if ((sf != of)) goto L_1090f6a6;
L_1090f66f: /* 1090f66f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 1090f672: call 0x10901483 */
  esp -= 4; W32(esp, 0x1090f677u); SPILL(); f_10901483(); if (g_unwind) return; RELOAD();
/* 1090f677: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f678: lea ecx, [ebp - 0x244] */
  ecx = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f67e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f67f: mov ecx, edi */
  ecx = edi;
/* 1090f681: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090f685: call 0x10901393 */
  esp -= 4; W32(esp, 0x1090f68au); SPILL(); f_10901393(); if (g_unwind) return; RELOAD();
/* 1090f68a: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 1090f68d: mov esi, eax */
  esi = eax;
/* 1090f68f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090f693: call 0x10901497 */
  esp -= 4; W32(esp, 0x1090f698u); SPILL(); f_10901497(); if (g_unwind) return; RELOAD();
/* 1090f698: lea edx, [ebp - 0x244] */
  edx = (uint32_t)(ebp + 0xfffffdbcu);
/* 1090f69e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090f69f: mov ecx, esi */
  ecx = esi;
/* 1090f6a1: call 0x1090137f */
  esp -= 4; W32(esp, 0x1090f6a6u); SPILL(); f_1090137f(); if (g_unwind) return; RELOAD();
L_1090f6a6: /* 1090f6a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090f6a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090f6aa: mov eax, esi */
  eax = esi;
/* 1090f6ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f6ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090f6b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f6b5: mov esp, ebp */
  esp = ebp;
/* 1090f6b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f6b8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090f6bb(void) {
  LOAD_REGS();
L_1090f6bb: /* 1090f6bb: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1090f6be: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090f6c3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090f6c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f6c7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1090f6ca: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090f6cfu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090f6cf(); return;
}

void f_1090f6cf(void) {
  LOAD_REGS();
L_1090f6cf: /* 1090f6cf: push 0x109218f0 */
  { uint32_t v = 0x109218f0u; esp -= 4; W32(esp, v); }
/* 1090f6d4: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090f6d9: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090f6dfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090f6df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f6e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090f6e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090f6e6: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090f6ebu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090f6eb: guest_badaddr(0x1090f6eb); return;
}

void f_1090f760(void) {
  LOAD_REGS();
L_1090f760: /* 1090f760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090f761: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090f762: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1090f766: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f767: mov ebx, ecx */
  ebx = ecx;
/* 1090f769: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f76a: mov ecx, ebp */
  ecx = ebp;
/* 1090f76c: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f772u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090f772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f773: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090f778u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090f778: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 1090f77b: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 1090f77e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f781: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090f782: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090f784: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 1090f787: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f78a: je 0x1090f7b1 */
  if (zf) goto L_1090f7b1;
L_1090f78c: /* 1090f78c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090f790: /* 1090f790: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1090f792: lea edi, [esi + esi*2] */
  edi = (uint32_t)(esi + esi*2);
/* 1090f795: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1090f798: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090f799: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 1090f79d: call dword ptr [0x10959b70] */
  esp -= 4; W32(esp, 0x1090f7a3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 1090f7a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f7a5: jne 0x1090f7ba */
  if (!zf) goto L_1090f7ba;
L_1090f7a7: /* 1090f7a7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1090f7a9: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 1090f7ac: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f7af: jne 0x1090f790 */
  if (!zf) goto L_1090f790;
L_1090f7b1: /* 1090f7b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090f7b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f7b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f7b4: xor eax, eax */
  eax = 0;
/* 1090f7b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f7b7: ret 4 */
  esp += 8; SPILL(); return;
L_1090f7ba: /* 1090f7ba: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1090f7bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090f7bd: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 1090f7c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090f7c1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 1090f7c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090f7c5: lea eax, [edx + eax + 0x10] */
  eax = (uint32_t)(edx + eax + 0x10u);
/* 1090f7c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090f7ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090f7f0(void) {
  LOAD_REGS();
L_1090f7f0: /* 1090f7f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090f7f1: mov ebp, esp */
  ebp = esp;
/* 1090f7f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090f7f5: push 0x1091c183 */
  { uint32_t v = 0x1091c183u; esp -= 4; W32(esp, v); }
/* 1090f7fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090f800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090f808: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090f80b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090f80c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f80d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f80e: xor edi, edi */
  edi = 0;
/* 1090f810: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090f813: mov esi, ecx */
  esi = ecx;
/* 1090f815: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f816: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 1090f819: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1090f81c: call 0x10901212 */
  esp -= 4; W32(esp, 0x1090f821u); SPILL(); f_10901212(); if (g_unwind) return; RELOAD();
/* 1090f821: mov ecx, esi */
  ecx = esi;
/* 1090f823: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 1090f82a: call 0x10901262 */
  esp -= 4; W32(esp, 0x1090f82fu); SPILL(); f_10901262(); if (g_unwind) return; RELOAD();
/* 1090f82f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090f832: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x1090f838u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 1090f838: mov eax, dword ptr [0x10959d98] */
  eax = R32((uint32_t)(0x10959d98u));
/* 1090f83d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090f83f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1090f842: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f843: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090f844: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 1090f847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f848: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090f84c: call dword ptr [0x10959bcc] */
  esp -= 4; W32(esp, 0x1090f852u); SPILL(); f_4e3c24(); if (g_unwind) return; /* Core!?appLoadFileToString@@YAHAAVFString@@PBGPAVFFileManager@@@Z */ RELOAD();
/* 1090f852: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f855: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f857: je 0x1090fa21 */
  if (zf) goto L_1090fa21;
L_1090f85d: /* 1090f85d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090f860: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090f866u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090f866: mov ebx, eax */
  ebx = eax;
/* 1090f868: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 1090f86b: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 1090f86e: mov edi, edi */
  edi = edi;
L_1090f870: /* 1090f870: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090f873: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f875: jne 0x1090fa21 */
  if (!zf) goto L_1090fa21;
L_1090f87b: /* 1090f87b: jmp 0x1090f880 */
  goto L_1090f880;
L_1090f880: /* 1090f880: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 1090f883: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f887: je 0x1090fa19 */
  if (zf) goto L_1090fa19;
L_1090f88d: /* 1090f88d: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f891: je 0x1090fa19 */
  if (zf) goto L_1090fa19;
L_1090f897: /* 1090f897: mov edi, ebx */
  edi = ebx;
/* 1090f899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090f8a0: /* 1090f8a0: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 1090f8a3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f8a6: je 0x1090f8bf */
  if (zf) goto L_1090f8bf;
L_1090f8a8: /* 1090f8a8: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8ac: je 0x1090f8b9 */
  if (zf) goto L_1090f8b9;
L_1090f8ae: /* 1090f8ae: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8b2: je 0x1090f8b9 */
  if (zf) goto L_1090f8b9;
L_1090f8b4: /* 1090f8b4: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090f8b7: jmp 0x1090f8a0 */
  goto L_1090f8a0;
L_1090f8b9: /* 1090f8b9: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8bd: jne 0x1090f8c6 */
  if (!zf) goto L_1090f8c6;
L_1090f8bf: /* 1090f8bf: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_1090f8c6: /* 1090f8c6: mov word ptr [ebx], 0 */
  W16((uint32_t)(ebx), 0x0u);
/* 1090f8cb: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090f8ce: cmp word ptr [edi], 0x5b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8d2: jne 0x1090f9a8 */
  if (!zf) goto L_1090f9a8;
L_1090f8d8: /* 1090f8d8: mov esi, dword ptr [0x10959d6c] */
  esi = R32((uint32_t)(0x10959d6cu));
/* 1090f8de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f8df: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090f8e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f8e1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f8e4: cmp word ptr [edi + eax*2 - 2], 0x5d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8ea: jne 0x1090f9a8 */
  if (!zf) goto L_1090f9a8;
L_1090f8f0: /* 1090f8f0: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1090f8f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f8f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090f8f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f8f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f8f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f8fa: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090f8fd: mov word ptr [edi + eax*2 - 2], 0 */
  W16((uint32_t)(edi + eax*2 + 0xfffffffeu), 0x0u);
/* 1090f904: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090f90au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090f90a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090f90d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f90e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090f911: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090f915: call 0x1090128a */
  esp -= 4; W32(esp, 0x1090f91au); SPILL(); f_1090128a(); if (g_unwind) return; RELOAD();
/* 1090f91a: mov esi, eax */
  esi = eax;
/* 1090f91c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090f91f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 1090f922: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090f926: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090f92cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090f92c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f92e: jne 0x1090f870 */
  if (!zf) goto L_1090f870;
L_1090f934: /* 1090f934: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f937: call 0x109013ac */
  esp -= 4; W32(esp, 0x1090f93cu); SPILL(); f_109013ac(); if (g_unwind) return; RELOAD();
/* 1090f93c: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f93f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090f943: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 1090f946: mov dword ptr [ebp - 0x3c], 8 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x8u);
/* 1090f94d: call 0x1090123f */
  esp -= 4; W32(esp, 0x1090f952u); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
/* 1090f952: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090f955: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f958: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090f959: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f95a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090f95e: call 0x10901122 */
  esp -= 4; W32(esp, 0x1090f963u); SPILL(); f_10901122(); if (g_unwind) return; RELOAD();
/* 1090f963: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 1090f966: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 1090f969: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f96b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090f96f: je 0x1090f97f */
  if (zf) goto L_1090f97f;
L_1090f971: /* 1090f971: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090f977: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f979: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f97b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f97c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090f97fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090f97f: /* 1090f97f: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 1090f982: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 1090f985: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 1090f988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f989: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f98a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f98d: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090f991: call 0x109010d2 */
  esp -= 4; W32(esp, 0x1090f996u); SPILL(); f_109010d2(); if (g_unwind) return; RELOAD();
/* 1090f996: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f999: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090f99d: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090f9a3u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090f9a3: jmp 0x1090f870 */
  goto L_1090f870;
L_1090f9a8: /* 1090f9a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090f9ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f9ad: je 0x1090f870 */
  if (zf) goto L_1090f870;
L_1090f9b3: /* 1090f9b3: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f9b7: je 0x1090f870 */
  if (zf) goto L_1090f870;
L_1090f9bd: /* 1090f9bd: push 0x1092f4d0 */
  { uint32_t v = 0x1092f4d0u; esp -= 4; W32(esp, v); }
/* 1090f9c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f9c3: call dword ptr [0x10959b6c] */
  esp -= 4; W32(esp, 0x1090f9c9u); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* 1090f9c9: mov esi, eax */
  esi = eax;
/* 1090f9cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f9ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f9d0: je 0x1090f870 */
  if (zf) goto L_1090f870;
L_1090f9d6: /* 1090f9d6: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 1090f9db: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1090f9de: cmp word ptr [esi], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f9e2: jne 0x1090fa0a */
  if (!zf) goto L_1090fa0a;
L_1090f9e4: /* 1090f9e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f9e5: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x1090f9ebu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 1090f9eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f9ee: cmp word ptr [esi + eax*2 - 2], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f9f4: jne 0x1090fa0a */
  if (!zf) goto L_1090fa0a;
L_1090f9f6: /* 1090f9f6: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1090f9f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f9fa: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x1090fa00u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 1090fa00: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090fa03: mov word ptr [esi + eax*2 - 2], 0 */
  W16((uint32_t)(esi + eax*2 + 0xfffffffeu), 0x0u);
L_1090fa0a: /* 1090fa0a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1090fa0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fa0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fa0f: call 0x10901352 */
  esp -= 4; W32(esp, 0x1090fa14u); SPILL(); f_10901352(); if (g_unwind) return; RELOAD();
/* 1090fa14: jmp 0x1090f870 */
  goto L_1090f870;
L_1090fa19: /* 1090fa19: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090fa1c: jmp 0x1090f880 */
  goto L_1090f880;
L_1090fa21: /* 1090fa21: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090fa24: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090fa28: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090fa2eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090fa2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090fa31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fa32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fa33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090fa3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090fa3b: mov esp, ebp */
  esp = ebp;
/* 1090fa3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090fa3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090f87d(void) {
  LOAD_REGS();
  goto L_1090f87d;
L_1090f870: /* 1090f870: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090f873: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f875: jne 0x1090fa21 */
  if (!zf) goto L_1090fa21;
L_1090f87b: /* 1090f87b: jmp 0x1090f880 */
  goto L_1090f880;
L_1090f87d: /* 1090f87d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1090f880: /* 1090f880: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 1090f883: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f887: je 0x1090fa19 */
  if (zf) goto L_1090fa19;
L_1090f88d: /* 1090f88d: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f891: je 0x1090fa19 */
  if (zf) goto L_1090fa19;
L_1090f897: /* 1090f897: mov edi, ebx */
  edi = ebx;
/* 1090f899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090f8a0: /* 1090f8a0: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 1090f8a3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f8a6: je 0x1090f8bf */
  if (zf) goto L_1090f8bf;
L_1090f8a8: /* 1090f8a8: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8ac: je 0x1090f8b9 */
  if (zf) goto L_1090f8b9;
L_1090f8ae: /* 1090f8ae: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8b2: je 0x1090f8b9 */
  if (zf) goto L_1090f8b9;
L_1090f8b4: /* 1090f8b4: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090f8b7: jmp 0x1090f8a0 */
  goto L_1090f8a0;
L_1090f8b9: /* 1090f8b9: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8bd: jne 0x1090f8c6 */
  if (!zf) goto L_1090f8c6;
L_1090f8bf: /* 1090f8bf: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_1090f8c6: /* 1090f8c6: mov word ptr [ebx], 0 */
  W16((uint32_t)(ebx), 0x0u);
/* 1090f8cb: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090f8ce: cmp word ptr [edi], 0x5b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x5bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8d2: jne 0x1090f9a8 */
  if (!zf) goto L_1090f9a8;
L_1090f8d8: /* 1090f8d8: mov esi, dword ptr [0x10959d6c] */
  esi = R32((uint32_t)(0x10959d6cu));
/* 1090f8de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f8df: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090f8e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f8e1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f8e4: cmp word ptr [edi + eax*2 - 2], 0x5d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x5du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f8ea: jne 0x1090f9a8 */
  if (!zf) goto L_1090f9a8;
L_1090f8f0: /* 1090f8f0: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1090f8f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f8f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090f8f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090f8f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f8f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f8fa: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090f8fd: mov word ptr [edi + eax*2 - 2], 0 */
  W16((uint32_t)(edi + eax*2 + 0xfffffffeu), 0x0u);
/* 1090f904: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090f90au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090f90a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090f90d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090f90e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090f911: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090f915: call 0x1090128a */
  esp -= 4; W32(esp, 0x1090f91au); SPILL(); f_1090128a(); if (g_unwind) return; RELOAD();
/* 1090f91a: mov esi, eax */
  esi = eax;
/* 1090f91c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090f91f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 1090f922: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090f926: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090f92cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090f92c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f92e: jne 0x1090f870 */
  if (!zf) goto L_1090f870;
L_1090f934: /* 1090f934: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f937: call 0x109013ac */
  esp -= 4; W32(esp, 0x1090f93cu); SPILL(); f_109013ac(); if (g_unwind) return; RELOAD();
/* 1090f93c: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f93f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090f943: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 1090f946: mov dword ptr [ebp - 0x3c], 8 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x8u);
/* 1090f94d: call 0x1090123f */
  esp -= 4; W32(esp, 0x1090f952u); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
/* 1090f952: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090f955: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f958: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090f959: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f95a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090f95e: call 0x10901122 */
  esp -= 4; W32(esp, 0x1090f963u); SPILL(); f_10901122(); if (g_unwind) return; RELOAD();
/* 1090f963: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 1090f966: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 1090f969: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f96b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090f96f: je 0x1090f97f */
  if (zf) goto L_1090f97f;
L_1090f971: /* 1090f971: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 1090f977: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090f979: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090f97b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f97c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090f97fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090f97f: /* 1090f97f: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 1090f982: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 1090f985: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 1090f988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090f989: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f98a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f98d: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090f991: call 0x109010d2 */
  esp -= 4; W32(esp, 0x1090f996u); SPILL(); f_109010d2(); if (g_unwind) return; RELOAD();
/* 1090f996: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 1090f999: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090f99d: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090f9a3u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090f9a3: jmp 0x1090f870 */
  goto L_1090f870;
L_1090f9a8: /* 1090f9a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1090f9ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f9ad: je 0x1090f870 */
  if (zf) goto L_1090f870;
L_1090f9b3: /* 1090f9b3: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f9b7: je 0x1090f870 */
  if (zf) goto L_1090f870;
L_1090f9bd: /* 1090f9bd: push 0x1092f4d0 */
  { uint32_t v = 0x1092f4d0u; esp -= 4; W32(esp, v); }
/* 1090f9c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090f9c3: call dword ptr [0x10959b6c] */
  esp -= 4; W32(esp, 0x1090f9c9u); SPILL(); f_4e2220(); if (g_unwind) return; /* Core!?appStrstr@@YAPAGPBG0@Z */ RELOAD();
/* 1090f9c9: mov esi, eax */
  esi = eax;
/* 1090f9cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f9ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090f9d0: je 0x1090f870 */
  if (zf) goto L_1090f870;
L_1090f9d6: /* 1090f9d6: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 1090f9db: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1090f9de: cmp word ptr [esi], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f9e2: jne 0x1090fa0a */
  if (!zf) goto L_1090fa0a;
L_1090f9e4: /* 1090f9e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f9e5: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x1090f9ebu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 1090f9eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090f9ee: cmp word ptr [esi + eax*2 - 2], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 1090f9f4: jne 0x1090fa0a */
  if (!zf) goto L_1090fa0a;
L_1090f9f6: /* 1090f9f6: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1090f9f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090f9fa: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x1090fa00u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 1090fa00: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090fa03: mov word ptr [esi + eax*2 - 2], 0 */
  W16((uint32_t)(esi + eax*2 + 0xfffffffeu), 0x0u);
L_1090fa0a: /* 1090fa0a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 1090fa0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fa0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fa0f: call 0x10901352 */
  esp -= 4; W32(esp, 0x1090fa14u); SPILL(); f_10901352(); if (g_unwind) return; RELOAD();
/* 1090fa14: jmp 0x1090f870 */
  goto L_1090f870;
L_1090fa19: /* 1090fa19: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090fa1c: jmp 0x1090f880 */
  goto L_1090f880;
L_1090fa21: /* 1090fa21: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 1090fa24: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090fa28: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090fa2eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090fa2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090fa31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fa32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fa33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090fa3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090fa3b: mov esp, ebp */
  esp = ebp;
/* 1090fa3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090fa3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090fa41(void) {
  LOAD_REGS();
L_1090fa41: /* 1090fa41: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090fa44: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090fa49: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 1090fa4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090fa4d: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 1090fa50: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090fa55u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090fa55(); return;
}

void f_1090fa55(void) {
  LOAD_REGS();
L_1090fa55: /* 1090fa55: push 0x10921924 */
  { uint32_t v = 0x10921924u; esp -= 4; W32(esp, v); }
/* 1090fa5a: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090fa5f: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090fa65u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090fa65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090fa68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090fa6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090fa6c: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090fa71u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090fa71: guest_badaddr(0x1090fa71); return;
}

void f_1090fb30(void) {
  LOAD_REGS();
L_1090fb30: /* 1090fb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fb31: mov esi, ecx */
  esi = ecx;
/* 1090fb33: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x1090fb39u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 1090fb39: mov eax, esi */
  eax = esi;
/* 1090fb3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fb3c: ret  */
  esp += 4; SPILL(); return;
}

void f_1090fb50(void) {
  LOAD_REGS();
L_1090fb50: /* 1090fb50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090fb51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090fb52: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1090fb56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fb57: mov ebx, ecx */
  ebx = ecx;
/* 1090fb59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fb5a: mov ecx, ebp */
  ecx = ebp;
/* 1090fb5c: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090fb62u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090fb62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090fb63: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090fb68u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090fb68: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 1090fb6b: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 1090fb6e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090fb71: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090fb72: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090fb74: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 1090fb77: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090fb7a: je 0x1090fba1 */
  if (zf) goto L_1090fba1;
L_1090fb7c: /* 1090fb7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090fb80: /* 1090fb80: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1090fb82: lea edi, [esi + esi*8] */
  edi = (uint32_t)(esi + esi*8);
/* 1090fb85: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1090fb88: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090fb89: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 1090fb8d: call dword ptr [0x10959b70] */
  esp -= 4; W32(esp, 0x1090fb93u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 1090fb93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090fb95: jne 0x1090fbaa */
  if (!zf) goto L_1090fbaa;
L_1090fb97: /* 1090fb97: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1090fb99: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 1090fb9c: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090fb9f: jne 0x1090fb80 */
  if (!zf) goto L_1090fb80;
L_1090fba1: /* 1090fba1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fba2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fba3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090fba4: xor eax, eax */
  eax = 0;
/* 1090fba6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090fba7: ret 4 */
  esp += 8; SPILL(); return;
L_1090fbaa: /* 1090fbaa: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1090fbac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fbad: lea edx, [esi + esi*8] */
  edx = (uint32_t)(esi + esi*8);
/* 1090fbb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fbb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090fbb2: lea eax, [eax + edx*4 + 0x10] */
  eax = (uint32_t)(eax + edx*4 + 0x10u);
/* 1090fbb6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090fbb7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090fbe0(void) {
  LOAD_REGS();
L_1090fbe0: /* 1090fbe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fbe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fbe2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 1090fbe4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090fbe6: mov esi, ecx */
  esi = ecx;
/* 1090fbe8: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090fbeeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090fbee: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 1090fbf1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 1090fbf3: je 0x1090fc0a */
  if (zf) goto L_1090fc0a;
L_1090fbf5: /* 1090fbf5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1090fbf9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 1090fbfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090fbfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090fbff: mov ecx, eax */
  ecx = eax;
/* 1090fc01: call 0x10901492 */
  esp -= 4; W32(esp, 0x1090fc06u); SPILL(); f_10901492(); if (g_unwind) return; RELOAD();
/* 1090fc06: mov edi, eax */
  edi = eax;
/* 1090fc08: jmp 0x1090fc0c */
  goto L_1090fc0c;
L_1090fc0a: /* 1090fc0a: xor edi, edi */
  edi = 0;
L_1090fc0c: /* 1090fc0c: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 1090fc0f: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090fc15u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090fc15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090fc16: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090fc1bu); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090fc1b: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090fc1e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 1090fc21: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090fc24: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090fc25: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090fc27: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 1090fc2a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 1090fc2c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 1090fc2f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 1090fc32: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1090fc33: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 1090fc36: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 1090fc39: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 1090fc3c: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090fc40: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090fc42: jge 0x1090fc50 */
  if ((sf == of)) goto L_1090fc50;
L_1090fc44: /* 1090fc44: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090fc46: mov ecx, esi */
  ecx = esi;
/* 1090fc48: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 1090fc4b: call 0x1090123f */
  esp -= 4; W32(esp, 0x1090fc50u); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
L_1090fc50: /* 1090fc50: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 1090fc53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fc54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fc55: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090fc80(void) {
  LOAD_REGS();
L_1090fc80: /* 1090fc80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090fc82: push 0x1091c1ac */
  { uint32_t v = 0x1091c1acu; esp -= 4; W32(esp, v); }
/* 1090fc87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090fc8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090fc8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090fc95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090fc96: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1090fc9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fc9b: mov esi, ecx */
  esi = ecx;
/* 1090fc9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090fc9e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 1090fca1: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 1090fca5: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090fcabu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090fcab: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1090fcaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090fcb0: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 1090fcb3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 1090fcbb: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090fcc1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090fcc1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090fcc5: mov eax, esi */
  eax = esi;
/* 1090fcc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fcc8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090fccf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090fcd2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090fd00(void) {
  LOAD_REGS();
L_1090fd00: /* 1090fd00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fd01: mov esi, ecx */
  esi = ecx;
/* 1090fd03: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090fd06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fd07: xor edi, edi */
  edi = 0;
/* 1090fd09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090fd0b: jle 0x1090fd25 */
  if ((zf || sf != of)) goto L_1090fd25;
L_1090fd0d: /* 1090fd0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090fd0e: xor ebx, ebx */
  ebx = 0;
L_1090fd10: /* 1090fd10: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1090fd12: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090fd14: call 0x10901091 */
  esp -= 4; W32(esp, 0x1090fd19u); SPILL(); f_10901091(); if (g_unwind) return; RELOAD();
/* 1090fd19: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090fd1c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1090fd1d: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090fd20: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090fd22: jl 0x1090fd10 */
  if ((sf != of)) goto L_1090fd10;
L_1090fd24: /* 1090fd24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_1090fd25: /* 1090fd25: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1090fd29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090fd2a: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 1090fd2c: mov ecx, esi */
  ecx = esi;
/* 1090fd2e: call dword ptr [0x10959b90] */
  esp -= 4; W32(esp, 0x1090fd34u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 1090fd34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fd35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fd36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090fd50(void) {
  LOAD_REGS();
L_1090fd50: /* 1090fd50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090fd51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090fd52: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1090fd56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fd57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fd58: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090fd59: mov ebx, ecx */
  ebx = ecx;
/* 1090fd5b: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090fd60u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090fd60: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 1090fd63: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 1090fd66: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090fd69: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090fd6a: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090fd6c: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 1090fd6f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090fd72: je 0x1090fd95 */
  if (zf) goto L_1090fd95;
L_1090fd74: /* 1090fd74: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1090fd76: lea edi, [esi + esi*8] */
  edi = (uint32_t)(esi + esi*8);
/* 1090fd79: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1090fd7c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090fd7d: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 1090fd81: call dword ptr [0x10959b74] */
  esp -= 4; W32(esp, 0x1090fd87u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 1090fd87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090fd89: jne 0x1090fda9 */
  if (!zf) goto L_1090fda9;
L_1090fd8b: /* 1090fd8b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1090fd8d: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 1090fd90: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090fd93: jne 0x1090fd74 */
  if (!zf) goto L_1090fd74;
L_1090fd95: /* 1090fd95: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1090fd99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090fd9a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090fd9b: mov ecx, ebx */
  ecx = ebx;
/* 1090fd9d: call 0x1090123a */
  esp -= 4; W32(esp, 0x1090fda2u); SPILL(); f_1090123a(); if (g_unwind) return; RELOAD();
/* 1090fda2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fda3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fda4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090fda5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090fda6: ret 8 */
  esp += 12; SPILL(); return;
L_1090fda9: /* 1090fda9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 1090fdab: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1090fdaf: lea esi, [esi + esi*8] */
  esi = (uint32_t)(esi + esi*8);
/* 1090fdb2: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 1090fdb5: lea edi, [esi + edx + 0x10] */
  edi = (uint32_t)(esi + edx + 0x10u);
/* 1090fdb9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090fdba: mov ecx, edi */
  ecx = edi;
/* 1090fdbc: call 0x109010fa */
  esp -= 4; W32(esp, 0x1090fdc1u); SPILL(); f_109010fa(); if (g_unwind) return; RELOAD();
/* 1090fdc1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1090fdc4: mov ecx, edi */
  ecx = edi;
/* 1090fdc6: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 1090fdc9: call 0x1090123f */
  esp -= 4; W32(esp, 0x1090fdceu); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
/* 1090fdce: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1090fdd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fdd1: lea eax, [esi + ecx + 0x10] */
  eax = (uint32_t)(esi + ecx + 0x10u);
/* 1090fdd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fdd6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090fdd7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090fdd8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090fe10(void) {
  LOAD_REGS();
L_1090fe10: /* 1090fe10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090fe11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fe12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fe13: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1090fe17: mov esi, ecx */
  esi = ecx;
/* 1090fe19: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090fe1b: je 0x1090fe5d */
  if (zf) goto L_1090fe5d;
L_1090fe1d: /* 1090fe1d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1090fe20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090fe21: call 0x109011ea */
  esp -= 4; W32(esp, 0x1090fe26u); SPILL(); f_109011ea(); if (g_unwind) return; RELOAD();
/* 1090fe26: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1090fe29: xor ebx, ebx */
  ebx = 0;
/* 1090fe2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090fe2d: jle 0x1090fe5d */
  if ((zf || sf != of)) goto L_1090fe5d;
L_1090fe2f: /* 1090fe2f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090fe30: xor ebp, ebp */
  ebp = 0;
L_1090fe32: /* 1090fe32: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 1090fe34: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090fe36: mov ecx, esi */
  ecx = esi;
/* 1090fe38: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090fe3eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090fe3e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 1090fe41: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 1090fe43: je 0x1090fe51 */
  if (zf) goto L_1090fe51;
L_1090fe45: /* 1090fe45: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 1090fe47: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090fe49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090fe4a: mov ecx, eax */
  ecx = eax;
/* 1090fe4c: call 0x10901447 */
  esp -= 4; W32(esp, 0x1090fe51u); SPILL(); f_10901447(); if (g_unwind) return; RELOAD();
L_1090fe51: /* 1090fe51: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 1090fe54: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1090fe55: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1090fe58: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090fe5a: jl 0x1090fe32 */
  if ((sf != of)) goto L_1090fe32;
L_1090fe5c: /* 1090fe5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_1090fe5d: /* 1090fe5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fe5e: mov eax, esi */
  eax = esi;
/* 1090fe60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fe61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090fe62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090fe90(void) {
  LOAD_REGS();
L_1090fe90: /* 1090fe90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090fe92: push 0x1091c1cc */
  { uint32_t v = 0x1091c1ccu; esp -= 4; W32(esp, v); }
/* 1090fe97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090fe9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090fe9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090fea5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090fea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090fea7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fea8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1090feac: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1090feae: mov esi, ecx */
  esi = ecx;
/* 1090feb0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 1090feb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090feb4: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 1090feb7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 1090febb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1090febd: call dword ptr [0x10959bb8] */
  esp -= 4; W32(esp, 0x1090fec3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 1090fec3: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1090fec6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090fec7: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 1090feca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 1090fed2: call dword ptr [0x10959bb8] */
  esp -= 4; W32(esp, 0x1090fed8u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 1090fed8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1090fedc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090fedd: mov eax, esi */
  eax = esi;
/* 1090fedf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090fee0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090fee7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090feea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090ff10(void) {
  LOAD_REGS();
L_1090ff10: /* 1090ff10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ff11: mov esi, ecx */
  esi = ecx;
/* 1090ff13: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090ff16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090ff17: xor edi, edi */
  edi = 0;
/* 1090ff19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090ff1b: jle 0x1090ff35 */
  if ((zf || sf != of)) goto L_1090ff35;
L_1090ff1d: /* 1090ff1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090ff1e: xor ebx, ebx */
  ebx = 0;
L_1090ff20: /* 1090ff20: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1090ff22: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090ff24: call 0x1090106e */
  esp -= 4; W32(esp, 0x1090ff29u); SPILL(); f_1090106e(); if (g_unwind) return; RELOAD();
/* 1090ff29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090ff2c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1090ff2d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1090ff30: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ff32: jl 0x1090ff20 */
  if ((sf != of)) goto L_1090ff20;
L_1090ff34: /* 1090ff34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_1090ff35: /* 1090ff35: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1090ff39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ff3a: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 1090ff3c: mov ecx, esi */
  ecx = esi;
/* 1090ff3e: call dword ptr [0x10959b90] */
  esp -= 4; W32(esp, 0x1090ff44u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 1090ff44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090ff45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090ff46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090ff60(void) {
  LOAD_REGS();
L_1090ff60: /* 1090ff60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090ff61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090ff62: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 1090ff64: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090ff66: mov esi, ecx */
  esi = ecx;
/* 1090ff68: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x1090ff6eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 1090ff6e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1090ff70: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 1090ff73: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 1090ff76: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090ff78: je 0x1090ff8d */
  if (zf) goto L_1090ff8d;
L_1090ff7a: /* 1090ff7a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1090ff7e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 1090ff82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090ff83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ff84: call 0x1090105a */
  esp -= 4; W32(esp, 0x1090ff89u); SPILL(); f_1090105a(); if (g_unwind) return; RELOAD();
/* 1090ff89: mov edi, eax */
  edi = eax;
/* 1090ff8b: jmp 0x1090ff8f */
  goto L_1090ff8f;
L_1090ff8d: /* 1090ff8d: xor edi, edi */
  edi = 0;
L_1090ff8f: /* 1090ff8f: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 1090ff92: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090ff98u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090ff98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ff99: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1090ff9eu); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1090ff9e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 1090ffa1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 1090ffa4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ffa7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1090ffa8: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090ffaa: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 1090ffad: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 1090ffaf: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 1090ffb2: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 1090ffb5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1090ffb6: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 1090ffb9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 1090ffbc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 1090ffbf: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 1090ffc3: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ffc5: jge 0x1090ffd3 */
  if ((sf == of)) goto L_1090ffd3;
L_1090ffc7: /* 1090ffc7: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090ffc9: mov ecx, esi */
  ecx = esi;
/* 1090ffcb: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 1090ffce: call 0x10901262 */
  esp -= 4; W32(esp, 0x1090ffd3u); SPILL(); f_10901262(); if (g_unwind) return; RELOAD();
L_1090ffd3: /* 1090ffd3: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 1090ffd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090ffd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090ffd8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_10910000(void) {
  LOAD_REGS();
L_10910000: /* 10910000: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910002: push 0x1091c1f4 */
  { uint32_t v = 0x1091c1f4u; esp -= 4; W32(esp, v); }
/* 10910007: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1091000d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091000e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910015: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910016: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1091001a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091001b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091001c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091001d: mov edi, ecx */
  edi = ecx;
/* 1091001f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910020: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 10910023: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 10910027: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1091002du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1091002d: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 10910031: lea esi, [edi + 0x10] */
  esi = (uint32_t)(edi + 0x10u);
/* 10910034: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910035: mov ecx, esi */
  ecx = esi;
/* 10910037: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 1091003f: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 10910043: call 0x10901249 */
  esp -= 4; W32(esp, 0x10910048u); SPILL(); f_10901249(); if (g_unwind) return; RELOAD();
/* 10910048: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 1091004f: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 10910052: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 10910055: mov ecx, esi */
  ecx = esi;
/* 10910057: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 1091005c: call 0x1090123f */
  esp -= 4; W32(esp, 0x10910061u); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
/* 10910061: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10910065: mov eax, edi */
  eax = edi;
/* 10910067: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910068: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910069: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091006a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910071: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910074: ret 8 */
  esp += 12; SPILL(); return;
}

void f_109100a0(void) {
  LOAD_REGS();
L_109100a0: /* 109100a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 109100a2: push 0x1091c219 */
  { uint32_t v = 0x1091c219u; esp -= 4; W32(esp, v); }
/* 109100a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 109100ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109100ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 109100b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109100b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109100b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109100b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109100b9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 109100bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 109100c0: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 109100c2: mov esi, ecx */
  esi = ecx;
/* 109100c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109100c5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 109100c9: call dword ptr [0x10959b84] */
  esp -= 4; W32(esp, 0x109100cfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 109100cf: xor ebx, ebx */
  ebx = 0;
/* 109100d1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 109100d4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109100d7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 109100db: jle 0x1091010b */
  if ((zf || sf != of)) goto L_1091010b;
L_109100dd: /* 109100dd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109100de: xor ebp, ebp */
  ebp = 0;
L_109100e0: /* 109100e0: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 109100e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109100e4: mov ecx, esi */
  ecx = esi;
/* 109100e6: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x109100ecu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 109100ec: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 109100ef: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 109100f1: je 0x109100ff */
  if (zf) goto L_109100ff;
L_109100f3: /* 109100f3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 109100f5: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109100f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109100f8: mov ecx, eax */
  ecx = eax;
/* 109100fa: call 0x10901447 */
  esp -= 4; W32(esp, 0x109100ffu); SPILL(); f_10901447(); if (g_unwind) return; RELOAD();
L_109100ff: /* 109100ff: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 10910102: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10910103: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10910106: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10910108: jl 0x109100e0 */
  if ((sf != of)) goto L_109100e0;
L_1091010a: /* 1091010a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_1091010b: /* 1091010b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091010f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910110: mov eax, esi */
  eax = esi;
/* 10910112: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910113: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910114: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1091011b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091011e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10910160(void) {
  LOAD_REGS();
L_10910160: /* 10910160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910162: push 0x1091c238 */
  { uint32_t v = 0x1091c238u; esp -= 4; W32(esp, v); }
/* 10910167: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1091016d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091016e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910177: mov esi, ecx */
  esi = ecx;
/* 10910179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091017a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 1091017e: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x10910184u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 10910184: xor edi, edi */
  edi = 0;
/* 10910186: mov ecx, esi */
  ecx = esi;
/* 10910188: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 1091018c: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 1091018f: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 10910196: call 0x10901262 */
  esp -= 4; W32(esp, 0x1091019bu); SPILL(); f_10901262(); if (g_unwind) return; RELOAD();
/* 1091019b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1091019f: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 109101a2: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 109101a5: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 109101a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109101a9: mov eax, esi */
  eax = esi;
/* 109101ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109101ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 109101b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109101b6: ret  */
  esp += 4; SPILL(); return;
}

void f_109101e0(void) {
  LOAD_REGS();
L_109101e0: /* 109101e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109101e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109101e2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 109101e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109101e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109101e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109101e9: mov ebx, ecx */
  ebx = ecx;
/* 109101eb: call 0x109011e5 */
  esp -= 4; W32(esp, 0x109101f0u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 109101f0: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 109101f3: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 109101f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109101f9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109101fa: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109101fc: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 109101ff: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910202: je 0x10910225 */
  if (zf) goto L_10910225;
L_10910204: /* 10910204: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 10910206: lea edi, [esi + esi*2] */
  edi = (uint32_t)(esi + esi*2);
/* 10910209: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1091020c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1091020d: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 10910211: call dword ptr [0x10959b74] */
  esp -= 4; W32(esp, 0x10910217u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 10910217: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910219: jne 0x10910239 */
  if (!zf) goto L_10910239;
L_1091021b: /* 1091021b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 1091021d: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 10910220: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910223: jne 0x10910204 */
  if (!zf) goto L_10910204;
L_10910225: /* 10910225: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10910229: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1091022a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1091022b: mov ecx, ebx */
  ecx = ebx;
/* 1091022d: call 0x1090133e */
  esp -= 4; W32(esp, 0x10910232u); SPILL(); f_1090133e(); if (g_unwind) return; RELOAD();
/* 10910232: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910233: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910234: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910235: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910236: ret 8 */
  esp += 12; SPILL(); return;
L_10910239: /* 10910239: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1091023d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 1091023f: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 10910242: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10910245: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910246: lea ecx, [esi + eax + 0x10] */
  ecx = (uint32_t)(esi + eax + 0x10u);
/* 1091024a: call 0x109011e0 */
  esp -= 4; W32(esp, 0x1091024fu); SPILL(); f_109011e0(); if (g_unwind) return; RELOAD();
/* 1091024f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 10910251: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910252: lea eax, [esi + ecx + 0x10] */
  eax = (uint32_t)(esi + ecx + 0x10u);
/* 10910256: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910257: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910258: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910259: ret 8 */
  esp += 12; SPILL(); return;
}

void f_10910280(void) {
  LOAD_REGS();
L_10910280: /* 10910280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910281: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910282: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 10910286: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910287: mov esi, ecx */
  esi = ecx;
/* 10910289: call 0x109014e2 */
  esp -= 4; W32(esp, 0x1091028eu); SPILL(); f_109014e2(); if (g_unwind) return; RELOAD();
/* 1091028e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 10910291: mov ecx, esi */
  ecx = esi;
/* 10910293: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 10910296: call 0x10901262 */
  esp -= 4; W32(esp, 0x1091029bu); SPILL(); f_10901262(); if (g_unwind) return; RELOAD();
/* 1091029b: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 1091029e: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 109102a1: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 109102a4: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 109102a7: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 109102aa: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 109102ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109102ae: mov eax, esi */
  eax = esi;
/* 109102b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109102b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_109102d0(void) {
  LOAD_REGS();
L_109102d0: /* 109102d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109102d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109102d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109102d3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 109102d7: mov esi, ecx */
  esi = ecx;
/* 109102d9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109102db: je 0x10910320 */
  if (zf) goto L_10910320;
L_109102dd: /* 109102dd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 109102e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109102e1: call 0x10901212 */
  esp -= 4; W32(esp, 0x109102e6u); SPILL(); f_10901212(); if (g_unwind) return; RELOAD();
/* 109102e6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 109102e9: xor ebx, ebx */
  ebx = 0;
/* 109102eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 109102ed: jle 0x10910320 */
  if ((zf || sf != of)) goto L_10910320;
L_109102ef: /* 109102ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109102f0: xor ebp, ebp */
  ebp = 0;
L_109102f2: /* 109102f2: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 109102f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109102f6: mov ecx, esi */
  ecx = esi;
/* 109102f8: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x109102feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 109102fe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10910300: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 10910303: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 10910306: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910308: je 0x10910314 */
  if (zf) goto L_10910314;
L_1091030a: /* 1091030a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1091030c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091030e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091030f: call 0x1090150a */
  esp -= 4; W32(esp, 0x10910314u); SPILL(); f_1090150a(); if (g_unwind) return; RELOAD();
L_10910314: /* 10910314: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 10910317: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10910318: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091031b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091031d: jl 0x109102f2 */
  if ((sf != of)) goto L_109102f2;
L_1091031f: /* 1091031f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_10910320: /* 10910320: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910321: mov eax, esi */
  eax = esi;
/* 10910323: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910324: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910325: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10910350(void) {
  LOAD_REGS();
L_10910350: /* 10910350: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910352: push 0x1091c264 */
  { uint32_t v = 0x1091c264u; esp -= 4; W32(esp, v); }
/* 10910357: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1091035d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091035e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910366: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910367: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910368: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910369: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 1091036d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 1091036f: mov esi, ecx */
  esi = ecx;
/* 10910371: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 10910374: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910375: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 10910378: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 1091037c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 1091037e: call dword ptr [0x10959bb8] */
  esp -= 4; W32(esp, 0x10910384u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 10910384: lea ebx, [edi + 0x10] */
  ebx = (uint32_t)(edi + 0x10u);
/* 10910387: lea edi, [esi + 0x10] */
  edi = (uint32_t)(esi + 0x10u);
/* 1091038a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091038b: mov ecx, edi */
  ecx = edi;
/* 1091038d: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 10910395: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 10910399: call 0x10901249 */
  esp -= 4; W32(esp, 0x1091039eu); SPILL(); f_10901249(); if (g_unwind) return; RELOAD();
/* 1091039e: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 109103a5: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 109103a8: mov ecx, edi */
  ecx = edi;
/* 109103aa: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 109103af: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 109103b2: call 0x1090123f */
  esp -= 4; W32(esp, 0x109103b7u); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
/* 109103b7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109103bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109103bc: mov eax, esi */
  eax = esi;
/* 109103be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109103bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109103c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 109103c7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109103ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_109103f0(void) {
  LOAD_REGS();
L_109103f0: /* 109103f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109103f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109103f2: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 109103f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109103f6: mov esi, ecx */
  esi = ecx;
/* 109103f8: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x109103feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 109103fe: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 10910401: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10910403: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 10910406: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ecx = r;
  }
/* 10910408: je 0x1091041d */
  if (zf) goto L_1091041d;
L_1091040a: /* 1091040a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091040e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10910412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910413: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910414: call 0x10901136 */
  esp -= 4; W32(esp, 0x10910419u); SPILL(); f_10901136(); if (g_unwind) return; RELOAD();
/* 10910419: mov edi, eax */
  edi = eax;
/* 1091041b: jmp 0x1091041f */
  goto L_1091041f;
L_1091041d: /* 1091041d: xor edi, edi */
  edi = 0;
L_1091041f: /* 1091041f: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 10910422: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10910428u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10910428: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910429: call 0x109011e5 */
  esp -= 4; W32(esp, 0x1091042eu); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 1091042e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 10910431: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 10910434: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910437: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10910438: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091043a: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 1091043d: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 1091043f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 10910442: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 10910445: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10910446: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 10910449: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 1091044c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 1091044f: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 10910453: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10910455: jge 0x10910463 */
  if ((sf == of)) goto L_10910463;
L_10910457: /* 10910457: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10910459: mov ecx, esi */
  ecx = esi;
/* 1091045b: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 1091045e: call 0x109010dc */
  esp -= 4; W32(esp, 0x10910463u); SPILL(); f_109010dc(); if (g_unwind) return; RELOAD();
L_10910463: /* 10910463: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 10910466: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910467: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910468: ret 8 */
  esp += 12; SPILL(); return;
}

void f_10910490(void) {
  LOAD_REGS();
L_10910490: /* 10910490: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910492: push 0x1091c28c */
  { uint32_t v = 0x1091c28cu; esp -= 4; W32(esp, v); }
/* 10910497: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1091049d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091049e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 109104a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109104a6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109104aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109104ab: mov esi, ecx */
  esi = ecx;
/* 109104ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109104ae: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 109104b1: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 109104b5: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x109104bbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 109104bb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 109104bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109104c0: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 109104c3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 109104cb: call 0x109012cb */
  esp -= 4; W32(esp, 0x109104d0u); SPILL(); f_109012cb(); if (g_unwind) return; RELOAD();
/* 109104d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 109104d4: mov eax, esi */
  eax = esi;
/* 109104d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109104d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 109104de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109104e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_10910510(void) {
  LOAD_REGS();
L_10910510: /* 10910510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910512: push 0x1091c2a8 */
  { uint32_t v = 0x1091c2a8u; esp -= 4; W32(esp, v); }
/* 10910517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1091051d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091051e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910527: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910528: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1091052c: mov esi, ecx */
  esi = ecx;
/* 1091052e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091052f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 10910533: call 0x1090135c */
  esp -= 4; W32(esp, 0x10910538u); SPILL(); f_1090135c(); if (g_unwind) return; RELOAD();
/* 10910538: xor eax, eax */
  eax = 0;
/* 1091053a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1091053e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 10910541: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 10910544: mov ecx, esi */
  ecx = esi;
/* 10910546: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 10910549: call 0x10901262 */
  esp -= 4; W32(esp, 0x1091054eu); SPILL(); f_10901262(); if (g_unwind) return; RELOAD();
/* 1091054e: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 10910551: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 10910554: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 10910557: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1091055b: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 1091055e: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 10910561: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 10910564: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910565: mov eax, esi */
  eax = esi;
/* 10910567: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910568: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1091056f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910572: ret 4 */
  esp += 8; SPILL(); return;
}

void f_109105a0(void) {
  LOAD_REGS();
L_109105a0: /* 109105a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 109105a2: push 0x1091c2c9 */
  { uint32_t v = 0x1091c2c9u; esp -= 4; W32(esp, v); }
/* 109105a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 109105ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109105ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 109105b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109105b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109105b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109105b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109105b9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 109105bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 109105c0: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 109105c2: mov esi, ecx */
  esi = ecx;
/* 109105c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109105c5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 109105c9: call dword ptr [0x10959b84] */
  esp -= 4; W32(esp, 0x109105cfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 109105cf: xor ebx, ebx */
  ebx = 0;
/* 109105d1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 109105d4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109105d7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 109105db: jle 0x1091060e */
  if ((zf || sf != of)) goto L_1091060e;
L_109105dd: /* 109105dd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109105de: xor ebp, ebp */
  ebp = 0;
L_109105e0: /* 109105e0: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 109105e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109105e4: mov ecx, esi */
  ecx = esi;
/* 109105e6: call dword ptr [0x10959cd8] */
  esp -= 4; W32(esp, 0x109105ecu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 109105ec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 109105ee: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 109105f1: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 109105f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109105f6: je 0x10910602 */
  if (zf) goto L_10910602;
L_109105f8: /* 109105f8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 109105fa: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109105fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109105fd: call 0x1090150a */
  esp -= 4; W32(esp, 0x10910602u); SPILL(); f_1090150a(); if (g_unwind) return; RELOAD();
L_10910602: /* 10910602: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 10910605: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10910606: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10910609: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091060b: jl 0x109105e0 */
  if ((sf != of)) goto L_109105e0;
L_1091060d: /* 1091060d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_1091060e: /* 1091060e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10910612: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910613: mov eax, esi */
  eax = esi;
/* 10910615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910616: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910617: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1091061e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910621: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10910660(void) {
  LOAD_REGS();
L_10910660: /* 10910660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10910661: mov ebp, esp */
  ebp = esp;
/* 10910663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910665: push 0x1091c2e0 */
  { uint32_t v = 0x1091c2e0u; esp -= 4; W32(esp, v); }
/* 1091066a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10910670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1091067b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1091067e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091067f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910680: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910681: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10910684: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10910686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910687: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1091068e: call 0x10901488 */
  esp -= 4; W32(esp, 0x10910693u); SPILL(); f_10901488(); if (g_unwind) return; RELOAD();
/* 10910693: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910695: je 0x1091069e */
  if (zf) goto L_1091069e;
L_10910697: /* 10910697: mov dword ptr [eax + 0x18], 1 */
  W32((uint32_t)(eax + 0x18u), 0x1u);
L_1091069e: /* 1091069e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 109106a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109106a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109106a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 109106aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109106ab: mov esp, ebp */
  esp = ebp;
/* 109106ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109106ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_109106b1(void) {
  LOAD_REGS();
L_109106b1: /* 109106b1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 109106b4: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 109106b9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 109106bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109106bd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 109106c0: call 0x10918770 */
  esp -= 4; W32(esp, 0x109106c5u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_109106c5(); return;
}

void f_109106c5(void) {
  LOAD_REGS();
L_109106c5: /* 109106c5: push 0x10921950 */
  { uint32_t v = 0x10921950u; esp -= 4; W32(esp, v); }
/* 109106ca: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 109106cf: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x109106d5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 109106d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109106d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109106da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109106dc: call 0x10918770 */
  esp -= 4; W32(esp, 0x109106e1u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_109106e1: guest_badaddr(0x109106e1); return;
}

void f_10910720(void) {
  LOAD_REGS();
L_10910720: /* 10910720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10910721: mov ebp, esp */
  ebp = esp;
/* 10910723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910725: push 0x1091c302 */
  { uint32_t v = 0x1091c302u; esp -= 4; W32(esp, v); }
/* 1091072a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10910730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910738: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1091073b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 1091073e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091073f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910741: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 10910744: xor ebx, ebx */
  ebx = 0;
/* 10910746: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10910749: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091074a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091074b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1091074e: mov word ptr [edi], bx */
  W16((uint32_t)(edi), (ebx & 0xffffu));
/* 10910751: call 0x10901488 */
  esp -= 4; W32(esp, 0x10910756u); SPILL(); f_10901488(); if (g_unwind) return; RELOAD();
/* 10910756: mov esi, eax */
  esi = eax;
/* 10910758: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091075a: jne 0x10910771 */
  if (!zf) goto L_10910771;
L_1091075c: /* 1091075c: xor eax, eax */
  eax = 0;
/* 1091075e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910761: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910768: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910769: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091076a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091076b: mov esp, ebp */
  esp = ebp;
/* 1091076d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091076e: ret 0x14 */
  esp += 24; SPILL(); return;
L_10910771: /* 10910771: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 10910774: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910775: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910778: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1091077eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1091077e: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910782: mov ecx, esi */
  ecx = esi;
/* 10910784: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 10910788: call 0x1090128a */
  esp -= 4; W32(esp, 0x1091078du); SPILL(); f_1090128a(); if (g_unwind) return; RELOAD();
/* 1091078d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910790: mov esi, eax */
  esi = eax;
/* 10910792: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 10910795: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1091079bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1091079b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091079d: je 0x1091075c */
  if (zf) goto L_1091075c;
L_1091079f: /* 1091079f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 109107a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109107a3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 109107a6: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x109107acu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 109107ac: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 109107af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109107b0: mov ecx, esi */
  ecx = esi;
/* 109107b2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 109107b6: call 0x109011c7 */
  esp -= 4; W32(esp, 0x109107bbu); SPILL(); f_109011c7(); if (g_unwind) return; RELOAD();
/* 109107bb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 109107be: mov esi, eax */
  esi = eax;
/* 109107c0: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 109107c3: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x109107c9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 109107c9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109107cb: je 0x1091075c */
  if (zf) goto L_1091075c;
L_109107cd: /* 109107cd: mov ecx, esi */
  ecx = esi;
/* 109107cf: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x109107d5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 109107d5: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 109107d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109107d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109107da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109107db: call dword ptr [0x10959d1c] */
  esp -= 4; W32(esp, 0x109107e1u); SPILL(); f_4e2be4(); if (g_unwind) return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */ RELOAD();
/* 109107e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 109107e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109107e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109107e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109107e9: mov eax, 1 */
  eax = 0x1u;
/* 109107ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 109107f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109107f6: mov esp, ebp */
  esp = ebp;
/* 109107f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109107f9: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_109107fc(void) {
  LOAD_REGS();
L_109107fc: /* 109107fc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 109107ff: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10910804: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 10910807: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910808: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1091080b: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910810u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10910810(); return;
}

void f_10910810(void) {
  LOAD_REGS();
L_10910810: /* 10910810: push 0x1092198c */
  { uint32_t v = 0x1092198cu; esp -= 4; W32(esp, v); }
/* 10910815: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1091081a: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10910820u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10910820: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910823: xor ebx, ebx */
  ebx = 0;
/* 10910825: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910826: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910827: call 0x10918770 */
  esp -= 4; W32(esp, 0x1091082cu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1091082c: guest_badaddr(0x1091082c); return;
}

void f_10910880(void) {
  LOAD_REGS();
L_10910880: /* 10910880: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910881: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10910882: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 10910886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910887: mov ebx, ecx */
  ebx = ecx;
/* 10910889: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091088a: mov ecx, ebp */
  ecx = ebp;
/* 1091088c: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10910892u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10910892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910893: call 0x109011e5 */
  esp -= 4; W32(esp, 0x10910898u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 10910898: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 1091089b: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 1091089e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109108a1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109108a2: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109108a4: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 109108a7: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109108aa: je 0x109108d0 */
  if (zf) goto L_109108d0;
L_109108ac: /* 109108ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_109108b0: /* 109108b0: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109108b2: mov esi, edi */
  esi = edi;
/* 109108b4: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 109108b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109108b8: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 109108bc: call dword ptr [0x10959b70] */
  esp -= 4; W32(esp, 0x109108c2u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 109108c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109108c4: jne 0x109108d9 */
  if (!zf) goto L_109108d9;
L_109108c6: /* 109108c6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 109108c8: mov edi, dword ptr [esi + ecx] */
  edi = R32((uint32_t)(esi + ecx));
/* 109108cb: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109108ce: jne 0x109108b0 */
  if (!zf) goto L_109108b0;
L_109108d0: /* 109108d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109108d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109108d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109108d3: xor eax, eax */
  eax = 0;
/* 109108d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109108d6: ret 4 */
  esp += 8; SPILL(); return;
L_109108d9: /* 109108d9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 109108db: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 109108de: lea eax, [edi + edx + 0x10] */
  eax = (uint32_t)(edi + edx + 0x10u);
/* 109108e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109108e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109108e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109108e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109108e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10910910(void) {
  LOAD_REGS();
L_10910910: /* 10910910: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10910911: mov ebp, esp */
  ebp = esp;
/* 10910913: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910915: push 0x1091c331 */
  { uint32_t v = 0x1091c331u; esp -= 4; W32(esp, v); }
/* 1091091a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10910920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910921: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910928: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1091092b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 1091092e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091092f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910930: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910931: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 10910934: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10910937: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10910939: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091093a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10910941: mov word ptr [edi], 0 */
  W16((uint32_t)(edi), 0x0u);
/* 10910946: call 0x10901488 */
  esp -= 4; W32(esp, 0x1091094bu); SPILL(); f_10901488(); if (g_unwind) return; RELOAD();
/* 1091094b: mov esi, eax */
  esi = eax;
/* 1091094d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091094f: jne 0x10910966 */
  if (!zf) goto L_10910966;
L_10910951: /* 10910951: xor eax, eax */
  eax = 0;
/* 10910953: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910956: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1091095d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091095e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091095f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910960: mov esp, ebp */
  esp = ebp;
/* 10910962: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910963: ret 0x10 */
  esp += 20; SPILL(); return;
L_10910966: /* 10910966: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 10910969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091096a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 1091096d: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x10910973u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 10910973: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910976: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910977: mov ecx, esi */
  ecx = esi;
/* 10910979: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1091097d: call 0x1090128a */
  esp -= 4; W32(esp, 0x10910982u); SPILL(); f_1090128a(); if (g_unwind) return; RELOAD();
/* 10910982: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910985: mov esi, eax */
  esi = eax;
/* 10910987: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1091098b: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10910991u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10910991: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910993: je 0x10910951 */
  if (zf) goto L_10910951;
L_10910995: /* 10910995: mov ecx, esi */
  ecx = esi;
/* 10910997: mov ebx, esi */
  ebx = esi;
/* 10910999: xor esi, esi */
  esi = 0;
/* 1091099b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 1091099e: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 109109a1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 109109a4: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 109109a7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 109109ab: jmp 0x109109b0 */
  goto L_109109b0;
L_109109b0: /* 109109b0: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109109b3: jge 0x10910a26 */
  if ((sf == of)) goto L_10910a26;
L_109109b5: /* 109109b5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109109b7: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 109109ba: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 109109be: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x109109c4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 109109c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109109c5: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x109109cbu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 109109cb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 109109ce: mov ecx, edi */
  ecx = edi;
/* 109109d0: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109109d2: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 109109d4: lea edx, [ecx + eax + 1] */
  edx = (uint32_t)(ecx + eax + 0x1u);
/* 109109d8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 109109db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109109de: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109109e0: jge 0x10910a23 */
  if ((sf == of)) goto L_10910a23;
L_109109e2: /* 109109e2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109109e4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109109e6: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 109109e9: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 109109ec: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 109109ef: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x109109f5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 109109f5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 109109f8: mov esi, eax */
  esi = eax;
/* 109109fa: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10910a00u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10910a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910a01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910a02: push 0x1092f4d4 */
  { uint32_t v = 0x1092f4d4u; esp -= 4; W32(esp, v); }
/* 10910a07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910a08: call dword ptr [0x10959da4] */
  esp -= 4; W32(esp, 0x10910a0eu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 10910a0e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 10910a11: lea edi, [edi + eax*2 + 2] */
  edi = (uint32_t)(edi + eax*2 + 0x2u);
/* 10910a15: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10910a18: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910a1b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10910a1c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 10910a1f: mov esi, eax */
  esi = eax;
/* 10910a21: jmp 0x109109b0 */
  goto L_109109b0;
L_10910a23: /* 10910a23: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_10910a26: /* 10910a26: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10910a29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910a2b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10910a2f: je 0x10910a4e */
  if (zf) goto L_10910a4e;
L_10910a31: /* 10910a31: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 10910a34: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 10910a37: lea edx, [edx + edx + 8] */
  edx = (uint32_t)(edx + edx + 0x8u);
/* 10910a3b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10910a3d: jle 0x10910a49 */
  if ((zf || sf != of)) goto L_10910a49;
L_10910a3f: /* 10910a3f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10910a40: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10910a42: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 10910a44: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 10910a47: jmp 0x10910a31 */
  goto L_10910a31;
L_10910a49: /* 10910a49: call 0x1090123f */
  esp -= 4; W32(esp, 0x10910a4eu); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
L_10910a4e: /* 10910a4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910a51: mov word ptr [edi], 0 */
  W16((uint32_t)(edi), 0x0u);
/* 10910a56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910a57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910a58: mov eax, 1 */
  eax = 0x1u;
/* 10910a5d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910a64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910a65: mov esp, ebp */
  esp = ebp;
/* 10910a67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910a68: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_109109ad(void) {
  LOAD_REGS();
L_109109ad: /* 109109ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_109109b0: /* 109109b0: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109109b3: jge 0x10910a26 */
  if ((sf == of)) goto L_10910a26;
L_109109b5: /* 109109b5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109109b7: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 109109ba: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* 109109be: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x109109c4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 109109c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109109c5: call dword ptr [0x10959d6c] */
  esp -= 4; W32(esp, 0x109109cbu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 109109cb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 109109ce: mov ecx, edi */
  ecx = edi;
/* 109109d0: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109109d2: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 109109d4: lea edx, [ecx + eax + 1] */
  edx = (uint32_t)(ecx + eax + 0x1u);
/* 109109d8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 109109db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109109de: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109109e0: jge 0x10910a23 */
  if ((sf == of)) goto L_10910a23;
L_109109e2: /* 109109e2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 109109e4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109109e6: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 109109e9: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 109109ec: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 109109ef: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x109109f5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 109109f5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 109109f8: mov esi, eax */
  esi = eax;
/* 109109fa: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10910a00u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10910a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910a01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910a02: push 0x1092f4d4 */
  { uint32_t v = 0x1092f4d4u; esp -= 4; W32(esp, v); }
/* 10910a07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910a08: call dword ptr [0x10959da4] */
  esp -= 4; W32(esp, 0x10910a0eu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 10910a0e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 10910a11: lea edi, [edi + eax*2 + 2] */
  edi = (uint32_t)(edi + eax*2 + 0x2u);
/* 10910a15: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10910a18: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910a1b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10910a1c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 10910a1f: mov esi, eax */
  esi = eax;
/* 10910a21: jmp 0x109109b0 */
  goto L_109109b0;
L_10910a23: /* 10910a23: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_10910a26: /* 10910a26: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10910a29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910a2b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10910a2f: je 0x10910a4e */
  if (zf) goto L_10910a4e;
L_10910a31: /* 10910a31: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 10910a34: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 10910a37: lea edx, [edx + edx + 8] */
  edx = (uint32_t)(edx + edx + 0x8u);
/* 10910a3b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10910a3d: jle 0x10910a49 */
  if ((zf || sf != of)) goto L_10910a49;
L_10910a3f: /* 10910a3f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10910a40: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10910a42: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 10910a44: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 10910a47: jmp 0x10910a31 */
  goto L_10910a31;
L_10910a49: /* 10910a49: call 0x1090123f */
  esp -= 4; W32(esp, 0x10910a4eu); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
L_10910a4e: /* 10910a4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910a51: mov word ptr [edi], 0 */
  W16((uint32_t)(edi), 0x0u);
/* 10910a56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910a57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910a58: mov eax, 1 */
  eax = 0x1u;
/* 10910a5d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910a64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910a65: mov esp, ebp */
  esp = ebp;
/* 10910a67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910a68: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_10910a6b(void) {
  LOAD_REGS();
L_10910a6b: /* 10910a6b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10910a6e: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10910a73: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 10910a76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910a77: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 10910a7a: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910a7fu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10910a7f(); return;
}

void f_10910a7f(void) {
  LOAD_REGS();
L_10910a7f: /* 10910a7f: push 0x109219cc */
  { uint32_t v = 0x109219ccu; esp -= 4; W32(esp, v); }
/* 10910a84: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10910a89: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10910a8fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10910a8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910a92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10910a94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10910a96: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910a9bu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10910a9b: guest_badaddr(0x10910a9b); return;
}

void f_10910b10(void) {
  LOAD_REGS();
L_10910b10: /* 10910b10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10910b11: mov ebp, esp */
  ebp = esp;
/* 10910b13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910b15: push 0x1091c369 */
  { uint32_t v = 0x1091c369u; esp -= 4; W32(esp, v); }
/* 10910b1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10910b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910b21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910b28: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10910b2b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10910b2e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 10910b31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910b32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910b33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910b34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10910b37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910b38: xor ebx, ebx */
  ebx = 0;
/* 10910b3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910b3b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 10910b3e: call 0x10901488 */
  esp -= 4; W32(esp, 0x10910b43u); SPILL(); f_10901488(); if (g_unwind) return; RELOAD();
/* 10910b43: mov edi, eax */
  edi = eax;
/* 10910b45: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910b47: jne 0x10910b5e */
  if (!zf) goto L_10910b5e;
L_10910b49: /* 10910b49: xor eax, eax */
  eax = 0;
/* 10910b4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910b4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910b55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910b56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910b57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910b58: mov esp, ebp */
  esp = ebp;
/* 10910b5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910b5b: ret 0x10 */
  esp += 20; SPILL(); return;
L_10910b5e: /* 10910b5e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 10910b61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910b62: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910b65: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x10910b6bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 10910b6b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910b6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910b6f: mov ecx, edi */
  ecx = edi;
/* 10910b71: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 10910b75: call 0x1090128a */
  esp -= 4; W32(esp, 0x10910b7au); SPILL(); f_1090128a(); if (g_unwind) return; RELOAD();
/* 10910b7a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910b7d: mov esi, eax */
  esi = eax;
/* 10910b7f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 10910b82: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10910b88u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10910b88: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910b8a: jne 0x10910bd4 */
  if (!zf) goto L_10910bd4;
L_10910b8c: /* 10910b8c: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910b8f: je 0x10910be5 */
  if (zf) goto L_10910be5;
L_10910b91: /* 10910b91: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 10910b94: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x10910b9au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 10910b9a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 10910b9d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 10910ba1: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 10910ba4: mov dword ptr [ebp - 0x1c], 8 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x8u);
/* 10910bab: call 0x1090123f */
  esp -= 4; W32(esp, 0x10910bb0u); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
/* 10910bb0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 10910bb3: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 10910bb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910bb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910bb8: mov ecx, edi */
  ecx = edi;
/* 10910bba: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 10910bbe: call 0x10901122 */
  esp -= 4; W32(esp, 0x10910bc3u); SPILL(); f_10901122(); if (g_unwind) return; RELOAD();
/* 10910bc3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 10910bc6: mov esi, eax */
  esi = eax;
/* 10910bc8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 10910bcb: call 0x10901203 */
  esp -= 4; W32(esp, 0x10910bd0u); SPILL(); f_10901203(); if (g_unwind) return; RELOAD();
/* 10910bd0: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910bd2: je 0x10910be5 */
  if (zf) goto L_10910be5;
L_10910bd4: /* 10910bd4: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910bd7: jne 0x10910bde */
  if (!zf) goto L_10910bde;
L_10910bd9: /* 10910bd9: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910bdc: jne 0x10910be5 */
  if (!zf) goto L_10910be5;
L_10910bde: /* 10910bde: mov dword ptr [edi + 0x14], 1 */
  W32((uint32_t)(edi + 0x14u), 0x1u);
L_10910be5: /* 10910be5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910be8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910be9: mov eax, esi */
  eax = esi;
/* 10910beb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910bec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910bf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910bf4: mov esp, ebp */
  esp = ebp;
/* 10910bf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910bf7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_10910bfa(void) {
  LOAD_REGS();
L_10910bfa: /* 10910bfa: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10910bfd: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10910c02: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 10910c05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910c06: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 10910c09: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910c0eu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10910c0e(); return;
}

void f_10910c0e(void) {
  LOAD_REGS();
L_10910c0e: /* 10910c0e: push 0x10921a10 */
  { uint32_t v = 0x10921a10u; esp -= 4; W32(esp, v); }
/* 10910c13: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10910c18: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10910c1eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10910c1e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910c21: xor ebx, ebx */
  ebx = 0;
/* 10910c23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910c24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910c25: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910c2au); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10910c2a: guest_badaddr(0x10910c2a); return;
}

void f_10910c80(void) {
  LOAD_REGS();
L_10910c80: /* 10910c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10910c81: mov ebp, esp */
  ebp = esp;
/* 10910c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910c85: push 0x1091c39a */
  { uint32_t v = 0x1091c39au; esp -= 4; W32(esp, v); }
/* 10910c8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10910c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910c91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910c98: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10910c9b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 10910c9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910c9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910ca0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910ca1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10910ca4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10910ca6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910ca7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10910cae: call 0x10901488 */
  esp -= 4; W32(esp, 0x10910cb3u); SPILL(); f_10901488(); if (g_unwind) return; RELOAD();
/* 10910cb3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 10910cb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910cb7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910cba: mov ebx, eax */
  ebx = eax;
/* 10910cbc: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x10910cc2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 10910cc2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910cc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910cc6: mov ecx, ebx */
  ecx = ebx;
/* 10910cc8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 10910ccc: call 0x1090128a */
  esp -= 4; W32(esp, 0x10910cd1u); SPILL(); f_1090128a(); if (g_unwind) return; RELOAD();
/* 10910cd1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910cd4: mov esi, eax */
  esi = eax;
/* 10910cd6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10910cda: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10910ce0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10910ce0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910ce2: jne 0x10910d0a */
  if (!zf) goto L_10910d0a;
L_10910ce4: /* 10910ce4: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 10910ce7: call 0x10901479 */
  esp -= 4; W32(esp, 0x10910cecu); SPILL(); f_10901479(); if (g_unwind) return; RELOAD();
/* 10910cec: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 10910cef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910cf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910cf1: mov ecx, ebx */
  ecx = ebx;
/* 10910cf3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 10910cf7: call 0x10901122 */
  esp -= 4; W32(esp, 0x10910cfcu); SPILL(); f_10901122(); if (g_unwind) return; RELOAD();
/* 10910cfc: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 10910cff: mov esi, eax */
  esi = eax;
/* 10910d01: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10910d05: call 0x10901203 */
  esp -= 4; W32(esp, 0x10910d0au); SPILL(); f_10901203(); if (g_unwind) return; RELOAD();
L_10910d0a: /* 10910d0a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10910d0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910d0e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 10910d11: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x10910d17u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 10910d17: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 10910d1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910d1b: mov ecx, esi */
  ecx = esi;
/* 10910d1d: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 10910d21: call 0x109011c7 */
  esp -= 4; W32(esp, 0x10910d26u); SPILL(); f_109011c7(); if (g_unwind) return; RELOAD();
/* 10910d26: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 10910d29: mov edi, eax */
  edi = eax;
/* 10910d2b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10910d2f: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10910d35u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10910d35: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910d37: jne 0x10910d62 */
  if (!zf) goto L_10910d62;
L_10910d39: /* 10910d39: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 10910d3c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10910d3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910d41: mov ecx, esi */
  ecx = esi;
/* 10910d43: call 0x10901352 */
  esp -= 4; W32(esp, 0x10910d48u); SPILL(); f_10901352(); if (g_unwind) return; RELOAD();
/* 10910d48: mov dword ptr [ebx + 0x14], 1 */
  W32((uint32_t)(ebx + 0x14u), 0x1u);
L_10910d4f: /* 10910d4f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910d52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910d59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910d5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910d5b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910d5c: mov esp, ebp */
  esp = ebp;
/* 10910d5e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910d5f: ret 0x10 */
  esp += 20; SPILL(); return;
L_10910d62: /* 10910d62: mov ecx, edi */
  ecx = edi;
/* 10910d64: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10910d6au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10910d6a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 10910d6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910d6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910d6f: call dword ptr [0x10959d68] */
  esp -= 4; W32(esp, 0x10910d75u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 10910d75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910d78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910d7a: je 0x10910d4f */
  if (zf) goto L_10910d4f;
L_10910d7c: /* 10910d7c: mov ecx, edi */
  ecx = edi;
/* 10910d7e: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10910d84u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10910d84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910d85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910d86: call dword ptr [0x10959b68] */
  esp -= 4; W32(esp, 0x10910d8cu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* 10910d8c: xor ecx, ecx */
  ecx = 0;
/* 10910d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910d91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10910d93: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10910d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910d97: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 10910d9a: mov ecx, edi */
  ecx = edi;
/* 10910d9c: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x10910da2u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 10910da2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910da5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910da6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910da7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910dae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910daf: mov esp, ebp */
  esp = ebp;
/* 10910db1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910db2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_10910db5(void) {
  LOAD_REGS();
L_10910db5: /* 10910db5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10910db8: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10910dbd: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 10910dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910dc1: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 10910dc4: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910dc9u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10910dc9(); return;
}

void f_10910dc9(void) {
  LOAD_REGS();
L_10910dc9: /* 10910dc9: push 0x10921a64 */
  { uint32_t v = 0x10921a64u; esp -= 4; W32(esp, v); }
/* 10910dce: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10910dd3: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10910dd9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10910dd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910ddc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10910dde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10910de0: call 0x10918770 */
  esp -= 4; W32(esp, 0x10910de5u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10910de5: guest_badaddr(0x10910de5); return;
}

void f_10910e50(void) {
  LOAD_REGS();
L_10910e50: /* 10910e50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910e52: push 0x1091c3b8 */
  { uint32_t v = 0x1091c3b8u; esp -= 4; W32(esp, v); }
/* 10910e57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10910e5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910e5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910e65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910e66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910e67: mov esi, ecx */
  esi = ecx;
/* 10910e69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 10910e6d: call dword ptr [0x10959cd4] */
  esp -= 4; W32(esp, 0x10910e73u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 10910e73: xor eax, eax */
  eax = 0;
/* 10910e75: mov ecx, esi */
  ecx = esi;
/* 10910e77: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 10910e7b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 10910e7e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 10910e85: call 0x1090123f */
  esp -= 4; W32(esp, 0x10910e8au); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
/* 10910e8a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10910e8e: mov eax, esi */
  eax = esi;
/* 10910e90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910e91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910e98: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10910e9b: ret  */
  esp += 4; SPILL(); return;
}

void f_10910ec0(void) {
  LOAD_REGS();
L_10910ec0: /* 10910ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10910ec1: mov ebp, esp */
  ebp = esp;
/* 10910ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10910ec5: push 0x1091c3d9 */
  { uint32_t v = 0x1091c3d9u; esp -= 4; W32(esp, v); }
/* 10910eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10910ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10910ed8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10910edb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10910ede: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910edf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10910ee0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10910ee1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10910ee4: xor ebx, ebx */
  ebx = 0;
/* 10910ee6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910ee7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10910ee8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 10910eeb: call 0x10901488 */
  esp -= 4; W32(esp, 0x10910ef0u); SPILL(); f_10901488(); if (g_unwind) return; RELOAD();
/* 10910ef0: mov esi, eax */
  esi = eax;
/* 10910ef2: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910ef4: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 10910ef7: je 0x10910f6b */
  if (zf) goto L_10910f6b;
L_10910ef9: /* 10910ef9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 10910efc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10910efd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910f00: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x10910f06u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 10910f06: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910f09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10910f0a: mov ecx, esi */
  ecx = esi;
/* 10910f0c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 10910f10: call 0x1090128a */
  esp -= 4; W32(esp, 0x10910f15u); SPILL(); f_1090128a(); if (g_unwind) return; RELOAD();
/* 10910f15: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 10910f18: mov esi, eax */
  esi = eax;
/* 10910f1a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 10910f1d: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10910f23u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10910f23: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910f25: je 0x10910f6b */
  if (zf) goto L_10910f6b;
L_10910f27: /* 10910f27: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10910f2a: xor ecx, ecx */
  ecx = 0;
/* 10910f2c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10910f2e: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 10910f31: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 10910f34: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 10910f37: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 10910f3a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 10910f3d: mov edi, ecx */
  edi = ecx;
/* 10910f3f: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 10910f42: call 0x1090139d */
  esp -= 4; W32(esp, 0x10910f47u); SPILL(); f_1090139d(); if (g_unwind) return; RELOAD();
/* 10910f47: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10910f49: je 0x10910f6b */
  if (zf) goto L_10910f6b;
L_10910f4b: /* 10910f4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10910f4c: mov ecx, esi */
  ecx = esi;
/* 10910f4e: call 0x109011ea */
  esp -= 4; W32(esp, 0x10910f53u); SPILL(); f_109011ea(); if (g_unwind) return; RELOAD();
/* 10910f53: mov ecx, esi */
  ecx = esi;
/* 10910f55: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 10910f5c: call 0x1090123f */
  esp -= 4; W32(esp, 0x10910f61u); SPILL(); f_1090123f(); if (g_unwind) return; RELOAD();
/* 10910f61: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 10910f64: mov dword ptr [edx + 0x14], 1 */
  W32((uint32_t)(edx + 0x14u), 0x1u);
L_10910f6b: /* 10910f6b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10910f6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10910f6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10910f70: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10910f77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10910f78: mov esp, ebp */
  esp = ebp;
/* 10910f7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10910f7b: ret 8 */
  esp += 12; SPILL(); return;
}
