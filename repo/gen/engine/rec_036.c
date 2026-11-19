#include "recomp.h"
#include "rec_mod.h"

void f_7a42c0(void) {
  LOAD_REGS();
L_7a42c0: /* 7a42c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a42c1: mov ebp, esp */
  ebp = esp;
/* 7a42c3: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a42c6: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 7a42c9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a42d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a42d2: push 0xacd590 */
  { uint32_t v = 0xacd590u; esp -= 4; W32(esp, v); }
/* 7a42d7: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7a42da: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7a42e0u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7a42e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a42e1: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 7a42e4: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7a42e7: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a42ea: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7a42f0u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7a42f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a42f2: je 0x7a436d */
  if (zf) goto L_7a436d;
L_7a42f4: /* 7a42f4: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7a42f7: call 0x6c4b79 */
  esp -= 4; W32(esp, 0x7a42fcu); SPILL(); f_6c4b79(); if (g_unwind) return; RELOAD();
/* 7a42fc: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7a42ff: call 0x6c9147 */
  esp -= 4; W32(esp, 0x7a4304u); SPILL(); f_6c9147(); if (g_unwind) return; RELOAD();
/* 7a4304: cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4308: je 0x7a4315 */
  if (zf) goto L_7a4315;
L_7a430a: /* 7a430a: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7a430d: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a4310: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 7a4313: jmp 0x7a431c */
  goto L_7a431c;
L_7a4315: /* 7a4315: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_7a431c: /* 7a431c: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7a431f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4320: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7a4323: call 0x6cb55a */
  esp -= 4; W32(esp, 0x7a4328u); SPILL(); f_6cb55a(); if (g_unwind) return; RELOAD();
/* 7a4328: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a432a: je 0x7a4368 */
  if (zf) goto L_7a4368;
L_7a432c: /* 7a432c: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7a432f: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 7a4332: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7a4335: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 7a4338: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 7a433b: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a433e: imul ecx, dword ptr [edx] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx)));
  ecx = (uint32_t)r;
  }
/* 7a4341: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7a4344: cmp dword ptr [ebp - 0x4c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4348: je 0x7a4368 */
  if (zf) goto L_7a4368;
L_7a434a: /* 7a434a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a434d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a434f: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7a4352: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 7a4359: fild qword ptr [ebp - 0x60] */
  { double v = (double)(int64_t)R64((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 7a435c: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 7a4362: fidiv dword ptr [ebp - 0x4c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffb4u)));
/* 7a4365: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
L_7a4368: /* 7a4368: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 7a436b: jmp 0x7a4390 */
  goto L_7a4390;
L_7a436d: /* 7a436d: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7a4370: call 0x6c4b79 */
  esp -= 4; W32(esp, 0x7a4375u); SPILL(); f_6c4b79(); if (g_unwind) return; RELOAD();
/* 7a4375: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a4377: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7a437a: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 7a437d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a4380: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4381: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 7a4384: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a4385: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7a438au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7a438a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a438d: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
L_7a4390: /* 7a4390: mov esp, ebp */
  esp = ebp;
/* 7a4392: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4393: ret  */
  esp += 4; SPILL(); return;
}

void f_7a43d0(void) {
  LOAD_REGS();
L_7a43d0: /* 7a43d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a43d1: mov ebp, esp */
  ebp = esp;
/* 7a43d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a43d5: push 0x9ce5f0 */
  { uint32_t v = 0x9ce5f0u; esp -= 4; W32(esp, v); }
/* 7a43da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a43e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a43e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a43e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a43e9: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a43ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a43ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a43ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a43ef: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a43f2: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a43f5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a43fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7a43ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4400: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a4403: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7a4409u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 7a4409: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a440c: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a440f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a4410: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a4413: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a4415: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a4418: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x7a441bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a441b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a441e: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7a4424u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7a4424: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7a4427: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a442b: jne 0x7a443f */
  if (!zf) goto L_7a443f;
L_7a442d: /* 7a442d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a4430: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x7a4436u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 7a4436: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7a4439: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a443d: je 0x7a4454 */
  if (zf) goto L_7a4454;
L_7a443f: /* 7a443f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a4442: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a4445: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a4446: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a4449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a444a: call 0x6c92e1 */
  esp -= 4; W32(esp, 0x7a444fu); SPILL(); f_6c92e1(); if (g_unwind) return; RELOAD();
/* 7a444f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4452: jmp 0x7a446d */
  goto L_7a446d;
L_7a4454: /* 7a4454: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a4457: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7a445a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a445b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a445e: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 7a4461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4462: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a4465: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4467: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a446a: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x7a446du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a446d: /* 7a446d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a4470: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7a4476u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7a4476: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7a4479: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a447d: je 0x7a4489 */
  if (zf) goto L_7a4489;
L_7a447f: /* 7a447f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a4482: mov dword ptr [eax + 0x60], 0 */
  W32((uint32_t)(eax + 0x60u), 0x0u);
L_7a4489: /* 7a4489: jmp 0x7a44bb */
  goto L_7a44bb;
L_7a44bb: /* 7a44bb: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a44c2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a44c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a44cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a44cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a44ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a44cf: mov esp, ebp */
  esp = ebp;
/* 7a44d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a44d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a448b(void) {
  LOAD_REGS();
L_7a448b: /* 7a448b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a448e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a4491: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4496: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a4499: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a449a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a449fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a449f(); return;
}

void f_7a449f(void) {
  LOAD_REGS();
L_7a449f: /* 7a449f: push 0xa0b964 */
  { uint32_t v = 0xa0b964u; esp -= 4; W32(esp, v); }
/* 7a44a4: push 0xacd598 */
  { uint32_t v = 0xacd598u; esp -= 4; W32(esp, v); }
/* 7a44a9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a44afu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a44af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a44b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a44b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a44b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a44bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a44bb: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a44c2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a44c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a44cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a44cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a44ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a44cf: mov esp, ebp */
  esp = ebp;
/* 7a44d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a44d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a4520(void) {
  LOAD_REGS();
L_7a4520: /* 7a4520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a4521: mov ebp, esp */
  ebp = esp;
/* 7a4523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a4525: push 0x9ce600 */
  { uint32_t v = 0x9ce600u; esp -= 4; W32(esp, v); }
/* 7a452a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a4530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a4538: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a4539: sub esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a453f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a4540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a4541: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a4542: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a4545: mov dword ptr [ebp - 0xdc], ecx */
  W32((uint32_t)(ebp + 0xffffff24u), ecx);
/* 7a454b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4552: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4558: xor ecx, ecx */
  ecx = 0;
/* 7a455a: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a455e: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 7a4561: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a4564: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7a4568: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a456e: call 0x6c4b79 */
  esp -= 4; W32(esp, 0x7a4573u); SPILL(); f_6c4b79(); if (g_unwind) return; RELOAD();
/* 7a4573: jmp 0x7a45ab */
  goto L_7a45ab;
L_7a45ab: /* 7a45ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a45b2: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a45b6: je 0x7a4a70 */
  if (zf) goto L_7a4a70;
L_7a45bc: /* 7a45bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a45be: push 0xacd528 */
  { uint32_t v = 0xacd528u; esp -= 4; W32(esp, v); }
/* 7a45c3: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 7a45c9: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7a45cfu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7a45cf: mov dword ptr [ebp - 0xe0], eax */
  W32((uint32_t)(ebp + 0xffffff20u), eax);
/* 7a45d5: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 7a45db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a45dc: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a45e2: mov ecx, dword ptr [edx + 0x18] */
  ecx = R32((uint32_t)(edx + 0x18u));
/* 7a45e5: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a45e8: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7a45eeu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7a45ee: mov dword ptr [ebp - 0xe4], eax */
  W32((uint32_t)(ebp + 0xffffff1cu), eax);
/* 7a45f4: cmp dword ptr [ebp - 0xe4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a45fb: je 0x7a4a70 */
  if (zf) goto L_7a4a70;
L_7a4601: /* 7a4601: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a4605: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7a4609: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a460f: call 0x6c96bf */
  esp -= 4; W32(esp, 0x7a4614u); SPILL(); f_6c96bf(); if (g_unwind) return; RELOAD();
/* 7a4614: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7a461a: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4620: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7a4623: mov edx, dword ptr [ebp - 0xe8] */
  edx = R32((uint32_t)(ebp + 0xffffff18u));
/* 7a4629: mov dword ptr [ecx + 0x58], edx */
  W32((uint32_t)(ecx + 0x58u), edx);
/* 7a462c: jmp 0x7a4664 */
  goto L_7a4664;
L_7a4664: /* 7a4664: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a466b: jmp 0x7a46a3 */
  goto L_7a46a3;
L_7a46a3: /* 7a46a3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a46aa: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a46b1: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7a46b8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7a46bc: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46c3: je 0x7a4700 */
  if (zf) goto L_7a4700;
L_7a46c5: /* 7a46c5: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a46cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a46cd: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a46d3: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7a46d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a46d9: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 7a46df: cmp dword ptr [ebp - 0xec], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46e6: je 0x7a4700 */
  if (zf) goto L_7a4700;
L_7a46e8: /* 7a46e8: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7a46ed: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46f0: jne 0x7a4700 */
  if (!zf) goto L_7a4700;
L_7a46f2: /* 7a46f2: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 7a46f9: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_7a4700: /* 7a4700: jmp 0x7a4738 */
  goto L_7a4738;
L_7a4738: /* 7a4738: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a473f: mov dword ptr [ebp - 0x24], 0x5622 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5622u);
/* 7a4746: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a474a: jne 0x7a4756 */
  if (!zf) goto L_7a4756;
L_7a474c: /* 7a474c: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4750: je 0x7a49ce */
  if (zf) goto L_7a49ce;
L_7a4756: /* 7a4756: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a475a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a475d: call 0x6c9147 */
  esp -= 4; W32(esp, 0x7a4762u); SPILL(); f_6c9147(); if (g_unwind) return; RELOAD();
/* 7a4762: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4769: je 0x7a477c */
  if (zf) goto L_7a477c;
L_7a476b: /* 7a476b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4771: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a4774: mov dword ptr [ebp - 0xf0], eax */
  W32((uint32_t)(ebp + 0xffffff10u), eax);
/* 7a477a: jmp 0x7a4786 */
  goto L_7a4786;
L_7a477c: /* 7a477c: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
L_7a4786: /* 7a4786: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 7a478c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a478d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4790: call 0x6cb55a */
  esp -= 4; W32(esp, 0x7a4795u); SPILL(); f_6cb55a(); if (g_unwind) return; RELOAD();
/* 7a4795: mov dword ptr [ebp - 0xf4], eax */
  W32((uint32_t)(ebp + 0xffffff0cu), eax);
/* 7a479b: cmp dword ptr [ebp - 0xf4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff0cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47a2: je 0x7a498c */
  if (zf) goto L_7a498c;
L_7a47a8: /* 7a47a8: cmp dword ptr [ebp - 0x48], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a47ac: jbe 0x7a498c */
  if ((cf | zf)) goto L_7a498c;
L_7a47b2: /* 7a47b2: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47b6: je 0x7a47cf */
  if (zf) goto L_7a47cf;
L_7a47b8: /* 7a47b8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7a47bb: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 7a47be: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47c1: jne 0x7a47cf */
  if (!zf) goto L_7a47cf;
L_7a47c3: /* 7a47c3: mov dword ptr [ebp - 0xf8], 1 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x1u);
/* 7a47cd: jmp 0x7a47d9 */
  goto L_7a47d9;
L_7a47cf: /* 7a47cf: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
L_7a47d9: /* 7a47d9: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7a47df: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7a47e2: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47e6: je 0x7a47fe */
  if (zf) goto L_7a47fe;
L_7a47e8: /* 7a47e8: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a47eb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a47ed: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a47f0: jb 0x7a47fe */
  if (cf) goto L_7a47fe;
L_7a47f2: /* 7a47f2: mov dword ptr [ebp - 0xfc], 1 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x1u);
/* 7a47fc: jmp 0x7a4808 */
  goto L_7a4808;
L_7a47fe: /* 7a47fe: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
L_7a4808: /* 7a4808: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* 7a480e: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7a4811: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4815: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a4817: /* 7a4817: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a481b: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a481d: /* 7a481d: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7a4821: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4824: call 0x6c77a2 */
  esp -= 4; W32(esp, 0x7a4829u); SPILL(); f_6c77a2(); if (g_unwind) return; RELOAD();
/* 7a4829: jmp 0x7a4861 */
  goto L_7a4861;
L_7a4861: /* 7a4861: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4868: jmp 0x7a4913 */
  goto L_7a4913;
L_7a486d: /* 7a486d: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4871: je 0x7a48c6 */
  if (zf) goto L_7a48c6;
L_7a4873: /* 7a4873: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4877: jne 0x7a48c6 */
  if (!zf) goto L_7a48c6;
L_7a4879: /* 7a4879: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7a487d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4880: call 0x6c360c */
  esp -= 4; W32(esp, 0x7a4885u); SPILL(); f_6c360c(); if (g_unwind) return; RELOAD();
/* 7a4885: jmp 0x7a48bd */
  goto L_7a48bd;
L_7a48bd: /* 7a48bd: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a48c4: jmp 0x7a4913 */
  goto L_7a4913;
L_7a48c6: /* 7a48c6: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a48ca: je 0x7a4913 */
  if (zf) goto L_7a4913;
L_7a48cc: /* 7a48cc: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7a48d0: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a48d3: call 0x6ca844 */
  esp -= 4; W32(esp, 0x7a48d8u); SPILL(); f_6ca844(); if (g_unwind) return; RELOAD();
/* 7a48d8: jmp 0x7a4913 */
  goto L_7a4913;
L_7a4913: /* 7a4913: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a491a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7a491e: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4925: je 0x7a4938 */
  if (zf) goto L_7a4938;
L_7a4927: /* 7a4927: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a492d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a4930: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 7a4936: jmp 0x7a4942 */
  goto L_7a4942;
L_7a4938: /* 7a4938: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
L_7a4942: /* 7a4942: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 7a4948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4949: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a494c: call 0x6c3526 */
  esp -= 4; W32(esp, 0x7a4951u); SPILL(); f_6c3526(); if (g_unwind) return; RELOAD();
/* 7a4951: jmp 0x7a498c */
  goto L_7a498c;
L_7a498c: /* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4a70: /* 7a4a70: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a74: je 0x7a4b6f */
  if (zf) goto L_7a4b6f;
L_7a4a7a: /* 7a4a7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a4a7c: push 0xacd578 */
  { uint32_t v = 0xacd578u; esp -= 4; W32(esp, v); }
/* 7a4a81: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7a4a87: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7a4a8du); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7a4a8d: mov dword ptr [ebp - 0x104], eax */
  W32((uint32_t)(ebp + 0xfffffefcu), eax);
/* 7a4a93: mov edx, dword ptr [ebp - 0x104] */
  edx = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7a4a99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4a9a: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4aa0: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7a4aa3: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a4aa6: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7a4aacu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7a4aac: mov dword ptr [ebp - 0x108], eax */
  W32((uint32_t)(ebp + 0xfffffef8u), eax);
/* 7a4ab2: cmp dword ptr [ebp - 0x108], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffef8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4ab9: je 0x7a4b6f */
  if (zf) goto L_7a4b6f;
L_7a4abf: /* 7a4abf: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 7a4ac3: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4ac9: call 0x6c96bf */
  esp -= 4; W32(esp, 0x7a4aceu); SPILL(); f_6c96bf(); if (g_unwind) return; RELOAD();
/* 7a4ace: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 7a4ad4: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4ada: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a4add: mov eax, dword ptr [ebp - 0x10c] */
  eax = R32((uint32_t)(ebp + 0xfffffef4u));
/* 7a4ae3: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 7a4ae6: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4aec: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 7a4aef: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 7a4af5: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4afb: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7a4afe: mov edx, dword ptr [ebp - 0xd8] */
  edx = R32((uint32_t)(ebp + 0xffffff28u));
/* 7a4b04: mov dword ptr [ecx + 0x54], edx */
  W32((uint32_t)(ecx + 0x54u), edx);
/* 7a4b07: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4b0e: je 0x7a4b34 */
  if (zf) goto L_7a4b34;
L_7a4b10: /* 7a4b10: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7a4b15: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4b18: jne 0x7a4b34 */
  if (!zf) goto L_7a4b34;
L_7a4b1a: /* 7a4b1a: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4b20: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a4b23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4b24: mov eax, dword ptr [0xb78048] */
  eax = R32((uint32_t)(0xb78048u));
/* 7a4b29: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a4b2b: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4b31: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4b34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4b34: /* 7a4b34: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4575(void) {
  LOAD_REGS();
L_7a4575: /* 7a4575: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a4578: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 7a457e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4583: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 7a4589: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a458a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a458fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a458f(); return;
}

void f_7a458f(void) {
  LOAD_REGS();
L_7a458f: /* 7a458f: push 0xa0ba28 */
  { uint32_t v = 0xa0ba28u; esp -= 4; W32(esp, v); }
/* 7a4594: push 0xacd520 */
  { uint32_t v = 0xacd520u; esp -= 4; W32(esp, v); }
/* 7a4599: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a459fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a459f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a45a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a45a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a45a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a45abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a45ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a45b2: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a45b6: je 0x7a4a70 */
  if (zf) goto L_7a4a70;
L_7a45bc: /* 7a45bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a45be: push 0xacd528 */
  { uint32_t v = 0xacd528u; esp -= 4; W32(esp, v); }
/* 7a45c3: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 7a45c9: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7a45cfu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7a45cf: mov dword ptr [ebp - 0xe0], eax */
  W32((uint32_t)(ebp + 0xffffff20u), eax);
/* 7a45d5: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 7a45db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a45dc: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a45e2: mov ecx, dword ptr [edx + 0x18] */
  ecx = R32((uint32_t)(edx + 0x18u));
/* 7a45e5: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a45e8: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7a45eeu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7a45ee: mov dword ptr [ebp - 0xe4], eax */
  W32((uint32_t)(ebp + 0xffffff1cu), eax);
/* 7a45f4: cmp dword ptr [ebp - 0xe4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a45fb: je 0x7a4a70 */
  if (zf) goto L_7a4a70;
L_7a4601: /* 7a4601: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a4605: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7a4609: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a460f: call 0x6c96bf */
  esp -= 4; W32(esp, 0x7a4614u); SPILL(); f_6c96bf(); if (g_unwind) return; RELOAD();
/* 7a4614: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7a461a: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4620: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7a4623: mov edx, dword ptr [ebp - 0xe8] */
  edx = R32((uint32_t)(ebp + 0xffffff18u));
/* 7a4629: mov dword ptr [ecx + 0x58], edx */
  W32((uint32_t)(ecx + 0x58u), edx);
/* 7a462c: jmp 0x7a4664 */
  goto L_7a4664;
L_7a4664: /* 7a4664: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a466b: jmp 0x7a46a3 */
  goto L_7a46a3;
L_7a46a3: /* 7a46a3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a46aa: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a46b1: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7a46b8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7a46bc: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46c3: je 0x7a4700 */
  if (zf) goto L_7a4700;
L_7a46c5: /* 7a46c5: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a46cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a46cd: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a46d3: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7a46d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a46d9: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 7a46df: cmp dword ptr [ebp - 0xec], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46e6: je 0x7a4700 */
  if (zf) goto L_7a4700;
L_7a46e8: /* 7a46e8: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7a46ed: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46f0: jne 0x7a4700 */
  if (!zf) goto L_7a4700;
L_7a46f2: /* 7a46f2: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 7a46f9: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_7a4700: /* 7a4700: jmp 0x7a4738 */
  goto L_7a4738;
L_7a4738: /* 7a4738: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a473f: mov dword ptr [ebp - 0x24], 0x5622 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5622u);
/* 7a4746: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a474a: jne 0x7a4756 */
  if (!zf) goto L_7a4756;
L_7a474c: /* 7a474c: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4750: je 0x7a49ce */
  if (zf) goto L_7a49ce;
L_7a4756: /* 7a4756: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a475a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a475d: call 0x6c9147 */
  esp -= 4; W32(esp, 0x7a4762u); SPILL(); f_6c9147(); if (g_unwind) return; RELOAD();
/* 7a4762: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4769: je 0x7a477c */
  if (zf) goto L_7a477c;
L_7a476b: /* 7a476b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4771: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a4774: mov dword ptr [ebp - 0xf0], eax */
  W32((uint32_t)(ebp + 0xffffff10u), eax);
/* 7a477a: jmp 0x7a4786 */
  goto L_7a4786;
L_7a477c: /* 7a477c: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
L_7a4786: /* 7a4786: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 7a478c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a478d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4790: call 0x6cb55a */
  esp -= 4; W32(esp, 0x7a4795u); SPILL(); f_6cb55a(); if (g_unwind) return; RELOAD();
/* 7a4795: mov dword ptr [ebp - 0xf4], eax */
  W32((uint32_t)(ebp + 0xffffff0cu), eax);
/* 7a479b: cmp dword ptr [ebp - 0xf4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff0cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47a2: je 0x7a498c */
  if (zf) goto L_7a498c;
L_7a47a8: /* 7a47a8: cmp dword ptr [ebp - 0x48], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a47ac: jbe 0x7a498c */
  if ((cf | zf)) goto L_7a498c;
L_7a47b2: /* 7a47b2: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47b6: je 0x7a47cf */
  if (zf) goto L_7a47cf;
L_7a47b8: /* 7a47b8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7a47bb: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 7a47be: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47c1: jne 0x7a47cf */
  if (!zf) goto L_7a47cf;
L_7a47c3: /* 7a47c3: mov dword ptr [ebp - 0xf8], 1 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x1u);
/* 7a47cd: jmp 0x7a47d9 */
  goto L_7a47d9;
L_7a47cf: /* 7a47cf: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
L_7a47d9: /* 7a47d9: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7a47df: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7a47e2: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47e6: je 0x7a47fe */
  if (zf) goto L_7a47fe;
L_7a47e8: /* 7a47e8: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a47eb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a47ed: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a47f0: jb 0x7a47fe */
  if (cf) goto L_7a47fe;
L_7a47f2: /* 7a47f2: mov dword ptr [ebp - 0xfc], 1 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x1u);
/* 7a47fc: jmp 0x7a4808 */
  goto L_7a4808;
L_7a47fe: /* 7a47fe: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
L_7a4808: /* 7a4808: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* 7a480e: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7a4811: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4815: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a4817: /* 7a4817: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a481b: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a481d: /* 7a481d: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7a4821: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4824: call 0x6c77a2 */
  esp -= 4; W32(esp, 0x7a4829u); SPILL(); f_6c77a2(); if (g_unwind) return; RELOAD();
/* 7a4829: jmp 0x7a4861 */
  goto L_7a4861;
L_7a4861: /* 7a4861: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4868: jmp 0x7a4913 */
  goto L_7a4913;
L_7a486d: /* 7a486d: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4871: je 0x7a48c6 */
  if (zf) goto L_7a48c6;
L_7a4873: /* 7a4873: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4877: jne 0x7a48c6 */
  if (!zf) goto L_7a48c6;
L_7a4879: /* 7a4879: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7a487d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4880: call 0x6c360c */
  esp -= 4; W32(esp, 0x7a4885u); SPILL(); f_6c360c(); if (g_unwind) return; RELOAD();
/* 7a4885: jmp 0x7a48bd */
  goto L_7a48bd;
L_7a48bd: /* 7a48bd: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a48c4: jmp 0x7a4913 */
  goto L_7a4913;
L_7a48c6: /* 7a48c6: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a48ca: je 0x7a4913 */
  if (zf) goto L_7a4913;
L_7a48cc: /* 7a48cc: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7a48d0: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a48d3: call 0x6ca844 */
  esp -= 4; W32(esp, 0x7a48d8u); SPILL(); f_6ca844(); if (g_unwind) return; RELOAD();
/* 7a48d8: jmp 0x7a4913 */
  goto L_7a4913;
L_7a4913: /* 7a4913: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a491a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7a491e: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4925: je 0x7a4938 */
  if (zf) goto L_7a4938;
L_7a4927: /* 7a4927: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a492d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a4930: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 7a4936: jmp 0x7a4942 */
  goto L_7a4942;
L_7a4938: /* 7a4938: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
L_7a4942: /* 7a4942: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 7a4948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4949: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a494c: call 0x6c3526 */
  esp -= 4; W32(esp, 0x7a4951u); SPILL(); f_6c3526(); if (g_unwind) return; RELOAD();
/* 7a4951: jmp 0x7a498c */
  goto L_7a498c;
L_7a498c: /* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4a70: /* 7a4a70: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a74: je 0x7a4b6f */
  if (zf) goto L_7a4b6f;
L_7a4a7a: /* 7a4a7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a4a7c: push 0xacd578 */
  { uint32_t v = 0xacd578u; esp -= 4; W32(esp, v); }
/* 7a4a81: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7a4a87: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7a4a8du); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7a4a8d: mov dword ptr [ebp - 0x104], eax */
  W32((uint32_t)(ebp + 0xfffffefcu), eax);
/* 7a4a93: mov edx, dword ptr [ebp - 0x104] */
  edx = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7a4a99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4a9a: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4aa0: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7a4aa3: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a4aa6: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7a4aacu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7a4aac: mov dword ptr [ebp - 0x108], eax */
  W32((uint32_t)(ebp + 0xfffffef8u), eax);
/* 7a4ab2: cmp dword ptr [ebp - 0x108], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffef8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4ab9: je 0x7a4b6f */
  if (zf) goto L_7a4b6f;
L_7a4abf: /* 7a4abf: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 7a4ac3: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4ac9: call 0x6c96bf */
  esp -= 4; W32(esp, 0x7a4aceu); SPILL(); f_6c96bf(); if (g_unwind) return; RELOAD();
/* 7a4ace: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 7a4ad4: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4ada: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a4add: mov eax, dword ptr [ebp - 0x10c] */
  eax = R32((uint32_t)(ebp + 0xfffffef4u));
/* 7a4ae3: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 7a4ae6: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4aec: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 7a4aef: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 7a4af5: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4afb: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 7a4afe: mov edx, dword ptr [ebp - 0xd8] */
  edx = R32((uint32_t)(ebp + 0xffffff28u));
/* 7a4b04: mov dword ptr [ecx + 0x54], edx */
  W32((uint32_t)(ecx + 0x54u), edx);
/* 7a4b07: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4b0e: je 0x7a4b34 */
  if (zf) goto L_7a4b34;
L_7a4b10: /* 7a4b10: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7a4b15: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4b18: jne 0x7a4b34 */
  if (!zf) goto L_7a4b34;
L_7a4b1a: /* 7a4b1a: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4b20: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a4b23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4b24: mov eax, dword ptr [0xb78048] */
  eax = R32((uint32_t)(0xb78048u));
/* 7a4b29: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a4b2b: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4b31: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4b34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4b34: /* 7a4b34: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a462e(void) {
  LOAD_REGS();
L_7a462e: /* 7a462e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a4631: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 7a4637: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a463c: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7a4642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a4643: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4648u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4648(); return;
}

void f_7a4648(void) {
  LOAD_REGS();
L_7a4648: /* 7a4648: push 0xa0b9fc */
  { uint32_t v = 0xa0b9fcu; esp -= 4; W32(esp, v); }
/* 7a464d: push 0xacd530 */
  { uint32_t v = 0xacd530u; esp -= 4; W32(esp, v); }
/* 7a4652: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4658u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4658: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a465b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a465d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a465f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4664u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a4664: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a466b: jmp 0x7a46a3 */
  goto L_7a46a3;
L_7a46a3: /* 7a46a3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a46aa: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a46b1: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7a46b8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7a46bc: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46c3: je 0x7a4700 */
  if (zf) goto L_7a4700;
L_7a46c5: /* 7a46c5: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a46cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a46cd: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a46d3: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7a46d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a46d9: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 7a46df: cmp dword ptr [ebp - 0xec], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46e6: je 0x7a4700 */
  if (zf) goto L_7a4700;
L_7a46e8: /* 7a46e8: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7a46ed: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46f0: jne 0x7a4700 */
  if (!zf) goto L_7a4700;
L_7a46f2: /* 7a46f2: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 7a46f9: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_7a4700: /* 7a4700: jmp 0x7a4738 */
  goto L_7a4738;
L_7a4738: /* 7a4738: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a473f: mov dword ptr [ebp - 0x24], 0x5622 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5622u);
/* 7a4746: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a474a: jne 0x7a4756 */
  if (!zf) goto L_7a4756;
L_7a474c: /* 7a474c: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4750: je 0x7a49ce */
  if (zf) goto L_7a49ce;
L_7a4756: /* 7a4756: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a475a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a475d: call 0x6c9147 */
  esp -= 4; W32(esp, 0x7a4762u); SPILL(); f_6c9147(); if (g_unwind) return; RELOAD();
/* 7a4762: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4769: je 0x7a477c */
  if (zf) goto L_7a477c;
L_7a476b: /* 7a476b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4771: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a4774: mov dword ptr [ebp - 0xf0], eax */
  W32((uint32_t)(ebp + 0xffffff10u), eax);
/* 7a477a: jmp 0x7a4786 */
  goto L_7a4786;
L_7a477c: /* 7a477c: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
L_7a4786: /* 7a4786: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 7a478c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a478d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4790: call 0x6cb55a */
  esp -= 4; W32(esp, 0x7a4795u); SPILL(); f_6cb55a(); if (g_unwind) return; RELOAD();
/* 7a4795: mov dword ptr [ebp - 0xf4], eax */
  W32((uint32_t)(ebp + 0xffffff0cu), eax);
/* 7a479b: cmp dword ptr [ebp - 0xf4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff0cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47a2: je 0x7a498c */
  if (zf) goto L_7a498c;
L_7a47a8: /* 7a47a8: cmp dword ptr [ebp - 0x48], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a47ac: jbe 0x7a498c */
  if ((cf | zf)) goto L_7a498c;
L_7a47b2: /* 7a47b2: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47b6: je 0x7a47cf */
  if (zf) goto L_7a47cf;
L_7a47b8: /* 7a47b8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7a47bb: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 7a47be: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47c1: jne 0x7a47cf */
  if (!zf) goto L_7a47cf;
L_7a47c3: /* 7a47c3: mov dword ptr [ebp - 0xf8], 1 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x1u);
/* 7a47cd: jmp 0x7a47d9 */
  goto L_7a47d9;
L_7a47cf: /* 7a47cf: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
L_7a47d9: /* 7a47d9: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7a47df: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7a47e2: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47e6: je 0x7a47fe */
  if (zf) goto L_7a47fe;
L_7a47e8: /* 7a47e8: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a47eb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a47ed: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a47f0: jb 0x7a47fe */
  if (cf) goto L_7a47fe;
L_7a47f2: /* 7a47f2: mov dword ptr [ebp - 0xfc], 1 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x1u);
/* 7a47fc: jmp 0x7a4808 */
  goto L_7a4808;
L_7a47fe: /* 7a47fe: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
L_7a4808: /* 7a4808: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* 7a480e: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7a4811: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4815: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a4817: /* 7a4817: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a481b: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a481d: /* 7a481d: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7a4821: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4824: call 0x6c77a2 */
  esp -= 4; W32(esp, 0x7a4829u); SPILL(); f_6c77a2(); if (g_unwind) return; RELOAD();
/* 7a4829: jmp 0x7a4861 */
  goto L_7a4861;
L_7a4861: /* 7a4861: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4868: jmp 0x7a4913 */
  goto L_7a4913;
L_7a486d: /* 7a486d: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4871: je 0x7a48c6 */
  if (zf) goto L_7a48c6;
L_7a4873: /* 7a4873: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4877: jne 0x7a48c6 */
  if (!zf) goto L_7a48c6;
L_7a4879: /* 7a4879: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7a487d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4880: call 0x6c360c */
  esp -= 4; W32(esp, 0x7a4885u); SPILL(); f_6c360c(); if (g_unwind) return; RELOAD();
/* 7a4885: jmp 0x7a48bd */
  goto L_7a48bd;
L_7a48bd: /* 7a48bd: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a48c4: jmp 0x7a4913 */
  goto L_7a4913;
L_7a48c6: /* 7a48c6: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a48ca: je 0x7a4913 */
  if (zf) goto L_7a4913;
L_7a48cc: /* 7a48cc: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7a48d0: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a48d3: call 0x6ca844 */
  esp -= 4; W32(esp, 0x7a48d8u); SPILL(); f_6ca844(); if (g_unwind) return; RELOAD();
/* 7a48d8: jmp 0x7a4913 */
  goto L_7a4913;
L_7a4913: /* 7a4913: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a491a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7a491e: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4925: je 0x7a4938 */
  if (zf) goto L_7a4938;
L_7a4927: /* 7a4927: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a492d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a4930: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 7a4936: jmp 0x7a4942 */
  goto L_7a4942;
L_7a4938: /* 7a4938: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
L_7a4942: /* 7a4942: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 7a4948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4949: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a494c: call 0x6c3526 */
  esp -= 4; W32(esp, 0x7a4951u); SPILL(); f_6c3526(); if (g_unwind) return; RELOAD();
/* 7a4951: jmp 0x7a498c */
  goto L_7a498c;
L_7a498c: /* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a466d(void) {
  LOAD_REGS();
L_7a466d: /* 7a466d: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a4670: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 7a4676: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a467b: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 7a4681: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4682: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4687u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4687(); return;
}

void f_7a4687(void) {
  LOAD_REGS();
L_7a4687: /* 7a4687: push 0xa0b9f8 */
  { uint32_t v = 0xa0b9f8u; esp -= 4; W32(esp, v); }
/* 7a468c: push 0xacd538 */
  { uint32_t v = 0xacd538u; esp -= 4; W32(esp, v); }
/* 7a4691: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4697u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4697: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a469a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a469c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a469e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a46a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a46a3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a46aa: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a46b1: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7a46b8: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7a46bc: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46c3: je 0x7a4700 */
  if (zf) goto L_7a4700;
L_7a46c5: /* 7a46c5: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a46cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a46cd: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a46d3: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7a46d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a46d9: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 7a46df: cmp dword ptr [ebp - 0xec], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46e6: je 0x7a4700 */
  if (zf) goto L_7a4700;
L_7a46e8: /* 7a46e8: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7a46ed: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a46f0: jne 0x7a4700 */
  if (!zf) goto L_7a4700;
L_7a46f2: /* 7a46f2: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 7a46f9: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_7a4700: /* 7a4700: jmp 0x7a4738 */
  goto L_7a4738;
L_7a4738: /* 7a4738: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a473f: mov dword ptr [ebp - 0x24], 0x5622 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5622u);
/* 7a4746: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a474a: jne 0x7a4756 */
  if (!zf) goto L_7a4756;
L_7a474c: /* 7a474c: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4750: je 0x7a49ce */
  if (zf) goto L_7a49ce;
L_7a4756: /* 7a4756: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a475a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a475d: call 0x6c9147 */
  esp -= 4; W32(esp, 0x7a4762u); SPILL(); f_6c9147(); if (g_unwind) return; RELOAD();
/* 7a4762: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4769: je 0x7a477c */
  if (zf) goto L_7a477c;
L_7a476b: /* 7a476b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4771: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a4774: mov dword ptr [ebp - 0xf0], eax */
  W32((uint32_t)(ebp + 0xffffff10u), eax);
/* 7a477a: jmp 0x7a4786 */
  goto L_7a4786;
L_7a477c: /* 7a477c: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
L_7a4786: /* 7a4786: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 7a478c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a478d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4790: call 0x6cb55a */
  esp -= 4; W32(esp, 0x7a4795u); SPILL(); f_6cb55a(); if (g_unwind) return; RELOAD();
/* 7a4795: mov dword ptr [ebp - 0xf4], eax */
  W32((uint32_t)(ebp + 0xffffff0cu), eax);
/* 7a479b: cmp dword ptr [ebp - 0xf4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff0cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47a2: je 0x7a498c */
  if (zf) goto L_7a498c;
L_7a47a8: /* 7a47a8: cmp dword ptr [ebp - 0x48], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a47ac: jbe 0x7a498c */
  if ((cf | zf)) goto L_7a498c;
L_7a47b2: /* 7a47b2: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47b6: je 0x7a47cf */
  if (zf) goto L_7a47cf;
L_7a47b8: /* 7a47b8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7a47bb: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 7a47be: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47c1: jne 0x7a47cf */
  if (!zf) goto L_7a47cf;
L_7a47c3: /* 7a47c3: mov dword ptr [ebp - 0xf8], 1 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x1u);
/* 7a47cd: jmp 0x7a47d9 */
  goto L_7a47d9;
L_7a47cf: /* 7a47cf: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
L_7a47d9: /* 7a47d9: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7a47df: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7a47e2: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47e6: je 0x7a47fe */
  if (zf) goto L_7a47fe;
L_7a47e8: /* 7a47e8: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a47eb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a47ed: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a47f0: jb 0x7a47fe */
  if (cf) goto L_7a47fe;
L_7a47f2: /* 7a47f2: mov dword ptr [ebp - 0xfc], 1 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x1u);
/* 7a47fc: jmp 0x7a4808 */
  goto L_7a4808;
L_7a47fe: /* 7a47fe: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
L_7a4808: /* 7a4808: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* 7a480e: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7a4811: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4815: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a4817: /* 7a4817: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a481b: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a481d: /* 7a481d: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7a4821: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4824: call 0x6c77a2 */
  esp -= 4; W32(esp, 0x7a4829u); SPILL(); f_6c77a2(); if (g_unwind) return; RELOAD();
/* 7a4829: jmp 0x7a4861 */
  goto L_7a4861;
L_7a4861: /* 7a4861: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4868: jmp 0x7a4913 */
  goto L_7a4913;
L_7a486d: /* 7a486d: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4871: je 0x7a48c6 */
  if (zf) goto L_7a48c6;
L_7a4873: /* 7a4873: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4877: jne 0x7a48c6 */
  if (!zf) goto L_7a48c6;
L_7a4879: /* 7a4879: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7a487d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4880: call 0x6c360c */
  esp -= 4; W32(esp, 0x7a4885u); SPILL(); f_6c360c(); if (g_unwind) return; RELOAD();
/* 7a4885: jmp 0x7a48bd */
  goto L_7a48bd;
L_7a48bd: /* 7a48bd: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a48c4: jmp 0x7a4913 */
  goto L_7a4913;
L_7a48c6: /* 7a48c6: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a48ca: je 0x7a4913 */
  if (zf) goto L_7a4913;
L_7a48cc: /* 7a48cc: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7a48d0: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a48d3: call 0x6ca844 */
  esp -= 4; W32(esp, 0x7a48d8u); SPILL(); f_6ca844(); if (g_unwind) return; RELOAD();
/* 7a48d8: jmp 0x7a4913 */
  goto L_7a4913;
L_7a4913: /* 7a4913: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a491a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7a491e: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4925: je 0x7a4938 */
  if (zf) goto L_7a4938;
L_7a4927: /* 7a4927: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a492d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a4930: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 7a4936: jmp 0x7a4942 */
  goto L_7a4942;
L_7a4938: /* 7a4938: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
L_7a4942: /* 7a4942: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 7a4948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4949: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a494c: call 0x6c3526 */
  esp -= 4; W32(esp, 0x7a4951u); SPILL(); f_6c3526(); if (g_unwind) return; RELOAD();
/* 7a4951: jmp 0x7a498c */
  goto L_7a498c;
L_7a498c: /* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4702(void) {
  LOAD_REGS();
L_7a4702: /* 7a4702: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a4705: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 7a470b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4710: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 7a4716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4717: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a471cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a471c(); return;
}

void f_7a471c(void) {
  LOAD_REGS();
L_7a471c: /* 7a471c: push 0xa0b9f4 */
  { uint32_t v = 0xa0b9f4u; esp -= 4; W32(esp, v); }
/* 7a4721: push 0xacd540 */
  { uint32_t v = 0xacd540u; esp -= 4; W32(esp, v); }
/* 7a4726: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a472cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a472c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a472f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4731: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4733: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4738u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a4738: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a473f: mov dword ptr [ebp - 0x24], 0x5622 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5622u);
/* 7a4746: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a474a: jne 0x7a4756 */
  if (!zf) goto L_7a4756;
L_7a474c: /* 7a474c: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4750: je 0x7a49ce */
  if (zf) goto L_7a49ce;
L_7a4756: /* 7a4756: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a475a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a475d: call 0x6c9147 */
  esp -= 4; W32(esp, 0x7a4762u); SPILL(); f_6c9147(); if (g_unwind) return; RELOAD();
/* 7a4762: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4769: je 0x7a477c */
  if (zf) goto L_7a477c;
L_7a476b: /* 7a476b: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4771: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a4774: mov dword ptr [ebp - 0xf0], eax */
  W32((uint32_t)(ebp + 0xffffff10u), eax);
/* 7a477a: jmp 0x7a4786 */
  goto L_7a4786;
L_7a477c: /* 7a477c: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
L_7a4786: /* 7a4786: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 7a478c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a478d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4790: call 0x6cb55a */
  esp -= 4; W32(esp, 0x7a4795u); SPILL(); f_6cb55a(); if (g_unwind) return; RELOAD();
/* 7a4795: mov dword ptr [ebp - 0xf4], eax */
  W32((uint32_t)(ebp + 0xffffff0cu), eax);
/* 7a479b: cmp dword ptr [ebp - 0xf4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff0cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47a2: je 0x7a498c */
  if (zf) goto L_7a498c;
L_7a47a8: /* 7a47a8: cmp dword ptr [ebp - 0x48], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a47ac: jbe 0x7a498c */
  if ((cf | zf)) goto L_7a498c;
L_7a47b2: /* 7a47b2: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47b6: je 0x7a47cf */
  if (zf) goto L_7a47cf;
L_7a47b8: /* 7a47b8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7a47bb: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 7a47be: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47c1: jne 0x7a47cf */
  if (!zf) goto L_7a47cf;
L_7a47c3: /* 7a47c3: mov dword ptr [ebp - 0xf8], 1 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x1u);
/* 7a47cd: jmp 0x7a47d9 */
  goto L_7a47d9;
L_7a47cf: /* 7a47cf: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
L_7a47d9: /* 7a47d9: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7a47df: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7a47e2: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a47e6: je 0x7a47fe */
  if (zf) goto L_7a47fe;
L_7a47e8: /* 7a47e8: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7a47eb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a47ed: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7a47f0: jb 0x7a47fe */
  if (cf) goto L_7a47fe;
L_7a47f2: /* 7a47f2: mov dword ptr [ebp - 0xfc], 1 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x1u);
/* 7a47fc: jmp 0x7a4808 */
  goto L_7a4808;
L_7a47fe: /* 7a47fe: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
L_7a4808: /* 7a4808: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* 7a480e: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7a4811: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4815: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a4817: /* 7a4817: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a481b: je 0x7a486d */
  if (zf) goto L_7a486d;
L_7a481d: /* 7a481d: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7a4821: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4824: call 0x6c77a2 */
  esp -= 4; W32(esp, 0x7a4829u); SPILL(); f_6c77a2(); if (g_unwind) return; RELOAD();
/* 7a4829: jmp 0x7a4861 */
  goto L_7a4861;
L_7a4861: /* 7a4861: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4868: jmp 0x7a4913 */
  goto L_7a4913;
L_7a486d: /* 7a486d: cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4871: je 0x7a48c6 */
  if (zf) goto L_7a48c6;
L_7a4873: /* 7a4873: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4877: jne 0x7a48c6 */
  if (!zf) goto L_7a48c6;
L_7a4879: /* 7a4879: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7a487d: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a4880: call 0x6c360c */
  esp -= 4; W32(esp, 0x7a4885u); SPILL(); f_6c360c(); if (g_unwind) return; RELOAD();
/* 7a4885: jmp 0x7a48bd */
  goto L_7a48bd;
L_7a48bd: /* 7a48bd: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a48c4: jmp 0x7a4913 */
  goto L_7a4913;
L_7a48c6: /* 7a48c6: cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a48ca: je 0x7a4913 */
  if (zf) goto L_7a4913;
L_7a48cc: /* 7a48cc: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7a48d0: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a48d3: call 0x6ca844 */
  esp -= 4; W32(esp, 0x7a48d8u); SPILL(); f_6ca844(); if (g_unwind) return; RELOAD();
/* 7a48d8: jmp 0x7a4913 */
  goto L_7a4913;
L_7a4913: /* 7a4913: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a491a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7a491e: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4925: je 0x7a4938 */
  if (zf) goto L_7a4938;
L_7a4927: /* 7a4927: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a492d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a4930: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 7a4936: jmp 0x7a4942 */
  goto L_7a4942;
L_7a4938: /* 7a4938: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
L_7a4942: /* 7a4942: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 7a4948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4949: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a494c: call 0x6c3526 */
  esp -= 4; W32(esp, 0x7a4951u); SPILL(); f_6c3526(); if (g_unwind) return; RELOAD();
/* 7a4951: jmp 0x7a498c */
  goto L_7a498c;
L_7a498c: /* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a482b(void) {
  LOAD_REGS();
L_7a482b: /* 7a482b: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7a482e: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 7a4834: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4839: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 7a483f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4840: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4845u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4845(); return;
}

void f_7a4845(void) {
  LOAD_REGS();
L_7a4845: /* 7a4845: push 0xa0b9f0 */
  { uint32_t v = 0xa0b9f0u; esp -= 4; W32(esp, v); }
/* 7a484a: push 0xacd548 */
  { uint32_t v = 0xacd548u; esp -= 4; W32(esp, v); }
/* 7a484f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4855u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4855: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4858: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a485a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a485c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4861u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a4861: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4868: jmp 0x7a4913 */
  goto L_7a4913;
L_7a4913: /* 7a4913: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a491a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7a491e: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4925: je 0x7a4938 */
  if (zf) goto L_7a4938;
L_7a4927: /* 7a4927: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a492d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a4930: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 7a4936: jmp 0x7a4942 */
  goto L_7a4942;
L_7a4938: /* 7a4938: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
L_7a4942: /* 7a4942: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 7a4948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4949: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a494c: call 0x6c3526 */
  esp -= 4; W32(esp, 0x7a4951u); SPILL(); f_6c3526(); if (g_unwind) return; RELOAD();
/* 7a4951: jmp 0x7a498c */
  goto L_7a498c;
L_7a498c: /* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4887(void) {
  LOAD_REGS();
L_7a4887: /* 7a4887: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7a488a: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 7a4890: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4895: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 7a489b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a489c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a48a1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a48a1(); return;
}

void f_7a48a1(void) {
  LOAD_REGS();
L_7a48a1: /* 7a48a1: push 0xa0b9ec */
  { uint32_t v = 0xa0b9ecu; esp -= 4; W32(esp, v); }
/* 7a48a6: push 0xacd550 */
  { uint32_t v = 0xacd550u; esp -= 4; W32(esp, v); }
/* 7a48ab: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a48b1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a48b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a48b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a48b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a48b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a48bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a48bd: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a48c4: jmp 0x7a4913 */
  goto L_7a4913;
L_7a4913: /* 7a4913: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a491a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7a491e: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4925: je 0x7a4938 */
  if (zf) goto L_7a4938;
L_7a4927: /* 7a4927: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a492d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a4930: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 7a4936: jmp 0x7a4942 */
  goto L_7a4942;
L_7a4938: /* 7a4938: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
L_7a4942: /* 7a4942: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 7a4948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4949: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a494c: call 0x6c3526 */
  esp -= 4; W32(esp, 0x7a4951u); SPILL(); f_6c3526(); if (g_unwind) return; RELOAD();
/* 7a4951: jmp 0x7a498c */
  goto L_7a498c;
L_7a498c: /* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a48da(void) {
  LOAD_REGS();
L_7a48da: /* 7a48da: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7a48e0: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 7a48e6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a48eb: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 7a48f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a48f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a48f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a48f7(); return;
}

void f_7a48f7(void) {
  LOAD_REGS();
L_7a48f7: /* 7a48f7: push 0xa0b9e8 */
  { uint32_t v = 0xa0b9e8u; esp -= 4; W32(esp, v); }
/* 7a48fc: push 0xacd558 */
  { uint32_t v = 0xacd558u; esp -= 4; W32(esp, v); }
/* 7a4901: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4907u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4907: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a490a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a490c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a490e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4913u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a4913: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a491a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7a491e: cmp dword ptr [ebp - 0xdc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4925: je 0x7a4938 */
  if (zf) goto L_7a4938;
L_7a4927: /* 7a4927: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a492d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a4930: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 7a4936: jmp 0x7a4942 */
  goto L_7a4942;
L_7a4938: /* 7a4938: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
L_7a4942: /* 7a4942: mov eax, dword ptr [ebp - 0x100] */
  eax = R32((uint32_t)(ebp + 0xffffff00u));
/* 7a4948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4949: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 7a494c: call 0x6c3526 */
  esp -= 4; W32(esp, 0x7a4951u); SPILL(); f_6c3526(); if (g_unwind) return; RELOAD();
/* 7a4951: jmp 0x7a498c */
  goto L_7a498c;
L_7a498c: /* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4953(void) {
  LOAD_REGS();
L_7a4953: /* 7a4953: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 7a4959: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 7a495f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4964: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 7a496a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a496b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4970u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4970(); return;
}

void f_7a4970(void) {
  LOAD_REGS();
L_7a4970: /* 7a4970: push 0xa0b9e4 */
  { uint32_t v = 0xa0b9e4u; esp -= 4; W32(esp, v); }
/* 7a4975: push 0xacd560 */
  { uint32_t v = 0xacd560u; esp -= 4; W32(esp, v); }
/* 7a497a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4980u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4980: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4985: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4987: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a498cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a498c: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a4993: jmp 0x7a49ce */
  goto L_7a49ce;
L_7a49ce: /* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4995(void) {
  LOAD_REGS();
L_7a4995: /* 7a4995: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7a499b: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 7a49a1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a49a6: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 7a49ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a49ad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a49b2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a49b2(); return;
}

void f_7a49b2(void) {
  LOAD_REGS();
L_7a49b2: /* 7a49b2: push 0xa0b9e0 */
  { uint32_t v = 0xa0b9e0u; esp -= 4; W32(esp, v); }
/* 7a49b7: push 0xacd568 */
  { uint32_t v = 0xacd568u; esp -= 4; W32(esp, v); }
/* 7a49bc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a49c2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a49c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a49c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a49c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a49c9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a49ceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a49ce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a49d5: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7a49d9: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49df: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 7a49e2: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 7a49e8: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a49ee: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 7a49f1: mov eax, dword ptr [ebp - 0xd4] */
  eax = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7a49f7: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a49fa: cmp dword ptr [0xb78048], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb78048u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a01: je 0x7a4a29 */
  if (zf) goto L_7a4a29;
L_7a4a03: /* 7a4a03: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7a4a09: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a4a0c: jne 0x7a4a29 */
  if (!zf) goto L_7a4a29;
L_7a4a0e: /* 7a4a0e: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 7a4a14: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 7a4a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4a18: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a4a20: mov ecx, dword ptr [0xb78048] */
  ecx = R32((uint32_t)(0xb78048u));
/* 7a4a26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a4a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a4a29: /* 7a4a29: jmp 0x7a4a64 */
  goto L_7a4a64;
L_7a4a64: /* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4a2b(void) {
  LOAD_REGS();
L_7a4a2b: /* 7a4a2b: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 7a4a31: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 7a4a37: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4a3c: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 7a4a42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a4a43: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4a48u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4a48(); return;
}

void f_7a4a48(void) {
  LOAD_REGS();
L_7a4a48: /* 7a4a48: push 0xa0b9dc */
  { uint32_t v = 0xa0b9dcu; esp -= 4; W32(esp, v); }
/* 7a4a4d: push 0xacd570 */
  { uint32_t v = 0xacd570u; esp -= 4; W32(esp, v); }
/* 7a4a52: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4a58u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4a58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4a5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4a5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4a5f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4a64u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a4a64: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4a6b: jmp 0x7a4b6f */
  goto L_7a4b6f;
L_7a4b6f: /* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4b36(void) {
  LOAD_REGS();
L_7a4b36: /* 7a4b36: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7a4b3c: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7a4b42: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4b47: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7a4b4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a4b4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4b53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4b53(); return;
}

void f_7a4b53(void) {
  LOAD_REGS();
L_7a4b53: /* 7a4b53: push 0xa0b9b8 */
  { uint32_t v = 0xa0b9b8u; esp -= 4; W32(esp, v); }
/* 7a4b58: push 0xacd580 */
  { uint32_t v = 0xacd580u; esp -= 4; W32(esp, v); }
/* 7a4b5d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4b63u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4b63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4b66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4b68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4b6a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4b6fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a4b6f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4b76: jmp 0x7a4bb1 */
  goto L_7a4bb1;
L_7a4bb1: /* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4b78(void) {
  LOAD_REGS();
L_7a4b78: /* 7a4b78: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 7a4b7e: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 7a4b84: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4b89: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 7a4b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4b90: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4b95u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4b95(); return;
}

void f_7a4b95(void) {
  LOAD_REGS();
L_7a4b95: /* 7a4b95: push 0xa0b990 */
  { uint32_t v = 0xa0b990u; esp -= 4; W32(esp, v); }
/* 7a4b9a: push 0xacd588 */
  { uint32_t v = 0xacd588u; esp -= 4; W32(esp, v); }
/* 7a4b9f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4ba5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4ba5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4ba8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4baa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4bac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4bb1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a4bb1: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7a4bb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4bbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4bc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4bc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4bc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4bc5: mov esp, ebp */
  esp = ebp;
/* 7a4bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4d80(void) {
  LOAD_REGS();
L_7a4d80: /* 7a4d80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a4d81: mov ebp, esp */
  ebp = esp;
/* 7a4d83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a4d85: push 0x9ce610 */
  { uint32_t v = 0x9ce610u; esp -= 4; W32(esp, v); }
/* 7a4d8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a4d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4d91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a4d98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a4d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a4d9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a4d9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a4d9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a4da1: mov esi, ecx */
  esi = ecx;
/* 7a4da3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4daa: call 0x6c51ff */
  esp -= 4; W32(esp, 0x7a4dafu); SPILL(); f_6c51ff(); if (g_unwind) return; RELOAD();
/* 7a4daf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7a4db1: mov ecx, esi */
  ecx = esi;
/* 7a4db3: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x7a4db6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a4db6: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 7a4dbc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a4dbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4dbf: mov ecx, esi */
  ecx = esi;
/* 7a4dc1: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7a4dc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a4dc4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4dc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4dc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4dc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4dd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4dd1: mov esp, ebp */
  esp = ebp;
/* 7a4dd3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4dd4: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4dd5(void) {
  LOAD_REGS();
L_7a4dd5: /* 7a4dd5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a4dd8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4ddd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7a4de0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a4de1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7a4de4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4de9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4de9(); return;
}

void f_7a4de9(void) {
  LOAD_REGS();
L_7a4de9: /* 7a4de9: push 0xa0ba2c */
  { uint32_t v = 0xa0ba2cu; esp -= 4; W32(esp, v); }
/* 7a4dee: push 0xacd68c */
  { uint32_t v = 0xacd68cu; esp -= 4; W32(esp, v); }
/* 7a4df3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4df9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4df9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4dfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4dfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4e00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4e05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a4e05: guest_badaddr(0x7a4e05); return;
}

void f_7a4e40(void) {
  LOAD_REGS();
L_7a4e40: /* 7a4e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a4e44: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7a4e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4e47: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a4e4du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a4e4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a4e60(void) {
  LOAD_REGS();
L_7a4e60: /* 7a4e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a4e64: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7a4e66: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7a4e69: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7a4e6c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a4e80(void) {
  LOAD_REGS();
L_7a4e80: /* 7a4e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a4e84: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7a4e86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4e87: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a4e8du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a4e8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a4ea0(void) {
  LOAD_REGS();
L_7a4ea0: /* 7a4ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a4ea1: mov esi, ecx */
  esi = ecx;
/* 7a4ea3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7a4ea9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7a4ea9: mov eax, esi */
  eax = esi;
/* 7a4eab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4eac: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4ec0(void) {
  LOAD_REGS();
L_7a4ec0: /* 7a4ec0: mov eax, 1 */
  eax = 0x1u;
/* 7a4ec5: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4ee0(void) {
  LOAD_REGS();
L_7a4ee0: /* 7a4ee0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7a4ee4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7a4ee8: call 0x99cc5c */
  esp -= 4; W32(esp, 0x7a4eedu); SPILL(); f_99cc5c(); if (g_unwind) return; RELOAD();
/* 7a4eed: ret  */
  esp += 4; SPILL(); return;
}

void f_7a4f00(void) {
  LOAD_REGS();
L_7a4f00: /* 7a4f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a4f01: mov ebp, esp */
  ebp = esp;
/* 7a4f03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a4f05: push 0x9ce620 */
  { uint32_t v = 0x9ce620u; esp -= 4; W32(esp, v); }
/* 7a4f0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a4f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4f11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a4f18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a4f1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a4f1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a4f1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a4f1e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7a4f21: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a4f24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a4f25: mov esi, ecx */
  esi = ecx;
/* 7a4f27: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a4f2e: call 0x6ca62d */
  esp -= 4; W32(esp, 0x7a4f33u); SPILL(); f_6ca62d(); if (g_unwind) return; RELOAD();
/* 7a4f33: mov eax, dword ptr [esi + 0x4b4] */
  eax = R32((uint32_t)(esi + 0x4b4u));
/* 7a4f39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a4f3b: je 0x7a4f45 */
  if (zf) goto L_7a4f45;
L_7a4f3d: /* 7a4f3d: mov dword ptr [esi + 0x564], eax */
  W32((uint32_t)(esi + 0x564u), eax);
/* 7a4f43: jmp 0x7a4f4f */
  goto L_7a4f4f;
L_7a4f45: /* 7a4f45: mov dword ptr [esi + 0x564], 1 */
  W32((uint32_t)(esi + 0x564u), 0x1u);
L_7a4f4f: /* 7a4f4f: mov eax, dword ptr [esi + 0x4f0] */
  eax = R32((uint32_t)(esi + 0x4f0u));
/* 7a4f55: mov edx, dword ptr [esi + 0x564] */
  edx = R32((uint32_t)(esi + 0x564u));
/* 7a4f5b: mov ecx, eax */
  ecx = eax;
/* 7a4f5d: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 7a4f60: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a4f62: mov dword ptr [esi + 0x568], ecx */
  W32((uint32_t)(esi + 0x568u), ecx);
/* 7a4f68: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 7a4f6b: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 7a4f6e: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 7a4f71: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 7a4f74: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a4f76: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7a4f78: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7a4f7a: mov dword ptr [esi + 0x570], ecx */
  W32((uint32_t)(esi + 0x570u), ecx);
/* 7a4f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4f81: lea ecx, [esi + 0x578] */
  ecx = (uint32_t)(esi + 0x578u);
/* 7a4f87: mov dword ptr [esi + 0x56c], edx */
  W32((uint32_t)(esi + 0x56cu), edx);
/* 7a4f8d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a4f93u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a4f93: mov eax, dword ptr [esi + 0x4d4] */
  eax = R32((uint32_t)(esi + 0x4d4u));
/* 7a4f99: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 7a4f9c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7a4f9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a4f9f: lea ecx, [esi + 0x584] */
  ecx = (uint32_t)(esi + 0x584u);
/* 7a4fa5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a4fabu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a4fab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a4fad: mov ecx, esi */
  ecx = esi;
/* 7a4faf: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7a4fb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a4fb5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a4fb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a4fb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a4fba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a4fc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a4fc2: mov esp, ebp */
  esp = ebp;
/* 7a4fc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a4fc5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a4fc8(void) {
  LOAD_REGS();
L_7a4fc8: /* 7a4fc8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a4fcb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a4fd0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a4fd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a4fd4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a4fd7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4fdcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a4fdc(); return;
}

void f_7a4fdc(void) {
  LOAD_REGS();
L_7a4fdc: /* 7a4fdc: push 0xa0ba74 */
  { uint32_t v = 0xa0ba74u; esp -= 4; W32(esp, v); }
/* 7a4fe1: push 0xacd694 */
  { uint32_t v = 0xacd694u; esp -= 4; W32(esp, v); }
/* 7a4fe6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a4fecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a4fec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a4fef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4ff1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a4ff3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a4ff8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a4ff8: guest_badaddr(0x7a4ff8); return;
}

void f_7a5040(void) {
  LOAD_REGS();
L_7a5040: /* 7a5040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a5041: mov ebp, esp */
  ebp = esp;
/* 7a5043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a5045: push 0x9ce630 */
  { uint32_t v = 0x9ce630u; esp -= 4; W32(esp, v); }
/* 7a504a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a5050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a5051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a5058: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a505b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a505c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7a505f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a5060: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a5061: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a5064: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a5065: mov esi, ecx */
  esi = ecx;
/* 7a5067: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a506e: call 0x6c568c */
  esp -= 4; W32(esp, 0x7a5073u); SPILL(); f_6c568c(); if (g_unwind) return; RELOAD();
/* 7a5073: xor edi, edi */
  edi = 0;
L_7a5075: /* 7a5075: cmp edi, dword ptr [esi + 0x4a0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4a0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a507b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a507c: jge 0x7a509a */
  if ((sf == of)) goto L_7a509a;
L_7a507e: /* 7a507e: mov edx, dword ptr [esi + 0x49c] */
  edx = R32((uint32_t)(esi + 0x49cu));
/* 7a5084: mov ecx, edi */
  ecx = edi;
/* 7a5086: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7a5089: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a508c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a508d: lea ecx, [edx + ecx + 4] */
  ecx = (uint32_t)(edx + ecx + 0x4u);
/* 7a5091: call dword ptr [0xcfa628] */
  esp -= 4; W32(esp, 0x7a5097u); SPILL(); f_4e2d47(); if (g_unwind) return; /* Core!??XFRangeVector@@QAE?AV0@M@Z */ RELOAD();
/* 7a5097: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7a5098: jmp 0x7a5075 */
  goto L_7a5075;
L_7a509a: /* 7a509a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7a509d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a509e: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 7a50a4: call dword ptr [0xcfa624] */
  esp -= 4; W32(esp, 0x7a50aau); SPILL(); f_4e11c2(); if (g_unwind) return; /* Core!??XFRange@@QAE?AV0@M@Z */ RELOAD();
/* 7a50aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a50ab: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7a50ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a50af: lea ecx, [esi + 0x4bc] */
  ecx = (uint32_t)(esi + 0x4bcu);
/* 7a50b5: call dword ptr [0xcfa628] */
  esp -= 4; W32(esp, 0x7a50bbu); SPILL(); f_4e2d47(); if (g_unwind) return; /* Core!??XFRangeVector@@QAE?AV0@M@Z */ RELOAD();
/* 7a50bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a50bc: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7a50bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a50c0: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7a50c6: call dword ptr [0xcfa628] */
  esp -= 4; W32(esp, 0x7a50ccu); SPILL(); f_4e2d47(); if (g_unwind) return; /* Core!??XFRangeVector@@QAE?AV0@M@Z */ RELOAD();
/* 7a50cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a50cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a50d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a50d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a50d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a50d9: mov esp, ebp */
  esp = ebp;
/* 7a50db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a50dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a50df(void) {
  LOAD_REGS();
L_7a50df: /* 7a50df: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a50e2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a50e7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a50ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a50eb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a50ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a50f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a50f3(); return;
}

void f_7a50f3(void) {
  LOAD_REGS();
L_7a50f3: /* 7a50f3: push 0xa0bab0 */
  { uint32_t v = 0xa0bab0u; esp -= 4; W32(esp, v); }
/* 7a50f8: push 0xacd6a4 */
  { uint32_t v = 0xacd6a4u; esp -= 4; W32(esp, v); }
/* 7a50fd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a5103u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a5103: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a5106: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a5108: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a510a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a510fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a510f: guest_badaddr(0x7a510f); return;
}

void f_7a5150(void) {
  LOAD_REGS();
L_7a5150: /* 7a5150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a5151: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a5152: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7a5158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a5159: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a515a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7a515e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a5160: mov esi, ecx */
  esi = ecx;
/* 7a5162: jge 0x7a5178 */
  if ((sf == of)) goto L_7a5178;
L_7a5164: /* 7a5164: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7a5169: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7a516e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7a5173: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7a5175u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a5175: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a5178: /* 7a5178: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a517b: jle 0x7a5191 */
  if ((zf || sf != of)) goto L_7a5191;
L_7a517d: /* 7a517d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7a5182: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7a5187: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7a518c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7a518eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a518e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a5191: /* 7a5191: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7a5195: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7a5198: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7a519b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a519d: jle 0x7a51b3 */
  if ((zf || sf != of)) goto L_7a51b3;
L_7a519f: /* 7a519f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7a51a4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7a51a9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7a51ae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7a51b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a51b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a51b3: /* 7a51b3: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7a51b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a51b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a51b7: mov ecx, esi */
  ecx = esi;
/* 7a51b9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7a51bfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7a51bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a51c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a51c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a51c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a51c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7a51f0(void) {
  LOAD_REGS();
L_7a51f0: /* 7a51f0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a51f3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 7a51f7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7a51fb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7a51fd: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7a51ff: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7a5202: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7a5205: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7a5208: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7a520b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7a520f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a5211: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 7a5215: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7a5219: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 7a521d: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7a5221: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 7a5225: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7a5229: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7a522b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7a522f: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 7a5233: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a5235: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7a5238: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7a523c: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7a523f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7a5243: mov ecx, eax */
  ecx = eax;
/* 7a5245: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a5247: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7a524b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7a524f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a5252: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7a5256: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7a5259: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a525c: ret  */
  esp += 4; SPILL(); return;
}

void f_7a5280(void) {
  LOAD_REGS();
L_7a5280: /* 7a5280: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7a5284: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 7a5288: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a528a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a528d: jne 0x7a5295 */
  if (!zf) goto L_7a5295;
L_7a528f: /* 7a528f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7a5293: jmp 0x7a5299 */
  goto L_7a5299;
L_7a5295: /* 7a5295: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_7a5299: /* 7a5299: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 7a529d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a529f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a52a2: je 0x7a52aa */
  if (zf) goto L_7a52aa;
L_7a52a4: /* 7a52a4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a52a6: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_7a52aa: /* 7a52aa: ret  */
  esp += 4; SPILL(); return;
}

void f_7a52c0(void) {
  LOAD_REGS();
L_7a52c0: /* 7a52c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a52c1: mov ebp, esp */
  ebp = esp;
/* 7a52c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a52c5: push 0x9ce640 */
  { uint32_t v = 0x9ce640u; esp -= 4; W32(esp, v); }
/* 7a52ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a52d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a52d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a52d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a52db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a52dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a52dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a52de: mov esi, ecx */
  esi = ecx;
/* 7a52e0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a52e3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a52ea: lea ecx, [esi + 0x578] */
  ecx = (uint32_t)(esi + 0x578u);
/* 7a52f0: xor eax, eax */
  eax = 0;
L_7a52f2: /* 7a52f2: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a52f5: jge 0x7a52fa */
  if ((sf == of)) goto L_7a52fa;
L_7a52f7: /* 7a52f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a52f8: jmp 0x7a52f2 */
  goto L_7a52f2;
L_7a52fa: /* 7a52fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a52fc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7a52fe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7a5304u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7a5304: lea ecx, [esi + 0x584] */
  ecx = (uint32_t)(esi + 0x584u);
/* 7a530a: xor eax, eax */
  eax = 0;
/* 7a530c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a5310: /* 7a5310: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5313: jge 0x7a5318 */
  if ((sf == of)) goto L_7a5318;
L_7a5315: /* 7a5315: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a5316: jmp 0x7a5310 */
  goto L_7a5310;
L_7a5318: /* 7a5318: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a531a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7a531c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7a5322u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7a5322: mov ecx, esi */
  ecx = esi;
/* 7a5324: call 0x6c7414 */
  esp -= 4; W32(esp, 0x7a5329u); SPILL(); f_6c7414(); if (g_unwind) return; RELOAD();
/* 7a5329: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a532c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a532d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a532e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a5335: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a5336: mov esp, ebp */
  esp = ebp;
/* 7a5338: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a5339: ret  */
  esp += 4; SPILL(); return;
}

void f_7a533a(void) {
  LOAD_REGS();
L_7a533a: /* 7a533a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a533d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a5342: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a5345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a5346: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a5349: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a534eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a534e(); return;
}

void f_7a534e(void) {
  LOAD_REGS();
L_7a534e: /* 7a534e: push 0xa0bae0 */
  { uint32_t v = 0xa0bae0u; esp -= 4; W32(esp, v); }
/* 7a5353: push 0xacd69c */
  { uint32_t v = 0xacd69cu; esp -= 4; W32(esp, v); }
/* 7a5358: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a535eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a535e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a5361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a5363: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a5365: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a536au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a536a: guest_badaddr(0x7a536a); return;
}

void f_7a53a0(void) {
  LOAD_REGS();
L_7a53a0: /* 7a53a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a53a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a53a2: mov ebx, ecx */
  ebx = ecx;
/* 7a53a4: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a53aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a53ac: je 0x7a546d */
  if (zf) goto L_7a546d;
L_7a53b2: /* 7a53b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a53b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a53b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a53b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a53b7: lea esi, [ebx + 0x590] */
  esi = (uint32_t)(ebx + 0x590u);
/* 7a53bd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a53bf: mov ecx, esi */
  ecx = esi;
/* 7a53c1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7a53c7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7a53c7: mov eax, dword ptr [ebx + 0x4a0] */
  eax = R32((uint32_t)(ebx + 0x4a0u));
/* 7a53cd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a53cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a53d0: mov ecx, esi */
  ecx = esi;
/* 7a53d2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a53d8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a53d8: mov eax, dword ptr [ebx + 0x4a0] */
  eax = R32((uint32_t)(ebx + 0x4a0u));
/* 7a53de: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a53e4: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 7a53ea: xor ebp, ebp */
  ebp = 0;
/* 7a53ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a53ee: jle 0x7a546a */
  if ((zf || sf != of)) goto L_7a546a;
L_7a53f0: /* 7a53f0: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 7a53f4: jmp 0x7a5400 */
  goto L_7a5400;
L_7a5400: /* 7a5400: mov edx, dword ptr [ebx + 0x590] */
  edx = R32((uint32_t)(ebx + 0x590u));
/* 7a5406: mov dword ptr [edx + ebp*4], 0 */
  W32((uint32_t)(edx + ebp*4), 0x0u);
/* 7a540d: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7a5410: xor esi, esi */
  esi = 0;
/* 7a5412: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a5414: jle 0x7a5454 */
  if ((zf || sf != of)) goto L_7a5454;
L_7a5416: /* 7a5416: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7a5419: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7a541c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a541e: je 0x7a543b */
  if (zf) goto L_7a543b;
L_7a5420: /* 7a5420: mov ecx, dword ptr [ebx + 0x49c] */
  ecx = R32((uint32_t)(ebx + 0x49cu));
/* 7a5426: add ecx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a542a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a542b: lea ecx, [eax + 0x100] */
  ecx = (uint32_t)(eax + 0x100u);
/* 7a5431: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7a5437u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7a5437: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5439: jne 0x7a5445 */
  if (!zf) goto L_7a5445;
L_7a543b: /* 7a543b: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7a543e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a543f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5441: jl 0x7a5416 */
  if ((sf != of)) goto L_7a5416;
L_7a5443: /* 7a5443: jmp 0x7a5454 */
  goto L_7a5454;
L_7a5445: /* 7a5445: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7a5448: mov eax, dword ptr [ebx + 0x590] */
  eax = R32((uint32_t)(ebx + 0x590u));
/* 7a544e: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7a5451: mov dword ptr [eax + ebp*4], ecx */
  W32((uint32_t)(eax + ebp*4), ecx);
L_7a5454: /* 7a5454: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7a5458: mov eax, dword ptr [ebx + 0x4a0] */
  eax = R32((uint32_t)(ebx + 0x4a0u));
/* 7a545e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7a545f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a5462: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5464: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7a5468: jl 0x7a5400 */
  if ((sf != of)) goto L_7a5400;
L_7a546a: /* 7a546a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a546b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a546c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7a546d: /* 7a546d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a546e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7a546f: ret  */
  esp += 4; SPILL(); return;
}

void f_7a53f6(void) {
  LOAD_REGS();
L_7a53f6: /* 7a53f6: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7a53fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7a5400: /* 7a5400: mov edx, dword ptr [ebx + 0x590] */
  edx = R32((uint32_t)(ebx + 0x590u));
/* 7a5406: mov dword ptr [edx + ebp*4], 0 */
  W32((uint32_t)(edx + ebp*4), 0x0u);
/* 7a540d: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7a5410: xor esi, esi */
  esi = 0;
/* 7a5412: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a5414: jle 0x7a5454 */
  if ((zf || sf != of)) goto L_7a5454;
L_7a5416: /* 7a5416: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7a5419: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7a541c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a541e: je 0x7a543b */
  if (zf) goto L_7a543b;
L_7a5420: /* 7a5420: mov ecx, dword ptr [ebx + 0x49c] */
  ecx = R32((uint32_t)(ebx + 0x49cu));
/* 7a5426: add ecx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a542a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a542b: lea ecx, [eax + 0x100] */
  ecx = (uint32_t)(eax + 0x100u);
/* 7a5431: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7a5437u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7a5437: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5439: jne 0x7a5445 */
  if (!zf) goto L_7a5445;
L_7a543b: /* 7a543b: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7a543e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a543f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5441: jl 0x7a5416 */
  if ((sf != of)) goto L_7a5416;
L_7a5443: /* 7a5443: jmp 0x7a5454 */
  goto L_7a5454;
L_7a5445: /* 7a5445: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7a5448: mov eax, dword ptr [ebx + 0x590] */
  eax = R32((uint32_t)(ebx + 0x590u));
/* 7a544e: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7a5451: mov dword ptr [eax + ebp*4], ecx */
  W32((uint32_t)(eax + ebp*4), ecx);
L_7a5454: /* 7a5454: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7a5458: mov eax, dword ptr [ebx + 0x4a0] */
  eax = R32((uint32_t)(ebx + 0x4a0u));
/* 7a545e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7a545f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a5462: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5464: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7a5468: jl 0x7a5400 */
  if ((sf != of)) goto L_7a5400;
L_7a546a: /* 7a546a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a546b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a546c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a546d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a546e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7a546f: ret  */
  esp += 4; SPILL(); return;
}

void f_7a54b0(void) {
  LOAD_REGS();
L_7a54b0: /* 7a54b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a54b1: mov ebp, esp */
  ebp = esp;
/* 7a54b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a54b5: push 0x9ce650 */
  { uint32_t v = 0x9ce650u; esp -= 4; W32(esp, v); }
/* 7a54ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a54c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a54c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a54c8: sub esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a54ce: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7a54d1: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7a54d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a54d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a54d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a54d7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a54da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a54db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7a54de: mov esi, ecx */
  esi = ecx;
/* 7a54e0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7a54e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a54e4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a54e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a54e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a54e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a54ea: mov ecx, esi */
  ecx = esi;
/* 7a54ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a54f3: call 0x6cba0f */
  esp -= 4; W32(esp, 0x7a54f8u); SPILL(); f_6cba0f(); if (g_unwind) return; RELOAD();
/* 7a54f8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7a54fb: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 7a5501: imul ebx, ebx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xc8u);
  ebx = (uint32_t)r;
  }
/* 7a5507: mov al, byte ptr [esi + 0x4a8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x4a8u))) & 0xffu);
/* 7a550d: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7a550f: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 7a5512: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 7a5514: mov dword ptr [ebp - 0xa0], ebx */
  W32((uint32_t)(ebp + 0xffffff60u), ebx);
/* 7a551a: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 7a5521: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 7a5528: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 7a552f: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7a5536: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7a553d: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 7a5544: mov dword ptr [ebp + 0x18], 0 */
  W32((uint32_t)(ebp + 0x18u), 0x0u);
/* 7a554b: jb 0x7a55c2 */
  if (cf) goto L_7a55c2;
L_7a554d: /* 7a554d: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a554f: ja 0x7a55c2 */
  if ((!cf && !zf)) goto L_7a55c2;
L_7a5551: /* 7a5551: fld dword ptr [esi + 0x574] */
  { double v = F32((uint32_t)(esi + 0x574u)); FPUSH(v); }
/* 7a5557: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7a555d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a555f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a5562: jnp 0x7a55b6 */
  if (!pf) goto L_7a55b6;
L_7a5564: /* 7a5564: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7a556au); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7a556a: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 7a556d: fmul dword ptr [esi + 0x574] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x574u)));
/* 7a5573: xor ecx, ecx */
  ecx = 0;
/* 7a5575: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7a5578: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7a557e: mov edi, edi */
  edi = edi;
L_7a5580: /* 7a5580: cmp ecx, dword ptr [esi + 0x4a0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4a0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5586: jge 0x7a55af */
  if ((sf == of)) goto L_7a55af;
L_7a5588: /* 7a5588: fcom dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
/* 7a558b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a558d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a5590: jp 0x7a5602 */
  if (pf) goto L_7a5602;
L_7a5592: /* 7a5592: mov eax, dword ptr [esi + 0x49c] */
  eax = R32((uint32_t)(esi + 0x49cu));
/* 7a5598: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7a559a: mov edx, ecx */
  edx = ecx;
/* 7a559c: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7a559f: fadd dword ptr [eax + edx + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx + 0x1cu)));
/* 7a55a3: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 7a55a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a55a8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a55ab: jne 0x7a5602 */
  if (!zf) goto L_7a5602;
L_7a55ad: /* 7a55ad: mov edi, ecx */
  edi = ecx;
L_7a55af: /* 7a55af: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a55b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a55b4: jne 0x7a55c2 */
  if (!zf) goto L_7a55c2;
L_7a55b6: /* 7a55b6: mov eax, dword ptr [esi + 0x4a0] */
  eax = R32((uint32_t)(esi + 0x4a0u));
/* 7a55bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a55be: je 0x7a55c2 */
  if (zf) goto L_7a55c2;
L_7a55c0: /* 7a55c0: xor edi, edi */
  edi = 0;
L_7a55c2: /* 7a55c2: cmp byte ptr [esi + 0x4a8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4a8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a55c9: jne 0x7a55eb */
  if (!zf) goto L_7a55eb;
L_7a55cb: /* 7a55cb: cmp byte ptr [esi + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a55d2: jne 0x7a55eb */
  if (!zf) goto L_7a55eb;
L_7a55d4: /* 7a55d4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7a55da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a55dc: push 0xacd6b0 */
  { uint32_t v = 0xacd6b0u; esp -= 4; W32(esp, v); }
/* 7a55e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a55e2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7a55e8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7a55e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a55eb: /* 7a55eb: movzx eax, byte ptr [esi + 0x4a8] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x4a8u)));
/* 7a55f2: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a55f5: ja 0x7a5903 */
  if ((!cf && !zf)) goto L_7a5903;
L_7a55fb: /* 7a55fb: jmp dword ptr [eax*4 + 0x7a60d4] */
  switch (R32((uint32_t)(eax*4 + 0x7a60d4u))) {
    case 0x7a5617u: goto L_7a5617;
    case 0x7a5652u: goto L_7a5652;
    case 0x7a56a3u: goto L_7a56a3;
    case 0x7a5706u: goto L_7a5706;
    case 0x7a5769u: goto L_7a5769;
    case 0x7a5882u: goto L_7a5882;
    default: guest_badjump(0x7a55fb, R32((uint32_t)(eax*4 + 0x7a60d4u))); return;
  }
L_7a5602: /* 7a5602: mov eax, dword ptr [esi + 0x49c] */
  eax = R32((uint32_t)(esi + 0x49cu));
/* 7a5608: mov edx, ecx */
  edx = ecx;
/* 7a560a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7a560d: fadd dword ptr [eax + edx + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx + 0x1cu)));
/* 7a5611: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7a5612: jmp 0x7a5580 */
  goto L_7a5580;
L_7a5617: /* 7a5617: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 7a561d: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 7a5620: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a5623: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 7a5626: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a5629: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 7a562c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a562f: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 7a5632: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a5635: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a5638: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7a563b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a563e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a5641: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a5644: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a5647: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a564a: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7a564d: jmp 0x7a5903 */
  goto L_7a5903;
L_7a5652: /* 7a5652: lea edi, [ebx + 0x18] */
  edi = (uint32_t)(ebx + 0x18u);
/* 7a5655: mov ecx, edi */
  ecx = edi;
/* 7a5657: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7a565du); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7a565d: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 7a5663: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x7a5669u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 7a5669: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7a566c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7a566f: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 7a5672: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a5675: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 7a5678: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a567b: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 7a567e: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a5681: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 7a5683: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a5686: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a5689: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7a568c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a568f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a5692: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7a5695: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a5698: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a569b: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7a569e: jmp 0x7a5903 */
  goto L_7a5903;
L_7a56a3: /* 7a56a3: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a56a6: je 0x7a58fc */
  if (zf) goto L_7a58fc;
L_7a56ac: /* 7a56ac: mov eax, dword ptr [esi + 0x49c] */
  eax = R32((uint32_t)(esi + 0x49cu));
/* 7a56b2: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7a56b5: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7a56b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a56b9: lea ecx, [eax + edi + 4] */
  ecx = (uint32_t)(eax + edi + 0x4u);
/* 7a56bd: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x7a56c3u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 7a56c3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7a56c6: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 7a56c9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a56cc: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a56cf: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a56d2: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 7a56d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a56d8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a56db: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7a56de: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 7a56e0: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a56e3: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7a56e6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a56e9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a56ec: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7a56ef: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a56f2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a56f5: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 7a56f8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a56fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a56fe: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7a5701: jmp 0x7a58fc */
  goto L_7a58fc;
L_7a5706: /* 7a5706: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a5709: je 0x7a58fc */
  if (zf) goto L_7a58fc;
L_7a570f: /* 7a570f: mov edx, dword ptr [esi + 0x49c] */
  edx = R32((uint32_t)(esi + 0x49cu));
/* 7a5715: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7a5718: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7a571b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a571c: lea ecx, [edx + edi + 4] */
  ecx = (uint32_t)(edx + edi + 0x4u);
/* 7a5720: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x7a5726u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 7a5726: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7a5729: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 7a572c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a572f: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 7a5732: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a5735: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 7a5737: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7a573a: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a573d: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7a5740: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a5743: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7a5746: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a5749: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7a574c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a574f: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7a5752: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a5755: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7a5758: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a575b: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 7a575e: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 7a5761: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7a5764: jmp 0x7a58fc */
  goto L_7a58fc;
L_7a5769: /* 7a5769: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a576c: je 0x7a58fc */
  if (zf) goto L_7a58fc;
L_7a5772: /* 7a5772: mov ecx, dword ptr [esi + 0x49c] */
  ecx = R32((uint32_t)(esi + 0x49cu));
/* 7a5778: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7a577b: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7a577e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a577f: lea ecx, [ecx + edi + 4] */
  ecx = (uint32_t)(ecx + edi + 0x4u);
/* 7a5783: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x7a5789u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 7a5789: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7a578c: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 7a578f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a5792: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a5795: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a5798: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 7a579b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a579e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a57a1: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7a57a4: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 7a57a6: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7a57a9: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7a57ac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a57af: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7a57b2: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a57b5: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7a57b8: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7a57bb: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a57be: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7a57c1: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 7a57c7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7a57ca: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a57cd: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7a57d0: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 7a57da: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7a57e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a57e2: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 7a57e5: mov ecx, esp */
  ecx = esp;
/* 7a57e7: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7a57ee: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a57f1: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7a57f3: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a57fa: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a57fd: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7a5800: push 0xdf */
  { uint32_t v = 0xdfu; esp -= 4; W32(esp, v); }
/* 7a5805: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7a580c: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a580f: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7a5812: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a5813: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7a5816: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a5817: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7a581a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a581b: lea eax, [ebp - 0x12c] */
  eax = (uint32_t)(ebp + 0xfffffed4u);
/* 7a5821: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a5822: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7a5828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a5828: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a582a: jne 0x7a58fc */
  if (!zf) goto L_7a58fc;
L_7a5830: /* 7a5830: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 7a5836: fld dword ptr [ebp - 0x11c] */
  { double v = F32((uint32_t)(ebp + 0xfffffee4u)); FPUSH(v); }
/* 7a583c: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 7a5842: mov eax, dword ptr [ebp - 0x11c] */
  eax = R32((uint32_t)(ebp + 0xfffffee4u));
/* 7a5848: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7a584b: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 7a584e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7a5851: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 7a5854: fld dword ptr [ebp - 0x120] */
  { double v = F32((uint32_t)(ebp + 0xfffffee0u)); FPUSH(v); }
/* 7a585a: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 7a585d: fld dword ptr [ebp - 0x124] */
  { double v = F32((uint32_t)(ebp + 0xfffffedcu)); FPUSH(v); }
/* 7a5863: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 7a5865: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a5868: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a586b: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7a586e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a5871: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a5874: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a5877: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a587a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a587d: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7a5880: jmp 0x7a58fc */
  goto L_7a58fc;
L_7a5882: /* 7a5882: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a5885: je 0x7a58fc */
  if (zf) goto L_7a58fc;
L_7a5887: /* 7a5887: cmp edi, dword ptr [esi + 0x594] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x594u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a588d: jge 0x7a58fc */
  if ((sf == of)) goto L_7a58fc;
L_7a588f: /* 7a588f: mov ecx, dword ptr [esi + 0x590] */
  ecx = R32((uint32_t)(esi + 0x590u));
/* 7a5895: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 7a5898: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a589a: lea ecx, [ecx + edi*4] */
  ecx = (uint32_t)(ecx + edi*4);
/* 7a589d: je 0x7a58fc */
  if (zf) goto L_7a58fc;
L_7a589f: /* 7a589f: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7a58a5: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a58aa: fsub dword ptr [ebx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x8u)));
/* 7a58ad: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7a58b0: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 7a58b3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7a58b5: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 7a58b7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a58ba: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a58bd: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7a58c0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a58c3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a58c6: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a58c9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a58cc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a58cf: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7a58d2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a58d4: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7a58d7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a58da: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 7a58dd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a58e0: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7a58e3: test byte ptr [esi + 0x4b8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4b8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a58ea: je 0x7a58fc */
  if (zf) goto L_7a58fc;
L_7a58ec: /* 7a58ec: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 7a58f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7a58f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a58f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a58f7: call 0x6c71df */
  esp -= 4; W32(esp, 0x7a58fcu); SPILL(); f_6c71df(); if (g_unwind) return; RELOAD();
L_7a58fc: /* 7a58fc: mov dword ptr [ebp + 0x18], 1 */
  W32((uint32_t)(ebp + 0x18u), 0x1u);
L_7a5903: /* 7a5903: test byte ptr [esi + 0x514], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x514u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a590a: je 0x7a5913 */
  if (zf) goto L_7a5913;
L_7a590c: /* 7a590c: mov dword ptr [ebp + 0x18], 0 */
  W32((uint32_t)(ebp + 0x18u), 0x0u);
L_7a5913: /* 7a5913: mov eax, dword ptr [esi + 0x4f0] */
  eax = R32((uint32_t)(esi + 0x4f0u));
/* 7a5919: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7a591c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7a591d: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 7a5920: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a5923: mov eax, dword ptr [esi + 0x4d4] */
  eax = R32((uint32_t)(esi + 0x4d4u));
/* 7a5929: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 7a592c: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 7a592f: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 7a5935: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7a5938: imul eax, dword ptr [ebp + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x8u)));
  eax = (uint32_t)r;
  }
/* 7a593c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7a593f: mov eax, dword ptr [esi + 0x584] */
  eax = R32((uint32_t)(esi + 0x584u));
/* 7a5945: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 7a5948: mov ecx, ebx */
  ecx = ebx;
/* 7a594a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a594c: mov edx, edi */
  edx = edi;
/* 7a594e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7a5950: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7a5953: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7a5956: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a5959: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7a595c: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a595f: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7a5966: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7a596d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7a5974: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
/* 7a597b: fst dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0);
/* 7a5981: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a5984: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 7a598a: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7a598d: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7a5990: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7a5993: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 7a5999: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7a599c: fild dword ptr [ebp - 0x50] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7a599f: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 7a59a5: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
L_7a59ab: /* 7a59ab: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a59ae: cmp edx, dword ptr [esi + 0x4d4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4d4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a59b4: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 7a59b7: jge 0x7a5bfd */
  if ((sf == of)) goto L_7a5bfd;
L_7a59bd: /* 7a59bd: test byte ptr [esi + 0x514], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x514u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a59c4: je 0x7a5b50 */
  if (zf) goto L_7a5b50;
L_7a59ca: /* 7a59ca: fld dword ptr [esi + 0x50c] */
  { double v = F32((uint32_t)(esi + 0x50cu)); FPUSH(v); }
/* 7a59d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a59d1: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7a59d7: fimul dword ptr [ebp - 0x34] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffccu)));
/* 7a59da: fmul dword ptr [ebp - 0x70] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff90u)));
/* 7a59dd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7a59e0: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x7a59e6u); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 7a59e6: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a59e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a59ec: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a59ef: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7a59f2: xor edx, edx */
  edx = 0;
L_7a59f4: /* 7a59f4: cmp edx, dword ptr [esi + 0x4f8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4f8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a59fa: jge 0x7a5b74 */
  if ((sf == of)) goto L_7a5b74;
L_7a5a00: /* 7a5a00: mov eax, dword ptr [esi + 0x4f4] */
  eax = R32((uint32_t)(esi + 0x4f4u));
/* 7a5a06: mov ecx, edx */
  ecx = edx;
/* 7a5a08: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a5a0b: fld dword ptr [ecx + eax + 0xc] */
  { double v = F32((uint32_t)(ecx + eax + 0xcu)); FPUSH(v); }
/* 7a5a0f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a5a11: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 7a5a14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a5a16: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5a19: jne 0x7a5b4a */
  if (!zf) goto L_7a5b4a;
L_7a5a1f: /* 7a5a1f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5a21: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 7a5a24: mov eax, ecx */
  eax = ecx;
/* 7a5a26: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7a5a28: mov dword ptr [ebp - 0x88], edi */
  W32((uint32_t)(ebp + 0xffffff78u), edi);
/* 7a5a2e: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7a5a31: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a5a34: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 7a5a3a: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 7a5a3d: je 0x7a5a55 */
  if (zf) goto L_7a5a55;
L_7a5a3f: /* 7a5a3f: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 7a5a42: lea edx, [ecx - 0x10] */
  edx = (uint32_t)(ecx + 0xfffffff0u);
/* 7a5a45: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a5a47: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7a5a4a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7a5a4d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a5a50: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7a5a53: jmp 0x7a5a7f */
  goto L_7a5a7f;
L_7a5a55: /* 7a5a55: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7a5a5b: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 7a5a62: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7a5a65: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 7a5a6c: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7a5a6f: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 7a5a76: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7a5a79: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7a5a7c: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
L_7a5a7f: /* 7a5a7f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7a5a81: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7a5a84: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7a5a8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a5a8c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a5a8f: jnp 0x7a5aa0 */
  if (!pf) goto L_7a5aa0;
L_7a5a91: /* 7a5a91: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7a5a94: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7a5a96: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7a5a98: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7a5a9a: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 7a5a9c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5a9e: jmp 0x7a5aaa */
  goto L_7a5aaa;
L_7a5aa0: /* 7a5aa0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5aa2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5aa4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_7a5aaa: /* 7a5aaa: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 7a5aad: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 7a5ab3: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7a5ab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a5ab7: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 7a5abd: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7a5ac3: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7a5ac6: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 7a5acc: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7a5acf: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7a5ad5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a5ad7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7a5ad9: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a5adc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7a5ade: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 7a5ae4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7a5ae6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 7a5aec: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7a5aef: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7a5af2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a5af5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7a5af8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7a5afa: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a5afd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5aff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5b01: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 7a5b07: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7a5b0a: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7a5b10: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x7a5b16u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 7a5b16: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 7a5b1c: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7a5b1f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7a5b21: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7a5b24: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 7a5b27: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7a5b2a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7a5b2d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7a5b30: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7a5b33: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a5b36: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7a5b39: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7a5b3c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7a5b3f: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7a5b42: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 7a5b45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a5b48: jmp 0x7a5b74 */
  goto L_7a5b74;
L_7a5b4a: /* 7a5b4a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7a5b4b: jmp 0x7a59f4 */
  goto L_7a59f4;
L_7a5b50: /* 7a5b50: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 7a5b56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a5b57: lea ecx, [esi + 0x4bc] */
  ecx = (uint32_t)(esi + 0x4bcu);
/* 7a5b5d: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x7a5b63u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 7a5b63: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a5b65: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a5b68: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7a5b6b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7a5b6e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a5b71: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_7a5b74: /* 7a5b74: fild dword ptr [ebp - 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7a5b77: mov eax, edi */
  eax = edi;
/* 7a5b79: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7a5b7c: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a5b7f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7a5b81: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7a5b84: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7a5b86: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 7a5b8c: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7a5b8f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7a5b91: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 7a5b97: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7a5b9a: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 7a5b9c: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 7a5ba2: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7a5ba5: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 7a5bab: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7a5bae: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 7a5bb4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a5bb6: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 7a5bb8: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 7a5bbe: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 7a5bc1: fld dword ptr [ebp - 0xb4] */
  { double v = F32((uint32_t)(ebp + 0xffffff4cu)); FPUSH(v); }
/* 7a5bc7: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 7a5bca: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 7a5bd0: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7a5bd3: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7a5bd6: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 7a5bd9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a5bdb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7a5bdd: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7a5be0: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7a5be3: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7a5be6: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7a5be9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7a5bec: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7a5bef: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7a5bf2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7a5bf5: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 7a5bf8: jmp 0x7a59ab */
  goto L_7a59ab;
L_7a5bfd: /* 7a5bfd: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7a5c00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5c02: je 0x7a5c18 */
  if (zf) goto L_7a5c18;
L_7a5c04: /* 7a5c04: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a5c07: add edi, -0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a5c0a: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7a5c0c: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a5c0f: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 7a5c12: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a5c15: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
L_7a5c18: /* 7a5c18: mov eax, dword ptr [esi + 0x4d4] */
  eax = R32((uint32_t)(esi + 0x4d4u));
/* 7a5c1e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a5c21: mov ebx, dword ptr [esi + 0x4f0] */
  ebx = R32((uint32_t)(esi + 0x4f0u));
/* 7a5c27: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 7a5c2a: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 7a5c2d: mov ecx, dword ptr [esi + 0x578] */
  ecx = R32((uint32_t)(esi + 0x578u));
/* 7a5c33: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7a5c36: mov eax, dword ptr [esi + 0x584] */
  eax = R32((uint32_t)(esi + 0x584u));
/* 7a5c3c: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 7a5c3f: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7a5c42: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7a5c44: mov ecx, edi */
  ecx = edi;
/* 7a5c46: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a5c48: mov edx, ebx */
  edx = ebx;
/* 7a5c4a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7a5c4c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7a5c4f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7a5c52: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a5c55: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
/* 7a5c5c: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 7a5c5f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7a5c62: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7a5c65: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7a5c6c: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a5c73: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7a5c7a: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
L_7a5c81: /* 7a5c81: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a5c84: cmp edx, dword ptr [esi + 0x4f0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5c8a: jge 0x7a606a */
  if ((sf == of)) goto L_7a606a;
L_7a5c90: /* 7a5c90: test byte ptr [esi + 0x514], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x514u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5c97: je 0x7a5e2c */
  if (zf) goto L_7a5e2c;
L_7a5c9d: /* 7a5c9d: fld dword ptr [esi + 0x510] */
  { double v = F32((uint32_t)(esi + 0x510u)); FPUSH(v); }
/* 7a5ca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a5ca4: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7a5caa: fimul dword ptr [ebp + 8] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0x8u)));
/* 7a5cad: fmul dword ptr [ebp - 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff5cu)));
/* 7a5cb3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7a5cb6: call dword ptr [0xcfa62c] */
  esp -= 4; W32(esp, 0x7a5cbcu); SPILL(); f_4e3f58(); if (g_unwind) return; /* Core!?appFractional@@YAMM@Z */ RELOAD();
/* 7a5cbc: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a5cbf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a5cc2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a5cc5: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7a5cc8: xor edx, edx */
  edx = 0;
/* 7a5cca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7a5cd0: /* 7a5cd0: cmp edx, dword ptr [esi + 0x504] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x504u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5cd6: jge 0x7a5e50 */
  if ((sf == of)) goto L_7a5e50;
L_7a5cdc: /* 7a5cdc: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 7a5ce2: mov ecx, edx */
  ecx = edx;
/* 7a5ce4: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a5ce7: fld dword ptr [ecx + eax + 0xc] */
  { double v = F32((uint32_t)(ecx + eax + 0xcu)); FPUSH(v); }
/* 7a5ceb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a5ced: fcomp dword ptr [ebp - 0x50] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb0u)));
  FPOP();
/* 7a5cf0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a5cf2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5cf5: jne 0x7a5e26 */
  if (!zf) goto L_7a5e26;
L_7a5cfb: /* 7a5cfb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5cfd: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 7a5d00: mov eax, ecx */
  eax = ecx;
/* 7a5d02: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7a5d04: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 7a5d07: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7a5d0a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a5d0d: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 7a5d10: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 7a5d13: je 0x7a5d2b */
  if (zf) goto L_7a5d2b;
L_7a5d15: /* 7a5d15: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 7a5d18: lea edx, [ecx - 0x10] */
  edx = (uint32_t)(ecx + 0xfffffff0u);
/* 7a5d1b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7a5d1d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7a5d20: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7a5d23: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7a5d26: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a5d29: jmp 0x7a5d55 */
  goto L_7a5d55;
L_7a5d2b: /* 7a5d2b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7a5d31: mov dword ptr [ebp - 0x6c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x3f800000u);
/* 7a5d38: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 7a5d3b: mov dword ptr [ebp - 0x68], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x3f800000u);
/* 7a5d42: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7a5d45: mov dword ptr [ebp - 0x64], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x3f800000u);
/* 7a5d4c: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7a5d4f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7a5d52: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_7a5d55: /* 7a5d55: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7a5d57: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7a5d5a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7a5d60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a5d62: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a5d65: jnp 0x7a5d76 */
  if (!pf) goto L_7a5d76;
L_7a5d67: /* 7a5d67: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7a5d6a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7a5d6c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7a5d6e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7a5d70: fdivp st(2) */
  STI(2) = STI(2) / ST0;
  FPOP();
/* 7a5d72: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5d74: jmp 0x7a5d80 */
  goto L_7a5d80;
L_7a5d76: /* 7a5d76: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5d78: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5d7a: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_7a5d80: /* 7a5d80: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 7a5d83: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 7a5d89: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7a5d8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a5d8d: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 7a5d90: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7a5d96: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7a5d99: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 7a5d9c: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7a5d9f: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 7a5da5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a5da7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7a5da9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a5dac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7a5dae: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 7a5db4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7a5db6: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 7a5dbc: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7a5dbf: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7a5dc2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a5dc5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a5dc8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7a5dca: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a5dcd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5dcf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5dd1: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
/* 7a5dd7: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7a5dda: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7a5de0: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x7a5de6u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 7a5de6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a5de9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7a5dec: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7a5def: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7a5df2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7a5df5: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 7a5dfb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7a5dfd: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7a5e03: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 7a5e09: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7a5e0c: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7a5e12: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7a5e18: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7a5e1b: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7a5e1e: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 7a5e21: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7a5e24: jmp 0x7a5e50 */
  goto L_7a5e50;
L_7a5e26: /* 7a5e26: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7a5e27: jmp 0x7a5cd0 */
  goto L_7a5cd0;
L_7a5e2c: /* 7a5e2c: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 7a5e32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a5e33: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7a5e39: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x7a5e3fu); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 7a5e3f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a5e41: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a5e44: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7a5e47: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7a5e4a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7a5e4d: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
L_7a5e50: /* 7a5e50: mov eax, dword ptr [esi + 0x4d4] */
  eax = R32((uint32_t)(esi + 0x4d4u));
/* 7a5e56: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7a5e57: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7a5e5a: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a5e5d: mov ecx, ebx */
  ecx = ebx;
/* 7a5e5f: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 7a5e62: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7a5e64: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 7a5e67: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7a5e69: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 7a5e6c: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7a5e6f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7a5e71: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 7a5e74: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7a5e7a: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7a5e80: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 7a5e82: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7a5e84: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 7a5e87: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a5e8a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7a5e8c: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 7a5e8f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a5e92: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 7a5e94: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 7a5e9a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a5e9d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7a5e9f: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7a5ea1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a5ea3: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7a5ea6: fadd dword ptr [ebp - 0x70] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff90u)));
/* 7a5ea9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a5eac: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 7a5eb2: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 7a5eb8: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7a5ebe: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7a5ec1: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7a5ec4: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7a5ec7: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7a5ecd: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7a5ed0: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7a5ed3: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7a5ed6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a5ed8: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7a5edb: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7a5ede: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7a5ee1: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7a5ee4: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7a5ee7: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7a5eea: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7a5eed: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 7a5ef3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7a5ef5: fstp dword ptr [ebx + 0xc] */
  WF32((uint32_t)(ebx + 0xcu), ST0); FPOP();
/* 7a5ef8: mov al, byte ptr [esi + 0x540] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x540u))) & 0xffu);
/* 7a5efe: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5f00: je 0x7a6038 */
  if (zf) goto L_7a6038;
L_7a5f06: /* 7a5f06: fcom dword ptr [esi + 0x54c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x54cu)));
/* 7a5f0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a5f0e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5f11: jne 0x7a6038 */
  if (!zf) goto L_7a6038;
L_7a5f17: /* 7a5f17: fcomp dword ptr [esi + 0x550] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x550u)));
  FPOP();
/* 7a5f1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a5f1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a5f22: jp 0x7a603a */
  if (pf) goto L_7a603a;
L_7a5f28: /* 7a5f28: lea ecx, [esi + 0x544] */
  ecx = (uint32_t)(esi + 0x544u);
/* 7a5f2e: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x7a5f34u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 7a5f34: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a5f37: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7a5f3du); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7a5f3d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a5f40: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a5f43: fcomp dword ptr [ebp - 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd0u)));
  FPOP();
/* 7a5f46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a5f48: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5f4b: jne 0x7a603a */
  if (!zf) goto L_7a603a;
L_7a5f51: /* 7a5f51: mov ecx, dword ptr [esi + 0x554] */
  ecx = R32((uint32_t)(esi + 0x554u));
/* 7a5f57: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a5f59: jl 0x7a603a */
  if ((sf != of)) goto L_7a603a;
L_7a5f5f: /* 7a5f5f: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 7a5f65: mov edx, dword ptr [eax + 0x33c] */
  edx = R32((uint32_t)(eax + 0x33cu));
/* 7a5f6b: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 7a5f6e: test byte ptr [edi + 0x3f4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3f4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5f75: je 0x7a6033 */
  if (zf) goto L_7a6033;
L_7a5f7b: /* 7a5f7b: lea ecx, [esi + 0x558] */
  ecx = (uint32_t)(esi + 0x558u);
/* 7a5f81: mov dword ptr [edi + 0x3f0], eax */
  W32((uint32_t)(edi + 0x3f0u), eax);
/* 7a5f87: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x7a5f8du); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 7a5f8d: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 7a5f90: call 0x99c958 */
  esp -= 4; W32(esp, 0x7a5f95u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7a5f95: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7a5f98: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7a5f9f: nop  */
L_7a5fa0: /* 7a5fa0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a5fa3: cmp dword ptr [ebp - 0x34], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a5fa6: jge 0x7a6033 */
  if ((sf == of)) goto L_7a6033;
L_7a5fac: /* 7a5fac: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7a5faf: mov ecx, dword ptr [edi + 0x408] */
  ecx = R32((uint32_t)(edi + 0x408u));
/* 7a5fb5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7a5fb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a5fb8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 7a5fba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a5fbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a5fbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a5fbe: mov ecx, edi */
  ecx = edi;
/* 7a5fc0: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x7a5fc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a5fc6: test byte ptr [esi + 0x560], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x560u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a5fcd: je 0x7a6001 */
  if (zf) goto L_7a6001;
L_7a5fcf: /* 7a5fcf: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 7a5fd5: mov ecx, dword ptr [edi + 0x3fc] */
  ecx = R32((uint32_t)(edi + 0x3fcu));
/* 7a5fdb: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 7a5fe1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a5fe3: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 7a5fe9: mov edx, dword ptr [ecx + 0xac] */
  edx = R32((uint32_t)(ecx + 0xacu));
/* 7a5fef: mov dword ptr [eax + 0xac], edx */
  W32((uint32_t)(eax + 0xacu), edx);
/* 7a5ff5: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7a5ffb: mov dword ptr [eax + 0xb0], ecx */
  W32((uint32_t)(eax + 0xb0u), ecx);
L_7a6001: /* 7a6001: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 7a6007: mov ecx, dword ptr [edi + 0x40c] */
  ecx = R32((uint32_t)(edi + 0x40cu));
/* 7a600d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a600e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a6010: jge 0x7a6014 */
  if ((sf == of)) goto L_7a6014;
L_7a6012: /* 7a6012: mov ecx, eax */
  ecx = eax;
L_7a6014: /* 7a6014: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7a6015: idiv dword ptr [edi + 0x45c] */
  { int32_t d = (int32_t)R32((uint32_t)(edi + 0x45cu)); if (!d) d = (int32_t)guest_divzero(0x7a6015);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7a601b: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7a601e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a601f: mov dword ptr [edi + 0x40c], ecx */
  W32((uint32_t)(edi + 0x40cu), ecx);
/* 7a6025: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7a6028: mov dword ptr [edi + 0x408], edx */
  W32((uint32_t)(edi + 0x408u), edx);
/* 7a602e: jmp 0x7a5fa0 */
  goto L_7a5fa0;
L_7a6033: /* 7a6033: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7a6036: jmp 0x7a603a */
  goto L_7a603a;
L_7a6038: /* 7a6038: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7a603a: /* 7a603a: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a603d: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7a6040: fadd dword ptr [ebp - 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff74u)));
/* 7a6046: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 7a6049: fcomp dword ptr [ebp - 0x54] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffacu)));
  FPOP();
/* 7a604c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a604e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a6051: jne 0x7a6062 */
  if (!zf) goto L_7a6062;
L_7a6053: /* 7a6053: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7a6056: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a6059: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7a605c: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 7a605f: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
L_7a6062: /* 7a6062: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 7a6065: jmp 0x7a5c81 */
  goto L_7a5c81;
L_7a606a: /* 7a606a: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7a606d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a606f: je 0x7a6085 */
  if (zf) goto L_7a6085;
L_7a6071: /* 7a6071: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a6074: add ebx, -0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7a6077: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 7a6079: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a607c: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 7a607f: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a6082: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
L_7a6085: /* 7a6085: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a6088: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a6089: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a608a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a6091: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a6092: mov esp, ebp */
  esp = ebp;
/* 7a6094: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a6095: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7a6098(void) {
  LOAD_REGS();
L_7a6098: /* 7a6098: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7a609e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a60a3: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 7a60a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a60aa: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 7a60b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a60b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a60b5(); return;
}

void f_7a60b5(void) {
  LOAD_REGS();
L_7a60b5: /* 7a60b5: push 0xa0bb14 */
  { uint32_t v = 0xa0bb14u; esp -= 4; W32(esp, v); }
/* 7a60ba: push 0xacd738 */
  { uint32_t v = 0xacd738u; esp -= 4; W32(esp, v); }
/* 7a60bf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a60c5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a60c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a60c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a60ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a60cc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a60d1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a60d1: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* 7a60d4: pop ss */
  guest_unsupported(0x7a60d4); /* pop ss */
/* 7a60d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a60d6: jp 0x7a60d8 */
  if (pf) goto L_7a60d8;
L_7a60d8: /* 7a60d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a60d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a60da: jp 0x7a60dc */
  if (pf) goto L_7a60dc;
L_7a60dc: /* 7a60dc: mov dword ptr [0x82007a56], eax */
  W32((uint32_t)(0x82007a56u), eax);
/* 7a60e1: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 7a60e2: jp 0x7a60e4 */
  if (pf) goto L_7a60e4;
L_7a60e4: /* 7a60e4: imul edx, dword ptr [edi + 0x7a], 0x7a570600 */
  { int64_t r = (int64_t)(int32_t)(R32((uint32_t)(edi + 0x7au))) * (int64_t)(int32_t)(0x7a570600u);
  edx = (uint32_t)r;
  }
/* 7a60eb: add byte ptr [eax - 0x336f6f70], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcc909090u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(eax + 0xcc909090u), r);
  }
L_7a60f1: guest_badaddr(0x7a60f1); return;
}

void f_7a6400(void) {
  LOAD_REGS();
L_7a6400: /* 7a6400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a6401: mov ebp, esp */
  ebp = esp;
/* 7a6403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a6405: push 0x9ce6ae */
  { uint32_t v = 0x9ce6aeu; esp -= 4; W32(esp, v); }
/* 7a640a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a6410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a6418: sub esp, 0x290 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x290u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a641e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a641f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a6420: xor esi, esi */
  esi = 0;
/* 7a6422: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a6423: mov ebx, ecx */
  ebx = ecx;
/* 7a6425: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a6428: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7a642b: mov dword ptr [ebx + 0x574], esi */
  W32((uint32_t)(ebx + 0x574u), esi);
/* 7a6431: xor eax, eax */
  eax = 0;
L_7a6433: /* 7a6433: cmp eax, dword ptr [ebx + 0x4a0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4a0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a6439: jge 0x7a6459 */
  if ((sf == of)) goto L_7a6459;
L_7a643b: /* 7a643b: mov edx, dword ptr [ebx + 0x49c] */
  edx = R32((uint32_t)(ebx + 0x49cu));
/* 7a6441: mov ecx, eax */
  ecx = eax;
/* 7a6443: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a6446: fld dword ptr [edx + ecx + 0x1c] */
  { double v = F32((uint32_t)(edx + ecx + 0x1cu)); FPUSH(v); }
/* 7a644a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a644b: fadd dword ptr [ebx + 0x574] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x574u)));
/* 7a6451: fstp dword ptr [ebx + 0x574] */
  WF32((uint32_t)(ebx + 0x574u), ST0); FPOP();
/* 7a6457: jmp 0x7a6433 */
  goto L_7a6433;
L_7a6459: /* 7a6459: mov eax, dword ptr [ebx + 0x594] */
  eax = R32((uint32_t)(ebx + 0x594u));
/* 7a645f: cmp eax, dword ptr [ebx + 0x4a0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4a0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a6465: je 0x7a6471 */
  if (zf) goto L_7a6471;
L_7a6467: /* 7a6467: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7a6469: mov ecx, ebx */
  ecx = ebx;
/* 7a646b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7a6471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a6471: /* 7a6471: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a6477: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a6479: je 0x7a6991 */
  if (zf) goto L_7a6991;
L_7a647f: /* 7a647f: mov eax, dword ptr [ebx + 0x554] */
  eax = R32((uint32_t)(ebx + 0x554u));
/* 7a6485: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a6487: jl 0x7a649c */
  if ((sf != of)) goto L_7a649c;
L_7a6489: /* 7a6489: mov ecx, dword ptr [ecx + 0x340] */
  ecx = R32((uint32_t)(ecx + 0x340u));
/* 7a648f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7a6490: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a6492: jl 0x7a6496 */
  if ((sf != of)) goto L_7a6496;
L_7a6494: /* 7a6494: mov eax, ecx */
  eax = ecx;
L_7a6496: /* 7a6496: mov dword ptr [ebx + 0x554], eax */
  W32((uint32_t)(ebx + 0x554u), eax);
L_7a649c: /* 7a649c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a649f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a64a0: mov ecx, ebx */
  ecx = ebx;
/* 7a64a2: call 0x6ccb12 */
  esp -= 4; W32(esp, 0x7a64a7u); SPILL(); f_6ccb12(); if (g_unwind) return; RELOAD();
/* 7a64a7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7a64aa: fadd dword ptr [ebx + 0x59c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x59cu)));
/* 7a64b0: lea ecx, [ebx + 0x414] */
  ecx = (uint32_t)(ebx + 0x414u);
/* 7a64b6: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7a64b9: fstp dword ptr [ebx + 0x59c] */
  WF32((uint32_t)(ebx + 0x59cu), ST0); FPOP();
/* 7a64bf: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x7a64c5u); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
/* 7a64c5: jmp 0x7a64d0 */
  goto L_7a64d0;
L_7a64d0: /* 7a64d0: cmp esi, dword ptr [ebx + 0x40c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a64d6: jge 0x7a65db */
  if ((sf == of)) goto L_7a65db;
L_7a64dc: /* 7a64dc: mov eax, dword ptr [ebx + 0x3fc] */
  eax = R32((uint32_t)(ebx + 0x3fcu));
/* 7a64e2: mov edx, esi */
  edx = esi;
/* 7a64e4: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 7a64ea: test byte ptr [eax + edx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a64f2: je 0x7a65d5 */
  if (zf) goto L_7a65d5;
L_7a64f8: /* 7a64f8: mov al, byte ptr [ebx + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xf4u))) & 0xffu);
/* 7a64fe: mov edx, dword ptr [ebx + 0x578] */
  edx = R32((uint32_t)(ebx + 0x578u));
/* 7a6504: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a6506: mov eax, dword ptr [ebx + 0x4f0] */
  eax = R32((uint32_t)(ebx + 0x4f0u));
/* 7a650c: lea edi, [ebx + 0x414] */
  edi = (uint32_t)(ebx + 0x414u);
/* 7a6512: jne 0x7a65a4 */
  if (!zf) goto L_7a65a4;
L_7a6518: /* 7a6518: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a651e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 7a6521: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7a6527: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a652d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a6530: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a6532: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7a6535: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7a6538: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7a653b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7a653d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7a6540: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7a6542: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6543: mov ecx, edi */
  ecx = edi;
/* 7a6545: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7a6548: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7a654b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a654e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7a6554u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 7a6554: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a655a: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7a6560: mov ecx, dword ptr [ebx + 0x578] */
  ecx = R32((uint32_t)(ebx + 0x578u));
/* 7a6566: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 7a6569: imul edx, dword ptr [ebx + 0x4f0] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0x4f0u)));
  edx = (uint32_t)r;
  }
/* 7a6570: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a6575: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7a6578: lea ecx, [edx + ecx - 0x10] */
  ecx = (uint32_t)(edx + ecx + 0xfffffff0u);
/* 7a657c: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7a657f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a6580: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 7a6583: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7a6586: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7a6589: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7a658b: mov ecx, edi */
  ecx = edi;
/* 7a658d: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7a658f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7a6592: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7a6595: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7a6598: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7a659eu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 7a659e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a659f: jmp 0x7a64d0 */
  goto L_7a64d0;
L_7a65a4: /* 7a65a4: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 7a65a7: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a65aa: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a65ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a65ad: mov ecx, edi */
  ecx = edi;
/* 7a65af: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7a65b5u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 7a65b5: mov edx, dword ptr [ebx + 0x578] */
  edx = R32((uint32_t)(ebx + 0x578u));
/* 7a65bb: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 7a65be: imul ecx, dword ptr [ebx + 0x4f0] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0x4f0u)));
  ecx = (uint32_t)r;
  }
/* 7a65c5: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a65c8: lea eax, [ecx + edx - 0x10] */
  eax = (uint32_t)(ecx + edx + 0xfffffff0u);
/* 7a65cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a65cd: mov ecx, edi */
  ecx = edi;
/* 7a65cf: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7a65d5u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_7a65d5: /* 7a65d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a65d6: jmp 0x7a64d0 */
  goto L_7a64d0;
L_7a65db: /* 7a65db: lea ecx, [ebx + 0x4e8] */
  ecx = (uint32_t)(ebx + 0x4e8u);
/* 7a65e1: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a65e7u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a65e7: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a65ea: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a65ed: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a65f0: lea ecx, [ebx + 0x4e0] */
  ecx = (uint32_t)(ebx + 0x4e0u);
/* 7a65f6: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a65fcu); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a65fc: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a65ff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a6602: lea ecx, [ebx + 0x4d8] */
  ecx = (uint32_t)(ebx + 0x4d8u);
/* 7a6608: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 7a660b: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a6611u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a6611: fcom dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
/* 7a6614: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7a6617: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6619: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a661c: je 0x7a6623 */
  if (zf) goto L_7a6623;
L_7a661e: /* 7a661e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a6620: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_7a6623: /* 7a6623: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7a6626: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6628: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a662b: je 0x7a6632 */
  if (zf) goto L_7a6632;
L_7a662d: /* 7a662d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a662f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7a6632: /* 7a6632: lea ecx, [ebx + 0x4cc] */
  ecx = (uint32_t)(ebx + 0x4ccu);
/* 7a6638: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a663b: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a6641u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a6641: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a6644: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a6647: lea ecx, [ebx + 0x4c4] */
  ecx = (uint32_t)(ebx + 0x4c4u);
/* 7a664d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a6650: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a6656u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a6656: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a6659: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a665c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a665f: lea ecx, [ebx + 0x4bc] */
  ecx = (uint32_t)(ebx + 0x4bcu);
/* 7a6665: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a666bu); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a666b: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7a666e: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7a6671: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6673: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a6676: je 0x7a667d */
  if (zf) goto L_7a667d;
L_7a6678: /* 7a6678: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a667a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7a667d: /* 7a667d: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 7a6680: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6682: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a6685: je 0x7a668c */
  if (zf) goto L_7a668c;
L_7a6687: /* 7a6687: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a6689: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_7a668c: /* 7a668c: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 7a668f: lea ecx, [ebx + 0x29c] */
  ecx = (uint32_t)(ebx + 0x29cu);
/* 7a6695: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a6698: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x7a669eu); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 7a669e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a66a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a66a2: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a66a5: lea edi, [ebx + 0x414] */
  edi = (uint32_t)(ebx + 0x414u);
/* 7a66ab: fmul dword ptr [ebx + 0x46c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x46cu)));
/* 7a66b1: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 7a66b7: mov ecx, edi */
  ecx = edi;
/* 7a66b9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7a66bc: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7a66bf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7a66c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a66c3: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x7a66c9u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 7a66c9: mov esi, eax */
  esi = eax;
/* 7a66cb: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a66d2: mov ecx, 7 */
  ecx = 0x7u;
/* 7a66d7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a66d9: jne 0x7a6948 */
  if (!zf) goto L_7a6948;
L_7a66df: /* 7a66df: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a66e5: lea ebx, [eax + 0x170] */
  ebx = (uint32_t)(eax + 0x170u);
/* 7a66eb: mov ecx, ebx */
  ecx = ebx;
/* 7a66ed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a66ef: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7a66f2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7a66f5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a66f8: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7a66fb: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a66fe: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7a6701: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a6704: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7a6707: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a670a: mov dword ptr [ebp - 0x7c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x3f800000u);
/* 7a6711: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7a6718: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7a671f: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7a6726: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7a672d: mov dword ptr [ebp - 0x68], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x3f800000u);
/* 7a6734: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7a673b: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 7a6742: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 7a6749: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 7a6750: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 7a6757: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7a675e: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 7a6761: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7a6764: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 7a676b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a6770: lea esi, [ebp - 0x7c] */
  esi = (uint32_t)(ebp + 0xffffff84u);
/* 7a6773: lea edi, [ebp - 0x29c] */
  edi = (uint32_t)(ebp + 0xfffffd64u);
/* 7a6779: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a677b: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a6780: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a6782: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a6787: lea esi, [ebp - 0x7c] */
  esi = (uint32_t)(ebp + 0xffffff84u);
/* 7a678a: lea edi, [ebp - 0x25c] */
  edi = (uint32_t)(ebp + 0xfffffda4u);
/* 7a6790: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a6792: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a6795: mov ecx, esp */
  ecx = esp;
/* 7a6797: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a6799: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a679c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a679f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a67a2: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7a67a5: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* 7a67ab: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7a67b0u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7a67b0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a67b5: mov esi, eax */
  esi = eax;
/* 7a67b7: lea edi, [ebp - 0x19c] */
  edi = (uint32_t)(ebp + 0xfffffe64u);
/* 7a67bd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a67bf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a67c4: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 7a67c7: mov esi, eax */
  esi = eax;
/* 7a67c9: fchs  */
  ST0 = -ST0;
/* 7a67cb: lea edi, [ebp - 0x15c] */
  edi = (uint32_t)(ebp + 0xfffffea4u);
/* 7a67d1: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 7a67d4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a67d6: fchs  */
  ST0 = -ST0;
/* 7a67d8: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 7a67da: fchs  */
  ST0 = -ST0;
/* 7a67dc: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7a67e2: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7a67e8: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7a67ee: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 7a67f8: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7a6802: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7a680c: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7a6816: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7a6820: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
/* 7a682a: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 7a6834: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 7a683e: mov dword ptr [ebp - 0x9c], 0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x0u);
/* 7a6848: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 7a6852: mov dword ptr [ebp - 0x94], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x3f800000u);
/* 7a685c: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 7a6866: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 7a686d: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a6870: mov edi, esp */
  edi = esp;
/* 7a6872: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a6877: lea esi, [ebp - 0x15c] */
  esi = (uint32_t)(ebp + 0xfffffea4u);
/* 7a687d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a687f: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 7a6885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6886: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7a688c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7a6890: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7a6896u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7a6896: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a6899: mov edi, esp */
  edi = esp;
/* 7a689b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a68a0: lea esi, [ebp - 0x25c] */
  esi = (uint32_t)(ebp + 0xfffffda4u);
/* 7a68a6: lea edx, [ebp - 0x1dc] */
  edx = (uint32_t)(ebp + 0xfffffe24u);
/* 7a68ac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a68ae: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 7a68b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a68b1: mov ecx, eax */
  ecx = eax;
/* 7a68b3: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7a68b6: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7a68bcu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7a68bc: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a68bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a68c0: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 7a68c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a68c7: mov ecx, edi */
  ecx = edi;
/* 7a68c9: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7a68cd: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x7a68d3u); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 7a68d3: mov esi, eax */
  esi = eax;
/* 7a68d5: mov ecx, 7 */
  ecx = 0x7u;
/* 7a68da: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a68dc: lea ecx, [ebp - 0x1dc] */
  ecx = (uint32_t)(ebp + 0xfffffe24u);
/* 7a68e2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7a68e5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a68ebu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a68eb: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 7a68f1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7a68f5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a68fbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a68fb: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7a6901: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7a6905: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a690bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a690b: lea ecx, [ebp - 0x19c] */
  ecx = (uint32_t)(ebp + 0xfffffe64u);
/* 7a6911: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a6915: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a691bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a691b: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* 7a6921: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7a6925: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a692bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a692b: lea ecx, [ebp - 0x29c] */
  ecx = (uint32_t)(ebp + 0xfffffd64u);
/* 7a6931: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7a6935: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a693bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a693b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7a693e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a6942: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a6948u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_7a6948: /* 7a6948: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a694b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a694e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a6955: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a6956: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a6957: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a6958: mov esp, ebp */
  esp = ebp;
/* 7a695a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a695b: ret 4 */
  esp += 8; SPILL(); return;
L_7a6991: /* 7a6991: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a6994: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a6995: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a6996: xor eax, eax */
  eax = 0;
/* 7a6998: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a699f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a69a0: mov esp, ebp */
  esp = ebp;
/* 7a69a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a69a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a64c7(void) {
  LOAD_REGS();
L_7a64c7: /* 7a64c7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7a64ce: mov edi, edi */
  edi = edi;
L_7a64d0: /* 7a64d0: cmp esi, dword ptr [ebx + 0x40c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a64d6: jge 0x7a65db */
  if ((sf == of)) goto L_7a65db;
L_7a64dc: /* 7a64dc: mov eax, dword ptr [ebx + 0x3fc] */
  eax = R32((uint32_t)(ebx + 0x3fcu));
/* 7a64e2: mov edx, esi */
  edx = esi;
/* 7a64e4: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 7a64ea: test byte ptr [eax + edx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a64f2: je 0x7a65d5 */
  if (zf) goto L_7a65d5;
L_7a64f8: /* 7a64f8: mov al, byte ptr [ebx + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xf4u))) & 0xffu);
/* 7a64fe: mov edx, dword ptr [ebx + 0x578] */
  edx = R32((uint32_t)(ebx + 0x578u));
/* 7a6504: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a6506: mov eax, dword ptr [ebx + 0x4f0] */
  eax = R32((uint32_t)(ebx + 0x4f0u));
/* 7a650c: lea edi, [ebx + 0x414] */
  edi = (uint32_t)(ebx + 0x414u);
/* 7a6512: jne 0x7a65a4 */
  if (!zf) goto L_7a65a4;
L_7a6518: /* 7a6518: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a651e: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 7a6521: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7a6527: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a652d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a6530: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a6532: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7a6535: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7a6538: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7a653b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7a653d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7a6540: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7a6542: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6543: mov ecx, edi */
  ecx = edi;
/* 7a6545: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7a6548: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7a654b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a654e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7a6554u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 7a6554: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a655a: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7a6560: mov ecx, dword ptr [ebx + 0x578] */
  ecx = R32((uint32_t)(ebx + 0x578u));
/* 7a6566: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 7a6569: imul edx, dword ptr [ebx + 0x4f0] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0x4f0u)));
  edx = (uint32_t)r;
  }
/* 7a6570: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a6575: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 7a6578: lea ecx, [edx + ecx - 0x10] */
  ecx = (uint32_t)(edx + ecx + 0xfffffff0u);
/* 7a657c: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7a657f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a6580: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 7a6583: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7a6586: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7a6589: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7a658b: mov ecx, edi */
  ecx = edi;
/* 7a658d: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7a658f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7a6592: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7a6595: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7a6598: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7a659eu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 7a659e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a659f: jmp 0x7a64d0 */
  goto L_7a64d0;
L_7a65a4: /* 7a65a4: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 7a65a7: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a65aa: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a65ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a65ad: mov ecx, edi */
  ecx = edi;
/* 7a65af: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7a65b5u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 7a65b5: mov edx, dword ptr [ebx + 0x578] */
  edx = R32((uint32_t)(ebx + 0x578u));
/* 7a65bb: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 7a65be: imul ecx, dword ptr [ebx + 0x4f0] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0x4f0u)));
  ecx = (uint32_t)r;
  }
/* 7a65c5: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7a65c8: lea eax, [ecx + edx - 0x10] */
  eax = (uint32_t)(ecx + edx + 0xfffffff0u);
/* 7a65cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a65cd: mov ecx, edi */
  ecx = edi;
/* 7a65cf: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x7a65d5u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_7a65d5: /* 7a65d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a65d6: jmp 0x7a64d0 */
  goto L_7a64d0;
L_7a65db: /* 7a65db: lea ecx, [ebx + 0x4e8] */
  ecx = (uint32_t)(ebx + 0x4e8u);
/* 7a65e1: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a65e7u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a65e7: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a65ea: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a65ed: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a65f0: lea ecx, [ebx + 0x4e0] */
  ecx = (uint32_t)(ebx + 0x4e0u);
/* 7a65f6: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a65fcu); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a65fc: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a65ff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a6602: lea ecx, [ebx + 0x4d8] */
  ecx = (uint32_t)(ebx + 0x4d8u);
/* 7a6608: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 7a660b: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a6611u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a6611: fcom dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
/* 7a6614: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7a6617: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6619: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a661c: je 0x7a6623 */
  if (zf) goto L_7a6623;
L_7a661e: /* 7a661e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a6620: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_7a6623: /* 7a6623: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7a6626: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6628: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a662b: je 0x7a6632 */
  if (zf) goto L_7a6632;
L_7a662d: /* 7a662d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a662f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7a6632: /* 7a6632: lea ecx, [ebx + 0x4cc] */
  ecx = (uint32_t)(ebx + 0x4ccu);
/* 7a6638: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a663b: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a6641u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a6641: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a6644: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a6647: lea ecx, [ebx + 0x4c4] */
  ecx = (uint32_t)(ebx + 0x4c4u);
/* 7a664d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a6650: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a6656u); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a6656: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a6659: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a665c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a665f: lea ecx, [ebx + 0x4bc] */
  ecx = (uint32_t)(ebx + 0x4bcu);
/* 7a6665: call dword ptr [0xcfa640] */
  esp -= 4; W32(esp, 0x7a666bu); SPILL(); f_4e4133(); if (g_unwind) return; /* Core!?Size@FRange@@QBEMXZ */ RELOAD();
/* 7a666b: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7a666e: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7a6671: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6673: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a6676: je 0x7a667d */
  if (zf) goto L_7a667d;
L_7a6678: /* 7a6678: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a667a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7a667d: /* 7a667d: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 7a6680: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6682: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a6685: je 0x7a668c */
  if (zf) goto L_7a668c;
L_7a6687: /* 7a6687: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a6689: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_7a668c: /* 7a668c: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 7a668f: lea ecx, [ebx + 0x29c] */
  ecx = (uint32_t)(ebx + 0x29cu);
/* 7a6695: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a6698: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x7a669eu); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 7a669e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a66a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a66a2: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a66a5: lea edi, [ebx + 0x414] */
  edi = (uint32_t)(ebx + 0x414u);
/* 7a66ab: fmul dword ptr [ebx + 0x46c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x46cu)));
/* 7a66b1: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 7a66b7: mov ecx, edi */
  ecx = edi;
/* 7a66b9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7a66bc: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7a66bf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7a66c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a66c3: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x7a66c9u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 7a66c9: mov esi, eax */
  esi = eax;
/* 7a66cb: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a66d2: mov ecx, 7 */
  ecx = 0x7u;
/* 7a66d7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a66d9: jne 0x7a6948 */
  if (!zf) goto L_7a6948;
L_7a66df: /* 7a66df: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a66e5: lea ebx, [eax + 0x170] */
  ebx = (uint32_t)(eax + 0x170u);
/* 7a66eb: mov ecx, ebx */
  ecx = ebx;
/* 7a66ed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a66ef: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7a66f2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7a66f5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a66f8: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7a66fb: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a66fe: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7a6701: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a6704: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7a6707: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7a670a: mov dword ptr [ebp - 0x7c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x3f800000u);
/* 7a6711: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7a6718: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7a671f: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7a6726: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7a672d: mov dword ptr [ebp - 0x68], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x3f800000u);
/* 7a6734: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7a673b: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 7a6742: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 7a6749: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 7a6750: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 7a6757: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7a675e: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 7a6761: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7a6764: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 7a676b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a6770: lea esi, [ebp - 0x7c] */
  esi = (uint32_t)(ebp + 0xffffff84u);
/* 7a6773: lea edi, [ebp - 0x29c] */
  edi = (uint32_t)(ebp + 0xfffffd64u);
/* 7a6779: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a677b: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a6780: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a6782: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a6787: lea esi, [ebp - 0x7c] */
  esi = (uint32_t)(ebp + 0xffffff84u);
/* 7a678a: lea edi, [ebp - 0x25c] */
  edi = (uint32_t)(ebp + 0xfffffda4u);
/* 7a6790: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a6792: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a6795: mov ecx, esp */
  ecx = esp;
/* 7a6797: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a6799: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a679c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a679f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a67a2: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7a67a5: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* 7a67ab: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7a67b0u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7a67b0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a67b5: mov esi, eax */
  esi = eax;
/* 7a67b7: lea edi, [ebp - 0x19c] */
  edi = (uint32_t)(ebp + 0xfffffe64u);
/* 7a67bd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a67bf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a67c4: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 7a67c7: mov esi, eax */
  esi = eax;
/* 7a67c9: fchs  */
  ST0 = -ST0;
/* 7a67cb: lea edi, [ebp - 0x15c] */
  edi = (uint32_t)(ebp + 0xfffffea4u);
/* 7a67d1: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 7a67d4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a67d6: fchs  */
  ST0 = -ST0;
/* 7a67d8: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 7a67da: fchs  */
  ST0 = -ST0;
/* 7a67dc: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7a67e2: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7a67e8: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7a67ee: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 7a67f8: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7a6802: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7a680c: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7a6816: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7a6820: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
/* 7a682a: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 7a6834: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 7a683e: mov dword ptr [ebp - 0x9c], 0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x0u);
/* 7a6848: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 7a6852: mov dword ptr [ebp - 0x94], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x3f800000u);
/* 7a685c: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 7a6866: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 7a686d: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a6870: mov edi, esp */
  edi = esp;
/* 7a6872: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a6877: lea esi, [ebp - 0x15c] */
  esi = (uint32_t)(ebp + 0xfffffea4u);
/* 7a687d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a687f: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 7a6885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6886: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7a688c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7a6890: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7a6896u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7a6896: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a6899: mov edi, esp */
  edi = esp;
/* 7a689b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a68a0: lea esi, [ebp - 0x25c] */
  esi = (uint32_t)(ebp + 0xfffffda4u);
/* 7a68a6: lea edx, [ebp - 0x1dc] */
  edx = (uint32_t)(ebp + 0xfffffe24u);
/* 7a68ac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a68ae: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 7a68b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a68b1: mov ecx, eax */
  ecx = eax;
/* 7a68b3: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7a68b6: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7a68bcu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7a68bc: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a68bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a68c0: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 7a68c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a68c7: mov ecx, edi */
  ecx = edi;
/* 7a68c9: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7a68cd: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x7a68d3u); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 7a68d3: mov esi, eax */
  esi = eax;
/* 7a68d5: mov ecx, 7 */
  ecx = 0x7u;
/* 7a68da: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a68dc: lea ecx, [ebp - 0x1dc] */
  ecx = (uint32_t)(ebp + 0xfffffe24u);
/* 7a68e2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7a68e5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a68ebu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a68eb: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 7a68f1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7a68f5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a68fbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a68fb: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 7a6901: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7a6905: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a690bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a690b: lea ecx, [ebp - 0x19c] */
  ecx = (uint32_t)(ebp + 0xfffffe64u);
/* 7a6911: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7a6915: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a691bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a691b: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* 7a6921: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7a6925: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a692bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a692b: lea ecx, [ebp - 0x29c] */
  ecx = (uint32_t)(ebp + 0xfffffd64u);
/* 7a6931: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7a6935: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a693bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a693b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7a693e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a6942: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a6948u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_7a6948: /* 7a6948: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a694b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a694e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a6955: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a6956: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a6957: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a6958: mov esp, ebp */
  esp = ebp;
/* 7a695a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a695b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a695e(void) {
  LOAD_REGS();
L_7a695e: /* 7a695e: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 7a6964: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a6969: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7a696c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a696d: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7a6970: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a6975u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a6975(); return;
}

void f_7a6975(void) {
  LOAD_REGS();
L_7a6975: /* 7a6975: push 0xa0bb58 */
  { uint32_t v = 0xa0bb58u; esp -= 4; W32(esp, v); }
/* 7a697a: push 0xacd740 */
  { uint32_t v = 0xacd740u; esp -= 4; W32(esp, v); }
/* 7a697f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a6985u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a6985: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a6988: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a698a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a698c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a6991u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a6991: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a6994: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a6995: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a6996: xor eax, eax */
  eax = 0;
/* 7a6998: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a699f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a69a0: mov esp, ebp */
  esp = ebp;
/* 7a69a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a69a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a6b20(void) {
  LOAD_REGS();
L_7a6b20: /* 7a6b20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a6b22: push 0x9ce6d9 */
  { uint32_t v = 0x9ce6d9u; esp -= 4; W32(esp, v); }
/* 7a6b27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a6b2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6b2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a6b35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6b36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a6b37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a6b38: mov esi, ecx */
  esi = ecx;
/* 7a6b3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a6b3b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7a6b3f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7a6b42: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a6b44: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7a6b4a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7a6b52: jge 0x7a6b68 */
  if ((sf == of)) goto L_7a6b68;
L_7a6b54: /* 7a6b54: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7a6b59: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7a6b5e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7a6b63: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a6b65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a6b65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a6b68: /* 7a6b68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a6b6b: jle 0x7a6b81 */
  if ((zf || sf != of)) goto L_7a6b81;
L_7a6b6d: /* 7a6b6d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7a6b72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7a6b77: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7a6b7c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a6b7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a6b7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a6b81: /* 7a6b81: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7a6b83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a6b84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a6b86: mov ecx, esi */
  ecx = esi;
/* 7a6b88: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7a6b8eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7a6b8e: mov ecx, esi */
  ecx = esi;
/* 7a6b90: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7a6b98: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7a6b9eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7a6b9e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7a6ba2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a6ba3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a6ba4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a6ba5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a6bac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a6baf: ret  */
  esp += 4; SPILL(); return;
}

void f_7a6be0(void) {
  LOAD_REGS();
L_7a6be0: /* 7a6be0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a6be3: jmp 0x6ca939 */
  SPILL(); f_6ca939(); return;
}

void f_7a6c00(void) {
  LOAD_REGS();
L_7a6c00: /* 7a6c00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a6c01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a6c02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a6c03: mov esi, ecx */
  esi = ecx;
/* 7a6c05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a6c06: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7a6c09: mov dword ptr [esi], 0xa0bba0 */
  W32((uint32_t)(esi), 0xa0bba0u);
/* 7a6c0f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7a6c15u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7a6c15: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 7a6c1b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 7a6c1e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7a6c21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a6c23: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7a6c28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a6c29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a6c2a: call 0x99c910 */
  esp -= 4; W32(esp, 0x7a6c2fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7a6c2f: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 7a6c34: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 7a6c37: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 7a6c3a: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 7a6c3d: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 7a6c43: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 7a6c46: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7a6c49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a6c4a: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7a6c4d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 7a6c50: mov eax, esi */
  eax = esi;
/* 7a6c52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a6c53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a6c54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a6c55: ret  */
  esp += 4; SPILL(); return;
}

void f_7a6c80(void) {
  LOAD_REGS();
L_7a6c80: /* 7a6c80: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7a6c83: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 7a6c86: ret  */
  esp += 4; SPILL(); return;
}

void f_7a6ca0(void) {
  LOAD_REGS();
L_7a6ca0: /* 7a6ca0: mov eax, 1 */
  eax = 0x1u;
/* 7a6ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_7a6cc0(void) {
  LOAD_REGS();
L_7a6cc0: /* 7a6cc0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7a6cc3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7a6cc6: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a6cc9: ret  */
  esp += 4; SPILL(); return;
}

void f_7a6ce0(void) {
  LOAD_REGS();
L_7a6ce0: /* 7a6ce0: mov eax, 0x18 */
  eax = 0x18u;
/* 7a6ce5: ret  */
  esp += 4; SPILL(); return;
}

void f_7a6d00(void) {
  LOAD_REGS();
L_7a6d00: /* 7a6d00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a6d04: mov edx, 4 */
  edx = 0x4u;
/* 7a6d09: mov ecx, 2 */
  ecx = 0x2u;
/* 7a6d0e: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 7a6d14: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 7a6d1b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7a6d1e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7a6d21: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 7a6d24: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 7a6d27: mov eax, 3 */
  eax = 0x3u;
/* 7a6d2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a6d40(void) {
  LOAD_REGS();
L_7a6d40: /* 7a6d40: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7a6d43: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7a6d46: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7a6d4a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7a6d4d: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a6d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6d51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6d52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a6d53: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7a6d58u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7a6d58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a6d5b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a6d70(void) {
  LOAD_REGS();
L_7a6d70: /* 7a6d70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7a6d74: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7a6d77: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7a6d7a: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 7a6d7d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a6d81: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7a6d83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7a6da0(void) {
  LOAD_REGS();
L_7a6da0: /* 7a6da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a6da1: mov ebp, esp */
  ebp = esp;
/* 7a6da3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a6da5: push 0x9ce734 */
  { uint32_t v = 0x9ce734u; esp -= 4; W32(esp, v); }
/* 7a6daa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a6db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6db1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a6db8: sub esp, 0x200 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a6dbe: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7a6dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a6dc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a6dc3: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7a6dc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a6dc7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7a6dca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a6dcd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a6dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6dcf: mov ebx, ecx */
  ebx = ecx;
/* 7a6dd1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a6dd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a6dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6dd6: mov ecx, ebx */
  ecx = ebx;
/* 7a6dd8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a6ddf: call 0x6c20b8 */
  esp -= 4; W32(esp, 0x7a6de4u); SPILL(); f_6c20b8(); if (g_unwind) return; RELOAD();
/* 7a6de4: mov eax, dword ptr [ebx + 0x318] */
  eax = R32((uint32_t)(ebx + 0x318u));
/* 7a6dea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a6dec: jne 0x7a6e03 */
  if (!zf) goto L_7a6e03;
L_7a6dee: /* 7a6dee: xor eax, eax */
  eax = 0;
/* 7a6df0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a6df3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a6dfa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a6dfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a6dfc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a6dfd: mov esp, ebp */
  esp = ebp;
/* 7a6dff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a6e00: ret 0x10 */
  esp += 20; SPILL(); return;
L_7a6e03: /* 7a6e03: add edi, 0x194 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a6e09: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7a6e0b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7a6e0e: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 7a6e11: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7a6e14: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a6e1b: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 7a6e1e: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7a6e21: jne 0x7a6e84 */
  if (!zf) goto L_7a6e84;
L_7a6e23: /* 7a6e23: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a6e29: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7a6e2f: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a6e35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a6e36: lea eax, [ebp - 0x17c] */
  eax = (uint32_t)(ebp + 0xfffffe84u);
/* 7a6e3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6e3d: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a6e40: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7a6e46u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7a6e46: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a6e4c: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a6e52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6e53: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 7a6e59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a6e5a: mov ecx, eax */
  ecx = eax;
/* 7a6e5c: call dword ptr [0xcfa2cc] */
  esp -= 4; W32(esp, 0x7a6e62u); SPILL(); f_4e398b(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 7a6e62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6e63: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 7a6e69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6e6a: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7a6e6d: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x7a6e73u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7a6e73: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a6e75: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 7a6e78: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a6e7b: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7a6e7e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a6e81: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
L_7a6e84: /* 7a6e84: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 7a6e8a: call 0x6c84c2 */
  esp -= 4; W32(esp, 0x7a6e8fu); SPILL(); f_6c84c2(); if (g_unwind) return; RELOAD();
/* 7a6e8f: lea ecx, [ebp - 0x134] */
  ecx = (uint32_t)(ebp + 0xfffffeccu);
/* 7a6e95: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7a6e99: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x7a6e9eu); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 7a6e9e: mov eax, dword ptr [ebx + 0x568] */
  eax = R32((uint32_t)(ebx + 0x568u));
/* 7a6ea4: imul eax, dword ptr [ebx + 0xf8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0xf8u)));
  eax = (uint32_t)r;
  }
/* 7a6eab: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7a6ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a6eae: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 7a6eb4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7a6eb8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a6ebeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a6ebe: mov ecx, dword ptr [ebx + 0x56c] */
  ecx = R32((uint32_t)(ebx + 0x56cu));
/* 7a6ec4: imul ecx, dword ptr [ebx + 0xf8] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0xf8u)));
  ecx = (uint32_t)r;
  }
/* 7a6ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a6ecc: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 7a6ed2: call dword ptr [0xcfa64c] */
  esp -= 4; W32(esp, 0x7a6ed8u); SPILL(); f_4e437c(); if (g_unwind) return; /* Core!?Add@?$TArray@G@@QAEHH@Z */ RELOAD();
/* 7a6ed8: mov edi, dword ptr [ebp - 0x114] */
  edi = R32((uint32_t)(ebp + 0xfffffeecu));
/* 7a6ede: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a6ee0: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 7a6ee6: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x7a6eecu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 7a6eec: xor ecx, ecx */
  ecx = 0;
/* 7a6eee: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7a6ef1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_7a6ef4: /* 7a6ef4: cmp ecx, dword ptr [ebx + 0x40c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a6efa: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7a6efd: jge 0x7a73ad */
  if ((sf == of)) goto L_7a73ad;
L_7a6f03: /* 7a6f03: mov edx, dword ptr [ebx + 0x3fc] */
  edx = R32((uint32_t)(ebx + 0x3fcu));
/* 7a6f09: mov eax, ecx */
  eax = ecx;
/* 7a6f0b: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 7a6f11: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a6f13: test byte ptr [eax + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a6f1a: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 7a6f20: je 0x7a73a7 */
  if (zf) goto L_7a73a7;
L_7a6f26: /* 7a6f26: mov edx, dword ptr [eax + 0xa8] */
  edx = R32((uint32_t)(eax + 0xa8u));
/* 7a6f2c: lea ecx, [ebx + 0x538] */
  ecx = (uint32_t)(ebx + 0x538u);
/* 7a6f32: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 7a6f35: mov dword ptr [ebp - 0x48], 1 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x1u);
/* 7a6f3c: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x7a6f42u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 7a6f42: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a6f45: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7a6f48: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7a6f4b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7a6f4e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7a6f54: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a6f56: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a6f59: jnp 0x7a6f8c */
  if (!pf) goto L_7a6f8c;
L_7a6f5b: /* 7a6f5b: fld dword ptr [ebx + 0x59c] */
  { double v = F32((uint32_t)(ebx + 0x59cu)); FPUSH(v); }
/* 7a6f61: fdiv dword ptr [ebp - 0x40] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 7a6f64: call 0x99c958 */
  esp -= 4; W32(esp, 0x7a6f69u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7a6f69: mov ecx, dword ptr [ebx + 0x59c] */
  ecx = R32((uint32_t)(ebx + 0x59cu));
/* 7a6f6f: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7a6f75: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 7a6f7b: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7a6f7e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7a6f81: call 0x99cc5c */
  esp -= 4; W32(esp, 0x7a6f86u); SPILL(); f_99cc5c(); if (g_unwind) return; RELOAD();
/* 7a6f86: fstp dword ptr [ebx + 0x59c] */
  WF32((uint32_t)(ebx + 0x59cu), ST0); FPOP();
L_7a6f8c: /* 7a6f8c: mov edx, dword ptr [0xcfa278] */
  edx = R32((uint32_t)(0xcfa278u));
/* 7a6f92: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a6f95: je 0x7a6fac */
  if (zf) goto L_7a6fac;
L_7a6f97: /* 7a6f97: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 7a6f9b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7a6f9e: mov byte ptr [ebp - 0x24], al */
  W8((uint32_t)(ebp + 0xffffffdcu), (eax & 0xffu));
/* 7a6fa1: mov byte ptr [ebp - 0x23], ch */
  W8((uint32_t)(ebp + 0xffffffddu), ((ecx >> 8) & 0xffu));
/* 7a6fa4: mov byte ptr [ebp - 0x22], cl */
  W8((uint32_t)(ebp + 0xffffffdeu), (ecx & 0xffu));
/* 7a6fa7: mov byte ptr [ebp - 0x21], ah */
  W8((uint32_t)(ebp + 0xffffffdfu), ((eax >> 8) & 0xffu));
/* 7a6faa: jmp 0x7a6fb2 */
  goto L_7a6fb2;
L_7a6fac: /* 7a6fac: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7a6faf: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_7a6fb2: /* 7a6fb2: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 7a6fb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a6fc0: /* 7a6fc0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7a6fc3: cmp ecx, dword ptr [ebx + 0x564] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x564u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a6fc9: jge 0x7a739d */
  if ((sf == of)) goto L_7a739d;
L_7a6fcf: /* 7a6fcf: mov esi, dword ptr [ebx + 0x4f0] */
  esi = R32((uint32_t)(ebx + 0x4f0u));
/* 7a6fd5: imul esi, dword ptr [ebp - 0x44] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  esi = (uint32_t)r;
  }
/* 7a6fd9: mov eax, dword ptr [ebx + 0x578] */
  eax = R32((uint32_t)(ebx + 0x578u));
/* 7a6fdf: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7a6fe2: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a6fe4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7a6fe7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7a6fe9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7a6fec: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7a6fee: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7a6ff1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7a6ff3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7a6ff5: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7a6ffb: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 7a6ffe: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7a7001: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7a7008: fsub dword ptr [esi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x14u)));
/* 7a700b: fld dword ptr [ebp - 0xf0] */
  { double v = F32((uint32_t)(ebp + 0xffffff10u)); FPUSH(v); }
/* 7a7011: fsub dword ptr [esi + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x10u)));
/* 7a7014: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7a7017: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7a701a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7a701d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7a7020: /* 7a7020: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a7023: cmp edx, dword ptr [ebx + 0x4f0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a7029: jge 0x7a7270 */
  if ((sf == of)) goto L_7a7270;
L_7a702f: /* 7a702f: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7a7032: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a7034: je 0x7a708d */
  if (zf) goto L_7a708d;
L_7a7036: /* 7a7036: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7a7039: fcom dword ptr [ebx + 0x530] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x530u)));
/* 7a703f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a7041: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a7044: jne 0x7a708b */
  if (!zf) goto L_7a708b;
L_7a7046: /* 7a7046: fcomp dword ptr [ebx + 0x534] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x534u)));
  FPOP();
/* 7a704c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a704e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a7051: jp 0x7a708d */
  if (pf) goto L_7a708d;
L_7a7053: /* 7a7053: lea eax, [ebp - 0x140] */
  eax = (uint32_t)(ebp + 0xfffffec0u);
/* 7a7059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a705a: lea ecx, [ebx + 0x518] */
  ecx = (uint32_t)(ebx + 0x518u);
/* 7a7060: call dword ptr [0xcfa630] */
  esp -= 4; W32(esp, 0x7a7066u); SPILL(); f_4e2b30(); if (g_unwind) return; /* Core!?GetRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 7a7066: fild dword ptr [ebp - 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7a7069: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7a706b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7a706e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7a7070: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7a7073: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7a7075: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7a7077: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 7a7079: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 7a707b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7a707d: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 7a7080: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 7a7083: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 7a7086: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 7a7089: jmp 0x7a708d */
  goto L_7a708d;
L_7a708b: /* 7a708b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7a708d: /* 7a708d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7a7090: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7a7093: fst dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0);
/* 7a7096: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7a7099: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7a709c: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7a709f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7a70a1: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7a70a4: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 7a70a7: mov eax, ecx */
  eax = ecx;
/* 7a70a9: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 7a70ac: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 7a70b2: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 7a70b5: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 7a70b8: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 7a70be: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7a70c1: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 7a70c4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7a70c7: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 7a70cd: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7a70d0: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7a70d3: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7a70d6: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7a70d9: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7a70dc: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7a70df: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7a70e2: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7a70e8: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 7a70eb: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 7a70ee: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 7a70f4: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 7a70f7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7a70f9: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 7a70ff: fmul dword ptr [ebp - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff98u)));
/* 7a7102: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 7a7105: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 7a7108: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7a710a: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 7a710d: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 7a7110: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 7a7113: fmul dword ptr [ebp - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff98u)));
/* 7a7116: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7a7118: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7a711b: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7a711e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7a7121: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7a7124: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 7a7127: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7a712a: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7a712d: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7a7130: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7a7133: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7a7136: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7a713cu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7a713c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7a713f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a7141: je 0x7a7188 */
  if (zf) goto L_7a7188;
L_7a7143: /* 7a7143: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7a7149: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7a714fu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7a714f: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 7a7155: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a7156: mov eax, 0x8000 */
  eax = 0x8000u;
/* 7a715b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7a715c: idiv dword ptr [ebx + 0x564] */
  { int32_t d = (int32_t)R32((uint32_t)(ebx + 0x564u)); if (!d) d = (int32_t)guest_divzero(0x7a715c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7a7162: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7a7165: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 7a7169: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a716a: lea eax, [ebp - 0x14c] */
  eax = (uint32_t)(ebp + 0xfffffeb4u);
/* 7a7170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7171: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x7a7177u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 7a7177: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a7179: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7a717c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a717f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7a7182: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a7185: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_7a7188: /* 7a7188: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 7a718e: fld dword ptr [ecx + 0x6c] */
  { double v = F32((uint32_t)(ecx + 0x6cu)); FPUSH(v); }
/* 7a7191: mov edx, edi */
  edx = edi;
/* 7a7193: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a7196: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a7199: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7a719b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7a719e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a71a1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7a71a3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7a71a6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a71a9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7a71ab: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7a71ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a71b0: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7a71b3: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 7a71b5: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7a71bb: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7a71c1: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7a71c4: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 7a71c7: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7a71cd: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7a71d0: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 7a71d6: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 7a71d9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7a71db: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7a71de: mov ecx, edi */
  ecx = edi;
/* 7a71e0: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7a71e6: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7a71ec: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7a71ef: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7a71f2: mov dword ptr [edi - 0xc], eax */
  W32((uint32_t)(edi + 0xfffffff4u), eax);
/* 7a71f5: fld dword ptr [ebx + 0x4ac] */
  { double v = F32((uint32_t)(ebx + 0x4acu)); FPUSH(v); }
/* 7a71fb: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7a71fe: mov dword ptr [edi - 4], 0 */
  W32((uint32_t)(edi + 0xfffffffcu), 0x0u);
/* 7a7205: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a7208: fstp dword ptr [edi - 0x20] */
  WF32((uint32_t)(edi + 0xffffffe0u), ST0); FPOP();
/* 7a720b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7a720d: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7a7210: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7a7213: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a7216: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7a7219: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7a721c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7a721f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7a7222: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a7224: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7a7227: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a722a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a722d: mov dword ptr [edi - 0xc], eax */
  W32((uint32_t)(edi + 0xfffffff4u), eax);
/* 7a7230: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7a7233: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a7236: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7a7239: fld dword ptr [ebx + 0x4ac] */
  { double v = F32((uint32_t)(ebx + 0x4acu)); FPUSH(v); }
/* 7a723f: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7a7242: mov ecx, esi */
  ecx = esi;
/* 7a7244: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a7247: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 7a724a: mov eax, dword ptr [ebx + 0x4b0] */
  eax = R32((uint32_t)(ebx + 0x4b0u));
/* 7a7250: mov dword ptr [edi - 4], eax */
  W32((uint32_t)(edi + 0xfffffffcu), eax);
/* 7a7253: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a7255: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7a7258: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a725b: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7a725e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7a7261: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a7262: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7a7265: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7a7268: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7a726b: jmp 0x7a7020 */
  goto L_7a7020;
L_7a7270: /* 7a7270: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a7273: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7a7276: xor edx, edx */
  edx = 0;
L_7a7278: /* 7a7278: mov esi, dword ptr [ebx + 0x4f0] */
  esi = R32((uint32_t)(ebx + 0x4f0u));
/* 7a727e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7a727f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a7281: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 7a7284: jge 0x7a738e */
  if ((sf == of)) goto L_7a738e;
L_7a728a: /* 7a728a: xor esi, esi */
  esi = 0;
/* 7a728c: mov si, word ptr [ebx + 0x4f0] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x4f0u))) & 0xffffu);
/* 7a7293: imul si, word ptr [ebp + 0x10] */
  { int32_t r = (int32_t)(int16_t)((esi & 0xffffu)) * (int32_t)(int16_t)(R16((uint32_t)(ebp + 0x10u)));
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a7298: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a729b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a729e: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a72a1: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a72a4: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a72a7: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a72aa: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a72ac: xor edx, edx */
  edx = 0;
/* 7a72ae: mov dx, word ptr [ebx + 0x568] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x568u))) & 0xffffu);
/* 7a72b5: imul dx, cx */
  { int32_t r = (int32_t)(int16_t)((edx & 0xffffu)) * (int32_t)(int16_t)((ecx & 0xffffu));
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a72b9: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7a72bc: lea edx, [edx + esi*2] */
  edx = (uint32_t)(edx + esi*2);
/* 7a72bf: mov word ptr [eax - 0xc], dx */
  W16((uint32_t)(eax + 0xfffffff4u), (edx & 0xffffu));
/* 7a72c3: xor edx, edx */
  edx = 0;
/* 7a72c5: mov dx, word ptr [ebx + 0x4f0] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x4f0u))) & 0xffffu);
/* 7a72cc: imul dx, word ptr [ebp + 0x10] */
  { int32_t r = (int32_t)(int16_t)((edx & 0xffffu)) * (int32_t)(int16_t)(R16((uint32_t)(ebp + 0x10u)));
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a72d1: add edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a72d4: xor esi, esi */
  esi = 0;
/* 7a72d6: mov si, word ptr [ebx + 0x568] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x568u))) & 0xffffu);
/* 7a72dd: imul si, cx */
  { int32_t r = (int32_t)(int16_t)((esi & 0xffffu)) * (int32_t)(int16_t)((ecx & 0xffffu));
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a72e1: lea edx, [esi + edx*2 + 1] */
  edx = (uint32_t)(esi + edx*2 + 0x1u);
/* 7a72e5: mov word ptr [eax - 0xa], dx */
  W16((uint32_t)(eax + 0xfffffff6u), (edx & 0xffffu));
/* 7a72e9: xor edx, edx */
  edx = 0;
/* 7a72eb: mov dx, word ptr [ebx + 0x4f0] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x4f0u))) & 0xffffu);
/* 7a72f2: imul dx, word ptr [ebp + 0x10] */
  { int32_t r = (int32_t)(int16_t)((edx & 0xffffu)) * (int32_t)(int16_t)(R16((uint32_t)(ebp + 0x10u)));
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a72f7: add edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a72fa: xor esi, esi */
  esi = 0;
/* 7a72fc: mov si, word ptr [ebx + 0x568] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x568u))) & 0xffffu);
/* 7a7303: imul si, cx */
  { int32_t r = (int32_t)(int16_t)((esi & 0xffffu)) * (int32_t)(int16_t)((ecx & 0xffffu));
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a7307: lea edx, [esi + edx*2 + 2] */
  edx = (uint32_t)(esi + edx*2 + 0x2u);
/* 7a730b: mov word ptr [eax - 8], dx */
  W16((uint32_t)(eax + 0xfffffff8u), (edx & 0xffffu));
/* 7a730f: xor edx, edx */
  edx = 0;
/* 7a7311: mov dx, word ptr [ebx + 0x4f0] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x4f0u))) & 0xffffu);
/* 7a7318: imul dx, word ptr [ebp + 0x10] */
  { int32_t r = (int32_t)(int16_t)((edx & 0xffffu)) * (int32_t)(int16_t)(R16((uint32_t)(ebp + 0x10u)));
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a731d: add edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a7320: xor esi, esi */
  esi = 0;
/* 7a7322: mov si, word ptr [ebx + 0x568] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x568u))) & 0xffffu);
/* 7a7329: imul si, cx */
  { int32_t r = (int32_t)(int16_t)((esi & 0xffffu)) * (int32_t)(int16_t)((ecx & 0xffffu));
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a732d: lea edx, [esi + edx*2 + 1] */
  edx = (uint32_t)(esi + edx*2 + 0x1u);
/* 7a7331: mov word ptr [eax - 6], dx */
  W16((uint32_t)(eax + 0xfffffffau), (edx & 0xffffu));
/* 7a7335: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7a7338: xor edx, edx */
  edx = 0;
/* 7a733a: mov dx, word ptr [ebx + 0x4f0] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x4f0u))) & 0xffffu);
/* 7a7341: imul dx, word ptr [ebp + 0x10] */
  { int32_t r = (int32_t)(int16_t)((edx & 0xffffu)) * (int32_t)(int16_t)(R16((uint32_t)(ebp + 0x10u)));
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a7346: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a7348: xor esi, esi */
  esi = 0;
/* 7a734a: mov si, word ptr [ebx + 0x568] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x568u))) & 0xffffu);
/* 7a7351: imul si, cx */
  { int32_t r = (int32_t)(int16_t)((esi & 0xffffu)) * (int32_t)(int16_t)((ecx & 0xffffu));
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a7355: lea edx, [esi + edx*2 + 3] */
  edx = (uint32_t)(esi + edx*2 + 0x3u);
/* 7a7359: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7a735c: mov word ptr [eax - 4], dx */
  W16((uint32_t)(eax + 0xfffffffcu), (edx & 0xffffu));
/* 7a7360: xor edx, edx */
  edx = 0;
/* 7a7362: mov dx, word ptr [ebx + 0x4f0] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x4f0u))) & 0xffffu);
/* 7a7369: imul dx, word ptr [ebp + 0x10] */
  { int32_t r = (int32_t)(int16_t)((edx & 0xffffu)) * (int32_t)(int16_t)(R16((uint32_t)(ebp + 0x10u)));
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a736e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7a7370: xor esi, esi */
  esi = 0;
/* 7a7372: mov si, word ptr [ebx + 0x568] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x568u))) & 0xffffu);
/* 7a7379: imul si, cx */
  { int32_t r = (int32_t)(int16_t)((esi & 0xffffu)) * (int32_t)(int16_t)((ecx & 0xffffu));
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7a737d: lea edx, [esi + edx*2 + 2] */
  edx = (uint32_t)(esi + edx*2 + 0x2u);
/* 7a7381: mov word ptr [eax - 2], dx */
  W16((uint32_t)(eax + 0xfffffffeu), (edx & 0xffffu));
/* 7a7385: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7a7388: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7a7389: jmp 0x7a7278 */
  goto L_7a7278;
L_7a738e: /* 7a738e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7a7391: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7a7394: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a7395: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7a7398: jmp 0x7a6fc0 */
  goto L_7a6fc0;
L_7a739d: /* 7a739d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a73a0: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7a73a3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a73a4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7a73a7: /* 7a73a7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7a73a8: jmp 0x7a6ef4 */
  goto L_7a6ef4;
L_7a73ad: /* 7a73ad: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7a73b4: jne 0x7a7527 */
  if (!zf) goto L_7a7527;
L_7a73ba: /* 7a73ba: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a73c0: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7a73c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a73c8: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7a73cb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7a73ce: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7a73d1: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7a73d4: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a73d7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7a73da: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a73dd: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 7a73e3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a73e6: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 7a73f0: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 7a73fa: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 7a7404: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 7a740e: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 7a7418: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 7a7422: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 7a742c: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 7a7436: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 7a7440: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7a744a: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 7a7454: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7a745e: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 7a7464: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 7a746a: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
/* 7a7474: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a7479: lea esi, [ebp - 0xe4] */
  esi = (uint32_t)(ebp + 0xffffff1cu);
/* 7a747f: lea edi, [ebp - 0x20c] */
  edi = (uint32_t)(ebp + 0xfffffdf4u);
/* 7a7485: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a7487: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a748c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a748e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a7491: mov ecx, esp */
  ecx = esp;
/* 7a7493: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7a7495: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7a7498: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7a749b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7a749e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7a74a1: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 7a74a7: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7a74acu); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7a74ac: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a74af: mov edi, esp */
  edi = esp;
/* 7a74b1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7a74b6: lea esi, [ebp - 0xe4] */
  esi = (uint32_t)(ebp + 0xffffff1cu);
/* 7a74bc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7a74be: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 7a74c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a74c5: mov ecx, eax */
  ecx = eax;
/* 7a74c7: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7a74cb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7a74d1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7a74d1: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 7a74d7: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7a74db: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a74e1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a74e1: lea ecx, [ebp - 0x20c] */
  ecx = (uint32_t)(ebp + 0xfffffdf4u);
/* 7a74e7: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7a74eb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a74f1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a74f1: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 7a74f7: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7a74fb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a7501u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a7501: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7a7504: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a7506: lea eax, [ebp - 0x18c] */
  eax = (uint32_t)(ebp + 0xfffffe74u);
/* 7a750c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a750d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a750f: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x7a7512u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a7512: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 7a7518: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7a751c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7a7522u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7a7522: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7a7525: jmp 0x7a7536 */
  goto L_7a7536;
L_7a7527: /* 7a7527: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 7a752c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a752e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a752f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a7531: mov ecx, esi */
  ecx = esi;
/* 7a7533: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x7a7536u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a7536: /* 7a7536: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a7539: xor edi, edi */
  edi = 0;
/* 7a753b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a753d: jle 0x7a7742 */
  if ((zf || sf != of)) goto L_7a7742;
L_7a7543: /* 7a7543: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a7549: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7a754f: movzx ecx, byte ptr [ebx + 0x314] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x314u)));
/* 7a7556: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 7a7559: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7a755c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7a755f: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7a7562: cmp dword ptr [eax + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7a7569: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a756f: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7a7575: jne 0x7a757c */
  if (!zf) goto L_7a757c;
L_7a7577: /* 7a7577: mov dword ptr [eax + 0x48], edi */
  W32((uint32_t)(eax + 0x48u), edi);
/* 7a757a: jmp 0x7a7585 */
  goto L_7a7585;
L_7a757c: /* 7a757c: mov edx, dword ptr [ebx + 0x318] */
  edx = R32((uint32_t)(ebx + 0x318u));
/* 7a7582: mov dword ptr [eax + 0x48], edx */
  W32((uint32_t)(eax + 0x48u), edx);
L_7a7585: /* 7a7585: test byte ptr [ebx + 0x324], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x324u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a758c: je 0x7a759e */
  if (zf) goto L_7a759e;
L_7a758e: /* 7a758e: test byte ptr [ebx + 0x33c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x33cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a7595: jne 0x7a759e */
  if (!zf) goto L_7a759e;
L_7a7597: /* 7a7597: mov eax, 1 */
  eax = 0x1u;
/* 7a759c: jmp 0x7a75a0 */
  goto L_7a75a0;
L_7a759e: /* 7a759e: xor eax, eax */
  eax = 0;
L_7a75a0: /* 7a75a0: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a75a6: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7a75ac: mov dword ptr [edx + 0x3c], eax */
  W32((uint32_t)(edx + 0x3cu), eax);
/* 7a75af: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a75b5: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 7a75bb: mov dword ptr [edx + 0x40], 1 */
  W32((uint32_t)(edx + 0x40u), 0x1u);
/* 7a75c2: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a75c8: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 7a75ce: mov dword ptr [edx + 0x44], edi */
  W32((uint32_t)(edx + 0x44u), edi);
/* 7a75d1: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7a75d7: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a75dd: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7a75e3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a75e6: mov dword ptr [edx + 0x4c], eax */
  W32((uint32_t)(edx + 0x4cu), eax);
/* 7a75e9: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a75ef: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 7a75f5: mov eax, dword ptr [ebx + 0x1c4] */
  eax = R32((uint32_t)(ebx + 0x1c4u));
/* 7a75fb: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 7a75fe: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a7604: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7a760a: mov edx, dword ptr [ebx + 0x1c8] */
  edx = R32((uint32_t)(ebx + 0x1c8u));
/* 7a7610: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7a7612: xor edx, dword ptr [eax + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x60u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7a7615: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7a7618: xor dword ptr [eax + 0x60], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 7a761b: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7a7621: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a7627: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7a762d: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7a7630: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a7633: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7a7636: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7a763c: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a7642: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7a7648: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7a764b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7a764e: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 7a7651: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7a7654: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7a7659u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7a7659: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7a765f: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7a7665: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a7668: mov dword ptr [edx + 0x5c], eax */
  W32((uint32_t)(edx + 0x5cu), eax);
/* 7a766b: mov ecx, esp */
  ecx = esp;
/* 7a766d: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7a7670: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a7671: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a7674: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7a767b: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7a767e: mov eax, esp */
  eax = esp;
/* 7a7680: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7a7682: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7a7689: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7a768c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7a768f: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7a7696: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7a7699: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7a769c: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x7a76a2u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 7a76a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7a76a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a76a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a76a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a76a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a76a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a76aa: mov ecx, esi */
  ecx = esi;
/* 7a76ac: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x7a76afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a76af: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7a76b5: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7a76bb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a76bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a76be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a76bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a76c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a76c1: mov ecx, esi */
  ecx = esi;
/* 7a76c3: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7a76c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a76c6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a76c8: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 7a76ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a76cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a76d0: mov ecx, esi */
  ecx = esi;
/* 7a76d2: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x7a76d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a76d5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a76d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a76d8: lea eax, [ebp - 0x134] */
  eax = (uint32_t)(ebp + 0xfffffeccu);
/* 7a76de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a76df: mov ecx, esi */
  ecx = esi;
/* 7a76e1: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x7a76e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a76e4: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7a76e7: xor edi, edi */
  edi = 0;
/* 7a76e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a76f0: /* 7a76f0: mov ecx, dword ptr [ebx + 0x564] */
  ecx = R32((uint32_t)(ebx + 0x564u));
/* 7a76f6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a76f8: jge 0x7a7742 */
  if ((sf == of)) goto L_7a7742;
L_7a76fa: /* 7a76fa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7a76fc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a76ff: mov esi, dword ptr [ebx + 0x568] */
  esi = R32((uint32_t)(ebx + 0x568u));
/* 7a7705: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7a7708: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 7a770b: mov eax, dword ptr [ebx + 0x570] */
  eax = R32((uint32_t)(ebx + 0x570u));
/* 7a7711: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 7a7714: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7a7715: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x7a7715);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7a7717: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7a7718: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a7719: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a771b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7a771e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a771f: mov eax, dword ptr [ebx + 0x56c] */
  eax = R32((uint32_t)(ebx + 0x56cu));
/* 7a7725: imul eax, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  eax = (uint32_t)r;
  }
/* 7a7729: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7a772a: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x7a772a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7a772c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7a772f: mov ecx, esi */
  ecx = esi;
/* 7a7731: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 7a7734: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a7736: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7737: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7a773a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a773c: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x7a773fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a773f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7a7740: jmp 0x7a76f0 */
  goto L_7a76f0;
L_7a7742: /* 7a7742: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 7a7748: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7a774c: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x7a7752u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 7a7752: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 7a7758: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a775c: call 0x6ca939 */
  esp -= 4; W32(esp, 0x7a7761u); SPILL(); f_6ca939(); if (g_unwind) return; RELOAD();
/* 7a7761: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a7764: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a7767: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a7768: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a7769: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a7770: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a7771: mov esp, ebp */
  esp = ebp;
/* 7a7773: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a7774: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7a7777(void) {
  LOAD_REGS();
L_7a7777: /* 7a7777: mov ecx, dword ptr [ebp - 0xf4] */
  ecx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7a777d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a7782: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 7a7788: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a7789: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 7a778f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a7794u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a7794(); return;
}

void f_7a7794(void) {
  LOAD_REGS();
L_7a7794: /* 7a7794: push 0xa0bbcc */
  { uint32_t v = 0xa0bbccu; esp -= 4; W32(esp, v); }
/* 7a7799: push 0xacd748 */
  { uint32_t v = 0xacd748u; esp -= 4; W32(esp, v); }
/* 7a779e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a77a4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a77a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a77a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a77a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a77ab: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a77b0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a77b0: guest_badaddr(0x7a77b0); return;
}

void f_7a7a50(void) {
  LOAD_REGS();
L_7a7a50: /* 7a7a50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a7a52: push 0x9ce78a */
  { uint32_t v = 0x9ce78au; esp -= 4; W32(esp, v); }
/* 7a7a57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a7a5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7a5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a7a65: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a7a68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a7a69: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a7a6a: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 7a7a6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a7a6f: xor esi, esi */
  esi = 0;
/* 7a7a71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a7a72: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7a7a76: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 7a7a7a: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7a7a80u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7a7a80: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7a7a86: mov ebx, 1 */
  ebx = 0x1u;
/* 7a7a8b: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 7a7a8f: nop  */
L_7a7a90: /* 7a7a90: movzx eax, byte ptr [esi + ebp] */
  eax = (uint32_t)(R8((uint32_t)(esi + ebp)));
/* 7a7a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7a95: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 7a7a99: push 0xacd77c */
  { uint32_t v = 0xacd77cu; esp -= 4; W32(esp, v); }
/* 7a7a9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a7a9f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a7aa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a7aa1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7aa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7aa5: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7a7aa9: mov byte ptr [esp + 0x38], 2 */
  W8((uint32_t)(esp + 0x38u), 0x2u);
/* 7a7aae: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7a7ab4u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7a7ab4: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7a7ab8: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 7a7abc: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a7ac2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a7ac2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a7ac3: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a7ac6: jl 0x7a7a90 */
  if ((sf != of)) goto L_7a7a90;
L_7a7ac8: /* 7a7ac8: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 7a7acc: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 7a7ad0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a7ad1: mov ecx, esi */
  ecx = esi;
/* 7a7ad3: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7a7ad9u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7a7ad9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7a7add: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7a7ae1: mov byte ptr [esp + 0x34], 0 */
  W8((uint32_t)(esp + 0x34u), 0x0u);
/* 7a7ae6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a7aecu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a7aec: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 7a7af0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a7af1: mov eax, esi */
  eax = esi;
/* 7a7af3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a7af4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a7af5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a7af6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a7afd: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7b00: ret  */
  esp += 4; SPILL(); return;
}

void f_7a7b40(void) {
  LOAD_REGS();
L_7a7b40: /* 7a7b40: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a7b43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a7b44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a7b46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a7b47: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 7a7b4f: call dword ptr [0xcfa65c] */
  esp -= 4; W32(esp, 0x7a7b55u); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* 7a7b55: mov ebx, eax */
  ebx = eax;
/* 7a7b57: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 7a7b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7b5c: call dword ptr [0xcfa658] */
  esp -= 4; W32(esp, 0x7a7b62u); SPILL(); f_4e2423(); if (g_unwind) return; /* Core!?appMD5Init@@YAXPAUFMD5Context@@@Z */ RELOAD();
/* 7a7b62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a7b63: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7a7b69u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7a7b69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7b6a: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7a7b6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a7b6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a7b70: call dword ptr [0xcfa654] */
  esp -= 4; W32(esp, 0x7a7b76u); SPILL(); f_4e41d8(); if (g_unwind) return; /* Core!?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */ RELOAD();
/* 7a7b76: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 7a7b7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a7b7b: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 7a7b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7b80: call dword ptr [0xcfa650] */
  esp -= 4; W32(esp, 0x7a7b86u); SPILL(); f_4e281a(); if (g_unwind) return; /* Core!?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */ RELOAD();
/* 7a7b86: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7a7b8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a7b8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a7b8c: call 0x7a7a50 */
  esp -= 4; W32(esp, 0x7a7b91u); SPILL(); f_7a7a50(); if (g_unwind) return; RELOAD();
/* 7a7b91: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7b94: mov eax, edi */
  eax = edi;
/* 7a7b96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a7b97: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7b9a: ret  */
  esp += 4; SPILL(); return;
}

void f_7a7bc0(void) {
  LOAD_REGS();
L_7a7bc0: /* 7a7bc0: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7bc4: jb 0x7a7bd3 */
  if (cf) goto L_7a7bd3;
L_7a7bc6: /* 7a7bc6: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7bca: ja 0x7a7bd3 */
  if ((!cf && !zf)) goto L_7a7bd3;
L_7a7bcc: /* 7a7bcc: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7a7bcf: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a7bd2: ret  */
  esp += 4; SPILL(); return;
L_7a7bd3: /* 7a7bd3: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7bd7: jb 0x7a7be6 */
  if (cf) goto L_7a7be6;
L_7a7bd9: /* 7a7bd9: cmp ax, 0x66 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x66u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7bdd: ja 0x7a7be6 */
  if ((!cf && !zf)) goto L_7a7be6;
L_7a7bdf: /* 7a7bdf: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7a7be2: sub eax, 0x57 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x57u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a7be5: ret  */
  esp += 4; SPILL(); return;
L_7a7be6: /* 7a7be6: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7bea: jb 0x7a7bf9 */
  if (cf) goto L_7a7bf9;
L_7a7bec: /* 7a7bec: cmp ax, 0x46 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x46u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7bf0: ja 0x7a7bf9 */
  if ((!cf && !zf)) goto L_7a7bf9;
L_7a7bf2: /* 7a7bf2: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7a7bf5: sub eax, 0x37 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a7bf8: ret  */
  esp += 4; SPILL(); return;
L_7a7bf9: /* 7a7bf9: xor eax, eax */
  eax = 0;
/* 7a7bfb: ret  */
  esp += 4; SPILL(); return;
}

void f_7a7c10(void) {
  LOAD_REGS();
L_7a7c10: /* 7a7c10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a7c11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a7c12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a7c13: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7a7c17: mov esi, 0xacd788 */
  esi = 0xacd788u;
/* 7a7c1c: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 7a7c24: call 0x7a7b40 */
  esp -= 4; W32(esp, 0x7a7c29u); SPILL(); f_7a7b40(); if (g_unwind) return; RELOAD();
/* 7a7c29: mov eax, edi */
  eax = edi;
/* 7a7c2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a7c2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a7c2d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7a7c2e: ret  */
  esp += 4; SPILL(); return;
}

void f_7a7c40(void) {
  LOAD_REGS();
L_7a7c40: /* 7a7c40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a7c42: push 0x9ce7d1 */
  { uint32_t v = 0x9ce7d1u; esp -= 4; W32(esp, v); }
/* 7a7c47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a7c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7c4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a7c55: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a7c58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a7c59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a7c5a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7a7c5e: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 7a7c66: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7a7c6cu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7a7c6c: push 0xacd794 */
  { uint32_t v = 0xacd794u; esp -= 4; W32(esp, v); }
/* 7a7c71: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7a7c75: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 7a7c7d: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7a7c83u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7a7c83: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 7a7c87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7c88: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7a7c8c: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x7a7c92u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7a7c92: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7a7c96: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7a7c9cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7a7c9c: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 7a7ca0: mov esi, eax */
  esi = eax;
/* 7a7ca2: call 0x7a7b40 */
  esp -= 4; W32(esp, 0x7a7ca7u); SPILL(); f_7a7b40(); if (g_unwind) return; RELOAD();
/* 7a7ca7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7a7cab: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 7a7cb3: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* 7a7cb8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a7cbeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a7cbe: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7a7cc2: mov eax, edi */
  eax = edi;
/* 7a7cc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a7cc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a7cc6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a7ccd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7cd0: ret  */
  esp += 4; SPILL(); return;
}

void f_7a7d10(void) {
  LOAD_REGS();
L_7a7d10: /* 7a7d10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a7d12: push 0x9ce835 */
  { uint32_t v = 0x9ce835u; esp -= 4; W32(esp, v); }
/* 7a7d17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a7d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7d1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a7d25: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a7d28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a7d29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a7d2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a7d2b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7a7d2f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 7a7d37: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7a7d3du); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7a7d3d: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 7a7d41: mov ebx, dword ptr [0xcfa540] */
  ebx = R32((uint32_t)(0xcfa540u));
/* 7a7d47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7d48: push 0xacd7a0 */
  { uint32_t v = 0xacd7a0u; esp -= 4; W32(esp, v); }
/* 7a7d4d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 7a7d51: push 0xacd7ac */
  { uint32_t v = 0xacd7acu; esp -= 4; W32(esp, v); }
/* 7a7d56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a7d57: mov dword ptr [esp + 0x64], 1 */
  W32((uint32_t)(esp + 0x64u), 0x1u);
/* 7a7d5f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a7d61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a7d61: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7d64: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 7a7d68: mov byte ptr [esp + 0x54], 2 */
  W8((uint32_t)(esp + 0x54u), 0x2u);
/* 7a7d6d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7a7d73u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7a7d73: mov esi, eax */
  esi = eax;
/* 7a7d75: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 7a7d79: call 0x7a7b40 */
  esp -= 4; W32(esp, 0x7a7d7eu); SPILL(); f_7a7b40(); if (g_unwind) return; RELOAD();
/* 7a7d7e: mov esi, dword ptr [esp + 0x60] */
  esi = R32((uint32_t)(esp + 0x60u));
/* 7a7d82: xor edi, edi */
  edi = 0;
/* 7a7d84: cmp word ptr [esi], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7a7d87: mov byte ptr [esp + 0x54], 3 */
  W8((uint32_t)(esp + 0x54u), 0x3u);
/* 7a7d8c: je 0x7a7e1c */
  if (zf) goto L_7a7e1c;
L_7a7d92: /* 7a7d92: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a7d93: mov ebp, esi */
  ebp = esi;
L_7a7d95: /* 7a7d95: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7a7d99: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7a7d9fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7a7d9f: mov edx, edi */
  edx = edi;
/* 7a7da1: and edx, 0x8000000f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 7a7da7: jns 0x7a7dae */
  if (!sf) goto L_7a7dae;
L_7a7da9: /* 7a7da9: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7a7daa: or edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7a7dad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_7a7dae: /* 7a7dae: movzx eax, word ptr [eax + edx*2] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx*2)));
/* 7a7db2: movzx ecx, word ptr [ebp] */
  ecx = (uint32_t)(R16((uint32_t)(ebp)));
/* 7a7db6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7a7db8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7db9: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 7a7dbd: push 0xacd7b8 */
  { uint32_t v = 0xacd7b8u; esp -= 4; W32(esp, v); }
/* 7a7dc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a7dc3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a7dc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a7dc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7dc9: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 7a7dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7dce: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7a7dd2: mov byte ptr [esp + 0x60], 4 */
  W8((uint32_t)(esp + 0x60u), 0x4u);
/* 7a7dd7: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7a7dddu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7a7ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7dde: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7a7de2: mov byte ptr [esp + 0x5c], 5 */
  W8((uint32_t)(esp + 0x5cu), 0x5u);
/* 7a7de7: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7a7dedu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7a7ded: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 7a7df1: mov byte ptr [esp + 0x58], 4 */
  W8((uint32_t)(esp + 0x58u), 0x4u);
/* 7a7df6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a7dfcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a7dfc: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 7a7e00: mov byte ptr [esp + 0x58], 3 */
  W8((uint32_t)(esp + 0x58u), 0x3u);
/* 7a7e05: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a7e0bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a7e0b: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a7e0e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7a7e0f: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7a7e13: mov ebp, esi */
  ebp = esi;
/* 7a7e15: jne 0x7a7d95 */
  if (!zf) goto L_7a7d95;
L_7a7e1b: /* 7a7e1b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7a7e1c: /* 7a7e1c: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 7a7e20: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7a7e24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a7e25: mov ecx, esi */
  ecx = esi;
/* 7a7e27: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7a7e2du); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7a7e2d: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7a7e31: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* 7a7e39: mov byte ptr [esp + 0x54], 2 */
  W8((uint32_t)(esp + 0x54u), 0x2u);
/* 7a7e3e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a7e44u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a7e44: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 7a7e48: mov byte ptr [esp + 0x54], 1 */
  W8((uint32_t)(esp + 0x54u), 0x1u);
/* 7a7e4d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a7e53u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a7e53: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7a7e57: mov byte ptr [esp + 0x54], 0 */
  W8((uint32_t)(esp + 0x54u), 0x0u);
/* 7a7e5c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a7e62u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a7e62: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 7a7e66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a7e67: mov eax, esi */
  eax = esi;
/* 7a7e69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a7e6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a7e6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a7e72: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7e75: ret  */
  esp += 4; SPILL(); return;
}

void f_7a7ee0(void) {
  LOAD_REGS();
L_7a7ee0: /* 7a7ee0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a7ee2: push 0x9ce8a5 */
  { uint32_t v = 0x9ce8a5u; esp -= 4; W32(esp, v); }
/* 7a7ee7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a7eed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7eee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a7ef5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a7ef8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a7ef9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a7efa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a7efb: xor ebp, ebp */
  ebp = 0;
/* 7a7efd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a7efe: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7a7f02: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 7a7f06: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7a7f0cu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7a7f0c: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 7a7f10: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 7a7f14: mov ebx, dword ptr [0xcfa540] */
  ebx = R32((uint32_t)(0xcfa540u));
/* 7a7f1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a7f1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a7f1c: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 7a7f20: push 0xacd7c4 */
  { uint32_t v = 0xacd7c4u; esp -= 4; W32(esp, v); }
/* 7a7f25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a7f26: mov dword ptr [esp + 0x68], 1 */
  W32((uint32_t)(esp + 0x68u), 0x1u);
/* 7a7f2e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a7f30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a7f30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a7f33: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7a7f37: mov byte ptr [esp + 0x58], 2 */
  W8((uint32_t)(esp + 0x58u), 0x2u);
/* 7a7f3c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7a7f42u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7a7f42: mov esi, eax */
  esi = eax;
/* 7a7f44: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 7a7f48: call 0x7a7b40 */
  esp -= 4; W32(esp, 0x7a7f4du); SPILL(); f_7a7b40(); if (g_unwind) return; RELOAD();
/* 7a7f4d: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 7a7f51: cmp word ptr [eax], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7a7f54: mov byte ptr [esp + 0x58], 3 */
  W8((uint32_t)(esp + 0x58u), 0x3u);
/* 7a7f59: je 0x7a807e */
  if (zf) goto L_7a807e;
L_7a7f5f: /* 7a7f5f: mov edi, eax */
  edi = eax;
L_7a7f61: /* 7a7f61: mov cx, word ptr [eax + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 7a7f65: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7a7f68: je 0x7a807e */
  if (zf) goto L_7a807e;
L_7a7f6e: /* 7a7f6e: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7a7f71: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7f75: jb 0x7a7f85 */
  if (cf) goto L_7a7f85;
L_7a7f77: /* 7a7f77: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7f7b: ja 0x7a7f85 */
  if ((!cf && !zf)) goto L_7a7f85;
L_7a7f7d: /* 7a7f7d: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7a7f80: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a7f83: jmp 0x7a7faf */
  goto L_7a7faf;
L_7a7f85: /* 7a7f85: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7f89: jb 0x7a7f99 */
  if (cf) goto L_7a7f99;
L_7a7f8b: /* 7a7f8b: cmp ax, 0x66 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x66u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7f8f: ja 0x7a7f99 */
  if ((!cf && !zf)) goto L_7a7f99;
L_7a7f91: /* 7a7f91: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7a7f94: sub eax, 0x57 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x57u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a7f97: jmp 0x7a7faf */
  goto L_7a7faf;
L_7a7f99: /* 7a7f99: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7f9d: jb 0x7a7fad */
  if (cf) goto L_7a7fad;
L_7a7f9f: /* 7a7f9f: cmp ax, 0x46 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x46u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7fa3: ja 0x7a7fad */
  if ((!cf && !zf)) goto L_7a7fad;
L_7a7fa5: /* 7a7fa5: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7a7fa8: sub eax, 0x37 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a7fab: jmp 0x7a7faf */
  goto L_7a7faf;
L_7a7fad: /* 7a7fad: xor eax, eax */
  eax = 0;
L_7a7faf: /* 7a7faf: cmp cx, 0x30 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7fb3: jb 0x7a7fc3 */
  if (cf) goto L_7a7fc3;
L_7a7fb5: /* 7a7fb5: cmp cx, 0x39 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7fb9: ja 0x7a7fc3 */
  if ((!cf && !zf)) goto L_7a7fc3;
L_7a7fbb: /* 7a7fbb: movzx ecx, cx */
  ecx = (uint32_t)((ecx & 0xffffu));
/* 7a7fbe: sub ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a7fc1: jmp 0x7a7fed */
  goto L_7a7fed;
L_7a7fc3: /* 7a7fc3: cmp cx, 0x61 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7fc7: jb 0x7a7fd7 */
  if (cf) goto L_7a7fd7;
L_7a7fc9: /* 7a7fc9: cmp cx, 0x66 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x66u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7fcd: ja 0x7a7fd7 */
  if ((!cf && !zf)) goto L_7a7fd7;
L_7a7fcf: /* 7a7fcf: movzx ecx, cx */
  ecx = (uint32_t)((ecx & 0xffffu));
/* 7a7fd2: sub ecx, 0x57 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x57u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a7fd5: jmp 0x7a7fed */
  goto L_7a7fed;
L_7a7fd7: /* 7a7fd7: cmp cx, 0x41 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 7a7fdb: jb 0x7a7feb */
  if (cf) goto L_7a7feb;
L_7a7fdd: /* 7a7fdd: cmp cx, 0x46 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x46u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7a7fe1: ja 0x7a7feb */
  if ((!cf && !zf)) goto L_7a7feb;
L_7a7fe3: /* 7a7fe3: movzx ecx, cx */
  ecx = (uint32_t)((ecx & 0xffffu));
/* 7a7fe6: sub ecx, 0x37 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7a7fe9: jmp 0x7a7fed */
  goto L_7a7fed;
L_7a7feb: /* 7a7feb: xor ecx, ecx */
  ecx = 0;
L_7a7fed: /* 7a7fed: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7a7ff0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7a7ff2: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7a7ff6: mov esi, eax */
  esi = eax;
/* 7a7ff8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7a7ffeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7a7ffe: mov ecx, eax */
  ecx = eax;
/* 7a8000: mov eax, ebp */
  eax = ebp;
/* 7a8002: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7a8003: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a8005: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7a8007: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 7a800c: jns 0x7a8013 */
  if (!sf) goto L_7a8013;
L_7a800e: /* 7a800e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7a800f: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7a8012: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_7a8013: /* 7a8013: movzx edx, word ptr [ecx + eax*2] */
  edx = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 7a8017: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7a8019: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a801a: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 7a801e: push 0xacd7d0 */
  { uint32_t v = 0xacd7d0u; esp -= 4; W32(esp, v); }
/* 7a8023: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8024: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8026: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a802a: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 7a802e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a802f: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7a8033: mov byte ptr [esp + 0x60], 4 */
  W8((uint32_t)(esp + 0x60u), 0x4u);
/* 7a8038: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7a803eu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7a803e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a803f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7a8043: mov byte ptr [esp + 0x5c], 5 */
  W8((uint32_t)(esp + 0x5cu), 0x5u);
/* 7a8048: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7a804eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7a804e: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 7a8052: mov byte ptr [esp + 0x58], 4 */
  W8((uint32_t)(esp + 0x58u), 0x4u);
/* 7a8057: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a805du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a805d: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 7a8061: mov byte ptr [esp + 0x58], 3 */
  W8((uint32_t)(esp + 0x58u), 0x3u);
/* 7a8066: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a806cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a806c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7a806f: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7a8072: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7a8076: mov eax, edi */
  eax = edi;
/* 7a8078: jne 0x7a7f61 */
  if (!zf) goto L_7a7f61;
L_7a807e: /* 7a807e: mov esi, dword ptr [esp + 0x60] */
  esi = R32((uint32_t)(esp + 0x60u));
/* 7a8082: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 7a8086: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a8087: mov ecx, esi */
  ecx = esi;
/* 7a8089: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7a808fu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7a808f: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7a8093: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7a809b: mov byte ptr [esp + 0x58], 2 */
  W8((uint32_t)(esp + 0x58u), 0x2u);
/* 7a80a0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a80a6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a80a6: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7a80aa: mov byte ptr [esp + 0x58], 1 */
  W8((uint32_t)(esp + 0x58u), 0x1u);
/* 7a80af: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a80b5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a80b5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7a80b9: mov byte ptr [esp + 0x58], 0 */
  W8((uint32_t)(esp + 0x58u), 0x0u);
/* 7a80be: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a80c4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a80c4: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7a80c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a80c9: mov eax, esi */
  eax = esi;
/* 7a80cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a80cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a80cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a80ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a80d5: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a80d8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a8160(void) {
  LOAD_REGS();
L_7a8160: /* 7a8160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a8161: mov ebp, esp */
  ebp = esp;
/* 7a8163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a8165: push 0x9ce8d0 */
  { uint32_t v = 0x9ce8d0u; esp -= 4; W32(esp, v); }
/* 7a816a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a8170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a8178: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a817b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a817c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a817d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a817e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a8181: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a8188: mov dword ptr [0xce9ec0], 0 */
  W32((uint32_t)(0xce9ec0u), 0x0u);
/* 7a8192: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x7a8198u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 7a8198: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a819b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a819c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a819d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a81a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a81a5: mov esp, ebp */
  esp = ebp;
/* 7a81a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a81a8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a81a9(void) {
  LOAD_REGS();
L_7a81a9: /* 7a81a9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a81ac: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a81b1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a81b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a81b5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a81b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a81bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a81bd(); return;
}

void f_7a81bd(void) {
  LOAD_REGS();
L_7a81bd: /* 7a81bd: push 0xa0bc14 */
  { uint32_t v = 0xa0bc14u; esp -= 4; W32(esp, v); }
/* 7a81c2: push 0xacddec */
  { uint32_t v = 0xacddecu; esp -= 4; W32(esp, v); }
/* 7a81c7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a81cdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a81cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a81d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a81d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a81d4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a81d9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a81d9: guest_badaddr(0x7a81d9); return;
}

void f_7a8200(void) {
  LOAD_REGS();
L_7a8200: /* 7a8200: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a8204: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 7a8207: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a8220(void) {
  LOAD_REGS();
L_7a8220: /* 7a8220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a8221: mov ebp, esp */
  ebp = esp;
/* 7a8223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a8225: push 0x9ce8e0 */
  { uint32_t v = 0x9ce8e0u; esp -= 4; W32(esp, v); }
/* 7a822a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a8230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a8238: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a823b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a823c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a823d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a823e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7a8241: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a8244: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a8247: mov esi, ecx */
  esi = ecx;
/* 7a8249: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a8250: jl 0x7a826a */
  if ((sf != of)) goto L_7a826a;
L_7a8252: /* 7a8252: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* 7a8257: push 0xacdea8 */
  { uint32_t v = 0xacdea8u; esp -= 4; W32(esp, v); }
/* 7a825c: push 0xacdeb8 */
  { uint32_t v = 0xacdeb8u; esp -= 4; W32(esp, v); }
/* 7a8261: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7a8267u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7a8267: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a826a: /* 7a826a: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 7a8270: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8272: jne 0x7a828c */
  if (!zf) goto L_7a828c;
L_7a8274: /* 7a8274: push 0xe6 */
  { uint32_t v = 0xe6u; esp -= 4; W32(esp, v); }
/* 7a8279: push 0xacdecc */
  { uint32_t v = 0xacdeccu; esp -= 4; W32(esp, v); }
/* 7a827e: push 0xacdedc */
  { uint32_t v = 0xacdedcu; esp -= 4; W32(esp, v); }
/* 7a8283: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7a8289u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7a8289: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a828c: /* 7a828c: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 7a8292: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 7a8295: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7a8296: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a8298: mov ecx, eax */
  ecx = eax;
/* 7a829a: mov eax, dword ptr [esi + edi*4 + 0x7c] */
  eax = R32((uint32_t)(esi + edi*4 + 0x7cu));
/* 7a829e: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 7a82a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a82a1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7a82a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a82a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a82a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a82ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a82af: mov esp, ebp */
  esp = ebp;
/* 7a82b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a82b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a82b5(void) {
  LOAD_REGS();
L_7a82b5: /* 7a82b5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a82b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a82bd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a82c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a82c1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a82c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a82c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a82c9(); return;
}

void f_7a82c9(void) {
  LOAD_REGS();
L_7a82c9: /* 7a82c9: push 0xa0bc3c */
  { uint32_t v = 0xa0bc3cu; esp -= 4; W32(esp, v); }
/* 7a82ce: push 0xacdeec */
  { uint32_t v = 0xacdeecu; esp -= 4; W32(esp, v); }
/* 7a82d3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a82d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a82d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a82dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a82de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a82e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a82e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a82e5: guest_badaddr(0x7a82e5); return;
}

void f_7a8330(void) {
  LOAD_REGS();
L_7a8330: /* 7a8330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a8331: mov esi, ecx */
  esi = ecx;
/* 7a8333: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7a8339u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7a8339: mov eax, esi */
  eax = esi;
/* 7a833b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a833c: ret  */
  esp += 4; SPILL(); return;
}

void f_7a8350(void) {
  LOAD_REGS();
L_7a8350: /* 7a8350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a8354: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8357: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7a835du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7a835d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a8370(void) {
  LOAD_REGS();
L_7a8370: /* 7a8370: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7a8374: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7a8378: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a837a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a837b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7a837eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a837e: ret  */
  esp += 4; SPILL(); return;
}

void f_7a8390(void) {
  LOAD_REGS();
L_7a8390: /* 7a8390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a8391: mov ebp, esp */
  ebp = esp;
/* 7a8393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a8395: push 0x9ce8f0 */
  { uint32_t v = 0x9ce8f0u; esp -= 4; W32(esp, v); }
/* 7a839a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a83a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a83a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a83a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a83ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a83ac: mov ebx, dword ptr [0xcfa33c] */
  ebx = R32((uint32_t)(0xcfa33cu));
/* 7a83b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a83b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a83b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a83b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a83b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a83ba: mov edi, ecx */
  edi = ecx;
/* 7a83bc: mov ecx, esp */
  ecx = esp;
/* 7a83be: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a83c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a83c3: push 0xacd7f8 */
  { uint32_t v = 0xacd7f8u; esp -= 4; W32(esp, v); }
/* 7a83c8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a83cf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a83d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a83d1: mov ecx, edi */
  ecx = edi;
/* 7a83d3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a83d9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a83d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a83da: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7a83dc: call dword ptr [0xcfa75c] */
  esp -= 4; W32(esp, 0x7a83e2u); SPILL(); f_4e10e1(); if (g_unwind) return; /* Core!??2UEnum@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a83e2: mov esi, eax */
  esi = eax;
/* 7a83e4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a83e7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a83e9: je 0x7a83ff */
  if (zf) goto L_7a83ff;
L_7a83eb: /* 7a83eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a83ed: mov ecx, esi */
  ecx = esi;
/* 7a83ef: call dword ptr [0xcfa758] */
  esp -= 4; W32(esp, 0x7a83f5u); SPILL(); f_4e3413(); if (g_unwind) return; /* Core!??0UEnum@@QAE@PAV0@@Z */ RELOAD();
/* 7a83f5: mov dword ptr [esi], 0xa0c040 */
  W32((uint32_t)(esi), 0xa0c040u);
/* 7a83fb: mov eax, esi */
  eax = esi;
/* 7a83fd: jmp 0x7a8401 */
  goto L_7a8401;
L_7a83ff: /* 7a83ff: xor eax, eax */
  eax = 0;
L_7a8401: /* 7a8401: lea esi, [eax + 0x34] */
  esi = (uint32_t)(eax + 0x34u);
/* 7a8404: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8406: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8408: mov ecx, esi */
  ecx = esi;
/* 7a840a: mov dword ptr [edi + 0xac], eax */
  W32((uint32_t)(edi + 0xacu), eax);
/* 7a8410: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a8416u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a8416: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a8418: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7a841b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a841d: je 0x7a8428 */
  if (zf) goto L_7a8428;
L_7a841f: /* 7a841f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8421: push 0xacd818 */
  { uint32_t v = 0xacd818u; esp -= 4; W32(esp, v); }
/* 7a8426: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8428u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a8428: /* 7a8428: mov esi, dword ptr [edi + 0xac] */
  esi = R32((uint32_t)(edi + 0xacu));
/* 7a842e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8430: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a8433: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8435: mov ecx, esi */
  ecx = esi;
/* 7a8437: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a843du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a843d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a843f: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7a8442: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8444: je 0x7a844f */
  if (zf) goto L_7a844f;
L_7a8446: /* 7a8446: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8448: push 0xacd82c */
  { uint32_t v = 0xacd82cu; esp -= 4; W32(esp, v); }
/* 7a844d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a844fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a844f: /* 7a844f: mov esi, dword ptr [edi + 0xac] */
  esi = R32((uint32_t)(edi + 0xacu));
/* 7a8455: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8457: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a845a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a845c: mov ecx, esi */
  ecx = esi;
/* 7a845e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a8464u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a8464: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a8466: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7a8469: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a846b: je 0x7a8476 */
  if (zf) goto L_7a8476;
L_7a846d: /* 7a846d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a846f: push 0xacd840 */
  { uint32_t v = 0xacd840u; esp -= 4; W32(esp, v); }
/* 7a8474: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8476u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a8476: /* 7a8476: mov esi, dword ptr [edi + 0xac] */
  esi = R32((uint32_t)(edi + 0xacu));
/* 7a847c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a847e: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a8481: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8483: mov ecx, esi */
  ecx = esi;
/* 7a8485: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a848bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a848b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a848d: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7a8490: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8492: je 0x7a849d */
  if (zf) goto L_7a849d;
L_7a8494: /* 7a8494: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8496: push 0xacd84c */
  { uint32_t v = 0xacd84cu; esp -= 4; W32(esp, v); }
/* 7a849b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a849du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a849d: /* 7a849d: mov esi, dword ptr [edi + 0xac] */
  esi = R32((uint32_t)(edi + 0xacu));
/* 7a84a3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a84a5: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a84a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a84aa: mov ecx, esi */
  ecx = esi;
/* 7a84ac: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a84b2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a84b2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a84b4: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7a84b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a84b9: je 0x7a84c4 */
  if (zf) goto L_7a84c4;
L_7a84bb: /* 7a84bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a84bd: push 0xacd85c */
  { uint32_t v = 0xacd85cu; esp -= 4; W32(esp, v); }
/* 7a84c2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a84c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a84c4: /* 7a84c4: mov esi, dword ptr [edi + 0xac] */
  esi = R32((uint32_t)(edi + 0xacu));
/* 7a84ca: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a84cc: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a84cf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a84d1: mov ecx, esi */
  ecx = esi;
/* 7a84d3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a84d9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a84d9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a84db: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7a84de: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a84e0: je 0x7a84eb */
  if (zf) goto L_7a84eb;
L_7a84e2: /* 7a84e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a84e4: push 0xacd86c */
  { uint32_t v = 0xacd86cu; esp -= 4; W32(esp, v); }
/* 7a84e9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a84ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a84eb: /* 7a84eb: mov esi, dword ptr [edi + 0xac] */
  esi = R32((uint32_t)(edi + 0xacu));
/* 7a84f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a84f3: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a84f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a84f8: mov ecx, esi */
  ecx = esi;
/* 7a84fa: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a8500u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a8500: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a8502: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7a8505: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8507: je 0x7a8512 */
  if (zf) goto L_7a8512;
L_7a8509: /* 7a8509: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a850b: push 0xacd878 */
  { uint32_t v = 0xacd878u; esp -= 4; W32(esp, v); }
/* 7a8510: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8512u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a8512: /* 7a8512: mov esi, dword ptr [edi + 0xac] */
  esi = R32((uint32_t)(edi + 0xacu));
/* 7a8518: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a851a: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a851d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a851f: mov ecx, esi */
  ecx = esi;
/* 7a8521: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a8527u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a8527: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7a8529: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7a852c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a852e: je 0x7a8539 */
  if (zf) goto L_7a8539;
L_7a8530: /* 7a8530: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8532: push 0xacd880 */
  { uint32_t v = 0xacd880u; esp -= 4; W32(esp, v); }
/* 7a8537: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8539u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a8539: /* 7a8539: mov esi, dword ptr [edi + 0xac] */
  esi = R32((uint32_t)(edi + 0xacu));
/* 7a853f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8541: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a8544: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8546: mov ecx, esi */
  ecx = esi;
/* 7a8548: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a854eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a854e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a8550: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7a8553: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8555: je 0x7a8560 */
  if (zf) goto L_7a8560;
L_7a8557: /* 7a8557: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8559: push 0xacd890 */
  { uint32_t v = 0xacd890u; esp -= 4; W32(esp, v); }
/* 7a855e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a8560: /* 7a8560: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8562: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8563: mov ecx, esp */
  ecx = esp;
/* 7a8565: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8568: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a856a: push 0xacd8a4 */
  { uint32_t v = 0xacd8a4u; esp -= 4; W32(esp, v); }
/* 7a856f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8571u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8571: mov ecx, edi */
  ecx = edi;
/* 7a8573: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8579u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8579: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a857a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a857c: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x7a8582u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8582: mov esi, eax */
  esi = eax;
/* 7a8584: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8587: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8589: je 0x7a85a7 */
  if (zf) goto L_7a85a7;
L_7a858b: /* 7a858b: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8590: push 0xacd8c8 */
  { uint32_t v = 0xacd8c8u; esp -= 4; W32(esp, v); }
/* 7a8595: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 7a8597: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8599: mov ecx, esi */
  ecx = esi;
/* 7a859b: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x7a85a1u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a85a1: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_7a85a7: /* 7a85a7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a85a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a85aa: mov ecx, esp */
  ecx = esp;
/* 7a85ac: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a85af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a85b1: push 0xacd8d8 */
  { uint32_t v = 0xacd8d8u; esp -= 4; W32(esp, v); }
/* 7a85b6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a85b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a85b8: mov ecx, edi */
  ecx = edi;
/* 7a85ba: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a85c0u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a85c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a85c1: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a85c3: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x7a85c9u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a85c9: mov esi, eax */
  esi = eax;
/* 7a85cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a85ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a85d0: je 0x7a85ee */
  if (zf) goto L_7a85ee;
L_7a85d2: /* 7a85d2: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a85d7: push 0xacd8fc */
  { uint32_t v = 0xacd8fcu; esp -= 4; W32(esp, v); }
/* 7a85dc: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 7a85de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a85e0: mov ecx, esi */
  ecx = esi;
/* 7a85e2: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x7a85e8u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a85e8: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_7a85ee: /* 7a85ee: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a85f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a85f1: mov ecx, esp */
  ecx = esp;
/* 7a85f3: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a85f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a85f8: push 0xacd90c */
  { uint32_t v = 0xacd90cu; esp -= 4; W32(esp, v); }
/* 7a85fd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a85ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a85ff: mov ecx, edi */
  ecx = edi;
/* 7a8601: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8607u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8608: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a860a: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x7a8610u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8610: mov esi, eax */
  esi = eax;
/* 7a8612: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8615: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8617: je 0x7a8635 */
  if (zf) goto L_7a8635;
L_7a8619: /* 7a8619: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a861e: push 0xacd934 */
  { uint32_t v = 0xacd934u; esp -= 4; W32(esp, v); }
/* 7a8623: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7a8625: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8627: mov ecx, esi */
  ecx = esi;
/* 7a8629: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x7a862fu); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a862f: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_7a8635: /* 7a8635: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8637: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8638: mov ecx, esp */
  ecx = esp;
/* 7a863a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a863d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a863f: push 0xacd944 */
  { uint32_t v = 0xacd944u; esp -= 4; W32(esp, v); }
/* 7a8644: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8646u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8646: mov ecx, edi */
  ecx = edi;
/* 7a8648: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a864eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a864e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a864f: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a8651: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x7a8657u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8657: mov esi, eax */
  esi = eax;
/* 7a8659: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a865c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a865e: je 0x7a867c */
  if (zf) goto L_7a867c;
L_7a8660: /* 7a8660: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8665: push 0xacd96c */
  { uint32_t v = 0xacd96cu; esp -= 4; W32(esp, v); }
/* 7a866a: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a866c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a866e: mov ecx, esi */
  ecx = esi;
/* 7a8670: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x7a8676u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8676: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_7a867c: /* 7a867c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a867e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a867f: mov ecx, esp */
  ecx = esp;
/* 7a8681: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8684: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8686: push 0xacd97c */
  { uint32_t v = 0xacd97cu; esp -= 4; W32(esp, v); }
/* 7a868b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a868du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a868d: mov ecx, edi */
  ecx = edi;
/* 7a868f: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8695u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8696: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a8698: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x7a869eu); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a869e: mov esi, eax */
  esi = eax;
/* 7a86a0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a86a3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a86a5: je 0x7a86c3 */
  if (zf) goto L_7a86c3;
L_7a86a7: /* 7a86a7: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a86ac: push 0xacd994 */
  { uint32_t v = 0xacd994u; esp -= 4; W32(esp, v); }
/* 7a86b1: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a86b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a86b5: mov ecx, esi */
  ecx = esi;
/* 7a86b7: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x7a86bdu); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a86bd: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_7a86c3: /* 7a86c3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a86c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a86c6: mov ecx, esp */
  ecx = esp;
/* 7a86c8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a86cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a86cd: push 0xacd9a4 */
  { uint32_t v = 0xacd9a4u; esp -= 4; W32(esp, v); }
/* 7a86d2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a86d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a86d4: mov ecx, edi */
  ecx = edi;
/* 7a86d6: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a86dcu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a86dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a86dd: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a86df: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x7a86e5u); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a86e5: mov esi, eax */
  esi = eax;
/* 7a86e7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a86ea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a86ec: je 0x7a870a */
  if (zf) goto L_7a870a;
L_7a86ee: /* 7a86ee: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a86f3: push 0xacd9b8 */
  { uint32_t v = 0xacd9b8u; esp -= 4; W32(esp, v); }
/* 7a86f8: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 7a86fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a86fc: mov ecx, esi */
  ecx = esi;
/* 7a86fe: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x7a8704u); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8704: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_7a870a: /* 7a870a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a870c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a870d: mov ecx, esp */
  ecx = esp;
/* 7a870f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8712: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8714: push 0xacd9c8 */
  { uint32_t v = 0xacd9c8u; esp -= 4; W32(esp, v); }
/* 7a8719: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a871bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a871b: mov ecx, edi */
  ecx = edi;
/* 7a871d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8723u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8723: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8724: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a8726: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x7a872cu); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a872c: mov esi, eax */
  esi = eax;
/* 7a872e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8731: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8733: je 0x7a8751 */
  if (zf) goto L_7a8751;
L_7a8735: /* 7a8735: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a873a: push 0xacd9d4 */
  { uint32_t v = 0xacd9d4u; esp -= 4; W32(esp, v); }
/* 7a873f: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 7a8741: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8743: mov ecx, esi */
  ecx = esi;
/* 7a8745: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x7a874bu); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a874b: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_7a8751: /* 7a8751: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8753: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8754: mov ecx, esp */
  ecx = esp;
/* 7a8756: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8759: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a875b: push 0xacd9e4 */
  { uint32_t v = 0xacd9e4u; esp -= 4; W32(esp, v); }
/* 7a8760: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8762u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8762: mov ecx, edi */
  ecx = edi;
/* 7a8764: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a876au); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a876a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a876b: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a876d: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8773u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8773: mov esi, eax */
  esi = eax;
/* 7a8775: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8778: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a877a: je 0x7a8798 */
  if (zf) goto L_7a8798;
L_7a877c: /* 7a877c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8781: push 0xacda00 */
  { uint32_t v = 0xacda00u; esp -= 4; W32(esp, v); }
/* 7a8786: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7a8788: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a878a: mov ecx, esi */
  ecx = esi;
/* 7a878c: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8792u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8792: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8798: /* 7a8798: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a879a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a879b: mov ecx, esp */
  ecx = esp;
/* 7a879d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a87a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a87a2: push 0xacda10 */
  { uint32_t v = 0xacda10u; esp -= 4; W32(esp, v); }
/* 7a87a7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a87a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a87a9: mov ecx, edi */
  ecx = edi;
/* 7a87ab: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a87b1u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a87b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a87b2: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a87b4: call dword ptr [0xcfa73c] */
  esp -= 4; W32(esp, 0x7a87bau); SPILL(); f_4e3fe4(); if (g_unwind) return; /* Core!??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a87ba: mov esi, eax */
  esi = eax;
/* 7a87bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a87bf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a87c1: je 0x7a87e9 */
  if (zf) goto L_7a87e9;
L_7a87c3: /* 7a87c3: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 7a87c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a87ca: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a87cf: push 0xacda38 */
  { uint32_t v = 0xacda38u; esp -= 4; W32(esp, v); }
/* 7a87d4: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 7a87d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a87db: mov ecx, esi */
  ecx = esi;
/* 7a87dd: call dword ptr [0xcfa738] */
  esp -= 4; W32(esp, 0x7a87e3u); SPILL(); f_4e338c(); if (g_unwind) return; /* Core!??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */ RELOAD();
/* 7a87e3: mov dword ptr [esi], 0xa0bcc0 */
  W32((uint32_t)(esi), 0xa0bcc0u);
L_7a87e9: /* 7a87e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a87eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a87ec: mov ecx, esp */
  ecx = esp;
/* 7a87ee: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a87f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a87f3: push 0xacda48 */
  { uint32_t v = 0xacda48u; esp -= 4; W32(esp, v); }
/* 7a87f8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a87fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a87fa: mov ecx, edi */
  ecx = edi;
/* 7a87fc: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8802u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8803: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8805: call dword ptr [0xcfa73c] */
  esp -= 4; W32(esp, 0x7a880bu); SPILL(); f_4e3fe4(); if (g_unwind) return; /* Core!??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a880b: mov esi, eax */
  esi = eax;
/* 7a880d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8812: je 0x7a883a */
  if (zf) goto L_7a883a;
L_7a8814: /* 7a8814: mov eax, dword ptr [edi + 0xac] */
  eax = R32((uint32_t)(edi + 0xacu));
/* 7a881a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a881b: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8820: push 0xacda78 */
  { uint32_t v = 0xacda78u; esp -= 4; W32(esp, v); }
/* 7a8825: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 7a882a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a882c: mov ecx, esi */
  ecx = esi;
/* 7a882e: call dword ptr [0xcfa738] */
  esp -= 4; W32(esp, 0x7a8834u); SPILL(); f_4e338c(); if (g_unwind) return; /* Core!??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */ RELOAD();
/* 7a8834: mov dword ptr [esi], 0xa0bcc0 */
  W32((uint32_t)(esi), 0xa0bcc0u);
L_7a883a: /* 7a883a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a883c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a883d: mov ecx, esp */
  ecx = esp;
/* 7a883f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8842: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8844: push 0xacda88 */
  { uint32_t v = 0xacda88u; esp -= 4; W32(esp, v); }
/* 7a8849: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a884bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a884b: mov ecx, edi */
  ecx = edi;
/* 7a884d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8853u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8853: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8854: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8856: call dword ptr [0xcfa73c] */
  esp -= 4; W32(esp, 0x7a885cu); SPILL(); f_4e3fe4(); if (g_unwind) return; /* Core!??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a885c: mov esi, eax */
  esi = eax;
/* 7a885e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8861: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8863: je 0x7a888b */
  if (zf) goto L_7a888b;
L_7a8865: /* 7a8865: mov ecx, dword ptr [edi + 0xac] */
  ecx = R32((uint32_t)(edi + 0xacu));
/* 7a886b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a886c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8871: push 0xacdab8 */
  { uint32_t v = 0xacdab8u; esp -= 4; W32(esp, v); }
/* 7a8876: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 7a887b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a887d: mov ecx, esi */
  ecx = esi;
/* 7a887f: call dword ptr [0xcfa738] */
  esp -= 4; W32(esp, 0x7a8885u); SPILL(); f_4e338c(); if (g_unwind) return; /* Core!??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */ RELOAD();
/* 7a8885: mov dword ptr [esi], 0xa0bcc0 */
  W32((uint32_t)(esi), 0xa0bcc0u);
L_7a888b: /* 7a888b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a888d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a888e: mov ecx, esp */
  ecx = esp;
/* 7a8890: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8893: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8895: push 0xacdac8 */
  { uint32_t v = 0xacdac8u; esp -= 4; W32(esp, v); }
/* 7a889a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a889cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a889c: mov ecx, edi */
  ecx = edi;
/* 7a889e: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a88a4u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a88a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a88a5: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a88a7: call dword ptr [0xcfa73c] */
  esp -= 4; W32(esp, 0x7a88adu); SPILL(); f_4e3fe4(); if (g_unwind) return; /* Core!??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a88ad: mov esi, eax */
  esi = eax;
/* 7a88af: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a88b2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a88b4: je 0x7a88dc */
  if (zf) goto L_7a88dc;
L_7a88b6: /* 7a88b6: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 7a88bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a88bd: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a88c2: push 0xacdaf4 */
  { uint32_t v = 0xacdaf4u; esp -= 4; W32(esp, v); }
/* 7a88c7: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 7a88cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a88ce: mov ecx, esi */
  ecx = esi;
/* 7a88d0: call dword ptr [0xcfa738] */
  esp -= 4; W32(esp, 0x7a88d6u); SPILL(); f_4e338c(); if (g_unwind) return; /* Core!??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */ RELOAD();
/* 7a88d6: mov dword ptr [esi], 0xa0bcc0 */
  W32((uint32_t)(esi), 0xa0bcc0u);
L_7a88dc: /* 7a88dc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a88de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a88df: mov ecx, esp */
  ecx = esp;
/* 7a88e1: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a88e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a88e6: push 0xacdb04 */
  { uint32_t v = 0xacdb04u; esp -= 4; W32(esp, v); }
/* 7a88eb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a88edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a88ed: mov ecx, edi */
  ecx = edi;
/* 7a88ef: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a88f5u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a88f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a88f6: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a88f8: call dword ptr [0xcfa73c] */
  esp -= 4; W32(esp, 0x7a88feu); SPILL(); f_4e3fe4(); if (g_unwind) return; /* Core!??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a88fe: mov esi, eax */
  esi = eax;
/* 7a8900: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8903: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8905: je 0x7a892d */
  if (zf) goto L_7a892d;
L_7a8907: /* 7a8907: mov eax, dword ptr [edi + 0xac] */
  eax = R32((uint32_t)(edi + 0xacu));
/* 7a890d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a890e: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8913: push 0xacdb34 */
  { uint32_t v = 0xacdb34u; esp -= 4; W32(esp, v); }
/* 7a8918: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 7a891d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a891f: mov ecx, esi */
  ecx = esi;
/* 7a8921: call dword ptr [0xcfa738] */
  esp -= 4; W32(esp, 0x7a8927u); SPILL(); f_4e338c(); if (g_unwind) return; /* Core!??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */ RELOAD();
/* 7a8927: mov dword ptr [esi], 0xa0bcc0 */
  W32((uint32_t)(esi), 0xa0bcc0u);
L_7a892d: /* 7a892d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a892f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8930: mov ecx, esp */
  ecx = esp;
/* 7a8932: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8935: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8937: push 0xacdb44 */
  { uint32_t v = 0xacdb44u; esp -= 4; W32(esp, v); }
/* 7a893c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a893eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a893e: mov ecx, edi */
  ecx = edi;
/* 7a8940: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8946u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8947: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8949: call dword ptr [0xcfa73c] */
  esp -= 4; W32(esp, 0x7a894fu); SPILL(); f_4e3fe4(); if (g_unwind) return; /* Core!??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a894f: mov esi, eax */
  esi = eax;
/* 7a8951: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8954: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8956: je 0x7a897e */
  if (zf) goto L_7a897e;
L_7a8958: /* 7a8958: mov ecx, dword ptr [edi + 0xac] */
  ecx = R32((uint32_t)(edi + 0xacu));
/* 7a895e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a895f: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8964: push 0xacdb74 */
  { uint32_t v = 0xacdb74u; esp -= 4; W32(esp, v); }
/* 7a8969: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 7a896e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8970: mov ecx, esi */
  ecx = esi;
/* 7a8972: call dword ptr [0xcfa738] */
  esp -= 4; W32(esp, 0x7a8978u); SPILL(); f_4e338c(); if (g_unwind) return; /* Core!??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */ RELOAD();
/* 7a8978: mov dword ptr [esi], 0xa0bcc0 */
  W32((uint32_t)(esi), 0xa0bcc0u);
L_7a897e: /* 7a897e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8980: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8981: mov ecx, esp */
  ecx = esp;
/* 7a8983: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8986: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8988: push 0xacdb84 */
  { uint32_t v = 0xacdb84u; esp -= 4; W32(esp, v); }
/* 7a898d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a898fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a898f: mov ecx, edi */
  ecx = edi;
/* 7a8991: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8997u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8998: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a899a: call dword ptr [0xcfa73c] */
  esp -= 4; W32(esp, 0x7a89a0u); SPILL(); f_4e3fe4(); if (g_unwind) return; /* Core!??2UByteProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a89a0: mov esi, eax */
  esi = eax;
/* 7a89a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a89a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a89a7: je 0x7a89cf */
  if (zf) goto L_7a89cf;
L_7a89a9: /* 7a89a9: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 7a89af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a89b0: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a89b5: push 0xacdbb0 */
  { uint32_t v = 0xacdbb0u; esp -= 4; W32(esp, v); }
/* 7a89ba: push 0x98 */
  { uint32_t v = 0x98u; esp -= 4; W32(esp, v); }
/* 7a89bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a89c1: mov ecx, esi */
  ecx = esi;
/* 7a89c3: call dword ptr [0xcfa738] */
  esp -= 4; W32(esp, 0x7a89c9u); SPILL(); f_4e338c(); if (g_unwind) return; /* Core!??0UByteProperty@@QAE@W4ECppProperty@@HPBGKPAVUEnum@@@Z */ RELOAD();
/* 7a89c9: mov dword ptr [esi], 0xa0bcc0 */
  W32((uint32_t)(esi), 0xa0bcc0u);
L_7a89cf: /* 7a89cf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a89d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a89d2: mov ecx, esp */
  ecx = esp;
/* 7a89d4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a89d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a89d9: push 0xacdbc0 */
  { uint32_t v = 0xacdbc0u; esp -= 4; W32(esp, v); }
/* 7a89de: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a89e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a89e0: mov ecx, edi */
  ecx = edi;
/* 7a89e2: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a89e8u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a89e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a89e9: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a89eb: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a89f1u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a89f1: mov esi, eax */
  esi = eax;
/* 7a89f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a89f6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a89f8: je 0x7a8a16 */
  if (zf) goto L_7a8a16;
L_7a89fa: /* 7a89fa: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a89ff: push 0xacdbdc */
  { uint32_t v = 0xacdbdcu; esp -= 4; W32(esp, v); }
/* 7a8a04: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7a8a06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8a08: mov ecx, esi */
  ecx = esi;
/* 7a8a0a: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8a10u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8a10: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8a16: /* 7a8a16: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8a18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8a19: mov ecx, esp */
  ecx = esp;
/* 7a8a1b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8a1e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8a20: push 0xacdbec */
  { uint32_t v = 0xacdbecu; esp -= 4; W32(esp, v); }
/* 7a8a25: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8a27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8a27: mov ecx, edi */
  ecx = edi;
/* 7a8a29: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8a2fu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8a2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8a30: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8a32: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8a38u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8a38: mov esi, eax */
  esi = eax;
/* 7a8a3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8a3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8a3f: je 0x7a8a5d */
  if (zf) goto L_7a8a5d;
L_7a8a41: /* 7a8a41: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8a46: push 0xacdc04 */
  { uint32_t v = 0xacdc04u; esp -= 4; W32(esp, v); }
/* 7a8a4b: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7a8a4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8a4f: mov ecx, esi */
  ecx = esi;
/* 7a8a51: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8a57u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8a57: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8a5d: /* 7a8a5d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8a5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8a60: mov ecx, esp */
  ecx = esp;
/* 7a8a62: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8a65: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8a67: push 0xacdc14 */
  { uint32_t v = 0xacdc14u; esp -= 4; W32(esp, v); }
/* 7a8a6c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8a6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8a6e: mov ecx, edi */
  ecx = edi;
/* 7a8a70: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8a76u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8a76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8a77: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a8a79: call dword ptr [0xcfa74c] */
  esp -= 4; W32(esp, 0x7a8a7fu); SPILL(); f_4e2829(); if (g_unwind) return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8a7f: mov esi, eax */
  esi = eax;
/* 7a8a81: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8a84: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8a86: je 0x7a8aa7 */
  if (zf) goto L_7a8aa7;
L_7a8a88: /* 7a8a88: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8a8d: push 0xacdc3c */
  { uint32_t v = 0xacdc3cu; esp -= 4; W32(esp, v); }
/* 7a8a92: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 7a8a97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8a99: mov ecx, esi */
  ecx = esi;
/* 7a8a9b: call dword ptr [0xcfa748] */
  esp -= 4; W32(esp, 0x7a8aa1u); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8aa1: mov dword ptr [esi], 0xa0be80 */
  W32((uint32_t)(esi), 0xa0be80u);
L_7a8aa7: /* 7a8aa7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8aa9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8aaa: mov ecx, esp */
  ecx = esp;
/* 7a8aac: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8aaf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8ab1: push 0xacdc4c */
  { uint32_t v = 0xacdc4cu; esp -= 4; W32(esp, v); }
/* 7a8ab6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8ab8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8ab8: mov ecx, edi */
  ecx = edi;
/* 7a8aba: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8ac0u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8ac1: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8ac3: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8ac9u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8ac9: mov esi, eax */
  esi = eax;
/* 7a8acb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8ace: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8ad0: je 0x7a8aee */
  if (zf) goto L_7a8aee;
L_7a8ad2: /* 7a8ad2: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8ad7: push 0xacdc5c */
  { uint32_t v = 0xacdc5cu; esp -= 4; W32(esp, v); }
/* 7a8adc: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7a8ade: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8ae0: mov ecx, esi */
  ecx = esi;
/* 7a8ae2: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8ae8u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8ae8: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8aee: /* 7a8aee: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8af0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8af1: mov ecx, esp */
  ecx = esp;
/* 7a8af3: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8af6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8af8: push 0xacdc6c */
  { uint32_t v = 0xacdc6cu; esp -= 4; W32(esp, v); }
/* 7a8afd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8affu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8aff: mov ecx, edi */
  ecx = edi;
/* 7a8b01: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8b07u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8b07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8b08: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8b0a: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8b10u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8b10: mov esi, eax */
  esi = eax;
/* 7a8b12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8b15: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8b17: je 0x7a8b35 */
  if (zf) goto L_7a8b35;
L_7a8b19: /* 7a8b19: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8b1e: push 0xacdc8c */
  { uint32_t v = 0xacdc8cu; esp -= 4; W32(esp, v); }
/* 7a8b23: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7a8b25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8b27: mov ecx, esi */
  ecx = esi;
/* 7a8b29: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8b2fu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8b2f: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8b35: /* 7a8b35: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8b37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8b38: mov ecx, esp */
  ecx = esp;
/* 7a8b3a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8b3d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8b3f: push 0xacdc9c */
  { uint32_t v = 0xacdc9cu; esp -= 4; W32(esp, v); }
/* 7a8b44: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8b46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8b46: mov ecx, edi */
  ecx = edi;
/* 7a8b48: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8b4eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8b4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8b4f: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8b51: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8b57u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8b57: mov esi, eax */
  esi = eax;
/* 7a8b59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8b5c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8b5e: je 0x7a8b7c */
  if (zf) goto L_7a8b7c;
L_7a8b60: /* 7a8b60: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8b65: push 0xacdcb8 */
  { uint32_t v = 0xacdcb8u; esp -= 4; W32(esp, v); }
/* 7a8b6a: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7a8b6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8b6e: mov ecx, esi */
  ecx = esi;
/* 7a8b70: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8b76u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8b76: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8b7c: /* 7a8b7c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8b7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8b7f: mov ecx, esp */
  ecx = esp;
/* 7a8b81: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8b84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8b86: push 0xacdcc8 */
  { uint32_t v = 0xacdcc8u; esp -= 4; W32(esp, v); }
/* 7a8b8b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8b8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8b8d: mov ecx, edi */
  ecx = edi;
/* 7a8b8f: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8b95u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8b95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8b96: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8b98: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8b9eu); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8b9e: mov esi, eax */
  esi = eax;
/* 7a8ba0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8ba3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8ba5: je 0x7a8bc3 */
  if (zf) goto L_7a8bc3;
L_7a8ba7: /* 7a8ba7: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8bac: push 0xacdcd8 */
  { uint32_t v = 0xacdcd8u; esp -= 4; W32(esp, v); }
/* 7a8bb1: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7a8bb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8bb5: mov ecx, esi */
  ecx = esi;
/* 7a8bb7: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8bbdu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8bbd: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8bc3: /* 7a8bc3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8bc6: mov ecx, esp */
  ecx = esp;
/* 7a8bc8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8bcb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8bcd: push 0xacdce8 */
  { uint32_t v = 0xacdce8u; esp -= 4; W32(esp, v); }
/* 7a8bd2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8bd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8bd4: mov ecx, edi */
  ecx = edi;
/* 7a8bd6: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8bdcu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8bdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8bdd: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8bdf: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8be5u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8be5: mov esi, eax */
  esi = eax;
/* 7a8be7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8bea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8bec: je 0x7a8c0a */
  if (zf) goto L_7a8c0a;
L_7a8bee: /* 7a8bee: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8bf3: push 0xacdd00 */
  { uint32_t v = 0xacdd00u; esp -= 4; W32(esp, v); }
/* 7a8bf8: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 7a8bfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8bfc: mov ecx, esi */
  ecx = esi;
/* 7a8bfe: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8c04u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8c04: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8c0a: /* 7a8c0a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8c0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8c0d: mov ecx, esp */
  ecx = esp;
/* 7a8c0f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8c12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8c14: push 0xacdd10 */
  { uint32_t v = 0xacdd10u; esp -= 4; W32(esp, v); }
/* 7a8c19: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8c1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8c1b: mov ecx, edi */
  ecx = edi;
/* 7a8c1d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8c23u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8c24: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8c26: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8c2cu); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8c2c: mov esi, eax */
  esi = eax;
/* 7a8c2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8c31: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8c33: je 0x7a8c51 */
  if (zf) goto L_7a8c51;
L_7a8c35: /* 7a8c35: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8c3a: push 0xacdd28 */
  { uint32_t v = 0xacdd28u; esp -= 4; W32(esp, v); }
/* 7a8c3f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7a8c41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8c43: mov ecx, esi */
  ecx = esi;
/* 7a8c45: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8c4bu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8c4b: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8c51: /* 7a8c51: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8c54: mov ecx, esp */
  ecx = esp;
/* 7a8c56: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8c59: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8c5b: push 0xacdd38 */
  { uint32_t v = 0xacdd38u; esp -= 4; W32(esp, v); }
/* 7a8c60: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8c62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8c62: mov ecx, edi */
  ecx = edi;
/* 7a8c64: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8c6au); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8c6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8c6b: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a8c6d: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a8c73u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8c73: mov esi, eax */
  esi = eax;
/* 7a8c75: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8c78: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8c7a: je 0x7a8c98 */
  if (zf) goto L_7a8c98;
L_7a8c7c: /* 7a8c7c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8c81: push 0xacdd64 */
  { uint32_t v = 0xacdd64u; esp -= 4; W32(esp, v); }
/* 7a8c86: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 7a8c88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8c8a: mov ecx, esi */
  ecx = esi;
/* 7a8c8c: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a8c92u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8c92: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a8c98: /* 7a8c98: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8c9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8c9b: mov ecx, esp */
  ecx = esp;
/* 7a8c9d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8ca0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8ca2: push 0xacdd74 */
  { uint32_t v = 0xacdd74u; esp -= 4; W32(esp, v); }
/* 7a8ca7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8ca9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8ca9: mov ecx, edi */
  ecx = edi;
/* 7a8cab: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8cb1u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8cb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8cb2: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a8cb4: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x7a8cbau); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8cba: mov esi, eax */
  esi = eax;
/* 7a8cbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8cbf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8cc1: je 0x7a8ce2 */
  if (zf) goto L_7a8ce2;
L_7a8cc3: /* 7a8cc3: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8cc8: push 0xacdd98 */
  { uint32_t v = 0xacdd98u; esp -= 4; W32(esp, v); }
/* 7a8ccd: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 7a8cd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8cd4: mov ecx, esi */
  ecx = esi;
/* 7a8cd6: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x7a8cdcu); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8cdc: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_7a8ce2: /* 7a8ce2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a8ce4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8ce5: mov ecx, esp */
  ecx = esp;
/* 7a8ce7: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a8cea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a8cec: push 0xacdda8 */
  { uint32_t v = 0xacdda8u; esp -= 4; W32(esp, v); }
/* 7a8cf1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7a8cf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a8cf3: mov ecx, edi */
  ecx = edi;
/* 7a8cf5: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a8cfbu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a8cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a8cfc: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a8cfe: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x7a8d04u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a8d04: mov esi, eax */
  esi = eax;
/* 7a8d06: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8d09: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8d0b: je 0x7a8d2c */
  if (zf) goto L_7a8d2c;
L_7a8d0d: /* 7a8d0d: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a8d12: push 0xacddd4 */
  { uint32_t v = 0xacddd4u; esp -= 4; W32(esp, v); }
/* 7a8d17: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 7a8d1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8d1e: mov ecx, esi */
  ecx = esi;
/* 7a8d20: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x7a8d26u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a8d26: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_7a8d2c: /* 7a8d2c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a8d2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a8d30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a8d31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a8d38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a8d39: mov esp, ebp */
  esp = ebp;
/* 7a8d3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a8d3c: ret  */
  esp += 4; SPILL(); return;
}

void f_7a8d3d(void) {
  LOAD_REGS();
L_7a8d3d: /* 7a8d3d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a8d40: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a8d45: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a8d48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a8d49: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a8d4c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a8d51u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a8d51(); return;
}

void f_7a8d51(void) {
  LOAD_REGS();
L_7a8d51: /* 7a8d51: push 0xa0bc7c */
  { uint32_t v = 0xa0bc7cu; esp -= 4; W32(esp, v); }
/* 7a8d56: push 0xacdde4 */
  { uint32_t v = 0xacdde4u; esp -= 4; W32(esp, v); }
/* 7a8d5b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a8d61u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a8d61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a8d64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a8d68: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a8d6du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a8d6d: guest_badaddr(0x7a8d6d); return;
}

void f_7a8ff0(void) {
  LOAD_REGS();
L_7a8ff0: /* 7a8ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a8ff1: mov esi, ecx */
  esi = ecx;
/* 7a8ff3: call dword ptr [0xcfa760] */
  esp -= 4; W32(esp, 0x7a8ff9u); SPILL(); f_4e2e69(); if (g_unwind) return; /* Core!??1UEnum@@UAE@XZ */ RELOAD();
/* 7a8ff9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a8ffe: je 0x7a900c */
  if (zf) goto L_7a900c;
L_7a9000: /* 7a9000: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7a9002: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9003: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7a9009u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7a9009: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a900c: /* 7a900c: mov eax, esi */
  eax = esi;
/* 7a900e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a900f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a9030(void) {
  LOAD_REGS();
L_7a9030: /* 7a9030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9031: mov esi, ecx */
  esi = ecx;
/* 7a9033: call dword ptr [0xcfa764] */
  esp -= 4; W32(esp, 0x7a9039u); SPILL(); f_4e2de7(); if (g_unwind) return; /* Core!??1UByteProperty@@UAE@XZ */ RELOAD();
/* 7a9039: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a903e: je 0x7a904c */
  if (zf) goto L_7a904c;
L_7a9040: /* 7a9040: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9042: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9043: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7a9049u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7a9049: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a904c: /* 7a904c: mov eax, esi */
  eax = esi;
/* 7a904e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a904f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a9070(void) {
  LOAD_REGS();
L_7a9070: /* 7a9070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9071: mov esi, ecx */
  esi = ecx;
/* 7a9073: call dword ptr [0xcfa768] */
  esp -= 4; W32(esp, 0x7a9079u); SPILL(); f_4e2fd1(); if (g_unwind) return; /* Core!??1UIntProperty@@UAE@XZ */ RELOAD();
/* 7a9079: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a907e: je 0x7a908c */
  if (zf) goto L_7a908c;
L_7a9080: /* 7a9080: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a9082: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9083: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7a9089u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7a9089: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a908c: /* 7a908c: mov eax, esi */
  eax = esi;
/* 7a908e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a908f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a90b0(void) {
  LOAD_REGS();
L_7a90b0: /* 7a90b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a90b1: mov esi, ecx */
  esi = ecx;
/* 7a90b3: call dword ptr [0xcfa76c] */
  esp -= 4; W32(esp, 0x7a90b9u); SPILL(); f_4e1988(); if (g_unwind) return; /* Core!??1UBoolProperty@@UAE@XZ */ RELOAD();
/* 7a90b9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a90be: je 0x7a90cc */
  if (zf) goto L_7a90cc;
L_7a90c0: /* 7a90c0: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a90c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a90c3: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7a90c9u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7a90c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a90cc: /* 7a90cc: mov eax, esi */
  eax = esi;
/* 7a90ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a90cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a90f0(void) {
  LOAD_REGS();
L_7a90f0: /* 7a90f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a90f1: mov esi, ecx */
  esi = ecx;
/* 7a90f3: call dword ptr [0xcfa770] */
  esp -= 4; W32(esp, 0x7a90f9u); SPILL(); f_4e38a5(); if (g_unwind) return; /* Core!??1UFloatProperty@@UAE@XZ */ RELOAD();
/* 7a90f9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a90fe: je 0x7a910c */
  if (zf) goto L_7a910c;
L_7a9100: /* 7a9100: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7a9102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9103: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7a9109u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7a9109: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7a910c: /* 7a910c: mov eax, esi */
  eax = esi;
/* 7a910e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a910f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a9130(void) {
  LOAD_REGS();
L_7a9130: /* 7a9130: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a9131: mov ebp, esp */
  ebp = esp;
/* 7a9133: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a9135: push 0x9ce900 */
  { uint32_t v = 0x9ce900u; esp -= 4; W32(esp, v); }
/* 7a913a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a9140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9141: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a9148: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a914b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a914c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a914d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a914e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a9151: mov edi, ecx */
  edi = ecx;
/* 7a9153: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a915a: xor esi, esi */
  esi = 0;
/* 7a915c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a9160: /* 7a9160: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a9163: jge 0x7a91ab */
  if ((sf == of)) goto L_7a91ab;
L_7a9165: /* 7a9165: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7a9168: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7a916b: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 7a916e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9170: je 0x7a9178 */
  if (zf) goto L_7a9178;
L_7a9172: /* 7a9172: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a9174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9175: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a9178u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a9178: /* 7a9178: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a9179: jmp 0x7a9160 */
  goto L_7a9160;
L_7a91ab: /* 7a91ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a91ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a91af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a91b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a91b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a91b8: mov esp, ebp */
  esp = ebp;
/* 7a91ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a91bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a917b(void) {
  LOAD_REGS();
L_7a917b: /* 7a917b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a917e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a9183: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a9186: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9187: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a918a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a918fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a918f(); return;
}

void f_7a918f(void) {
  LOAD_REGS();
L_7a918f: /* 7a918f: push 0xa0c0d4 */
  { uint32_t v = 0xa0c0d4u; esp -= 4; W32(esp, v); }
/* 7a9194: push 0xacde88 */
  { uint32_t v = 0xacde88u; esp -= 4; W32(esp, v); }
/* 7a9199: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a919fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a919f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a91a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a91a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a91a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a91abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a91ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a91ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a91af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a91b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a91b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a91b8: mov esp, ebp */
  esp = ebp;
/* 7a91ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a91bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a91f0(void) {
  LOAD_REGS();
L_7a91f0: /* 7a91f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a91f1: mov ebp, esp */
  ebp = esp;
/* 7a91f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a91f5: push 0x9ce910 */
  { uint32_t v = 0x9ce910u; esp -= 4; W32(esp, v); }
/* 7a91fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a9200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9201: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a9208: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a920b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a920c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a920d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a920e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a9211: mov edi, ecx */
  edi = ecx;
/* 7a9213: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a921a: xor esi, esi */
  esi = 0;
/* 7a921c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a9220: /* 7a9220: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a9223: jge 0x7a926e */
  if ((sf == of)) goto L_7a926e;
L_7a9225: /* 7a9225: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7a9228: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7a922b: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 7a922e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9230: je 0x7a923b */
  if (zf) goto L_7a923b;
L_7a9232: /* 7a9232: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a9234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9235: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7a923bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a923b: /* 7a923b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a923c: jmp 0x7a9220 */
  goto L_7a9220;
L_7a926e: /* 7a926e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a9271: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a9272: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a9273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a927a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a927b: mov esp, ebp */
  esp = ebp;
/* 7a927d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a927e: ret  */
  esp += 4; SPILL(); return;
}

void f_7a923e(void) {
  LOAD_REGS();
L_7a923e: /* 7a923e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a9241: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a9246: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a9249: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a924a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a924d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a9252u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a9252(); return;
}

void f_7a9252(void) {
  LOAD_REGS();
L_7a9252: /* 7a9252: push 0xa0c0f8 */
  { uint32_t v = 0xa0c0f8u; esp -= 4; W32(esp, v); }
/* 7a9257: push 0xacde90 */
  { uint32_t v = 0xacde90u; esp -= 4; W32(esp, v); }
/* 7a925c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a9262u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a9262: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9265: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9267: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9269: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a926eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a926e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a9271: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a9272: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a9273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a927a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a927b: mov esp, ebp */
  esp = ebp;
/* 7a927d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a927e: ret  */
  esp += 4; SPILL(); return;
}

void f_7a92b0(void) {
  LOAD_REGS();
L_7a92b0: /* 7a92b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a92b1: mov ebp, esp */
  ebp = esp;
/* 7a92b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a92b5: push 0x9ce920 */
  { uint32_t v = 0x9ce920u; esp -= 4; W32(esp, v); }
/* 7a92ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a92c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a92c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a92c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a92cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a92cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a92cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a92ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a92d1: mov edi, ecx */
  edi = ecx;
/* 7a92d3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a92da: xor esi, esi */
  esi = 0;
/* 7a92dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7a92e0: /* 7a92e0: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a92e3: jge 0x7a932d */
  if ((sf == of)) goto L_7a932d;
L_7a92e5: /* 7a92e5: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7a92e8: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7a92eb: mov ecx, dword ptr [ecx + 0x70] */
  ecx = R32((uint32_t)(ecx + 0x70u));
/* 7a92ee: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a92f0: je 0x7a92fa */
  if (zf) goto L_7a92fa;
L_7a92f2: /* 7a92f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a92f4: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7a92fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7a92fa: /* 7a92fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a92fb: jmp 0x7a92e0 */
  goto L_7a92e0;
L_7a932d: /* 7a932d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a9330: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a9331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a9332: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a9339: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a933a: mov esp, ebp */
  esp = ebp;
/* 7a933c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a933d: ret  */
  esp += 4; SPILL(); return;
}

void f_7a92fd(void) {
  LOAD_REGS();
L_7a92fd: /* 7a92fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a9300: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a9305: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a9308: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9309: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a930c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a9311u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a9311(); return;
}

void f_7a9311(void) {
  LOAD_REGS();
L_7a9311: /* 7a9311: push 0xa0c12c */
  { uint32_t v = 0xa0c12cu; esp -= 4; W32(esp, v); }
/* 7a9316: push 0xacde98 */
  { uint32_t v = 0xacde98u; esp -= 4; W32(esp, v); }
/* 7a931b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a9321u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a9321: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9326: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9328: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a932du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7a932d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a9330: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a9331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a9332: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a9339: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a933a: mov esp, ebp */
  esp = ebp;
/* 7a933c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a933d: ret  */
  esp += 4; SPILL(); return;
}

void f_7a9370(void) {
  LOAD_REGS();
L_7a9370: /* 7a9370: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a9371: mov ebp, esp */
  ebp = esp;
/* 7a9373: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a9375: push 0x9ce966 */
  { uint32_t v = 0x9ce966u; esp -= 4; W32(esp, v); }
/* 7a937a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a9380: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9381: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a9388: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a938b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a938c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a938d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a938e: mov edi, dword ptr [0xcfa5b8] */
  edi = R32((uint32_t)(0xcfa5b8u));
/* 7a9394: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a9397: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7a939a: push 0xacddf4 */
  { uint32_t v = 0xacddf4u; esp -= 4; W32(esp, v); }
/* 7a939f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a93a0: mov esi, ecx */
  esi = ecx;
/* 7a93a2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a93a9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a93abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a93ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a93ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a93b0: je 0x7a94f2 */
  if (zf) goto L_7a94f2;
L_7a93b6: /* 7a93b6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a93b9: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 7a93bc: cmp ax, 0x2b */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7a93c0: jne 0x7a93eb */
  if (!zf) goto L_7a93eb;
L_7a93c2: /* 7a93c2: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 7a93c5: fcomp dword ptr [0xa0c18c] */
  fpu_com(ST0, F32((uint32_t)(0xa0c18cu)));
  FPOP();
/* 7a93cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a93cd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a93d0: jne 0x7a93dd */
  if (!zf) goto L_7a93dd;
L_7a93d2: /* 7a93d2: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7a93d8: fstp dword ptr [esi + 0x70] */
  WF32((uint32_t)(esi + 0x70u), ST0); FPOP();
/* 7a93db: jmp 0x7a9438 */
  goto L_7a9438;
L_7a93dd: /* 7a93dd: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 7a93e0: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 7a93e6: fstp dword ptr [esi + 0x70] */
  WF32((uint32_t)(esi + 0x70u), ST0); FPOP();
/* 7a93e9: jmp 0x7a9438 */
  goto L_7a9438;
L_7a93eb: /* 7a93eb: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7a93ee: je 0x7a9431 */
  if (zf) goto L_7a9431;
L_7a93f0: /* 7a93f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a93f1: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7a93f7u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7a93f7: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7a93fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9400: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7a9403: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a9405: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a9408: jp 0x7a9417 */
  if (pf) goto L_7a9417;
L_7a940a: /* 7a940a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a940c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7a9412: fstp dword ptr [esi + 0x70] */
  WF32((uint32_t)(esi + 0x70u), ST0); FPOP();
/* 7a9415: jmp 0x7a9438 */
  goto L_7a9438;
L_7a9417: /* 7a9417: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 7a941d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a941f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a9422: jnp 0x7a942c */
  if (!pf) goto L_7a942c;
L_7a9424: /* 7a9424: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a9426: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_7a942c: /* 7a942c: fstp dword ptr [esi + 0x70] */
  WF32((uint32_t)(esi + 0x70u), ST0); FPOP();
/* 7a942f: jmp 0x7a9438 */
  goto L_7a9438;
L_7a9431: /* 7a9431: mov dword ptr [esi + 0x70], 0x3f000000 */
  W32((uint32_t)(esi + 0x70u), 0x3f000000u);
L_7a9438: /* 7a9438: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7a943b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a943d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a9440u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9440: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9442: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9447: mov ecx, esi */
  ecx = esi;
/* 7a9449: call dword ptr [0xcfa774] */
  esp -= 4; W32(esp, 0x7a944fu); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* 7a944f: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7a9452: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9454: je 0x7a94da */
  if (zf) goto L_7a94da;
L_7a945a: /* 7a945a: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7a945d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a945f: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7a9462: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9464: je 0x7a94da */
  if (zf) goto L_7a94da;
L_7a9466: /* 7a9466: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 7a9469: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 7a946f: call 0x99c958 */
  esp -= 4; W32(esp, 0x7a9474u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7a9474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9475: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7a9478: push 0xacde0c */
  { uint32_t v = 0xacde0cu; esp -= 4; W32(esp, v); }
/* 7a947d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a947e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7a9484u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7a9484: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9487: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 7a9489: mov ecx, eax */
  ecx = eax;
/* 7a948b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7a948e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7a9494u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7a9494: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9495: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7a9498: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7a949eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7a949e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_7a94a2: /* 7a94a2: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 7a94a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a94a6: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 7a94a9: mov ecx, esp */
  ecx = esp;
/* 7a94ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a94ad: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7a94b3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7a94b3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a94b5: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7a94b8: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7a94bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a94bc: call 0x6ca91b */
  esp -= 4; W32(esp, 0x7a94c1u); SPILL(); f_6ca91b(); if (g_unwind) return; RELOAD();
/* 7a94c1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7a94c4: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7a94c7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a94cdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7a94cd: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7a94d0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a94d4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7a94dau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7a94da: /* 7a94da: mov eax, 1 */
  eax = 0x1u;
/* 7a94df: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a94e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a94e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a94ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a94eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a94ec: mov esp, ebp */
  esp = ebp;
/* 7a94ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a94ef: ret 8 */
  esp += 12; SPILL(); return;
L_7a94f2: /* 7a94f2: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7a94f5: push 0xacde28 */
  { uint32_t v = 0xacde28u; esp -= 4; W32(esp, v); }
/* 7a94fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a94fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a94fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a94fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9500: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9502: je 0x7a95e1 */
  if (zf) goto L_7a95e1;
L_7a9508: /* 7a9508: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a950b: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 7a950e: cmp ax, 0x2b */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7a9512: jne 0x7a953d */
  if (!zf) goto L_7a953d;
L_7a9514: /* 7a9514: fld dword ptr [esi + 0x74] */
  { double v = F32((uint32_t)(esi + 0x74u)); FPUSH(v); }
/* 7a9517: fcomp dword ptr [0xa0c18c] */
  fpu_com(ST0, F32((uint32_t)(0xa0c18cu)));
  FPOP();
/* 7a951d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a951f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9522: jne 0x7a952f */
  if (!zf) goto L_7a952f;
L_7a9524: /* 7a9524: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7a952a: fstp dword ptr [esi + 0x74] */
  WF32((uint32_t)(esi + 0x74u), ST0); FPOP();
/* 7a952d: jmp 0x7a956e */
  goto L_7a956e;
L_7a952f: /* 7a952f: fld dword ptr [esi + 0x74] */
  { double v = F32((uint32_t)(esi + 0x74u)); FPUSH(v); }
/* 7a9532: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 7a9538: fstp dword ptr [esi + 0x74] */
  WF32((uint32_t)(esi + 0x74u), ST0); FPOP();
/* 7a953b: jmp 0x7a956e */
  goto L_7a956e;
L_7a953d: /* 7a953d: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9540: je 0x7a9567 */
  if (zf) goto L_7a9567;
L_7a9542: /* 7a9542: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9543: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7a9549u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7a9549: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a954c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a954f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9552: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 7a9557: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a955a: call 0x6c44ee */
  esp -= 4; W32(esp, 0x7a955fu); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 7a955f: fstp dword ptr [esi + 0x74] */
  WF32((uint32_t)(esi + 0x74u), ST0); FPOP();
/* 7a9562: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9565: jmp 0x7a956e */
  goto L_7a956e;
L_7a9567: /* 7a9567: mov dword ptr [esi + 0x74], 0x3f000000 */
  W32((uint32_t)(esi + 0x74u), 0x3f000000u);
L_7a956e: /* 7a956e: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7a9571: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a9573: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a9576u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9576: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9578: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a957d: mov ecx, esi */
  ecx = esi;
/* 7a957f: call dword ptr [0xcfa774] */
  esp -= 4; W32(esp, 0x7a9585u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* 7a9585: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7a9588: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a958a: je 0x7a94da */
  if (zf) goto L_7a94da;
L_7a9590: /* 7a9590: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7a9593: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a9595: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7a9598: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a959a: je 0x7a94da */
  if (zf) goto L_7a94da;
L_7a95a0: /* 7a95a0: fld dword ptr [esi + 0x74] */
  { double v = F32((uint32_t)(esi + 0x74u)); FPUSH(v); }
/* 7a95a3: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 7a95a9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7a95aeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7a95ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a95af: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7a95b2: push 0xacde3c */
  { uint32_t v = 0xacde3cu; esp -= 4; W32(esp, v); }
/* 7a95b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a95b8: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7a95beu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7a95be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a95c1: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 7a95c3: mov ecx, eax */
  ecx = eax;
/* 7a95c5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7a95c8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7a95ceu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7a95ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a95cf: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7a95d2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7a95d8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7a95d8: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7a95dc: jmp 0x7a94a2 */
  goto L_7a94a2;
L_7a95e1: /* 7a95e1: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7a95e4: push 0xacde54 */
  { uint32_t v = 0xacde54u; esp -= 4; W32(esp, v); }
/* 7a95e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a95ea: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a95ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a95ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a95ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a95f1: je 0x7a96cd */
  if (zf) goto L_7a96cd;
L_7a95f7: /* 7a95f7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7a95fa: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 7a95fd: cmp ax, 0x2b */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7a9601: jne 0x7a962c */
  if (!zf) goto L_7a962c;
L_7a9603: /* 7a9603: fld dword ptr [esi + 0x78] */
  { double v = F32((uint32_t)(esi + 0x78u)); FPUSH(v); }
/* 7a9606: fcomp dword ptr [0xa0c184] */
  fpu_com(ST0, F32((uint32_t)(0xa0c184u)));
  FPOP();
/* 7a960c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a960e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9611: jne 0x7a961e */
  if (!zf) goto L_7a961e;
L_7a9613: /* 7a9613: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 7a9619: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
/* 7a961c: jmp 0x7a9660 */
  goto L_7a9660;
L_7a961e: /* 7a961e: fld dword ptr [esi + 0x78] */
  { double v = F32((uint32_t)(esi + 0x78u)); FPUSH(v); }
/* 7a9621: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 7a9627: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
/* 7a962a: jmp 0x7a9660 */
  goto L_7a9660;
L_7a962c: /* 7a962c: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7a962f: je 0x7a9659 */
  if (zf) goto L_7a9659;
L_7a9631: /* 7a9631: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9632: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7a9638u); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7a9638: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7a963b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a963e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9641: push 0x40200000 */
  { uint32_t v = 0x40200000u; esp -= 4; W32(esp, v); }
/* 7a9646: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 7a964b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a964c: call 0x6c44ee */
  esp -= 4; W32(esp, 0x7a9651u); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 7a9651: fstp dword ptr [esi + 0x78] */
  WF32((uint32_t)(esi + 0x78u), ST0); FPOP();
/* 7a9654: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9657: jmp 0x7a9660 */
  goto L_7a9660;
L_7a9659: /* 7a9659: mov dword ptr [esi + 0x78], 0x3fd9999a */
  W32((uint32_t)(esi + 0x78u), 0x3fd9999au);
L_7a9660: /* 7a9660: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7a9663: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a9665: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7a9668u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9668: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a966a: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a966f: mov ecx, esi */
  ecx = esi;
/* 7a9671: call dword ptr [0xcfa774] */
  esp -= 4; W32(esp, 0x7a9677u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* 7a9677: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7a967a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a967c: je 0x7a94da */
  if (zf) goto L_7a94da;
L_7a9682: /* 7a9682: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7a9685: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a9687: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7a968a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a968c: je 0x7a94da */
  if (zf) goto L_7a94da;
L_7a9692: /* 7a9692: fld dword ptr [esi + 0x78] */
  { double v = F32((uint32_t)(esi + 0x78u)); FPUSH(v); }
/* 7a9695: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a9698: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7a969b: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7a969e: push 0xacde60 */
  { uint32_t v = 0xacde60u; esp -= 4; W32(esp, v); }
/* 7a96a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7a96a4: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7a96aau); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7a96aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a96ad: mov bl, 5 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5u) & 0xffu);
/* 7a96af: mov ecx, eax */
  ecx = eax;
/* 7a96b1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7a96b4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7a96bau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7a96ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a96bb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7a96be: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7a96c4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7a96c4: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7a96c8: jmp 0x7a94a2 */
  goto L_7a94a2;
L_7a96cd: /* 7a96cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a96d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a96d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a96d2: xor eax, eax */
  eax = 0;
/* 7a96d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a96db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a96dc: mov esp, ebp */
  esp = ebp;
/* 7a96de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a96df: ret 8 */
  esp += 12; SPILL(); return;
}
