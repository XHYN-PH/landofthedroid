#include "recomp.h"
#include "rec_mod.h"

void f_7d409c(void) {
  LOAD_REGS();
L_7d409c: /* 7d409c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d409f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d40a4: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 7d40aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d40ab: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 7d40b1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d40b6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d40b6(); return;
}

void f_7d40b6(void) {
  LOAD_REGS();
L_7d40b6: /* 7d40b6: push 0xa0f6b0 */
  { uint32_t v = 0xa0f6b0u; esp -= 4; W32(esp, v); }
/* 7d40bb: push 0xad56c4 */
  { uint32_t v = 0xad56c4u; esp -= 4; W32(esp, v); }
/* 7d40c0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d40c6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d40c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d40c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d40cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d40cd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d40d2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d40d2(); return;
}

void f_7d40d2(void) {
  LOAD_REGS();
L_7d40d2: /* 7d40d2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d40d5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d40da: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7d40e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d40e1: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 7d40e7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d40ecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d40ec(); return;
}

void f_7d40ec(void) {
  LOAD_REGS();
L_7d40ec: /* 7d40ec: push 0xa0f684 */
  { uint32_t v = 0xa0f684u; esp -= 4; W32(esp, v); }
/* 7d40f1: push 0xad56cc */
  { uint32_t v = 0xad56ccu; esp -= 4; W32(esp, v); }
/* 7d40f6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d40fcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d40fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d40ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d4101: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d4103: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d4108u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d4108(); return;
}

void f_7d4108(void) {
  LOAD_REGS();
L_7d4108: /* 7d4108: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d410b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d4110: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 7d4116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4117: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 7d411d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d4122u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d4122(); return;
}

void f_7d4122(void) {
  LOAD_REGS();
L_7d4122: /* 7d4122: push 0xa0f654 */
  { uint32_t v = 0xa0f654u; esp -= 4; W32(esp, v); }
/* 7d4127: push 0xad56d4 */
  { uint32_t v = 0xad56d4u; esp -= 4; W32(esp, v); }
/* 7d412c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d4132u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d4132: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4135: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d4137: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d4139: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d413eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7d413e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d4141: mov ecx, dword ptr [ecx + 0x108] */
  ecx = R32((uint32_t)(ecx + 0x108u));
/* 7d4147: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d4149: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d4150: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7d4154: je 0x7d4264 */
  if (zf) goto L_7d4264;
L_7d415a: /* 7d415a: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d4160u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d4160: xor ebx, ebx */
  ebx = 0;
/* 7d4162: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d4163: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d4165: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4166: call dword ptr [0xcfa8e4] */
  esp -= 4; W32(esp, 0x7d416cu); SPILL(); f_4e3d46(); if (g_unwind) return; /* Core!?ResetLoaders@UObject@@SAXPAV1@HH@Z */ RELOAD();
/* 7d416c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d416f: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d4175: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d4178: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d417b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d417d: je 0x7d418f */
  if (zf) goto L_7d418f;
L_7d417f: /* 7d417f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4181: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d4183: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d4186u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4186: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d418c: mov dword ptr [eax + 0x3c], ebx */
  W32((uint32_t)(eax + 0x3cu), ebx);
L_7d418f: /* 7d418f: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* 7d4195: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7d419b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d419d: je 0x7d41b2 */
  if (zf) goto L_7d41b2;
L_7d419f: /* 7d419f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d41a1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d41a3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d41a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d41a6: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d41ac: mov dword ptr [eax + 0x88], ebx */
  W32((uint32_t)(eax + 0x88u), ebx);
L_7d41b2: /* 7d41b2: push 0xad56dc */
  { uint32_t v = 0xad56dcu; esp -= 4; W32(esp, v); }
/* 7d41b7: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d41bd: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d41c2u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d41c2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d41c4: je 0x7d422f */
  if (zf) goto L_7d422f;
L_7d41c6: /* 7d41c6: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* 7d41cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d41ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d41d0: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d41d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d41d6: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7d41db: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d41dd: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d41e0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d41e6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d41e6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d41e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d41ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d41eb: lea edx, [ebp - 0x4e8] */
  edx = (uint32_t)(ebp + 0xfffffb18u);
/* 7d41f1: push 0xad56e8 */
  { uint32_t v = 0xad56e8u; esp -= 4; W32(esp, v); }
/* 7d41f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d41f7: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7d41fdu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7d41fd: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* 7d4203: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4206: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d420cu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d420c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4212: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4214: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d4215: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4216: mov edx, dword ptr [edi + 0x108] */
  edx = R32((uint32_t)(edi + 0x108u));
/* 7d421c: lea ecx, [ebp - 0x4e8] */
  ecx = (uint32_t)(ebp + 0xfffffb18u);
/* 7d4222: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d4224: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4226: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7d422cu); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7d422c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d422f: /* 7d422f: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7d4234: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4236: jne 0x7d425e */
  if (!zf) goto L_7d425e;
L_7d4238: /* 7d4238: xor esi, esi */
  esi = 0;
/* 7d423a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d4240: /* 7d4240: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d4246: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d4249: jge 0x7d425e */
  if ((sf == of)) goto L_7d425e;
L_7d424b: /* 7d424b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d424e: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d4251: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4253: je 0x7d425b */
  if (zf) goto L_7d425b;
L_7d4255: /* 7d4255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4256: call 0x6c20a4 */
  esp -= 4; W32(esp, 0x7d425bu); SPILL(); f_6c20a4(); if (g_unwind) return; RELOAD();
L_7d425b: /* 7d425b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d425c: jmp 0x7d4240 */
  goto L_7d4240;
L_7d425e: /* 7d425e: mov dword ptr [edi + 0x108], ebx */
  W32((uint32_t)(edi + 0x108u), ebx);
L_7d4264: /* 7d4264: mov esi, 3 */
  esi = 0x3u;
/* 7d4269: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d426c: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 7d4272: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7d4276: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d427cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d427c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d427f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d4281: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d4283: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4284: push 0xad570c */
  { uint32_t v = 0xad570cu; esp -= 4; W32(esp, v); }
/* 7d4289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d428a: push 0xb84d18 */
  { uint32_t v = 0xb84d18u; esp -= 4; W32(esp, v); }
/* 7d428f: call dword ptr [0xcfa7c4] */
  esp -= 4; W32(esp, 0x7d4295u); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7d4295: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d4298: mov dword ptr [edx + 0x108], eax */
  W32((uint32_t)(edx + 0x108u), eax);
/* 7d429e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d42a1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d42a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d42a6: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7d42a9: je 0x7d4361 */
  if (zf) goto L_7d4361;
L_7d42af: /* 7d42af: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* 7d42b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d42b7: je 0x7d42c0 */
  if (zf) goto L_7d42c0;
L_7d42b9: /* 7d42b9: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_7d42c0: /* 7d42c0: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7d42c3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7d42c5: mov ecx, edi */
  ecx = edi;
/* 7d42c7: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7d42cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d42cd: xor ebx, ebx */
  ebx = 0;
L_7d42cf: /* 7d42cf: cmp ebx, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d42d2: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7d42d8: jge 0x7d4367 */
  if ((sf == of)) goto L_7d4367;
L_7d42de: /* 7d42de: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7d42e1: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 7d42e4: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d42e7: mov edx, dword ptr [esi + ecx + 0x3c] */
  edx = R32((uint32_t)(esi + ecx + 0x3cu));
/* 7d42eb: lea eax, [esi + ecx] */
  eax = (uint32_t)(esi + ecx);
/* 7d42ee: cmp edx, dword ptr [eax + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d42f1: je 0x7d4328 */
  if (zf) goto L_7d4328;
L_7d42f3: /* 7d42f3: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 7d42f6: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x7d42fcu); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 7d42fc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d42ff: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 7d4302: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d4304: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x7d4307u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4307: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7d430a: mov edx, dword ptr [esi + ecx + 0x3c] */
  edx = R32((uint32_t)(esi + ecx + 0x3cu));
/* 7d430e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d4311: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4312: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 7d4315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4316: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7d4319: push 0xad5724 */
  { uint32_t v = 0xad5724u; esp -= 4; W32(esp, v); }
/* 7d431e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d431f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d4325u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d4325: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d4328: /* 7d4328: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7d4329: jmp 0x7d42cf */
  goto L_7d42cf;
L_7d4361: /* 7d4361: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
L_7d4367: /* 7d4367: mov eax, dword ptr [0xcecf50] */
  eax = R32((uint32_t)(0xcecf50u));
/* 7d436c: mov ecx, 0xcecf50 */
  ecx = 0xcecf50u;
/* 7d4371: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7d4375: xor edi, edi */
  edi = 0;
/* 7d4377: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d437au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d437a: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d437f: je 0x7d43b1 */
  if (zf) goto L_7d43b1;
L_7d4381: /* 7d4381: mov edx, dword ptr [0xcecf50] */
  edx = R32((uint32_t)(0xcecf50u));
/* 7d4387: mov ecx, 0xcecf50 */
  ecx = 0xcecf50u;
/* 7d438c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d438fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d438f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d4394: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4395: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d439a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d439c: push 0xad574c */
  { uint32_t v = 0xad574cu; esp -= 4; W32(esp, v); }
/* 7d43a1: push 0xad5770 */
  { uint32_t v = 0xad5770u; esp -= 4; W32(esp, v); }
/* 7d43a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d43a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d43a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d43a9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d43ac: mov edi, 1 */
  edi = 0x1u;
L_7d43b1: /* 7d43b1: mov edx, dword ptr [0xb5bf68] */
  edx = R32((uint32_t)(0xb5bf68u));
/* 7d43b7: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 7d43bc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d43bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d43bf: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d43c4: je 0x7d43f6 */
  if (zf) goto L_7d43f6;
L_7d43c6: /* 7d43c6: mov eax, dword ptr [0xb5bf68] */
  eax = R32((uint32_t)(0xb5bf68u));
/* 7d43cb: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 7d43d0: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d43d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d43d3: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d43d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d43db: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d43e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d43e1: push 0xad57d0 */
  { uint32_t v = 0xad57d0u; esp -= 4; W32(esp, v); }
/* 7d43e6: push 0xad57e0 */
  { uint32_t v = 0xad57e0u; esp -= 4; W32(esp, v); }
/* 7d43eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d43ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d43eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d43ee: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d43f1: mov edi, 1 */
  edi = 0x1u;
L_7d43f6: /* 7d43f6: mov eax, dword ptr [0xceca20] */
  eax = R32((uint32_t)(0xceca20u));
/* 7d43fb: mov ecx, 0xceca20 */
  ecx = 0xceca20u;
/* 7d4400: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4403u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4403: cmp eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4408: je 0x7d443a */
  if (zf) goto L_7d443a;
L_7d440a: /* 7d440a: mov edx, dword ptr [0xceca20] */
  edx = R32((uint32_t)(0xceca20u));
/* 7d4410: mov ecx, 0xceca20 */
  ecx = 0xceca20u;
/* 7d4415: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4418u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4418: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7d441d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d441e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4423: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4425: push 0xad5840 */
  { uint32_t v = 0xad5840u; esp -= 4; W32(esp, v); }
/* 7d442a: push 0xad5860 */
  { uint32_t v = 0xad5860u; esp -= 4; W32(esp, v); }
/* 7d442f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4430: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4432u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4432: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4435: mov edi, 1 */
  edi = 0x1u;
L_7d443a: /* 7d443a: mov edx, dword ptr [0xb63188] */
  edx = R32((uint32_t)(0xb63188u));
/* 7d4440: mov ecx, 0xb63188 */
  ecx = 0xb63188u;
/* 7d4445: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4448u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4448: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d444d: je 0x7d447f */
  if (zf) goto L_7d447f;
L_7d444f: /* 7d444f: mov eax, dword ptr [0xb63188] */
  eax = R32((uint32_t)(0xb63188u));
/* 7d4454: mov ecx, 0xb63188 */
  ecx = 0xb63188u;
/* 7d4459: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d445cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d445c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4462: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4464: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d4469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d446a: push 0xad58c0 */
  { uint32_t v = 0xad58c0u; esp -= 4; W32(esp, v); }
/* 7d446f: push 0xad58d8 */
  { uint32_t v = 0xad58d8u; esp -= 4; W32(esp, v); }
/* 7d4474: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4475: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4477u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4477: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d447a: mov edi, 1 */
  edi = 0x1u;
L_7d447f: /* 7d447f: mov eax, dword ptr [0xceb690] */
  eax = R32((uint32_t)(0xceb690u));
/* 7d4484: mov ecx, 0xceb690 */
  ecx = 0xceb690u;
/* 7d4489: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d448cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d448c: cmp eax, 0x4d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4491: je 0x7d44c3 */
  if (zf) goto L_7d44c3;
L_7d4493: /* 7d4493: mov edx, dword ptr [0xceb690] */
  edx = R32((uint32_t)(0xceb690u));
/* 7d4499: mov ecx, 0xceb690 */
  ecx = 0xceb690u;
/* 7d449e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d44a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d44a1: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 7d44a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d44a7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d44ac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d44ae: push 0xad5938 */
  { uint32_t v = 0xad5938u; esp -= 4; W32(esp, v); }
/* 7d44b3: push 0xad5958 */
  { uint32_t v = 0xad5958u; esp -= 4; W32(esp, v); }
/* 7d44b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d44b9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d44bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d44bb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d44be: mov edi, 1 */
  edi = 0x1u;
L_7d44c3: /* 7d44c3: mov edx, dword ptr [0xcc6208] */
  edx = R32((uint32_t)(0xcc6208u));
/* 7d44c9: mov ecx, 0xcc6208 */
  ecx = 0xcc6208u;
/* 7d44ce: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d44d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d44d1: cmp eax, 0x494 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x494u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d44d6: je 0x7d4508 */
  if (zf) goto L_7d4508;
L_7d44d8: /* 7d44d8: mov eax, dword ptr [0xcc6208] */
  eax = R32((uint32_t)(0xcc6208u));
/* 7d44dd: mov ecx, 0xcc6208 */
  ecx = 0xcc6208u;
/* 7d44e2: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d44e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d44e5: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d44eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d44ed: push 0x494 */
  { uint32_t v = 0x494u; esp -= 4; W32(esp, v); }
/* 7d44f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d44f3: push 0xad59b8 */
  { uint32_t v = 0xad59b8u; esp -= 4; W32(esp, v); }
/* 7d44f8: push 0xad59e0 */
  { uint32_t v = 0xad59e0u; esp -= 4; W32(esp, v); }
/* 7d44fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d44fe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4500u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4500: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4503: mov edi, 1 */
  edi = 0x1u;
L_7d4508: /* 7d4508: mov eax, dword ptr [0xce9540] */
  eax = R32((uint32_t)(0xce9540u));
/* 7d450d: mov ecx, 0xce9540 */
  ecx = 0xce9540u;
/* 7d4512: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4515: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4518: je 0x7d4547 */
  if (zf) goto L_7d4547;
L_7d451a: /* 7d451a: mov edx, dword ptr [0xce9540] */
  edx = R32((uint32_t)(0xce9540u));
/* 7d4520: mov ecx, 0xce9540 */
  ecx = 0xce9540u;
/* 7d4525: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4528: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d452a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d452b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4530: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4532: push 0xad5a40 */
  { uint32_t v = 0xad5a40u; esp -= 4; W32(esp, v); }
/* 7d4537: push 0xad5a68 */
  { uint32_t v = 0xad5a68u; esp -= 4; W32(esp, v); }
/* 7d453c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d453d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d453fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d453f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4542: mov edi, 1 */
  edi = 0x1u;
L_7d4547: /* 7d4547: mov edx, dword ptr [0xb66a98] */
  edx = R32((uint32_t)(0xb66a98u));
/* 7d454d: mov ecx, 0xb66a98 */
  ecx = 0xb66a98u;
/* 7d4552: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4555: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d455a: je 0x7d458c */
  if (zf) goto L_7d458c;
L_7d455c: /* 7d455c: mov eax, dword ptr [0xb66a98] */
  eax = R32((uint32_t)(0xb66a98u));
/* 7d4561: mov ecx, 0xb66a98 */
  ecx = 0xb66a98u;
/* 7d4566: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4569u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4569: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d456f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4571: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d4576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4577: push 0xad5ac8 */
  { uint32_t v = 0xad5ac8u; esp -= 4; W32(esp, v); }
/* 7d457c: push 0xad5ad8 */
  { uint32_t v = 0xad5ad8u; esp -= 4; W32(esp, v); }
/* 7d4581: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4582: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4584u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4584: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4587: mov edi, 1 */
  edi = 0x1u;
L_7d458c: /* 7d458c: mov eax, dword ptr [0xce7998] */
  eax = R32((uint32_t)(0xce7998u));
/* 7d4591: mov ecx, 0xce7998 */
  ecx = 0xce7998u;
/* 7d4596: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4599u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4599: cmp eax, 0x340 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d459e: je 0x7d45d0 */
  if (zf) goto L_7d45d0;
L_7d45a0: /* 7d45a0: mov edx, dword ptr [0xce7998] */
  edx = R32((uint32_t)(0xce7998u));
/* 7d45a6: mov ecx, 0xce7998 */
  ecx = 0xce7998u;
/* 7d45ab: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d45aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d45ae: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 7d45b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d45b4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d45b9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d45bb: push 0xad5b38 */
  { uint32_t v = 0xad5b38u; esp -= 4; W32(esp, v); }
/* 7d45c0: push 0xad5b60 */
  { uint32_t v = 0xad5b60u; esp -= 4; W32(esp, v); }
/* 7d45c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d45c6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d45c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d45c8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d45cb: mov edi, 1 */
  edi = 0x1u;
L_7d45d0: /* 7d45d0: mov edx, dword ptr [0xce68c8] */
  edx = R32((uint32_t)(0xce68c8u));
/* 7d45d6: mov ecx, 0xce68c8 */
  ecx = 0xce68c8u;
/* 7d45db: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d45deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d45de: cmp eax, 0x4b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d45e3: je 0x7d4615 */
  if (zf) goto L_7d4615;
L_7d45e5: /* 7d45e5: mov eax, dword ptr [0xce68c8] */
  eax = R32((uint32_t)(0xce68c8u));
/* 7d45ea: mov ecx, 0xce68c8 */
  ecx = 0xce68c8u;
/* 7d45ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d45f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d45f2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d45f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d45fa: push 0x4b0 */
  { uint32_t v = 0x4b0u; esp -= 4; W32(esp, v); }
/* 7d45ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4600: push 0xad5bc0 */
  { uint32_t v = 0xad5bc0u; esp -= 4; W32(esp, v); }
/* 7d4605: push 0xad5be0 */
  { uint32_t v = 0xad5be0u; esp -= 4; W32(esp, v); }
/* 7d460a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d460b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d460du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d460d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4610: mov edi, 1 */
  edi = 0x1u;
L_7d4615: /* 7d4615: mov eax, dword ptr [0xce6288] */
  eax = R32((uint32_t)(0xce6288u));
/* 7d461a: mov ecx, 0xce6288 */
  ecx = 0xce6288u;
/* 7d461f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4622u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4622: cmp eax, 0x4d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4627: je 0x7d4659 */
  if (zf) goto L_7d4659;
L_7d4629: /* 7d4629: mov edx, dword ptr [0xce6288] */
  edx = R32((uint32_t)(0xce6288u));
/* 7d462f: mov ecx, 0xce6288 */
  ecx = 0xce6288u;
/* 7d4634: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4637u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4637: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 7d463c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d463d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4642: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4644: push 0xad5c40 */
  { uint32_t v = 0xad5c40u; esp -= 4; W32(esp, v); }
/* 7d4649: push 0xad5c60 */
  { uint32_t v = 0xad5c60u; esp -= 4; W32(esp, v); }
/* 7d464e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d464f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4651u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4651: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4654: mov edi, 1 */
  edi = 0x1u;
L_7d4659: /* 7d4659: mov edx, dword ptr [0xce5118] */
  edx = R32((uint32_t)(0xce5118u));
/* 7d465f: mov ecx, 0xce5118 */
  ecx = 0xce5118u;
/* 7d4664: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4667u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4667: cmp eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d466a: je 0x7d4699 */
  if (zf) goto L_7d4699;
L_7d466c: /* 7d466c: mov eax, dword ptr [0xce5118] */
  eax = R32((uint32_t)(0xce5118u));
/* 7d4671: mov ecx, 0xce5118 */
  ecx = 0xce5118u;
/* 7d4676: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4679u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4679: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d467f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4681: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7d4683: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4684: push 0xad5cc0 */
  { uint32_t v = 0xad5cc0u; esp -= 4; W32(esp, v); }
/* 7d4689: push 0xad5cf8 */
  { uint32_t v = 0xad5cf8u; esp -= 4; W32(esp, v); }
/* 7d468e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d468f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4691u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4691: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4694: mov edi, 1 */
  edi = 0x1u;
L_7d4699: /* 7d4699: mov eax, dword ptr [0xce31f8] */
  eax = R32((uint32_t)(0xce31f8u));
/* 7d469e: mov ecx, 0xce31f8 */
  ecx = 0xce31f8u;
/* 7d46a3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d46a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46a6: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d46a9: je 0x7d46d8 */
  if (zf) goto L_7d46d8;
L_7d46ab: /* 7d46ab: mov edx, dword ptr [0xce31f8] */
  edx = R32((uint32_t)(0xce31f8u));
/* 7d46b1: mov ecx, 0xce31f8 */
  ecx = 0xce31f8u;
/* 7d46b6: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d46b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46b9: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7d46bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d46bc: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d46c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d46c3: push 0xad5d58 */
  { uint32_t v = 0xad5d58u; esp -= 4; W32(esp, v); }
/* 7d46c8: push 0xad5d70 */
  { uint32_t v = 0xad5d70u; esp -= 4; W32(esp, v); }
/* 7d46cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d46ce: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d46d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46d0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d46d3: mov edi, 1 */
  edi = 0x1u;
L_7d46d8: /* 7d46d8: mov edx, dword ptr [0xce4be8] */
  edx = R32((uint32_t)(0xce4be8u));
/* 7d46de: mov ecx, 0xce4be8 */
  ecx = 0xce4be8u;
/* 7d46e3: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d46e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46e6: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d46e9: je 0x7d4718 */
  if (zf) goto L_7d4718;
L_7d46eb: /* 7d46eb: mov eax, dword ptr [0xce4be8] */
  eax = R32((uint32_t)(0xce4be8u));
/* 7d46f0: mov ecx, 0xce4be8 */
  ecx = 0xce4be8u;
/* 7d46f5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d46f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46f8: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d46fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4700: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7d4702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4703: push 0xad5dd0 */
  { uint32_t v = 0xad5dd0u; esp -= 4; W32(esp, v); }
/* 7d4708: push 0xad5e00 */
  { uint32_t v = 0xad5e00u; esp -= 4; W32(esp, v); }
/* 7d470d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d470e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4710u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4710: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4713: mov edi, 1 */
  edi = 0x1u;
L_7d4718: /* 7d4718: mov eax, dword ptr [0xce46b8] */
  eax = R32((uint32_t)(0xce46b8u));
/* 7d471d: mov ecx, 0xce46b8 */
  ecx = 0xce46b8u;
/* 7d4722: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4725: cmp eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4728: je 0x7d4757 */
  if (zf) goto L_7d4757;
L_7d472a: /* 7d472a: mov edx, dword ptr [0xce46b8] */
  edx = R32((uint32_t)(0xce46b8u));
/* 7d4730: mov ecx, 0xce46b8 */
  ecx = 0xce46b8u;
/* 7d4735: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4738u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4738: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7d473a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d473b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4740: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4742: push 0xad5e60 */
  { uint32_t v = 0xad5e60u; esp -= 4; W32(esp, v); }
/* 7d4747: push 0xad5e88 */
  { uint32_t v = 0xad5e88u; esp -= 4; W32(esp, v); }
/* 7d474c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d474d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d474fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d474f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4752: mov edi, 1 */
  edi = 0x1u;
L_7d4757: /* 7d4757: mov edx, dword ptr [0xce4188] */
  edx = R32((uint32_t)(0xce4188u));
/* 7d475d: mov ecx, 0xce4188 */
  ecx = 0xce4188u;
/* 7d4762: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4765u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4765: cmp eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4768: je 0x7d4797 */
  if (zf) goto L_7d4797;
L_7d476a: /* 7d476a: mov eax, dword ptr [0xce4188] */
  eax = R32((uint32_t)(0xce4188u));
/* 7d476f: mov ecx, 0xce4188 */
  ecx = 0xce4188u;
/* 7d4774: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4777u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4777: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d477d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d477f: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7d4781: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4782: push 0xad5ee8 */
  { uint32_t v = 0xad5ee8u; esp -= 4; W32(esp, v); }
/* 7d4787: push 0xad5f10 */
  { uint32_t v = 0xad5f10u; esp -= 4; W32(esp, v); }
/* 7d478c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d478d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d478fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d478f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4792: mov edi, 1 */
  edi = 0x1u;
L_7d4797: /* 7d4797: mov eax, dword ptr [0xce3c58] */
  eax = R32((uint32_t)(0xce3c58u));
/* 7d479c: mov ecx, 0xce3c58 */
  ecx = 0xce3c58u;
/* 7d47a1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d47a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47a4: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d47a7: je 0x7d47d6 */
  if (zf) goto L_7d47d6;
L_7d47a9: /* 7d47a9: mov edx, dword ptr [0xce3c58] */
  edx = R32((uint32_t)(0xce3c58u));
/* 7d47af: mov ecx, 0xce3c58 */
  ecx = 0xce3c58u;
/* 7d47b4: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d47b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47b7: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7d47b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d47ba: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d47bf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d47c1: push 0xad5f70 */
  { uint32_t v = 0xad5f70u; esp -= 4; W32(esp, v); }
/* 7d47c6: push 0xad5fa8 */
  { uint32_t v = 0xad5fa8u; esp -= 4; W32(esp, v); }
/* 7d47cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d47cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d47ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47ce: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d47d1: mov edi, 1 */
  edi = 0x1u;
L_7d47d6: /* 7d47d6: mov edx, dword ptr [0xce3728] */
  edx = R32((uint32_t)(0xce3728u));
/* 7d47dc: mov ecx, 0xce3728 */
  ecx = 0xce3728u;
/* 7d47e1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d47e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47e4: cmp eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d47e7: je 0x7d4816 */
  if (zf) goto L_7d4816;
L_7d47e9: /* 7d47e9: mov eax, dword ptr [0xce3728] */
  eax = R32((uint32_t)(0xce3728u));
/* 7d47ee: mov ecx, 0xce3728 */
  ecx = 0xce3728u;
/* 7d47f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d47f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47f6: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d47fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d47fe: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7d4800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4801: push 0xad6008 */
  { uint32_t v = 0xad6008u; esp -= 4; W32(esp, v); }
/* 7d4806: push 0xad6030 */
  { uint32_t v = 0xad6030u; esp -= 4; W32(esp, v); }
/* 7d480b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d480c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d480eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d480e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4811: mov edi, 1 */
  edi = 0x1u;
L_7d4816: /* 7d4816: mov eax, dword ptr [0xce16f0] */
  eax = R32((uint32_t)(0xce16f0u));
/* 7d481b: mov ecx, 0xce16f0 */
  ecx = 0xce16f0u;
/* 7d4820: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4823: cmp eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4828: je 0x7d485a */
  if (zf) goto L_7d485a;
L_7d482a: /* 7d482a: mov edx, dword ptr [0xce16f0] */
  edx = R32((uint32_t)(0xce16f0u));
/* 7d4830: mov ecx, 0xce16f0 */
  ecx = 0xce16f0u;
/* 7d4835: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4838: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 7d483d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d483e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4843: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4845: push 0xad6090 */
  { uint32_t v = 0xad6090u; esp -= 4; W32(esp, v); }
/* 7d484a: push 0xad60c0 */
  { uint32_t v = 0xad60c0u; esp -= 4; W32(esp, v); }
/* 7d484f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4850: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4852: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4855: mov edi, 1 */
  edi = 0x1u;
L_7d485a: /* 7d485a: mov edx, dword ptr [0xce1088] */
  edx = R32((uint32_t)(0xce1088u));
/* 7d4860: mov ecx, 0xce1088 */
  ecx = 0xce1088u;
/* 7d4865: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4868u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4868: cmp eax, 0x358 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d486d: je 0x7d489f */
  if (zf) goto L_7d489f;
L_7d486f: /* 7d486f: mov eax, dword ptr [0xce1088] */
  eax = R32((uint32_t)(0xce1088u));
/* 7d4874: mov ecx, 0xce1088 */
  ecx = 0xce1088u;
/* 7d4879: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d487cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d487c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4882: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4884: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 7d4889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d488a: push 0xad6120 */
  { uint32_t v = 0xad6120u; esp -= 4; W32(esp, v); }
/* 7d488f: push 0xad6138 */
  { uint32_t v = 0xad6138u; esp -= 4; W32(esp, v); }
/* 7d4894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4895: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4897u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4897: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d489a: mov edi, 1 */
  edi = 0x1u;
L_7d489f: /* 7d489f: mov eax, dword ptr [0xce0a40] */
  eax = R32((uint32_t)(0xce0a40u));
/* 7d48a4: mov ecx, 0xce0a40 */
  ecx = 0xce0a40u;
/* 7d48a9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d48acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d48ac: cmp eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d48af: je 0x7d48de */
  if (zf) goto L_7d48de;
L_7d48b1: /* 7d48b1: mov edx, dword ptr [0xce0a40] */
  edx = R32((uint32_t)(0xce0a40u));
/* 7d48b7: mov ecx, 0xce0a40 */
  ecx = 0xce0a40u;
/* 7d48bc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d48bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d48bf: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 7d48c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d48c2: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d48c7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d48c9: push 0xad6198 */
  { uint32_t v = 0xad6198u; esp -= 4; W32(esp, v); }
/* 7d48ce: push 0xad61c0 */
  { uint32_t v = 0xad61c0u; esp -= 4; W32(esp, v); }
/* 7d48d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d48d4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d48d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d48d6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d48d9: mov edi, 1 */
  edi = 0x1u;
L_7d48de: /* 7d48de: mov edx, dword ptr [0xcdf328] */
  edx = R32((uint32_t)(0xcdf328u));
/* 7d48e4: mov ecx, 0xcdf328 */
  ecx = 0xcdf328u;
/* 7d48e9: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d48ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d48ec: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d48f1: je 0x7d4923 */
  if (zf) goto L_7d4923;
L_7d48f3: /* 7d48f3: mov eax, dword ptr [0xcdf328] */
  eax = R32((uint32_t)(0xcdf328u));
/* 7d48f8: mov ecx, 0xcdf328 */
  ecx = 0xcdf328u;
/* 7d48fd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4900u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4900: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4906: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4908: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d490d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d490e: push 0xad6220 */
  { uint32_t v = 0xad6220u; esp -= 4; W32(esp, v); }
/* 7d4913: push 0xad6238 */
  { uint32_t v = 0xad6238u; esp -= 4; W32(esp, v); }
/* 7d4918: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4919: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d491bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d491b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d491e: mov edi, 1 */
  edi = 0x1u;
L_7d4923: /* 7d4923: mov eax, dword ptr [0xcdedf8] */
  eax = R32((uint32_t)(0xcdedf8u));
/* 7d4928: mov ecx, 0xcdedf8 */
  ecx = 0xcdedf8u;
/* 7d492d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4930u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4930: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4933: je 0x7d4962 */
  if (zf) goto L_7d4962;
L_7d4935: /* 7d4935: mov edx, dword ptr [0xcdedf8] */
  edx = R32((uint32_t)(0xcdedf8u));
/* 7d493b: mov ecx, 0xcdedf8 */
  ecx = 0xcdedf8u;
/* 7d4940: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4943u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4943: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d4945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4946: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d494b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d494d: push 0xad6298 */
  { uint32_t v = 0xad6298u; esp -= 4; W32(esp, v); }
/* 7d4952: push 0xad62c8 */
  { uint32_t v = 0xad62c8u; esp -= 4; W32(esp, v); }
/* 7d4957: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4958: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d495au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d495a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d495d: mov edi, 1 */
  edi = 0x1u;
L_7d4962: /* 7d4962: mov edx, dword ptr [0xcdc478] */
  edx = R32((uint32_t)(0xcdc478u));
/* 7d4968: mov ecx, 0xcdc478 */
  ecx = 0xcdc478u;
/* 7d496d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4970u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4970: cmp eax, 0x50 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4973: je 0x7d49a2 */
  if (zf) goto L_7d49a2;
L_7d4975: /* 7d4975: mov eax, dword ptr [0xcdc478] */
  eax = R32((uint32_t)(0xcdc478u));
/* 7d497a: mov ecx, 0xcdc478 */
  ecx = 0xcdc478u;
/* 7d497f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4982u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4982: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4988: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d498a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7d498c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d498d: push 0xad6328 */
  { uint32_t v = 0xad6328u; esp -= 4; W32(esp, v); }
/* 7d4992: push 0xad6348 */
  { uint32_t v = 0xad6348u; esp -= 4; W32(esp, v); }
/* 7d4997: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4998: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d499au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d499a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d499d: mov edi, 1 */
  edi = 0x1u;
L_7d49a2: /* 7d49a2: mov eax, dword ptr [0xcda558] */
  eax = R32((uint32_t)(0xcda558u));
/* 7d49a7: mov ecx, 0xcda558 */
  ecx = 0xcda558u;
/* 7d49ac: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d49afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d49af: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d49b2: je 0x7d49e1 */
  if (zf) goto L_7d49e1;
L_7d49b4: /* 7d49b4: mov edx, dword ptr [0xcda558] */
  edx = R32((uint32_t)(0xcda558u));
/* 7d49ba: mov ecx, 0xcda558 */
  ecx = 0xcda558u;
/* 7d49bf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d49c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d49c2: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7d49c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d49c5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d49ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d49cc: push 0xad63a8 */
  { uint32_t v = 0xad63a8u; esp -= 4; W32(esp, v); }
/* 7d49d1: push 0xad63c0 */
  { uint32_t v = 0xad63c0u; esp -= 4; W32(esp, v); }
/* 7d49d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d49d7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d49d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d49d9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d49dc: mov edi, 1 */
  edi = 0x1u;
L_7d49e1: /* 7d49e1: mov edx, dword ptr [0xcde8c8] */
  edx = R32((uint32_t)(0xcde8c8u));
/* 7d49e7: mov ecx, 0xcde8c8 */
  ecx = 0xcde8c8u;
/* 7d49ec: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d49efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d49ef: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d49f2: je 0x7d4a21 */
  if (zf) goto L_7d4a21;
L_7d49f4: /* 7d49f4: mov eax, dword ptr [0xcde8c8] */
  eax = R32((uint32_t)(0xcde8c8u));
/* 7d49f9: mov ecx, 0xcde8c8 */
  ecx = 0xcde8c8u;
/* 7d49fe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4a01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a01: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4a07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4a09: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d4a0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4a0c: push 0xad6420 */
  { uint32_t v = 0xad6420u; esp -= 4; W32(esp, v); }
/* 7d4a11: push 0xad6448 */
  { uint32_t v = 0xad6448u; esp -= 4; W32(esp, v); }
/* 7d4a16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4a17: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4a19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a19: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4a1c: mov edi, 1 */
  edi = 0x1u;
L_7d4a21: /* 7d4a21: mov eax, dword ptr [0xcde398] */
  eax = R32((uint32_t)(0xcde398u));
/* 7d4a26: mov ecx, 0xcde398 */
  ecx = 0xcde398u;
/* 7d4a2b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4a2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a2e: cmp eax, 0x84 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4a33: je 0x7d4a65 */
  if (zf) goto L_7d4a65;
L_7d4a35: /* 7d4a35: mov edx, dword ptr [0xcde398] */
  edx = R32((uint32_t)(0xcde398u));
/* 7d4a3b: mov ecx, 0xcde398 */
  ecx = 0xcde398u;
/* 7d4a40: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4a43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a43: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 7d4a48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4a49: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4a4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4a50: push 0xad64a8 */
  { uint32_t v = 0xad64a8u; esp -= 4; W32(esp, v); }
/* 7d4a55: push 0xad64d8 */
  { uint32_t v = 0xad64d8u; esp -= 4; W32(esp, v); }
/* 7d4a5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4a5b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4a5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a5d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4a60: mov edi, 1 */
  edi = 0x1u;
L_7d4a65: /* 7d4a65: mov edx, dword ptr [0xcdde68] */
  edx = R32((uint32_t)(0xcdde68u));
/* 7d4a6b: mov ecx, 0xcdde68 */
  ecx = 0xcdde68u;
/* 7d4a70: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4a73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a73: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4a76: je 0x7d4aa5 */
  if (zf) goto L_7d4aa5;
L_7d4a78: /* 7d4a78: mov eax, dword ptr [0xcdde68] */
  eax = R32((uint32_t)(0xcdde68u));
/* 7d4a7d: mov ecx, 0xcdde68 */
  ecx = 0xcdde68u;
/* 7d4a82: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4a85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a85: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4a8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4a8d: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7d4a8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4a90: push 0xad6538 */
  { uint32_t v = 0xad6538u; esp -= 4; W32(esp, v); }
/* 7d4a95: push 0xad6568 */
  { uint32_t v = 0xad6568u; esp -= 4; W32(esp, v); }
/* 7d4a9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4a9b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4a9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a9d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4aa0: mov edi, 1 */
  edi = 0x1u;
L_7d4aa5: /* 7d4aa5: mov eax, dword ptr [0xcdd938] */
  eax = R32((uint32_t)(0xcdd938u));
/* 7d4aaa: mov ecx, 0xcdd938 */
  ecx = 0xcdd938u;
/* 7d4aaf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4ab2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ab2: cmp eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4ab5: je 0x7d4ae4 */
  if (zf) goto L_7d4ae4;
L_7d4ab7: /* 7d4ab7: mov edx, dword ptr [0xcdd938] */
  edx = R32((uint32_t)(0xcdd938u));
/* 7d4abd: mov ecx, 0xcdd938 */
  ecx = 0xcdd938u;
/* 7d4ac2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4ac5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ac5: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7d4ac7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4ac8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4acd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4acf: push 0xad65c8 */
  { uint32_t v = 0xad65c8u; esp -= 4; W32(esp, v); }
/* 7d4ad4: push 0xad65f8 */
  { uint32_t v = 0xad65f8u; esp -= 4; W32(esp, v); }
/* 7d4ad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4ada: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4adcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4adc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4adf: mov edi, 1 */
  edi = 0x1u;
L_7d4ae4: /* 7d4ae4: mov edx, dword ptr [0xcdd408] */
  edx = R32((uint32_t)(0xcdd408u));
/* 7d4aea: mov ecx, 0xcdd408 */
  ecx = 0xcdd408u;
/* 7d4aef: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4af2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4af2: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4af5: je 0x7d4b24 */
  if (zf) goto L_7d4b24;
L_7d4af7: /* 7d4af7: mov eax, dword ptr [0xcdd408] */
  eax = R32((uint32_t)(0xcdd408u));
/* 7d4afc: mov ecx, 0xcdd408 */
  ecx = 0xcdd408u;
/* 7d4b01: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b04: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4b0a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4b0c: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d4b0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4b0f: push 0xad6658 */
  { uint32_t v = 0xad6658u; esp -= 4; W32(esp, v); }
/* 7d4b14: push 0xad6678 */
  { uint32_t v = 0xad6678u; esp -= 4; W32(esp, v); }
/* 7d4b19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4b1a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4b1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b1c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4b1f: mov edi, 1 */
  edi = 0x1u;
L_7d4b24: /* 7d4b24: mov eax, dword ptr [0xcdced8] */
  eax = R32((uint32_t)(0xcdced8u));
/* 7d4b29: mov ecx, 0xcdced8 */
  ecx = 0xcdced8u;
/* 7d4b2e: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4b31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b31: cmp eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4b34: je 0x7d4b63 */
  if (zf) goto L_7d4b63;
L_7d4b36: /* 7d4b36: mov edx, dword ptr [0xcdced8] */
  edx = R32((uint32_t)(0xcdced8u));
/* 7d4b3c: mov ecx, 0xcdced8 */
  ecx = 0xcdced8u;
/* 7d4b41: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4b44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b44: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 7d4b46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4b47: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4b4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4b4e: push 0xad66d8 */
  { uint32_t v = 0xad66d8u; esp -= 4; W32(esp, v); }
/* 7d4b53: push 0xad6700 */
  { uint32_t v = 0xad6700u; esp -= 4; W32(esp, v); }
/* 7d4b58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4b59: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4b5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b5b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4b5e: mov edi, 1 */
  edi = 0x1u;
L_7d4b63: /* 7d4b63: mov edx, dword ptr [0xcdc9a8] */
  edx = R32((uint32_t)(0xcdc9a8u));
/* 7d4b69: mov ecx, 0xcdc9a8 */
  ecx = 0xcdc9a8u;
/* 7d4b6e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4b71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b71: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4b74: je 0x7d4ba3 */
  if (zf) goto L_7d4ba3;
L_7d4b76: /* 7d4b76: mov eax, dword ptr [0xcdc9a8] */
  eax = R32((uint32_t)(0xcdc9a8u));
/* 7d4b7b: mov ecx, 0xcdc9a8 */
  ecx = 0xcdc9a8u;
/* 7d4b80: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4b83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b83: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4b89: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4b8b: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d4b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4b8e: push 0xad6760 */
  { uint32_t v = 0xad6760u; esp -= 4; W32(esp, v); }
/* 7d4b93: push 0xad6780 */
  { uint32_t v = 0xad6780u; esp -= 4; W32(esp, v); }
/* 7d4b98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4b99: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4b9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b9b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4b9e: mov edi, 1 */
  edi = 0x1u;
L_7d4ba3: /* 7d4ba3: mov eax, dword ptr [0xcdbf48] */
  eax = R32((uint32_t)(0xcdbf48u));
/* 7d4ba8: mov ecx, 0xcdbf48 */
  ecx = 0xcdbf48u;
/* 7d4bad: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4bb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4bb0: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4bb5: je 0x7d4be7 */
  if (zf) goto L_7d4be7;
L_7d4bb7: /* 7d4bb7: mov edx, dword ptr [0xcdbf48] */
  edx = R32((uint32_t)(0xcdbf48u));
/* 7d4bbd: mov ecx, 0xcdbf48 */
  ecx = 0xcdbf48u;
/* 7d4bc2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4bc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4bc5: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d4bca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4bcb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4bd0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4bd2: push 0xad67e0 */
  { uint32_t v = 0xad67e0u; esp -= 4; W32(esp, v); }
/* 7d4bd7: push 0xad6800 */
  { uint32_t v = 0xad6800u; esp -= 4; W32(esp, v); }
/* 7d4bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4bdd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4bdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4bdf: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4be2: mov edi, 1 */
  edi = 0x1u;
L_7d4be7: /* 7d4be7: mov edx, dword ptr [0xcdba18] */
  edx = R32((uint32_t)(0xcdba18u));
/* 7d4bed: mov ecx, 0xcdba18 */
  ecx = 0xcdba18u;
/* 7d4bf2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4bf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4bf5: cmp eax, 0x88 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4bfa: je 0x7d4c2c */
  if (zf) goto L_7d4c2c;
L_7d4bfc: /* 7d4bfc: mov eax, dword ptr [0xcdba18] */
  eax = R32((uint32_t)(0xcdba18u));
/* 7d4c01: mov ecx, 0xcdba18 */
  ecx = 0xcdba18u;
/* 7d4c06: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4c09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c09: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4c0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4c11: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 7d4c16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4c17: push 0xad6860 */
  { uint32_t v = 0xad6860u; esp -= 4; W32(esp, v); }
/* 7d4c1c: push 0xad6880 */
  { uint32_t v = 0xad6880u; esp -= 4; W32(esp, v); }
/* 7d4c21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4c22: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4c24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c24: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4c27: mov edi, 1 */
  edi = 0x1u;
L_7d4c2c: /* 7d4c2c: mov eax, dword ptr [0xcdafb8] */
  eax = R32((uint32_t)(0xcdafb8u));
/* 7d4c31: mov ecx, 0xcdafb8 */
  ecx = 0xcdafb8u;
/* 7d4c36: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4c39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c39: cmp eax, 0x88 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4c3e: je 0x7d4c70 */
  if (zf) goto L_7d4c70;
L_7d4c40: /* 7d4c40: mov edx, dword ptr [0xcdafb8] */
  edx = R32((uint32_t)(0xcdafb8u));
/* 7d4c46: mov ecx, 0xcdafb8 */
  ecx = 0xcdafb8u;
/* 7d4c4b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4c4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c4e: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 7d4c53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4c54: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4c59: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4c5b: push 0xad68e0 */
  { uint32_t v = 0xad68e0u; esp -= 4; W32(esp, v); }
/* 7d4c60: push 0xad68f8 */
  { uint32_t v = 0xad68f8u; esp -= 4; W32(esp, v); }
/* 7d4c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4c66: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4c68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c68: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4c6b: mov edi, 1 */
  edi = 0x1u;
L_7d4c70: /* 7d4c70: mov edx, dword ptr [0xcdb4e8] */
  edx = R32((uint32_t)(0xcdb4e8u));
/* 7d4c76: mov ecx, 0xcdb4e8 */
  ecx = 0xcdb4e8u;
/* 7d4c7b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4c7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c7e: cmp eax, 0x8c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4c83: je 0x7d4cb5 */
  if (zf) goto L_7d4cb5;
L_7d4c85: /* 7d4c85: mov eax, dword ptr [0xcdb4e8] */
  eax = R32((uint32_t)(0xcdb4e8u));
/* 7d4c8a: mov ecx, 0xcdb4e8 */
  ecx = 0xcdb4e8u;
/* 7d4c8f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4c92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c92: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4c98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4c9a: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 7d4c9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4ca0: push 0xad6958 */
  { uint32_t v = 0xad6958u; esp -= 4; W32(esp, v); }
/* 7d4ca5: push 0xad6980 */
  { uint32_t v = 0xad6980u; esp -= 4; W32(esp, v); }
/* 7d4caa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4cab: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4cadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4cad: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4cb0: mov edi, 1 */
  edi = 0x1u;
L_7d4cb5: /* 7d4cb5: mov eax, dword ptr [0xcdaa88] */
  eax = R32((uint32_t)(0xcdaa88u));
/* 7d4cba: mov ecx, 0xcdaa88 */
  ecx = 0xcdaa88u;
/* 7d4cbf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4cc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4cc2: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4cc5: je 0x7d4cf4 */
  if (zf) goto L_7d4cf4;
L_7d4cc7: /* 7d4cc7: mov edx, dword ptr [0xcdaa88] */
  edx = R32((uint32_t)(0xcdaa88u));
/* 7d4ccd: mov ecx, 0xcdaa88 */
  ecx = 0xcdaa88u;
/* 7d4cd2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4cd5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7d4cd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4cd8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4cdd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4cdf: push 0xad69e0 */
  { uint32_t v = 0xad69e0u; esp -= 4; W32(esp, v); }
/* 7d4ce4: push 0xad69f8 */
  { uint32_t v = 0xad69f8u; esp -= 4; W32(esp, v); }
/* 7d4ce9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4cea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4cecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4cec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4cef: mov edi, 1 */
  edi = 0x1u;
L_7d4cf4: /* 7d4cf4: mov edx, dword ptr [0xcda028] */
  edx = R32((uint32_t)(0xcda028u));
/* 7d4cfa: mov ecx, 0xcda028 */
  ecx = 0xcda028u;
/* 7d4cff: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4d02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d02: cmp eax, 0x448 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x448u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4d07: je 0x7d4d39 */
  if (zf) goto L_7d4d39;
L_7d4d09: /* 7d4d09: mov eax, dword ptr [0xcda028] */
  eax = R32((uint32_t)(0xcda028u));
/* 7d4d0e: mov ecx, 0xcda028 */
  ecx = 0xcda028u;
/* 7d4d13: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4d16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d16: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4d1c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4d1e: push 0x448 */
  { uint32_t v = 0x448u; esp -= 4; W32(esp, v); }
/* 7d4d23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4d24: push 0xad6a58 */
  { uint32_t v = 0xad6a58u; esp -= 4; W32(esp, v); }
/* 7d4d29: push 0xad6a78 */
  { uint32_t v = 0xad6a78u; esp -= 4; W32(esp, v); }
/* 7d4d2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4d2f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4d31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d31: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4d34: mov edi, 1 */
  edi = 0x1u;
L_7d4d39: /* 7d4d39: mov eax, dword ptr [0xcd98d0] */
  eax = R32((uint32_t)(0xcd98d0u));
/* 7d4d3e: mov ecx, 0xcd98d0 */
  ecx = 0xcd98d0u;
/* 7d4d43: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4d46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d46: cmp eax, 0xf0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4d4b: je 0x7d4d7d */
  if (zf) goto L_7d4d7d;
L_7d4d4d: /* 7d4d4d: mov edx, dword ptr [0xcd98d0] */
  edx = R32((uint32_t)(0xcd98d0u));
/* 7d4d53: mov ecx, 0xcd98d0 */
  ecx = 0xcd98d0u;
/* 7d4d58: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4d5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d5b: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 7d4d60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4d61: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4d66: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4d68: push 0xad6ad8 */
  { uint32_t v = 0xad6ad8u; esp -= 4; W32(esp, v); }
/* 7d4d6d: push 0xad6af8 */
  { uint32_t v = 0xad6af8u; esp -= 4; W32(esp, v); }
/* 7d4d72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4d73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4d75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d75: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4d78: mov edi, 1 */
  edi = 0x1u;
L_7d4d7d: /* 7d4d7d: mov edx, dword ptr [0xcd93a0] */
  edx = R32((uint32_t)(0xcd93a0u));
/* 7d4d83: mov ecx, 0xcd93a0 */
  ecx = 0xcd93a0u;
/* 7d4d88: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4d8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d8b: cmp eax, 0x630 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x630u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4d90: je 0x7d4dc2 */
  if (zf) goto L_7d4dc2;
L_7d4d92: /* 7d4d92: mov eax, dword ptr [0xcd93a0] */
  eax = R32((uint32_t)(0xcd93a0u));
/* 7d4d97: mov ecx, 0xcd93a0 */
  ecx = 0xcd93a0u;
/* 7d4d9c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4d9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d9f: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4da5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4da7: push 0x630 */
  { uint32_t v = 0x630u; esp -= 4; W32(esp, v); }
/* 7d4dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4dad: push 0xad6b58 */
  { uint32_t v = 0xad6b58u; esp -= 4; W32(esp, v); }
/* 7d4db2: push 0xad6b70 */
  { uint32_t v = 0xad6b70u; esp -= 4; W32(esp, v); }
/* 7d4db7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4db8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4dbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4dba: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4dbd: mov edi, 1 */
  edi = 0x1u;
L_7d4dc2: /* 7d4dc2: mov eax, dword ptr [0xcc74c0] */
  eax = R32((uint32_t)(0xcc74c0u));
/* 7d4dc7: mov ecx, 0xcc74c0 */
  ecx = 0xcc74c0u;
/* 7d4dcc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4dcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4dcf: cmp eax, 0x598 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x598u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4dd4: je 0x7d4e06 */
  if (zf) goto L_7d4e06;
L_7d4dd6: /* 7d4dd6: mov edx, dword ptr [0xcc74c0] */
  edx = R32((uint32_t)(0xcc74c0u));
/* 7d4ddc: mov ecx, 0xcc74c0 */
  ecx = 0xcc74c0u;
/* 7d4de1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4de4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4de4: push 0x598 */
  { uint32_t v = 0x598u; esp -= 4; W32(esp, v); }
/* 7d4de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4dea: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4def: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4df1: push 0xad6bd0 */
  { uint32_t v = 0xad6bd0u; esp -= 4; W32(esp, v); }
/* 7d4df6: push 0xad6be0 */
  { uint32_t v = 0xad6be0u; esp -= 4; W32(esp, v); }
/* 7d4dfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4dfc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4dfe: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4e01: mov edi, 1 */
  edi = 0x1u;
L_7d4e06: /* 7d4e06: mov edx, dword ptr [0xcc91e8] */
  edx = R32((uint32_t)(0xcc91e8u));
/* 7d4e0c: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 7d4e11: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4e14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e14: cmp eax, 0xcc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4e19: je 0x7d4e4b */
  if (zf) goto L_7d4e4b;
L_7d4e1b: /* 7d4e1b: mov eax, dword ptr [0xcc91e8] */
  eax = R32((uint32_t)(0xcc91e8u));
/* 7d4e20: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 7d4e25: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4e28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e28: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4e2e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4e30: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 7d4e35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4e36: push 0xad6c40 */
  { uint32_t v = 0xad6c40u; esp -= 4; W32(esp, v); }
/* 7d4e3b: push 0xad6c68 */
  { uint32_t v = 0xad6c68u; esp -= 4; W32(esp, v); }
/* 7d4e40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4e41: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4e43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e43: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4e46: mov edi, 1 */
  edi = 0x1u;
L_7d4e4b: /* 7d4e4b: mov eax, dword ptr [0xcc8cb8] */
  eax = R32((uint32_t)(0xcc8cb8u));
/* 7d4e50: mov ecx, 0xcc8cb8 */
  ecx = 0xcc8cb8u;
/* 7d4e55: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4e58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e58: cmp eax, 0x4c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4e5d: je 0x7d4e8f */
  if (zf) goto L_7d4e8f;
L_7d4e5f: /* 7d4e5f: mov edx, dword ptr [0xcc8cb8] */
  edx = R32((uint32_t)(0xcc8cb8u));
/* 7d4e65: mov ecx, 0xcc8cb8 */
  ecx = 0xcc8cb8u;
/* 7d4e6a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4e6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e6d: push 0x4c8 */
  { uint32_t v = 0x4c8u; esp -= 4; W32(esp, v); }
/* 7d4e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4e73: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4e78: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4e7a: push 0xad6cc8 */
  { uint32_t v = 0xad6cc8u; esp -= 4; W32(esp, v); }
/* 7d4e7f: push 0xad6ce0 */
  { uint32_t v = 0xad6ce0u; esp -= 4; W32(esp, v); }
/* 7d4e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4e85: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4e87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e87: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4e8a: mov edi, 1 */
  edi = 0x1u;
L_7d4e8f: /* 7d4e8f: mov edx, dword ptr [0xcc6d78] */
  edx = R32((uint32_t)(0xcc6d78u));
/* 7d4e95: mov ecx, 0xcc6d78 */
  ecx = 0xcc6d78u;
/* 7d4e9a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e9d: cmp eax, 0x2c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4ea2: je 0x7d4ed4 */
  if (zf) goto L_7d4ed4;
L_7d4ea4: /* 7d4ea4: mov eax, dword ptr [0xcc6d78] */
  eax = R32((uint32_t)(0xcc6d78u));
/* 7d4ea9: mov ecx, 0xcc6d78 */
  ecx = 0xcc6d78u;
/* 7d4eae: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4eb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4eb1: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4eb7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4eb9: push 0x2c8 */
  { uint32_t v = 0x2c8u; esp -= 4; W32(esp, v); }
/* 7d4ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4ebf: push 0xad6d40 */
  { uint32_t v = 0xad6d40u; esp -= 4; W32(esp, v); }
/* 7d4ec4: push 0xad6d68 */
  { uint32_t v = 0xad6d68u; esp -= 4; W32(esp, v); }
/* 7d4ec9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4eca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4eccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ecc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4ecf: mov edi, 1 */
  edi = 0x1u;
L_7d4ed4: /* 7d4ed4: mov eax, dword ptr [0xcc6848] */
  eax = R32((uint32_t)(0xcc6848u));
/* 7d4ed9: mov ecx, 0xcc6848 */
  ecx = 0xcc6848u;
/* 7d4ede: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4ee1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ee1: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4ee6: je 0x7d4f18 */
  if (zf) goto L_7d4f18;
L_7d4ee8: /* 7d4ee8: mov edx, dword ptr [0xcc6848] */
  edx = R32((uint32_t)(0xcc6848u));
/* 7d4eee: mov ecx, 0xcc6848 */
  ecx = 0xcc6848u;
/* 7d4ef3: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4ef6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ef6: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d4efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4efc: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4f01: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4f03: push 0xad6dc8 */
  { uint32_t v = 0xad6dc8u; esp -= 4; W32(esp, v); }
/* 7d4f08: push 0xad6de0 */
  { uint32_t v = 0xad6de0u; esp -= 4; W32(esp, v); }
/* 7d4f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4f0e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4f10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f10: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4f13: mov edi, 1 */
  edi = 0x1u;
L_7d4f18: /* 7d4f18: mov edx, dword ptr [0xcc5588] */
  edx = R32((uint32_t)(0xcc5588u));
/* 7d4f1e: mov ecx, 0xcc5588 */
  ecx = 0xcc5588u;
/* 7d4f23: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4f26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f26: cmp eax, 0x6a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4f2b: je 0x7d4f5d */
  if (zf) goto L_7d4f5d;
L_7d4f2d: /* 7d4f2d: mov eax, dword ptr [0xcc5588] */
  eax = R32((uint32_t)(0xcc5588u));
/* 7d4f32: mov ecx, 0xcc5588 */
  ecx = 0xcc5588u;
/* 7d4f37: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4f3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f3a: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4f40: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4f42: push 0x6a8 */
  { uint32_t v = 0x6a8u; esp -= 4; W32(esp, v); }
/* 7d4f47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4f48: push 0xad6e40 */
  { uint32_t v = 0xad6e40u; esp -= 4; W32(esp, v); }
/* 7d4f4d: push 0xad6e50 */
  { uint32_t v = 0xad6e50u; esp -= 4; W32(esp, v); }
/* 7d4f52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4f53: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4f55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f55: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4f58: mov edi, 1 */
  edi = 0x1u;
L_7d4f5d: /* 7d4f5d: mov eax, dword ptr [0xb915a0] */
  eax = R32((uint32_t)(0xb915a0u));
/* 7d4f62: mov ecx, 0xb915a0 */
  ecx = 0xb915a0u;
/* 7d4f67: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4f6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f6a: cmp eax, 0x4a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4f6f: je 0x7d4fa1 */
  if (zf) goto L_7d4fa1;
L_7d4f71: /* 7d4f71: mov edx, dword ptr [0xb915a0] */
  edx = R32((uint32_t)(0xb915a0u));
/* 7d4f77: mov ecx, 0xb915a0 */
  ecx = 0xb915a0u;
/* 7d4f7c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4f7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f7f: push 0x4a8 */
  { uint32_t v = 0x4a8u; esp -= 4; W32(esp, v); }
/* 7d4f84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4f85: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4f8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4f8c: push 0xad6eb0 */
  { uint32_t v = 0xad6eb0u; esp -= 4; W32(esp, v); }
/* 7d4f91: push 0xad6ed0 */
  { uint32_t v = 0xad6ed0u; esp -= 4; W32(esp, v); }
/* 7d4f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4f97: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4f99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f99: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4f9c: mov edi, 1 */
  edi = 0x1u;
L_7d4fa1: /* 7d4fa1: mov edx, dword ptr [0xb8e7e0] */
  edx = R32((uint32_t)(0xb8e7e0u));
/* 7d4fa7: mov ecx, 0xb8e7e0 */
  ecx = 0xb8e7e0u;
/* 7d4fac: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4fafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4faf: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4fb2: je 0x7d4fe1 */
  if (zf) goto L_7d4fe1;
L_7d4fb4: /* 7d4fb4: mov eax, dword ptr [0xb8e7e0] */
  eax = R32((uint32_t)(0xb8e7e0u));
/* 7d4fb9: mov ecx, 0xb8e7e0 */
  ecx = 0xb8e7e0u;
/* 7d4fbe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4fc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4fc1: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4fc7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4fc9: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7d4fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4fcc: push 0xad6f30 */
  { uint32_t v = 0xad6f30u; esp -= 4; W32(esp, v); }
/* 7d4fd1: push 0xad6f58 */
  { uint32_t v = 0xad6f58u; esp -= 4; W32(esp, v); }
/* 7d4fd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4fd7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4fd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4fd9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4fdc: mov edi, 1 */
  edi = 0x1u;
L_7d4fe1: /* 7d4fe1: mov eax, dword ptr [0xb89a10] */
  eax = R32((uint32_t)(0xb89a10u));
/* 7d4fe6: mov ecx, 0xb89a10 */
  ecx = 0xb89a10u;
/* 7d4feb: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4feeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4fee: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4ff1: je 0x7d5020 */
  if (zf) goto L_7d5020;
L_7d4ff3: /* 7d4ff3: mov edx, dword ptr [0xb89a10] */
  edx = R32((uint32_t)(0xb89a10u));
/* 7d4ff9: mov ecx, 0xb89a10 */
  ecx = 0xb89a10u;
/* 7d4ffe: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5001u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5001: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7d5003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5004: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5009: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d500b: push 0xad6fb8 */
  { uint32_t v = 0xad6fb8u; esp -= 4; W32(esp, v); }
/* 7d5010: push 0xad6fd0 */
  { uint32_t v = 0xad6fd0u; esp -= 4; W32(esp, v); }
/* 7d5015: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5016: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5018u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5018: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d501b: mov edi, 1 */
  edi = 0x1u;
L_7d5020: /* 7d5020: mov edx, dword ptr [0xb8e2b0] */
  edx = R32((uint32_t)(0xb8e2b0u));
/* 7d5026: mov ecx, 0xb8e2b0 */
  ecx = 0xb8e2b0u;
/* 7d502b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d502eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d502e: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5031: je 0x7d5060 */
  if (zf) goto L_7d5060;
L_7d5033: /* 7d5033: mov eax, dword ptr [0xb8e2b0] */
  eax = R32((uint32_t)(0xb8e2b0u));
/* 7d5038: mov ecx, 0xb8e2b0 */
  ecx = 0xb8e2b0u;
/* 7d503d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5040u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5040: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5046: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5048: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 7d504a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d504b: push 0xad7030 */
  { uint32_t v = 0xad7030u; esp -= 4; W32(esp, v); }
/* 7d5050: push 0xad7058 */
  { uint32_t v = 0xad7058u; esp -= 4; W32(esp, v); }
/* 7d5055: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5056: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5058u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5058: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d505b: mov edi, 1 */
  edi = 0x1u;
L_7d5060: /* 7d5060: mov eax, dword ptr [0xb8dd80] */
  eax = R32((uint32_t)(0xb8dd80u));
/* 7d5065: mov ecx, 0xb8dd80 */
  ecx = 0xb8dd80u;
/* 7d506a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d506du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d506d: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5070: je 0x7d509f */
  if (zf) goto L_7d509f;
L_7d5072: /* 7d5072: mov edx, dword ptr [0xb8dd80] */
  edx = R32((uint32_t)(0xb8dd80u));
/* 7d5078: mov ecx, 0xb8dd80 */
  ecx = 0xb8dd80u;
/* 7d507d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5080u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5080: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d5082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5083: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5088: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d508a: push 0xad70b8 */
  { uint32_t v = 0xad70b8u; esp -= 4; W32(esp, v); }
/* 7d508f: push 0xad70d8 */
  { uint32_t v = 0xad70d8u; esp -= 4; W32(esp, v); }
/* 7d5094: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5095: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5097u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5097: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d509a: mov edi, 1 */
  edi = 0x1u;
L_7d509f: /* 7d509f: mov edx, dword ptr [0xb8d850] */
  edx = R32((uint32_t)(0xb8d850u));
/* 7d50a5: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 7d50aa: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d50adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50ad: cmp eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d50b0: je 0x7d50df */
  if (zf) goto L_7d50df;
L_7d50b2: /* 7d50b2: mov eax, dword ptr [0xb8d850] */
  eax = R32((uint32_t)(0xb8d850u));
/* 7d50b7: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 7d50bc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d50bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50bf: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d50c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d50c7: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7d50c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d50ca: push 0xad7138 */
  { uint32_t v = 0xad7138u; esp -= 4; W32(esp, v); }
/* 7d50cf: push 0xad7150 */
  { uint32_t v = 0xad7150u; esp -= 4; W32(esp, v); }
/* 7d50d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d50d5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d50d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50d7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d50da: mov edi, 1 */
  edi = 0x1u;
L_7d50df: /* 7d50df: mov eax, dword ptr [0xb8d320] */
  eax = R32((uint32_t)(0xb8d320u));
/* 7d50e4: mov ecx, 0xb8d320 */
  ecx = 0xb8d320u;
/* 7d50e9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d50ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50ec: cmp eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d50ef: je 0x7d511e */
  if (zf) goto L_7d511e;
L_7d50f1: /* 7d50f1: mov edx, dword ptr [0xb8d320] */
  edx = R32((uint32_t)(0xb8d320u));
/* 7d50f7: mov ecx, 0xb8d320 */
  ecx = 0xb8d320u;
/* 7d50fc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d50ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50ff: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7d5101: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5102: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5107: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5109: push 0xad71b0 */
  { uint32_t v = 0xad71b0u; esp -= 4; W32(esp, v); }
/* 7d510e: push 0xad71d0 */
  { uint32_t v = 0xad71d0u; esp -= 4; W32(esp, v); }
/* 7d5113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5114: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5116u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5116: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5119: mov edi, 1 */
  edi = 0x1u;
L_7d511e: /* 7d511e: mov edx, dword ptr [0xb8cdf0] */
  edx = R32((uint32_t)(0xb8cdf0u));
/* 7d5124: mov ecx, 0xb8cdf0 */
  ecx = 0xb8cdf0u;
/* 7d5129: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d512cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d512c: cmp eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d512f: je 0x7d515e */
  if (zf) goto L_7d515e;
L_7d5131: /* 7d5131: mov eax, dword ptr [0xb8cdf0] */
  eax = R32((uint32_t)(0xb8cdf0u));
/* 7d5136: mov ecx, 0xb8cdf0 */
  ecx = 0xb8cdf0u;
/* 7d513b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d513eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d513e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5144: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5146: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7d5148: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5149: push 0xad7230 */
  { uint32_t v = 0xad7230u; esp -= 4; W32(esp, v); }
/* 7d514e: push 0xad7250 */
  { uint32_t v = 0xad7250u; esp -= 4; W32(esp, v); }
/* 7d5153: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5154: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5156u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5156: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5159: mov edi, 1 */
  edi = 0x1u;
L_7d515e: /* 7d515e: mov eax, dword ptr [0xb89f40] */
  eax = R32((uint32_t)(0xb89f40u));
/* 7d5163: mov ecx, 0xb89f40 */
  ecx = 0xb89f40u;
/* 7d5168: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d516bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d516b: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d516e: je 0x7d519d */
  if (zf) goto L_7d519d;
L_7d5170: /* 7d5170: mov edx, dword ptr [0xb89f40] */
  edx = R32((uint32_t)(0xb89f40u));
/* 7d5176: mov ecx, 0xb89f40 */
  ecx = 0xb89f40u;
/* 7d517b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d517eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d517e: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7d5180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5181: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5186: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5188: push 0xad72b0 */
  { uint32_t v = 0xad72b0u; esp -= 4; W32(esp, v); }
/* 7d518d: push 0xad72d0 */
  { uint32_t v = 0xad72d0u; esp -= 4; W32(esp, v); }
/* 7d5192: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5193: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5195: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5198: mov edi, 1 */
  edi = 0x1u;
L_7d519d: /* 7d519d: mov edx, dword ptr [0xb8c8c0] */
  edx = R32((uint32_t)(0xb8c8c0u));
/* 7d51a3: mov ecx, 0xb8c8c0 */
  ecx = 0xb8c8c0u;
/* 7d51a8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d51abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d51ab: cmp eax, 0x84 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d51b0: je 0x7d51e2 */
  if (zf) goto L_7d51e2;
L_7d51b2: /* 7d51b2: mov eax, dword ptr [0xb8c8c0] */
  eax = R32((uint32_t)(0xb8c8c0u));
/* 7d51b7: mov ecx, 0xb8c8c0 */
  ecx = 0xb8c8c0u;
/* 7d51bc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d51bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d51bf: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d51c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d51c7: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 7d51cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d51cd: push 0xad7330 */
  { uint32_t v = 0xad7330u; esp -= 4; W32(esp, v); }
/* 7d51d2: push 0xad7348 */
  { uint32_t v = 0xad7348u; esp -= 4; W32(esp, v); }
/* 7d51d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d51d8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d51dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d51da: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d51dd: mov edi, 1 */
  edi = 0x1u;
L_7d51e2: /* 7d51e2: mov eax, dword ptr [0xb8c390] */
  eax = R32((uint32_t)(0xb8c390u));
/* 7d51e7: mov ecx, 0xb8c390 */
  ecx = 0xb8c390u;
/* 7d51ec: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d51efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d51ef: cmp eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d51f2: je 0x7d5221 */
  if (zf) goto L_7d5221;
L_7d51f4: /* 7d51f4: mov edx, dword ptr [0xb8c390] */
  edx = R32((uint32_t)(0xb8c390u));
/* 7d51fa: mov ecx, 0xb8c390 */
  ecx = 0xb8c390u;
/* 7d51ff: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5202: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7d5204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5205: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d520a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d520c: push 0xad73a8 */
  { uint32_t v = 0xad73a8u; esp -= 4; W32(esp, v); }
/* 7d5211: push 0xad73c0 */
  { uint32_t v = 0xad73c0u; esp -= 4; W32(esp, v); }
/* 7d5216: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5217: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5219u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5219: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d521c: mov edi, 1 */
  edi = 0x1u;
L_7d5221: /* 7d5221: mov edx, dword ptr [0xb8be60] */
  edx = R32((uint32_t)(0xb8be60u));
/* 7d5227: mov ecx, 0xb8be60 */
  ecx = 0xb8be60u;
/* 7d522c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d522fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d522f: cmp eax, 0xb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5234: je 0x7d5266 */
  if (zf) goto L_7d5266;
L_7d5236: /* 7d5236: mov eax, dword ptr [0xb8be60] */
  eax = R32((uint32_t)(0xb8be60u));
/* 7d523b: mov ecx, 0xb8be60 */
  ecx = 0xb8be60u;
/* 7d5240: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5243u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5243: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5249: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d524b: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* 7d5250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5251: push 0xad7420 */
  { uint32_t v = 0xad7420u; esp -= 4; W32(esp, v); }
/* 7d5256: push 0xad7440 */
  { uint32_t v = 0xad7440u; esp -= 4; W32(esp, v); }
/* 7d525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d525c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d525eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d525e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5261: mov edi, 1 */
  edi = 0x1u;
L_7d5266: /* 7d5266: mov eax, dword ptr [0xb8b930] */
  eax = R32((uint32_t)(0xb8b930u));
/* 7d526b: mov ecx, 0xb8b930 */
  ecx = 0xb8b930u;
/* 7d5270: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5273u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5273: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5278: je 0x7d52aa */
  if (zf) goto L_7d52aa;
L_7d527a: /* 7d527a: mov edx, dword ptr [0xb8b930] */
  edx = R32((uint32_t)(0xb8b930u));
/* 7d5280: mov ecx, 0xb8b930 */
  ecx = 0xb8b930u;
/* 7d5285: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5288u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5288: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 7d528d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d528e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5293: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5295: push 0xad74a0 */
  { uint32_t v = 0xad74a0u; esp -= 4; W32(esp, v); }
/* 7d529a: push 0xad74d0 */
  { uint32_t v = 0xad74d0u; esp -= 4; W32(esp, v); }
/* 7d529f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d52a0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d52a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52a2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d52a5: mov edi, 1 */
  edi = 0x1u;
L_7d52aa: /* 7d52aa: mov edx, dword ptr [0xb8b400] */
  edx = R32((uint32_t)(0xb8b400u));
/* 7d52b0: mov ecx, 0xb8b400 */
  ecx = 0xb8b400u;
/* 7d52b5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d52b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52b8: cmp eax, 0xc4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d52bd: je 0x7d52ef */
  if (zf) goto L_7d52ef;
L_7d52bf: /* 7d52bf: mov eax, dword ptr [0xb8b400] */
  eax = R32((uint32_t)(0xb8b400u));
/* 7d52c4: mov ecx, 0xb8b400 */
  ecx = 0xb8b400u;
/* 7d52c9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d52ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52cc: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d52d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d52d4: push 0xc4 */
  { uint32_t v = 0xc4u; esp -= 4; W32(esp, v); }
/* 7d52d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d52da: push 0xad7530 */
  { uint32_t v = 0xad7530u; esp -= 4; W32(esp, v); }
/* 7d52df: push 0xad7548 */
  { uint32_t v = 0xad7548u; esp -= 4; W32(esp, v); }
/* 7d52e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d52e5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d52e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52e7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d52ea: mov edi, 1 */
  edi = 0x1u;
L_7d52ef: /* 7d52ef: mov eax, dword ptr [0xb8aed0] */
  eax = R32((uint32_t)(0xb8aed0u));
/* 7d52f4: mov ecx, 0xb8aed0 */
  ecx = 0xb8aed0u;
/* 7d52f9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d52fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52fc: cmp eax, 0x94 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5301: je 0x7d5333 */
  if (zf) goto L_7d5333;
L_7d5303: /* 7d5303: mov edx, dword ptr [0xb8aed0] */
  edx = R32((uint32_t)(0xb8aed0u));
/* 7d5309: mov ecx, 0xb8aed0 */
  ecx = 0xb8aed0u;
/* 7d530e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5311u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5311: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 7d5316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5317: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d531c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d531e: push 0xad75a8 */
  { uint32_t v = 0xad75a8u; esp -= 4; W32(esp, v); }
/* 7d5323: push 0xad75c0 */
  { uint32_t v = 0xad75c0u; esp -= 4; W32(esp, v); }
/* 7d5328: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5329: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d532bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d532b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d532e: mov edi, 1 */
  edi = 0x1u;
L_7d5333: /* 7d5333: mov edx, dword ptr [0xb8a9a0] */
  edx = R32((uint32_t)(0xb8a9a0u));
/* 7d5339: mov ecx, 0xb8a9a0 */
  ecx = 0xb8a9a0u;
/* 7d533e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5341u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5341: cmp eax, 0x94 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5346: je 0x7d5378 */
  if (zf) goto L_7d5378;
L_7d5348: /* 7d5348: mov eax, dword ptr [0xb8a9a0] */
  eax = R32((uint32_t)(0xb8a9a0u));
/* 7d534d: mov ecx, 0xb8a9a0 */
  ecx = 0xb8a9a0u;
/* 7d5352: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5355u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5355: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d535b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d535d: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 7d5362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5363: push 0xad7620 */
  { uint32_t v = 0xad7620u; esp -= 4; W32(esp, v); }
/* 7d5368: push 0xad7638 */
  { uint32_t v = 0xad7638u; esp -= 4; W32(esp, v); }
/* 7d536d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d536e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5370u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5370: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5373: mov edi, 1 */
  edi = 0x1u;
L_7d5378: /* 7d5378: mov eax, dword ptr [0xb8a470] */
  eax = R32((uint32_t)(0xb8a470u));
/* 7d537d: mov ecx, 0xb8a470 */
  ecx = 0xb8a470u;
/* 7d5382: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5385: cmp eax, 0xa4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d538a: je 0x7d53bc */
  if (zf) goto L_7d53bc;
L_7d538c: /* 7d538c: mov edx, dword ptr [0xb8a470] */
  edx = R32((uint32_t)(0xb8a470u));
/* 7d5392: mov ecx, 0xb8a470 */
  ecx = 0xb8a470u;
/* 7d5397: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d539au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d539a: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 7d539f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d53a0: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d53a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d53a7: push 0xad7698 */
  { uint32_t v = 0xad7698u; esp -= 4; W32(esp, v); }
/* 7d53ac: push 0xad76c0 */
  { uint32_t v = 0xad76c0u; esp -= 4; W32(esp, v); }
/* 7d53b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d53b2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d53b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d53b4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d53b7: mov edi, 1 */
  edi = 0x1u;
L_7d53bc: /* 7d53bc: mov edx, dword ptr [0xb894e0] */
  edx = R32((uint32_t)(0xb894e0u));
/* 7d53c2: mov ecx, 0xb894e0 */
  ecx = 0xb894e0u;
/* 7d53c7: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d53cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d53ca: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d53cd: je 0x7d53fc */
  if (zf) goto L_7d53fc;
L_7d53cf: /* 7d53cf: mov eax, dword ptr [0xb894e0] */
  eax = R32((uint32_t)(0xb894e0u));
/* 7d53d4: mov ecx, 0xb894e0 */
  ecx = 0xb894e0u;
/* 7d53d9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d53dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d53dc: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d53e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d53e4: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d53e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d53e7: push 0xad7720 */
  { uint32_t v = 0xad7720u; esp -= 4; W32(esp, v); }
/* 7d53ec: push 0xad7738 */
  { uint32_t v = 0xad7738u; esp -= 4; W32(esp, v); }
/* 7d53f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d53f2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d53f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d53f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d53f7: mov edi, 1 */
  edi = 0x1u;
L_7d53fc: /* 7d53fc: mov eax, dword ptr [0xb88a80] */
  eax = R32((uint32_t)(0xb88a80u));
/* 7d5401: mov ecx, 0xb88a80 */
  ecx = 0xb88a80u;
/* 7d5406: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5409u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5409: cmp eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d540c: je 0x7d543b */
  if (zf) goto L_7d543b;
L_7d540e: /* 7d540e: mov edx, dword ptr [0xb88a80] */
  edx = R32((uint32_t)(0xb88a80u));
/* 7d5414: mov ecx, 0xb88a80 */
  ecx = 0xb88a80u;
/* 7d5419: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d541cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d541c: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7d541e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d541f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5424: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5426: push 0xad7798 */
  { uint32_t v = 0xad7798u; esp -= 4; W32(esp, v); }
/* 7d542b: push 0xad77c0 */
  { uint32_t v = 0xad77c0u; esp -= 4; W32(esp, v); }
/* 7d5430: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5431: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5433u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5433: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5436: mov edi, 1 */
  edi = 0x1u;
L_7d543b: /* 7d543b: mov edx, dword ptr [0xb88fb0] */
  edx = R32((uint32_t)(0xb88fb0u));
/* 7d5441: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 7d5446: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5449u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5449: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d544c: je 0x7d547b */
  if (zf) goto L_7d547b;
L_7d544e: /* 7d544e: mov eax, dword ptr [0xb88fb0] */
  eax = R32((uint32_t)(0xb88fb0u));
/* 7d5453: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 7d5458: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d545bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d545b: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5461: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5463: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7d5465: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5466: push 0xad7820 */
  { uint32_t v = 0xad7820u; esp -= 4; W32(esp, v); }
/* 7d546b: push 0xad7840 */
  { uint32_t v = 0xad7840u; esp -= 4; W32(esp, v); }
/* 7d5470: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5471: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5473u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5473: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5476: mov edi, 1 */
  edi = 0x1u;
L_7d547b: /* 7d547b: mov eax, dword ptr [0xb88550] */
  eax = R32((uint32_t)(0xb88550u));
/* 7d5480: mov ecx, 0xb88550 */
  ecx = 0xb88550u;
/* 7d5485: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5488u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5488: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d548b: je 0x7d54ba */
  if (zf) goto L_7d54ba;
L_7d548d: /* 7d548d: mov edx, dword ptr [0xb88550] */
  edx = R32((uint32_t)(0xb88550u));
/* 7d5493: mov ecx, 0xb88550 */
  ecx = 0xb88550u;
/* 7d5498: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d549bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d549b: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d549d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d549e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d54a3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d54a5: push 0xad78a0 */
  { uint32_t v = 0xad78a0u; esp -= 4; W32(esp, v); }
/* 7d54aa: push 0xad78b8 */
  { uint32_t v = 0xad78b8u; esp -= 4; W32(esp, v); }
/* 7d54af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d54b0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d54b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d54b2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d54b5: mov edi, 1 */
  edi = 0x1u;
L_7d54ba: /* 7d54ba: mov edx, dword ptr [0xb88020] */
  edx = R32((uint32_t)(0xb88020u));
/* 7d54c0: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 7d54c5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d54c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d54c8: cmp eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d54cb: je 0x7d54fa */
  if (zf) goto L_7d54fa;
L_7d54cd: /* 7d54cd: mov eax, dword ptr [0xb88020] */
  eax = R32((uint32_t)(0xb88020u));
/* 7d54d2: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 7d54d7: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d54dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d54da: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d54e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d54e2: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 7d54e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d54e5: push 0xad7918 */
  { uint32_t v = 0xad7918u; esp -= 4; W32(esp, v); }
/* 7d54ea: push 0xad7928 */
  { uint32_t v = 0xad7928u; esp -= 4; W32(esp, v); }
/* 7d54ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d54f0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d54f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d54f2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d54f5: mov edi, 1 */
  edi = 0x1u;
L_7d54fa: /* 7d54fa: mov eax, dword ptr [0xb87af0] */
  eax = R32((uint32_t)(0xb87af0u));
/* 7d54ff: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 7d5504: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5507u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5507: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d550a: je 0x7d5539 */
  if (zf) goto L_7d5539;
L_7d550c: /* 7d550c: mov edx, dword ptr [0xb87af0] */
  edx = R32((uint32_t)(0xb87af0u));
/* 7d5512: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 7d5517: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d551au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d551a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7d551c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d551d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5522: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5524: push 0xad7988 */
  { uint32_t v = 0xad7988u; esp -= 4; W32(esp, v); }
/* 7d5529: push 0xad79a8 */
  { uint32_t v = 0xad79a8u; esp -= 4; W32(esp, v); }
/* 7d552e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d552f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5531u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5531: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5534: mov edi, 1 */
  edi = 0x1u;
L_7d5539: /* 7d5539: mov edx, dword ptr [0xb84060] */
  edx = R32((uint32_t)(0xb84060u));
/* 7d553f: mov ecx, 0xb84060 */
  ecx = 0xb84060u;
/* 7d5544: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5547u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5547: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d554a: je 0x7d5579 */
  if (zf) goto L_7d5579;
L_7d554c: /* 7d554c: mov eax, dword ptr [0xb84060] */
  eax = R32((uint32_t)(0xb84060u));
/* 7d5551: mov ecx, 0xb84060 */
  ecx = 0xb84060u;
/* 7d5556: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5559u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5559: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d555f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5561: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7d5563: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5564: push 0xad7a08 */
  { uint32_t v = 0xad7a08u; esp -= 4; W32(esp, v); }
/* 7d5569: push 0xad7a30 */
  { uint32_t v = 0xad7a30u; esp -= 4; W32(esp, v); }
/* 7d556e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d556f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5571u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5571: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5574: mov edi, 1 */
  edi = 0x1u;
L_7d5579: /* 7d5579: mov eax, dword ptr [0xb83b30] */
  eax = R32((uint32_t)(0xb83b30u));
/* 7d557e: mov ecx, 0xb83b30 */
  ecx = 0xb83b30u;
/* 7d5583: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5586u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5586: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5589: je 0x7d55b8 */
  if (zf) goto L_7d55b8;
L_7d558b: /* 7d558b: mov edx, dword ptr [0xb83b30] */
  edx = R32((uint32_t)(0xb83b30u));
/* 7d5591: mov ecx, 0xb83b30 */
  ecx = 0xb83b30u;
/* 7d5596: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5599u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5599: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7d559b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d559c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d55a1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d55a3: push 0xad7a90 */
  { uint32_t v = 0xad7a90u; esp -= 4; W32(esp, v); }
/* 7d55a8: push 0xad7ab0 */
  { uint32_t v = 0xad7ab0u; esp -= 4; W32(esp, v); }
/* 7d55ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d55ae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d55b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d55b0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d55b3: mov edi, 1 */
  edi = 0x1u;
L_7d55b8: /* 7d55b8: mov edx, dword ptr [0xb832e0] */
  edx = R32((uint32_t)(0xb832e0u));
/* 7d55be: mov ecx, 0xb832e0 */
  ecx = 0xb832e0u;
/* 7d55c3: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d55c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d55c6: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d55c9: je 0x7d55f8 */
  if (zf) goto L_7d55f8;
L_7d55cb: /* 7d55cb: mov eax, dword ptr [0xb832e0] */
  eax = R32((uint32_t)(0xb832e0u));
/* 7d55d0: mov ecx, 0xb832e0 */
  ecx = 0xb832e0u;
/* 7d55d5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d55d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d55d8: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d55de: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d55e0: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d55e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d55e3: push 0xad7b10 */
  { uint32_t v = 0xad7b10u; esp -= 4; W32(esp, v); }
/* 7d55e8: push 0xad7b38 */
  { uint32_t v = 0xad7b38u; esp -= 4; W32(esp, v); }
/* 7d55ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d55ee: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d55f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d55f0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d55f3: mov edi, 1 */
  edi = 0x1u;
L_7d55f8: /* 7d55f8: mov eax, dword ptr [0xb82880] */
  eax = R32((uint32_t)(0xb82880u));
/* 7d55fd: mov ecx, 0xb82880 */
  ecx = 0xb82880u;
/* 7d5602: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5605: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5608: je 0x7d5637 */
  if (zf) goto L_7d5637;
L_7d560a: /* 7d560a: mov edx, dword ptr [0xb82880] */
  edx = R32((uint32_t)(0xb82880u));
/* 7d5610: mov ecx, 0xb82880 */
  ecx = 0xb82880u;
/* 7d5615: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5618u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5618: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7d561a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d561b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5620: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5622: push 0xad7b98 */
  { uint32_t v = 0xad7b98u; esp -= 4; W32(esp, v); }
/* 7d5627: push 0xad7bb8 */
  { uint32_t v = 0xad7bb8u; esp -= 4; W32(esp, v); }
/* 7d562c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d562d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d562fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d562f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5632: mov edi, 1 */
  edi = 0x1u;
L_7d5637: /* 7d5637: mov edx, dword ptr [0xb82db0] */
  edx = R32((uint32_t)(0xb82db0u));
/* 7d563d: mov ecx, 0xb82db0 */
  ecx = 0xb82db0u;
/* 7d5642: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5645: cmp eax, 0x114 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d564a: je 0x7d567c */
  if (zf) goto L_7d567c;
L_7d564c: /* 7d564c: mov eax, dword ptr [0xb82db0] */
  eax = R32((uint32_t)(0xb82db0u));
/* 7d5651: mov ecx, 0xb82db0 */
  ecx = 0xb82db0u;
/* 7d5656: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5659u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5659: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d565f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5661: push 0x114 */
  { uint32_t v = 0x114u; esp -= 4; W32(esp, v); }
/* 7d5666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5667: push 0xad7c18 */
  { uint32_t v = 0xad7c18u; esp -= 4; W32(esp, v); }
/* 7d566c: push 0xad7c30 */
  { uint32_t v = 0xad7c30u; esp -= 4; W32(esp, v); }
/* 7d5671: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5672: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5674u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5674: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5677: mov edi, 1 */
  edi = 0x1u;
L_7d567c: /* 7d567c: mov eax, dword ptr [0xb80c70] */
  eax = R32((uint32_t)(0xb80c70u));
/* 7d5681: mov ecx, 0xb80c70 */
  ecx = 0xb80c70u;
/* 7d5686: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5689u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5689: cmp eax, 0x354 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x354u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d568e: je 0x7d56c0 */
  if (zf) goto L_7d56c0;
L_7d5690: /* 7d5690: mov edx, dword ptr [0xb80c70] */
  edx = R32((uint32_t)(0xb80c70u));
/* 7d5696: mov ecx, 0xb80c70 */
  ecx = 0xb80c70u;
/* 7d569b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d569eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d569e: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 7d56a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d56a4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d56a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d56ab: push 0xad7c90 */
  { uint32_t v = 0xad7c90u; esp -= 4; W32(esp, v); }
/* 7d56b0: push 0xad7cc0 */
  { uint32_t v = 0xad7cc0u; esp -= 4; W32(esp, v); }
/* 7d56b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d56b6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d56b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d56b8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d56bb: mov edi, 1 */
  edi = 0x1u;
L_7d56c0: /* 7d56c0: mov edx, dword ptr [0xb7ca70] */
  edx = R32((uint32_t)(0xb7ca70u));
/* 7d56c6: mov ecx, 0xb7ca70 */
  ecx = 0xb7ca70u;
/* 7d56cb: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d56ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d56ce: cmp eax, 0x88 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d56d3: je 0x7d5705 */
  if (zf) goto L_7d5705;
L_7d56d5: /* 7d56d5: mov eax, dword ptr [0xb7ca70] */
  eax = R32((uint32_t)(0xb7ca70u));
/* 7d56da: mov ecx, 0xb7ca70 */
  ecx = 0xb7ca70u;
/* 7d56df: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d56e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d56e2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d56e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d56ea: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 7d56ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d56f0: push 0xad7d20 */
  { uint32_t v = 0xad7d20u; esp -= 4; W32(esp, v); }
/* 7d56f5: push 0xad7d40 */
  { uint32_t v = 0xad7d40u; esp -= 4; W32(esp, v); }
/* 7d56fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d56fb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d56fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d56fd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5700: mov edi, 1 */
  edi = 0x1u;
L_7d5705: /* 7d5705: mov eax, dword ptr [0xb7c540] */
  eax = R32((uint32_t)(0xb7c540u));
/* 7d570a: mov ecx, 0xb7c540 */
  ecx = 0xb7c540u;
/* 7d570f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5712u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5712: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5715: je 0x7d5744 */
  if (zf) goto L_7d5744;
L_7d5717: /* 7d5717: mov edx, dword ptr [0xb7c540] */
  edx = R32((uint32_t)(0xb7c540u));
/* 7d571d: mov ecx, 0xb7c540 */
  ecx = 0xb7c540u;
/* 7d5722: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5725: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7d5727: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5728: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d572d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d572f: push 0xad7da0 */
  { uint32_t v = 0xad7da0u; esp -= 4; W32(esp, v); }
/* 7d5734: push 0xad7dc0 */
  { uint32_t v = 0xad7dc0u; esp -= 4; W32(esp, v); }
/* 7d5739: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d573a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d573cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d573c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d573f: mov edi, 1 */
  edi = 0x1u;
L_7d5744: /* 7d5744: mov edx, dword ptr [0xb79300] */
  edx = R32((uint32_t)(0xb79300u));
/* 7d574a: mov ecx, 0xb79300 */
  ecx = 0xb79300u;
/* 7d574f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5752u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5752: cmp eax, 0x5a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5757: je 0x7d5789 */
  if (zf) goto L_7d5789;
L_7d5759: /* 7d5759: mov eax, dword ptr [0xb79300] */
  eax = R32((uint32_t)(0xb79300u));
/* 7d575e: mov ecx, 0xb79300 */
  ecx = 0xb79300u;
/* 7d5763: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5766u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5766: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d576c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d576e: push 0x5a0 */
  { uint32_t v = 0x5a0u; esp -= 4; W32(esp, v); }
/* 7d5773: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5774: push 0xad7e20 */
  { uint32_t v = 0xad7e20u; esp -= 4; W32(esp, v); }
/* 7d5779: push 0xad7e40 */
  { uint32_t v = 0xad7e40u; esp -= 4; W32(esp, v); }
/* 7d577e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d577f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5781u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5781: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5784: mov edi, 1 */
  edi = 0x1u;
L_7d5789: /* 7d5789: mov eax, dword ptr [0xb78ab0] */
  eax = R32((uint32_t)(0xb78ab0u));
/* 7d578e: mov ecx, 0xb78ab0 */
  ecx = 0xb78ab0u;
/* 7d5793: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5796u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5796: cmp eax, 0x9c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d579b: je 0x7d57cd */
  if (zf) goto L_7d57cd;
L_7d579d: /* 7d579d: mov edx, dword ptr [0xb78ab0] */
  edx = R32((uint32_t)(0xb78ab0u));
/* 7d57a3: mov ecx, 0xb78ab0 */
  ecx = 0xb78ab0u;
/* 7d57a8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d57abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d57ab: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 7d57b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d57b1: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d57b6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d57b8: push 0xad7ea0 */
  { uint32_t v = 0xad7ea0u; esp -= 4; W32(esp, v); }
/* 7d57bd: push 0xad7ec0 */
  { uint32_t v = 0xad7ec0u; esp -= 4; W32(esp, v); }
/* 7d57c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d57c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d57c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d57c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d57c8: mov edi, 1 */
  edi = 0x1u;
L_7d57cd: /* 7d57cd: mov edx, dword ptr [0xb72fb8] */
  edx = R32((uint32_t)(0xb72fb8u));
/* 7d57d3: mov ecx, 0xb72fb8 */
  ecx = 0xb72fb8u;
/* 7d57d8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d57dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d57db: cmp eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d57e0: je 0x7d5812 */
  if (zf) goto L_7d5812;
L_7d57e2: /* 7d57e2: mov eax, dword ptr [0xb72fb8] */
  eax = R32((uint32_t)(0xb72fb8u));
/* 7d57e7: mov ecx, 0xb72fb8 */
  ecx = 0xb72fb8u;
/* 7d57ec: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d57efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d57ef: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d57f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d57f7: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 7d57fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d57fd: push 0xad7f20 */
  { uint32_t v = 0xad7f20u; esp -= 4; W32(esp, v); }
/* 7d5802: push 0xad7f40 */
  { uint32_t v = 0xad7f40u; esp -= 4; W32(esp, v); }
/* 7d5807: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5808: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d580au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d580a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d580d: mov edi, 1 */
  edi = 0x1u;
L_7d5812: /* 7d5812: mov eax, dword ptr [0xb72a88] */
  eax = R32((uint32_t)(0xb72a88u));
/* 7d5817: mov ecx, 0xb72a88 */
  ecx = 0xb72a88u;
/* 7d581c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d581fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d581f: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5824: je 0x7d5856 */
  if (zf) goto L_7d5856;
L_7d5826: /* 7d5826: mov edx, dword ptr [0xb72a88] */
  edx = R32((uint32_t)(0xb72a88u));
/* 7d582c: mov ecx, 0xb72a88 */
  ecx = 0xb72a88u;
/* 7d5831: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5834u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5834: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d583a: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d583f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5841: push 0xad7fa0 */
  { uint32_t v = 0xad7fa0u; esp -= 4; W32(esp, v); }
/* 7d5846: push 0xad7fc0 */
  { uint32_t v = 0xad7fc0u; esp -= 4; W32(esp, v); }
/* 7d584b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d584c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d584eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d584e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5851: mov edi, 1 */
  edi = 0x1u;
L_7d5856: /* 7d5856: mov edx, dword ptr [0xb64648] */
  edx = R32((uint32_t)(0xb64648u));
/* 7d585c: mov ecx, 0xb64648 */
  ecx = 0xb64648u;
/* 7d5861: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5864u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5864: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5869: je 0x7d589b */
  if (zf) goto L_7d589b;
L_7d586b: /* 7d586b: mov eax, dword ptr [0xb64648] */
  eax = R32((uint32_t)(0xb64648u));
/* 7d5870: mov ecx, 0xb64648 */
  ecx = 0xb64648u;
/* 7d5875: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5878: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d587e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5880: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5885: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5886: push 0xad8020 */
  { uint32_t v = 0xad8020u; esp -= 4; W32(esp, v); }
/* 7d588b: push 0xad8038 */
  { uint32_t v = 0xad8038u; esp -= 4; W32(esp, v); }
/* 7d5890: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5891: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5893: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5896: mov edi, 1 */
  edi = 0x1u;
L_7d589b: /* 7d589b: mov eax, dword ptr [0xb72558] */
  eax = R32((uint32_t)(0xb72558u));
/* 7d58a0: mov ecx, 0xb72558 */
  ecx = 0xb72558u;
/* 7d58a5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d58a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d58a8: cmp eax, 0x450 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x450u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d58ad: je 0x7d58df */
  if (zf) goto L_7d58df;
L_7d58af: /* 7d58af: mov edx, dword ptr [0xb72558] */
  edx = R32((uint32_t)(0xb72558u));
/* 7d58b5: mov ecx, 0xb72558 */
  ecx = 0xb72558u;
/* 7d58ba: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d58bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d58bd: push 0x450 */
  { uint32_t v = 0x450u; esp -= 4; W32(esp, v); }
/* 7d58c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d58c3: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d58c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d58ca: push 0xad8098 */
  { uint32_t v = 0xad8098u; esp -= 4; W32(esp, v); }
/* 7d58cf: push 0xad80b0 */
  { uint32_t v = 0xad80b0u; esp -= 4; W32(esp, v); }
/* 7d58d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d58d5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d58d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d58d7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d58da: mov edi, 1 */
  edi = 0x1u;
L_7d58df: /* 7d58df: mov edx, dword ptr [0xb602d8] */
  edx = R32((uint32_t)(0xb602d8u));
/* 7d58e5: mov ecx, 0xb602d8 */
  ecx = 0xb602d8u;
/* 7d58ea: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d58edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d58ed: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d58f2: je 0x7d5924 */
  if (zf) goto L_7d5924;
L_7d58f4: /* 7d58f4: mov eax, dword ptr [0xb602d8] */
  eax = R32((uint32_t)(0xb602d8u));
/* 7d58f9: mov ecx, 0xb602d8 */
  ecx = 0xb602d8u;
/* 7d58fe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5901u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5901: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5907: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5909: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d590e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d590f: push 0xad8110 */
  { uint32_t v = 0xad8110u; esp -= 4; W32(esp, v); }
/* 7d5914: push 0xad8138 */
  { uint32_t v = 0xad8138u; esp -= 4; W32(esp, v); }
/* 7d5919: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d591a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d591cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d591c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d591f: mov edi, 1 */
  edi = 0x1u;
L_7d5924: /* 7d5924: mov eax, dword ptr [0xb72028] */
  eax = R32((uint32_t)(0xb72028u));
/* 7d5929: mov ecx, 0xb72028 */
  ecx = 0xb72028u;
/* 7d592e: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5931u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5931: cmp eax, 0x3c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5936: je 0x7d5968 */
  if (zf) goto L_7d5968;
L_7d5938: /* 7d5938: mov edx, dword ptr [0xb72028] */
  edx = R32((uint32_t)(0xb72028u));
/* 7d593e: mov ecx, 0xb72028 */
  ecx = 0xb72028u;
/* 7d5943: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5946u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5946: push 0x3c0 */
  { uint32_t v = 0x3c0u; esp -= 4; W32(esp, v); }
/* 7d594b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d594c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5951: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5953: push 0xad8198 */
  { uint32_t v = 0xad8198u; esp -= 4; W32(esp, v); }
/* 7d5958: push 0xad81b0 */
  { uint32_t v = 0xad81b0u; esp -= 4; W32(esp, v); }
/* 7d595d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d595e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5960u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5960: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5963: mov edi, 1 */
  edi = 0x1u;
L_7d5968: /* 7d5968: mov edx, dword ptr [0xb71af8] */
  edx = R32((uint32_t)(0xb71af8u));
/* 7d596e: mov ecx, 0xb71af8 */
  ecx = 0xb71af8u;
/* 7d5973: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5976u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5976: cmp eax, 0x388 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d597b: je 0x7d59ad */
  if (zf) goto L_7d59ad;
L_7d597d: /* 7d597d: mov eax, dword ptr [0xb71af8] */
  eax = R32((uint32_t)(0xb71af8u));
/* 7d5982: mov ecx, 0xb71af8 */
  ecx = 0xb71af8u;
/* 7d5987: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d598au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d598a: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5990: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5992: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 7d5997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5998: push 0xad8210 */
  { uint32_t v = 0xad8210u; esp -= 4; W32(esp, v); }
/* 7d599d: push 0xad8238 */
  { uint32_t v = 0xad8238u; esp -= 4; W32(esp, v); }
/* 7d59a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d59a3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d59a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59a5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d59a8: mov edi, 1 */
  edi = 0x1u;
L_7d59ad: /* 7d59ad: mov eax, dword ptr [0xb68ee8] */
  eax = R32((uint32_t)(0xb68ee8u));
/* 7d59b2: mov ecx, 0xb68ee8 */
  ecx = 0xb68ee8u;
/* 7d59b7: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d59bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59ba: cmp eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d59bf: je 0x7d59f1 */
  if (zf) goto L_7d59f1;
L_7d59c1: /* 7d59c1: mov edx, dword ptr [0xb68ee8] */
  edx = R32((uint32_t)(0xb68ee8u));
/* 7d59c7: mov ecx, 0xb68ee8 */
  ecx = 0xb68ee8u;
/* 7d59cc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d59cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59cf: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 7d59d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d59d5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d59da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d59dc: push 0xad8298 */
  { uint32_t v = 0xad8298u; esp -= 4; W32(esp, v); }
/* 7d59e1: push 0xad82a8 */
  { uint32_t v = 0xad82a8u; esp -= 4; W32(esp, v); }
/* 7d59e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d59e7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d59e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59e9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d59ec: mov edi, 1 */
  edi = 0x1u;
L_7d59f1: /* 7d59f1: mov edx, dword ptr [0xb715c8] */
  edx = R32((uint32_t)(0xb715c8u));
/* 7d59f7: mov ecx, 0xb715c8 */
  ecx = 0xb715c8u;
/* 7d59fc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d59ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59ff: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5a04: je 0x7d5a36 */
  if (zf) goto L_7d5a36;
L_7d5a06: /* 7d5a06: mov eax, dword ptr [0xb715c8] */
  eax = R32((uint32_t)(0xb715c8u));
/* 7d5a0b: mov ecx, 0xb715c8 */
  ecx = 0xb715c8u;
/* 7d5a10: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5a13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a13: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5a19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5a1b: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5a21: push 0xad8308 */
  { uint32_t v = 0xad8308u; esp -= 4; W32(esp, v); }
/* 7d5a26: push 0xad8330 */
  { uint32_t v = 0xad8330u; esp -= 4; W32(esp, v); }
/* 7d5a2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5a2c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5a2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a2e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5a31: mov edi, 1 */
  edi = 0x1u;
L_7d5a36: /* 7d5a36: mov eax, dword ptr [0xb71098] */
  eax = R32((uint32_t)(0xb71098u));
/* 7d5a3b: mov ecx, 0xb71098 */
  ecx = 0xb71098u;
/* 7d5a40: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5a43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a43: cmp eax, 0x34c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5a48: je 0x7d5a7a */
  if (zf) goto L_7d5a7a;
L_7d5a4a: /* 7d5a4a: mov edx, dword ptr [0xb71098] */
  edx = R32((uint32_t)(0xb71098u));
/* 7d5a50: mov ecx, 0xb71098 */
  ecx = 0xb71098u;
/* 7d5a55: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5a58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a58: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 7d5a5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5a5e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5a63: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5a65: push 0xad8390 */
  { uint32_t v = 0xad8390u; esp -= 4; W32(esp, v); }
/* 7d5a6a: push 0xad83b8 */
  { uint32_t v = 0xad83b8u; esp -= 4; W32(esp, v); }
/* 7d5a6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5a70: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5a72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a72: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5a75: mov edi, 1 */
  edi = 0x1u;
L_7d5a7a: /* 7d5a7a: mov edx, dword ptr [0xb70b68] */
  edx = R32((uint32_t)(0xb70b68u));
/* 7d5a80: mov ecx, 0xb70b68 */
  ecx = 0xb70b68u;
/* 7d5a85: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5a88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a88: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5a8d: je 0x7d5abf */
  if (zf) goto L_7d5abf;
L_7d5a8f: /* 7d5a8f: mov eax, dword ptr [0xb70b68] */
  eax = R32((uint32_t)(0xb70b68u));
/* 7d5a94: mov ecx, 0xb70b68 */
  ecx = 0xb70b68u;
/* 7d5a99: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5a9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a9c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5aa2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5aa4: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5aa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5aaa: push 0xad8418 */
  { uint32_t v = 0xad8418u; esp -= 4; W32(esp, v); }
/* 7d5aaf: push 0xad8448 */
  { uint32_t v = 0xad8448u; esp -= 4; W32(esp, v); }
/* 7d5ab4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5ab5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5ab7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ab7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5aba: mov edi, 1 */
  edi = 0x1u;
L_7d5abf: /* 7d5abf: mov eax, dword ptr [0xb70638] */
  eax = R32((uint32_t)(0xb70638u));
/* 7d5ac4: mov ecx, 0xb70638 */
  ecx = 0xb70638u;
/* 7d5ac9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5accu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5acc: cmp eax, 0x398 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5ad1: je 0x7d5b03 */
  if (zf) goto L_7d5b03;
L_7d5ad3: /* 7d5ad3: mov edx, dword ptr [0xb70638] */
  edx = R32((uint32_t)(0xb70638u));
/* 7d5ad9: mov ecx, 0xb70638 */
  ecx = 0xb70638u;
/* 7d5ade: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5ae1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ae1: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 7d5ae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5ae7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5aec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5aee: push 0xad84a8 */
  { uint32_t v = 0xad84a8u; esp -= 4; W32(esp, v); }
/* 7d5af3: push 0xad84c0 */
  { uint32_t v = 0xad84c0u; esp -= 4; W32(esp, v); }
/* 7d5af8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5af9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5afbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5afb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5afe: mov edi, 1 */
  edi = 0x1u;
L_7d5b03: /* 7d5b03: mov edx, dword ptr [0xb66fc8] */
  edx = R32((uint32_t)(0xb66fc8u));
/* 7d5b09: mov ecx, 0xb66fc8 */
  ecx = 0xb66fc8u;
/* 7d5b0e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5b11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b11: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5b16: je 0x7d5b48 */
  if (zf) goto L_7d5b48;
L_7d5b18: /* 7d5b18: mov eax, dword ptr [0xb66fc8] */
  eax = R32((uint32_t)(0xb66fc8u));
/* 7d5b1d: mov ecx, 0xb66fc8 */
  ecx = 0xb66fc8u;
/* 7d5b22: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5b25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b25: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5b2b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5b2d: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5b32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5b33: push 0xad8520 */
  { uint32_t v = 0xad8520u; esp -= 4; W32(esp, v); }
/* 7d5b38: push 0xad8548 */
  { uint32_t v = 0xad8548u; esp -= 4; W32(esp, v); }
/* 7d5b3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5b3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5b40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b40: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5b43: mov edi, 1 */
  edi = 0x1u;
L_7d5b48: /* 7d5b48: mov eax, dword ptr [0xb70108] */
  eax = R32((uint32_t)(0xb70108u));
/* 7d5b4d: mov ecx, 0xb70108 */
  ecx = 0xb70108u;
/* 7d5b52: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5b55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b55: cmp eax, 0x3bc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5b5a: je 0x7d5b8c */
  if (zf) goto L_7d5b8c;
L_7d5b5c: /* 7d5b5c: mov edx, dword ptr [0xb70108] */
  edx = R32((uint32_t)(0xb70108u));
/* 7d5b62: mov ecx, 0xb70108 */
  ecx = 0xb70108u;
/* 7d5b67: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5b6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b6a: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 7d5b6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5b70: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5b75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5b77: push 0xad85a8 */
  { uint32_t v = 0xad85a8u; esp -= 4; W32(esp, v); }
/* 7d5b7c: push 0xad85c0 */
  { uint32_t v = 0xad85c0u; esp -= 4; W32(esp, v); }
/* 7d5b81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5b82: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5b84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b84: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5b87: mov edi, 1 */
  edi = 0x1u;
L_7d5b8c: /* 7d5b8c: mov edx, dword ptr [0xb6c2c8] */
  edx = R32((uint32_t)(0xb6c2c8u));
/* 7d5b92: mov ecx, 0xb6c2c8 */
  ecx = 0xb6c2c8u;
/* 7d5b97: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5b9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b9a: cmp eax, 0x3bc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5b9f: je 0x7d5bd1 */
  if (zf) goto L_7d5bd1;
L_7d5ba1: /* 7d5ba1: mov eax, dword ptr [0xb6c2c8] */
  eax = R32((uint32_t)(0xb6c2c8u));
/* 7d5ba6: mov ecx, 0xb6c2c8 */
  ecx = 0xb6c2c8u;
/* 7d5bab: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5baeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5bae: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5bb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5bb6: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 7d5bbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5bbc: push 0xad8620 */
  { uint32_t v = 0xad8620u; esp -= 4; W32(esp, v); }
/* 7d5bc1: push 0xad8630 */
  { uint32_t v = 0xad8630u; esp -= 4; W32(esp, v); }
/* 7d5bc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5bc7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5bc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5bc9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5bcc: mov edi, 1 */
  edi = 0x1u;
L_7d5bd1: /* 7d5bd1: mov eax, dword ptr [0xb6fbd8] */
  eax = R32((uint32_t)(0xb6fbd8u));
/* 7d5bd6: mov ecx, 0xb6fbd8 */
  ecx = 0xb6fbd8u;
/* 7d5bdb: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5bdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5bde: cmp eax, 0x3b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5be3: je 0x7d5c15 */
  if (zf) goto L_7d5c15;
L_7d5be5: /* 7d5be5: mov edx, dword ptr [0xb6fbd8] */
  edx = R32((uint32_t)(0xb6fbd8u));
/* 7d5beb: mov ecx, 0xb6fbd8 */
  ecx = 0xb6fbd8u;
/* 7d5bf0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5bf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5bf3: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 7d5bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5bf9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5bfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5c00: push 0xad8690 */
  { uint32_t v = 0xad8690u; esp -= 4; W32(esp, v); }
/* 7d5c05: push 0xad86a8 */
  { uint32_t v = 0xad86a8u; esp -= 4; W32(esp, v); }
/* 7d5c0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5c0b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5c0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c0d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5c10: mov edi, 1 */
  edi = 0x1u;
L_7d5c15: /* 7d5c15: mov edx, dword ptr [0xb6bd98] */
  edx = R32((uint32_t)(0xb6bd98u));
/* 7d5c1b: mov ecx, 0xb6bd98 */
  ecx = 0xb6bd98u;
/* 7d5c20: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5c23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c23: cmp eax, 0x3b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5c28: je 0x7d5c5a */
  if (zf) goto L_7d5c5a;
L_7d5c2a: /* 7d5c2a: mov eax, dword ptr [0xb6bd98] */
  eax = R32((uint32_t)(0xb6bd98u));
/* 7d5c2f: mov ecx, 0xb6bd98 */
  ecx = 0xb6bd98u;
/* 7d5c34: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5c37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c37: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5c3d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5c3f: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 7d5c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5c45: push 0xad8708 */
  { uint32_t v = 0xad8708u; esp -= 4; W32(esp, v); }
/* 7d5c4a: push 0xad8718 */
  { uint32_t v = 0xad8718u; esp -= 4; W32(esp, v); }
/* 7d5c4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5c50: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5c52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c52: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5c55: mov edi, 1 */
  edi = 0x1u;
L_7d5c5a: /* 7d5c5a: mov eax, dword ptr [0xb60808] */
  eax = R32((uint32_t)(0xb60808u));
/* 7d5c5f: mov ecx, 0xb60808 */
  ecx = 0xb60808u;
/* 7d5c64: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5c67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c67: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5c6c: je 0x7d5c9e */
  if (zf) goto L_7d5c9e;
L_7d5c6e: /* 7d5c6e: mov edx, dword ptr [0xb60808] */
  edx = R32((uint32_t)(0xb60808u));
/* 7d5c74: mov ecx, 0xb60808 */
  ecx = 0xb60808u;
/* 7d5c79: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5c7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c7c: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d5c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5c82: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5c87: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5c89: push 0xad8778 */
  { uint32_t v = 0xad8778u; esp -= 4; W32(esp, v); }
/* 7d5c8e: push 0xad87a8 */
  { uint32_t v = 0xad87a8u; esp -= 4; W32(esp, v); }
/* 7d5c93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5c94: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5c96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c96: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5c99: mov edi, 1 */
  edi = 0x1u;
L_7d5c9e: /* 7d5c9e: mov edx, dword ptr [0xb6f6a8] */
  edx = R32((uint32_t)(0xb6f6a8u));
/* 7d5ca4: mov ecx, 0xb6f6a8 */
  ecx = 0xb6f6a8u;
/* 7d5ca9: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5cacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5cac: cmp eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5cb1: je 0x7d5ce3 */
  if (zf) goto L_7d5ce3;
L_7d5cb3: /* 7d5cb3: mov eax, dword ptr [0xb6f6a8] */
  eax = R32((uint32_t)(0xb6f6a8u));
/* 7d5cb8: mov ecx, 0xb6f6a8 */
  ecx = 0xb6f6a8u;
/* 7d5cbd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5cc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5cc0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5cc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5cc8: push 0x3b8 */
  { uint32_t v = 0x3b8u; esp -= 4; W32(esp, v); }
/* 7d5ccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5cce: push 0xad8808 */
  { uint32_t v = 0xad8808u; esp -= 4; W32(esp, v); }
/* 7d5cd3: push 0xad8828 */
  { uint32_t v = 0xad8828u; esp -= 4; W32(esp, v); }
/* 7d5cd8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5cd9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5cdbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5cdb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5cde: mov edi, 1 */
  edi = 0x1u;
L_7d5ce3: /* 7d5ce3: mov eax, dword ptr [0xb6dcb8] */
  eax = R32((uint32_t)(0xb6dcb8u));
/* 7d5ce8: mov ecx, 0xb6dcb8 */
  ecx = 0xb6dcb8u;
/* 7d5ced: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5cf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5cf0: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5cf5: je 0x7d5d27 */
  if (zf) goto L_7d5d27;
L_7d5cf7: /* 7d5cf7: mov edx, dword ptr [0xb6dcb8] */
  edx = R32((uint32_t)(0xb6dcb8u));
/* 7d5cfd: mov ecx, 0xb6dcb8 */
  ecx = 0xb6dcb8u;
/* 7d5d02: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5d05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d05: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d5d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5d0b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5d10: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5d12: push 0xad8888 */
  { uint32_t v = 0xad8888u; esp -= 4; W32(esp, v); }
/* 7d5d17: push 0xad8898 */
  { uint32_t v = 0xad8898u; esp -= 4; W32(esp, v); }
/* 7d5d1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5d1d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5d1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d1f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5d22: mov edi, 1 */
  edi = 0x1u;
L_7d5d27: /* 7d5d27: mov edx, dword ptr [0xb6cd28] */
  edx = R32((uint32_t)(0xb6cd28u));
/* 7d5d2d: mov ecx, 0xb6cd28 */
  ecx = 0xb6cd28u;
/* 7d5d32: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5d35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d35: cmp eax, 0x398 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5d3a: je 0x7d5d6c */
  if (zf) goto L_7d5d6c;
L_7d5d3c: /* 7d5d3c: mov eax, dword ptr [0xb6cd28] */
  eax = R32((uint32_t)(0xb6cd28u));
/* 7d5d41: mov ecx, 0xb6cd28 */
  ecx = 0xb6cd28u;
/* 7d5d46: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5d49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d49: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5d4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5d51: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 7d5d56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5d57: push 0xad88f8 */
  { uint32_t v = 0xad88f8u; esp -= 4; W32(esp, v); }
/* 7d5d5c: push 0xad8908 */
  { uint32_t v = 0xad8908u; esp -= 4; W32(esp, v); }
/* 7d5d61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5d62: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5d64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d64: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5d67: mov edi, 1 */
  edi = 0x1u;
L_7d5d6c: /* 7d5d6c: mov eax, dword ptr [0xb6f178] */
  eax = R32((uint32_t)(0xb6f178u));
/* 7d5d71: mov ecx, 0xb6f178 */
  ecx = 0xb6f178u;
/* 7d5d76: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5d79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d79: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5d7e: je 0x7d5db0 */
  if (zf) goto L_7d5db0;
L_7d5d80: /* 7d5d80: mov edx, dword ptr [0xb6f178] */
  edx = R32((uint32_t)(0xb6f178u));
/* 7d5d86: mov ecx, 0xb6f178 */
  ecx = 0xb6f178u;
/* 7d5d8b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5d8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d8e: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5d93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5d94: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5d99: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5d9b: push 0xad8968 */
  { uint32_t v = 0xad8968u; esp -= 4; W32(esp, v); }
/* 7d5da0: push 0xad8998 */
  { uint32_t v = 0xad8998u; esp -= 4; W32(esp, v); }
/* 7d5da5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5da6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5da8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5da8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5dab: mov edi, 1 */
  edi = 0x1u;
L_7d5db0: /* 7d5db0: mov edx, dword ptr [0xb6ec48] */
  edx = R32((uint32_t)(0xb6ec48u));
/* 7d5db6: mov ecx, 0xb6ec48 */
  ecx = 0xb6ec48u;
/* 7d5dbb: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5dbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5dbe: cmp eax, 0x470 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x470u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5dc3: je 0x7d5df5 */
  if (zf) goto L_7d5df5;
L_7d5dc5: /* 7d5dc5: mov eax, dword ptr [0xb6ec48] */
  eax = R32((uint32_t)(0xb6ec48u));
/* 7d5dca: mov ecx, 0xb6ec48 */
  ecx = 0xb6ec48u;
/* 7d5dcf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5dd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5dd2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5dd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5dda: push 0x470 */
  { uint32_t v = 0x470u; esp -= 4; W32(esp, v); }
/* 7d5ddf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5de0: push 0xad89f8 */
  { uint32_t v = 0xad89f8u; esp -= 4; W32(esp, v); }
/* 7d5de5: push 0xad8a18 */
  { uint32_t v = 0xad8a18u; esp -= 4; W32(esp, v); }
/* 7d5dea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5deb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5dedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ded: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5df0: mov edi, 1 */
  edi = 0x1u;
L_7d5df5: /* 7d5df5: mov eax, dword ptr [0xb6e1e8] */
  eax = R32((uint32_t)(0xb6e1e8u));
/* 7d5dfa: mov ecx, 0xb6e1e8 */
  ecx = 0xb6e1e8u;
/* 7d5dff: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5e02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e02: cmp eax, 0x438 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5e07: je 0x7d5e39 */
  if (zf) goto L_7d5e39;
L_7d5e09: /* 7d5e09: mov edx, dword ptr [0xb6e1e8] */
  edx = R32((uint32_t)(0xb6e1e8u));
/* 7d5e0f: mov ecx, 0xb6e1e8 */
  ecx = 0xb6e1e8u;
/* 7d5e14: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5e17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e17: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 7d5e1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5e1d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5e22: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5e24: push 0xad8a78 */
  { uint32_t v = 0xad8a78u; esp -= 4; W32(esp, v); }
/* 7d5e29: push 0xad8a98 */
  { uint32_t v = 0xad8a98u; esp -= 4; W32(esp, v); }
/* 7d5e2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5e2f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e31: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5e34: mov edi, 1 */
  edi = 0x1u;
L_7d5e39: /* 7d5e39: mov edx, dword ptr [0xb6e718] */
  edx = R32((uint32_t)(0xb6e718u));
/* 7d5e3f: mov ecx, 0xb6e718 */
  ecx = 0xb6e718u;
/* 7d5e44: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5e47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e47: cmp eax, 0x438 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5e4c: je 0x7d5e7e */
  if (zf) goto L_7d5e7e;
L_7d5e4e: /* 7d5e4e: mov eax, dword ptr [0xb6e718] */
  eax = R32((uint32_t)(0xb6e718u));
/* 7d5e53: mov ecx, 0xb6e718 */
  ecx = 0xb6e718u;
/* 7d5e58: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5e5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e5b: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5e61: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5e63: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 7d5e68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5e69: push 0xad8af8 */
  { uint32_t v = 0xad8af8u; esp -= 4; W32(esp, v); }
/* 7d5e6e: push 0xad8b28 */
  { uint32_t v = 0xad8b28u; esp -= 4; W32(esp, v); }
/* 7d5e73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5e74: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5e76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e76: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5e79: mov edi, 1 */
  edi = 0x1u;
L_7d5e7e: /* 7d5e7e: mov eax, dword ptr [0xb6d788] */
  eax = R32((uint32_t)(0xb6d788u));
/* 7d5e83: mov ecx, 0xb6d788 */
  ecx = 0xb6d788u;
/* 7d5e88: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5e8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e8b: cmp eax, 0x358 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5e90: je 0x7d5ec2 */
  if (zf) goto L_7d5ec2;
L_7d5e92: /* 7d5e92: mov edx, dword ptr [0xb6d788] */
  edx = R32((uint32_t)(0xb6d788u));
/* 7d5e98: mov ecx, 0xb6d788 */
  ecx = 0xb6d788u;
/* 7d5e9d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5ea0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ea0: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 7d5ea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5ea6: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5eab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5ead: push 0xad8b88 */
  { uint32_t v = 0xad8b88u; esp -= 4; W32(esp, v); }
/* 7d5eb2: push 0xad8bb0 */
  { uint32_t v = 0xad8bb0u; esp -= 4; W32(esp, v); }
/* 7d5eb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5eb8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5ebau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5eba: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5ebd: mov edi, 1 */
  edi = 0x1u;
L_7d5ec2: /* 7d5ec2: mov edx, dword ptr [0xb6d258] */
  edx = R32((uint32_t)(0xb6d258u));
/* 7d5ec8: mov ecx, 0xb6d258 */
  ecx = 0xb6d258u;
/* 7d5ecd: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5ed0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ed0: cmp eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5ed5: je 0x7d5f07 */
  if (zf) goto L_7d5f07;
L_7d5ed7: /* 7d5ed7: mov eax, dword ptr [0xb6d258] */
  eax = R32((uint32_t)(0xb6d258u));
/* 7d5edc: mov ecx, 0xb6d258 */
  ecx = 0xb6d258u;
/* 7d5ee1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5ee4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ee4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5eea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5eec: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7d5ef1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5ef2: push 0xad8c10 */
  { uint32_t v = 0xad8c10u; esp -= 4; W32(esp, v); }
/* 7d5ef7: push 0xad8c28 */
  { uint32_t v = 0xad8c28u; esp -= 4; W32(esp, v); }
/* 7d5efc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5efd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5effu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5eff: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5f02: mov edi, 1 */
  edi = 0x1u;
L_7d5f07: /* 7d5f07: mov eax, dword ptr [0xb6c7f8] */
  eax = R32((uint32_t)(0xb6c7f8u));
/* 7d5f0c: mov ecx, 0xb6c7f8 */
  ecx = 0xb6c7f8u;
/* 7d5f11: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5f14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f14: cmp eax, 0x3e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5f19: je 0x7d5f4b */
  if (zf) goto L_7d5f4b;
L_7d5f1b: /* 7d5f1b: mov edx, dword ptr [0xb6c7f8] */
  edx = R32((uint32_t)(0xb6c7f8u));
/* 7d5f21: mov ecx, 0xb6c7f8 */
  ecx = 0xb6c7f8u;
/* 7d5f26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5f29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f29: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 7d5f2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5f2f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5f34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5f36: push 0xad8c88 */
  { uint32_t v = 0xad8c88u; esp -= 4; W32(esp, v); }
/* 7d5f3b: push 0xad8ca0 */
  { uint32_t v = 0xad8ca0u; esp -= 4; W32(esp, v); }
/* 7d5f40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5f41: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5f43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f43: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5f46: mov edi, 1 */
  edi = 0x1u;
L_7d5f4b: /* 7d5f4b: mov edx, dword ptr [0xb6b868] */
  edx = R32((uint32_t)(0xb6b868u));
/* 7d5f51: mov ecx, 0xb6b868 */
  ecx = 0xb6b868u;
/* 7d5f56: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5f59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f59: cmp eax, 0x340 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5f5e: je 0x7d5f90 */
  if (zf) goto L_7d5f90;
L_7d5f60: /* 7d5f60: mov eax, dword ptr [0xb6b868] */
  eax = R32((uint32_t)(0xb6b868u));
/* 7d5f65: mov ecx, 0xb6b868 */
  ecx = 0xb6b868u;
/* 7d5f6a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5f6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f6d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5f73: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5f75: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 7d5f7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5f7b: push 0xad8d00 */
  { uint32_t v = 0xad8d00u; esp -= 4; W32(esp, v); }
/* 7d5f80: push 0xad8d20 */
  { uint32_t v = 0xad8d20u; esp -= 4; W32(esp, v); }
/* 7d5f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5f86: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5f88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f88: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5f8b: mov edi, 1 */
  edi = 0x1u;
L_7d5f90: /* 7d5f90: mov eax, dword ptr [0xb6b338] */
  eax = R32((uint32_t)(0xb6b338u));
/* 7d5f95: mov ecx, 0xb6b338 */
  ecx = 0xb6b338u;
/* 7d5f9a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5f9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f9d: cmp eax, 0x5a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5fa2: je 0x7d5fd4 */
  if (zf) goto L_7d5fd4;
L_7d5fa4: /* 7d5fa4: mov edx, dword ptr [0xb6b338] */
  edx = R32((uint32_t)(0xb6b338u));
/* 7d5faa: mov ecx, 0xb6b338 */
  ecx = 0xb6b338u;
/* 7d5faf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5fb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5fb2: push 0x5a8 */
  { uint32_t v = 0x5a8u; esp -= 4; W32(esp, v); }
/* 7d5fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5fb8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5fbd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5fbf: push 0xad8d80 */
  { uint32_t v = 0xad8d80u; esp -= 4; W32(esp, v); }
/* 7d5fc4: push 0xad8d98 */
  { uint32_t v = 0xad8d98u; esp -= 4; W32(esp, v); }
/* 7d5fc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5fca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5fccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5fcc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5fcf: mov edi, 1 */
  edi = 0x1u;
L_7d5fd4: /* 7d5fd4: mov edx, dword ptr [0xb6ae08] */
  edx = R32((uint32_t)(0xb6ae08u));
/* 7d5fda: mov ecx, 0xb6ae08 */
  ecx = 0xb6ae08u;
/* 7d5fdf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5fe2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5fe2: cmp eax, 0x378 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5fe7: je 0x7d6019 */
  if (zf) goto L_7d6019;
L_7d5fe9: /* 7d5fe9: mov eax, dword ptr [0xb6ae08] */
  eax = R32((uint32_t)(0xb6ae08u));
/* 7d5fee: mov ecx, 0xb6ae08 */
  ecx = 0xb6ae08u;
/* 7d5ff3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5ff6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ff6: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5ffc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5ffe: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 7d6003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6004: push 0xad8df8 */
  { uint32_t v = 0xad8df8u; esp -= 4; W32(esp, v); }
/* 7d6009: push 0xad8e10 */
  { uint32_t v = 0xad8e10u; esp -= 4; W32(esp, v); }
/* 7d600e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d600f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6011: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6014: mov edi, 1 */
  edi = 0x1u;
L_7d6019: /* 7d6019: mov eax, dword ptr [0xb6a8d8] */
  eax = R32((uint32_t)(0xb6a8d8u));
/* 7d601e: mov ecx, 0xb6a8d8 */
  ecx = 0xb6a8d8u;
/* 7d6023: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6026: cmp eax, 0x7e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d602b: je 0x7d605d */
  if (zf) goto L_7d605d;
L_7d602d: /* 7d602d: mov edx, dword ptr [0xb6a8d8] */
  edx = R32((uint32_t)(0xb6a8d8u));
/* 7d6033: mov ecx, 0xb6a8d8 */
  ecx = 0xb6a8d8u;
/* 7d6038: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d603bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d603b: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 7d6040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6041: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6046: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6048: push 0xad8e70 */
  { uint32_t v = 0xad8e70u; esp -= 4; W32(esp, v); }
/* 7d604d: push 0xad8e98 */
  { uint32_t v = 0xad8e98u; esp -= 4; W32(esp, v); }
/* 7d6052: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6053: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6055u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6055: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6058: mov edi, 1 */
  edi = 0x1u;
L_7d605d: /* 7d605d: mov edx, dword ptr [0xb69e78] */
  edx = R32((uint32_t)(0xb69e78u));
/* 7d6063: mov ecx, 0xb69e78 */
  ecx = 0xb69e78u;
/* 7d6068: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d606bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d606b: cmp eax, 0x4b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6070: je 0x7d60a2 */
  if (zf) goto L_7d60a2;
L_7d6072: /* 7d6072: mov eax, dword ptr [0xb69e78] */
  eax = R32((uint32_t)(0xb69e78u));
/* 7d6077: mov ecx, 0xb69e78 */
  ecx = 0xb69e78u;
/* 7d607c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d607fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d607f: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6085: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6087: push 0x4b4 */
  { uint32_t v = 0x4b4u; esp -= 4; W32(esp, v); }
/* 7d608c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d608d: push 0xad8ef8 */
  { uint32_t v = 0xad8ef8u; esp -= 4; W32(esp, v); }
/* 7d6092: push 0xad8f10 */
  { uint32_t v = 0xad8f10u; esp -= 4; W32(esp, v); }
/* 7d6097: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6098: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d609au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d609a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d609d: mov edi, 1 */
  edi = 0x1u;
L_7d60a2: /* 7d60a2: mov eax, dword ptr [0xb6a3a8] */
  eax = R32((uint32_t)(0xb6a3a8u));
/* 7d60a7: mov ecx, 0xb6a3a8 */
  ecx = 0xb6a3a8u;
/* 7d60ac: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d60afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d60af: cmp eax, 0x4c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4c0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d60b4: je 0x7d60e6 */
  if (zf) goto L_7d60e6;
L_7d60b6: /* 7d60b6: mov edx, dword ptr [0xb6a3a8] */
  edx = R32((uint32_t)(0xb6a3a8u));
/* 7d60bc: mov ecx, 0xb6a3a8 */
  ecx = 0xb6a3a8u;
/* 7d60c1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d60c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d60c4: push 0x4c0 */
  { uint32_t v = 0x4c0u; esp -= 4; W32(esp, v); }
/* 7d60c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d60ca: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d60cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d60d1: push 0xad8f70 */
  { uint32_t v = 0xad8f70u; esp -= 4; W32(esp, v); }
/* 7d60d6: push 0xad8f90 */
  { uint32_t v = 0xad8f90u; esp -= 4; W32(esp, v); }
/* 7d60db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d60dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d60deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d60de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d60e1: mov edi, 1 */
  edi = 0x1u;
L_7d60e6: /* 7d60e6: mov edx, dword ptr [0xb69948] */
  edx = R32((uint32_t)(0xb69948u));
/* 7d60ec: mov ecx, 0xb69948 */
  ecx = 0xb69948u;
/* 7d60f1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d60f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d60f4: cmp eax, 0x3b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d60f9: je 0x7d612b */
  if (zf) goto L_7d612b;
L_7d60fb: /* 7d60fb: mov eax, dword ptr [0xb69948] */
  eax = R32((uint32_t)(0xb69948u));
/* 7d6100: mov ecx, 0xb69948 */
  ecx = 0xb69948u;
/* 7d6105: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6108: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d610e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6110: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 7d6115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6116: push 0xad8ff0 */
  { uint32_t v = 0xad8ff0u; esp -= 4; W32(esp, v); }
/* 7d611b: push 0xad9008 */
  { uint32_t v = 0xad9008u; esp -= 4; W32(esp, v); }
/* 7d6120: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6121: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6123u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6123: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6126: mov edi, 1 */
  edi = 0x1u;
L_7d612b: /* 7d612b: mov eax, dword ptr [0xb636b8] */
  eax = R32((uint32_t)(0xb636b8u));
/* 7d6130: mov ecx, 0xb636b8 */
  ecx = 0xb636b8u;
/* 7d6135: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6138u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6138: cmp eax, 0x388 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d613d: je 0x7d616f */
  if (zf) goto L_7d616f;
L_7d613f: /* 7d613f: mov edx, dword ptr [0xb636b8] */
  edx = R32((uint32_t)(0xb636b8u));
/* 7d6145: mov ecx, 0xb636b8 */
  ecx = 0xb636b8u;
/* 7d614a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d614du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d614d: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 7d6152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6153: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6158: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d615a: push 0xad9068 */
  { uint32_t v = 0xad9068u; esp -= 4; W32(esp, v); }
/* 7d615f: push 0xad9080 */
  { uint32_t v = 0xad9080u; esp -= 4; W32(esp, v); }
/* 7d6164: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6165: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6167u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6167: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d616a: mov edi, 1 */
  edi = 0x1u;
L_7d616f: /* 7d616f: mov edx, dword ptr [0xb69418] */
  edx = R32((uint32_t)(0xb69418u));
/* 7d6175: mov ecx, 0xb69418 */
  ecx = 0xb69418u;
/* 7d617a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d617du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d617d: cmp eax, 0x3a4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6182: je 0x7d61b4 */
  if (zf) goto L_7d61b4;
L_7d6184: /* 7d6184: mov eax, dword ptr [0xb69418] */
  eax = R32((uint32_t)(0xb69418u));
/* 7d6189: mov ecx, 0xb69418 */
  ecx = 0xb69418u;
/* 7d618e: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6191u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6191: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6197: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6199: push 0x3a4 */
  { uint32_t v = 0x3a4u; esp -= 4; W32(esp, v); }
/* 7d619e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d619f: push 0xad90e0 */
  { uint32_t v = 0xad90e0u; esp -= 4; W32(esp, v); }
/* 7d61a4: push 0xad90f8 */
  { uint32_t v = 0xad90f8u; esp -= 4; W32(esp, v); }
/* 7d61a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d61aa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d61acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d61ac: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d61af: mov edi, 1 */
  edi = 0x1u;
L_7d61b4: /* 7d61b4: mov eax, dword ptr [0xb689b8] */
  eax = R32((uint32_t)(0xb689b8u));
/* 7d61b9: mov ecx, 0xb689b8 */
  ecx = 0xb689b8u;
/* 7d61be: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d61c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d61c1: cmp eax, 0x378 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d61c6: je 0x7d61f8 */
  if (zf) goto L_7d61f8;
L_7d61c8: /* 7d61c8: mov edx, dword ptr [0xb689b8] */
  edx = R32((uint32_t)(0xb689b8u));
/* 7d61ce: mov ecx, 0xb689b8 */
  ecx = 0xb689b8u;
/* 7d61d3: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d61d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d61d6: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 7d61db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d61dc: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d61e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d61e3: push 0xad9158 */
  { uint32_t v = 0xad9158u; esp -= 4; W32(esp, v); }
/* 7d61e8: push 0xad9168 */
  { uint32_t v = 0xad9168u; esp -= 4; W32(esp, v); }
/* 7d61ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d61ee: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d61f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d61f0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d61f3: mov edi, 1 */
  edi = 0x1u;
L_7d61f8: /* 7d61f8: mov edx, dword ptr [0xb68488] */
  edx = R32((uint32_t)(0xb68488u));
/* 7d61fe: mov ecx, 0xb68488 */
  ecx = 0xb68488u;
/* 7d6203: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6206u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6206: cmp eax, 0x50 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6209: je 0x7d6238 */
  if (zf) goto L_7d6238;
L_7d620b: /* 7d620b: mov eax, dword ptr [0xb68488] */
  eax = R32((uint32_t)(0xb68488u));
/* 7d6210: mov ecx, 0xb68488 */
  ecx = 0xb68488u;
/* 7d6215: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6218: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d621e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6220: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7d6222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6223: push 0xad91c8 */
  { uint32_t v = 0xad91c8u; esp -= 4; W32(esp, v); }
/* 7d6228: push 0xad91e8 */
  { uint32_t v = 0xad91e8u; esp -= 4; W32(esp, v); }
/* 7d622d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d622e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6230u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6230: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6233: mov edi, 1 */
  edi = 0x1u;
L_7d6238: /* 7d6238: mov eax, dword ptr [0xb67f58] */
  eax = R32((uint32_t)(0xb67f58u));
/* 7d623d: mov ecx, 0xb67f58 */
  ecx = 0xb67f58u;
/* 7d6242: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6245u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6245: cmp eax, 0x41c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d624a: je 0x7d627c */
  if (zf) goto L_7d627c;
L_7d624c: /* 7d624c: mov edx, dword ptr [0xb67f58] */
  edx = R32((uint32_t)(0xb67f58u));
/* 7d6252: mov ecx, 0xb67f58 */
  ecx = 0xb67f58u;
/* 7d6257: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d625au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d625a: push 0x41c */
  { uint32_t v = 0x41cu; esp -= 4; W32(esp, v); }
/* 7d625f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6260: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6265: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6267: push 0xad9248 */
  { uint32_t v = 0xad9248u; esp -= 4; W32(esp, v); }
/* 7d626c: push 0xad9278 */
  { uint32_t v = 0xad9278u; esp -= 4; W32(esp, v); }
/* 7d6271: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6272: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6274u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6274: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6277: mov edi, 1 */
  edi = 0x1u;
L_7d627c: /* 7d627c: mov edx, dword ptr [0xb67a28] */
  edx = R32((uint32_t)(0xb67a28u));
/* 7d6282: mov ecx, 0xb67a28 */
  ecx = 0xb67a28u;
/* 7d6287: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d628au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d628a: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d628f: je 0x7d62c1 */
  if (zf) goto L_7d62c1;
L_7d6291: /* 7d6291: mov eax, dword ptr [0xb67a28] */
  eax = R32((uint32_t)(0xb67a28u));
/* 7d6296: mov ecx, 0xb67a28 */
  ecx = 0xb67a28u;
/* 7d629b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d629eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d629e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d62a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d62a6: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d62ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d62ac: push 0xad92d8 */
  { uint32_t v = 0xad92d8u; esp -= 4; W32(esp, v); }
/* 7d62b1: push 0xad92f8 */
  { uint32_t v = 0xad92f8u; esp -= 4; W32(esp, v); }
/* 7d62b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d62b7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d62b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d62b9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d62bc: mov edi, 1 */
  edi = 0x1u;
L_7d62c1: /* 7d62c1: mov eax, dword ptr [0xb674f8] */
  eax = R32((uint32_t)(0xb674f8u));
/* 7d62c6: mov ecx, 0xb674f8 */
  ecx = 0xb674f8u;
/* 7d62cb: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d62ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d62ce: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d62d3: je 0x7d6305 */
  if (zf) goto L_7d6305;
L_7d62d5: /* 7d62d5: mov edx, dword ptr [0xb674f8] */
  edx = R32((uint32_t)(0xb674f8u));
/* 7d62db: mov ecx, 0xb674f8 */
  ecx = 0xb674f8u;
/* 7d62e0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d62e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d62e3: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d62e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d62e9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d62ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d62f0: push 0xad9358 */
  { uint32_t v = 0xad9358u; esp -= 4; W32(esp, v); }
/* 7d62f5: push 0xad9388 */
  { uint32_t v = 0xad9388u; esp -= 4; W32(esp, v); }
/* 7d62fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d62fb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d62fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d62fd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6300: mov edi, 1 */
  edi = 0x1u;
L_7d6305: /* 7d6305: mov edx, dword ptr [0xb66568] */
  edx = R32((uint32_t)(0xb66568u));
/* 7d630b: mov ecx, 0xb66568 */
  ecx = 0xb66568u;
/* 7d6310: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6313u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6313: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6318: je 0x7d634a */
  if (zf) goto L_7d634a;
L_7d631a: /* 7d631a: mov eax, dword ptr [0xb66568] */
  eax = R32((uint32_t)(0xb66568u));
/* 7d631f: mov ecx, 0xb66568 */
  ecx = 0xb66568u;
/* 7d6324: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6327u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6327: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d632d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d632f: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d6334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6335: push 0xad93e8 */
  { uint32_t v = 0xad93e8u; esp -= 4; W32(esp, v); }
/* 7d633a: push 0xad9400 */
  { uint32_t v = 0xad9400u; esp -= 4; W32(esp, v); }
/* 7d633f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6340: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6342u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6342: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6345: mov edi, 1 */
  edi = 0x1u;
L_7d634a: /* 7d634a: mov eax, dword ptr [0xb66038] */
  eax = R32((uint32_t)(0xb66038u));
/* 7d634f: mov ecx, 0xb66038 */
  ecx = 0xb66038u;
/* 7d6354: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6357u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6357: cmp eax, 0x3c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d635c: je 0x7d638e */
  if (zf) goto L_7d638e;
L_7d635e: /* 7d635e: mov edx, dword ptr [0xb66038] */
  edx = R32((uint32_t)(0xb66038u));
/* 7d6364: mov ecx, 0xb66038 */
  ecx = 0xb66038u;
/* 7d6369: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d636cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d636c: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7d6371: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6372: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6377: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6379: push 0xad9460 */
  { uint32_t v = 0xad9460u; esp -= 4; W32(esp, v); }
/* 7d637e: push 0xad9478 */
  { uint32_t v = 0xad9478u; esp -= 4; W32(esp, v); }
/* 7d6383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6384: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6386u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6386: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6389: mov edi, 1 */
  edi = 0x1u;
L_7d638e: /* 7d638e: mov edx, dword ptr [0xb65b08] */
  edx = R32((uint32_t)(0xb65b08u));
/* 7d6394: mov ecx, 0xb65b08 */
  ecx = 0xb65b08u;
/* 7d6399: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d639cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d639c: cmp eax, 0x368 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d63a1: je 0x7d63d3 */
  if (zf) goto L_7d63d3;
L_7d63a3: /* 7d63a3: mov eax, dword ptr [0xb65b08] */
  eax = R32((uint32_t)(0xb65b08u));
/* 7d63a8: mov ecx, 0xb65b08 */
  ecx = 0xb65b08u;
/* 7d63ad: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d63b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d63b0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d63b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d63b8: push 0x368 */
  { uint32_t v = 0x368u; esp -= 4; W32(esp, v); }
/* 7d63bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d63be: push 0xad94d8 */
  { uint32_t v = 0xad94d8u; esp -= 4; W32(esp, v); }
/* 7d63c3: push 0xad94f0 */
  { uint32_t v = 0xad94f0u; esp -= 4; W32(esp, v); }
/* 7d63c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d63c9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d63cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d63cb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d63ce: mov edi, 1 */
  edi = 0x1u;
L_7d63d3: /* 7d63d3: mov eax, dword ptr [0xb655d8] */
  eax = R32((uint32_t)(0xb655d8u));
/* 7d63d8: mov ecx, 0xb655d8 */
  ecx = 0xb655d8u;
/* 7d63dd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d63e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d63e0: cmp eax, 0x570 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x570u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d63e5: je 0x7d6417 */
  if (zf) goto L_7d6417;
L_7d63e7: /* 7d63e7: mov edx, dword ptr [0xb655d8] */
  edx = R32((uint32_t)(0xb655d8u));
/* 7d63ed: mov ecx, 0xb655d8 */
  ecx = 0xb655d8u;
/* 7d63f2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d63f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d63f5: push 0x570 */
  { uint32_t v = 0x570u; esp -= 4; W32(esp, v); }
/* 7d63fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d63fb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6400: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6402: push 0xad9550 */
  { uint32_t v = 0xad9550u; esp -= 4; W32(esp, v); }
/* 7d6407: push 0xad9560 */
  { uint32_t v = 0xad9560u; esp -= 4; W32(esp, v); }
/* 7d640c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d640d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d640fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d640f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6412: mov edi, 1 */
  edi = 0x1u;
L_7d6417: /* 7d6417: mov edx, dword ptr [0xb650a8] */
  edx = R32((uint32_t)(0xb650a8u));
/* 7d641d: mov ecx, 0xb650a8 */
  ecx = 0xb650a8u;
/* 7d6422: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6425u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6425: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d642a: je 0x7d645c */
  if (zf) goto L_7d645c;
L_7d642c: /* 7d642c: mov eax, dword ptr [0xb650a8] */
  eax = R32((uint32_t)(0xb650a8u));
/* 7d6431: mov ecx, 0xb650a8 */
  ecx = 0xb650a8u;
/* 7d6436: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6439u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6439: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d643f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6441: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d6446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6447: push 0xad95c0 */
  { uint32_t v = 0xad95c0u; esp -= 4; W32(esp, v); }
/* 7d644c: push 0xad95e0 */
  { uint32_t v = 0xad95e0u; esp -= 4; W32(esp, v); }
/* 7d6451: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6452: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6454u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6454: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6457: mov edi, 1 */
  edi = 0x1u;
L_7d645c: /* 7d645c: mov eax, dword ptr [0xb64b78] */
  eax = R32((uint32_t)(0xb64b78u));
/* 7d6461: mov ecx, 0xb64b78 */
  ecx = 0xb64b78u;
/* 7d6466: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6469u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6469: cmp eax, 0x370 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d646e: je 0x7d64a0 */
  if (zf) goto L_7d64a0;
L_7d6470: /* 7d6470: mov edx, dword ptr [0xb64b78] */
  edx = R32((uint32_t)(0xb64b78u));
/* 7d6476: mov ecx, 0xb64b78 */
  ecx = 0xb64b78u;
/* 7d647b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d647eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d647e: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 7d6483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6484: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6489: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d648b: push 0xad9640 */
  { uint32_t v = 0xad9640u; esp -= 4; W32(esp, v); }
/* 7d6490: push 0xad9658 */
  { uint32_t v = 0xad9658u; esp -= 4; W32(esp, v); }
/* 7d6495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6496: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6498u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6498: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d649b: mov edi, 1 */
  edi = 0x1u;
L_7d64a0: /* 7d64a0: mov edx, dword ptr [0xb64118] */
  edx = R32((uint32_t)(0xb64118u));
/* 7d64a6: mov ecx, 0xb64118 */
  ecx = 0xb64118u;
/* 7d64ab: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d64aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d64ae: cmp eax, 0x3ac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d64b3: je 0x7d64e5 */
  if (zf) goto L_7d64e5;
L_7d64b5: /* 7d64b5: mov eax, dword ptr [0xb64118] */
  eax = R32((uint32_t)(0xb64118u));
/* 7d64ba: mov ecx, 0xb64118 */
  ecx = 0xb64118u;
/* 7d64bf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d64c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d64c2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d64c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d64ca: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 7d64cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d64d0: push 0xad96b8 */
  { uint32_t v = 0xad96b8u; esp -= 4; W32(esp, v); }
/* 7d64d5: push 0xad96d0 */
  { uint32_t v = 0xad96d0u; esp -= 4; W32(esp, v); }
/* 7d64da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d64db: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d64ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d64dd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d64e0: mov edi, 1 */
  edi = 0x1u;
L_7d64e5: /* 7d64e5: mov eax, dword ptr [0xb63be8] */
  eax = R32((uint32_t)(0xb63be8u));
/* 7d64ea: mov ecx, 0xb63be8 */
  ecx = 0xb63be8u;
/* 7d64ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d64f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d64f2: cmp eax, 0x3ac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d64f7: je 0x7d6529 */
  if (zf) goto L_7d6529;
L_7d64f9: /* 7d64f9: mov edx, dword ptr [0xb63be8] */
  edx = R32((uint32_t)(0xb63be8u));
/* 7d64ff: mov ecx, 0xb63be8 */
  ecx = 0xb63be8u;
/* 7d6504: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6507u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6507: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 7d650c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d650d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6512: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6514: push 0xad9730 */
  { uint32_t v = 0xad9730u; esp -= 4; W32(esp, v); }
/* 7d6519: push 0xad9750 */
  { uint32_t v = 0xad9750u; esp -= 4; W32(esp, v); }
/* 7d651e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d651f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6521u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6521: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6524: mov edi, 1 */
  edi = 0x1u;
L_7d6529: /* 7d6529: mov edx, dword ptr [0xb62c58] */
  edx = R32((uint32_t)(0xb62c58u));
/* 7d652f: mov ecx, 0xb62c58 */
  ecx = 0xb62c58u;
/* 7d6534: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6537u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6537: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d653c: je 0x7d656e */
  if (zf) goto L_7d656e;
L_7d653e: /* 7d653e: mov eax, dword ptr [0xb62c58] */
  eax = R32((uint32_t)(0xb62c58u));
/* 7d6543: mov ecx, 0xb62c58 */
  ecx = 0xb62c58u;
/* 7d6548: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d654bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d654b: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6551: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6553: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d6558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6559: push 0xad97b0 */
  { uint32_t v = 0xad97b0u; esp -= 4; W32(esp, v); }
/* 7d655e: push 0xad97d0 */
  { uint32_t v = 0xad97d0u; esp -= 4; W32(esp, v); }
/* 7d6563: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6564: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6566u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6566: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6569: mov edi, 1 */
  edi = 0x1u;
L_7d656e: /* 7d656e: mov eax, dword ptr [0xb62728] */
  eax = R32((uint32_t)(0xb62728u));
/* 7d6573: mov ecx, 0xb62728 */
  ecx = 0xb62728u;
/* 7d6578: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d657bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d657b: cmp eax, 0x3d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6580: je 0x7d65b2 */
  if (zf) goto L_7d65b2;
L_7d6582: /* 7d6582: mov edx, dword ptr [0xb62728] */
  edx = R32((uint32_t)(0xb62728u));
/* 7d6588: mov ecx, 0xb62728 */
  ecx = 0xb62728u;
/* 7d658d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6590u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6590: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 7d6595: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6596: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d659b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d659d: push 0xad9830 */
  { uint32_t v = 0xad9830u; esp -= 4; W32(esp, v); }
/* 7d65a2: push 0xad9848 */
  { uint32_t v = 0xad9848u; esp -= 4; W32(esp, v); }
/* 7d65a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d65a8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d65aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d65aa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d65ad: mov edi, 1 */
  edi = 0x1u;
L_7d65b2: /* 7d65b2: mov edx, dword ptr [0xb621f8] */
  edx = R32((uint32_t)(0xb621f8u));
/* 7d65b8: mov ecx, 0xb621f8 */
  ecx = 0xb621f8u;
/* 7d65bd: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d65c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d65c0: cmp eax, 0x45c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d65c5: je 0x7d65f7 */
  if (zf) goto L_7d65f7;
L_7d65c7: /* 7d65c7: mov eax, dword ptr [0xb621f8] */
  eax = R32((uint32_t)(0xb621f8u));
/* 7d65cc: mov ecx, 0xb621f8 */
  ecx = 0xb621f8u;
/* 7d65d1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d65d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d65d4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d65da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d65dc: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* 7d65e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d65e2: push 0xad98a8 */
  { uint32_t v = 0xad98a8u; esp -= 4; W32(esp, v); }
/* 7d65e7: push 0xad98c8 */
  { uint32_t v = 0xad98c8u; esp -= 4; W32(esp, v); }
/* 7d65ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d65ed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d65efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d65ef: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d65f2: mov edi, 1 */
  edi = 0x1u;
L_7d65f7: /* 7d65f7: mov eax, dword ptr [0xb5ee18] */
  eax = R32((uint32_t)(0xb5ee18u));
/* 7d65fc: mov ecx, 0xb5ee18 */
  ecx = 0xb5ee18u;
/* 7d6601: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6604u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6604: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6609: je 0x7d663b */
  if (zf) goto L_7d663b;
L_7d660b: /* 7d660b: mov edx, dword ptr [0xb5ee18] */
  edx = R32((uint32_t)(0xb5ee18u));
/* 7d6611: mov ecx, 0xb5ee18 */
  ecx = 0xb5ee18u;
/* 7d6616: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6619u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6619: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d661e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d661f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6624: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6626: push 0xad9928 */
  { uint32_t v = 0xad9928u; esp -= 4; W32(esp, v); }
/* 7d662b: push 0xad9940 */
  { uint32_t v = 0xad9940u; esp -= 4; W32(esp, v); }
/* 7d6630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6631: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6633u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6633: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6636: mov edi, 1 */
  edi = 0x1u;
L_7d663b: /* 7d663b: mov edx, dword ptr [0xb61cc8] */
  edx = R32((uint32_t)(0xb61cc8u));
/* 7d6641: mov ecx, 0xb61cc8 */
  ecx = 0xb61cc8u;
/* 7d6646: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6649u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6649: cmp eax, 0x370 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d664e: je 0x7d6680 */
  if (zf) goto L_7d6680;
L_7d6650: /* 7d6650: mov eax, dword ptr [0xb61cc8] */
  eax = R32((uint32_t)(0xb61cc8u));
/* 7d6655: mov ecx, 0xb61cc8 */
  ecx = 0xb61cc8u;
/* 7d665a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d665du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d665d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6663: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6665: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 7d666a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d666b: push 0xad99a0 */
  { uint32_t v = 0xad99a0u; esp -= 4; W32(esp, v); }
/* 7d6670: push 0xad99b8 */
  { uint32_t v = 0xad99b8u; esp -= 4; W32(esp, v); }
/* 7d6675: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6676: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6678: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d667b: mov edi, 1 */
  edi = 0x1u;
L_7d6680: /* 7d6680: mov eax, dword ptr [0xb61798] */
  eax = R32((uint32_t)(0xb61798u));
/* 7d6685: mov ecx, 0xb61798 */
  ecx = 0xb61798u;
/* 7d668a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d668du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d668d: cmp eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6692: je 0x7d66c4 */
  if (zf) goto L_7d66c4;
L_7d6694: /* 7d6694: mov edx, dword ptr [0xb61798] */
  edx = R32((uint32_t)(0xb61798u));
/* 7d669a: mov ecx, 0xb61798 */
  ecx = 0xb61798u;
/* 7d669f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d66a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d66a2: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 7d66a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d66a8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d66ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d66af: push 0xad9a18 */
  { uint32_t v = 0xad9a18u; esp -= 4; W32(esp, v); }
/* 7d66b4: push 0xad9a30 */
  { uint32_t v = 0xad9a30u; esp -= 4; W32(esp, v); }
/* 7d66b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d66ba: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d66bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d66bc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d66bf: mov edi, 1 */
  edi = 0x1u;
L_7d66c4: /* 7d66c4: mov edx, dword ptr [0xb61268] */
  edx = R32((uint32_t)(0xb61268u));
/* 7d66ca: mov ecx, 0xb61268 */
  ecx = 0xb61268u;
/* 7d66cf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d66d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d66d2: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d66d7: je 0x7d6709 */
  if (zf) goto L_7d6709;
L_7d66d9: /* 7d66d9: mov eax, dword ptr [0xb61268] */
  eax = R32((uint32_t)(0xb61268u));
/* 7d66de: mov ecx, 0xb61268 */
  ecx = 0xb61268u;
/* 7d66e3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d66e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d66e6: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d66ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d66ee: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d66f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d66f4: push 0xad9a90 */
  { uint32_t v = 0xad9a90u; esp -= 4; W32(esp, v); }
/* 7d66f9: push 0xad9ab8 */
  { uint32_t v = 0xad9ab8u; esp -= 4; W32(esp, v); }
/* 7d66fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d66ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6701: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6704: mov edi, 1 */
  edi = 0x1u;
L_7d6709: /* 7d6709: mov eax, dword ptr [0xb60d38] */
  eax = R32((uint32_t)(0xb60d38u));
/* 7d670e: mov ecx, 0xb60d38 */
  ecx = 0xb60d38u;
/* 7d6713: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6716u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6716: cmp eax, 0x59c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x59cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d671b: je 0x7d674d */
  if (zf) goto L_7d674d;
L_7d671d: /* 7d671d: mov edx, dword ptr [0xb60d38] */
  edx = R32((uint32_t)(0xb60d38u));
/* 7d6723: mov ecx, 0xb60d38 */
  ecx = 0xb60d38u;
/* 7d6728: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d672bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d672b: push 0x59c */
  { uint32_t v = 0x59cu; esp -= 4; W32(esp, v); }
/* 7d6730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6731: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6736: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6738: push 0xad9b18 */
  { uint32_t v = 0xad9b18u; esp -= 4; W32(esp, v); }
/* 7d673d: push 0xad9b28 */
  { uint32_t v = 0xad9b28u; esp -= 4; W32(esp, v); }
/* 7d6742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6743: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6745: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6748: mov edi, 1 */
  edi = 0x1u;
L_7d674d: /* 7d674d: mov edx, dword ptr [0xb5fda8] */
  edx = R32((uint32_t)(0xb5fda8u));
/* 7d6753: mov ecx, 0xb5fda8 */
  ecx = 0xb5fda8u;
/* 7d6758: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d675bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d675b: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6760: je 0x7d6792 */
  if (zf) goto L_7d6792;
L_7d6762: /* 7d6762: mov eax, dword ptr [0xb5fda8] */
  eax = R32((uint32_t)(0xb5fda8u));
/* 7d6767: mov ecx, 0xb5fda8 */
  ecx = 0xb5fda8u;
/* 7d676c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d676fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d676f: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6775: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6777: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d677c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d677d: push 0xad9b88 */
  { uint32_t v = 0xad9b88u; esp -= 4; W32(esp, v); }
/* 7d6782: push 0xad9ba0 */
  { uint32_t v = 0xad9ba0u; esp -= 4; W32(esp, v); }
/* 7d6787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6788: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d678au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d678a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d678d: mov edi, 1 */
  edi = 0x1u;
L_7d6792: /* 7d6792: mov eax, dword ptr [0xb5f878] */
  eax = R32((uint32_t)(0xb5f878u));
/* 7d6797: mov ecx, 0xb5f878 */
  ecx = 0xb5f878u;
/* 7d679c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d679fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d679f: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d67a2: je 0x7d67d1 */
  if (zf) goto L_7d67d1;
L_7d67a4: /* 7d67a4: mov edx, dword ptr [0xb5f878] */
  edx = R32((uint32_t)(0xb5f878u));
/* 7d67aa: mov ecx, 0xb5f878 */
  ecx = 0xb5f878u;
/* 7d67af: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d67b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d67b2: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d67b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d67b5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d67ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d67bc: push 0xad9c00 */
  { uint32_t v = 0xad9c00u; esp -= 4; W32(esp, v); }
/* 7d67c1: push 0xad9c18 */
  { uint32_t v = 0xad9c18u; esp -= 4; W32(esp, v); }
/* 7d67c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d67c7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d67c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d67c9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d67cc: mov edi, 1 */
  edi = 0x1u;
L_7d67d1: /* 7d67d1: mov edx, dword ptr [0xb5f348] */
  edx = R32((uint32_t)(0xb5f348u));
/* 7d67d7: mov ecx, 0xb5f348 */
  ecx = 0xb5f348u;
/* 7d67dc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d67dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d67df: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d67e4: je 0x7d6816 */
  if (zf) goto L_7d6816;
L_7d67e6: /* 7d67e6: mov eax, dword ptr [0xb5f348] */
  eax = R32((uint32_t)(0xb5f348u));
/* 7d67eb: mov ecx, 0xb5f348 */
  ecx = 0xb5f348u;
/* 7d67f0: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d67f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d67f3: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d67f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d67fb: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d6800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6801: push 0xad9c78 */
  { uint32_t v = 0xad9c78u; esp -= 4; W32(esp, v); }
/* 7d6806: push 0xad9c98 */
  { uint32_t v = 0xad9c98u; esp -= 4; W32(esp, v); }
/* 7d680b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d680c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d680eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d680e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6811: mov edi, 1 */
  edi = 0x1u;
L_7d6816: /* 7d6816: mov eax, dword ptr [0xb5e8e8] */
  eax = R32((uint32_t)(0xb5e8e8u));
/* 7d681b: mov ecx, 0xb5e8e8 */
  ecx = 0xb5e8e8u;
/* 7d6820: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6823: cmp eax, 0x7e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6828: je 0x7d685a */
  if (zf) goto L_7d685a;
L_7d682a: /* 7d682a: mov edx, dword ptr [0xb5e8e8] */
  edx = R32((uint32_t)(0xb5e8e8u));
/* 7d6830: mov ecx, 0xb5e8e8 */
  ecx = 0xb5e8e8u;
/* 7d6835: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6838: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 7d683d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d683e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6843: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6845: push 0xad9cf8 */
  { uint32_t v = 0xad9cf8u; esp -= 4; W32(esp, v); }
/* 7d684a: push 0xad9d08 */
  { uint32_t v = 0xad9d08u; esp -= 4; W32(esp, v); }
/* 7d684f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6850: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6852: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6855: mov edi, 1 */
  edi = 0x1u;
L_7d685a: /* 7d685a: mov edx, dword ptr [0xb5e3b8] */
  edx = R32((uint32_t)(0xb5e3b8u));
/* 7d6860: mov ecx, 0xb5e3b8 */
  ecx = 0xb5e3b8u;
/* 7d6865: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6868u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6868: cmp eax, 0x56c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x56cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d686d: je 0x7d689f */
  if (zf) goto L_7d689f;
L_7d686f: /* 7d686f: mov eax, dword ptr [0xb5e3b8] */
  eax = R32((uint32_t)(0xb5e3b8u));
/* 7d6874: mov ecx, 0xb5e3b8 */
  ecx = 0xb5e3b8u;
/* 7d6879: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d687cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d687c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6882: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6884: push 0x56c */
  { uint32_t v = 0x56cu; esp -= 4; W32(esp, v); }
/* 7d6889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d688a: push 0xad9d68 */
  { uint32_t v = 0xad9d68u; esp -= 4; W32(esp, v); }
/* 7d688f: push 0xad9d80 */
  { uint32_t v = 0xad9d80u; esp -= 4; W32(esp, v); }
/* 7d6894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6895: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6897u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6897: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d689a: mov edi, 1 */
  edi = 0x1u;
L_7d689f: /* 7d689f: mov eax, dword ptr [0xb5de88] */
  eax = R32((uint32_t)(0xb5de88u));
/* 7d68a4: mov ecx, 0xb5de88 */
  ecx = 0xb5de88u;
/* 7d68a9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d68acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d68ac: cmp eax, 0x55c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x55cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d68b1: je 0x7d68e3 */
  if (zf) goto L_7d68e3;
L_7d68b3: /* 7d68b3: mov edx, dword ptr [0xb5de88] */
  edx = R32((uint32_t)(0xb5de88u));
/* 7d68b9: mov ecx, 0xb5de88 */
  ecx = 0xb5de88u;
/* 7d68be: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d68c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d68c1: push 0x55c */
  { uint32_t v = 0x55cu; esp -= 4; W32(esp, v); }
/* 7d68c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d68c7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d68cc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d68ce: push 0xad9de0 */
  { uint32_t v = 0xad9de0u; esp -= 4; W32(esp, v); }
/* 7d68d3: push 0xad9df8 */
  { uint32_t v = 0xad9df8u; esp -= 4; W32(esp, v); }
/* 7d68d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d68d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d68dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d68db: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d68de: mov edi, 1 */
  edi = 0x1u;
L_7d68e3: /* 7d68e3: mov edx, dword ptr [0xb5d958] */
  edx = R32((uint32_t)(0xb5d958u));
/* 7d68e9: mov ecx, 0xb5d958 */
  ecx = 0xb5d958u;
/* 7d68ee: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d68f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d68f1: cmp eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d68f6: je 0x7d6928 */
  if (zf) goto L_7d6928;
L_7d68f8: /* 7d68f8: mov eax, dword ptr [0xb5d958] */
  eax = R32((uint32_t)(0xb5d958u));
/* 7d68fd: mov ecx, 0xb5d958 */
  ecx = 0xb5d958u;
/* 7d6902: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6905u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6905: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d690b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d690d: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7d6912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6913: push 0xad9e58 */
  { uint32_t v = 0xad9e58u; esp -= 4; W32(esp, v); }
/* 7d6918: push 0xad9e68 */
  { uint32_t v = 0xad9e68u; esp -= 4; W32(esp, v); }
/* 7d691d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d691e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6920u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6920: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6923: mov edi, 1 */
  edi = 0x1u;
L_7d6928: /* 7d6928: mov eax, dword ptr [0xb5d428] */
  eax = R32((uint32_t)(0xb5d428u));
/* 7d692d: mov ecx, 0xb5d428 */
  ecx = 0xb5d428u;
/* 7d6932: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6935u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6935: cmp eax, 0x478 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x478u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d693a: je 0x7d696c */
  if (zf) goto L_7d696c;
L_7d693c: /* 7d693c: mov edx, dword ptr [0xb5d428] */
  edx = R32((uint32_t)(0xb5d428u));
/* 7d6942: mov ecx, 0xb5d428 */
  ecx = 0xb5d428u;
/* 7d6947: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d694au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d694a: push 0x478 */
  { uint32_t v = 0x478u; esp -= 4; W32(esp, v); }
/* 7d694f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6950: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6955: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6957: push 0xad9ec8 */
  { uint32_t v = 0xad9ec8u; esp -= 4; W32(esp, v); }
/* 7d695c: push 0xad9ed8 */
  { uint32_t v = 0xad9ed8u; esp -= 4; W32(esp, v); }
/* 7d6961: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6962: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6964u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6964: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6967: mov edi, 1 */
  edi = 0x1u;
L_7d696c: /* 7d696c: mov edx, dword ptr [0xb5cef8] */
  edx = R32((uint32_t)(0xb5cef8u));
/* 7d6972: mov ecx, 0xb5cef8 */
  ecx = 0xb5cef8u;
/* 7d6977: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d697au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d697a: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d697f: je 0x7d69b1 */
  if (zf) goto L_7d69b1;
L_7d6981: /* 7d6981: mov eax, dword ptr [0xb5cef8] */
  eax = R32((uint32_t)(0xb5cef8u));
/* 7d6986: mov ecx, 0xb5cef8 */
  ecx = 0xb5cef8u;
/* 7d698b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d698eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d698e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6994: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6996: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d699b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d699c: push 0xad9f38 */
  { uint32_t v = 0xad9f38u; esp -= 4; W32(esp, v); }
/* 7d69a1: push 0xad9f50 */
  { uint32_t v = 0xad9f50u; esp -= 4; W32(esp, v); }
/* 7d69a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d69a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d69a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d69a9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d69ac: mov edi, 1 */
  edi = 0x1u;
L_7d69b1: /* 7d69b1: mov eax, dword ptr [0xb5c9c8] */
  eax = R32((uint32_t)(0xb5c9c8u));
/* 7d69b6: mov ecx, 0xb5c9c8 */
  ecx = 0xb5c9c8u;
/* 7d69bb: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d69beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d69be: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d69c3: je 0x7d69f5 */
  if (zf) goto L_7d69f5;
L_7d69c5: /* 7d69c5: mov edx, dword ptr [0xb5c9c8] */
  edx = R32((uint32_t)(0xb5c9c8u));
/* 7d69cb: mov ecx, 0xb5c9c8 */
  ecx = 0xb5c9c8u;
/* 7d69d0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d69d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d69d3: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d69d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d69d9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d69de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d69e0: push 0xad9fb0 */
  { uint32_t v = 0xad9fb0u; esp -= 4; W32(esp, v); }
/* 7d69e5: push 0xad9fc8 */
  { uint32_t v = 0xad9fc8u; esp -= 4; W32(esp, v); }
/* 7d69ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d69eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d69edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d69ed: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d69f0: mov edi, 1 */
  edi = 0x1u;
L_7d69f5: /* 7d69f5: mov edx, dword ptr [0xb5c498] */
  edx = R32((uint32_t)(0xb5c498u));
/* 7d69fb: mov ecx, 0xb5c498 */
  ecx = 0xb5c498u;
/* 7d6a00: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6a03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a03: cmp eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6a08: je 0x7d6a3a */
  if (zf) goto L_7d6a3a;
L_7d6a0a: /* 7d6a0a: mov eax, dword ptr [0xb5c498] */
  eax = R32((uint32_t)(0xb5c498u));
/* 7d6a0f: mov ecx, 0xb5c498 */
  ecx = 0xb5c498u;
/* 7d6a14: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6a17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a17: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6a1d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6a1f: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 7d6a24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6a25: push 0xada028 */
  { uint32_t v = 0xada028u; esp -= 4; W32(esp, v); }
/* 7d6a2a: push 0xada038 */
  { uint32_t v = 0xada038u; esp -= 4; W32(esp, v); }
/* 7d6a2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6a30: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6a32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a32: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6a35: mov edi, 1 */
  edi = 0x1u;
L_7d6a3a: /* 7d6a3a: mov eax, dword ptr [0xb20d28] */
  eax = R32((uint32_t)(0xb20d28u));
/* 7d6a3f: mov ecx, 0xb20d28 */
  ecx = 0xb20d28u;
/* 7d6a44: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6a47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a47: cmp eax, 0x35c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6a4c: je 0x7d6a7e */
  if (zf) goto L_7d6a7e;
L_7d6a4e: /* 7d6a4e: mov edx, dword ptr [0xb20d28] */
  edx = R32((uint32_t)(0xb20d28u));
/* 7d6a54: mov ecx, 0xb20d28 */
  ecx = 0xb20d28u;
/* 7d6a59: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a5c: push 0x35c */
  { uint32_t v = 0x35cu; esp -= 4; W32(esp, v); }
/* 7d6a61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6a62: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6a67: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6a69: push 0xada098 */
  { uint32_t v = 0xada098u; esp -= 4; W32(esp, v); }
/* 7d6a6e: push 0xada0b0 */
  { uint32_t v = 0xada0b0u; esp -= 4; W32(esp, v); }
/* 7d6a73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6a74: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6a76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a76: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6a79: mov edi, 1 */
  edi = 0x1u;
L_7d6a7e: /* 7d6a7e: mov edx, dword ptr [0xb207f8] */
  edx = R32((uint32_t)(0xb207f8u));
/* 7d6a84: mov ecx, 0xb207f8 */
  ecx = 0xb207f8u;
/* 7d6a89: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6a8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a8c: cmp eax, 0x61c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6a91: je 0x7d6ac3 */
  if (zf) goto L_7d6ac3;
L_7d6a93: /* 7d6a93: mov eax, dword ptr [0xb207f8] */
  eax = R32((uint32_t)(0xb207f8u));
/* 7d6a98: mov ecx, 0xb207f8 */
  ecx = 0xb207f8u;
/* 7d6a9d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6aa0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6aa0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6aa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6aa8: push 0x61c */
  { uint32_t v = 0x61cu; esp -= 4; W32(esp, v); }
/* 7d6aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6aae: push 0xada110 */
  { uint32_t v = 0xada110u; esp -= 4; W32(esp, v); }
/* 7d6ab3: push 0xada128 */
  { uint32_t v = 0xada128u; esp -= 4; W32(esp, v); }
/* 7d6ab8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6ab9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6abbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6abb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6abe: mov edi, 1 */
  edi = 0x1u;
L_7d6ac3: /* 7d6ac3: mov eax, dword ptr [0xb202c8] */
  eax = R32((uint32_t)(0xb202c8u));
/* 7d6ac8: mov ecx, 0xb202c8 */
  ecx = 0xb202c8u;
/* 7d6acd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6ad0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6ad0: cmp eax, 0x3dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6ad5: je 0x7d6b07 */
  if (zf) goto L_7d6b07;
L_7d6ad7: /* 7d6ad7: mov edx, dword ptr [0xb202c8] */
  edx = R32((uint32_t)(0xb202c8u));
/* 7d6add: mov ecx, 0xb202c8 */
  ecx = 0xb202c8u;
/* 7d6ae2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6ae5: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* 7d6aea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6aeb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6af0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6af2: push 0xada188 */
  { uint32_t v = 0xada188u; esp -= 4; W32(esp, v); }
/* 7d6af7: push 0xada198 */
  { uint32_t v = 0xada198u; esp -= 4; W32(esp, v); }
/* 7d6afc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6afd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6affu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6aff: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6b02: mov edi, 1 */
  edi = 0x1u;
L_7d6b07: /* 7d6b07: mov edx, dword ptr [0xb1fd98] */
  edx = R32((uint32_t)(0xb1fd98u));
/* 7d6b0d: mov ecx, 0xb1fd98 */
  ecx = 0xb1fd98u;
/* 7d6b12: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6b15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b15: cmp eax, 0x360 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x360u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6b1a: je 0x7d6b4c */
  if (zf) goto L_7d6b4c;
L_7d6b1c: /* 7d6b1c: mov eax, dword ptr [0xb1fd98] */
  eax = R32((uint32_t)(0xb1fd98u));
/* 7d6b21: mov ecx, 0xb1fd98 */
  ecx = 0xb1fd98u;
/* 7d6b26: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6b29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b29: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6b2f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6b31: push 0x360 */
  { uint32_t v = 0x360u; esp -= 4; W32(esp, v); }
/* 7d6b36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6b37: push 0xada1f8 */
  { uint32_t v = 0xada1f8u; esp -= 4; W32(esp, v); }
/* 7d6b3c: push 0xada208 */
  { uint32_t v = 0xada208u; esp -= 4; W32(esp, v); }
/* 7d6b41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6b42: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6b44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b44: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6b47: mov edi, 1 */
  edi = 0x1u;
L_7d6b4c: /* 7d6b4c: mov eax, dword ptr [0xb1f868] */
  eax = R32((uint32_t)(0xb1f868u));
/* 7d6b51: mov ecx, 0xb1f868 */
  ecx = 0xb1f868u;
/* 7d6b56: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6b59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b59: cmp eax, 0xe4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6b5e: je 0x7d6b90 */
  if (zf) goto L_7d6b90;
L_7d6b60: /* 7d6b60: mov edx, dword ptr [0xb1f868] */
  edx = R32((uint32_t)(0xb1f868u));
/* 7d6b66: mov ecx, 0xb1f868 */
  ecx = 0xb1f868u;
/* 7d6b6b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6b6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b6e: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 7d6b73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6b74: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6b79: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6b7b: push 0xada268 */
  { uint32_t v = 0xada268u; esp -= 4; W32(esp, v); }
/* 7d6b80: push 0xada290 */
  { uint32_t v = 0xada290u; esp -= 4; W32(esp, v); }
/* 7d6b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6b86: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6b88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b88: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6b8b: mov edi, 1 */
  edi = 0x1u;
L_7d6b90: /* 7d6b90: mov edx, dword ptr [0xb1ee08] */
  edx = R32((uint32_t)(0xb1ee08u));
/* 7d6b96: mov ecx, 0xb1ee08 */
  ecx = 0xb1ee08u;
/* 7d6b9b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6b9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b9e: cmp eax, 0xac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6ba3: je 0x7d6bd5 */
  if (zf) goto L_7d6bd5;
L_7d6ba5: /* 7d6ba5: mov eax, dword ptr [0xb1ee08] */
  eax = R32((uint32_t)(0xb1ee08u));
/* 7d6baa: mov ecx, 0xb1ee08 */
  ecx = 0xb1ee08u;
/* 7d6baf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6bb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6bb2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6bb8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6bba: push 0xac */
  { uint32_t v = 0xacu; esp -= 4; W32(esp, v); }
/* 7d6bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6bc0: push 0xada2f0 */
  { uint32_t v = 0xada2f0u; esp -= 4; W32(esp, v); }
/* 7d6bc5: push 0xada310 */
  { uint32_t v = 0xada310u; esp -= 4; W32(esp, v); }
/* 7d6bca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6bcb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6bcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6bcd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6bd0: mov edi, 1 */
  edi = 0x1u;
L_7d6bd5: /* 7d6bd5: mov eax, dword ptr [0xb1e8d8] */
  eax = R32((uint32_t)(0xb1e8d8u));
/* 7d6bda: mov ecx, 0xb1e8d8 */
  ecx = 0xb1e8d8u;
/* 7d6bdf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6be2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6be2: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6be5: je 0x7d6c14 */
  if (zf) goto L_7d6c14;
L_7d6be7: /* 7d6be7: mov edx, dword ptr [0xb1e8d8] */
  edx = R32((uint32_t)(0xb1e8d8u));
/* 7d6bed: mov ecx, 0xb1e8d8 */
  ecx = 0xb1e8d8u;
/* 7d6bf2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6bf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6bf5: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d6bf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6bf8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6bfd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6bff: push 0xada370 */
  { uint32_t v = 0xada370u; esp -= 4; W32(esp, v); }
/* 7d6c04: push 0xada3a0 */
  { uint32_t v = 0xada3a0u; esp -= 4; W32(esp, v); }
/* 7d6c09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6c0a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6c0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c0c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6c0f: mov edi, 1 */
  edi = 0x1u;
L_7d6c14: /* 7d6c14: mov edx, dword ptr [0xb1f338] */
  edx = R32((uint32_t)(0xb1f338u));
/* 7d6c1a: mov ecx, 0xb1f338 */
  ecx = 0xb1f338u;
/* 7d6c1f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6c22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c22: cmp eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6c27: je 0x7d6c59 */
  if (zf) goto L_7d6c59;
L_7d6c29: /* 7d6c29: mov eax, dword ptr [0xb1f338] */
  eax = R32((uint32_t)(0xb1f338u));
/* 7d6c2e: mov ecx, 0xb1f338 */
  ecx = 0xb1f338u;
/* 7d6c33: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6c36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c36: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6c3c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6c3e: push 0xd0 */
  { uint32_t v = 0xd0u; esp -= 4; W32(esp, v); }
/* 7d6c43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6c44: push 0xada400 */
  { uint32_t v = 0xada400u; esp -= 4; W32(esp, v); }
/* 7d6c49: push 0xada428 */
  { uint32_t v = 0xada428u; esp -= 4; W32(esp, v); }
/* 7d6c4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6c4f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c51: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6c54: mov edi, 1 */
  edi = 0x1u;
L_7d6c59: /* 7d6c59: mov eax, dword ptr [0xb1d940] */
  eax = R32((uint32_t)(0xb1d940u));
/* 7d6c5e: mov ecx, 0xb1d940 */
  ecx = 0xb1d940u;
/* 7d6c63: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6c66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c66: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6c6b: je 0x7d6c9d */
  if (zf) goto L_7d6c9d;
L_7d6c6d: /* 7d6c6d: mov edx, dword ptr [0xb1d940] */
  edx = R32((uint32_t)(0xb1d940u));
/* 7d6c73: mov ecx, 0xb1d940 */
  ecx = 0xb1d940u;
/* 7d6c78: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6c7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c7b: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d6c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6c81: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6c86: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6c88: push 0xada488 */
  { uint32_t v = 0xada488u; esp -= 4; W32(esp, v); }
/* 7d6c8d: push 0xada4a8 */
  { uint32_t v = 0xada4a8u; esp -= 4; W32(esp, v); }
/* 7d6c92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6c93: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6c95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c95: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6c98: mov edi, 1 */
  edi = 0x1u;
L_7d6c9d: /* 7d6c9d: mov edx, dword ptr [0xb1c480] */
  edx = R32((uint32_t)(0xb1c480u));
/* 7d6ca3: mov ecx, 0xb1c480 */
  ecx = 0xb1c480u;
/* 7d6ca8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6cabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6cab: cmp eax, 0x3c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6cb0: je 0x7d6ce2 */
  if (zf) goto L_7d6ce2;
L_7d6cb2: /* 7d6cb2: mov eax, dword ptr [0xb1c480] */
  eax = R32((uint32_t)(0xb1c480u));
/* 7d6cb7: mov ecx, 0xb1c480 */
  ecx = 0xb1c480u;
/* 7d6cbc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6cbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6cbf: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6cc5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6cc7: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7d6ccc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ccd: push 0xada508 */
  { uint32_t v = 0xada508u; esp -= 4; W32(esp, v); }
/* 7d6cd2: push 0xada528 */
  { uint32_t v = 0xada528u; esp -= 4; W32(esp, v); }
/* 7d6cd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6cd8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6cdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6cda: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6cdd: mov edi, 1 */
  edi = 0x1u;
L_7d6ce2: /* 7d6ce2: mov eax, dword ptr [0xb1d410] */
  eax = R32((uint32_t)(0xb1d410u));
/* 7d6ce7: mov ecx, 0xb1d410 */
  ecx = 0xb1d410u;
/* 7d6cec: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6cefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6cef: cmp eax, 0x3d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6cf4: je 0x7d6d26 */
  if (zf) goto L_7d6d26;
L_7d6cf6: /* 7d6cf6: mov edx, dword ptr [0xb1d410] */
  edx = R32((uint32_t)(0xb1d410u));
/* 7d6cfc: mov ecx, 0xb1d410 */
  ecx = 0xb1d410u;
/* 7d6d01: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6d04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d04: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 7d6d09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6d0a: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6d0f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6d11: push 0xada588 */
  { uint32_t v = 0xada588u; esp -= 4; W32(esp, v); }
/* 7d6d16: push 0xada5a0 */
  { uint32_t v = 0xada5a0u; esp -= 4; W32(esp, v); }
/* 7d6d1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6d1c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6d1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d1e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6d21: mov edi, 1 */
  edi = 0x1u;
L_7d6d26: /* 7d6d26: mov edx, dword ptr [0xb1cee0] */
  edx = R32((uint32_t)(0xb1cee0u));
/* 7d6d2c: mov ecx, 0xb1cee0 */
  ecx = 0xb1cee0u;
/* 7d6d31: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6d34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d34: cmp eax, 0x3f0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6d39: je 0x7d6d6b */
  if (zf) goto L_7d6d6b;
L_7d6d3b: /* 7d6d3b: mov eax, dword ptr [0xb1cee0] */
  eax = R32((uint32_t)(0xb1cee0u));
/* 7d6d40: mov ecx, 0xb1cee0 */
  ecx = 0xb1cee0u;
/* 7d6d45: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6d48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d48: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6d4e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6d50: push 0x3f0 */
  { uint32_t v = 0x3f0u; esp -= 4; W32(esp, v); }
/* 7d6d55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6d56: push 0xada600 */
  { uint32_t v = 0xada600u; esp -= 4; W32(esp, v); }
/* 7d6d5b: push 0xada610 */
  { uint32_t v = 0xada610u; esp -= 4; W32(esp, v); }
/* 7d6d60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6d61: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6d63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d63: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6d66: mov edi, 1 */
  edi = 0x1u;
L_7d6d6b: /* 7d6d6b: mov eax, dword ptr [0xb1c9b0] */
  eax = R32((uint32_t)(0xb1c9b0u));
/* 7d6d70: mov ecx, 0xb1c9b0 */
  ecx = 0xb1c9b0u;
/* 7d6d75: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6d78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d78: cmp eax, 0x3c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6d7d: je 0x7d6daf */
  if (zf) goto L_7d6daf;
L_7d6d7f: /* 7d6d7f: mov edx, dword ptr [0xb1c9b0] */
  edx = R32((uint32_t)(0xb1c9b0u));
/* 7d6d85: mov ecx, 0xb1c9b0 */
  ecx = 0xb1c9b0u;
/* 7d6d8a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6d8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d8d: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7d6d92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6d93: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6d98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6d9a: push 0xada670 */
  { uint32_t v = 0xada670u; esp -= 4; W32(esp, v); }
/* 7d6d9f: push 0xada688 */
  { uint32_t v = 0xada688u; esp -= 4; W32(esp, v); }
/* 7d6da4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6da5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6da7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6da7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6daa: mov edi, 1 */
  edi = 0x1u;
L_7d6daf: /* 7d6daf: mov edx, dword ptr [0xb08948] */
  edx = R32((uint32_t)(0xb08948u));
/* 7d6db5: mov ecx, 0xb08948 */
  ecx = 0xb08948u;
/* 7d6dba: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6dbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6dbd: cmp eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6dc2: je 0x7d6df4 */
  if (zf) goto L_7d6df4;
L_7d6dc4: /* 7d6dc4: mov eax, dword ptr [0xb08948] */
  eax = R32((uint32_t)(0xb08948u));
/* 7d6dc9: mov ecx, 0xb08948 */
  ecx = 0xb08948u;
/* 7d6dce: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6dd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6dd1: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6dd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6dd9: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7d6dde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ddf: push 0xada6e8 */
  { uint32_t v = 0xada6e8u; esp -= 4; W32(esp, v); }
/* 7d6de4: push 0xada700 */
  { uint32_t v = 0xada700u; esp -= 4; W32(esp, v); }
/* 7d6de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6dea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6decu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6dec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6def: mov edi, 1 */
  edi = 0x1u;
L_7d6df4: /* 7d6df4: mov eax, dword ptr [0xb08308] */
  eax = R32((uint32_t)(0xb08308u));
/* 7d6df9: mov ecx, 0xb08308 */
  ecx = 0xb08308u;
/* 7d6dfe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6e01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e01: cmp eax, 0x34c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6e06: je 0x7d6e35 */
  if (zf) goto L_7d6e35;
L_7d6e08: /* 7d6e08: mov edx, dword ptr [0xb08308] */
  edx = R32((uint32_t)(0xb08308u));
/* 7d6e0e: mov ecx, 0xb08308 */
  ecx = 0xb08308u;
/* 7d6e13: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6e16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e16: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 7d6e1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6e1c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6e21: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6e23: push 0xada760 */
  { uint32_t v = 0xada760u; esp -= 4; W32(esp, v); }
/* 7d6e28: push 0xada778 */
  { uint32_t v = 0xada778u; esp -= 4; W32(esp, v); }
/* 7d6e2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6e2e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6e30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e30: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6e33: jmp 0x7d6e39 */
  goto L_7d6e39;
L_7d6e35: /* 7d6e35: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6e37: je 0x7d6e4c */
  if (zf) goto L_7d6e4c;
L_7d6e39: /* 7d6e39: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7d6e3f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d6e41: push 0xada7d8 */
  { uint32_t v = 0xada7d8u; esp -= 4; W32(esp, v); }
/* 7d6e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6e47: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e49: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d6e4c: /* 7d6e4c: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 7d6e51: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d6e57u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d6e57: mov edi, eax */
  edi = eax;
/* 7d6e59: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7d6e5fu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7d6e5f: mov esi, dword ptr [0xcfa5f8] */
  esi = R32((uint32_t)(0xcfa5f8u));
/* 7d6e65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d6e67: push 0xada818 */
  { uint32_t v = 0xada818u; esp -= 4; W32(esp, v); }
/* 7d6e6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d6e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6e6e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6e70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e70: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6e73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6e75: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d6e78: je 0x7d6e82 */
  if (zf) goto L_7d6e82;
L_7d6e7a: /* 7d6e7a: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d6e7d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7d6e80: jmp 0x7d6e89 */
  goto L_7d6e89;
L_7d6e82: /* 7d6e82: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7d6e89: /* 7d6e89: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d6e8c: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d6e91u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d6e91: mov ebx, dword ptr [0xcfa340] */
  ebx = R32((uint32_t)(0xcfa340u));
L_7d6e97: /* 7d6e97: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d6e9a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6e9c: je 0x7d6ef1 */
  if (zf) goto L_7d6ef1;
L_7d6e9e: /* 7d6e9e: mov ecx, edi */
  ecx = edi;
/* 7d6ea0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d6ea6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d6ea6: push 0xada824 */
  { uint32_t v = 0xada824u; esp -= 4; W32(esp, v); }
/* 7d6eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6eac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d6eaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6eae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6eb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6eb3: jne 0x7d6ee1 */
  if (!zf) goto L_7d6ee1;
L_7d6eb5: /* 7d6eb5: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 7d6eb8: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6ebb: je 0x7d6ee1 */
  if (zf) goto L_7d6ee1;
L_7d6ebd: /* 7d6ebd: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7d6ec3: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d6ec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ec6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d6ec8: push 0xada830 */
  { uint32_t v = 0xada830u; esp -= 4; W32(esp, v); }
/* 7d6ecd: push 0xada83c */
  { uint32_t v = 0xada83cu; esp -= 4; W32(esp, v); }
/* 7d6ed2: push 0xada848 */
  { uint32_t v = 0xada848u; esp -= 4; W32(esp, v); }
/* 7d6ed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ed8: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d6edeu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d6ede: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d6ee1: /* 7d6ee1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7d6ee4: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7d6ee7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d6eea: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d6eefu); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d6eef: jmp 0x7d6e97 */
  goto L_7d6e97;
L_7d6ef1: /* 7d6ef1: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 7d6ef6: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d6efcu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d6efc: mov edi, eax */
  edi = eax;
/* 7d6efe: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7d6f04u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7d6f04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d6f06: push 0xada8a4 */
  { uint32_t v = 0xada8a4u; esp -= 4; W32(esp, v); }
/* 7d6f0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d6f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6f0d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6f0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6f0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6f12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6f14: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d6f17: je 0x7d6f21 */
  if (zf) goto L_7d6f21;
L_7d6f19: /* 7d6f19: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7d6f1c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7d6f1f: jmp 0x7d6f28 */
  goto L_7d6f28;
L_7d6f21: /* 7d6f21: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7d6f28: /* 7d6f28: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d6f2b: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d6f30u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d6f30: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d6f33: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6f35: je 0x7d6f86 */
  if (zf) goto L_7d6f86;
L_7d6f37: /* 7d6f37: mov ecx, edi */
  ecx = edi;
/* 7d6f39: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d6f3fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d6f3f: push 0xada8b0 */
  { uint32_t v = 0xada8b0u; esp -= 4; W32(esp, v); }
/* 7d6f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6f45: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d6f47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6f47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6f4c: jne 0x7d6f7e */
  if (!zf) goto L_7d6f7e;
L_7d6f4e: /* 7d6f4e: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 7d6f51: cmp eax, 0xe8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6f56: je 0x7d6f7e */
  if (zf) goto L_7d6f7e;
L_7d6f58: /* 7d6f58: push 0xe8 */
  { uint32_t v = 0xe8u; esp -= 4; W32(esp, v); }
/* 7d6f5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6f5e: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7d6f63: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6f65: push 0xada8cc */
  { uint32_t v = 0xada8ccu; esp -= 4; W32(esp, v); }
/* 7d6f6a: push 0xada8e8 */
  { uint32_t v = 0xada8e8u; esp -= 4; W32(esp, v); }
/* 7d6f6f: push 0xada8f8 */
  { uint32_t v = 0xada8f8u; esp -= 4; W32(esp, v); }
/* 7d6f74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6f75: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d6f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d6f7b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d6f7e: /* 7d6f7e: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7d6f81: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7d6f84: jmp 0x7d6f28 */
  goto L_7d6f28;
L_7d6f86: /* 7d6f86: mov ecx, 0xb6a8d8 */
  ecx = 0xb6a8d8u;
/* 7d6f8b: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d6f91u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d6f91: mov edi, eax */
  edi = eax;
/* 7d6f93: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7d6f99u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7d6f99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d6f9b: push 0xada954 */
  { uint32_t v = 0xada954u; esp -= 4; W32(esp, v); }
/* 7d6fa0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d6fa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6fa2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6fa4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6fa4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6fa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6fa9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d6fac: je 0x7d6fb6 */
  if (zf) goto L_7d6fb6;
L_7d6fae: /* 7d6fae: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7d6fb1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7d6fb4: jmp 0x7d6fbd */
  goto L_7d6fbd;
L_7d6fb6: /* 7d6fb6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7d6fbd: /* 7d6fbd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d6fc0: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d6fc5u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d6fc5: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d6fc8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6fca: je 0x7d701c */
  if (zf) goto L_7d701c;
L_7d6fcc: /* 7d6fcc: mov ecx, edi */
  ecx = edi;
/* 7d6fce: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d6fd4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d6fd4: push 0xada978 */
  { uint32_t v = 0xada978u; esp -= 4; W32(esp, v); }
/* 7d6fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6fda: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d6fdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6fdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6fdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6fe1: jne 0x7d7014 */
  if (!zf) goto L_7d7014;
L_7d6fe3: /* 7d6fe3: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 7d6fe6: cmp eax, 0x4c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4c0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6feb: je 0x7d7014 */
  if (zf) goto L_7d7014;
L_7d6fed: /* 7d6fed: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7d6ff3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6ff5: push 0x4c0 */
  { uint32_t v = 0x4c0u; esp -= 4; W32(esp, v); }
/* 7d6ffa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ffb: push 0xada988 */
  { uint32_t v = 0xada988u; esp -= 4; W32(esp, v); }
/* 7d7000: push 0xada998 */
  { uint32_t v = 0xada998u; esp -= 4; W32(esp, v); }
/* 7d7005: push 0xada9c0 */
  { uint32_t v = 0xada9c0u; esp -= 4; W32(esp, v); }
/* 7d700a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d700b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d7011u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d7011: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7014: /* 7d7014: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7d7017: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7d701a: jmp 0x7d6fbd */
  goto L_7d6fbd;
L_7d701c: /* 7d701c: mov ecx, 0xcc74c0 */
  ecx = 0xcc74c0u;
/* 7d7021: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d7027u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d7027: mov edi, eax */
  edi = eax;
/* 7d7029: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7d702fu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7d702f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7031: push 0xadaa1c */
  { uint32_t v = 0xadaa1cu; esp -= 4; W32(esp, v); }
/* 7d7036: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7037: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7038: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d703au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d703a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d703d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d703f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d7042: je 0x7d704c */
  if (zf) goto L_7d704c;
L_7d7044: /* 7d7044: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d7047: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7d704a: jmp 0x7d7053 */
  goto L_7d7053;
L_7d704c: /* 7d704c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7d7053: /* 7d7053: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d7056: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d705bu); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d705b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d705e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7060: je 0x7d70b2 */
  if (zf) goto L_7d70b2;
L_7d7062: /* 7d7062: mov ecx, edi */
  ecx = edi;
/* 7d7064: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d706au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d706a: push 0xadaa28 */
  { uint32_t v = 0xadaa28u; esp -= 4; W32(esp, v); }
/* 7d706f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7070: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7072u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7072: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7075: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7077: jne 0x7d70aa */
  if (!zf) goto L_7d70aa;
L_7d7079: /* 7d7079: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 7d707c: cmp eax, 0x46c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7081: je 0x7d70aa */
  if (zf) goto L_7d70aa;
L_7d7083: /* 7d7083: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7d7089: push 0x46c */
  { uint32_t v = 0x46cu; esp -= 4; W32(esp, v); }
/* 7d708e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d708f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7091: push 0xadaa38 */
  { uint32_t v = 0xadaa38u; esp -= 4; W32(esp, v); }
/* 7d7096: push 0xadaa48 */
  { uint32_t v = 0xadaa48u; esp -= 4; W32(esp, v); }
/* 7d709b: push 0xadaa58 */
  { uint32_t v = 0xadaa58u; esp -= 4; W32(esp, v); }
/* 7d70a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d70a1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d70a7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d70a7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d70aa: /* 7d70aa: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7d70ad: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7d70b0: jmp 0x7d7053 */
  goto L_7d7053;
L_7d70b2: /* 7d70b2: mov edx, dword ptr [0xb7bee0] */
  edx = R32((uint32_t)(0xb7bee0u));
/* 7d70b8: mov ecx, 0xb7bee0 */
  ecx = 0xb7bee0u;
/* 7d70bd: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d70c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d70c0: cmp eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d70c5: je 0x7d70df */
  if (zf) goto L_7d70df;
L_7d70c7: /* 7d70c7: push 0x5f7 */
  { uint32_t v = 0x5f7u; esp -= 4; W32(esp, v); }
/* 7d70cc: push 0xadaab4 */
  { uint32_t v = 0xadaab4u; esp -= 4; W32(esp, v); }
/* 7d70d1: push 0xadaac0 */
  { uint32_t v = 0xadaac0u; esp -= 4; W32(esp, v); }
/* 7d70d6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d70dcu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d70dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d70df: /* 7d70df: mov eax, dword ptr [0xcea928] */
  eax = R32((uint32_t)(0xcea928u));
/* 7d70e4: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7d70ea: mov ecx, 0xcea928 */
  ecx = 0xcea928u;
/* 7d70ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d70f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d70f2: cmp eax, 0xe4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d70f7: je 0x7d710d */
  if (zf) goto L_7d710d;
L_7d70f9: /* 7d70f9: push 0x5f8 */
  { uint32_t v = 0x5f8u; esp -= 4; W32(esp, v); }
/* 7d70fe: push 0xadab00 */
  { uint32_t v = 0xadab00u; esp -= 4; W32(esp, v); }
/* 7d7103: push 0xadab0c */
  { uint32_t v = 0xadab0cu; esp -= 4; W32(esp, v); }
/* 7d7108: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d710au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d710a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d710d: /* 7d710d: mov edx, dword ptr [0xb7d828] */
  edx = R32((uint32_t)(0xb7d828u));
/* 7d7113: mov ecx, 0xb7d828 */
  ecx = 0xb7d828u;
/* 7d7118: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d711bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d711b: cmp eax, 0x108 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7120: je 0x7d7136 */
  if (zf) goto L_7d7136;
L_7d7122: /* 7d7122: push 0x5f9 */
  { uint32_t v = 0x5f9u; esp -= 4; W32(esp, v); }
/* 7d7127: push 0xadab4c */
  { uint32_t v = 0xadab4cu; esp -= 4; W32(esp, v); }
/* 7d712c: push 0xadab58 */
  { uint32_t v = 0xadab58u; esp -= 4; W32(esp, v); }
/* 7d7131: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7133u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7133: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7136: /* 7d7136: mov eax, dword ptr [0xb81b88] */
  eax = R32((uint32_t)(0xb81b88u));
/* 7d713b: mov ecx, 0xb81b88 */
  ecx = 0xb81b88u;
/* 7d7140: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d7143u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7143: cmp eax, 0x220 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7148: je 0x7d715e */
  if (zf) goto L_7d715e;
L_7d714a: /* 7d714a: push 0x5fa */
  { uint32_t v = 0x5fau; esp -= 4; W32(esp, v); }
/* 7d714f: push 0xadab98 */
  { uint32_t v = 0xadab98u; esp -= 4; W32(esp, v); }
/* 7d7154: push 0xadaba8 */
  { uint32_t v = 0xadaba8u; esp -= 4; W32(esp, v); }
/* 7d7159: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d715bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d715b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d715e: /* 7d715e: mov edx, dword ptr [0xcea3f8] */
  edx = R32((uint32_t)(0xcea3f8u));
/* 7d7164: mov ecx, 0xcea3f8 */
  ecx = 0xcea3f8u;
/* 7d7169: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d716cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d716c: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d716f: je 0x7d7185 */
  if (zf) goto L_7d7185;
L_7d7171: /* 7d7171: push 0x5fb */
  { uint32_t v = 0x5fbu; esp -= 4; W32(esp, v); }
/* 7d7176: push 0xadabf0 */
  { uint32_t v = 0xadabf0u; esp -= 4; W32(esp, v); }
/* 7d717b: push 0xadabfc */
  { uint32_t v = 0xadabfcu; esp -= 4; W32(esp, v); }
/* 7d7180: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7182u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7182: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7185: /* 7d7185: mov eax, dword ptr [0xcc7b00] */
  eax = R32((uint32_t)(0xcc7b00u));
/* 7d718a: mov ecx, 0xcc7b00 */
  ecx = 0xcc7b00u;
/* 7d718f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d7192u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7192: cmp eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7195: je 0x7d71ab */
  if (zf) goto L_7d71ab;
L_7d7197: /* 7d7197: push 0x5fc */
  { uint32_t v = 0x5fcu; esp -= 4; W32(esp, v); }
/* 7d719c: push 0xadac3c */
  { uint32_t v = 0xadac3cu; esp -= 4; W32(esp, v); }
/* 7d71a1: push 0xadac48 */
  { uint32_t v = 0xadac48u; esp -= 4; W32(esp, v); }
/* 7d71a6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d71a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d71a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d71ab: /* 7d71ab: mov edx, dword ptr [0xce9ec8] */
  edx = R32((uint32_t)(0xce9ec8u));
/* 7d71b1: mov ecx, 0xce9ec8 */
  ecx = 0xce9ec8u;
/* 7d71b6: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d71b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d71b9: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d71be: je 0x7d71d4 */
  if (zf) goto L_7d71d4;
L_7d71c0: /* 7d71c0: push 0x5fd */
  { uint32_t v = 0x5fdu; esp -= 4; W32(esp, v); }
/* 7d71c5: push 0xadac88 */
  { uint32_t v = 0xadac88u; esp -= 4; W32(esp, v); }
/* 7d71ca: push 0xadac94 */
  { uint32_t v = 0xadac94u; esp -= 4; W32(esp, v); }
/* 7d71cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d71d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d71d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d71d4: /* 7d71d4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d71d7: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d71dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d71df: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d71e6: jne 0x7d71fc */
  if (!zf) goto L_7d71fc;
L_7d71e8: /* 7d71e8: push 0x601 */
  { uint32_t v = 0x601u; esp -= 4; W32(esp, v); }
/* 7d71ed: push 0xadacdc */
  { uint32_t v = 0xadacdcu; esp -= 4; W32(esp, v); }
/* 7d71f2: push 0xadace8 */
  { uint32_t v = 0xadace8u; esp -= 4; W32(esp, v); }
/* 7d71f7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d71f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d71f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d71fc: /* 7d71fc: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d71ff: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7205: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7208: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7d720a: mov dword ptr [ebp + 0x14], esi */
  W32((uint32_t)(ebp + 0x14u), esi);
/* 7d720d: call dword ptr [0xcfa920] */
  esp -= 4; W32(esp, 0x7d7213u); SPILL(); f_4e2419(); if (g_unwind) return; /* Core!?appComputerName@@YAPBGXZ */ RELOAD();
/* 7d7213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7214: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 7d721a: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7d7220u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7d7220: push 0xadacf0 */
  { uint32_t v = 0xadacf0u; esp -= 4; W32(esp, v); }
/* 7d7225: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d722b: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 7d722f: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7234u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7234: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7236: je 0x7d7240 */
  if (zf) goto L_7d7240;
L_7d7238: /* 7d7238: mov eax, dword ptr [esi + 0x4b8] */
  eax = R32((uint32_t)(esi + 0x4b8u));
/* 7d723e: jmp 0x7d7295 */
  goto L_7d7295;
L_7d7240: /* 7d7240: push 0xadacfc */
  { uint32_t v = 0xadacfcu; esp -= 4; W32(esp, v); }
/* 7d7245: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d724b: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7250u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7250: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7252: je 0x7d725a */
  if (zf) goto L_7d725a;
L_7d7254: /* 7d7254: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d7257: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7258: jmp 0x7d7295 */
  goto L_7d7295;
L_7d725a: /* 7d725a: push 0xadad08 */
  { uint32_t v = 0xadad08u; esp -= 4; W32(esp, v); }
/* 7d725f: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7265: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d726au); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d726a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d726c: je 0x7d727c */
  if (zf) goto L_7d727c;
L_7d726e: /* 7d726e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d7271: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7d7272: xor ecx, ecx */
  ecx = 0;
/* 7d7274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d7276: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7d7279: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7d727a: jmp 0x7d7293 */
  goto L_7d7293;
L_7d727c: /* 7d727c: push 0xadad10 */
  { uint32_t v = 0xadad10u; esp -= 4; W32(esp, v); }
/* 7d7281: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7287: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d728cu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d728c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d728f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7d7291: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_7d7293: /* 7d7293: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_7d7295: /* 7d7295: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7d7298: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d729a: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d72a1: mov dword ptr [esi + 0x4b8], eax */
  W32((uint32_t)(esi + 0x4b8u), eax);
/* 7d72a7: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 7d72ab: je 0x7d7513 */
  if (zf) goto L_7d7513;
L_7d72b1: /* 7d72b1: cmp edi, dword ptr [ebx + 0x110] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x110u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d72b7: je 0x7d72d1 */
  if (zf) goto L_7d72d1;
L_7d72b9: /* 7d72b9: push 0x613 */
  { uint32_t v = 0x613u; esp -= 4; W32(esp, v); }
/* 7d72be: push 0xadad24 */
  { uint32_t v = 0xadad24u; esp -= 4; W32(esp, v); }
/* 7d72c3: push 0xadad30 */
  { uint32_t v = 0xadad30u; esp -= 4; W32(esp, v); }
/* 7d72c8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d72ceu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d72ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d72d1: /* 7d72d1: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7d72d4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d72da: mov dword ptr [edx + 0x3c], eax */
  W32((uint32_t)(edx + 0x3cu), eax);
/* 7d72dd: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d72e3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d72e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d72e8: je 0x7d72f8 */
  if (zf) goto L_7d72f8;
L_7d72ea: /* 7d72ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d72ec: je 0x7d72f3 */
  if (zf) goto L_7d72f3;
L_7d72ee: /* 7d72ee: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d72f1: jmp 0x7d72f5 */
  goto L_7d72f5;
L_7d72f3: /* 7d72f3: xor eax, eax */
  eax = 0;
L_7d72f5: /* 7d72f5: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
L_7d72f8: /* 7d72f8: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d72fe: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 7d7304: mov dword ptr [ecx + 0x88], edx */
  W32((uint32_t)(ecx + 0x88u), edx);
/* 7d730a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7310: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7d7316: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7318: je 0x7d7328 */
  if (zf) goto L_7d7328;
L_7d731a: /* 7d731a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d731c: je 0x7d7323 */
  if (zf) goto L_7d7323;
L_7d731e: /* 7d731e: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d7321: jmp 0x7d7325 */
  goto L_7d7325;
L_7d7323: /* 7d7323: xor eax, eax */
  eax = 0;
L_7d7325: /* 7d7325: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
L_7d7328: /* 7d7328: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d732e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7331: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7333: mov byte ptr [eax + 0x4c8], 3 */
  W8((uint32_t)(eax + 0x4c8u), 0x3u);
L_7d733a: /* 7d733a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d733c: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7343: mov bl, 0x19 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x19u) & 0xffu);
/* 7d7345: push 0xadad70 */
  { uint32_t v = 0xadad70u; esp -= 4; W32(esp, v); }
/* 7d734a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7350: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7d7353: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7d7358u); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7d7358: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d735a: jne 0x7d73cb */
  if (!zf) goto L_7d73cb;
L_7d735c: /* 7d735c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d735f: mov esi, dword ptr [edx + 0x108] */
  esi = R32((uint32_t)(edx + 0x108u));
/* 7d7365: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d736b: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d736e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d736f: mov ecx, esi */
  ecx = esi;
/* 7d7371: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7d7377u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7d7377: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7d737d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d737e: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7d7381: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7d7387u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7d7387: mov edx, dword ptr [ebp - 0xbc] */
  edx = R32((uint32_t)(ebp + 0xffffff44u));
/* 7d738d: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 7d7393: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7394: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 7d7397: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 7d739a: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7d73a0u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7d73a0: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 7d73a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d73a7: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7d73aa: call 0x6caf0b */
  esp -= 4; W32(esp, 0x7d73afu); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 7d73af: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 7d73b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d73b6: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7d73b9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7d73bfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7d73bf: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7d73c5: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 7d73c8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_7d73cb: /* 7d73cb: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7d73d1: push 0x8b2 */
  { uint32_t v = 0x8b2u; esp -= 4; W32(esp, v); }
/* 7d73d6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d73d9: push 0xadad7c */
  { uint32_t v = 0xadad7cu; esp -= 4; W32(esp, v); }
/* 7d73de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d73df: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d73e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d73e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d73e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d73e5: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7d73eb: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7d73ef: call dword ptr [0xcfa3bc] */
  esp -= 4; W32(esp, 0x7d73f5u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* 7d73f5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d73f8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7d73fb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7401u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d7401: push 0x7d0 */
  { uint32_t v = 0x7d0u; esp -= 4; W32(esp, v); }
/* 7d7406: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7409: push 0xadad84 */
  { uint32_t v = 0xadad84u; esp -= 4; W32(esp, v); }
/* 7d740e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d740f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7411u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7411: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7415: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 7d741b: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7d741f: call dword ptr [0xcfa3bc] */
  esp -= 4; W32(esp, 0x7d7425u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* 7d7425: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7428: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7d742b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7431u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d7431: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7434: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d743a: mov dword ptr [eax + 0x40], esi */
  W32((uint32_t)(eax + 0x40u), esi);
/* 7d743d: mov edi, dword ptr [esi + 0x108] */
  edi = R32((uint32_t)(esi + 0x108u));
/* 7d7443: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d7446: add edi, 0xd8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7d744c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d744d: mov ecx, edi */
  ecx = edi;
/* 7d744f: call 0x6c824c */
  esp -= 4; W32(esp, 0x7d7454u); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 7d7454: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7d7457: mov ecx, edi */
  ecx = edi;
/* 7d7459: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 7d745c: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7d7461u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7d7461: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d7467: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d746a: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 7d746d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d746f: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7476: je 0x7d77fb */
  if (zf) goto L_7d77fb;
L_7d747c: /* 7d747c: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 7d747f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7481: je 0x7d77fb */
  if (zf) goto L_7d77fb;
L_7d7487: /* 7d7487: mov edi, 0xb89a10 */
  edi = 0xb89a10u;
/* 7d748c: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 7d748f: nop  */
L_7d7490: /* 7d7490: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7495: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7498: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7499: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d749b: jge 0x7d74b1 */
  if ((sf == of)) goto L_7d74b1;
L_7d749d: /* 7d749d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d749f: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d74a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d74a4: je 0x7d7490 */
  if (zf) goto L_7d7490;
L_7d74a6: /* 7d74a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d74a7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d74adu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d74ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d74af: je 0x7d7490 */
  if (zf) goto L_7d7490;
L_7d74b1: /* 7d74b1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d74b6: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d74b9: jge 0x7d7571 */
  if ((sf == of)) goto L_7d7571;
L_7d74bf: /* 7d74bf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d74c1: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d74c4: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d74c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d74c9: je 0x7d74f0 */
  if (zf) goto L_7d74f0;
L_7d74cb: /* 7d74cb: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d74d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d74d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d74d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d74d8: je 0x7d74f0 */
  if (zf) goto L_7d74f0;
L_7d74da: /* 7d74da: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d74e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d74e2: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d74e5: mov dword ptr [eax + 0x38], 0 */
  W32((uint32_t)(eax + 0x38u), 0x0u);
/* 7d74ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d74f0: /* 7d74f0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d74f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d74f8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d74f9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d74fb: jge 0x7d74b1 */
  if ((sf == of)) goto L_7d74b1;
L_7d74fd: /* 7d74fd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d74ff: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d7502: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7504: je 0x7d74f0 */
  if (zf) goto L_7d74f0;
L_7d7506: /* 7d7506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7507: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d750du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d750d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d750f: jne 0x7d74b1 */
  if (!zf) goto L_7d74b1;
L_7d7511: /* 7d7511: jmp 0x7d74f0 */
  goto L_7d74f0;
L_7d7513: /* 7d7513: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7519: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7d751c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d751e: je 0x7d733a */
  if (zf) goto L_7d733a;
L_7d7524: /* 7d7524: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 7d7529: push 0xadad48 */
  { uint32_t v = 0xadad48u; esp -= 4; W32(esp, v); }
/* 7d752e: push 0xadad54 */
  { uint32_t v = 0xadad54u; esp -= 4; W32(esp, v); }
/* 7d7533: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7539u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7539: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d753c: jmp 0x7d733a */
  goto L_7d733a;
L_7d7571: /* 7d7571: mov ebx, 0xb88550 */
  ebx = 0xb88550u;
/* 7d7576: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 7d7579: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7580: /* 7d7580: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7585: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7588: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7589: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d758b: jge 0x7d75a1 */
  if ((sf == of)) goto L_7d75a1;
L_7d758d: /* 7d758d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d758f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d7592: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7594: je 0x7d7580 */
  if (zf) goto L_7d7580;
L_7d7596: /* 7d7596: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7597: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d759du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d759d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d759f: je 0x7d7580 */
  if (zf) goto L_7d7580;
L_7d75a1: /* 7d75a1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75a6: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d75a9: jge 0x7d764b */
  if ((sf == of)) goto L_7d764b;
L_7d75af: /* 7d75af: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d75b1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d75b4: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d75b7: xor edi, edi */
  edi = 0;
/* 7d75b9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75bb: je 0x7d75e9 */
  if (zf) goto L_7d75e9;
L_7d75bd: /* 7d75bd: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d75c2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d75c8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d75c8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75ca: je 0x7d75e9 */
  if (zf) goto L_7d75e9;
L_7d75cc: /* 7d75cc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75d1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d75d3: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d75d6: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 7d75d9: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 7d75dc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d75e3: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d75e6: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d75e9: /* 7d75e9: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d75ef: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d75f1: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d75f4: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d75f7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75f9: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d75fb: /* 7d75fb: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7600: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7606u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7606: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7608: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d760a: /* 7d760a: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d7610: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7612: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7615: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
/* 7d7618: jmp 0x7d7620 */
  goto L_7d7620;
L_7d7620: /* 7d7620: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7625: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7628: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7629: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d762b: jge 0x7d75a1 */
  if ((sf == of)) goto L_7d75a1;
L_7d7631: /* 7d7631: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7633: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d7636: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7638: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d763a: /* 7d763a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d763b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7641u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7641: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7643: jne 0x7d75a1 */
  if (!zf) goto L_7d75a1;
L_7d7649: /* 7d7649: jmp 0x7d7620 */
  goto L_7d7620;
L_7d764b: /* 7d764b: mov ebx, 0xb88020 */
  ebx = 0xb88020u;
/* 7d7650: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7653: /* 7d7653: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7658: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d765b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d765c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d765e: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d7660: /* 7d7660: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7662: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d7665: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7667: je 0x7d7653 */
  if (zf) goto L_7d7653;
L_7d7669: /* 7d7669: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d766a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7670u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7672: je 0x7d7653 */
  if (zf) goto L_7d7653;
L_7d7674: /* 7d7674: jmp 0x7d7680 */
  goto L_7d7680;
L_7d7680: /* 7d7680: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7685: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7688: jge 0x7d77fb */
  if ((sf == of)) goto L_7d77fb;
L_7d768e: /* 7d768e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7690: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7693: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7696: xor edi, edi */
  edi = 0;
/* 7d7698: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d769a: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d769c: /* 7d769c: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76a1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76a7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76a7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76a9: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d76ab: /* 7d76ab: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76b2: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76b5: mov dword ptr [eax + 0x38], edi */
  W32((uint32_t)(eax + 0x38u), edi);
L_7d76b8: /* 7d76b8: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d76be: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d76c0: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d76c3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d76c6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76c8: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76ca: /* 7d76ca: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76cf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76d5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76d5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76d7: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76d9: /* 7d76d9: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d76df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d76e1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d76e4: mov dword ptr [eax + 0x3c], edi */
  W32((uint32_t)(eax + 0x3cu), edi);
L_7d76e7: /* 7d76e7: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76ee: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76f1: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d76f4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76f6: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d76f8: /* 7d76f8: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76fd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7703u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7703: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7705: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d7707: /* 7d7707: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d770d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d770f: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d7712: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d7715: /* 7d7715: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d771b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d771d: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7720: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7d7723: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7725: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7727: /* 7d7727: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d772c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7732u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7732: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7734: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7736: /* 7d7736: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d773b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d773d: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d7740: mov dword ptr [eax + 0x44], edi */
  W32((uint32_t)(eax + 0x44u), edi);
L_7d7743: /* 7d7743: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7749: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d774b: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d774e: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7d7751: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7753: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7755: /* 7d7755: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d775a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7760u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7760: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7762: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7764: /* 7d7764: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d776a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d776c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d776f: mov dword ptr [eax + 0x48], edi */
  W32((uint32_t)(eax + 0x48u), edi);
L_7d7772: /* 7d7772: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7777: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7779: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d777c: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 7d777f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7781: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7783: /* 7d7783: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7788: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d778eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d778e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7790: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7792: /* 7d7792: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7798: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d779a: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d779d: mov dword ptr [eax + 0x4c], edi */
  W32((uint32_t)(eax + 0x4cu), edi);
L_7d77a0: /* 7d77a0: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d77a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d77a8: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d77ab: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 7d77ae: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77b0: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77b2: /* 7d77b2: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d77b7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77bdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77bd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77bf: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77c1: /* 7d77c1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77c6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d77c8: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d77cb: mov dword ptr [eax + 0x50], edi */
  W32((uint32_t)(eax + 0x50u), edi);
/* 7d77ce: mov edi, edi */
  edi = edi;
L_7d77d0: /* 7d77d0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d77d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d77d9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d77db: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d77e1: /* 7d77e1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d77e3: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d77e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77e8: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77ea: /* 7d77ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d77eb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77f1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77f3: jne 0x7d7680 */
  if (!zf) goto L_7d7680;
L_7d77f9: /* 7d77f9: jmp 0x7d77d0 */
  goto L_7d77d0;
L_7d77fb: /* 7d77fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d77fe: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7804: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7d7808: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d780eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d780e: mov ecx, eax */
  ecx = eax;
/* 7d7810: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7816u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7816: push 0xadad94 */
  { uint32_t v = 0xadad94u; esp -= 4; W32(esp, v); }
/* 7d781b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d781c: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7822u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7822: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7827: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d782d: /* 7d782d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7830: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d7832: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7834: mov ecx, esi */
  ecx = esi;
/* 7d7836: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7d7839u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7839: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d783c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d783e: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7d7845: je 0x7d785c */
  if (zf) goto L_7d785c;
L_7d7847: /* 7d7847: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7849: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d784fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d784f: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7852: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7854: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7856: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7d7859: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d785cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d785c: /* 7d785c: mov ebx, 0xb5bf68 */
  ebx = 0xb5bf68u;
/* 7d7861: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7864: /* 7d7864: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7869: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7870: /* 7d7870: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7874: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7876: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7878: /* 7d7878: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d787a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d787d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d787f: je 0x7d7870 */
  if (zf) goto L_7d7870;
L_7d7881: /* 7d7881: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7882: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7888u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d788a: je 0x7d7864 */
  if (zf) goto L_7d7864;
L_7d788c: /* 7d788c: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7891: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7894: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7896: /* 7d7896: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7898: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d789b: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d78a1: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 7d78a4: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d78aau); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d78aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d78ab: mov ecx, edi */
  ecx = edi;
/* 7d78ad: call dword ptr [0xcfa828] */
  esp -= 4; W32(esp, 0x7d78b3u); SPILL(); f_4e33cd(); if (g_unwind) return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */ RELOAD();
/* 7d78b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78b5: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78b7: /* 7d78b7: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d78bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d78bf: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d78c2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d78c7: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7d78cdu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d78cd: /* 7d78cd: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_7d78d2: /* 7d78d2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d78d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d78d6: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78d8: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d78da: /* 7d78da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d78dc: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d78df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78e1: je 0x7d78d2 */
  if (zf) goto L_7d78d2;
L_7d78e3: /* 7d78e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d78e4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d78eau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d78ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78ec: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78ee: /* 7d78ee: jmp 0x7d788c */
  goto L_7d788c;
L_7d78f0: /* 7d78f0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d78f3: xor esi, esi */
  esi = 0;
L_7d78f5: /* 7d78f5: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d78fb: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78fe: jge 0x7d7918 */
  if ((sf == of)) goto L_7d7918;
L_7d7900: /* 7d7900: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d7903: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d7906: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7908: je 0x7d7915 */
  if (zf) goto L_7d7915;
L_7d790a: /* 7d790a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d790f: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7d7915u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d7915: /* 7d7915: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7916: jmp 0x7d78f5 */
  goto L_7d78f5;
L_7d7918: /* 7d7918: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 7d791d: call dword ptr [0xcfa918] */
  esp -= 4; W32(esp, 0x7d7923u); SPILL(); f_4e3fa8(); if (g_unwind) return; /* Core!?CollectGarbage@UObject@@SAXK@Z */ RELOAD();
/* 7d7923: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7d7926: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d792b: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d792d: /* 7d792d: xor ecx, ecx */
  ecx = 0;
/* 7d792f: nop  */
L_7d7930: /* 7d7930: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7d7933: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7936: jge 0x7d7950 */
  if ((sf == of)) goto L_7d7950;
L_7d7938: /* 7d7938: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d793b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d793e: cmp dword ptr [edx + ecx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7941: jne 0x7d79d0 */
  if (!zf) goto L_7d79d0;
L_7d7947: /* 7d7947: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7d794a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d794c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d794d: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d7950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7950: /* 7d7950: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7953: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7956: xor ebx, ebx */
  ebx = 0;
/* 7d7958: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d795a: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7961: je 0x7d796b */
  if (zf) goto L_7d796b;
L_7d7963: /* 7d7963: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7965: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d796bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d796b: /* 7d796b: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7971: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7974: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7976: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7d7979u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7979: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 7d797d: xor eax, eax */
  eax = 0;
/* 7d797f: nop  */
L_7d7980: /* 7d7980: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7983: jge 0x7d79e6 */
  if ((sf == of)) goto L_7d79e6;
L_7d7985: /* 7d7985: xor ecx, ecx */
  ecx = 0;
L_7d7987: /* 7d7987: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d798a: jge 0x7d79e1 */
  if ((sf == of)) goto L_7d79e1;
L_7d798c: /* 7d798c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d798f: mov edx, dword ptr [edx + 0x108] */
  edx = R32((uint32_t)(edx + 0x108u));
/* 7d7995: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7d799b: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 7d799e: mov ebx, dword ptr [edi + esi*8 + 0x124] */
  ebx = R32((uint32_t)(edi + esi*8 + 0x124u));
/* 7d79a5: mov esi, dword ptr [edi + esi*8 + 0x128] */
  esi = R32((uint32_t)(edi + esi*8 + 0x128u));
/* 7d79ac: mov dword ptr [ebp + eax*8 - 0x2e4], esi */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), esi);
/* 7d79b3: mov esi, eax */
  esi = eax;
/* 7d79b5: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d79b8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d79ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d79bc: mov dword ptr [ebp + eax*8 - 0x2e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ebx);
/* 7d79c3: jne 0x7d79d6 */
  if (!zf) goto L_7d79d6;
L_7d79c5: /* 7d79c5: mov byte ptr [esi + ecx + 0x110], 0 */
  W8((uint32_t)(esi + ecx + 0x110u), 0x0u);
/* 7d79cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79ce: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79d0: /* 7d79d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79d1: jmp 0x7d7930 */
  goto L_7d7930;
L_7d79d6: /* 7d79d6: mov byte ptr [esi + ecx + 0x110], 0xff */
  W8((uint32_t)(esi + ecx + 0x110u), 0xffu);
/* 7d79de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79df: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79e1: /* 7d79e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d79e2: xor ebx, ebx */
  ebx = 0;
/* 7d79e4: jmp 0x7d7980 */
  goto L_7d7980;
L_7d79e6: /* 7d79e6: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
/* 7d79ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d79f0: /* 7d79f0: cmp dword ptr [ebp + 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d79f4: jge 0x7d7b12 */
  if ((sf == of)) goto L_7d7b12;
L_7d79fa: /* 7d79fa: xor esi, esi */
  esi = 0;
/* 7d79fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7a00: /* 7d7a00: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a03: jge 0x7d7a61 */
  if ((sf == of)) goto L_7d7a61;
L_7d7a05: /* 7d7a05: xor edi, edi */
  edi = 0;
L_7d7a07: /* 7d7a07: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a0a: jge 0x7d7a5c */
  if ((sf == of)) goto L_7d7a5c;
L_7d7a0c: /* 7d7a0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7a0f: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7d7a15: mov eax, esi */
  eax = esi;
/* 7d7a17: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7d7a1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d7a1c: movzx edx, byte ptr [eax + edi + 0x110] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi + 0x110u)));
/* 7d7a24: lea ebx, [eax + edi + 0x110] */
  ebx = (uint32_t)(eax + edi + 0x110u);
/* 7d7a2b: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a2e: jle 0x7d7a59 */
  if ((zf || sf != of)) goto L_7d7a59;
L_7d7a30: /* 7d7a30: mov eax, 1 */
  eax = 0x1u;
/* 7d7a35: xor edx, edx */
  edx = 0;
/* 7d7a37: mov ecx, edi */
  ecx = edi;
/* 7d7a39: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a3eu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a3e: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7a45: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7a47: mov eax, dword ptr [ebp + esi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7a4e: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7a50: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7a52: je 0x7d7a59 */
  if (zf) goto L_7d7a59;
L_7d7a54: /* 7d7a54: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7d7a57: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
L_7d7a59: /* 7d7a59: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7a5a: jmp 0x7d7a07 */
  goto L_7d7a07;
L_7d7a5c: /* 7d7a5c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7a5d: xor ebx, ebx */
  ebx = 0;
/* 7d7a5f: jmp 0x7d7a00 */
  goto L_7d7a00;
L_7d7a61: /* 7d7a61: xor eax, eax */
  eax = 0;
L_7d7a63: /* 7d7a63: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a66: jge 0x7d7a79 */
  if ((sf == of)) goto L_7d7a79;
L_7d7a68: /* 7d7a68: mov dword ptr [ebp + eax*8 - 0x4e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb18u), ebx);
/* 7d7a6f: mov dword ptr [ebp + eax*8 - 0x4e4], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb1cu), ebx);
/* 7d7a76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7a77: jmp 0x7d7a63 */
  goto L_7d7a63;
L_7d7a79: /* 7d7a79: xor edi, edi */
  edi = 0;
/* 7d7a7b: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7a80: /* 7d7a80: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a83: jge 0x7d7ae4 */
  if ((sf == of)) goto L_7d7ae4;
L_7d7a85: /* 7d7a85: xor esi, esi */
  esi = 0;
L_7d7a87: /* 7d7a87: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a8a: jge 0x7d7ae1 */
  if ((sf == of)) goto L_7d7ae1;
L_7d7a8c: /* 7d7a8c: mov eax, 1 */
  eax = 0x1u;
/* 7d7a91: xor edx, edx */
  edx = 0;
/* 7d7a93: mov ecx, esi */
  ecx = esi;
/* 7d7a95: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a9au); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a9a: mov ecx, dword ptr [ebp + edi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xfffffd18u));
/* 7d7aa1: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7aa3: mov eax, dword ptr [ebp + edi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffd1cu));
/* 7d7aaa: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7aac: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7aae: je 0x7d7ade */
  if (zf) goto L_7d7ade;
L_7d7ab0: /* 7d7ab0: mov edx, dword ptr [ebp + edi*8 - 0x4e8] */
  edx = R32((uint32_t)(ebp + edi*8 + 0xfffffb18u));
/* 7d7ab7: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7abe: mov eax, dword ptr [ebp + edi*8 - 0x4e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffb1cu));
/* 7d7ac5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d7ac7: mov dword ptr [ebp + edi*8 - 0x4e8], edx */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb18u), edx);
/* 7d7ace: mov edx, dword ptr [ebp + esi*8 - 0x2e4] */
  edx = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7ad5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7d7ad7: mov dword ptr [ebp + edi*8 - 0x4e4], eax */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb1cu), eax);
L_7d7ade: /* 7d7ade: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7adf: jmp 0x7d7a87 */
  goto L_7d7a87;
L_7d7ae1: /* 7d7ae1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7ae2: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7ae4: /* 7d7ae4: xor eax, eax */
  eax = 0;
L_7d7ae6: /* 7d7ae6: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7ae9: jge 0x7d7b0a */
  if ((sf == of)) goto L_7d7b0a;
L_7d7aeb: /* 7d7aeb: mov ecx, dword ptr [ebp + eax*8 - 0x4e8] */
  ecx = R32((uint32_t)(ebp + eax*8 + 0xfffffb18u));
/* 7d7af2: mov edx, dword ptr [ebp + eax*8 - 0x4e4] */
  edx = R32((uint32_t)(ebp + eax*8 + 0xfffffb1cu));
/* 7d7af9: mov dword ptr [ebp + eax*8 - 0x2e8], ecx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ecx);
/* 7d7b00: mov dword ptr [ebp + eax*8 - 0x2e4], edx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), edx);
/* 7d7b07: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7b08: jmp 0x7d7ae6 */
  goto L_7d7ae6;
L_7d7b0a: /* 7d7b0a: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 7d7b0d: jmp 0x7d79f0 */
  goto L_7d79f0;
L_7d7b12: /* 7d7b12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7b15: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7b1b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d7b1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7b21: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7b28: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7d7b2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7b2e: mov cx, word ptr [0xb81b4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b4cu))) & 0xffffu);
/* 7d7b35: mov dx, word ptr [0xb81b50] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b50u))) & 0xffffu);
/* 7d7b3c: mov word ptr [ebp - 0xee8], cx */
  W16((uint32_t)(ebp + 0xfffff118u), (ecx & 0xffffu));
/* 7d7b43: xor eax, eax */
  eax = 0;
/* 7d7b45: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 7d7b4a: lea edi, [ebp - 0xee6] */
  edi = (uint32_t)(ebp + 0xfffff11au);
/* 7d7b50: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b52: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b54: mov word ptr [ebp - 0x6e8], dx */
  W16((uint32_t)(ebp + 0xfffff918u), (edx & 0xffffu));
/* 7d7b5b: xor eax, eax */
  eax = 0;
/* 7d7b5d: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 7d7b62: lea edi, [ebp - 0x6e6] */
  edi = (uint32_t)(ebp + 0xfffff91au);
/* 7d7b68: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b6a: push 0xb81b54 */
  { uint32_t v = 0xb81b54u; esp -= 4; W32(esp, v); }
/* 7d7b6f: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d7b75: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b77: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d7b7du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d7b7d: mov ebx, dword ptr [0xcfa914] */
  ebx = R32((uint32_t)(0xcfa914u));
/* 7d7b83: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7d7b87: xor edi, edi */
  edi = 0;
/* 7d7b89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7b90: /* 7d7b90: cmp edi, dword ptr [ebp - 0xa8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7b96: jge 0x7d7bf7 */
  if ((sf == of)) goto L_7d7bf7;
L_7d7b98: /* 7d7b98: lea eax, [ebp - 0xee8] */
  eax = (uint32_t)(ebp + 0xfffff118u);
/* 7d7b9e: push 0xadadb0 */
  { uint32_t v = 0xadadb0u; esp -= 4; W32(esp, v); }
/* 7d7ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ba4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7ba6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7ba6: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bac: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7d7baf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d7bb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bb5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d7bb7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bbdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7bbe: lea edx, [ebp - 0xee8] */
  edx = (uint32_t)(ebp + 0xfffff118u);
/* 7d7bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7bc5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7bc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7bc7: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bd0: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 7d7bd3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bd9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bd9: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7d7bde: lea ecx, [ebp - 0x6e8] */
  ecx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7be5: push 0xadadb4 */
  { uint32_t v = 0xadadb4u; esp -= 4; W32(esp, v); }
/* 7d7bea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7beb: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x7d7bf1u); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 7d7bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bf4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7bf5: jmp 0x7d7b90 */
  goto L_7d7b90;
L_7d7bf7: /* 7d7bf7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7bfa: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 7d7c00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7c02: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d7c08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c0a: je 0x7d7da7 */
  if (zf) goto L_7d7da7;
L_7d7c10: /* 7d7c10: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d7c13: mov eax, dword ptr [ecx + 0x508] */
  eax = R32((uint32_t)(ecx + 0x508u));
/* 7d7c19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c1b: jne 0x7d7da7 */
  if (!zf) goto L_7d7da7;
L_7d7c21: /* 7d7c21: cmp word ptr [ebp - 0x6e8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffff918u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7c29: mov ebx, dword ptr [0xcfa7b8] */
  ebx = R32((uint32_t)(0xcfa7b8u));
/* 7d7c2f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7d7c32: je 0x7d7c56 */
  if (zf) goto L_7d7c56;
L_7d7c34: /* 7d7c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c35: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c39: lea edx, [ebp - 0x6e8] */
  edx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7c3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7c40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c42: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c47: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c49: mov esi, eax */
  esi = eax;
/* 7d7c4b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c50: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c56: /* 7d7c56: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d7c59: add esi, 0x4f0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d7c5f: mov ecx, esi */
  ecx = esi;
/* 7d7c61: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7d7c67u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7d7c67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d7c69: jle 0x7d7c8b */
  if ((zf || sf != of)) goto L_7d7c8b;
L_7d7c6b: /* 7d7c6b: mov ecx, esi */
  ecx = esi;
/* 7d7c6d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7c73u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7c73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7c79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c7b: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c80: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c82: mov esi, eax */
  esi = eax;
/* 7d7c84: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c89: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c8b: /* 7d7c8b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7c8e: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7c94: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d7c9au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d7c9a: mov ecx, eax */
  ecx = eax;
/* 7d7c9c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7ca2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ca2: push 0xadadc0 */
  { uint32_t v = 0xadadc0u; esp -= 4; W32(esp, v); }
/* 7d7ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ca8: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7caeu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7cae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cb3: je 0x7d7cde */
  if (zf) goto L_7d7cde;
L_7d7cb5: /* 7d7cb5: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7d7cb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cba: mov eax, 0xadadcc */
  eax = 0xadadccu;
/* 7d7cbf: jne 0x7d7cc6 */
  if (!zf) goto L_7d7cc6;
L_7d7cc1: /* 7d7cc1: mov eax, 0xadae08 */
  eax = 0xadae08u;
L_7d7cc6: /* 7d7cc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7cc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7cc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7cce: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7cd3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7cd5: mov esi, eax */
  esi = eax;
/* 7d7cd7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cda: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cdc: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7cde: /* 7d7cde: mov esi, 0xb5e3b8 */
  esi = 0xb5e3b8u;
L_7d7ce3: /* 7d7ce3: mov ecx, esi */
  ecx = esi;
/* 7d7ce5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7cebu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7cec: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d7cf1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7cf3: push 0xadae50 */
  { uint32_t v = 0xadae50u; esp -= 4; W32(esp, v); }
/* 7d7cf8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7cfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7cfe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7d04u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7d04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d17: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7d1a: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d7d21: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d7d28: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7d7d2f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7d7d35u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7d7d35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7d37: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d3a: mov edx, esp */
  edx = esp;
/* 7d7d3c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7d7d3e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7d41: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7d7d44: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7d7d47: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7d7d4a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d7d4d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d7d50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d53: mov ecx, esp */
  ecx = esp;
/* 7d7d55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7d7d57: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d7d5a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7d7d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7d5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7d7d61: mov ecx, esp */
  ecx = esp;
/* 7d7d63: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7d7d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d7d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d7d6e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7d71: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7d77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7d7a: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d7d80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7d80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7d82: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7d7d85: mov dword ptr [edi + 0x508], eax */
  W32((uint32_t)(edi + 0x508u), eax);
/* 7d7d8b: jne 0x7d7dad */
  if (!zf) goto L_7d7dad;
L_7d7d8d: /* 7d7d8d: push 0x6c9 */
  { uint32_t v = 0x6c9u; esp -= 4; W32(esp, v); }
/* 7d7d92: push 0xadae78 */
  { uint32_t v = 0xadae78u; esp -= 4; W32(esp, v); }
/* 7d7d97: push 0xadae84 */
  { uint32_t v = 0xadae84u; esp -= 4; W32(esp, v); }
/* 7d7d9c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7da2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7da2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7da5: jmp 0x7d7dad */
  goto L_7d7dad;
L_7d7da7: /* 7d7da7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7daa: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_7d7dad: /* 7d7dad: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7db2: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7db9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7dbd: je 0x7d7dd7 */
  if (zf) goto L_7d7dd7;
L_7d7dbf: /* 7d7dbf: push 0xadaea0 */
  { uint32_t v = 0xadaea0u; esp -= 4; W32(esp, v); }
/* 7d7dc4: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7dca: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7dcfu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7dcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7dd1: je 0x7d7e8a */
  if (zf) goto L_7d7e8a;
L_7d7dd7: /* 7d7dd7: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 7d7ddd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ddf: je 0x7d7e1f */
  if (zf) goto L_7d7e1f;
L_7d7de1: /* 7d7de1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7de4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7de6: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7d7dea: je 0x7d7e04 */
  if (zf) goto L_7d7e04;
L_7d7dec: /* 7d7dec: push 0x6d4 */
  { uint32_t v = 0x6d4u; esp -= 4; W32(esp, v); }
/* 7d7df1: push 0xadaeb0 */
  { uint32_t v = 0xadaeb0u; esp -= 4; W32(esp, v); }
/* 7d7df6: push 0xadaebc */
  { uint32_t v = 0xadaebcu; esp -= 4; W32(esp, v); }
/* 7d7dfb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7e01u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7e01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e04: /* 7d7e04: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 7d7e0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e0c: je 0x7d7e15 */
  if (zf) goto L_7d7e15;
L_7d7e0e: /* 7d7e0e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e10: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7e12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d7e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7e15: /* 7d7e15: mov dword ptr [ebx + 0x110], 0 */
  W32((uint32_t)(ebx + 0x110u), 0x0u);
L_7d7e1f: /* 7d7e1f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e22: mov dword ptr [ebp - 4], 0x24 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e29: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d7e2fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d7e2f: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7e35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e37: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e3b: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7d7e3f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7d7e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7e45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e47: jne 0x7d7e7d */
  if (!zf) goto L_7d7e7d;
L_7d7e49: /* 7d7e49: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7e52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7e52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7e54: push 0xadaed0 */
  { uint32_t v = 0xadaed0u; esp -= 4; W32(esp, v); }
/* 7d7e59: push 0xadaee0 */
  { uint32_t v = 0xadaee0u; esp -= 4; W32(esp, v); }
/* 7d7e5e: mov esi, eax */
  esi = eax;
/* 7d7e60: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7d7e66u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7d7e66: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7d7e6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7e74: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d7e7au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d7e7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e7d: /* 7d7e7d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e80: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e84: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7e8au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d7e8a: /* 7d7e8a: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7e91: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7e94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e96: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7e9d: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7e9f: /* 7d7e9f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7d7ea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ea4: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7ea6: /* 7d7ea6: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d7ea9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7eab: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7d7eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb0: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7eb2: /* 7d7eb2: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d7eb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb7: je 0x7d7ef2 */
  if (zf) goto L_7d7ef2;
L_7d7eb9: /* 7d7eb9: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7ec0: jmp 0x7d7f00 */
  goto L_7d7f00;
L_7d7ef2: /* 7d7ef2: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7ef5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ef7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7d7efa: mov byte ptr [edi + 0x448], dl */
  W8((uint32_t)(edi + 0x448u), (edx & 0xffu));
L_7d7f00: /* 7d7f00: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7d7f06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f08: je 0x7d7f0f */
  if (zf) goto L_7d7f0f;
L_7d7f0a: /* 7d7f0a: call 0x6cbfa5 */
  esp -= 4; W32(esp, 0x7d7f0fu); SPILL(); f_6cbfa5(); if (g_unwind) return; RELOAD();
L_7d7f0f: /* 7d7f0f: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f15: mov dword ptr [eax + 0x104], 0 */
  W32((uint32_t)(eax + 0x104u), 0x0u);
/* 7d7f1f: test byte ptr [edi + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f26: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d7f2a: jne 0x7d85d8 */
  if (!zf) goto L_7d85d8;
L_7d7f30: /* 7d7f30: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7f36: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 7d7f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7f3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7f40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7f48: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7d7f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f4f: push 0xad5650 */
  { uint32_t v = 0xad5650u; esp -= 4; W32(esp, v); }
/* 7d7f54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7f55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f57: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f5d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7f62: mov cl, byte ptr [eax + 0x44c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44cu))) & 0xffu);
/* 7d7f68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7f6b: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f6e: jne 0x7d7f83 */
  if (!zf) goto L_7d7f83;
L_7d7f70: /* 7d7f70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f76: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7f78: push 0xadaf08 */
  { uint32_t v = 0xadaf08u; esp -= 4; W32(esp, v); }
/* 7d7f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7f83: /* 7d7f83: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d7f85: mov ecx, ebx */
  ecx = ebx;
/* 7d7f87: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d7f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f8d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7d7f90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f94: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7d7f9au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7d7f9a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fa0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7fa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7fa5: mov edi, eax */
  edi = eax;
/* 7d7fa7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7fa9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7faf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7fb3: push 0xadaf60 */
  { uint32_t v = 0xadaf60u; esp -= 4; W32(esp, v); }
/* 7d7fb8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7fbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7fbe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7fc4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7fc4: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7fca: xor esi, esi */
  esi = 0;
/* 7d7fcc: mov dword ptr [eax + 0x100], esi */
  W32((uint32_t)(eax + 0x100u), esi);
/* 7d7fd2: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fd8: mov dword ptr [ecx + 0xd0], esi */
  W32((uint32_t)(ecx + 0xd0u), esi);
/* 7d7fde: mov dword ptr [ecx + 0xd4], esi */
  W32((uint32_t)(ecx + 0xd4u), esi);
/* 7d7fe4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fea: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d7fed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7fef: mov dword ptr [eax + 0x3ac], esi */
  W32((uint32_t)(eax + 0x3acu), esi);
/* 7d7ff5: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7ffb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7ffe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8003: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d8008u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d8008: or dword ptr [eax + 0x80], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7d8012: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8018: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d801a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d8020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8020: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8022: jne 0x7d8072 */
  if (!zf) goto L_7d8072;
L_7d8024: /* 7d8024: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d802a: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d802d: jge 0x7d8072 */
  if ((sf == of)) goto L_7d8072;
L_7d802f: /* 7d802f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8032: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d8035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8037: je 0x7d806f */
  if (zf) goto L_7d806f;
L_7d8039: /* 7d8039: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7d803f: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8042: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8044: /* 7d8044: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8047: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8049: /* 7d8049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d804b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d804e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7d8054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8054: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8055: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8057: /* 7d8057: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 7d805d: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 7d8063: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 7d8069: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
L_7d806f: /* 7d806f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8070: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8072: /* 7d8072: xor esi, esi */
  esi = 0;
L_7d8074: /* 7d8074: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d807a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d807d: jge 0x7d80d5 */
  if ((sf == of)) goto L_7d80d5;
L_7d807f: /* 7d807f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8082: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d8085: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8087: je 0x7d80d2 */
  if (zf) goto L_7d80d2;
L_7d8089: /* 7d8089: mov dword ptr [eax + 0xd4], 0 */
  W32((uint32_t)(eax + 0xd4u), 0x0u);
/* 7d8093: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8099: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d809c: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d809f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d80a5: xor eax, eax */
  eax = 0;
L_7d80a7: /* 7d80a7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80aa: jge 0x7d80af */
  if ((sf == of)) goto L_7d80af;
L_7d80ac: /* 7d80ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d80ad: jmp 0x7d80a7 */
  goto L_7d80a7;
L_7d80af: /* 7d80af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d80b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d80b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d80b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d80b9: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80bf: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7d80c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d80c4: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d80c9u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d80c9: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 7d80cc: mov dword ptr [ecx + 0x16c], eax */
  W32((uint32_t)(ecx + 0x16cu), eax);
L_7d80d2: /* 7d80d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80d3: jmp 0x7d8074 */
  goto L_7d8074;
L_7d80d5: /* 7d80d5: xor esi, esi */
  esi = 0;
/* 7d80d7: jmp 0x7d80e0 */
  goto L_7d80e0;
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
L_7d85d8: /* 7d85d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d85db: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d85e1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d85e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d85e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7d85ec: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7d85f2: fstp qword ptr [eax + 0xd0] */
  WF64((uint32_t)(eax + 0xd0u), ST0); FPOP();
/* 7d85f8: xor edi, edi */
  edi = 0;
/* 7d85fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d8600: /* 7d8600: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8603: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d8609: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d860c: jge 0x7d8664 */
  if ((sf == of)) goto L_7d8664;
L_7d860e: /* 7d860e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8611: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8614: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8616: je 0x7d8631 */
  if (zf) goto L_7d8631;
L_7d8618: /* 7d8618: mov ecx, dword ptr [0xb7e550] */
  ecx = R32((uint32_t)(0xb7e550u));
/* 7d861e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8621: mov ecx, esi */
  ecx = esi;
/* 7d8623: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d8625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8625: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d862b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d862c: mov ecx, esi */
  ecx = esi;
/* 7d862e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8631: /* 7d8631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8632: jmp 0x7d8600 */
  goto L_7d8600;
L_7d8664: /* 7d8664: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
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

void f_7d432b(void) {
  LOAD_REGS();
L_7d432b: /* 7d432b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7d432e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d4333: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 7d4339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d433a: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 7d4340: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d4345u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d4345(); return;
}

void f_7d4345(void) {
  LOAD_REGS();
L_7d4345: /* 7d4345: push 0xa0f63c */
  { uint32_t v = 0xa0f63cu; esp -= 4; W32(esp, v); }
/* 7d434a: push 0xad5704 */
  { uint32_t v = 0xad5704u; esp -= 4; W32(esp, v); }
/* 7d434f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d4355u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d4355: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4358: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d435a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d435c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d4361u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7d4361: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7d4367: mov eax, dword ptr [0xcecf50] */
  eax = R32((uint32_t)(0xcecf50u));
/* 7d436c: mov ecx, 0xcecf50 */
  ecx = 0xcecf50u;
/* 7d4371: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7d4375: xor edi, edi */
  edi = 0;
/* 7d4377: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d437au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d437a: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d437f: je 0x7d43b1 */
  if (zf) goto L_7d43b1;
L_7d4381: /* 7d4381: mov edx, dword ptr [0xcecf50] */
  edx = R32((uint32_t)(0xcecf50u));
/* 7d4387: mov ecx, 0xcecf50 */
  ecx = 0xcecf50u;
/* 7d438c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d438fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d438f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d4394: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4395: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d439a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d439c: push 0xad574c */
  { uint32_t v = 0xad574cu; esp -= 4; W32(esp, v); }
/* 7d43a1: push 0xad5770 */
  { uint32_t v = 0xad5770u; esp -= 4; W32(esp, v); }
/* 7d43a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d43a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d43a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d43a9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d43ac: mov edi, 1 */
  edi = 0x1u;
L_7d43b1: /* 7d43b1: mov edx, dword ptr [0xb5bf68] */
  edx = R32((uint32_t)(0xb5bf68u));
/* 7d43b7: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 7d43bc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d43bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d43bf: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d43c4: je 0x7d43f6 */
  if (zf) goto L_7d43f6;
L_7d43c6: /* 7d43c6: mov eax, dword ptr [0xb5bf68] */
  eax = R32((uint32_t)(0xb5bf68u));
/* 7d43cb: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 7d43d0: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d43d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d43d3: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d43d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d43db: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d43e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d43e1: push 0xad57d0 */
  { uint32_t v = 0xad57d0u; esp -= 4; W32(esp, v); }
/* 7d43e6: push 0xad57e0 */
  { uint32_t v = 0xad57e0u; esp -= 4; W32(esp, v); }
/* 7d43eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d43ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d43eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d43ee: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d43f1: mov edi, 1 */
  edi = 0x1u;
L_7d43f6: /* 7d43f6: mov eax, dword ptr [0xceca20] */
  eax = R32((uint32_t)(0xceca20u));
/* 7d43fb: mov ecx, 0xceca20 */
  ecx = 0xceca20u;
/* 7d4400: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4403u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4403: cmp eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4408: je 0x7d443a */
  if (zf) goto L_7d443a;
L_7d440a: /* 7d440a: mov edx, dword ptr [0xceca20] */
  edx = R32((uint32_t)(0xceca20u));
/* 7d4410: mov ecx, 0xceca20 */
  ecx = 0xceca20u;
/* 7d4415: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4418u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4418: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7d441d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d441e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4423: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4425: push 0xad5840 */
  { uint32_t v = 0xad5840u; esp -= 4; W32(esp, v); }
/* 7d442a: push 0xad5860 */
  { uint32_t v = 0xad5860u; esp -= 4; W32(esp, v); }
/* 7d442f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4430: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4432u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4432: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4435: mov edi, 1 */
  edi = 0x1u;
L_7d443a: /* 7d443a: mov edx, dword ptr [0xb63188] */
  edx = R32((uint32_t)(0xb63188u));
/* 7d4440: mov ecx, 0xb63188 */
  ecx = 0xb63188u;
/* 7d4445: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4448u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4448: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d444d: je 0x7d447f */
  if (zf) goto L_7d447f;
L_7d444f: /* 7d444f: mov eax, dword ptr [0xb63188] */
  eax = R32((uint32_t)(0xb63188u));
/* 7d4454: mov ecx, 0xb63188 */
  ecx = 0xb63188u;
/* 7d4459: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d445cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d445c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4462: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4464: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d4469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d446a: push 0xad58c0 */
  { uint32_t v = 0xad58c0u; esp -= 4; W32(esp, v); }
/* 7d446f: push 0xad58d8 */
  { uint32_t v = 0xad58d8u; esp -= 4; W32(esp, v); }
/* 7d4474: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4475: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4477u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4477: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d447a: mov edi, 1 */
  edi = 0x1u;
L_7d447f: /* 7d447f: mov eax, dword ptr [0xceb690] */
  eax = R32((uint32_t)(0xceb690u));
/* 7d4484: mov ecx, 0xceb690 */
  ecx = 0xceb690u;
/* 7d4489: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d448cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d448c: cmp eax, 0x4d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4491: je 0x7d44c3 */
  if (zf) goto L_7d44c3;
L_7d4493: /* 7d4493: mov edx, dword ptr [0xceb690] */
  edx = R32((uint32_t)(0xceb690u));
/* 7d4499: mov ecx, 0xceb690 */
  ecx = 0xceb690u;
/* 7d449e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d44a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d44a1: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 7d44a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d44a7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d44ac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d44ae: push 0xad5938 */
  { uint32_t v = 0xad5938u; esp -= 4; W32(esp, v); }
/* 7d44b3: push 0xad5958 */
  { uint32_t v = 0xad5958u; esp -= 4; W32(esp, v); }
/* 7d44b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d44b9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d44bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d44bb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d44be: mov edi, 1 */
  edi = 0x1u;
L_7d44c3: /* 7d44c3: mov edx, dword ptr [0xcc6208] */
  edx = R32((uint32_t)(0xcc6208u));
/* 7d44c9: mov ecx, 0xcc6208 */
  ecx = 0xcc6208u;
/* 7d44ce: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d44d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d44d1: cmp eax, 0x494 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x494u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d44d6: je 0x7d4508 */
  if (zf) goto L_7d4508;
L_7d44d8: /* 7d44d8: mov eax, dword ptr [0xcc6208] */
  eax = R32((uint32_t)(0xcc6208u));
/* 7d44dd: mov ecx, 0xcc6208 */
  ecx = 0xcc6208u;
/* 7d44e2: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d44e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d44e5: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d44eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d44ed: push 0x494 */
  { uint32_t v = 0x494u; esp -= 4; W32(esp, v); }
/* 7d44f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d44f3: push 0xad59b8 */
  { uint32_t v = 0xad59b8u; esp -= 4; W32(esp, v); }
/* 7d44f8: push 0xad59e0 */
  { uint32_t v = 0xad59e0u; esp -= 4; W32(esp, v); }
/* 7d44fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d44fe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4500u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4500: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4503: mov edi, 1 */
  edi = 0x1u;
L_7d4508: /* 7d4508: mov eax, dword ptr [0xce9540] */
  eax = R32((uint32_t)(0xce9540u));
/* 7d450d: mov ecx, 0xce9540 */
  ecx = 0xce9540u;
/* 7d4512: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4515: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4518: je 0x7d4547 */
  if (zf) goto L_7d4547;
L_7d451a: /* 7d451a: mov edx, dword ptr [0xce9540] */
  edx = R32((uint32_t)(0xce9540u));
/* 7d4520: mov ecx, 0xce9540 */
  ecx = 0xce9540u;
/* 7d4525: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4528: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d452a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d452b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4530: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4532: push 0xad5a40 */
  { uint32_t v = 0xad5a40u; esp -= 4; W32(esp, v); }
/* 7d4537: push 0xad5a68 */
  { uint32_t v = 0xad5a68u; esp -= 4; W32(esp, v); }
/* 7d453c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d453d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d453fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d453f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4542: mov edi, 1 */
  edi = 0x1u;
L_7d4547: /* 7d4547: mov edx, dword ptr [0xb66a98] */
  edx = R32((uint32_t)(0xb66a98u));
/* 7d454d: mov ecx, 0xb66a98 */
  ecx = 0xb66a98u;
/* 7d4552: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4555: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d455a: je 0x7d458c */
  if (zf) goto L_7d458c;
L_7d455c: /* 7d455c: mov eax, dword ptr [0xb66a98] */
  eax = R32((uint32_t)(0xb66a98u));
/* 7d4561: mov ecx, 0xb66a98 */
  ecx = 0xb66a98u;
/* 7d4566: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4569u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4569: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d456f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4571: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d4576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4577: push 0xad5ac8 */
  { uint32_t v = 0xad5ac8u; esp -= 4; W32(esp, v); }
/* 7d457c: push 0xad5ad8 */
  { uint32_t v = 0xad5ad8u; esp -= 4; W32(esp, v); }
/* 7d4581: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4582: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4584u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4584: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4587: mov edi, 1 */
  edi = 0x1u;
L_7d458c: /* 7d458c: mov eax, dword ptr [0xce7998] */
  eax = R32((uint32_t)(0xce7998u));
/* 7d4591: mov ecx, 0xce7998 */
  ecx = 0xce7998u;
/* 7d4596: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4599u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4599: cmp eax, 0x340 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d459e: je 0x7d45d0 */
  if (zf) goto L_7d45d0;
L_7d45a0: /* 7d45a0: mov edx, dword ptr [0xce7998] */
  edx = R32((uint32_t)(0xce7998u));
/* 7d45a6: mov ecx, 0xce7998 */
  ecx = 0xce7998u;
/* 7d45ab: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d45aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d45ae: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 7d45b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d45b4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d45b9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d45bb: push 0xad5b38 */
  { uint32_t v = 0xad5b38u; esp -= 4; W32(esp, v); }
/* 7d45c0: push 0xad5b60 */
  { uint32_t v = 0xad5b60u; esp -= 4; W32(esp, v); }
/* 7d45c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d45c6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d45c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d45c8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d45cb: mov edi, 1 */
  edi = 0x1u;
L_7d45d0: /* 7d45d0: mov edx, dword ptr [0xce68c8] */
  edx = R32((uint32_t)(0xce68c8u));
/* 7d45d6: mov ecx, 0xce68c8 */
  ecx = 0xce68c8u;
/* 7d45db: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d45deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d45de: cmp eax, 0x4b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d45e3: je 0x7d4615 */
  if (zf) goto L_7d4615;
L_7d45e5: /* 7d45e5: mov eax, dword ptr [0xce68c8] */
  eax = R32((uint32_t)(0xce68c8u));
/* 7d45ea: mov ecx, 0xce68c8 */
  ecx = 0xce68c8u;
/* 7d45ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d45f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d45f2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d45f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d45fa: push 0x4b0 */
  { uint32_t v = 0x4b0u; esp -= 4; W32(esp, v); }
/* 7d45ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4600: push 0xad5bc0 */
  { uint32_t v = 0xad5bc0u; esp -= 4; W32(esp, v); }
/* 7d4605: push 0xad5be0 */
  { uint32_t v = 0xad5be0u; esp -= 4; W32(esp, v); }
/* 7d460a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d460b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d460du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d460d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4610: mov edi, 1 */
  edi = 0x1u;
L_7d4615: /* 7d4615: mov eax, dword ptr [0xce6288] */
  eax = R32((uint32_t)(0xce6288u));
/* 7d461a: mov ecx, 0xce6288 */
  ecx = 0xce6288u;
/* 7d461f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4622u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4622: cmp eax, 0x4d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4d0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4627: je 0x7d4659 */
  if (zf) goto L_7d4659;
L_7d4629: /* 7d4629: mov edx, dword ptr [0xce6288] */
  edx = R32((uint32_t)(0xce6288u));
/* 7d462f: mov ecx, 0xce6288 */
  ecx = 0xce6288u;
/* 7d4634: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4637u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4637: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 7d463c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d463d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4642: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4644: push 0xad5c40 */
  { uint32_t v = 0xad5c40u; esp -= 4; W32(esp, v); }
/* 7d4649: push 0xad5c60 */
  { uint32_t v = 0xad5c60u; esp -= 4; W32(esp, v); }
/* 7d464e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d464f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4651u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4651: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4654: mov edi, 1 */
  edi = 0x1u;
L_7d4659: /* 7d4659: mov edx, dword ptr [0xce5118] */
  edx = R32((uint32_t)(0xce5118u));
/* 7d465f: mov ecx, 0xce5118 */
  ecx = 0xce5118u;
/* 7d4664: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4667u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4667: cmp eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d466a: je 0x7d4699 */
  if (zf) goto L_7d4699;
L_7d466c: /* 7d466c: mov eax, dword ptr [0xce5118] */
  eax = R32((uint32_t)(0xce5118u));
/* 7d4671: mov ecx, 0xce5118 */
  ecx = 0xce5118u;
/* 7d4676: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4679u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4679: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d467f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4681: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7d4683: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4684: push 0xad5cc0 */
  { uint32_t v = 0xad5cc0u; esp -= 4; W32(esp, v); }
/* 7d4689: push 0xad5cf8 */
  { uint32_t v = 0xad5cf8u; esp -= 4; W32(esp, v); }
/* 7d468e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d468f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4691u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4691: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4694: mov edi, 1 */
  edi = 0x1u;
L_7d4699: /* 7d4699: mov eax, dword ptr [0xce31f8] */
  eax = R32((uint32_t)(0xce31f8u));
/* 7d469e: mov ecx, 0xce31f8 */
  ecx = 0xce31f8u;
/* 7d46a3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d46a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46a6: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d46a9: je 0x7d46d8 */
  if (zf) goto L_7d46d8;
L_7d46ab: /* 7d46ab: mov edx, dword ptr [0xce31f8] */
  edx = R32((uint32_t)(0xce31f8u));
/* 7d46b1: mov ecx, 0xce31f8 */
  ecx = 0xce31f8u;
/* 7d46b6: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d46b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46b9: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7d46bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d46bc: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d46c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d46c3: push 0xad5d58 */
  { uint32_t v = 0xad5d58u; esp -= 4; W32(esp, v); }
/* 7d46c8: push 0xad5d70 */
  { uint32_t v = 0xad5d70u; esp -= 4; W32(esp, v); }
/* 7d46cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d46ce: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d46d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46d0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d46d3: mov edi, 1 */
  edi = 0x1u;
L_7d46d8: /* 7d46d8: mov edx, dword ptr [0xce4be8] */
  edx = R32((uint32_t)(0xce4be8u));
/* 7d46de: mov ecx, 0xce4be8 */
  ecx = 0xce4be8u;
/* 7d46e3: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d46e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46e6: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d46e9: je 0x7d4718 */
  if (zf) goto L_7d4718;
L_7d46eb: /* 7d46eb: mov eax, dword ptr [0xce4be8] */
  eax = R32((uint32_t)(0xce4be8u));
/* 7d46f0: mov ecx, 0xce4be8 */
  ecx = 0xce4be8u;
/* 7d46f5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d46f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d46f8: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d46fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4700: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7d4702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4703: push 0xad5dd0 */
  { uint32_t v = 0xad5dd0u; esp -= 4; W32(esp, v); }
/* 7d4708: push 0xad5e00 */
  { uint32_t v = 0xad5e00u; esp -= 4; W32(esp, v); }
/* 7d470d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d470e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4710u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4710: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4713: mov edi, 1 */
  edi = 0x1u;
L_7d4718: /* 7d4718: mov eax, dword ptr [0xce46b8] */
  eax = R32((uint32_t)(0xce46b8u));
/* 7d471d: mov ecx, 0xce46b8 */
  ecx = 0xce46b8u;
/* 7d4722: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4725: cmp eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4728: je 0x7d4757 */
  if (zf) goto L_7d4757;
L_7d472a: /* 7d472a: mov edx, dword ptr [0xce46b8] */
  edx = R32((uint32_t)(0xce46b8u));
/* 7d4730: mov ecx, 0xce46b8 */
  ecx = 0xce46b8u;
/* 7d4735: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4738u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4738: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7d473a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d473b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4740: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4742: push 0xad5e60 */
  { uint32_t v = 0xad5e60u; esp -= 4; W32(esp, v); }
/* 7d4747: push 0xad5e88 */
  { uint32_t v = 0xad5e88u; esp -= 4; W32(esp, v); }
/* 7d474c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d474d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d474fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d474f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4752: mov edi, 1 */
  edi = 0x1u;
L_7d4757: /* 7d4757: mov edx, dword ptr [0xce4188] */
  edx = R32((uint32_t)(0xce4188u));
/* 7d475d: mov ecx, 0xce4188 */
  ecx = 0xce4188u;
/* 7d4762: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4765u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4765: cmp eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4768: je 0x7d4797 */
  if (zf) goto L_7d4797;
L_7d476a: /* 7d476a: mov eax, dword ptr [0xce4188] */
  eax = R32((uint32_t)(0xce4188u));
/* 7d476f: mov ecx, 0xce4188 */
  ecx = 0xce4188u;
/* 7d4774: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4777u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4777: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d477d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d477f: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7d4781: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4782: push 0xad5ee8 */
  { uint32_t v = 0xad5ee8u; esp -= 4; W32(esp, v); }
/* 7d4787: push 0xad5f10 */
  { uint32_t v = 0xad5f10u; esp -= 4; W32(esp, v); }
/* 7d478c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d478d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d478fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d478f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4792: mov edi, 1 */
  edi = 0x1u;
L_7d4797: /* 7d4797: mov eax, dword ptr [0xce3c58] */
  eax = R32((uint32_t)(0xce3c58u));
/* 7d479c: mov ecx, 0xce3c58 */
  ecx = 0xce3c58u;
/* 7d47a1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d47a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47a4: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d47a7: je 0x7d47d6 */
  if (zf) goto L_7d47d6;
L_7d47a9: /* 7d47a9: mov edx, dword ptr [0xce3c58] */
  edx = R32((uint32_t)(0xce3c58u));
/* 7d47af: mov ecx, 0xce3c58 */
  ecx = 0xce3c58u;
/* 7d47b4: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d47b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47b7: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7d47b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d47ba: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d47bf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d47c1: push 0xad5f70 */
  { uint32_t v = 0xad5f70u; esp -= 4; W32(esp, v); }
/* 7d47c6: push 0xad5fa8 */
  { uint32_t v = 0xad5fa8u; esp -= 4; W32(esp, v); }
/* 7d47cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d47cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d47ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47ce: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d47d1: mov edi, 1 */
  edi = 0x1u;
L_7d47d6: /* 7d47d6: mov edx, dword ptr [0xce3728] */
  edx = R32((uint32_t)(0xce3728u));
/* 7d47dc: mov ecx, 0xce3728 */
  ecx = 0xce3728u;
/* 7d47e1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d47e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47e4: cmp eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d47e7: je 0x7d4816 */
  if (zf) goto L_7d4816;
L_7d47e9: /* 7d47e9: mov eax, dword ptr [0xce3728] */
  eax = R32((uint32_t)(0xce3728u));
/* 7d47ee: mov ecx, 0xce3728 */
  ecx = 0xce3728u;
/* 7d47f3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d47f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d47f6: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d47fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d47fe: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7d4800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4801: push 0xad6008 */
  { uint32_t v = 0xad6008u; esp -= 4; W32(esp, v); }
/* 7d4806: push 0xad6030 */
  { uint32_t v = 0xad6030u; esp -= 4; W32(esp, v); }
/* 7d480b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d480c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d480eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d480e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4811: mov edi, 1 */
  edi = 0x1u;
L_7d4816: /* 7d4816: mov eax, dword ptr [0xce16f0] */
  eax = R32((uint32_t)(0xce16f0u));
/* 7d481b: mov ecx, 0xce16f0 */
  ecx = 0xce16f0u;
/* 7d4820: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4823: cmp eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4828: je 0x7d485a */
  if (zf) goto L_7d485a;
L_7d482a: /* 7d482a: mov edx, dword ptr [0xce16f0] */
  edx = R32((uint32_t)(0xce16f0u));
/* 7d4830: mov ecx, 0xce16f0 */
  ecx = 0xce16f0u;
/* 7d4835: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4838: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 7d483d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d483e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4843: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4845: push 0xad6090 */
  { uint32_t v = 0xad6090u; esp -= 4; W32(esp, v); }
/* 7d484a: push 0xad60c0 */
  { uint32_t v = 0xad60c0u; esp -= 4; W32(esp, v); }
/* 7d484f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4850: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4852: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4855: mov edi, 1 */
  edi = 0x1u;
L_7d485a: /* 7d485a: mov edx, dword ptr [0xce1088] */
  edx = R32((uint32_t)(0xce1088u));
/* 7d4860: mov ecx, 0xce1088 */
  ecx = 0xce1088u;
/* 7d4865: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4868u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4868: cmp eax, 0x358 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d486d: je 0x7d489f */
  if (zf) goto L_7d489f;
L_7d486f: /* 7d486f: mov eax, dword ptr [0xce1088] */
  eax = R32((uint32_t)(0xce1088u));
/* 7d4874: mov ecx, 0xce1088 */
  ecx = 0xce1088u;
/* 7d4879: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d487cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d487c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4882: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4884: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 7d4889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d488a: push 0xad6120 */
  { uint32_t v = 0xad6120u; esp -= 4; W32(esp, v); }
/* 7d488f: push 0xad6138 */
  { uint32_t v = 0xad6138u; esp -= 4; W32(esp, v); }
/* 7d4894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4895: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4897u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4897: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d489a: mov edi, 1 */
  edi = 0x1u;
L_7d489f: /* 7d489f: mov eax, dword ptr [0xce0a40] */
  eax = R32((uint32_t)(0xce0a40u));
/* 7d48a4: mov ecx, 0xce0a40 */
  ecx = 0xce0a40u;
/* 7d48a9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d48acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d48ac: cmp eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d48af: je 0x7d48de */
  if (zf) goto L_7d48de;
L_7d48b1: /* 7d48b1: mov edx, dword ptr [0xce0a40] */
  edx = R32((uint32_t)(0xce0a40u));
/* 7d48b7: mov ecx, 0xce0a40 */
  ecx = 0xce0a40u;
/* 7d48bc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d48bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d48bf: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 7d48c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d48c2: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d48c7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d48c9: push 0xad6198 */
  { uint32_t v = 0xad6198u; esp -= 4; W32(esp, v); }
/* 7d48ce: push 0xad61c0 */
  { uint32_t v = 0xad61c0u; esp -= 4; W32(esp, v); }
/* 7d48d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d48d4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d48d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d48d6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d48d9: mov edi, 1 */
  edi = 0x1u;
L_7d48de: /* 7d48de: mov edx, dword ptr [0xcdf328] */
  edx = R32((uint32_t)(0xcdf328u));
/* 7d48e4: mov ecx, 0xcdf328 */
  ecx = 0xcdf328u;
/* 7d48e9: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d48ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d48ec: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d48f1: je 0x7d4923 */
  if (zf) goto L_7d4923;
L_7d48f3: /* 7d48f3: mov eax, dword ptr [0xcdf328] */
  eax = R32((uint32_t)(0xcdf328u));
/* 7d48f8: mov ecx, 0xcdf328 */
  ecx = 0xcdf328u;
/* 7d48fd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4900u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4900: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4906: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4908: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d490d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d490e: push 0xad6220 */
  { uint32_t v = 0xad6220u; esp -= 4; W32(esp, v); }
/* 7d4913: push 0xad6238 */
  { uint32_t v = 0xad6238u; esp -= 4; W32(esp, v); }
/* 7d4918: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4919: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d491bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d491b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d491e: mov edi, 1 */
  edi = 0x1u;
L_7d4923: /* 7d4923: mov eax, dword ptr [0xcdedf8] */
  eax = R32((uint32_t)(0xcdedf8u));
/* 7d4928: mov ecx, 0xcdedf8 */
  ecx = 0xcdedf8u;
/* 7d492d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4930u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4930: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4933: je 0x7d4962 */
  if (zf) goto L_7d4962;
L_7d4935: /* 7d4935: mov edx, dword ptr [0xcdedf8] */
  edx = R32((uint32_t)(0xcdedf8u));
/* 7d493b: mov ecx, 0xcdedf8 */
  ecx = 0xcdedf8u;
/* 7d4940: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4943u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4943: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d4945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4946: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d494b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d494d: push 0xad6298 */
  { uint32_t v = 0xad6298u; esp -= 4; W32(esp, v); }
/* 7d4952: push 0xad62c8 */
  { uint32_t v = 0xad62c8u; esp -= 4; W32(esp, v); }
/* 7d4957: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4958: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d495au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d495a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d495d: mov edi, 1 */
  edi = 0x1u;
L_7d4962: /* 7d4962: mov edx, dword ptr [0xcdc478] */
  edx = R32((uint32_t)(0xcdc478u));
/* 7d4968: mov ecx, 0xcdc478 */
  ecx = 0xcdc478u;
/* 7d496d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4970u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4970: cmp eax, 0x50 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4973: je 0x7d49a2 */
  if (zf) goto L_7d49a2;
L_7d4975: /* 7d4975: mov eax, dword ptr [0xcdc478] */
  eax = R32((uint32_t)(0xcdc478u));
/* 7d497a: mov ecx, 0xcdc478 */
  ecx = 0xcdc478u;
/* 7d497f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4982u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4982: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4988: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d498a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7d498c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d498d: push 0xad6328 */
  { uint32_t v = 0xad6328u; esp -= 4; W32(esp, v); }
/* 7d4992: push 0xad6348 */
  { uint32_t v = 0xad6348u; esp -= 4; W32(esp, v); }
/* 7d4997: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4998: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d499au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d499a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d499d: mov edi, 1 */
  edi = 0x1u;
L_7d49a2: /* 7d49a2: mov eax, dword ptr [0xcda558] */
  eax = R32((uint32_t)(0xcda558u));
/* 7d49a7: mov ecx, 0xcda558 */
  ecx = 0xcda558u;
/* 7d49ac: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d49afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d49af: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d49b2: je 0x7d49e1 */
  if (zf) goto L_7d49e1;
L_7d49b4: /* 7d49b4: mov edx, dword ptr [0xcda558] */
  edx = R32((uint32_t)(0xcda558u));
/* 7d49ba: mov ecx, 0xcda558 */
  ecx = 0xcda558u;
/* 7d49bf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d49c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d49c2: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7d49c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d49c5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d49ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d49cc: push 0xad63a8 */
  { uint32_t v = 0xad63a8u; esp -= 4; W32(esp, v); }
/* 7d49d1: push 0xad63c0 */
  { uint32_t v = 0xad63c0u; esp -= 4; W32(esp, v); }
/* 7d49d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d49d7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d49d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d49d9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d49dc: mov edi, 1 */
  edi = 0x1u;
L_7d49e1: /* 7d49e1: mov edx, dword ptr [0xcde8c8] */
  edx = R32((uint32_t)(0xcde8c8u));
/* 7d49e7: mov ecx, 0xcde8c8 */
  ecx = 0xcde8c8u;
/* 7d49ec: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d49efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d49ef: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d49f2: je 0x7d4a21 */
  if (zf) goto L_7d4a21;
L_7d49f4: /* 7d49f4: mov eax, dword ptr [0xcde8c8] */
  eax = R32((uint32_t)(0xcde8c8u));
/* 7d49f9: mov ecx, 0xcde8c8 */
  ecx = 0xcde8c8u;
/* 7d49fe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4a01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a01: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4a07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4a09: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d4a0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4a0c: push 0xad6420 */
  { uint32_t v = 0xad6420u; esp -= 4; W32(esp, v); }
/* 7d4a11: push 0xad6448 */
  { uint32_t v = 0xad6448u; esp -= 4; W32(esp, v); }
/* 7d4a16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4a17: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4a19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a19: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4a1c: mov edi, 1 */
  edi = 0x1u;
L_7d4a21: /* 7d4a21: mov eax, dword ptr [0xcde398] */
  eax = R32((uint32_t)(0xcde398u));
/* 7d4a26: mov ecx, 0xcde398 */
  ecx = 0xcde398u;
/* 7d4a2b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4a2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a2e: cmp eax, 0x84 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4a33: je 0x7d4a65 */
  if (zf) goto L_7d4a65;
L_7d4a35: /* 7d4a35: mov edx, dword ptr [0xcde398] */
  edx = R32((uint32_t)(0xcde398u));
/* 7d4a3b: mov ecx, 0xcde398 */
  ecx = 0xcde398u;
/* 7d4a40: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4a43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a43: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 7d4a48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4a49: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4a4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4a50: push 0xad64a8 */
  { uint32_t v = 0xad64a8u; esp -= 4; W32(esp, v); }
/* 7d4a55: push 0xad64d8 */
  { uint32_t v = 0xad64d8u; esp -= 4; W32(esp, v); }
/* 7d4a5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4a5b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4a5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a5d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4a60: mov edi, 1 */
  edi = 0x1u;
L_7d4a65: /* 7d4a65: mov edx, dword ptr [0xcdde68] */
  edx = R32((uint32_t)(0xcdde68u));
/* 7d4a6b: mov ecx, 0xcdde68 */
  ecx = 0xcdde68u;
/* 7d4a70: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4a73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a73: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4a76: je 0x7d4aa5 */
  if (zf) goto L_7d4aa5;
L_7d4a78: /* 7d4a78: mov eax, dword ptr [0xcdde68] */
  eax = R32((uint32_t)(0xcdde68u));
/* 7d4a7d: mov ecx, 0xcdde68 */
  ecx = 0xcdde68u;
/* 7d4a82: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4a85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a85: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4a8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4a8d: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7d4a8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4a90: push 0xad6538 */
  { uint32_t v = 0xad6538u; esp -= 4; W32(esp, v); }
/* 7d4a95: push 0xad6568 */
  { uint32_t v = 0xad6568u; esp -= 4; W32(esp, v); }
/* 7d4a9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4a9b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4a9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4a9d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4aa0: mov edi, 1 */
  edi = 0x1u;
L_7d4aa5: /* 7d4aa5: mov eax, dword ptr [0xcdd938] */
  eax = R32((uint32_t)(0xcdd938u));
/* 7d4aaa: mov ecx, 0xcdd938 */
  ecx = 0xcdd938u;
/* 7d4aaf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4ab2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ab2: cmp eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4ab5: je 0x7d4ae4 */
  if (zf) goto L_7d4ae4;
L_7d4ab7: /* 7d4ab7: mov edx, dword ptr [0xcdd938] */
  edx = R32((uint32_t)(0xcdd938u));
/* 7d4abd: mov ecx, 0xcdd938 */
  ecx = 0xcdd938u;
/* 7d4ac2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4ac5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ac5: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7d4ac7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4ac8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4acd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4acf: push 0xad65c8 */
  { uint32_t v = 0xad65c8u; esp -= 4; W32(esp, v); }
/* 7d4ad4: push 0xad65f8 */
  { uint32_t v = 0xad65f8u; esp -= 4; W32(esp, v); }
/* 7d4ad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4ada: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4adcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4adc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4adf: mov edi, 1 */
  edi = 0x1u;
L_7d4ae4: /* 7d4ae4: mov edx, dword ptr [0xcdd408] */
  edx = R32((uint32_t)(0xcdd408u));
/* 7d4aea: mov ecx, 0xcdd408 */
  ecx = 0xcdd408u;
/* 7d4aef: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4af2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4af2: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4af5: je 0x7d4b24 */
  if (zf) goto L_7d4b24;
L_7d4af7: /* 7d4af7: mov eax, dword ptr [0xcdd408] */
  eax = R32((uint32_t)(0xcdd408u));
/* 7d4afc: mov ecx, 0xcdd408 */
  ecx = 0xcdd408u;
/* 7d4b01: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b04: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4b0a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4b0c: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d4b0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4b0f: push 0xad6658 */
  { uint32_t v = 0xad6658u; esp -= 4; W32(esp, v); }
/* 7d4b14: push 0xad6678 */
  { uint32_t v = 0xad6678u; esp -= 4; W32(esp, v); }
/* 7d4b19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4b1a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4b1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b1c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4b1f: mov edi, 1 */
  edi = 0x1u;
L_7d4b24: /* 7d4b24: mov eax, dword ptr [0xcdced8] */
  eax = R32((uint32_t)(0xcdced8u));
/* 7d4b29: mov ecx, 0xcdced8 */
  ecx = 0xcdced8u;
/* 7d4b2e: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4b31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b31: cmp eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4b34: je 0x7d4b63 */
  if (zf) goto L_7d4b63;
L_7d4b36: /* 7d4b36: mov edx, dword ptr [0xcdced8] */
  edx = R32((uint32_t)(0xcdced8u));
/* 7d4b3c: mov ecx, 0xcdced8 */
  ecx = 0xcdced8u;
/* 7d4b41: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4b44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b44: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 7d4b46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4b47: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4b4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4b4e: push 0xad66d8 */
  { uint32_t v = 0xad66d8u; esp -= 4; W32(esp, v); }
/* 7d4b53: push 0xad6700 */
  { uint32_t v = 0xad6700u; esp -= 4; W32(esp, v); }
/* 7d4b58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4b59: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4b5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b5b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4b5e: mov edi, 1 */
  edi = 0x1u;
L_7d4b63: /* 7d4b63: mov edx, dword ptr [0xcdc9a8] */
  edx = R32((uint32_t)(0xcdc9a8u));
/* 7d4b69: mov ecx, 0xcdc9a8 */
  ecx = 0xcdc9a8u;
/* 7d4b6e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4b71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b71: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4b74: je 0x7d4ba3 */
  if (zf) goto L_7d4ba3;
L_7d4b76: /* 7d4b76: mov eax, dword ptr [0xcdc9a8] */
  eax = R32((uint32_t)(0xcdc9a8u));
/* 7d4b7b: mov ecx, 0xcdc9a8 */
  ecx = 0xcdc9a8u;
/* 7d4b80: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4b83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b83: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4b89: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4b8b: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d4b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4b8e: push 0xad6760 */
  { uint32_t v = 0xad6760u; esp -= 4; W32(esp, v); }
/* 7d4b93: push 0xad6780 */
  { uint32_t v = 0xad6780u; esp -= 4; W32(esp, v); }
/* 7d4b98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4b99: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4b9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4b9b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4b9e: mov edi, 1 */
  edi = 0x1u;
L_7d4ba3: /* 7d4ba3: mov eax, dword ptr [0xcdbf48] */
  eax = R32((uint32_t)(0xcdbf48u));
/* 7d4ba8: mov ecx, 0xcdbf48 */
  ecx = 0xcdbf48u;
/* 7d4bad: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4bb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4bb0: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4bb5: je 0x7d4be7 */
  if (zf) goto L_7d4be7;
L_7d4bb7: /* 7d4bb7: mov edx, dword ptr [0xcdbf48] */
  edx = R32((uint32_t)(0xcdbf48u));
/* 7d4bbd: mov ecx, 0xcdbf48 */
  ecx = 0xcdbf48u;
/* 7d4bc2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4bc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4bc5: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d4bca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4bcb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4bd0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4bd2: push 0xad67e0 */
  { uint32_t v = 0xad67e0u; esp -= 4; W32(esp, v); }
/* 7d4bd7: push 0xad6800 */
  { uint32_t v = 0xad6800u; esp -= 4; W32(esp, v); }
/* 7d4bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4bdd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4bdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4bdf: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4be2: mov edi, 1 */
  edi = 0x1u;
L_7d4be7: /* 7d4be7: mov edx, dword ptr [0xcdba18] */
  edx = R32((uint32_t)(0xcdba18u));
/* 7d4bed: mov ecx, 0xcdba18 */
  ecx = 0xcdba18u;
/* 7d4bf2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4bf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4bf5: cmp eax, 0x88 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4bfa: je 0x7d4c2c */
  if (zf) goto L_7d4c2c;
L_7d4bfc: /* 7d4bfc: mov eax, dword ptr [0xcdba18] */
  eax = R32((uint32_t)(0xcdba18u));
/* 7d4c01: mov ecx, 0xcdba18 */
  ecx = 0xcdba18u;
/* 7d4c06: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4c09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c09: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4c0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4c11: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 7d4c16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4c17: push 0xad6860 */
  { uint32_t v = 0xad6860u; esp -= 4; W32(esp, v); }
/* 7d4c1c: push 0xad6880 */
  { uint32_t v = 0xad6880u; esp -= 4; W32(esp, v); }
/* 7d4c21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4c22: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4c24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c24: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4c27: mov edi, 1 */
  edi = 0x1u;
L_7d4c2c: /* 7d4c2c: mov eax, dword ptr [0xcdafb8] */
  eax = R32((uint32_t)(0xcdafb8u));
/* 7d4c31: mov ecx, 0xcdafb8 */
  ecx = 0xcdafb8u;
/* 7d4c36: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4c39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c39: cmp eax, 0x88 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4c3e: je 0x7d4c70 */
  if (zf) goto L_7d4c70;
L_7d4c40: /* 7d4c40: mov edx, dword ptr [0xcdafb8] */
  edx = R32((uint32_t)(0xcdafb8u));
/* 7d4c46: mov ecx, 0xcdafb8 */
  ecx = 0xcdafb8u;
/* 7d4c4b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4c4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c4e: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 7d4c53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4c54: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4c59: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4c5b: push 0xad68e0 */
  { uint32_t v = 0xad68e0u; esp -= 4; W32(esp, v); }
/* 7d4c60: push 0xad68f8 */
  { uint32_t v = 0xad68f8u; esp -= 4; W32(esp, v); }
/* 7d4c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4c66: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4c68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c68: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4c6b: mov edi, 1 */
  edi = 0x1u;
L_7d4c70: /* 7d4c70: mov edx, dword ptr [0xcdb4e8] */
  edx = R32((uint32_t)(0xcdb4e8u));
/* 7d4c76: mov ecx, 0xcdb4e8 */
  ecx = 0xcdb4e8u;
/* 7d4c7b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4c7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c7e: cmp eax, 0x8c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4c83: je 0x7d4cb5 */
  if (zf) goto L_7d4cb5;
L_7d4c85: /* 7d4c85: mov eax, dword ptr [0xcdb4e8] */
  eax = R32((uint32_t)(0xcdb4e8u));
/* 7d4c8a: mov ecx, 0xcdb4e8 */
  ecx = 0xcdb4e8u;
/* 7d4c8f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4c92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4c92: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4c98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4c9a: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 7d4c9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4ca0: push 0xad6958 */
  { uint32_t v = 0xad6958u; esp -= 4; W32(esp, v); }
/* 7d4ca5: push 0xad6980 */
  { uint32_t v = 0xad6980u; esp -= 4; W32(esp, v); }
/* 7d4caa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4cab: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4cadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4cad: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4cb0: mov edi, 1 */
  edi = 0x1u;
L_7d4cb5: /* 7d4cb5: mov eax, dword ptr [0xcdaa88] */
  eax = R32((uint32_t)(0xcdaa88u));
/* 7d4cba: mov ecx, 0xcdaa88 */
  ecx = 0xcdaa88u;
/* 7d4cbf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4cc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4cc2: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4cc5: je 0x7d4cf4 */
  if (zf) goto L_7d4cf4;
L_7d4cc7: /* 7d4cc7: mov edx, dword ptr [0xcdaa88] */
  edx = R32((uint32_t)(0xcdaa88u));
/* 7d4ccd: mov ecx, 0xcdaa88 */
  ecx = 0xcdaa88u;
/* 7d4cd2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4cd5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7d4cd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4cd8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4cdd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4cdf: push 0xad69e0 */
  { uint32_t v = 0xad69e0u; esp -= 4; W32(esp, v); }
/* 7d4ce4: push 0xad69f8 */
  { uint32_t v = 0xad69f8u; esp -= 4; W32(esp, v); }
/* 7d4ce9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4cea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4cecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4cec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4cef: mov edi, 1 */
  edi = 0x1u;
L_7d4cf4: /* 7d4cf4: mov edx, dword ptr [0xcda028] */
  edx = R32((uint32_t)(0xcda028u));
/* 7d4cfa: mov ecx, 0xcda028 */
  ecx = 0xcda028u;
/* 7d4cff: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4d02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d02: cmp eax, 0x448 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x448u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4d07: je 0x7d4d39 */
  if (zf) goto L_7d4d39;
L_7d4d09: /* 7d4d09: mov eax, dword ptr [0xcda028] */
  eax = R32((uint32_t)(0xcda028u));
/* 7d4d0e: mov ecx, 0xcda028 */
  ecx = 0xcda028u;
/* 7d4d13: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4d16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d16: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4d1c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4d1e: push 0x448 */
  { uint32_t v = 0x448u; esp -= 4; W32(esp, v); }
/* 7d4d23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4d24: push 0xad6a58 */
  { uint32_t v = 0xad6a58u; esp -= 4; W32(esp, v); }
/* 7d4d29: push 0xad6a78 */
  { uint32_t v = 0xad6a78u; esp -= 4; W32(esp, v); }
/* 7d4d2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4d2f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4d31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d31: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4d34: mov edi, 1 */
  edi = 0x1u;
L_7d4d39: /* 7d4d39: mov eax, dword ptr [0xcd98d0] */
  eax = R32((uint32_t)(0xcd98d0u));
/* 7d4d3e: mov ecx, 0xcd98d0 */
  ecx = 0xcd98d0u;
/* 7d4d43: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4d46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d46: cmp eax, 0xf0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4d4b: je 0x7d4d7d */
  if (zf) goto L_7d4d7d;
L_7d4d4d: /* 7d4d4d: mov edx, dword ptr [0xcd98d0] */
  edx = R32((uint32_t)(0xcd98d0u));
/* 7d4d53: mov ecx, 0xcd98d0 */
  ecx = 0xcd98d0u;
/* 7d4d58: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4d5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d5b: push 0xf0 */
  { uint32_t v = 0xf0u; esp -= 4; W32(esp, v); }
/* 7d4d60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4d61: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4d66: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4d68: push 0xad6ad8 */
  { uint32_t v = 0xad6ad8u; esp -= 4; W32(esp, v); }
/* 7d4d6d: push 0xad6af8 */
  { uint32_t v = 0xad6af8u; esp -= 4; W32(esp, v); }
/* 7d4d72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4d73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4d75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d75: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4d78: mov edi, 1 */
  edi = 0x1u;
L_7d4d7d: /* 7d4d7d: mov edx, dword ptr [0xcd93a0] */
  edx = R32((uint32_t)(0xcd93a0u));
/* 7d4d83: mov ecx, 0xcd93a0 */
  ecx = 0xcd93a0u;
/* 7d4d88: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4d8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d8b: cmp eax, 0x630 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x630u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4d90: je 0x7d4dc2 */
  if (zf) goto L_7d4dc2;
L_7d4d92: /* 7d4d92: mov eax, dword ptr [0xcd93a0] */
  eax = R32((uint32_t)(0xcd93a0u));
/* 7d4d97: mov ecx, 0xcd93a0 */
  ecx = 0xcd93a0u;
/* 7d4d9c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4d9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4d9f: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4da5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4da7: push 0x630 */
  { uint32_t v = 0x630u; esp -= 4; W32(esp, v); }
/* 7d4dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4dad: push 0xad6b58 */
  { uint32_t v = 0xad6b58u; esp -= 4; W32(esp, v); }
/* 7d4db2: push 0xad6b70 */
  { uint32_t v = 0xad6b70u; esp -= 4; W32(esp, v); }
/* 7d4db7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4db8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4dbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4dba: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4dbd: mov edi, 1 */
  edi = 0x1u;
L_7d4dc2: /* 7d4dc2: mov eax, dword ptr [0xcc74c0] */
  eax = R32((uint32_t)(0xcc74c0u));
/* 7d4dc7: mov ecx, 0xcc74c0 */
  ecx = 0xcc74c0u;
/* 7d4dcc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4dcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4dcf: cmp eax, 0x598 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x598u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4dd4: je 0x7d4e06 */
  if (zf) goto L_7d4e06;
L_7d4dd6: /* 7d4dd6: mov edx, dword ptr [0xcc74c0] */
  edx = R32((uint32_t)(0xcc74c0u));
/* 7d4ddc: mov ecx, 0xcc74c0 */
  ecx = 0xcc74c0u;
/* 7d4de1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4de4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4de4: push 0x598 */
  { uint32_t v = 0x598u; esp -= 4; W32(esp, v); }
/* 7d4de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4dea: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4def: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4df1: push 0xad6bd0 */
  { uint32_t v = 0xad6bd0u; esp -= 4; W32(esp, v); }
/* 7d4df6: push 0xad6be0 */
  { uint32_t v = 0xad6be0u; esp -= 4; W32(esp, v); }
/* 7d4dfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4dfc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4dfe: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4e01: mov edi, 1 */
  edi = 0x1u;
L_7d4e06: /* 7d4e06: mov edx, dword ptr [0xcc91e8] */
  edx = R32((uint32_t)(0xcc91e8u));
/* 7d4e0c: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 7d4e11: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4e14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e14: cmp eax, 0xcc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4e19: je 0x7d4e4b */
  if (zf) goto L_7d4e4b;
L_7d4e1b: /* 7d4e1b: mov eax, dword ptr [0xcc91e8] */
  eax = R32((uint32_t)(0xcc91e8u));
/* 7d4e20: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 7d4e25: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4e28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e28: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4e2e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4e30: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 7d4e35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4e36: push 0xad6c40 */
  { uint32_t v = 0xad6c40u; esp -= 4; W32(esp, v); }
/* 7d4e3b: push 0xad6c68 */
  { uint32_t v = 0xad6c68u; esp -= 4; W32(esp, v); }
/* 7d4e40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4e41: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4e43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e43: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4e46: mov edi, 1 */
  edi = 0x1u;
L_7d4e4b: /* 7d4e4b: mov eax, dword ptr [0xcc8cb8] */
  eax = R32((uint32_t)(0xcc8cb8u));
/* 7d4e50: mov ecx, 0xcc8cb8 */
  ecx = 0xcc8cb8u;
/* 7d4e55: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4e58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e58: cmp eax, 0x4c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4e5d: je 0x7d4e8f */
  if (zf) goto L_7d4e8f;
L_7d4e5f: /* 7d4e5f: mov edx, dword ptr [0xcc8cb8] */
  edx = R32((uint32_t)(0xcc8cb8u));
/* 7d4e65: mov ecx, 0xcc8cb8 */
  ecx = 0xcc8cb8u;
/* 7d4e6a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4e6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e6d: push 0x4c8 */
  { uint32_t v = 0x4c8u; esp -= 4; W32(esp, v); }
/* 7d4e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4e73: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4e78: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4e7a: push 0xad6cc8 */
  { uint32_t v = 0xad6cc8u; esp -= 4; W32(esp, v); }
/* 7d4e7f: push 0xad6ce0 */
  { uint32_t v = 0xad6ce0u; esp -= 4; W32(esp, v); }
/* 7d4e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4e85: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4e87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e87: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4e8a: mov edi, 1 */
  edi = 0x1u;
L_7d4e8f: /* 7d4e8f: mov edx, dword ptr [0xcc6d78] */
  edx = R32((uint32_t)(0xcc6d78u));
/* 7d4e95: mov ecx, 0xcc6d78 */
  ecx = 0xcc6d78u;
/* 7d4e9a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4e9d: cmp eax, 0x2c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4ea2: je 0x7d4ed4 */
  if (zf) goto L_7d4ed4;
L_7d4ea4: /* 7d4ea4: mov eax, dword ptr [0xcc6d78] */
  eax = R32((uint32_t)(0xcc6d78u));
/* 7d4ea9: mov ecx, 0xcc6d78 */
  ecx = 0xcc6d78u;
/* 7d4eae: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4eb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4eb1: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4eb7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4eb9: push 0x2c8 */
  { uint32_t v = 0x2c8u; esp -= 4; W32(esp, v); }
/* 7d4ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4ebf: push 0xad6d40 */
  { uint32_t v = 0xad6d40u; esp -= 4; W32(esp, v); }
/* 7d4ec4: push 0xad6d68 */
  { uint32_t v = 0xad6d68u; esp -= 4; W32(esp, v); }
/* 7d4ec9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4eca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4eccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ecc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4ecf: mov edi, 1 */
  edi = 0x1u;
L_7d4ed4: /* 7d4ed4: mov eax, dword ptr [0xcc6848] */
  eax = R32((uint32_t)(0xcc6848u));
/* 7d4ed9: mov ecx, 0xcc6848 */
  ecx = 0xcc6848u;
/* 7d4ede: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4ee1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ee1: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4ee6: je 0x7d4f18 */
  if (zf) goto L_7d4f18;
L_7d4ee8: /* 7d4ee8: mov edx, dword ptr [0xcc6848] */
  edx = R32((uint32_t)(0xcc6848u));
/* 7d4eee: mov ecx, 0xcc6848 */
  ecx = 0xcc6848u;
/* 7d4ef3: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4ef6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4ef6: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d4efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4efc: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4f01: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4f03: push 0xad6dc8 */
  { uint32_t v = 0xad6dc8u; esp -= 4; W32(esp, v); }
/* 7d4f08: push 0xad6de0 */
  { uint32_t v = 0xad6de0u; esp -= 4; W32(esp, v); }
/* 7d4f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4f0e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4f10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f10: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4f13: mov edi, 1 */
  edi = 0x1u;
L_7d4f18: /* 7d4f18: mov edx, dword ptr [0xcc5588] */
  edx = R32((uint32_t)(0xcc5588u));
/* 7d4f1e: mov ecx, 0xcc5588 */
  ecx = 0xcc5588u;
/* 7d4f23: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4f26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f26: cmp eax, 0x6a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4f2b: je 0x7d4f5d */
  if (zf) goto L_7d4f5d;
L_7d4f2d: /* 7d4f2d: mov eax, dword ptr [0xcc5588] */
  eax = R32((uint32_t)(0xcc5588u));
/* 7d4f32: mov ecx, 0xcc5588 */
  ecx = 0xcc5588u;
/* 7d4f37: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4f3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f3a: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4f40: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4f42: push 0x6a8 */
  { uint32_t v = 0x6a8u; esp -= 4; W32(esp, v); }
/* 7d4f47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4f48: push 0xad6e40 */
  { uint32_t v = 0xad6e40u; esp -= 4; W32(esp, v); }
/* 7d4f4d: push 0xad6e50 */
  { uint32_t v = 0xad6e50u; esp -= 4; W32(esp, v); }
/* 7d4f52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4f53: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4f55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f55: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4f58: mov edi, 1 */
  edi = 0x1u;
L_7d4f5d: /* 7d4f5d: mov eax, dword ptr [0xb915a0] */
  eax = R32((uint32_t)(0xb915a0u));
/* 7d4f62: mov ecx, 0xb915a0 */
  ecx = 0xb915a0u;
/* 7d4f67: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4f6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f6a: cmp eax, 0x4a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4f6f: je 0x7d4fa1 */
  if (zf) goto L_7d4fa1;
L_7d4f71: /* 7d4f71: mov edx, dword ptr [0xb915a0] */
  edx = R32((uint32_t)(0xb915a0u));
/* 7d4f77: mov ecx, 0xb915a0 */
  ecx = 0xb915a0u;
/* 7d4f7c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4f7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f7f: push 0x4a8 */
  { uint32_t v = 0x4a8u; esp -= 4; W32(esp, v); }
/* 7d4f84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4f85: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d4f8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d4f8c: push 0xad6eb0 */
  { uint32_t v = 0xad6eb0u; esp -= 4; W32(esp, v); }
/* 7d4f91: push 0xad6ed0 */
  { uint32_t v = 0xad6ed0u; esp -= 4; W32(esp, v); }
/* 7d4f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d4f97: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4f99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4f99: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4f9c: mov edi, 1 */
  edi = 0x1u;
L_7d4fa1: /* 7d4fa1: mov edx, dword ptr [0xb8e7e0] */
  edx = R32((uint32_t)(0xb8e7e0u));
/* 7d4fa7: mov ecx, 0xb8e7e0 */
  ecx = 0xb8e7e0u;
/* 7d4fac: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d4fafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4faf: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4fb2: je 0x7d4fe1 */
  if (zf) goto L_7d4fe1;
L_7d4fb4: /* 7d4fb4: mov eax, dword ptr [0xb8e7e0] */
  eax = R32((uint32_t)(0xb8e7e0u));
/* 7d4fb9: mov ecx, 0xb8e7e0 */
  ecx = 0xb8e7e0u;
/* 7d4fbe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4fc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4fc1: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d4fc7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d4fc9: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7d4fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d4fcc: push 0xad6f30 */
  { uint32_t v = 0xad6f30u; esp -= 4; W32(esp, v); }
/* 7d4fd1: push 0xad6f58 */
  { uint32_t v = 0xad6f58u; esp -= 4; W32(esp, v); }
/* 7d4fd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d4fd7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d4fd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4fd9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d4fdc: mov edi, 1 */
  edi = 0x1u;
L_7d4fe1: /* 7d4fe1: mov eax, dword ptr [0xb89a10] */
  eax = R32((uint32_t)(0xb89a10u));
/* 7d4fe6: mov ecx, 0xb89a10 */
  ecx = 0xb89a10u;
/* 7d4feb: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d4feeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d4fee: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d4ff1: je 0x7d5020 */
  if (zf) goto L_7d5020;
L_7d4ff3: /* 7d4ff3: mov edx, dword ptr [0xb89a10] */
  edx = R32((uint32_t)(0xb89a10u));
/* 7d4ff9: mov ecx, 0xb89a10 */
  ecx = 0xb89a10u;
/* 7d4ffe: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5001u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5001: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7d5003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5004: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5009: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d500b: push 0xad6fb8 */
  { uint32_t v = 0xad6fb8u; esp -= 4; W32(esp, v); }
/* 7d5010: push 0xad6fd0 */
  { uint32_t v = 0xad6fd0u; esp -= 4; W32(esp, v); }
/* 7d5015: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5016: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5018u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5018: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d501b: mov edi, 1 */
  edi = 0x1u;
L_7d5020: /* 7d5020: mov edx, dword ptr [0xb8e2b0] */
  edx = R32((uint32_t)(0xb8e2b0u));
/* 7d5026: mov ecx, 0xb8e2b0 */
  ecx = 0xb8e2b0u;
/* 7d502b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d502eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d502e: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5031: je 0x7d5060 */
  if (zf) goto L_7d5060;
L_7d5033: /* 7d5033: mov eax, dword ptr [0xb8e2b0] */
  eax = R32((uint32_t)(0xb8e2b0u));
/* 7d5038: mov ecx, 0xb8e2b0 */
  ecx = 0xb8e2b0u;
/* 7d503d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5040u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5040: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5046: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5048: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 7d504a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d504b: push 0xad7030 */
  { uint32_t v = 0xad7030u; esp -= 4; W32(esp, v); }
/* 7d5050: push 0xad7058 */
  { uint32_t v = 0xad7058u; esp -= 4; W32(esp, v); }
/* 7d5055: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5056: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5058u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5058: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d505b: mov edi, 1 */
  edi = 0x1u;
L_7d5060: /* 7d5060: mov eax, dword ptr [0xb8dd80] */
  eax = R32((uint32_t)(0xb8dd80u));
/* 7d5065: mov ecx, 0xb8dd80 */
  ecx = 0xb8dd80u;
/* 7d506a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d506du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d506d: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5070: je 0x7d509f */
  if (zf) goto L_7d509f;
L_7d5072: /* 7d5072: mov edx, dword ptr [0xb8dd80] */
  edx = R32((uint32_t)(0xb8dd80u));
/* 7d5078: mov ecx, 0xb8dd80 */
  ecx = 0xb8dd80u;
/* 7d507d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5080u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5080: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d5082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5083: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5088: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d508a: push 0xad70b8 */
  { uint32_t v = 0xad70b8u; esp -= 4; W32(esp, v); }
/* 7d508f: push 0xad70d8 */
  { uint32_t v = 0xad70d8u; esp -= 4; W32(esp, v); }
/* 7d5094: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5095: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5097u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5097: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d509a: mov edi, 1 */
  edi = 0x1u;
L_7d509f: /* 7d509f: mov edx, dword ptr [0xb8d850] */
  edx = R32((uint32_t)(0xb8d850u));
/* 7d50a5: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 7d50aa: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d50adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50ad: cmp eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d50b0: je 0x7d50df */
  if (zf) goto L_7d50df;
L_7d50b2: /* 7d50b2: mov eax, dword ptr [0xb8d850] */
  eax = R32((uint32_t)(0xb8d850u));
/* 7d50b7: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 7d50bc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d50bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50bf: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d50c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d50c7: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7d50c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d50ca: push 0xad7138 */
  { uint32_t v = 0xad7138u; esp -= 4; W32(esp, v); }
/* 7d50cf: push 0xad7150 */
  { uint32_t v = 0xad7150u; esp -= 4; W32(esp, v); }
/* 7d50d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d50d5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d50d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50d7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d50da: mov edi, 1 */
  edi = 0x1u;
L_7d50df: /* 7d50df: mov eax, dword ptr [0xb8d320] */
  eax = R32((uint32_t)(0xb8d320u));
/* 7d50e4: mov ecx, 0xb8d320 */
  ecx = 0xb8d320u;
/* 7d50e9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d50ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50ec: cmp eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d50ef: je 0x7d511e */
  if (zf) goto L_7d511e;
L_7d50f1: /* 7d50f1: mov edx, dword ptr [0xb8d320] */
  edx = R32((uint32_t)(0xb8d320u));
/* 7d50f7: mov ecx, 0xb8d320 */
  ecx = 0xb8d320u;
/* 7d50fc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d50ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d50ff: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7d5101: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5102: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5107: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5109: push 0xad71b0 */
  { uint32_t v = 0xad71b0u; esp -= 4; W32(esp, v); }
/* 7d510e: push 0xad71d0 */
  { uint32_t v = 0xad71d0u; esp -= 4; W32(esp, v); }
/* 7d5113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5114: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5116u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5116: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5119: mov edi, 1 */
  edi = 0x1u;
L_7d511e: /* 7d511e: mov edx, dword ptr [0xb8cdf0] */
  edx = R32((uint32_t)(0xb8cdf0u));
/* 7d5124: mov ecx, 0xb8cdf0 */
  ecx = 0xb8cdf0u;
/* 7d5129: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d512cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d512c: cmp eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d512f: je 0x7d515e */
  if (zf) goto L_7d515e;
L_7d5131: /* 7d5131: mov eax, dword ptr [0xb8cdf0] */
  eax = R32((uint32_t)(0xb8cdf0u));
/* 7d5136: mov ecx, 0xb8cdf0 */
  ecx = 0xb8cdf0u;
/* 7d513b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d513eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d513e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5144: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5146: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7d5148: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5149: push 0xad7230 */
  { uint32_t v = 0xad7230u; esp -= 4; W32(esp, v); }
/* 7d514e: push 0xad7250 */
  { uint32_t v = 0xad7250u; esp -= 4; W32(esp, v); }
/* 7d5153: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5154: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5156u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5156: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5159: mov edi, 1 */
  edi = 0x1u;
L_7d515e: /* 7d515e: mov eax, dword ptr [0xb89f40] */
  eax = R32((uint32_t)(0xb89f40u));
/* 7d5163: mov ecx, 0xb89f40 */
  ecx = 0xb89f40u;
/* 7d5168: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d516bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d516b: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d516e: je 0x7d519d */
  if (zf) goto L_7d519d;
L_7d5170: /* 7d5170: mov edx, dword ptr [0xb89f40] */
  edx = R32((uint32_t)(0xb89f40u));
/* 7d5176: mov ecx, 0xb89f40 */
  ecx = 0xb89f40u;
/* 7d517b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d517eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d517e: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7d5180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5181: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5186: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5188: push 0xad72b0 */
  { uint32_t v = 0xad72b0u; esp -= 4; W32(esp, v); }
/* 7d518d: push 0xad72d0 */
  { uint32_t v = 0xad72d0u; esp -= 4; W32(esp, v); }
/* 7d5192: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5193: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5195: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5198: mov edi, 1 */
  edi = 0x1u;
L_7d519d: /* 7d519d: mov edx, dword ptr [0xb8c8c0] */
  edx = R32((uint32_t)(0xb8c8c0u));
/* 7d51a3: mov ecx, 0xb8c8c0 */
  ecx = 0xb8c8c0u;
/* 7d51a8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d51abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d51ab: cmp eax, 0x84 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d51b0: je 0x7d51e2 */
  if (zf) goto L_7d51e2;
L_7d51b2: /* 7d51b2: mov eax, dword ptr [0xb8c8c0] */
  eax = R32((uint32_t)(0xb8c8c0u));
/* 7d51b7: mov ecx, 0xb8c8c0 */
  ecx = 0xb8c8c0u;
/* 7d51bc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d51bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d51bf: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d51c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d51c7: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 7d51cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d51cd: push 0xad7330 */
  { uint32_t v = 0xad7330u; esp -= 4; W32(esp, v); }
/* 7d51d2: push 0xad7348 */
  { uint32_t v = 0xad7348u; esp -= 4; W32(esp, v); }
/* 7d51d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d51d8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d51dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d51da: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d51dd: mov edi, 1 */
  edi = 0x1u;
L_7d51e2: /* 7d51e2: mov eax, dword ptr [0xb8c390] */
  eax = R32((uint32_t)(0xb8c390u));
/* 7d51e7: mov ecx, 0xb8c390 */
  ecx = 0xb8c390u;
/* 7d51ec: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d51efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d51ef: cmp eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d51f2: je 0x7d5221 */
  if (zf) goto L_7d5221;
L_7d51f4: /* 7d51f4: mov edx, dword ptr [0xb8c390] */
  edx = R32((uint32_t)(0xb8c390u));
/* 7d51fa: mov ecx, 0xb8c390 */
  ecx = 0xb8c390u;
/* 7d51ff: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5202: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7d5204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5205: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d520a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d520c: push 0xad73a8 */
  { uint32_t v = 0xad73a8u; esp -= 4; W32(esp, v); }
/* 7d5211: push 0xad73c0 */
  { uint32_t v = 0xad73c0u; esp -= 4; W32(esp, v); }
/* 7d5216: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5217: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5219u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5219: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d521c: mov edi, 1 */
  edi = 0x1u;
L_7d5221: /* 7d5221: mov edx, dword ptr [0xb8be60] */
  edx = R32((uint32_t)(0xb8be60u));
/* 7d5227: mov ecx, 0xb8be60 */
  ecx = 0xb8be60u;
/* 7d522c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d522fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d522f: cmp eax, 0xb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5234: je 0x7d5266 */
  if (zf) goto L_7d5266;
L_7d5236: /* 7d5236: mov eax, dword ptr [0xb8be60] */
  eax = R32((uint32_t)(0xb8be60u));
/* 7d523b: mov ecx, 0xb8be60 */
  ecx = 0xb8be60u;
/* 7d5240: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5243u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5243: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5249: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d524b: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* 7d5250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5251: push 0xad7420 */
  { uint32_t v = 0xad7420u; esp -= 4; W32(esp, v); }
/* 7d5256: push 0xad7440 */
  { uint32_t v = 0xad7440u; esp -= 4; W32(esp, v); }
/* 7d525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d525c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d525eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d525e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5261: mov edi, 1 */
  edi = 0x1u;
L_7d5266: /* 7d5266: mov eax, dword ptr [0xb8b930] */
  eax = R32((uint32_t)(0xb8b930u));
/* 7d526b: mov ecx, 0xb8b930 */
  ecx = 0xb8b930u;
/* 7d5270: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5273u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5273: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5278: je 0x7d52aa */
  if (zf) goto L_7d52aa;
L_7d527a: /* 7d527a: mov edx, dword ptr [0xb8b930] */
  edx = R32((uint32_t)(0xb8b930u));
/* 7d5280: mov ecx, 0xb8b930 */
  ecx = 0xb8b930u;
/* 7d5285: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5288u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5288: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 7d528d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d528e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5293: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5295: push 0xad74a0 */
  { uint32_t v = 0xad74a0u; esp -= 4; W32(esp, v); }
/* 7d529a: push 0xad74d0 */
  { uint32_t v = 0xad74d0u; esp -= 4; W32(esp, v); }
/* 7d529f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d52a0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d52a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52a2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d52a5: mov edi, 1 */
  edi = 0x1u;
L_7d52aa: /* 7d52aa: mov edx, dword ptr [0xb8b400] */
  edx = R32((uint32_t)(0xb8b400u));
/* 7d52b0: mov ecx, 0xb8b400 */
  ecx = 0xb8b400u;
/* 7d52b5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d52b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52b8: cmp eax, 0xc4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d52bd: je 0x7d52ef */
  if (zf) goto L_7d52ef;
L_7d52bf: /* 7d52bf: mov eax, dword ptr [0xb8b400] */
  eax = R32((uint32_t)(0xb8b400u));
/* 7d52c4: mov ecx, 0xb8b400 */
  ecx = 0xb8b400u;
/* 7d52c9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d52ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52cc: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d52d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d52d4: push 0xc4 */
  { uint32_t v = 0xc4u; esp -= 4; W32(esp, v); }
/* 7d52d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d52da: push 0xad7530 */
  { uint32_t v = 0xad7530u; esp -= 4; W32(esp, v); }
/* 7d52df: push 0xad7548 */
  { uint32_t v = 0xad7548u; esp -= 4; W32(esp, v); }
/* 7d52e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d52e5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d52e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52e7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d52ea: mov edi, 1 */
  edi = 0x1u;
L_7d52ef: /* 7d52ef: mov eax, dword ptr [0xb8aed0] */
  eax = R32((uint32_t)(0xb8aed0u));
/* 7d52f4: mov ecx, 0xb8aed0 */
  ecx = 0xb8aed0u;
/* 7d52f9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d52fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d52fc: cmp eax, 0x94 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5301: je 0x7d5333 */
  if (zf) goto L_7d5333;
L_7d5303: /* 7d5303: mov edx, dword ptr [0xb8aed0] */
  edx = R32((uint32_t)(0xb8aed0u));
/* 7d5309: mov ecx, 0xb8aed0 */
  ecx = 0xb8aed0u;
/* 7d530e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5311u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5311: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 7d5316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5317: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d531c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d531e: push 0xad75a8 */
  { uint32_t v = 0xad75a8u; esp -= 4; W32(esp, v); }
/* 7d5323: push 0xad75c0 */
  { uint32_t v = 0xad75c0u; esp -= 4; W32(esp, v); }
/* 7d5328: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5329: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d532bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d532b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d532e: mov edi, 1 */
  edi = 0x1u;
L_7d5333: /* 7d5333: mov edx, dword ptr [0xb8a9a0] */
  edx = R32((uint32_t)(0xb8a9a0u));
/* 7d5339: mov ecx, 0xb8a9a0 */
  ecx = 0xb8a9a0u;
/* 7d533e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5341u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5341: cmp eax, 0x94 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5346: je 0x7d5378 */
  if (zf) goto L_7d5378;
L_7d5348: /* 7d5348: mov eax, dword ptr [0xb8a9a0] */
  eax = R32((uint32_t)(0xb8a9a0u));
/* 7d534d: mov ecx, 0xb8a9a0 */
  ecx = 0xb8a9a0u;
/* 7d5352: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5355u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5355: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d535b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d535d: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* 7d5362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5363: push 0xad7620 */
  { uint32_t v = 0xad7620u; esp -= 4; W32(esp, v); }
/* 7d5368: push 0xad7638 */
  { uint32_t v = 0xad7638u; esp -= 4; W32(esp, v); }
/* 7d536d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d536e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5370u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5370: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5373: mov edi, 1 */
  edi = 0x1u;
L_7d5378: /* 7d5378: mov eax, dword ptr [0xb8a470] */
  eax = R32((uint32_t)(0xb8a470u));
/* 7d537d: mov ecx, 0xb8a470 */
  ecx = 0xb8a470u;
/* 7d5382: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5385: cmp eax, 0xa4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d538a: je 0x7d53bc */
  if (zf) goto L_7d53bc;
L_7d538c: /* 7d538c: mov edx, dword ptr [0xb8a470] */
  edx = R32((uint32_t)(0xb8a470u));
/* 7d5392: mov ecx, 0xb8a470 */
  ecx = 0xb8a470u;
/* 7d5397: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d539au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d539a: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 7d539f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d53a0: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d53a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d53a7: push 0xad7698 */
  { uint32_t v = 0xad7698u; esp -= 4; W32(esp, v); }
/* 7d53ac: push 0xad76c0 */
  { uint32_t v = 0xad76c0u; esp -= 4; W32(esp, v); }
/* 7d53b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d53b2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d53b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d53b4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d53b7: mov edi, 1 */
  edi = 0x1u;
L_7d53bc: /* 7d53bc: mov edx, dword ptr [0xb894e0] */
  edx = R32((uint32_t)(0xb894e0u));
/* 7d53c2: mov ecx, 0xb894e0 */
  ecx = 0xb894e0u;
/* 7d53c7: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d53cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d53ca: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d53cd: je 0x7d53fc */
  if (zf) goto L_7d53fc;
L_7d53cf: /* 7d53cf: mov eax, dword ptr [0xb894e0] */
  eax = R32((uint32_t)(0xb894e0u));
/* 7d53d4: mov ecx, 0xb894e0 */
  ecx = 0xb894e0u;
/* 7d53d9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d53dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d53dc: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d53e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d53e4: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d53e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d53e7: push 0xad7720 */
  { uint32_t v = 0xad7720u; esp -= 4; W32(esp, v); }
/* 7d53ec: push 0xad7738 */
  { uint32_t v = 0xad7738u; esp -= 4; W32(esp, v); }
/* 7d53f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d53f2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d53f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d53f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d53f7: mov edi, 1 */
  edi = 0x1u;
L_7d53fc: /* 7d53fc: mov eax, dword ptr [0xb88a80] */
  eax = R32((uint32_t)(0xb88a80u));
/* 7d5401: mov ecx, 0xb88a80 */
  ecx = 0xb88a80u;
/* 7d5406: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5409u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5409: cmp eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d540c: je 0x7d543b */
  if (zf) goto L_7d543b;
L_7d540e: /* 7d540e: mov edx, dword ptr [0xb88a80] */
  edx = R32((uint32_t)(0xb88a80u));
/* 7d5414: mov ecx, 0xb88a80 */
  ecx = 0xb88a80u;
/* 7d5419: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d541cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d541c: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7d541e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d541f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5424: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5426: push 0xad7798 */
  { uint32_t v = 0xad7798u; esp -= 4; W32(esp, v); }
/* 7d542b: push 0xad77c0 */
  { uint32_t v = 0xad77c0u; esp -= 4; W32(esp, v); }
/* 7d5430: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5431: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5433u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5433: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5436: mov edi, 1 */
  edi = 0x1u;
L_7d543b: /* 7d543b: mov edx, dword ptr [0xb88fb0] */
  edx = R32((uint32_t)(0xb88fb0u));
/* 7d5441: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 7d5446: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5449u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5449: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d544c: je 0x7d547b */
  if (zf) goto L_7d547b;
L_7d544e: /* 7d544e: mov eax, dword ptr [0xb88fb0] */
  eax = R32((uint32_t)(0xb88fb0u));
/* 7d5453: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 7d5458: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d545bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d545b: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5461: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5463: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7d5465: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5466: push 0xad7820 */
  { uint32_t v = 0xad7820u; esp -= 4; W32(esp, v); }
/* 7d546b: push 0xad7840 */
  { uint32_t v = 0xad7840u; esp -= 4; W32(esp, v); }
/* 7d5470: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5471: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5473u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5473: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5476: mov edi, 1 */
  edi = 0x1u;
L_7d547b: /* 7d547b: mov eax, dword ptr [0xb88550] */
  eax = R32((uint32_t)(0xb88550u));
/* 7d5480: mov ecx, 0xb88550 */
  ecx = 0xb88550u;
/* 7d5485: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5488u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5488: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d548b: je 0x7d54ba */
  if (zf) goto L_7d54ba;
L_7d548d: /* 7d548d: mov edx, dword ptr [0xb88550] */
  edx = R32((uint32_t)(0xb88550u));
/* 7d5493: mov ecx, 0xb88550 */
  ecx = 0xb88550u;
/* 7d5498: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d549bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d549b: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d549d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d549e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d54a3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d54a5: push 0xad78a0 */
  { uint32_t v = 0xad78a0u; esp -= 4; W32(esp, v); }
/* 7d54aa: push 0xad78b8 */
  { uint32_t v = 0xad78b8u; esp -= 4; W32(esp, v); }
/* 7d54af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d54b0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d54b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d54b2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d54b5: mov edi, 1 */
  edi = 0x1u;
L_7d54ba: /* 7d54ba: mov edx, dword ptr [0xb88020] */
  edx = R32((uint32_t)(0xb88020u));
/* 7d54c0: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 7d54c5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d54c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d54c8: cmp eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d54cb: je 0x7d54fa */
  if (zf) goto L_7d54fa;
L_7d54cd: /* 7d54cd: mov eax, dword ptr [0xb88020] */
  eax = R32((uint32_t)(0xb88020u));
/* 7d54d2: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 7d54d7: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d54dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d54da: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d54e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d54e2: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 7d54e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d54e5: push 0xad7918 */
  { uint32_t v = 0xad7918u; esp -= 4; W32(esp, v); }
/* 7d54ea: push 0xad7928 */
  { uint32_t v = 0xad7928u; esp -= 4; W32(esp, v); }
/* 7d54ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d54f0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d54f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d54f2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d54f5: mov edi, 1 */
  edi = 0x1u;
L_7d54fa: /* 7d54fa: mov eax, dword ptr [0xb87af0] */
  eax = R32((uint32_t)(0xb87af0u));
/* 7d54ff: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 7d5504: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5507u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5507: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d550a: je 0x7d5539 */
  if (zf) goto L_7d5539;
L_7d550c: /* 7d550c: mov edx, dword ptr [0xb87af0] */
  edx = R32((uint32_t)(0xb87af0u));
/* 7d5512: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 7d5517: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d551au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d551a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7d551c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d551d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5522: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5524: push 0xad7988 */
  { uint32_t v = 0xad7988u; esp -= 4; W32(esp, v); }
/* 7d5529: push 0xad79a8 */
  { uint32_t v = 0xad79a8u; esp -= 4; W32(esp, v); }
/* 7d552e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d552f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5531u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5531: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5534: mov edi, 1 */
  edi = 0x1u;
L_7d5539: /* 7d5539: mov edx, dword ptr [0xb84060] */
  edx = R32((uint32_t)(0xb84060u));
/* 7d553f: mov ecx, 0xb84060 */
  ecx = 0xb84060u;
/* 7d5544: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5547u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5547: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d554a: je 0x7d5579 */
  if (zf) goto L_7d5579;
L_7d554c: /* 7d554c: mov eax, dword ptr [0xb84060] */
  eax = R32((uint32_t)(0xb84060u));
/* 7d5551: mov ecx, 0xb84060 */
  ecx = 0xb84060u;
/* 7d5556: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5559u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5559: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d555f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5561: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7d5563: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5564: push 0xad7a08 */
  { uint32_t v = 0xad7a08u; esp -= 4; W32(esp, v); }
/* 7d5569: push 0xad7a30 */
  { uint32_t v = 0xad7a30u; esp -= 4; W32(esp, v); }
/* 7d556e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d556f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5571u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5571: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5574: mov edi, 1 */
  edi = 0x1u;
L_7d5579: /* 7d5579: mov eax, dword ptr [0xb83b30] */
  eax = R32((uint32_t)(0xb83b30u));
/* 7d557e: mov ecx, 0xb83b30 */
  ecx = 0xb83b30u;
/* 7d5583: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5586u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5586: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5589: je 0x7d55b8 */
  if (zf) goto L_7d55b8;
L_7d558b: /* 7d558b: mov edx, dword ptr [0xb83b30] */
  edx = R32((uint32_t)(0xb83b30u));
/* 7d5591: mov ecx, 0xb83b30 */
  ecx = 0xb83b30u;
/* 7d5596: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5599u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5599: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7d559b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d559c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d55a1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d55a3: push 0xad7a90 */
  { uint32_t v = 0xad7a90u; esp -= 4; W32(esp, v); }
/* 7d55a8: push 0xad7ab0 */
  { uint32_t v = 0xad7ab0u; esp -= 4; W32(esp, v); }
/* 7d55ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d55ae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d55b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d55b0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d55b3: mov edi, 1 */
  edi = 0x1u;
L_7d55b8: /* 7d55b8: mov edx, dword ptr [0xb832e0] */
  edx = R32((uint32_t)(0xb832e0u));
/* 7d55be: mov ecx, 0xb832e0 */
  ecx = 0xb832e0u;
/* 7d55c3: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d55c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d55c6: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d55c9: je 0x7d55f8 */
  if (zf) goto L_7d55f8;
L_7d55cb: /* 7d55cb: mov eax, dword ptr [0xb832e0] */
  eax = R32((uint32_t)(0xb832e0u));
/* 7d55d0: mov ecx, 0xb832e0 */
  ecx = 0xb832e0u;
/* 7d55d5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d55d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d55d8: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d55de: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d55e0: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d55e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d55e3: push 0xad7b10 */
  { uint32_t v = 0xad7b10u; esp -= 4; W32(esp, v); }
/* 7d55e8: push 0xad7b38 */
  { uint32_t v = 0xad7b38u; esp -= 4; W32(esp, v); }
/* 7d55ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d55ee: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d55f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d55f0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d55f3: mov edi, 1 */
  edi = 0x1u;
L_7d55f8: /* 7d55f8: mov eax, dword ptr [0xb82880] */
  eax = R32((uint32_t)(0xb82880u));
/* 7d55fd: mov ecx, 0xb82880 */
  ecx = 0xb82880u;
/* 7d5602: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5605: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5608: je 0x7d5637 */
  if (zf) goto L_7d5637;
L_7d560a: /* 7d560a: mov edx, dword ptr [0xb82880] */
  edx = R32((uint32_t)(0xb82880u));
/* 7d5610: mov ecx, 0xb82880 */
  ecx = 0xb82880u;
/* 7d5615: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5618u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5618: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7d561a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d561b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5620: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5622: push 0xad7b98 */
  { uint32_t v = 0xad7b98u; esp -= 4; W32(esp, v); }
/* 7d5627: push 0xad7bb8 */
  { uint32_t v = 0xad7bb8u; esp -= 4; W32(esp, v); }
/* 7d562c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d562d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d562fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d562f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5632: mov edi, 1 */
  edi = 0x1u;
L_7d5637: /* 7d5637: mov edx, dword ptr [0xb82db0] */
  edx = R32((uint32_t)(0xb82db0u));
/* 7d563d: mov ecx, 0xb82db0 */
  ecx = 0xb82db0u;
/* 7d5642: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5645: cmp eax, 0x114 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d564a: je 0x7d567c */
  if (zf) goto L_7d567c;
L_7d564c: /* 7d564c: mov eax, dword ptr [0xb82db0] */
  eax = R32((uint32_t)(0xb82db0u));
/* 7d5651: mov ecx, 0xb82db0 */
  ecx = 0xb82db0u;
/* 7d5656: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5659u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5659: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d565f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5661: push 0x114 */
  { uint32_t v = 0x114u; esp -= 4; W32(esp, v); }
/* 7d5666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5667: push 0xad7c18 */
  { uint32_t v = 0xad7c18u; esp -= 4; W32(esp, v); }
/* 7d566c: push 0xad7c30 */
  { uint32_t v = 0xad7c30u; esp -= 4; W32(esp, v); }
/* 7d5671: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5672: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5674u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5674: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5677: mov edi, 1 */
  edi = 0x1u;
L_7d567c: /* 7d567c: mov eax, dword ptr [0xb80c70] */
  eax = R32((uint32_t)(0xb80c70u));
/* 7d5681: mov ecx, 0xb80c70 */
  ecx = 0xb80c70u;
/* 7d5686: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5689u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5689: cmp eax, 0x354 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x354u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d568e: je 0x7d56c0 */
  if (zf) goto L_7d56c0;
L_7d5690: /* 7d5690: mov edx, dword ptr [0xb80c70] */
  edx = R32((uint32_t)(0xb80c70u));
/* 7d5696: mov ecx, 0xb80c70 */
  ecx = 0xb80c70u;
/* 7d569b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d569eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d569e: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 7d56a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d56a4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d56a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d56ab: push 0xad7c90 */
  { uint32_t v = 0xad7c90u; esp -= 4; W32(esp, v); }
/* 7d56b0: push 0xad7cc0 */
  { uint32_t v = 0xad7cc0u; esp -= 4; W32(esp, v); }
/* 7d56b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d56b6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d56b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d56b8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d56bb: mov edi, 1 */
  edi = 0x1u;
L_7d56c0: /* 7d56c0: mov edx, dword ptr [0xb7ca70] */
  edx = R32((uint32_t)(0xb7ca70u));
/* 7d56c6: mov ecx, 0xb7ca70 */
  ecx = 0xb7ca70u;
/* 7d56cb: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d56ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d56ce: cmp eax, 0x88 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d56d3: je 0x7d5705 */
  if (zf) goto L_7d5705;
L_7d56d5: /* 7d56d5: mov eax, dword ptr [0xb7ca70] */
  eax = R32((uint32_t)(0xb7ca70u));
/* 7d56da: mov ecx, 0xb7ca70 */
  ecx = 0xb7ca70u;
/* 7d56df: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d56e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d56e2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d56e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d56ea: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 7d56ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d56f0: push 0xad7d20 */
  { uint32_t v = 0xad7d20u; esp -= 4; W32(esp, v); }
/* 7d56f5: push 0xad7d40 */
  { uint32_t v = 0xad7d40u; esp -= 4; W32(esp, v); }
/* 7d56fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d56fb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d56fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d56fd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5700: mov edi, 1 */
  edi = 0x1u;
L_7d5705: /* 7d5705: mov eax, dword ptr [0xb7c540] */
  eax = R32((uint32_t)(0xb7c540u));
/* 7d570a: mov ecx, 0xb7c540 */
  ecx = 0xb7c540u;
/* 7d570f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5712u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5712: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5715: je 0x7d5744 */
  if (zf) goto L_7d5744;
L_7d5717: /* 7d5717: mov edx, dword ptr [0xb7c540] */
  edx = R32((uint32_t)(0xb7c540u));
/* 7d571d: mov ecx, 0xb7c540 */
  ecx = 0xb7c540u;
/* 7d5722: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5725: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7d5727: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5728: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d572d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d572f: push 0xad7da0 */
  { uint32_t v = 0xad7da0u; esp -= 4; W32(esp, v); }
/* 7d5734: push 0xad7dc0 */
  { uint32_t v = 0xad7dc0u; esp -= 4; W32(esp, v); }
/* 7d5739: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d573a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d573cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d573c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d573f: mov edi, 1 */
  edi = 0x1u;
L_7d5744: /* 7d5744: mov edx, dword ptr [0xb79300] */
  edx = R32((uint32_t)(0xb79300u));
/* 7d574a: mov ecx, 0xb79300 */
  ecx = 0xb79300u;
/* 7d574f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5752u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5752: cmp eax, 0x5a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5757: je 0x7d5789 */
  if (zf) goto L_7d5789;
L_7d5759: /* 7d5759: mov eax, dword ptr [0xb79300] */
  eax = R32((uint32_t)(0xb79300u));
/* 7d575e: mov ecx, 0xb79300 */
  ecx = 0xb79300u;
/* 7d5763: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5766u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5766: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d576c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d576e: push 0x5a0 */
  { uint32_t v = 0x5a0u; esp -= 4; W32(esp, v); }
/* 7d5773: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5774: push 0xad7e20 */
  { uint32_t v = 0xad7e20u; esp -= 4; W32(esp, v); }
/* 7d5779: push 0xad7e40 */
  { uint32_t v = 0xad7e40u; esp -= 4; W32(esp, v); }
/* 7d577e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d577f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5781u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5781: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5784: mov edi, 1 */
  edi = 0x1u;
L_7d5789: /* 7d5789: mov eax, dword ptr [0xb78ab0] */
  eax = R32((uint32_t)(0xb78ab0u));
/* 7d578e: mov ecx, 0xb78ab0 */
  ecx = 0xb78ab0u;
/* 7d5793: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5796u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5796: cmp eax, 0x9c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d579b: je 0x7d57cd */
  if (zf) goto L_7d57cd;
L_7d579d: /* 7d579d: mov edx, dword ptr [0xb78ab0] */
  edx = R32((uint32_t)(0xb78ab0u));
/* 7d57a3: mov ecx, 0xb78ab0 */
  ecx = 0xb78ab0u;
/* 7d57a8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d57abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d57ab: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 7d57b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d57b1: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d57b6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d57b8: push 0xad7ea0 */
  { uint32_t v = 0xad7ea0u; esp -= 4; W32(esp, v); }
/* 7d57bd: push 0xad7ec0 */
  { uint32_t v = 0xad7ec0u; esp -= 4; W32(esp, v); }
/* 7d57c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d57c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d57c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d57c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d57c8: mov edi, 1 */
  edi = 0x1u;
L_7d57cd: /* 7d57cd: mov edx, dword ptr [0xb72fb8] */
  edx = R32((uint32_t)(0xb72fb8u));
/* 7d57d3: mov ecx, 0xb72fb8 */
  ecx = 0xb72fb8u;
/* 7d57d8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d57dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d57db: cmp eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d57e0: je 0x7d5812 */
  if (zf) goto L_7d5812;
L_7d57e2: /* 7d57e2: mov eax, dword ptr [0xb72fb8] */
  eax = R32((uint32_t)(0xb72fb8u));
/* 7d57e7: mov ecx, 0xb72fb8 */
  ecx = 0xb72fb8u;
/* 7d57ec: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d57efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d57ef: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d57f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d57f7: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 7d57fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d57fd: push 0xad7f20 */
  { uint32_t v = 0xad7f20u; esp -= 4; W32(esp, v); }
/* 7d5802: push 0xad7f40 */
  { uint32_t v = 0xad7f40u; esp -= 4; W32(esp, v); }
/* 7d5807: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5808: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d580au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d580a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d580d: mov edi, 1 */
  edi = 0x1u;
L_7d5812: /* 7d5812: mov eax, dword ptr [0xb72a88] */
  eax = R32((uint32_t)(0xb72a88u));
/* 7d5817: mov ecx, 0xb72a88 */
  ecx = 0xb72a88u;
/* 7d581c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d581fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d581f: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5824: je 0x7d5856 */
  if (zf) goto L_7d5856;
L_7d5826: /* 7d5826: mov edx, dword ptr [0xb72a88] */
  edx = R32((uint32_t)(0xb72a88u));
/* 7d582c: mov ecx, 0xb72a88 */
  ecx = 0xb72a88u;
/* 7d5831: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5834u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5834: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d583a: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d583f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5841: push 0xad7fa0 */
  { uint32_t v = 0xad7fa0u; esp -= 4; W32(esp, v); }
/* 7d5846: push 0xad7fc0 */
  { uint32_t v = 0xad7fc0u; esp -= 4; W32(esp, v); }
/* 7d584b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d584c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d584eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d584e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5851: mov edi, 1 */
  edi = 0x1u;
L_7d5856: /* 7d5856: mov edx, dword ptr [0xb64648] */
  edx = R32((uint32_t)(0xb64648u));
/* 7d585c: mov ecx, 0xb64648 */
  ecx = 0xb64648u;
/* 7d5861: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5864u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5864: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5869: je 0x7d589b */
  if (zf) goto L_7d589b;
L_7d586b: /* 7d586b: mov eax, dword ptr [0xb64648] */
  eax = R32((uint32_t)(0xb64648u));
/* 7d5870: mov ecx, 0xb64648 */
  ecx = 0xb64648u;
/* 7d5875: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5878: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d587e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5880: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5885: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5886: push 0xad8020 */
  { uint32_t v = 0xad8020u; esp -= 4; W32(esp, v); }
/* 7d588b: push 0xad8038 */
  { uint32_t v = 0xad8038u; esp -= 4; W32(esp, v); }
/* 7d5890: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5891: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5893: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5896: mov edi, 1 */
  edi = 0x1u;
L_7d589b: /* 7d589b: mov eax, dword ptr [0xb72558] */
  eax = R32((uint32_t)(0xb72558u));
/* 7d58a0: mov ecx, 0xb72558 */
  ecx = 0xb72558u;
/* 7d58a5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d58a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d58a8: cmp eax, 0x450 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x450u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d58ad: je 0x7d58df */
  if (zf) goto L_7d58df;
L_7d58af: /* 7d58af: mov edx, dword ptr [0xb72558] */
  edx = R32((uint32_t)(0xb72558u));
/* 7d58b5: mov ecx, 0xb72558 */
  ecx = 0xb72558u;
/* 7d58ba: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d58bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d58bd: push 0x450 */
  { uint32_t v = 0x450u; esp -= 4; W32(esp, v); }
/* 7d58c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d58c3: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d58c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d58ca: push 0xad8098 */
  { uint32_t v = 0xad8098u; esp -= 4; W32(esp, v); }
/* 7d58cf: push 0xad80b0 */
  { uint32_t v = 0xad80b0u; esp -= 4; W32(esp, v); }
/* 7d58d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d58d5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d58d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d58d7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d58da: mov edi, 1 */
  edi = 0x1u;
L_7d58df: /* 7d58df: mov edx, dword ptr [0xb602d8] */
  edx = R32((uint32_t)(0xb602d8u));
/* 7d58e5: mov ecx, 0xb602d8 */
  ecx = 0xb602d8u;
/* 7d58ea: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d58edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d58ed: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d58f2: je 0x7d5924 */
  if (zf) goto L_7d5924;
L_7d58f4: /* 7d58f4: mov eax, dword ptr [0xb602d8] */
  eax = R32((uint32_t)(0xb602d8u));
/* 7d58f9: mov ecx, 0xb602d8 */
  ecx = 0xb602d8u;
/* 7d58fe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5901u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5901: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5907: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5909: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d590e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d590f: push 0xad8110 */
  { uint32_t v = 0xad8110u; esp -= 4; W32(esp, v); }
/* 7d5914: push 0xad8138 */
  { uint32_t v = 0xad8138u; esp -= 4; W32(esp, v); }
/* 7d5919: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d591a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d591cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d591c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d591f: mov edi, 1 */
  edi = 0x1u;
L_7d5924: /* 7d5924: mov eax, dword ptr [0xb72028] */
  eax = R32((uint32_t)(0xb72028u));
/* 7d5929: mov ecx, 0xb72028 */
  ecx = 0xb72028u;
/* 7d592e: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5931u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5931: cmp eax, 0x3c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5936: je 0x7d5968 */
  if (zf) goto L_7d5968;
L_7d5938: /* 7d5938: mov edx, dword ptr [0xb72028] */
  edx = R32((uint32_t)(0xb72028u));
/* 7d593e: mov ecx, 0xb72028 */
  ecx = 0xb72028u;
/* 7d5943: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5946u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5946: push 0x3c0 */
  { uint32_t v = 0x3c0u; esp -= 4; W32(esp, v); }
/* 7d594b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d594c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5951: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5953: push 0xad8198 */
  { uint32_t v = 0xad8198u; esp -= 4; W32(esp, v); }
/* 7d5958: push 0xad81b0 */
  { uint32_t v = 0xad81b0u; esp -= 4; W32(esp, v); }
/* 7d595d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d595e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5960u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5960: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5963: mov edi, 1 */
  edi = 0x1u;
L_7d5968: /* 7d5968: mov edx, dword ptr [0xb71af8] */
  edx = R32((uint32_t)(0xb71af8u));
/* 7d596e: mov ecx, 0xb71af8 */
  ecx = 0xb71af8u;
/* 7d5973: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5976u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5976: cmp eax, 0x388 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d597b: je 0x7d59ad */
  if (zf) goto L_7d59ad;
L_7d597d: /* 7d597d: mov eax, dword ptr [0xb71af8] */
  eax = R32((uint32_t)(0xb71af8u));
/* 7d5982: mov ecx, 0xb71af8 */
  ecx = 0xb71af8u;
/* 7d5987: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d598au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d598a: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5990: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5992: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 7d5997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5998: push 0xad8210 */
  { uint32_t v = 0xad8210u; esp -= 4; W32(esp, v); }
/* 7d599d: push 0xad8238 */
  { uint32_t v = 0xad8238u; esp -= 4; W32(esp, v); }
/* 7d59a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d59a3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d59a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59a5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d59a8: mov edi, 1 */
  edi = 0x1u;
L_7d59ad: /* 7d59ad: mov eax, dword ptr [0xb68ee8] */
  eax = R32((uint32_t)(0xb68ee8u));
/* 7d59b2: mov ecx, 0xb68ee8 */
  ecx = 0xb68ee8u;
/* 7d59b7: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d59bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59ba: cmp eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d59bf: je 0x7d59f1 */
  if (zf) goto L_7d59f1;
L_7d59c1: /* 7d59c1: mov edx, dword ptr [0xb68ee8] */
  edx = R32((uint32_t)(0xb68ee8u));
/* 7d59c7: mov ecx, 0xb68ee8 */
  ecx = 0xb68ee8u;
/* 7d59cc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d59cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59cf: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 7d59d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d59d5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d59da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d59dc: push 0xad8298 */
  { uint32_t v = 0xad8298u; esp -= 4; W32(esp, v); }
/* 7d59e1: push 0xad82a8 */
  { uint32_t v = 0xad82a8u; esp -= 4; W32(esp, v); }
/* 7d59e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d59e7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d59e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59e9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d59ec: mov edi, 1 */
  edi = 0x1u;
L_7d59f1: /* 7d59f1: mov edx, dword ptr [0xb715c8] */
  edx = R32((uint32_t)(0xb715c8u));
/* 7d59f7: mov ecx, 0xb715c8 */
  ecx = 0xb715c8u;
/* 7d59fc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d59ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d59ff: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5a04: je 0x7d5a36 */
  if (zf) goto L_7d5a36;
L_7d5a06: /* 7d5a06: mov eax, dword ptr [0xb715c8] */
  eax = R32((uint32_t)(0xb715c8u));
/* 7d5a0b: mov ecx, 0xb715c8 */
  ecx = 0xb715c8u;
/* 7d5a10: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5a13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a13: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5a19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5a1b: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5a21: push 0xad8308 */
  { uint32_t v = 0xad8308u; esp -= 4; W32(esp, v); }
/* 7d5a26: push 0xad8330 */
  { uint32_t v = 0xad8330u; esp -= 4; W32(esp, v); }
/* 7d5a2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5a2c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5a2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a2e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5a31: mov edi, 1 */
  edi = 0x1u;
L_7d5a36: /* 7d5a36: mov eax, dword ptr [0xb71098] */
  eax = R32((uint32_t)(0xb71098u));
/* 7d5a3b: mov ecx, 0xb71098 */
  ecx = 0xb71098u;
/* 7d5a40: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5a43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a43: cmp eax, 0x34c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5a48: je 0x7d5a7a */
  if (zf) goto L_7d5a7a;
L_7d5a4a: /* 7d5a4a: mov edx, dword ptr [0xb71098] */
  edx = R32((uint32_t)(0xb71098u));
/* 7d5a50: mov ecx, 0xb71098 */
  ecx = 0xb71098u;
/* 7d5a55: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5a58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a58: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 7d5a5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5a5e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5a63: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5a65: push 0xad8390 */
  { uint32_t v = 0xad8390u; esp -= 4; W32(esp, v); }
/* 7d5a6a: push 0xad83b8 */
  { uint32_t v = 0xad83b8u; esp -= 4; W32(esp, v); }
/* 7d5a6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5a70: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5a72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a72: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5a75: mov edi, 1 */
  edi = 0x1u;
L_7d5a7a: /* 7d5a7a: mov edx, dword ptr [0xb70b68] */
  edx = R32((uint32_t)(0xb70b68u));
/* 7d5a80: mov ecx, 0xb70b68 */
  ecx = 0xb70b68u;
/* 7d5a85: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5a88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a88: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5a8d: je 0x7d5abf */
  if (zf) goto L_7d5abf;
L_7d5a8f: /* 7d5a8f: mov eax, dword ptr [0xb70b68] */
  eax = R32((uint32_t)(0xb70b68u));
/* 7d5a94: mov ecx, 0xb70b68 */
  ecx = 0xb70b68u;
/* 7d5a99: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5a9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5a9c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5aa2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5aa4: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5aa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5aaa: push 0xad8418 */
  { uint32_t v = 0xad8418u; esp -= 4; W32(esp, v); }
/* 7d5aaf: push 0xad8448 */
  { uint32_t v = 0xad8448u; esp -= 4; W32(esp, v); }
/* 7d5ab4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5ab5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5ab7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ab7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5aba: mov edi, 1 */
  edi = 0x1u;
L_7d5abf: /* 7d5abf: mov eax, dword ptr [0xb70638] */
  eax = R32((uint32_t)(0xb70638u));
/* 7d5ac4: mov ecx, 0xb70638 */
  ecx = 0xb70638u;
/* 7d5ac9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5accu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5acc: cmp eax, 0x398 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5ad1: je 0x7d5b03 */
  if (zf) goto L_7d5b03;
L_7d5ad3: /* 7d5ad3: mov edx, dword ptr [0xb70638] */
  edx = R32((uint32_t)(0xb70638u));
/* 7d5ad9: mov ecx, 0xb70638 */
  ecx = 0xb70638u;
/* 7d5ade: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5ae1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ae1: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 7d5ae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5ae7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5aec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5aee: push 0xad84a8 */
  { uint32_t v = 0xad84a8u; esp -= 4; W32(esp, v); }
/* 7d5af3: push 0xad84c0 */
  { uint32_t v = 0xad84c0u; esp -= 4; W32(esp, v); }
/* 7d5af8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5af9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5afbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5afb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5afe: mov edi, 1 */
  edi = 0x1u;
L_7d5b03: /* 7d5b03: mov edx, dword ptr [0xb66fc8] */
  edx = R32((uint32_t)(0xb66fc8u));
/* 7d5b09: mov ecx, 0xb66fc8 */
  ecx = 0xb66fc8u;
/* 7d5b0e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5b11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b11: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5b16: je 0x7d5b48 */
  if (zf) goto L_7d5b48;
L_7d5b18: /* 7d5b18: mov eax, dword ptr [0xb66fc8] */
  eax = R32((uint32_t)(0xb66fc8u));
/* 7d5b1d: mov ecx, 0xb66fc8 */
  ecx = 0xb66fc8u;
/* 7d5b22: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5b25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b25: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5b2b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5b2d: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5b32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5b33: push 0xad8520 */
  { uint32_t v = 0xad8520u; esp -= 4; W32(esp, v); }
/* 7d5b38: push 0xad8548 */
  { uint32_t v = 0xad8548u; esp -= 4; W32(esp, v); }
/* 7d5b3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5b3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5b40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b40: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5b43: mov edi, 1 */
  edi = 0x1u;
L_7d5b48: /* 7d5b48: mov eax, dword ptr [0xb70108] */
  eax = R32((uint32_t)(0xb70108u));
/* 7d5b4d: mov ecx, 0xb70108 */
  ecx = 0xb70108u;
/* 7d5b52: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5b55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b55: cmp eax, 0x3bc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5b5a: je 0x7d5b8c */
  if (zf) goto L_7d5b8c;
L_7d5b5c: /* 7d5b5c: mov edx, dword ptr [0xb70108] */
  edx = R32((uint32_t)(0xb70108u));
/* 7d5b62: mov ecx, 0xb70108 */
  ecx = 0xb70108u;
/* 7d5b67: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5b6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b6a: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 7d5b6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5b70: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5b75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5b77: push 0xad85a8 */
  { uint32_t v = 0xad85a8u; esp -= 4; W32(esp, v); }
/* 7d5b7c: push 0xad85c0 */
  { uint32_t v = 0xad85c0u; esp -= 4; W32(esp, v); }
/* 7d5b81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5b82: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5b84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b84: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5b87: mov edi, 1 */
  edi = 0x1u;
L_7d5b8c: /* 7d5b8c: mov edx, dword ptr [0xb6c2c8] */
  edx = R32((uint32_t)(0xb6c2c8u));
/* 7d5b92: mov ecx, 0xb6c2c8 */
  ecx = 0xb6c2c8u;
/* 7d5b97: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5b9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5b9a: cmp eax, 0x3bc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5b9f: je 0x7d5bd1 */
  if (zf) goto L_7d5bd1;
L_7d5ba1: /* 7d5ba1: mov eax, dword ptr [0xb6c2c8] */
  eax = R32((uint32_t)(0xb6c2c8u));
/* 7d5ba6: mov ecx, 0xb6c2c8 */
  ecx = 0xb6c2c8u;
/* 7d5bab: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5baeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5bae: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5bb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5bb6: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 7d5bbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5bbc: push 0xad8620 */
  { uint32_t v = 0xad8620u; esp -= 4; W32(esp, v); }
/* 7d5bc1: push 0xad8630 */
  { uint32_t v = 0xad8630u; esp -= 4; W32(esp, v); }
/* 7d5bc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5bc7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5bc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5bc9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5bcc: mov edi, 1 */
  edi = 0x1u;
L_7d5bd1: /* 7d5bd1: mov eax, dword ptr [0xb6fbd8] */
  eax = R32((uint32_t)(0xb6fbd8u));
/* 7d5bd6: mov ecx, 0xb6fbd8 */
  ecx = 0xb6fbd8u;
/* 7d5bdb: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5bdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5bde: cmp eax, 0x3b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5be3: je 0x7d5c15 */
  if (zf) goto L_7d5c15;
L_7d5be5: /* 7d5be5: mov edx, dword ptr [0xb6fbd8] */
  edx = R32((uint32_t)(0xb6fbd8u));
/* 7d5beb: mov ecx, 0xb6fbd8 */
  ecx = 0xb6fbd8u;
/* 7d5bf0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5bf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5bf3: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 7d5bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5bf9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5bfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5c00: push 0xad8690 */
  { uint32_t v = 0xad8690u; esp -= 4; W32(esp, v); }
/* 7d5c05: push 0xad86a8 */
  { uint32_t v = 0xad86a8u; esp -= 4; W32(esp, v); }
/* 7d5c0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5c0b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5c0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c0d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5c10: mov edi, 1 */
  edi = 0x1u;
L_7d5c15: /* 7d5c15: mov edx, dword ptr [0xb6bd98] */
  edx = R32((uint32_t)(0xb6bd98u));
/* 7d5c1b: mov ecx, 0xb6bd98 */
  ecx = 0xb6bd98u;
/* 7d5c20: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5c23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c23: cmp eax, 0x3b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5c28: je 0x7d5c5a */
  if (zf) goto L_7d5c5a;
L_7d5c2a: /* 7d5c2a: mov eax, dword ptr [0xb6bd98] */
  eax = R32((uint32_t)(0xb6bd98u));
/* 7d5c2f: mov ecx, 0xb6bd98 */
  ecx = 0xb6bd98u;
/* 7d5c34: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5c37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c37: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5c3d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5c3f: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 7d5c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5c45: push 0xad8708 */
  { uint32_t v = 0xad8708u; esp -= 4; W32(esp, v); }
/* 7d5c4a: push 0xad8718 */
  { uint32_t v = 0xad8718u; esp -= 4; W32(esp, v); }
/* 7d5c4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5c50: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5c52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c52: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5c55: mov edi, 1 */
  edi = 0x1u;
L_7d5c5a: /* 7d5c5a: mov eax, dword ptr [0xb60808] */
  eax = R32((uint32_t)(0xb60808u));
/* 7d5c5f: mov ecx, 0xb60808 */
  ecx = 0xb60808u;
/* 7d5c64: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5c67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c67: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5c6c: je 0x7d5c9e */
  if (zf) goto L_7d5c9e;
L_7d5c6e: /* 7d5c6e: mov edx, dword ptr [0xb60808] */
  edx = R32((uint32_t)(0xb60808u));
/* 7d5c74: mov ecx, 0xb60808 */
  ecx = 0xb60808u;
/* 7d5c79: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5c7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c7c: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d5c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5c82: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5c87: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5c89: push 0xad8778 */
  { uint32_t v = 0xad8778u; esp -= 4; W32(esp, v); }
/* 7d5c8e: push 0xad87a8 */
  { uint32_t v = 0xad87a8u; esp -= 4; W32(esp, v); }
/* 7d5c93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5c94: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5c96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5c96: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5c99: mov edi, 1 */
  edi = 0x1u;
L_7d5c9e: /* 7d5c9e: mov edx, dword ptr [0xb6f6a8] */
  edx = R32((uint32_t)(0xb6f6a8u));
/* 7d5ca4: mov ecx, 0xb6f6a8 */
  ecx = 0xb6f6a8u;
/* 7d5ca9: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5cacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5cac: cmp eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5cb1: je 0x7d5ce3 */
  if (zf) goto L_7d5ce3;
L_7d5cb3: /* 7d5cb3: mov eax, dword ptr [0xb6f6a8] */
  eax = R32((uint32_t)(0xb6f6a8u));
/* 7d5cb8: mov ecx, 0xb6f6a8 */
  ecx = 0xb6f6a8u;
/* 7d5cbd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5cc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5cc0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5cc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5cc8: push 0x3b8 */
  { uint32_t v = 0x3b8u; esp -= 4; W32(esp, v); }
/* 7d5ccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5cce: push 0xad8808 */
  { uint32_t v = 0xad8808u; esp -= 4; W32(esp, v); }
/* 7d5cd3: push 0xad8828 */
  { uint32_t v = 0xad8828u; esp -= 4; W32(esp, v); }
/* 7d5cd8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5cd9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5cdbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5cdb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5cde: mov edi, 1 */
  edi = 0x1u;
L_7d5ce3: /* 7d5ce3: mov eax, dword ptr [0xb6dcb8] */
  eax = R32((uint32_t)(0xb6dcb8u));
/* 7d5ce8: mov ecx, 0xb6dcb8 */
  ecx = 0xb6dcb8u;
/* 7d5ced: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5cf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5cf0: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5cf5: je 0x7d5d27 */
  if (zf) goto L_7d5d27;
L_7d5cf7: /* 7d5cf7: mov edx, dword ptr [0xb6dcb8] */
  edx = R32((uint32_t)(0xb6dcb8u));
/* 7d5cfd: mov ecx, 0xb6dcb8 */
  ecx = 0xb6dcb8u;
/* 7d5d02: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5d05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d05: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d5d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5d0b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5d10: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5d12: push 0xad8888 */
  { uint32_t v = 0xad8888u; esp -= 4; W32(esp, v); }
/* 7d5d17: push 0xad8898 */
  { uint32_t v = 0xad8898u; esp -= 4; W32(esp, v); }
/* 7d5d1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5d1d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5d1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d1f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5d22: mov edi, 1 */
  edi = 0x1u;
L_7d5d27: /* 7d5d27: mov edx, dword ptr [0xb6cd28] */
  edx = R32((uint32_t)(0xb6cd28u));
/* 7d5d2d: mov ecx, 0xb6cd28 */
  ecx = 0xb6cd28u;
/* 7d5d32: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5d35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d35: cmp eax, 0x398 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5d3a: je 0x7d5d6c */
  if (zf) goto L_7d5d6c;
L_7d5d3c: /* 7d5d3c: mov eax, dword ptr [0xb6cd28] */
  eax = R32((uint32_t)(0xb6cd28u));
/* 7d5d41: mov ecx, 0xb6cd28 */
  ecx = 0xb6cd28u;
/* 7d5d46: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5d49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d49: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5d4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5d51: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 7d5d56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5d57: push 0xad88f8 */
  { uint32_t v = 0xad88f8u; esp -= 4; W32(esp, v); }
/* 7d5d5c: push 0xad8908 */
  { uint32_t v = 0xad8908u; esp -= 4; W32(esp, v); }
/* 7d5d61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5d62: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5d64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d64: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5d67: mov edi, 1 */
  edi = 0x1u;
L_7d5d6c: /* 7d5d6c: mov eax, dword ptr [0xb6f178] */
  eax = R32((uint32_t)(0xb6f178u));
/* 7d5d71: mov ecx, 0xb6f178 */
  ecx = 0xb6f178u;
/* 7d5d76: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5d79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d79: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5d7e: je 0x7d5db0 */
  if (zf) goto L_7d5db0;
L_7d5d80: /* 7d5d80: mov edx, dword ptr [0xb6f178] */
  edx = R32((uint32_t)(0xb6f178u));
/* 7d5d86: mov ecx, 0xb6f178 */
  ecx = 0xb6f178u;
/* 7d5d8b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5d8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5d8e: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d5d93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5d94: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5d99: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5d9b: push 0xad8968 */
  { uint32_t v = 0xad8968u; esp -= 4; W32(esp, v); }
/* 7d5da0: push 0xad8998 */
  { uint32_t v = 0xad8998u; esp -= 4; W32(esp, v); }
/* 7d5da5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5da6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5da8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5da8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5dab: mov edi, 1 */
  edi = 0x1u;
L_7d5db0: /* 7d5db0: mov edx, dword ptr [0xb6ec48] */
  edx = R32((uint32_t)(0xb6ec48u));
/* 7d5db6: mov ecx, 0xb6ec48 */
  ecx = 0xb6ec48u;
/* 7d5dbb: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5dbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5dbe: cmp eax, 0x470 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x470u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5dc3: je 0x7d5df5 */
  if (zf) goto L_7d5df5;
L_7d5dc5: /* 7d5dc5: mov eax, dword ptr [0xb6ec48] */
  eax = R32((uint32_t)(0xb6ec48u));
/* 7d5dca: mov ecx, 0xb6ec48 */
  ecx = 0xb6ec48u;
/* 7d5dcf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5dd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5dd2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5dd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5dda: push 0x470 */
  { uint32_t v = 0x470u; esp -= 4; W32(esp, v); }
/* 7d5ddf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5de0: push 0xad89f8 */
  { uint32_t v = 0xad89f8u; esp -= 4; W32(esp, v); }
/* 7d5de5: push 0xad8a18 */
  { uint32_t v = 0xad8a18u; esp -= 4; W32(esp, v); }
/* 7d5dea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5deb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5dedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ded: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5df0: mov edi, 1 */
  edi = 0x1u;
L_7d5df5: /* 7d5df5: mov eax, dword ptr [0xb6e1e8] */
  eax = R32((uint32_t)(0xb6e1e8u));
/* 7d5dfa: mov ecx, 0xb6e1e8 */
  ecx = 0xb6e1e8u;
/* 7d5dff: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5e02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e02: cmp eax, 0x438 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5e07: je 0x7d5e39 */
  if (zf) goto L_7d5e39;
L_7d5e09: /* 7d5e09: mov edx, dword ptr [0xb6e1e8] */
  edx = R32((uint32_t)(0xb6e1e8u));
/* 7d5e0f: mov ecx, 0xb6e1e8 */
  ecx = 0xb6e1e8u;
/* 7d5e14: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5e17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e17: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 7d5e1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5e1d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5e22: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5e24: push 0xad8a78 */
  { uint32_t v = 0xad8a78u; esp -= 4; W32(esp, v); }
/* 7d5e29: push 0xad8a98 */
  { uint32_t v = 0xad8a98u; esp -= 4; W32(esp, v); }
/* 7d5e2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5e2f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e31: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5e34: mov edi, 1 */
  edi = 0x1u;
L_7d5e39: /* 7d5e39: mov edx, dword ptr [0xb6e718] */
  edx = R32((uint32_t)(0xb6e718u));
/* 7d5e3f: mov ecx, 0xb6e718 */
  ecx = 0xb6e718u;
/* 7d5e44: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5e47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e47: cmp eax, 0x438 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x438u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5e4c: je 0x7d5e7e */
  if (zf) goto L_7d5e7e;
L_7d5e4e: /* 7d5e4e: mov eax, dword ptr [0xb6e718] */
  eax = R32((uint32_t)(0xb6e718u));
/* 7d5e53: mov ecx, 0xb6e718 */
  ecx = 0xb6e718u;
/* 7d5e58: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5e5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e5b: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5e61: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5e63: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 7d5e68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5e69: push 0xad8af8 */
  { uint32_t v = 0xad8af8u; esp -= 4; W32(esp, v); }
/* 7d5e6e: push 0xad8b28 */
  { uint32_t v = 0xad8b28u; esp -= 4; W32(esp, v); }
/* 7d5e73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5e74: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5e76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e76: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5e79: mov edi, 1 */
  edi = 0x1u;
L_7d5e7e: /* 7d5e7e: mov eax, dword ptr [0xb6d788] */
  eax = R32((uint32_t)(0xb6d788u));
/* 7d5e83: mov ecx, 0xb6d788 */
  ecx = 0xb6d788u;
/* 7d5e88: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5e8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5e8b: cmp eax, 0x358 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5e90: je 0x7d5ec2 */
  if (zf) goto L_7d5ec2;
L_7d5e92: /* 7d5e92: mov edx, dword ptr [0xb6d788] */
  edx = R32((uint32_t)(0xb6d788u));
/* 7d5e98: mov ecx, 0xb6d788 */
  ecx = 0xb6d788u;
/* 7d5e9d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5ea0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ea0: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 7d5ea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5ea6: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5eab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5ead: push 0xad8b88 */
  { uint32_t v = 0xad8b88u; esp -= 4; W32(esp, v); }
/* 7d5eb2: push 0xad8bb0 */
  { uint32_t v = 0xad8bb0u; esp -= 4; W32(esp, v); }
/* 7d5eb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5eb8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5ebau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5eba: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5ebd: mov edi, 1 */
  edi = 0x1u;
L_7d5ec2: /* 7d5ec2: mov edx, dword ptr [0xb6d258] */
  edx = R32((uint32_t)(0xb6d258u));
/* 7d5ec8: mov ecx, 0xb6d258 */
  ecx = 0xb6d258u;
/* 7d5ecd: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5ed0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ed0: cmp eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5ed5: je 0x7d5f07 */
  if (zf) goto L_7d5f07;
L_7d5ed7: /* 7d5ed7: mov eax, dword ptr [0xb6d258] */
  eax = R32((uint32_t)(0xb6d258u));
/* 7d5edc: mov ecx, 0xb6d258 */
  ecx = 0xb6d258u;
/* 7d5ee1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5ee4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ee4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5eea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5eec: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7d5ef1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5ef2: push 0xad8c10 */
  { uint32_t v = 0xad8c10u; esp -= 4; W32(esp, v); }
/* 7d5ef7: push 0xad8c28 */
  { uint32_t v = 0xad8c28u; esp -= 4; W32(esp, v); }
/* 7d5efc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5efd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5effu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5eff: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5f02: mov edi, 1 */
  edi = 0x1u;
L_7d5f07: /* 7d5f07: mov eax, dword ptr [0xb6c7f8] */
  eax = R32((uint32_t)(0xb6c7f8u));
/* 7d5f0c: mov ecx, 0xb6c7f8 */
  ecx = 0xb6c7f8u;
/* 7d5f11: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5f14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f14: cmp eax, 0x3e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5f19: je 0x7d5f4b */
  if (zf) goto L_7d5f4b;
L_7d5f1b: /* 7d5f1b: mov edx, dword ptr [0xb6c7f8] */
  edx = R32((uint32_t)(0xb6c7f8u));
/* 7d5f21: mov ecx, 0xb6c7f8 */
  ecx = 0xb6c7f8u;
/* 7d5f26: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5f29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f29: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 7d5f2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5f2f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5f34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5f36: push 0xad8c88 */
  { uint32_t v = 0xad8c88u; esp -= 4; W32(esp, v); }
/* 7d5f3b: push 0xad8ca0 */
  { uint32_t v = 0xad8ca0u; esp -= 4; W32(esp, v); }
/* 7d5f40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5f41: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5f43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f43: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5f46: mov edi, 1 */
  edi = 0x1u;
L_7d5f4b: /* 7d5f4b: mov edx, dword ptr [0xb6b868] */
  edx = R32((uint32_t)(0xb6b868u));
/* 7d5f51: mov ecx, 0xb6b868 */
  ecx = 0xb6b868u;
/* 7d5f56: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5f59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f59: cmp eax, 0x340 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5f5e: je 0x7d5f90 */
  if (zf) goto L_7d5f90;
L_7d5f60: /* 7d5f60: mov eax, dword ptr [0xb6b868] */
  eax = R32((uint32_t)(0xb6b868u));
/* 7d5f65: mov ecx, 0xb6b868 */
  ecx = 0xb6b868u;
/* 7d5f6a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5f6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f6d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5f73: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5f75: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 7d5f7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5f7b: push 0xad8d00 */
  { uint32_t v = 0xad8d00u; esp -= 4; W32(esp, v); }
/* 7d5f80: push 0xad8d20 */
  { uint32_t v = 0xad8d20u; esp -= 4; W32(esp, v); }
/* 7d5f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d5f86: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5f88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f88: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5f8b: mov edi, 1 */
  edi = 0x1u;
L_7d5f90: /* 7d5f90: mov eax, dword ptr [0xb6b338] */
  eax = R32((uint32_t)(0xb6b338u));
/* 7d5f95: mov ecx, 0xb6b338 */
  ecx = 0xb6b338u;
/* 7d5f9a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5f9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5f9d: cmp eax, 0x5a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5fa2: je 0x7d5fd4 */
  if (zf) goto L_7d5fd4;
L_7d5fa4: /* 7d5fa4: mov edx, dword ptr [0xb6b338] */
  edx = R32((uint32_t)(0xb6b338u));
/* 7d5faa: mov ecx, 0xb6b338 */
  ecx = 0xb6b338u;
/* 7d5faf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5fb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5fb2: push 0x5a8 */
  { uint32_t v = 0x5a8u; esp -= 4; W32(esp, v); }
/* 7d5fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d5fb8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d5fbd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d5fbf: push 0xad8d80 */
  { uint32_t v = 0xad8d80u; esp -= 4; W32(esp, v); }
/* 7d5fc4: push 0xad8d98 */
  { uint32_t v = 0xad8d98u; esp -= 4; W32(esp, v); }
/* 7d5fc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d5fca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d5fccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5fcc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d5fcf: mov edi, 1 */
  edi = 0x1u;
L_7d5fd4: /* 7d5fd4: mov edx, dword ptr [0xb6ae08] */
  edx = R32((uint32_t)(0xb6ae08u));
/* 7d5fda: mov ecx, 0xb6ae08 */
  ecx = 0xb6ae08u;
/* 7d5fdf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d5fe2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5fe2: cmp eax, 0x378 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d5fe7: je 0x7d6019 */
  if (zf) goto L_7d6019;
L_7d5fe9: /* 7d5fe9: mov eax, dword ptr [0xb6ae08] */
  eax = R32((uint32_t)(0xb6ae08u));
/* 7d5fee: mov ecx, 0xb6ae08 */
  ecx = 0xb6ae08u;
/* 7d5ff3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d5ff6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d5ff6: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d5ffc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d5ffe: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 7d6003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6004: push 0xad8df8 */
  { uint32_t v = 0xad8df8u; esp -= 4; W32(esp, v); }
/* 7d6009: push 0xad8e10 */
  { uint32_t v = 0xad8e10u; esp -= 4; W32(esp, v); }
/* 7d600e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d600f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6011: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6014: mov edi, 1 */
  edi = 0x1u;
L_7d6019: /* 7d6019: mov eax, dword ptr [0xb6a8d8] */
  eax = R32((uint32_t)(0xb6a8d8u));
/* 7d601e: mov ecx, 0xb6a8d8 */
  ecx = 0xb6a8d8u;
/* 7d6023: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6026: cmp eax, 0x7e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d602b: je 0x7d605d */
  if (zf) goto L_7d605d;
L_7d602d: /* 7d602d: mov edx, dword ptr [0xb6a8d8] */
  edx = R32((uint32_t)(0xb6a8d8u));
/* 7d6033: mov ecx, 0xb6a8d8 */
  ecx = 0xb6a8d8u;
/* 7d6038: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d603bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d603b: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 7d6040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6041: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6046: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6048: push 0xad8e70 */
  { uint32_t v = 0xad8e70u; esp -= 4; W32(esp, v); }
/* 7d604d: push 0xad8e98 */
  { uint32_t v = 0xad8e98u; esp -= 4; W32(esp, v); }
/* 7d6052: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6053: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6055u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6055: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6058: mov edi, 1 */
  edi = 0x1u;
L_7d605d: /* 7d605d: mov edx, dword ptr [0xb69e78] */
  edx = R32((uint32_t)(0xb69e78u));
/* 7d6063: mov ecx, 0xb69e78 */
  ecx = 0xb69e78u;
/* 7d6068: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d606bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d606b: cmp eax, 0x4b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6070: je 0x7d60a2 */
  if (zf) goto L_7d60a2;
L_7d6072: /* 7d6072: mov eax, dword ptr [0xb69e78] */
  eax = R32((uint32_t)(0xb69e78u));
/* 7d6077: mov ecx, 0xb69e78 */
  ecx = 0xb69e78u;
/* 7d607c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d607fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d607f: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6085: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6087: push 0x4b4 */
  { uint32_t v = 0x4b4u; esp -= 4; W32(esp, v); }
/* 7d608c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d608d: push 0xad8ef8 */
  { uint32_t v = 0xad8ef8u; esp -= 4; W32(esp, v); }
/* 7d6092: push 0xad8f10 */
  { uint32_t v = 0xad8f10u; esp -= 4; W32(esp, v); }
/* 7d6097: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6098: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d609au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d609a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d609d: mov edi, 1 */
  edi = 0x1u;
L_7d60a2: /* 7d60a2: mov eax, dword ptr [0xb6a3a8] */
  eax = R32((uint32_t)(0xb6a3a8u));
/* 7d60a7: mov ecx, 0xb6a3a8 */
  ecx = 0xb6a3a8u;
/* 7d60ac: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d60afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d60af: cmp eax, 0x4c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4c0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d60b4: je 0x7d60e6 */
  if (zf) goto L_7d60e6;
L_7d60b6: /* 7d60b6: mov edx, dword ptr [0xb6a3a8] */
  edx = R32((uint32_t)(0xb6a3a8u));
/* 7d60bc: mov ecx, 0xb6a3a8 */
  ecx = 0xb6a3a8u;
/* 7d60c1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d60c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d60c4: push 0x4c0 */
  { uint32_t v = 0x4c0u; esp -= 4; W32(esp, v); }
/* 7d60c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d60ca: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d60cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d60d1: push 0xad8f70 */
  { uint32_t v = 0xad8f70u; esp -= 4; W32(esp, v); }
/* 7d60d6: push 0xad8f90 */
  { uint32_t v = 0xad8f90u; esp -= 4; W32(esp, v); }
/* 7d60db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d60dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d60deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d60de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d60e1: mov edi, 1 */
  edi = 0x1u;
L_7d60e6: /* 7d60e6: mov edx, dword ptr [0xb69948] */
  edx = R32((uint32_t)(0xb69948u));
/* 7d60ec: mov ecx, 0xb69948 */
  ecx = 0xb69948u;
/* 7d60f1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d60f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d60f4: cmp eax, 0x3b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d60f9: je 0x7d612b */
  if (zf) goto L_7d612b;
L_7d60fb: /* 7d60fb: mov eax, dword ptr [0xb69948] */
  eax = R32((uint32_t)(0xb69948u));
/* 7d6100: mov ecx, 0xb69948 */
  ecx = 0xb69948u;
/* 7d6105: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6108: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d610e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6110: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 7d6115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6116: push 0xad8ff0 */
  { uint32_t v = 0xad8ff0u; esp -= 4; W32(esp, v); }
/* 7d611b: push 0xad9008 */
  { uint32_t v = 0xad9008u; esp -= 4; W32(esp, v); }
/* 7d6120: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6121: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6123u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6123: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6126: mov edi, 1 */
  edi = 0x1u;
L_7d612b: /* 7d612b: mov eax, dword ptr [0xb636b8] */
  eax = R32((uint32_t)(0xb636b8u));
/* 7d6130: mov ecx, 0xb636b8 */
  ecx = 0xb636b8u;
/* 7d6135: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6138u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6138: cmp eax, 0x388 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d613d: je 0x7d616f */
  if (zf) goto L_7d616f;
L_7d613f: /* 7d613f: mov edx, dword ptr [0xb636b8] */
  edx = R32((uint32_t)(0xb636b8u));
/* 7d6145: mov ecx, 0xb636b8 */
  ecx = 0xb636b8u;
/* 7d614a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d614du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d614d: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 7d6152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6153: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6158: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d615a: push 0xad9068 */
  { uint32_t v = 0xad9068u; esp -= 4; W32(esp, v); }
/* 7d615f: push 0xad9080 */
  { uint32_t v = 0xad9080u; esp -= 4; W32(esp, v); }
/* 7d6164: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6165: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6167u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6167: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d616a: mov edi, 1 */
  edi = 0x1u;
L_7d616f: /* 7d616f: mov edx, dword ptr [0xb69418] */
  edx = R32((uint32_t)(0xb69418u));
/* 7d6175: mov ecx, 0xb69418 */
  ecx = 0xb69418u;
/* 7d617a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d617du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d617d: cmp eax, 0x3a4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6182: je 0x7d61b4 */
  if (zf) goto L_7d61b4;
L_7d6184: /* 7d6184: mov eax, dword ptr [0xb69418] */
  eax = R32((uint32_t)(0xb69418u));
/* 7d6189: mov ecx, 0xb69418 */
  ecx = 0xb69418u;
/* 7d618e: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6191u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6191: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6197: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6199: push 0x3a4 */
  { uint32_t v = 0x3a4u; esp -= 4; W32(esp, v); }
/* 7d619e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d619f: push 0xad90e0 */
  { uint32_t v = 0xad90e0u; esp -= 4; W32(esp, v); }
/* 7d61a4: push 0xad90f8 */
  { uint32_t v = 0xad90f8u; esp -= 4; W32(esp, v); }
/* 7d61a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d61aa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d61acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d61ac: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d61af: mov edi, 1 */
  edi = 0x1u;
L_7d61b4: /* 7d61b4: mov eax, dword ptr [0xb689b8] */
  eax = R32((uint32_t)(0xb689b8u));
/* 7d61b9: mov ecx, 0xb689b8 */
  ecx = 0xb689b8u;
/* 7d61be: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d61c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d61c1: cmp eax, 0x378 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d61c6: je 0x7d61f8 */
  if (zf) goto L_7d61f8;
L_7d61c8: /* 7d61c8: mov edx, dword ptr [0xb689b8] */
  edx = R32((uint32_t)(0xb689b8u));
/* 7d61ce: mov ecx, 0xb689b8 */
  ecx = 0xb689b8u;
/* 7d61d3: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d61d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d61d6: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 7d61db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d61dc: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d61e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d61e3: push 0xad9158 */
  { uint32_t v = 0xad9158u; esp -= 4; W32(esp, v); }
/* 7d61e8: push 0xad9168 */
  { uint32_t v = 0xad9168u; esp -= 4; W32(esp, v); }
/* 7d61ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d61ee: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d61f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d61f0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d61f3: mov edi, 1 */
  edi = 0x1u;
L_7d61f8: /* 7d61f8: mov edx, dword ptr [0xb68488] */
  edx = R32((uint32_t)(0xb68488u));
/* 7d61fe: mov ecx, 0xb68488 */
  ecx = 0xb68488u;
/* 7d6203: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6206u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6206: cmp eax, 0x50 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6209: je 0x7d6238 */
  if (zf) goto L_7d6238;
L_7d620b: /* 7d620b: mov eax, dword ptr [0xb68488] */
  eax = R32((uint32_t)(0xb68488u));
/* 7d6210: mov ecx, 0xb68488 */
  ecx = 0xb68488u;
/* 7d6215: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6218: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d621e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6220: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7d6222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6223: push 0xad91c8 */
  { uint32_t v = 0xad91c8u; esp -= 4; W32(esp, v); }
/* 7d6228: push 0xad91e8 */
  { uint32_t v = 0xad91e8u; esp -= 4; W32(esp, v); }
/* 7d622d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d622e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6230u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6230: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6233: mov edi, 1 */
  edi = 0x1u;
L_7d6238: /* 7d6238: mov eax, dword ptr [0xb67f58] */
  eax = R32((uint32_t)(0xb67f58u));
/* 7d623d: mov ecx, 0xb67f58 */
  ecx = 0xb67f58u;
/* 7d6242: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6245u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6245: cmp eax, 0x41c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d624a: je 0x7d627c */
  if (zf) goto L_7d627c;
L_7d624c: /* 7d624c: mov edx, dword ptr [0xb67f58] */
  edx = R32((uint32_t)(0xb67f58u));
/* 7d6252: mov ecx, 0xb67f58 */
  ecx = 0xb67f58u;
/* 7d6257: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d625au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d625a: push 0x41c */
  { uint32_t v = 0x41cu; esp -= 4; W32(esp, v); }
/* 7d625f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6260: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6265: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6267: push 0xad9248 */
  { uint32_t v = 0xad9248u; esp -= 4; W32(esp, v); }
/* 7d626c: push 0xad9278 */
  { uint32_t v = 0xad9278u; esp -= 4; W32(esp, v); }
/* 7d6271: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6272: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6274u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6274: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6277: mov edi, 1 */
  edi = 0x1u;
L_7d627c: /* 7d627c: mov edx, dword ptr [0xb67a28] */
  edx = R32((uint32_t)(0xb67a28u));
/* 7d6282: mov ecx, 0xb67a28 */
  ecx = 0xb67a28u;
/* 7d6287: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d628au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d628a: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d628f: je 0x7d62c1 */
  if (zf) goto L_7d62c1;
L_7d6291: /* 7d6291: mov eax, dword ptr [0xb67a28] */
  eax = R32((uint32_t)(0xb67a28u));
/* 7d6296: mov ecx, 0xb67a28 */
  ecx = 0xb67a28u;
/* 7d629b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d629eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d629e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d62a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d62a6: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d62ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d62ac: push 0xad92d8 */
  { uint32_t v = 0xad92d8u; esp -= 4; W32(esp, v); }
/* 7d62b1: push 0xad92f8 */
  { uint32_t v = 0xad92f8u; esp -= 4; W32(esp, v); }
/* 7d62b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d62b7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d62b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d62b9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d62bc: mov edi, 1 */
  edi = 0x1u;
L_7d62c1: /* 7d62c1: mov eax, dword ptr [0xb674f8] */
  eax = R32((uint32_t)(0xb674f8u));
/* 7d62c6: mov ecx, 0xb674f8 */
  ecx = 0xb674f8u;
/* 7d62cb: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d62ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d62ce: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d62d3: je 0x7d6305 */
  if (zf) goto L_7d6305;
L_7d62d5: /* 7d62d5: mov edx, dword ptr [0xb674f8] */
  edx = R32((uint32_t)(0xb674f8u));
/* 7d62db: mov ecx, 0xb674f8 */
  ecx = 0xb674f8u;
/* 7d62e0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d62e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d62e3: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d62e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d62e9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d62ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d62f0: push 0xad9358 */
  { uint32_t v = 0xad9358u; esp -= 4; W32(esp, v); }
/* 7d62f5: push 0xad9388 */
  { uint32_t v = 0xad9388u; esp -= 4; W32(esp, v); }
/* 7d62fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d62fb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d62fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d62fd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6300: mov edi, 1 */
  edi = 0x1u;
L_7d6305: /* 7d6305: mov edx, dword ptr [0xb66568] */
  edx = R32((uint32_t)(0xb66568u));
/* 7d630b: mov ecx, 0xb66568 */
  ecx = 0xb66568u;
/* 7d6310: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6313u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6313: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6318: je 0x7d634a */
  if (zf) goto L_7d634a;
L_7d631a: /* 7d631a: mov eax, dword ptr [0xb66568] */
  eax = R32((uint32_t)(0xb66568u));
/* 7d631f: mov ecx, 0xb66568 */
  ecx = 0xb66568u;
/* 7d6324: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6327u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6327: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d632d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d632f: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d6334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6335: push 0xad93e8 */
  { uint32_t v = 0xad93e8u; esp -= 4; W32(esp, v); }
/* 7d633a: push 0xad9400 */
  { uint32_t v = 0xad9400u; esp -= 4; W32(esp, v); }
/* 7d633f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6340: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6342u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6342: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6345: mov edi, 1 */
  edi = 0x1u;
L_7d634a: /* 7d634a: mov eax, dword ptr [0xb66038] */
  eax = R32((uint32_t)(0xb66038u));
/* 7d634f: mov ecx, 0xb66038 */
  ecx = 0xb66038u;
/* 7d6354: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6357u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6357: cmp eax, 0x3c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d635c: je 0x7d638e */
  if (zf) goto L_7d638e;
L_7d635e: /* 7d635e: mov edx, dword ptr [0xb66038] */
  edx = R32((uint32_t)(0xb66038u));
/* 7d6364: mov ecx, 0xb66038 */
  ecx = 0xb66038u;
/* 7d6369: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d636cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d636c: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7d6371: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6372: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6377: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6379: push 0xad9460 */
  { uint32_t v = 0xad9460u; esp -= 4; W32(esp, v); }
/* 7d637e: push 0xad9478 */
  { uint32_t v = 0xad9478u; esp -= 4; W32(esp, v); }
/* 7d6383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6384: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6386u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6386: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6389: mov edi, 1 */
  edi = 0x1u;
L_7d638e: /* 7d638e: mov edx, dword ptr [0xb65b08] */
  edx = R32((uint32_t)(0xb65b08u));
/* 7d6394: mov ecx, 0xb65b08 */
  ecx = 0xb65b08u;
/* 7d6399: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d639cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d639c: cmp eax, 0x368 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d63a1: je 0x7d63d3 */
  if (zf) goto L_7d63d3;
L_7d63a3: /* 7d63a3: mov eax, dword ptr [0xb65b08] */
  eax = R32((uint32_t)(0xb65b08u));
/* 7d63a8: mov ecx, 0xb65b08 */
  ecx = 0xb65b08u;
/* 7d63ad: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d63b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d63b0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d63b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d63b8: push 0x368 */
  { uint32_t v = 0x368u; esp -= 4; W32(esp, v); }
/* 7d63bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d63be: push 0xad94d8 */
  { uint32_t v = 0xad94d8u; esp -= 4; W32(esp, v); }
/* 7d63c3: push 0xad94f0 */
  { uint32_t v = 0xad94f0u; esp -= 4; W32(esp, v); }
/* 7d63c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d63c9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d63cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d63cb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d63ce: mov edi, 1 */
  edi = 0x1u;
L_7d63d3: /* 7d63d3: mov eax, dword ptr [0xb655d8] */
  eax = R32((uint32_t)(0xb655d8u));
/* 7d63d8: mov ecx, 0xb655d8 */
  ecx = 0xb655d8u;
/* 7d63dd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d63e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d63e0: cmp eax, 0x570 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x570u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d63e5: je 0x7d6417 */
  if (zf) goto L_7d6417;
L_7d63e7: /* 7d63e7: mov edx, dword ptr [0xb655d8] */
  edx = R32((uint32_t)(0xb655d8u));
/* 7d63ed: mov ecx, 0xb655d8 */
  ecx = 0xb655d8u;
/* 7d63f2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d63f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d63f5: push 0x570 */
  { uint32_t v = 0x570u; esp -= 4; W32(esp, v); }
/* 7d63fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d63fb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6400: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6402: push 0xad9550 */
  { uint32_t v = 0xad9550u; esp -= 4; W32(esp, v); }
/* 7d6407: push 0xad9560 */
  { uint32_t v = 0xad9560u; esp -= 4; W32(esp, v); }
/* 7d640c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d640d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d640fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d640f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6412: mov edi, 1 */
  edi = 0x1u;
L_7d6417: /* 7d6417: mov edx, dword ptr [0xb650a8] */
  edx = R32((uint32_t)(0xb650a8u));
/* 7d641d: mov ecx, 0xb650a8 */
  ecx = 0xb650a8u;
/* 7d6422: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6425u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6425: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d642a: je 0x7d645c */
  if (zf) goto L_7d645c;
L_7d642c: /* 7d642c: mov eax, dword ptr [0xb650a8] */
  eax = R32((uint32_t)(0xb650a8u));
/* 7d6431: mov ecx, 0xb650a8 */
  ecx = 0xb650a8u;
/* 7d6436: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6439u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6439: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d643f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6441: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d6446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6447: push 0xad95c0 */
  { uint32_t v = 0xad95c0u; esp -= 4; W32(esp, v); }
/* 7d644c: push 0xad95e0 */
  { uint32_t v = 0xad95e0u; esp -= 4; W32(esp, v); }
/* 7d6451: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6452: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6454u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6454: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6457: mov edi, 1 */
  edi = 0x1u;
L_7d645c: /* 7d645c: mov eax, dword ptr [0xb64b78] */
  eax = R32((uint32_t)(0xb64b78u));
/* 7d6461: mov ecx, 0xb64b78 */
  ecx = 0xb64b78u;
/* 7d6466: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6469u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6469: cmp eax, 0x370 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d646e: je 0x7d64a0 */
  if (zf) goto L_7d64a0;
L_7d6470: /* 7d6470: mov edx, dword ptr [0xb64b78] */
  edx = R32((uint32_t)(0xb64b78u));
/* 7d6476: mov ecx, 0xb64b78 */
  ecx = 0xb64b78u;
/* 7d647b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d647eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d647e: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 7d6483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6484: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6489: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d648b: push 0xad9640 */
  { uint32_t v = 0xad9640u; esp -= 4; W32(esp, v); }
/* 7d6490: push 0xad9658 */
  { uint32_t v = 0xad9658u; esp -= 4; W32(esp, v); }
/* 7d6495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6496: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6498u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6498: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d649b: mov edi, 1 */
  edi = 0x1u;
L_7d64a0: /* 7d64a0: mov edx, dword ptr [0xb64118] */
  edx = R32((uint32_t)(0xb64118u));
/* 7d64a6: mov ecx, 0xb64118 */
  ecx = 0xb64118u;
/* 7d64ab: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d64aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d64ae: cmp eax, 0x3ac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d64b3: je 0x7d64e5 */
  if (zf) goto L_7d64e5;
L_7d64b5: /* 7d64b5: mov eax, dword ptr [0xb64118] */
  eax = R32((uint32_t)(0xb64118u));
/* 7d64ba: mov ecx, 0xb64118 */
  ecx = 0xb64118u;
/* 7d64bf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d64c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d64c2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d64c8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d64ca: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 7d64cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d64d0: push 0xad96b8 */
  { uint32_t v = 0xad96b8u; esp -= 4; W32(esp, v); }
/* 7d64d5: push 0xad96d0 */
  { uint32_t v = 0xad96d0u; esp -= 4; W32(esp, v); }
/* 7d64da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d64db: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d64ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d64dd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d64e0: mov edi, 1 */
  edi = 0x1u;
L_7d64e5: /* 7d64e5: mov eax, dword ptr [0xb63be8] */
  eax = R32((uint32_t)(0xb63be8u));
/* 7d64ea: mov ecx, 0xb63be8 */
  ecx = 0xb63be8u;
/* 7d64ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d64f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d64f2: cmp eax, 0x3ac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d64f7: je 0x7d6529 */
  if (zf) goto L_7d6529;
L_7d64f9: /* 7d64f9: mov edx, dword ptr [0xb63be8] */
  edx = R32((uint32_t)(0xb63be8u));
/* 7d64ff: mov ecx, 0xb63be8 */
  ecx = 0xb63be8u;
/* 7d6504: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6507u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6507: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 7d650c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d650d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6512: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6514: push 0xad9730 */
  { uint32_t v = 0xad9730u; esp -= 4; W32(esp, v); }
/* 7d6519: push 0xad9750 */
  { uint32_t v = 0xad9750u; esp -= 4; W32(esp, v); }
/* 7d651e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d651f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6521u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6521: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6524: mov edi, 1 */
  edi = 0x1u;
L_7d6529: /* 7d6529: mov edx, dword ptr [0xb62c58] */
  edx = R32((uint32_t)(0xb62c58u));
/* 7d652f: mov ecx, 0xb62c58 */
  ecx = 0xb62c58u;
/* 7d6534: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6537u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6537: cmp eax, 0x3b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d653c: je 0x7d656e */
  if (zf) goto L_7d656e;
L_7d653e: /* 7d653e: mov eax, dword ptr [0xb62c58] */
  eax = R32((uint32_t)(0xb62c58u));
/* 7d6543: mov ecx, 0xb62c58 */
  ecx = 0xb62c58u;
/* 7d6548: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d654bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d654b: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6551: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6553: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 7d6558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6559: push 0xad97b0 */
  { uint32_t v = 0xad97b0u; esp -= 4; W32(esp, v); }
/* 7d655e: push 0xad97d0 */
  { uint32_t v = 0xad97d0u; esp -= 4; W32(esp, v); }
/* 7d6563: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6564: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6566u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6566: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6569: mov edi, 1 */
  edi = 0x1u;
L_7d656e: /* 7d656e: mov eax, dword ptr [0xb62728] */
  eax = R32((uint32_t)(0xb62728u));
/* 7d6573: mov ecx, 0xb62728 */
  ecx = 0xb62728u;
/* 7d6578: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d657bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d657b: cmp eax, 0x3d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6580: je 0x7d65b2 */
  if (zf) goto L_7d65b2;
L_7d6582: /* 7d6582: mov edx, dword ptr [0xb62728] */
  edx = R32((uint32_t)(0xb62728u));
/* 7d6588: mov ecx, 0xb62728 */
  ecx = 0xb62728u;
/* 7d658d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6590u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6590: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 7d6595: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6596: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d659b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d659d: push 0xad9830 */
  { uint32_t v = 0xad9830u; esp -= 4; W32(esp, v); }
/* 7d65a2: push 0xad9848 */
  { uint32_t v = 0xad9848u; esp -= 4; W32(esp, v); }
/* 7d65a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d65a8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d65aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d65aa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d65ad: mov edi, 1 */
  edi = 0x1u;
L_7d65b2: /* 7d65b2: mov edx, dword ptr [0xb621f8] */
  edx = R32((uint32_t)(0xb621f8u));
/* 7d65b8: mov ecx, 0xb621f8 */
  ecx = 0xb621f8u;
/* 7d65bd: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d65c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d65c0: cmp eax, 0x45c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d65c5: je 0x7d65f7 */
  if (zf) goto L_7d65f7;
L_7d65c7: /* 7d65c7: mov eax, dword ptr [0xb621f8] */
  eax = R32((uint32_t)(0xb621f8u));
/* 7d65cc: mov ecx, 0xb621f8 */
  ecx = 0xb621f8u;
/* 7d65d1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d65d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d65d4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d65da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d65dc: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* 7d65e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d65e2: push 0xad98a8 */
  { uint32_t v = 0xad98a8u; esp -= 4; W32(esp, v); }
/* 7d65e7: push 0xad98c8 */
  { uint32_t v = 0xad98c8u; esp -= 4; W32(esp, v); }
/* 7d65ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d65ed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d65efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d65ef: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d65f2: mov edi, 1 */
  edi = 0x1u;
L_7d65f7: /* 7d65f7: mov eax, dword ptr [0xb5ee18] */
  eax = R32((uint32_t)(0xb5ee18u));
/* 7d65fc: mov ecx, 0xb5ee18 */
  ecx = 0xb5ee18u;
/* 7d6601: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6604u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6604: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6609: je 0x7d663b */
  if (zf) goto L_7d663b;
L_7d660b: /* 7d660b: mov edx, dword ptr [0xb5ee18] */
  edx = R32((uint32_t)(0xb5ee18u));
/* 7d6611: mov ecx, 0xb5ee18 */
  ecx = 0xb5ee18u;
/* 7d6616: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6619u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6619: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d661e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d661f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6624: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6626: push 0xad9928 */
  { uint32_t v = 0xad9928u; esp -= 4; W32(esp, v); }
/* 7d662b: push 0xad9940 */
  { uint32_t v = 0xad9940u; esp -= 4; W32(esp, v); }
/* 7d6630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6631: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6633u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6633: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6636: mov edi, 1 */
  edi = 0x1u;
L_7d663b: /* 7d663b: mov edx, dword ptr [0xb61cc8] */
  edx = R32((uint32_t)(0xb61cc8u));
/* 7d6641: mov ecx, 0xb61cc8 */
  ecx = 0xb61cc8u;
/* 7d6646: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6649u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6649: cmp eax, 0x370 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d664e: je 0x7d6680 */
  if (zf) goto L_7d6680;
L_7d6650: /* 7d6650: mov eax, dword ptr [0xb61cc8] */
  eax = R32((uint32_t)(0xb61cc8u));
/* 7d6655: mov ecx, 0xb61cc8 */
  ecx = 0xb61cc8u;
/* 7d665a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d665du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d665d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6663: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6665: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 7d666a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d666b: push 0xad99a0 */
  { uint32_t v = 0xad99a0u; esp -= 4; W32(esp, v); }
/* 7d6670: push 0xad99b8 */
  { uint32_t v = 0xad99b8u; esp -= 4; W32(esp, v); }
/* 7d6675: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6676: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6678: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d667b: mov edi, 1 */
  edi = 0x1u;
L_7d6680: /* 7d6680: mov eax, dword ptr [0xb61798] */
  eax = R32((uint32_t)(0xb61798u));
/* 7d6685: mov ecx, 0xb61798 */
  ecx = 0xb61798u;
/* 7d668a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d668du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d668d: cmp eax, 0x374 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6692: je 0x7d66c4 */
  if (zf) goto L_7d66c4;
L_7d6694: /* 7d6694: mov edx, dword ptr [0xb61798] */
  edx = R32((uint32_t)(0xb61798u));
/* 7d669a: mov ecx, 0xb61798 */
  ecx = 0xb61798u;
/* 7d669f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d66a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d66a2: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 7d66a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d66a8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d66ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d66af: push 0xad9a18 */
  { uint32_t v = 0xad9a18u; esp -= 4; W32(esp, v); }
/* 7d66b4: push 0xad9a30 */
  { uint32_t v = 0xad9a30u; esp -= 4; W32(esp, v); }
/* 7d66b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d66ba: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d66bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d66bc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d66bf: mov edi, 1 */
  edi = 0x1u;
L_7d66c4: /* 7d66c4: mov edx, dword ptr [0xb61268] */
  edx = R32((uint32_t)(0xb61268u));
/* 7d66ca: mov ecx, 0xb61268 */
  ecx = 0xb61268u;
/* 7d66cf: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d66d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d66d2: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d66d7: je 0x7d6709 */
  if (zf) goto L_7d6709;
L_7d66d9: /* 7d66d9: mov eax, dword ptr [0xb61268] */
  eax = R32((uint32_t)(0xb61268u));
/* 7d66de: mov ecx, 0xb61268 */
  ecx = 0xb61268u;
/* 7d66e3: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d66e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d66e6: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d66ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d66ee: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d66f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d66f4: push 0xad9a90 */
  { uint32_t v = 0xad9a90u; esp -= 4; W32(esp, v); }
/* 7d66f9: push 0xad9ab8 */
  { uint32_t v = 0xad9ab8u; esp -= 4; W32(esp, v); }
/* 7d66fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d66ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6701: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6704: mov edi, 1 */
  edi = 0x1u;
L_7d6709: /* 7d6709: mov eax, dword ptr [0xb60d38] */
  eax = R32((uint32_t)(0xb60d38u));
/* 7d670e: mov ecx, 0xb60d38 */
  ecx = 0xb60d38u;
/* 7d6713: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6716u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6716: cmp eax, 0x59c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x59cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d671b: je 0x7d674d */
  if (zf) goto L_7d674d;
L_7d671d: /* 7d671d: mov edx, dword ptr [0xb60d38] */
  edx = R32((uint32_t)(0xb60d38u));
/* 7d6723: mov ecx, 0xb60d38 */
  ecx = 0xb60d38u;
/* 7d6728: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d672bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d672b: push 0x59c */
  { uint32_t v = 0x59cu; esp -= 4; W32(esp, v); }
/* 7d6730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6731: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6736: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6738: push 0xad9b18 */
  { uint32_t v = 0xad9b18u; esp -= 4; W32(esp, v); }
/* 7d673d: push 0xad9b28 */
  { uint32_t v = 0xad9b28u; esp -= 4; W32(esp, v); }
/* 7d6742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6743: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6745: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6748: mov edi, 1 */
  edi = 0x1u;
L_7d674d: /* 7d674d: mov edx, dword ptr [0xb5fda8] */
  edx = R32((uint32_t)(0xb5fda8u));
/* 7d6753: mov ecx, 0xb5fda8 */
  ecx = 0xb5fda8u;
/* 7d6758: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d675bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d675b: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6760: je 0x7d6792 */
  if (zf) goto L_7d6792;
L_7d6762: /* 7d6762: mov eax, dword ptr [0xb5fda8] */
  eax = R32((uint32_t)(0xb5fda8u));
/* 7d6767: mov ecx, 0xb5fda8 */
  ecx = 0xb5fda8u;
/* 7d676c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d676fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d676f: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6775: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6777: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d677c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d677d: push 0xad9b88 */
  { uint32_t v = 0xad9b88u; esp -= 4; W32(esp, v); }
/* 7d6782: push 0xad9ba0 */
  { uint32_t v = 0xad9ba0u; esp -= 4; W32(esp, v); }
/* 7d6787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6788: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d678au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d678a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d678d: mov edi, 1 */
  edi = 0x1u;
L_7d6792: /* 7d6792: mov eax, dword ptr [0xb5f878] */
  eax = R32((uint32_t)(0xb5f878u));
/* 7d6797: mov ecx, 0xb5f878 */
  ecx = 0xb5f878u;
/* 7d679c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d679fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d679f: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d67a2: je 0x7d67d1 */
  if (zf) goto L_7d67d1;
L_7d67a4: /* 7d67a4: mov edx, dword ptr [0xb5f878] */
  edx = R32((uint32_t)(0xb5f878u));
/* 7d67aa: mov ecx, 0xb5f878 */
  ecx = 0xb5f878u;
/* 7d67af: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d67b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d67b2: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d67b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d67b5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d67ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d67bc: push 0xad9c00 */
  { uint32_t v = 0xad9c00u; esp -= 4; W32(esp, v); }
/* 7d67c1: push 0xad9c18 */
  { uint32_t v = 0xad9c18u; esp -= 4; W32(esp, v); }
/* 7d67c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d67c7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d67c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d67c9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d67cc: mov edi, 1 */
  edi = 0x1u;
L_7d67d1: /* 7d67d1: mov edx, dword ptr [0xb5f348] */
  edx = R32((uint32_t)(0xb5f348u));
/* 7d67d7: mov ecx, 0xb5f348 */
  ecx = 0xb5f348u;
/* 7d67dc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d67dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d67df: cmp eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d67e4: je 0x7d6816 */
  if (zf) goto L_7d6816;
L_7d67e6: /* 7d67e6: mov eax, dword ptr [0xb5f348] */
  eax = R32((uint32_t)(0xb5f348u));
/* 7d67eb: mov ecx, 0xb5f348 */
  ecx = 0xb5f348u;
/* 7d67f0: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d67f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d67f3: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d67f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d67fb: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 7d6800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6801: push 0xad9c78 */
  { uint32_t v = 0xad9c78u; esp -= 4; W32(esp, v); }
/* 7d6806: push 0xad9c98 */
  { uint32_t v = 0xad9c98u; esp -= 4; W32(esp, v); }
/* 7d680b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d680c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d680eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d680e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6811: mov edi, 1 */
  edi = 0x1u;
L_7d6816: /* 7d6816: mov eax, dword ptr [0xb5e8e8] */
  eax = R32((uint32_t)(0xb5e8e8u));
/* 7d681b: mov ecx, 0xb5e8e8 */
  ecx = 0xb5e8e8u;
/* 7d6820: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6823: cmp eax, 0x7e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6828: je 0x7d685a */
  if (zf) goto L_7d685a;
L_7d682a: /* 7d682a: mov edx, dword ptr [0xb5e8e8] */
  edx = R32((uint32_t)(0xb5e8e8u));
/* 7d6830: mov ecx, 0xb5e8e8 */
  ecx = 0xb5e8e8u;
/* 7d6835: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6838: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 7d683d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d683e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6843: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6845: push 0xad9cf8 */
  { uint32_t v = 0xad9cf8u; esp -= 4; W32(esp, v); }
/* 7d684a: push 0xad9d08 */
  { uint32_t v = 0xad9d08u; esp -= 4; W32(esp, v); }
/* 7d684f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6850: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6852: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6855: mov edi, 1 */
  edi = 0x1u;
L_7d685a: /* 7d685a: mov edx, dword ptr [0xb5e3b8] */
  edx = R32((uint32_t)(0xb5e3b8u));
/* 7d6860: mov ecx, 0xb5e3b8 */
  ecx = 0xb5e3b8u;
/* 7d6865: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6868u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6868: cmp eax, 0x56c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x56cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d686d: je 0x7d689f */
  if (zf) goto L_7d689f;
L_7d686f: /* 7d686f: mov eax, dword ptr [0xb5e3b8] */
  eax = R32((uint32_t)(0xb5e3b8u));
/* 7d6874: mov ecx, 0xb5e3b8 */
  ecx = 0xb5e3b8u;
/* 7d6879: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d687cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d687c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6882: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6884: push 0x56c */
  { uint32_t v = 0x56cu; esp -= 4; W32(esp, v); }
/* 7d6889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d688a: push 0xad9d68 */
  { uint32_t v = 0xad9d68u; esp -= 4; W32(esp, v); }
/* 7d688f: push 0xad9d80 */
  { uint32_t v = 0xad9d80u; esp -= 4; W32(esp, v); }
/* 7d6894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6895: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6897u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6897: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d689a: mov edi, 1 */
  edi = 0x1u;
L_7d689f: /* 7d689f: mov eax, dword ptr [0xb5de88] */
  eax = R32((uint32_t)(0xb5de88u));
/* 7d68a4: mov ecx, 0xb5de88 */
  ecx = 0xb5de88u;
/* 7d68a9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d68acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d68ac: cmp eax, 0x55c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x55cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d68b1: je 0x7d68e3 */
  if (zf) goto L_7d68e3;
L_7d68b3: /* 7d68b3: mov edx, dword ptr [0xb5de88] */
  edx = R32((uint32_t)(0xb5de88u));
/* 7d68b9: mov ecx, 0xb5de88 */
  ecx = 0xb5de88u;
/* 7d68be: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d68c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d68c1: push 0x55c */
  { uint32_t v = 0x55cu; esp -= 4; W32(esp, v); }
/* 7d68c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d68c7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d68cc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d68ce: push 0xad9de0 */
  { uint32_t v = 0xad9de0u; esp -= 4; W32(esp, v); }
/* 7d68d3: push 0xad9df8 */
  { uint32_t v = 0xad9df8u; esp -= 4; W32(esp, v); }
/* 7d68d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d68d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d68dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d68db: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d68de: mov edi, 1 */
  edi = 0x1u;
L_7d68e3: /* 7d68e3: mov edx, dword ptr [0xb5d958] */
  edx = R32((uint32_t)(0xb5d958u));
/* 7d68e9: mov ecx, 0xb5d958 */
  ecx = 0xb5d958u;
/* 7d68ee: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d68f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d68f1: cmp eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d68f6: je 0x7d6928 */
  if (zf) goto L_7d6928;
L_7d68f8: /* 7d68f8: mov eax, dword ptr [0xb5d958] */
  eax = R32((uint32_t)(0xb5d958u));
/* 7d68fd: mov ecx, 0xb5d958 */
  ecx = 0xb5d958u;
/* 7d6902: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6905u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6905: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d690b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d690d: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7d6912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6913: push 0xad9e58 */
  { uint32_t v = 0xad9e58u; esp -= 4; W32(esp, v); }
/* 7d6918: push 0xad9e68 */
  { uint32_t v = 0xad9e68u; esp -= 4; W32(esp, v); }
/* 7d691d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d691e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6920u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6920: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6923: mov edi, 1 */
  edi = 0x1u;
L_7d6928: /* 7d6928: mov eax, dword ptr [0xb5d428] */
  eax = R32((uint32_t)(0xb5d428u));
/* 7d692d: mov ecx, 0xb5d428 */
  ecx = 0xb5d428u;
/* 7d6932: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6935u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6935: cmp eax, 0x478 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x478u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d693a: je 0x7d696c */
  if (zf) goto L_7d696c;
L_7d693c: /* 7d693c: mov edx, dword ptr [0xb5d428] */
  edx = R32((uint32_t)(0xb5d428u));
/* 7d6942: mov ecx, 0xb5d428 */
  ecx = 0xb5d428u;
/* 7d6947: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d694au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d694a: push 0x478 */
  { uint32_t v = 0x478u; esp -= 4; W32(esp, v); }
/* 7d694f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6950: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6955: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6957: push 0xad9ec8 */
  { uint32_t v = 0xad9ec8u; esp -= 4; W32(esp, v); }
/* 7d695c: push 0xad9ed8 */
  { uint32_t v = 0xad9ed8u; esp -= 4; W32(esp, v); }
/* 7d6961: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6962: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6964u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6964: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6967: mov edi, 1 */
  edi = 0x1u;
L_7d696c: /* 7d696c: mov edx, dword ptr [0xb5cef8] */
  edx = R32((uint32_t)(0xb5cef8u));
/* 7d6972: mov ecx, 0xb5cef8 */
  ecx = 0xb5cef8u;
/* 7d6977: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d697au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d697a: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d697f: je 0x7d69b1 */
  if (zf) goto L_7d69b1;
L_7d6981: /* 7d6981: mov eax, dword ptr [0xb5cef8] */
  eax = R32((uint32_t)(0xb5cef8u));
/* 7d6986: mov ecx, 0xb5cef8 */
  ecx = 0xb5cef8u;
/* 7d698b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d698eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d698e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6994: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6996: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d699b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d699c: push 0xad9f38 */
  { uint32_t v = 0xad9f38u; esp -= 4; W32(esp, v); }
/* 7d69a1: push 0xad9f50 */
  { uint32_t v = 0xad9f50u; esp -= 4; W32(esp, v); }
/* 7d69a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d69a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d69a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d69a9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d69ac: mov edi, 1 */
  edi = 0x1u;
L_7d69b1: /* 7d69b1: mov eax, dword ptr [0xb5c9c8] */
  eax = R32((uint32_t)(0xb5c9c8u));
/* 7d69b6: mov ecx, 0xb5c9c8 */
  ecx = 0xb5c9c8u;
/* 7d69bb: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d69beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d69be: cmp eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d69c3: je 0x7d69f5 */
  if (zf) goto L_7d69f5;
L_7d69c5: /* 7d69c5: mov edx, dword ptr [0xb5c9c8] */
  edx = R32((uint32_t)(0xb5c9c8u));
/* 7d69cb: mov ecx, 0xb5c9c8 */
  ecx = 0xb5c9c8u;
/* 7d69d0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d69d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d69d3: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 7d69d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d69d9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d69de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d69e0: push 0xad9fb0 */
  { uint32_t v = 0xad9fb0u; esp -= 4; W32(esp, v); }
/* 7d69e5: push 0xad9fc8 */
  { uint32_t v = 0xad9fc8u; esp -= 4; W32(esp, v); }
/* 7d69ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d69eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d69edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d69ed: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d69f0: mov edi, 1 */
  edi = 0x1u;
L_7d69f5: /* 7d69f5: mov edx, dword ptr [0xb5c498] */
  edx = R32((uint32_t)(0xb5c498u));
/* 7d69fb: mov ecx, 0xb5c498 */
  ecx = 0xb5c498u;
/* 7d6a00: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6a03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a03: cmp eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6a08: je 0x7d6a3a */
  if (zf) goto L_7d6a3a;
L_7d6a0a: /* 7d6a0a: mov eax, dword ptr [0xb5c498] */
  eax = R32((uint32_t)(0xb5c498u));
/* 7d6a0f: mov ecx, 0xb5c498 */
  ecx = 0xb5c498u;
/* 7d6a14: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6a17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a17: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6a1d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6a1f: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 7d6a24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6a25: push 0xada028 */
  { uint32_t v = 0xada028u; esp -= 4; W32(esp, v); }
/* 7d6a2a: push 0xada038 */
  { uint32_t v = 0xada038u; esp -= 4; W32(esp, v); }
/* 7d6a2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6a30: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6a32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a32: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6a35: mov edi, 1 */
  edi = 0x1u;
L_7d6a3a: /* 7d6a3a: mov eax, dword ptr [0xb20d28] */
  eax = R32((uint32_t)(0xb20d28u));
/* 7d6a3f: mov ecx, 0xb20d28 */
  ecx = 0xb20d28u;
/* 7d6a44: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6a47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a47: cmp eax, 0x35c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6a4c: je 0x7d6a7e */
  if (zf) goto L_7d6a7e;
L_7d6a4e: /* 7d6a4e: mov edx, dword ptr [0xb20d28] */
  edx = R32((uint32_t)(0xb20d28u));
/* 7d6a54: mov ecx, 0xb20d28 */
  ecx = 0xb20d28u;
/* 7d6a59: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6a5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a5c: push 0x35c */
  { uint32_t v = 0x35cu; esp -= 4; W32(esp, v); }
/* 7d6a61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6a62: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6a67: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6a69: push 0xada098 */
  { uint32_t v = 0xada098u; esp -= 4; W32(esp, v); }
/* 7d6a6e: push 0xada0b0 */
  { uint32_t v = 0xada0b0u; esp -= 4; W32(esp, v); }
/* 7d6a73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6a74: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6a76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a76: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6a79: mov edi, 1 */
  edi = 0x1u;
L_7d6a7e: /* 7d6a7e: mov edx, dword ptr [0xb207f8] */
  edx = R32((uint32_t)(0xb207f8u));
/* 7d6a84: mov ecx, 0xb207f8 */
  ecx = 0xb207f8u;
/* 7d6a89: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6a8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6a8c: cmp eax, 0x61c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x61cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6a91: je 0x7d6ac3 */
  if (zf) goto L_7d6ac3;
L_7d6a93: /* 7d6a93: mov eax, dword ptr [0xb207f8] */
  eax = R32((uint32_t)(0xb207f8u));
/* 7d6a98: mov ecx, 0xb207f8 */
  ecx = 0xb207f8u;
/* 7d6a9d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6aa0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6aa0: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6aa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6aa8: push 0x61c */
  { uint32_t v = 0x61cu; esp -= 4; W32(esp, v); }
/* 7d6aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6aae: push 0xada110 */
  { uint32_t v = 0xada110u; esp -= 4; W32(esp, v); }
/* 7d6ab3: push 0xada128 */
  { uint32_t v = 0xada128u; esp -= 4; W32(esp, v); }
/* 7d6ab8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6ab9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6abbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6abb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6abe: mov edi, 1 */
  edi = 0x1u;
L_7d6ac3: /* 7d6ac3: mov eax, dword ptr [0xb202c8] */
  eax = R32((uint32_t)(0xb202c8u));
/* 7d6ac8: mov ecx, 0xb202c8 */
  ecx = 0xb202c8u;
/* 7d6acd: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6ad0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6ad0: cmp eax, 0x3dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6ad5: je 0x7d6b07 */
  if (zf) goto L_7d6b07;
L_7d6ad7: /* 7d6ad7: mov edx, dword ptr [0xb202c8] */
  edx = R32((uint32_t)(0xb202c8u));
/* 7d6add: mov ecx, 0xb202c8 */
  ecx = 0xb202c8u;
/* 7d6ae2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6ae5: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* 7d6aea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6aeb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6af0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6af2: push 0xada188 */
  { uint32_t v = 0xada188u; esp -= 4; W32(esp, v); }
/* 7d6af7: push 0xada198 */
  { uint32_t v = 0xada198u; esp -= 4; W32(esp, v); }
/* 7d6afc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6afd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6affu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6aff: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6b02: mov edi, 1 */
  edi = 0x1u;
L_7d6b07: /* 7d6b07: mov edx, dword ptr [0xb1fd98] */
  edx = R32((uint32_t)(0xb1fd98u));
/* 7d6b0d: mov ecx, 0xb1fd98 */
  ecx = 0xb1fd98u;
/* 7d6b12: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6b15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b15: cmp eax, 0x360 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x360u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6b1a: je 0x7d6b4c */
  if (zf) goto L_7d6b4c;
L_7d6b1c: /* 7d6b1c: mov eax, dword ptr [0xb1fd98] */
  eax = R32((uint32_t)(0xb1fd98u));
/* 7d6b21: mov ecx, 0xb1fd98 */
  ecx = 0xb1fd98u;
/* 7d6b26: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6b29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b29: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6b2f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6b31: push 0x360 */
  { uint32_t v = 0x360u; esp -= 4; W32(esp, v); }
/* 7d6b36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6b37: push 0xada1f8 */
  { uint32_t v = 0xada1f8u; esp -= 4; W32(esp, v); }
/* 7d6b3c: push 0xada208 */
  { uint32_t v = 0xada208u; esp -= 4; W32(esp, v); }
/* 7d6b41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6b42: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6b44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b44: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6b47: mov edi, 1 */
  edi = 0x1u;
L_7d6b4c: /* 7d6b4c: mov eax, dword ptr [0xb1f868] */
  eax = R32((uint32_t)(0xb1f868u));
/* 7d6b51: mov ecx, 0xb1f868 */
  ecx = 0xb1f868u;
/* 7d6b56: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6b59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b59: cmp eax, 0xe4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6b5e: je 0x7d6b90 */
  if (zf) goto L_7d6b90;
L_7d6b60: /* 7d6b60: mov edx, dword ptr [0xb1f868] */
  edx = R32((uint32_t)(0xb1f868u));
/* 7d6b66: mov ecx, 0xb1f868 */
  ecx = 0xb1f868u;
/* 7d6b6b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6b6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b6e: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 7d6b73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6b74: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6b79: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6b7b: push 0xada268 */
  { uint32_t v = 0xada268u; esp -= 4; W32(esp, v); }
/* 7d6b80: push 0xada290 */
  { uint32_t v = 0xada290u; esp -= 4; W32(esp, v); }
/* 7d6b85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6b86: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6b88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b88: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6b8b: mov edi, 1 */
  edi = 0x1u;
L_7d6b90: /* 7d6b90: mov edx, dword ptr [0xb1ee08] */
  edx = R32((uint32_t)(0xb1ee08u));
/* 7d6b96: mov ecx, 0xb1ee08 */
  ecx = 0xb1ee08u;
/* 7d6b9b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6b9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6b9e: cmp eax, 0xac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6ba3: je 0x7d6bd5 */
  if (zf) goto L_7d6bd5;
L_7d6ba5: /* 7d6ba5: mov eax, dword ptr [0xb1ee08] */
  eax = R32((uint32_t)(0xb1ee08u));
/* 7d6baa: mov ecx, 0xb1ee08 */
  ecx = 0xb1ee08u;
/* 7d6baf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6bb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6bb2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6bb8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6bba: push 0xac */
  { uint32_t v = 0xacu; esp -= 4; W32(esp, v); }
/* 7d6bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6bc0: push 0xada2f0 */
  { uint32_t v = 0xada2f0u; esp -= 4; W32(esp, v); }
/* 7d6bc5: push 0xada310 */
  { uint32_t v = 0xada310u; esp -= 4; W32(esp, v); }
/* 7d6bca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6bcb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6bcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6bcd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6bd0: mov edi, 1 */
  edi = 0x1u;
L_7d6bd5: /* 7d6bd5: mov eax, dword ptr [0xb1e8d8] */
  eax = R32((uint32_t)(0xb1e8d8u));
/* 7d6bda: mov ecx, 0xb1e8d8 */
  ecx = 0xb1e8d8u;
/* 7d6bdf: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6be2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6be2: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6be5: je 0x7d6c14 */
  if (zf) goto L_7d6c14;
L_7d6be7: /* 7d6be7: mov edx, dword ptr [0xb1e8d8] */
  edx = R32((uint32_t)(0xb1e8d8u));
/* 7d6bed: mov ecx, 0xb1e8d8 */
  ecx = 0xb1e8d8u;
/* 7d6bf2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6bf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6bf5: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7d6bf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6bf8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6bfd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6bff: push 0xada370 */
  { uint32_t v = 0xada370u; esp -= 4; W32(esp, v); }
/* 7d6c04: push 0xada3a0 */
  { uint32_t v = 0xada3a0u; esp -= 4; W32(esp, v); }
/* 7d6c09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6c0a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6c0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c0c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6c0f: mov edi, 1 */
  edi = 0x1u;
L_7d6c14: /* 7d6c14: mov edx, dword ptr [0xb1f338] */
  edx = R32((uint32_t)(0xb1f338u));
/* 7d6c1a: mov ecx, 0xb1f338 */
  ecx = 0xb1f338u;
/* 7d6c1f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6c22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c22: cmp eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6c27: je 0x7d6c59 */
  if (zf) goto L_7d6c59;
L_7d6c29: /* 7d6c29: mov eax, dword ptr [0xb1f338] */
  eax = R32((uint32_t)(0xb1f338u));
/* 7d6c2e: mov ecx, 0xb1f338 */
  ecx = 0xb1f338u;
/* 7d6c33: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6c36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c36: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6c3c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6c3e: push 0xd0 */
  { uint32_t v = 0xd0u; esp -= 4; W32(esp, v); }
/* 7d6c43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6c44: push 0xada400 */
  { uint32_t v = 0xada400u; esp -= 4; W32(esp, v); }
/* 7d6c49: push 0xada428 */
  { uint32_t v = 0xada428u; esp -= 4; W32(esp, v); }
/* 7d6c4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6c4f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c51: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6c54: mov edi, 1 */
  edi = 0x1u;
L_7d6c59: /* 7d6c59: mov eax, dword ptr [0xb1d940] */
  eax = R32((uint32_t)(0xb1d940u));
/* 7d6c5e: mov ecx, 0xb1d940 */
  ecx = 0xb1d940u;
/* 7d6c63: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6c66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c66: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6c6b: je 0x7d6c9d */
  if (zf) goto L_7d6c9d;
L_7d6c6d: /* 7d6c6d: mov edx, dword ptr [0xb1d940] */
  edx = R32((uint32_t)(0xb1d940u));
/* 7d6c73: mov ecx, 0xb1d940 */
  ecx = 0xb1d940u;
/* 7d6c78: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6c7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c7b: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d6c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6c81: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6c86: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6c88: push 0xada488 */
  { uint32_t v = 0xada488u; esp -= 4; W32(esp, v); }
/* 7d6c8d: push 0xada4a8 */
  { uint32_t v = 0xada4a8u; esp -= 4; W32(esp, v); }
/* 7d6c92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6c93: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6c95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6c95: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6c98: mov edi, 1 */
  edi = 0x1u;
L_7d6c9d: /* 7d6c9d: mov edx, dword ptr [0xb1c480] */
  edx = R32((uint32_t)(0xb1c480u));
/* 7d6ca3: mov ecx, 0xb1c480 */
  ecx = 0xb1c480u;
/* 7d6ca8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6cabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6cab: cmp eax, 0x3c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6cb0: je 0x7d6ce2 */
  if (zf) goto L_7d6ce2;
L_7d6cb2: /* 7d6cb2: mov eax, dword ptr [0xb1c480] */
  eax = R32((uint32_t)(0xb1c480u));
/* 7d6cb7: mov ecx, 0xb1c480 */
  ecx = 0xb1c480u;
/* 7d6cbc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6cbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6cbf: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6cc5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6cc7: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7d6ccc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ccd: push 0xada508 */
  { uint32_t v = 0xada508u; esp -= 4; W32(esp, v); }
/* 7d6cd2: push 0xada528 */
  { uint32_t v = 0xada528u; esp -= 4; W32(esp, v); }
/* 7d6cd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6cd8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6cdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6cda: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6cdd: mov edi, 1 */
  edi = 0x1u;
L_7d6ce2: /* 7d6ce2: mov eax, dword ptr [0xb1d410] */
  eax = R32((uint32_t)(0xb1d410u));
/* 7d6ce7: mov ecx, 0xb1d410 */
  ecx = 0xb1d410u;
/* 7d6cec: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6cefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6cef: cmp eax, 0x3d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6cf4: je 0x7d6d26 */
  if (zf) goto L_7d6d26;
L_7d6cf6: /* 7d6cf6: mov edx, dword ptr [0xb1d410] */
  edx = R32((uint32_t)(0xb1d410u));
/* 7d6cfc: mov ecx, 0xb1d410 */
  ecx = 0xb1d410u;
/* 7d6d01: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6d04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d04: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 7d6d09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6d0a: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6d0f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6d11: push 0xada588 */
  { uint32_t v = 0xada588u; esp -= 4; W32(esp, v); }
/* 7d6d16: push 0xada5a0 */
  { uint32_t v = 0xada5a0u; esp -= 4; W32(esp, v); }
/* 7d6d1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6d1c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6d1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d1e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6d21: mov edi, 1 */
  edi = 0x1u;
L_7d6d26: /* 7d6d26: mov edx, dword ptr [0xb1cee0] */
  edx = R32((uint32_t)(0xb1cee0u));
/* 7d6d2c: mov ecx, 0xb1cee0 */
  ecx = 0xb1cee0u;
/* 7d6d31: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6d34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d34: cmp eax, 0x3f0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6d39: je 0x7d6d6b */
  if (zf) goto L_7d6d6b;
L_7d6d3b: /* 7d6d3b: mov eax, dword ptr [0xb1cee0] */
  eax = R32((uint32_t)(0xb1cee0u));
/* 7d6d40: mov ecx, 0xb1cee0 */
  ecx = 0xb1cee0u;
/* 7d6d45: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6d48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d48: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6d4e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6d50: push 0x3f0 */
  { uint32_t v = 0x3f0u; esp -= 4; W32(esp, v); }
/* 7d6d55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6d56: push 0xada600 */
  { uint32_t v = 0xada600u; esp -= 4; W32(esp, v); }
/* 7d6d5b: push 0xada610 */
  { uint32_t v = 0xada610u; esp -= 4; W32(esp, v); }
/* 7d6d60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6d61: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6d63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d63: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6d66: mov edi, 1 */
  edi = 0x1u;
L_7d6d6b: /* 7d6d6b: mov eax, dword ptr [0xb1c9b0] */
  eax = R32((uint32_t)(0xb1c9b0u));
/* 7d6d70: mov ecx, 0xb1c9b0 */
  ecx = 0xb1c9b0u;
/* 7d6d75: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6d78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d78: cmp eax, 0x3c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6d7d: je 0x7d6daf */
  if (zf) goto L_7d6daf;
L_7d6d7f: /* 7d6d7f: mov edx, dword ptr [0xb1c9b0] */
  edx = R32((uint32_t)(0xb1c9b0u));
/* 7d6d85: mov ecx, 0xb1c9b0 */
  ecx = 0xb1c9b0u;
/* 7d6d8a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6d8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6d8d: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7d6d92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6d93: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6d98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6d9a: push 0xada670 */
  { uint32_t v = 0xada670u; esp -= 4; W32(esp, v); }
/* 7d6d9f: push 0xada688 */
  { uint32_t v = 0xada688u; esp -= 4; W32(esp, v); }
/* 7d6da4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6da5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6da7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6da7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6daa: mov edi, 1 */
  edi = 0x1u;
L_7d6daf: /* 7d6daf: mov edx, dword ptr [0xb08948] */
  edx = R32((uint32_t)(0xb08948u));
/* 7d6db5: mov ecx, 0xb08948 */
  ecx = 0xb08948u;
/* 7d6dba: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6dbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6dbd: cmp eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6dc2: je 0x7d6df4 */
  if (zf) goto L_7d6df4;
L_7d6dc4: /* 7d6dc4: mov eax, dword ptr [0xb08948] */
  eax = R32((uint32_t)(0xb08948u));
/* 7d6dc9: mov ecx, 0xb08948 */
  ecx = 0xb08948u;
/* 7d6dce: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6dd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6dd1: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d6dd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6dd9: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7d6dde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ddf: push 0xada6e8 */
  { uint32_t v = 0xada6e8u; esp -= 4; W32(esp, v); }
/* 7d6de4: push 0xada700 */
  { uint32_t v = 0xada700u; esp -= 4; W32(esp, v); }
/* 7d6de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d6dea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6decu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6dec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6def: mov edi, 1 */
  edi = 0x1u;
L_7d6df4: /* 7d6df4: mov eax, dword ptr [0xb08308] */
  eax = R32((uint32_t)(0xb08308u));
/* 7d6df9: mov ecx, 0xb08308 */
  ecx = 0xb08308u;
/* 7d6dfe: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d6e01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e01: cmp eax, 0x34c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6e06: je 0x7d6e35 */
  if (zf) goto L_7d6e35;
L_7d6e08: /* 7d6e08: mov edx, dword ptr [0xb08308] */
  edx = R32((uint32_t)(0xb08308u));
/* 7d6e0e: mov ecx, 0xb08308 */
  ecx = 0xb08308u;
/* 7d6e13: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d6e16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e16: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 7d6e1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6e1c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d6e21: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6e23: push 0xada760 */
  { uint32_t v = 0xada760u; esp -= 4; W32(esp, v); }
/* 7d6e28: push 0xada778 */
  { uint32_t v = 0xada778u; esp -= 4; W32(esp, v); }
/* 7d6e2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6e2e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6e30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e30: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6e33: jmp 0x7d6e39 */
  goto L_7d6e39;
L_7d6e35: /* 7d6e35: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6e37: je 0x7d6e4c */
  if (zf) goto L_7d6e4c;
L_7d6e39: /* 7d6e39: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7d6e3f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d6e41: push 0xada7d8 */
  { uint32_t v = 0xada7d8u; esp -= 4; W32(esp, v); }
/* 7d6e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6e47: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6e49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e49: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d6e4c: /* 7d6e4c: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 7d6e51: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d6e57u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d6e57: mov edi, eax */
  edi = eax;
/* 7d6e59: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7d6e5fu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7d6e5f: mov esi, dword ptr [0xcfa5f8] */
  esi = R32((uint32_t)(0xcfa5f8u));
/* 7d6e65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d6e67: push 0xada818 */
  { uint32_t v = 0xada818u; esp -= 4; W32(esp, v); }
/* 7d6e6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d6e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6e6e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6e70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6e70: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6e73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6e75: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d6e78: je 0x7d6e82 */
  if (zf) goto L_7d6e82;
L_7d6e7a: /* 7d6e7a: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d6e7d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7d6e80: jmp 0x7d6e89 */
  goto L_7d6e89;
L_7d6e82: /* 7d6e82: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7d6e89: /* 7d6e89: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d6e8c: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d6e91u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d6e91: mov ebx, dword ptr [0xcfa340] */
  ebx = R32((uint32_t)(0xcfa340u));
L_7d6e97: /* 7d6e97: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d6e9a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6e9c: je 0x7d6ef1 */
  if (zf) goto L_7d6ef1;
L_7d6e9e: /* 7d6e9e: mov ecx, edi */
  ecx = edi;
/* 7d6ea0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d6ea6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d6ea6: push 0xada824 */
  { uint32_t v = 0xada824u; esp -= 4; W32(esp, v); }
/* 7d6eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6eac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d6eaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6eae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6eb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6eb3: jne 0x7d6ee1 */
  if (!zf) goto L_7d6ee1;
L_7d6eb5: /* 7d6eb5: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 7d6eb8: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6ebb: je 0x7d6ee1 */
  if (zf) goto L_7d6ee1;
L_7d6ebd: /* 7d6ebd: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7d6ec3: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7d6ec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ec6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d6ec8: push 0xada830 */
  { uint32_t v = 0xada830u; esp -= 4; W32(esp, v); }
/* 7d6ecd: push 0xada83c */
  { uint32_t v = 0xada83cu; esp -= 4; W32(esp, v); }
/* 7d6ed2: push 0xada848 */
  { uint32_t v = 0xada848u; esp -= 4; W32(esp, v); }
/* 7d6ed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ed8: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d6edeu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d6ede: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d6ee1: /* 7d6ee1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7d6ee4: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7d6ee7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d6eea: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d6eefu); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d6eef: jmp 0x7d6e97 */
  goto L_7d6e97;
L_7d6ef1: /* 7d6ef1: mov ecx, 0xb5bf68 */
  ecx = 0xb5bf68u;
/* 7d6ef6: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d6efcu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d6efc: mov edi, eax */
  edi = eax;
/* 7d6efe: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7d6f04u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7d6f04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d6f06: push 0xada8a4 */
  { uint32_t v = 0xada8a4u; esp -= 4; W32(esp, v); }
/* 7d6f0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d6f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6f0d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6f0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6f0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6f12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6f14: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d6f17: je 0x7d6f21 */
  if (zf) goto L_7d6f21;
L_7d6f19: /* 7d6f19: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7d6f1c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7d6f1f: jmp 0x7d6f28 */
  goto L_7d6f28;
L_7d6f21: /* 7d6f21: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7d6f28: /* 7d6f28: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d6f2b: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d6f30u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d6f30: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d6f33: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6f35: je 0x7d6f86 */
  if (zf) goto L_7d6f86;
L_7d6f37: /* 7d6f37: mov ecx, edi */
  ecx = edi;
/* 7d6f39: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d6f3fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d6f3f: push 0xada8b0 */
  { uint32_t v = 0xada8b0u; esp -= 4; W32(esp, v); }
/* 7d6f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6f45: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d6f47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6f47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6f4c: jne 0x7d6f7e */
  if (!zf) goto L_7d6f7e;
L_7d6f4e: /* 7d6f4e: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 7d6f51: cmp eax, 0xe8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6f56: je 0x7d6f7e */
  if (zf) goto L_7d6f7e;
L_7d6f58: /* 7d6f58: push 0xe8 */
  { uint32_t v = 0xe8u; esp -= 4; W32(esp, v); }
/* 7d6f5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6f5e: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7d6f63: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d6f65: push 0xada8cc */
  { uint32_t v = 0xada8ccu; esp -= 4; W32(esp, v); }
/* 7d6f6a: push 0xada8e8 */
  { uint32_t v = 0xada8e8u; esp -= 4; W32(esp, v); }
/* 7d6f6f: push 0xada8f8 */
  { uint32_t v = 0xada8f8u; esp -= 4; W32(esp, v); }
/* 7d6f74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d6f75: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d6f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d6f7b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d6f7e: /* 7d6f7e: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7d6f81: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7d6f84: jmp 0x7d6f28 */
  goto L_7d6f28;
L_7d6f86: /* 7d6f86: mov ecx, 0xb6a8d8 */
  ecx = 0xb6a8d8u;
/* 7d6f8b: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d6f91u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d6f91: mov edi, eax */
  edi = eax;
/* 7d6f93: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7d6f99u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7d6f99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d6f9b: push 0xada954 */
  { uint32_t v = 0xada954u; esp -= 4; W32(esp, v); }
/* 7d6fa0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d6fa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6fa2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d6fa4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6fa4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6fa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6fa9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d6fac: je 0x7d6fb6 */
  if (zf) goto L_7d6fb6;
L_7d6fae: /* 7d6fae: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7d6fb1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7d6fb4: jmp 0x7d6fbd */
  goto L_7d6fbd;
L_7d6fb6: /* 7d6fb6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7d6fbd: /* 7d6fbd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d6fc0: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d6fc5u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d6fc5: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d6fc8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6fca: je 0x7d701c */
  if (zf) goto L_7d701c;
L_7d6fcc: /* 7d6fcc: mov ecx, edi */
  ecx = edi;
/* 7d6fce: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d6fd4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d6fd4: push 0xada978 */
  { uint32_t v = 0xada978u; esp -= 4; W32(esp, v); }
/* 7d6fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6fda: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d6fdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d6fdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d6fdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d6fe1: jne 0x7d7014 */
  if (!zf) goto L_7d7014;
L_7d6fe3: /* 7d6fe3: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 7d6fe6: cmp eax, 0x4c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4c0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d6feb: je 0x7d7014 */
  if (zf) goto L_7d7014;
L_7d6fed: /* 7d6fed: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7d6ff3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d6ff5: push 0x4c0 */
  { uint32_t v = 0x4c0u; esp -= 4; W32(esp, v); }
/* 7d6ffa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d6ffb: push 0xada988 */
  { uint32_t v = 0xada988u; esp -= 4; W32(esp, v); }
/* 7d7000: push 0xada998 */
  { uint32_t v = 0xada998u; esp -= 4; W32(esp, v); }
/* 7d7005: push 0xada9c0 */
  { uint32_t v = 0xada9c0u; esp -= 4; W32(esp, v); }
/* 7d700a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d700b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d7011u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d7011: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7014: /* 7d7014: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7d7017: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7d701a: jmp 0x7d6fbd */
  goto L_7d6fbd;
L_7d701c: /* 7d701c: mov ecx, 0xcc74c0 */
  ecx = 0xcc74c0u;
/* 7d7021: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d7027u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d7027: mov edi, eax */
  edi = eax;
/* 7d7029: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7d702fu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7d702f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7031: push 0xadaa1c */
  { uint32_t v = 0xadaa1cu; esp -= 4; W32(esp, v); }
/* 7d7036: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7037: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7038: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d703au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d703a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d703d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d703f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d7042: je 0x7d704c */
  if (zf) goto L_7d704c;
L_7d7044: /* 7d7044: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d7047: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7d704a: jmp 0x7d7053 */
  goto L_7d7053;
L_7d704c: /* 7d704c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7d7053: /* 7d7053: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7d7056: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7d705bu); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7d705b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d705e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7060: je 0x7d70b2 */
  if (zf) goto L_7d70b2;
L_7d7062: /* 7d7062: mov ecx, edi */
  ecx = edi;
/* 7d7064: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d706au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d706a: push 0xadaa28 */
  { uint32_t v = 0xadaa28u; esp -= 4; W32(esp, v); }
/* 7d706f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7070: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7072u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7072: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7075: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7077: jne 0x7d70aa */
  if (!zf) goto L_7d70aa;
L_7d7079: /* 7d7079: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 7d707c: cmp eax, 0x46c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7081: je 0x7d70aa */
  if (zf) goto L_7d70aa;
L_7d7083: /* 7d7083: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7d7089: push 0x46c */
  { uint32_t v = 0x46cu; esp -= 4; W32(esp, v); }
/* 7d708e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d708f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7091: push 0xadaa38 */
  { uint32_t v = 0xadaa38u; esp -= 4; W32(esp, v); }
/* 7d7096: push 0xadaa48 */
  { uint32_t v = 0xadaa48u; esp -= 4; W32(esp, v); }
/* 7d709b: push 0xadaa58 */
  { uint32_t v = 0xadaa58u; esp -= 4; W32(esp, v); }
/* 7d70a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d70a1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d70a7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d70a7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d70aa: /* 7d70aa: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7d70ad: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7d70b0: jmp 0x7d7053 */
  goto L_7d7053;
L_7d70b2: /* 7d70b2: mov edx, dword ptr [0xb7bee0] */
  edx = R32((uint32_t)(0xb7bee0u));
/* 7d70b8: mov ecx, 0xb7bee0 */
  ecx = 0xb7bee0u;
/* 7d70bd: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d70c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d70c0: cmp eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d70c5: je 0x7d70df */
  if (zf) goto L_7d70df;
L_7d70c7: /* 7d70c7: push 0x5f7 */
  { uint32_t v = 0x5f7u; esp -= 4; W32(esp, v); }
/* 7d70cc: push 0xadaab4 */
  { uint32_t v = 0xadaab4u; esp -= 4; W32(esp, v); }
/* 7d70d1: push 0xadaac0 */
  { uint32_t v = 0xadaac0u; esp -= 4; W32(esp, v); }
/* 7d70d6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d70dcu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d70dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d70df: /* 7d70df: mov eax, dword ptr [0xcea928] */
  eax = R32((uint32_t)(0xcea928u));
/* 7d70e4: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7d70ea: mov ecx, 0xcea928 */
  ecx = 0xcea928u;
/* 7d70ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d70f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d70f2: cmp eax, 0xe4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d70f7: je 0x7d710d */
  if (zf) goto L_7d710d;
L_7d70f9: /* 7d70f9: push 0x5f8 */
  { uint32_t v = 0x5f8u; esp -= 4; W32(esp, v); }
/* 7d70fe: push 0xadab00 */
  { uint32_t v = 0xadab00u; esp -= 4; W32(esp, v); }
/* 7d7103: push 0xadab0c */
  { uint32_t v = 0xadab0cu; esp -= 4; W32(esp, v); }
/* 7d7108: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d710au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d710a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d710d: /* 7d710d: mov edx, dword ptr [0xb7d828] */
  edx = R32((uint32_t)(0xb7d828u));
/* 7d7113: mov ecx, 0xb7d828 */
  ecx = 0xb7d828u;
/* 7d7118: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d711bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d711b: cmp eax, 0x108 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7120: je 0x7d7136 */
  if (zf) goto L_7d7136;
L_7d7122: /* 7d7122: push 0x5f9 */
  { uint32_t v = 0x5f9u; esp -= 4; W32(esp, v); }
/* 7d7127: push 0xadab4c */
  { uint32_t v = 0xadab4cu; esp -= 4; W32(esp, v); }
/* 7d712c: push 0xadab58 */
  { uint32_t v = 0xadab58u; esp -= 4; W32(esp, v); }
/* 7d7131: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7133u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7133: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7136: /* 7d7136: mov eax, dword ptr [0xb81b88] */
  eax = R32((uint32_t)(0xb81b88u));
/* 7d713b: mov ecx, 0xb81b88 */
  ecx = 0xb81b88u;
/* 7d7140: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d7143u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7143: cmp eax, 0x220 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x220u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7148: je 0x7d715e */
  if (zf) goto L_7d715e;
L_7d714a: /* 7d714a: push 0x5fa */
  { uint32_t v = 0x5fau; esp -= 4; W32(esp, v); }
/* 7d714f: push 0xadab98 */
  { uint32_t v = 0xadab98u; esp -= 4; W32(esp, v); }
/* 7d7154: push 0xadaba8 */
  { uint32_t v = 0xadaba8u; esp -= 4; W32(esp, v); }
/* 7d7159: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d715bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d715b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d715e: /* 7d715e: mov edx, dword ptr [0xcea3f8] */
  edx = R32((uint32_t)(0xcea3f8u));
/* 7d7164: mov ecx, 0xcea3f8 */
  ecx = 0xcea3f8u;
/* 7d7169: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d716cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d716c: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d716f: je 0x7d7185 */
  if (zf) goto L_7d7185;
L_7d7171: /* 7d7171: push 0x5fb */
  { uint32_t v = 0x5fbu; esp -= 4; W32(esp, v); }
/* 7d7176: push 0xadabf0 */
  { uint32_t v = 0xadabf0u; esp -= 4; W32(esp, v); }
/* 7d717b: push 0xadabfc */
  { uint32_t v = 0xadabfcu; esp -= 4; W32(esp, v); }
/* 7d7180: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7182u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7182: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7185: /* 7d7185: mov eax, dword ptr [0xcc7b00] */
  eax = R32((uint32_t)(0xcc7b00u));
/* 7d718a: mov ecx, 0xcc7b00 */
  ecx = 0xcc7b00u;
/* 7d718f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7d7192u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7192: cmp eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7195: je 0x7d71ab */
  if (zf) goto L_7d71ab;
L_7d7197: /* 7d7197: push 0x5fc */
  { uint32_t v = 0x5fcu; esp -= 4; W32(esp, v); }
/* 7d719c: push 0xadac3c */
  { uint32_t v = 0xadac3cu; esp -= 4; W32(esp, v); }
/* 7d71a1: push 0xadac48 */
  { uint32_t v = 0xadac48u; esp -= 4; W32(esp, v); }
/* 7d71a6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d71a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d71a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d71ab: /* 7d71ab: mov edx, dword ptr [0xce9ec8] */
  edx = R32((uint32_t)(0xce9ec8u));
/* 7d71b1: mov ecx, 0xce9ec8 */
  ecx = 0xce9ec8u;
/* 7d71b6: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7d71b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d71b9: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d71be: je 0x7d71d4 */
  if (zf) goto L_7d71d4;
L_7d71c0: /* 7d71c0: push 0x5fd */
  { uint32_t v = 0x5fdu; esp -= 4; W32(esp, v); }
/* 7d71c5: push 0xadac88 */
  { uint32_t v = 0xadac88u; esp -= 4; W32(esp, v); }
/* 7d71ca: push 0xadac94 */
  { uint32_t v = 0xadac94u; esp -= 4; W32(esp, v); }
/* 7d71cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d71d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d71d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d71d4: /* 7d71d4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d71d7: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d71dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d71df: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d71e6: jne 0x7d71fc */
  if (!zf) goto L_7d71fc;
L_7d71e8: /* 7d71e8: push 0x601 */
  { uint32_t v = 0x601u; esp -= 4; W32(esp, v); }
/* 7d71ed: push 0xadacdc */
  { uint32_t v = 0xadacdcu; esp -= 4; W32(esp, v); }
/* 7d71f2: push 0xadace8 */
  { uint32_t v = 0xadace8u; esp -= 4; W32(esp, v); }
/* 7d71f7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d71f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d71f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d71fc: /* 7d71fc: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d71ff: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7205: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7208: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7d720a: mov dword ptr [ebp + 0x14], esi */
  W32((uint32_t)(ebp + 0x14u), esi);
/* 7d720d: call dword ptr [0xcfa920] */
  esp -= 4; W32(esp, 0x7d7213u); SPILL(); f_4e2419(); if (g_unwind) return; /* Core!?appComputerName@@YAPBGXZ */ RELOAD();
/* 7d7213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7214: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 7d721a: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7d7220u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7d7220: push 0xadacf0 */
  { uint32_t v = 0xadacf0u; esp -= 4; W32(esp, v); }
/* 7d7225: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d722b: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 7d722f: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7234u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7234: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7236: je 0x7d7240 */
  if (zf) goto L_7d7240;
L_7d7238: /* 7d7238: mov eax, dword ptr [esi + 0x4b8] */
  eax = R32((uint32_t)(esi + 0x4b8u));
/* 7d723e: jmp 0x7d7295 */
  goto L_7d7295;
L_7d7240: /* 7d7240: push 0xadacfc */
  { uint32_t v = 0xadacfcu; esp -= 4; W32(esp, v); }
/* 7d7245: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d724b: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7250u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7250: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7252: je 0x7d725a */
  if (zf) goto L_7d725a;
L_7d7254: /* 7d7254: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d7257: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7258: jmp 0x7d7295 */
  goto L_7d7295;
L_7d725a: /* 7d725a: push 0xadad08 */
  { uint32_t v = 0xadad08u; esp -= 4; W32(esp, v); }
/* 7d725f: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7265: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d726au); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d726a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d726c: je 0x7d727c */
  if (zf) goto L_7d727c;
L_7d726e: /* 7d726e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d7271: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7d7272: xor ecx, ecx */
  ecx = 0;
/* 7d7274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d7276: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7d7279: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7d727a: jmp 0x7d7293 */
  goto L_7d7293;
L_7d727c: /* 7d727c: push 0xadad10 */
  { uint32_t v = 0xadad10u; esp -= 4; W32(esp, v); }
/* 7d7281: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7287: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d728cu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d728c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d728f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7d7291: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_7d7293: /* 7d7293: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_7d7295: /* 7d7295: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7d7298: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d729a: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d72a1: mov dword ptr [esi + 0x4b8], eax */
  W32((uint32_t)(esi + 0x4b8u), eax);
/* 7d72a7: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 7d72ab: je 0x7d7513 */
  if (zf) goto L_7d7513;
L_7d72b1: /* 7d72b1: cmp edi, dword ptr [ebx + 0x110] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x110u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d72b7: je 0x7d72d1 */
  if (zf) goto L_7d72d1;
L_7d72b9: /* 7d72b9: push 0x613 */
  { uint32_t v = 0x613u; esp -= 4; W32(esp, v); }
/* 7d72be: push 0xadad24 */
  { uint32_t v = 0xadad24u; esp -= 4; W32(esp, v); }
/* 7d72c3: push 0xadad30 */
  { uint32_t v = 0xadad30u; esp -= 4; W32(esp, v); }
/* 7d72c8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d72ceu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d72ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d72d1: /* 7d72d1: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7d72d4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d72da: mov dword ptr [edx + 0x3c], eax */
  W32((uint32_t)(edx + 0x3cu), eax);
/* 7d72dd: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d72e3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d72e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d72e8: je 0x7d72f8 */
  if (zf) goto L_7d72f8;
L_7d72ea: /* 7d72ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d72ec: je 0x7d72f3 */
  if (zf) goto L_7d72f3;
L_7d72ee: /* 7d72ee: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d72f1: jmp 0x7d72f5 */
  goto L_7d72f5;
L_7d72f3: /* 7d72f3: xor eax, eax */
  eax = 0;
L_7d72f5: /* 7d72f5: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
L_7d72f8: /* 7d72f8: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d72fe: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 7d7304: mov dword ptr [ecx + 0x88], edx */
  W32((uint32_t)(ecx + 0x88u), edx);
/* 7d730a: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7310: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7d7316: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7318: je 0x7d7328 */
  if (zf) goto L_7d7328;
L_7d731a: /* 7d731a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d731c: je 0x7d7323 */
  if (zf) goto L_7d7323;
L_7d731e: /* 7d731e: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d7321: jmp 0x7d7325 */
  goto L_7d7325;
L_7d7323: /* 7d7323: xor eax, eax */
  eax = 0;
L_7d7325: /* 7d7325: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
L_7d7328: /* 7d7328: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d732e: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7331: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7333: mov byte ptr [eax + 0x4c8], 3 */
  W8((uint32_t)(eax + 0x4c8u), 0x3u);
L_7d733a: /* 7d733a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d733c: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7343: mov bl, 0x19 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x19u) & 0xffu);
/* 7d7345: push 0xadad70 */
  { uint32_t v = 0xadad70u; esp -= 4; W32(esp, v); }
/* 7d734a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7350: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7d7353: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7d7358u); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7d7358: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d735a: jne 0x7d73cb */
  if (!zf) goto L_7d73cb;
L_7d735c: /* 7d735c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d735f: mov esi, dword ptr [edx + 0x108] */
  esi = R32((uint32_t)(edx + 0x108u));
/* 7d7365: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7d736b: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d736e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d736f: mov ecx, esi */
  ecx = esi;
/* 7d7371: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7d7377u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7d7377: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7d737d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d737e: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7d7381: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7d7387u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7d7387: mov edx, dword ptr [ebp - 0xbc] */
  edx = R32((uint32_t)(ebp + 0xffffff44u));
/* 7d738d: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 7d7393: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7394: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 7d7397: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 7d739a: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7d73a0u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7d73a0: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 7d73a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d73a7: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7d73aa: call 0x6caf0b */
  esp -= 4; W32(esp, 0x7d73afu); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 7d73af: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 7d73b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d73b6: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7d73b9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7d73bfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7d73bf: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7d73c5: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 7d73c8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_7d73cb: /* 7d73cb: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7d73d1: push 0x8b2 */
  { uint32_t v = 0x8b2u; esp -= 4; W32(esp, v); }
/* 7d73d6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d73d9: push 0xadad7c */
  { uint32_t v = 0xadad7cu; esp -= 4; W32(esp, v); }
/* 7d73de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d73df: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d73e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d73e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d73e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d73e5: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7d73eb: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7d73ef: call dword ptr [0xcfa3bc] */
  esp -= 4; W32(esp, 0x7d73f5u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* 7d73f5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d73f8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7d73fb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7401u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d7401: push 0x7d0 */
  { uint32_t v = 0x7d0u; esp -= 4; W32(esp, v); }
/* 7d7406: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7409: push 0xadad84 */
  { uint32_t v = 0xadad84u; esp -= 4; W32(esp, v); }
/* 7d740e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d740f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7411u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7411: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7415: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 7d741b: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7d741f: call dword ptr [0xcfa3bc] */
  esp -= 4; W32(esp, 0x7d7425u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* 7d7425: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7428: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7d742b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7431u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d7431: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7434: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d743a: mov dword ptr [eax + 0x40], esi */
  W32((uint32_t)(eax + 0x40u), esi);
/* 7d743d: mov edi, dword ptr [esi + 0x108] */
  edi = R32((uint32_t)(esi + 0x108u));
/* 7d7443: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7d7446: add edi, 0xd8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xd8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7d744c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d744d: mov ecx, edi */
  ecx = edi;
/* 7d744f: call 0x6c824c */
  esp -= 4; W32(esp, 0x7d7454u); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 7d7454: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7d7457: mov ecx, edi */
  ecx = edi;
/* 7d7459: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 7d745c: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7d7461u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 7d7461: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d7467: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d746a: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 7d746d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d746f: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7476: je 0x7d77fb */
  if (zf) goto L_7d77fb;
L_7d747c: /* 7d747c: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 7d747f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7481: je 0x7d77fb */
  if (zf) goto L_7d77fb;
L_7d7487: /* 7d7487: mov edi, 0xb89a10 */
  edi = 0xb89a10u;
/* 7d748c: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 7d748f: nop  */
L_7d7490: /* 7d7490: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7495: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7498: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7499: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d749b: jge 0x7d74b1 */
  if ((sf == of)) goto L_7d74b1;
L_7d749d: /* 7d749d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d749f: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d74a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d74a4: je 0x7d7490 */
  if (zf) goto L_7d7490;
L_7d74a6: /* 7d74a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d74a7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d74adu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d74ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d74af: je 0x7d7490 */
  if (zf) goto L_7d7490;
L_7d74b1: /* 7d74b1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d74b6: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d74b9: jge 0x7d7571 */
  if ((sf == of)) goto L_7d7571;
L_7d74bf: /* 7d74bf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d74c1: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d74c4: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d74c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d74c9: je 0x7d74f0 */
  if (zf) goto L_7d74f0;
L_7d74cb: /* 7d74cb: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d74d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d74d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d74d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d74d8: je 0x7d74f0 */
  if (zf) goto L_7d74f0;
L_7d74da: /* 7d74da: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d74e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d74e2: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d74e5: mov dword ptr [eax + 0x38], 0 */
  W32((uint32_t)(eax + 0x38u), 0x0u);
/* 7d74ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d74f0: /* 7d74f0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d74f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d74f8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d74f9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d74fb: jge 0x7d74b1 */
  if ((sf == of)) goto L_7d74b1;
L_7d74fd: /* 7d74fd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d74ff: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d7502: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7504: je 0x7d74f0 */
  if (zf) goto L_7d74f0;
L_7d7506: /* 7d7506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7507: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d750du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d750d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d750f: jne 0x7d74b1 */
  if (!zf) goto L_7d74b1;
L_7d7511: /* 7d7511: jmp 0x7d74f0 */
  goto L_7d74f0;
L_7d7513: /* 7d7513: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7519: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7d751c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d751e: je 0x7d733a */
  if (zf) goto L_7d733a;
L_7d7524: /* 7d7524: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 7d7529: push 0xadad48 */
  { uint32_t v = 0xadad48u; esp -= 4; W32(esp, v); }
/* 7d752e: push 0xadad54 */
  { uint32_t v = 0xadad54u; esp -= 4; W32(esp, v); }
/* 7d7533: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7539u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7539: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d753c: jmp 0x7d733a */
  goto L_7d733a;
L_7d7571: /* 7d7571: mov ebx, 0xb88550 */
  ebx = 0xb88550u;
/* 7d7576: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 7d7579: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7580: /* 7d7580: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7585: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7588: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7589: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d758b: jge 0x7d75a1 */
  if ((sf == of)) goto L_7d75a1;
L_7d758d: /* 7d758d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d758f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d7592: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7594: je 0x7d7580 */
  if (zf) goto L_7d7580;
L_7d7596: /* 7d7596: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7597: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d759du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d759d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d759f: je 0x7d7580 */
  if (zf) goto L_7d7580;
L_7d75a1: /* 7d75a1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75a6: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d75a9: jge 0x7d764b */
  if ((sf == of)) goto L_7d764b;
L_7d75af: /* 7d75af: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d75b1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d75b4: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d75b7: xor edi, edi */
  edi = 0;
/* 7d75b9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75bb: je 0x7d75e9 */
  if (zf) goto L_7d75e9;
L_7d75bd: /* 7d75bd: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d75c2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d75c8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d75c8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75ca: je 0x7d75e9 */
  if (zf) goto L_7d75e9;
L_7d75cc: /* 7d75cc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75d1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d75d3: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d75d6: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 7d75d9: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 7d75dc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d75e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d75e3: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d75e6: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d75e9: /* 7d75e9: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d75ef: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d75f1: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d75f4: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d75f7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d75f9: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d75fb: /* 7d75fb: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7600: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7606u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7606: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7608: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d760a: /* 7d760a: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d7610: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7612: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7615: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
/* 7d7618: jmp 0x7d7620 */
  goto L_7d7620;
L_7d7620: /* 7d7620: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7625: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7628: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7629: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d762b: jge 0x7d75a1 */
  if ((sf == of)) goto L_7d75a1;
L_7d7631: /* 7d7631: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7633: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7d7636: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7638: je 0x7d7620 */
  if (zf) goto L_7d7620;
L_7d763a: /* 7d763a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d763b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7641u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7641: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7643: jne 0x7d75a1 */
  if (!zf) goto L_7d75a1;
L_7d7649: /* 7d7649: jmp 0x7d7620 */
  goto L_7d7620;
L_7d764b: /* 7d764b: mov ebx, 0xb88020 */
  ebx = 0xb88020u;
/* 7d7650: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7653: /* 7d7653: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7658: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d765b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d765c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d765e: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d7660: /* 7d7660: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7662: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d7665: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7667: je 0x7d7653 */
  if (zf) goto L_7d7653;
L_7d7669: /* 7d7669: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d766a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7670u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7672: je 0x7d7653 */
  if (zf) goto L_7d7653;
L_7d7674: /* 7d7674: jmp 0x7d7680 */
  goto L_7d7680;
L_7d7680: /* 7d7680: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7685: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7688: jge 0x7d77fb */
  if ((sf == of)) goto L_7d77fb;
L_7d768e: /* 7d768e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7690: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7693: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7696: xor edi, edi */
  edi = 0;
/* 7d7698: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d769a: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d769c: /* 7d769c: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76a1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76a7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76a7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76a9: je 0x7d76b8 */
  if (zf) goto L_7d76b8;
L_7d76ab: /* 7d76ab: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76b2: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76b5: mov dword ptr [eax + 0x38], edi */
  W32((uint32_t)(eax + 0x38u), edi);
L_7d76b8: /* 7d76b8: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d76be: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d76c0: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d76c3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d76c6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76c8: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76ca: /* 7d76ca: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76cf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d76d5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d76d5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76d7: je 0x7d76e7 */
  if (zf) goto L_7d76e7;
L_7d76d9: /* 7d76d9: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d76df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d76e1: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d76e4: mov dword ptr [eax + 0x3c], edi */
  W32((uint32_t)(eax + 0x3cu), edi);
L_7d76e7: /* 7d76e7: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d76ec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d76ee: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d76f1: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7d76f4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d76f6: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d76f8: /* 7d76f8: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d76fd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7703u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7703: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7705: je 0x7d7715 */
  if (zf) goto L_7d7715;
L_7d7707: /* 7d7707: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d770d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d770f: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d7712: mov dword ptr [eax + 0x40], edi */
  W32((uint32_t)(eax + 0x40u), edi);
L_7d7715: /* 7d7715: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d771b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d771d: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d7720: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7d7723: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7725: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7727: /* 7d7727: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d772c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7732u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7732: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7734: je 0x7d7743 */
  if (zf) goto L_7d7743;
L_7d7736: /* 7d7736: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d773b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d773d: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d7740: mov dword ptr [eax + 0x44], edi */
  W32((uint32_t)(eax + 0x44u), edi);
L_7d7743: /* 7d7743: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7749: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d774b: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d774e: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 7d7751: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7753: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7755: /* 7d7755: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d775a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7760u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7760: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7762: je 0x7d7772 */
  if (zf) goto L_7d7772;
L_7d7764: /* 7d7764: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d776a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d776c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d776f: mov dword ptr [eax + 0x48], edi */
  W32((uint32_t)(eax + 0x48u), edi);
L_7d7772: /* 7d7772: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7777: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7779: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d777c: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 7d777f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7781: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7783: /* 7d7783: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d7788: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d778eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d778e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7790: je 0x7d77a0 */
  if (zf) goto L_7d77a0;
L_7d7792: /* 7d7792: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 7d7798: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d779a: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d779d: mov dword ptr [eax + 0x4c], edi */
  W32((uint32_t)(eax + 0x4cu), edi);
L_7d77a0: /* 7d77a0: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d77a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d77a8: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d77ab: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 7d77ae: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77b0: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77b2: /* 7d77b2: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 7d77b7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77bdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77bd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d77bf: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77c1: /* 7d77c1: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77c6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d77c8: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7d77cb: mov dword ptr [eax + 0x50], edi */
  W32((uint32_t)(eax + 0x50u), edi);
/* 7d77ce: mov edi, edi */
  edi = edi;
L_7d77d0: /* 7d77d0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d77d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d77d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d77d9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d77db: jge 0x7d7680 */
  if ((sf == of)) goto L_7d7680;
L_7d77e1: /* 7d77e1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d77e3: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d77e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77e8: je 0x7d77d0 */
  if (zf) goto L_7d77d0;
L_7d77ea: /* 7d77ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d77eb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d77f1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d77f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d77f3: jne 0x7d7680 */
  if (!zf) goto L_7d7680;
L_7d77f9: /* 7d77f9: jmp 0x7d77d0 */
  goto L_7d77d0;
L_7d77fb: /* 7d77fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d77fe: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7804: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7d7808: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d780eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d780e: mov ecx, eax */
  ecx = eax;
/* 7d7810: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7816u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7816: push 0xadad94 */
  { uint32_t v = 0xadad94u; esp -= 4; W32(esp, v); }
/* 7d781b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d781c: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7822u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7822: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7827: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d782d: /* 7d782d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7830: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d7832: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7834: mov ecx, esi */
  ecx = esi;
/* 7d7836: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7d7839u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7839: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d783c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d783e: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7d7845: je 0x7d785c */
  if (zf) goto L_7d785c;
L_7d7847: /* 7d7847: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7849: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d784fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d784f: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7852: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7854: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7856: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7d7859: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d785cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d785c: /* 7d785c: mov ebx, 0xb5bf68 */
  ebx = 0xb5bf68u;
/* 7d7861: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_7d7864: /* 7d7864: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7869: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7870: /* 7d7870: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7873: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7874: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7876: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7878: /* 7d7878: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d787a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d787d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d787f: je 0x7d7870 */
  if (zf) goto L_7d7870;
L_7d7881: /* 7d7881: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7882: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d7888u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d7888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d788a: je 0x7d7864 */
  if (zf) goto L_7d7864;
L_7d788c: /* 7d788c: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7d7891: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7894: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d7896: /* 7d7896: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d7898: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d789b: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d78a1: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 7d78a4: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d78aau); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d78aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d78ab: mov ecx, edi */
  ecx = edi;
/* 7d78ad: call dword ptr [0xcfa828] */
  esp -= 4; W32(esp, 0x7d78b3u); SPILL(); f_4e33cd(); if (g_unwind) return; /* Core!?IsIn@UObject@@QBEHPAV1@@Z */ RELOAD();
/* 7d78b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78b5: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78b7: /* 7d78b7: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7d78bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d78bf: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d78c2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d78c7: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7d78cdu); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d78cd: /* 7d78cd: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_7d78d2: /* 7d78d2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d78d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d78d6: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78d8: jge 0x7d78f0 */
  if ((sf == of)) goto L_7d78f0;
L_7d78da: /* 7d78da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d78dc: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7d78df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78e1: je 0x7d78d2 */
  if (zf) goto L_7d78d2;
L_7d78e3: /* 7d78e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d78e4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d78eau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d78ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d78ec: je 0x7d78cd */
  if (zf) goto L_7d78cd;
L_7d78ee: /* 7d78ee: jmp 0x7d788c */
  goto L_7d788c;
L_7d78f0: /* 7d78f0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d78f3: xor esi, esi */
  esi = 0;
L_7d78f5: /* 7d78f5: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 7d78fb: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d78fe: jge 0x7d7918 */
  if ((sf == of)) goto L_7d7918;
L_7d7900: /* 7d7900: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d7903: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d7906: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7908: je 0x7d7915 */
  if (zf) goto L_7d7915;
L_7d790a: /* 7d790a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7d790f: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7d7915u); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
L_7d7915: /* 7d7915: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7916: jmp 0x7d78f5 */
  goto L_7d78f5;
L_7d7918: /* 7d7918: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 7d791d: call dword ptr [0xcfa918] */
  esp -= 4; W32(esp, 0x7d7923u); SPILL(); f_4e3fa8(); if (g_unwind) return; /* Core!?CollectGarbage@UObject@@SAXK@Z */ RELOAD();
/* 7d7923: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7d7926: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d792b: je 0x7d7950 */
  if (zf) goto L_7d7950;
L_7d792d: /* 7d792d: xor ecx, ecx */
  ecx = 0;
/* 7d792f: nop  */
L_7d7930: /* 7d7930: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7d7933: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7936: jge 0x7d7950 */
  if ((sf == of)) goto L_7d7950;
L_7d7938: /* 7d7938: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7d793b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d793e: cmp dword ptr [edx + ecx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7941: jne 0x7d79d0 */
  if (!zf) goto L_7d79d0;
L_7d7947: /* 7d7947: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7d794a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d794c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d794d: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d7950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7950: /* 7d7950: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7953: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7d7956: xor ebx, ebx */
  ebx = 0;
/* 7d7958: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d795a: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7961: je 0x7d796b */
  if (zf) goto L_7d796b;
L_7d7963: /* 7d7963: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7965: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d796bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d796b: /* 7d796b: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7971: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d7974: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7976: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7d7979u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7979: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 7d797d: xor eax, eax */
  eax = 0;
/* 7d797f: nop  */
L_7d7980: /* 7d7980: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7983: jge 0x7d79e6 */
  if ((sf == of)) goto L_7d79e6;
L_7d7985: /* 7d7985: xor ecx, ecx */
  ecx = 0;
L_7d7987: /* 7d7987: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d798a: jge 0x7d79e1 */
  if ((sf == of)) goto L_7d79e1;
L_7d798c: /* 7d798c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d798f: mov edx, dword ptr [edx + 0x108] */
  edx = R32((uint32_t)(edx + 0x108u));
/* 7d7995: mov edi, dword ptr [edx + 0x8c] */
  edi = R32((uint32_t)(edx + 0x8cu));
/* 7d799b: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 7d799e: mov ebx, dword ptr [edi + esi*8 + 0x124] */
  ebx = R32((uint32_t)(edi + esi*8 + 0x124u));
/* 7d79a5: mov esi, dword ptr [edi + esi*8 + 0x128] */
  esi = R32((uint32_t)(edi + esi*8 + 0x128u));
/* 7d79ac: mov dword ptr [ebp + eax*8 - 0x2e4], esi */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), esi);
/* 7d79b3: mov esi, eax */
  esi = eax;
/* 7d79b5: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d79b8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d79ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d79bc: mov dword ptr [ebp + eax*8 - 0x2e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ebx);
/* 7d79c3: jne 0x7d79d6 */
  if (!zf) goto L_7d79d6;
L_7d79c5: /* 7d79c5: mov byte ptr [esi + ecx + 0x110], 0 */
  W8((uint32_t)(esi + ecx + 0x110u), 0x0u);
/* 7d79cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79ce: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79d0: /* 7d79d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79d1: jmp 0x7d7930 */
  goto L_7d7930;
L_7d79d6: /* 7d79d6: mov byte ptr [esi + ecx + 0x110], 0xff */
  W8((uint32_t)(esi + ecx + 0x110u), 0xffu);
/* 7d79de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d79df: jmp 0x7d7987 */
  goto L_7d7987;
L_7d79e1: /* 7d79e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d79e2: xor ebx, ebx */
  ebx = 0;
/* 7d79e4: jmp 0x7d7980 */
  goto L_7d7980;
L_7d79e6: /* 7d79e6: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
/* 7d79ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7d79f0: /* 7d79f0: cmp dword ptr [ebp + 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d79f4: jge 0x7d7b12 */
  if ((sf == of)) goto L_7d7b12;
L_7d79fa: /* 7d79fa: xor esi, esi */
  esi = 0;
/* 7d79fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7a00: /* 7d7a00: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a03: jge 0x7d7a61 */
  if ((sf == of)) goto L_7d7a61;
L_7d7a05: /* 7d7a05: xor edi, edi */
  edi = 0;
L_7d7a07: /* 7d7a07: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a0a: jge 0x7d7a5c */
  if ((sf == of)) goto L_7d7a5c;
L_7d7a0c: /* 7d7a0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7a0f: mov edx, dword ptr [ecx + 0x108] */
  edx = R32((uint32_t)(ecx + 0x108u));
/* 7d7a15: mov eax, esi */
  eax = esi;
/* 7d7a17: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7d7a1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d7a1c: movzx edx, byte ptr [eax + edi + 0x110] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi + 0x110u)));
/* 7d7a24: lea ebx, [eax + edi + 0x110] */
  ebx = (uint32_t)(eax + edi + 0x110u);
/* 7d7a2b: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a2e: jle 0x7d7a59 */
  if ((zf || sf != of)) goto L_7d7a59;
L_7d7a30: /* 7d7a30: mov eax, 1 */
  eax = 0x1u;
/* 7d7a35: xor edx, edx */
  edx = 0;
/* 7d7a37: mov ecx, edi */
  ecx = edi;
/* 7d7a39: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a3eu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a3e: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7a45: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7a47: mov eax, dword ptr [ebp + esi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7a4e: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7a50: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7a52: je 0x7d7a59 */
  if (zf) goto L_7d7a59;
L_7d7a54: /* 7d7a54: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 7d7a57: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
L_7d7a59: /* 7d7a59: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7a5a: jmp 0x7d7a07 */
  goto L_7d7a07;
L_7d7a5c: /* 7d7a5c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7a5d: xor ebx, ebx */
  ebx = 0;
/* 7d7a5f: jmp 0x7d7a00 */
  goto L_7d7a00;
L_7d7a61: /* 7d7a61: xor eax, eax */
  eax = 0;
L_7d7a63: /* 7d7a63: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a66: jge 0x7d7a79 */
  if ((sf == of)) goto L_7d7a79;
L_7d7a68: /* 7d7a68: mov dword ptr [ebp + eax*8 - 0x4e8], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb18u), ebx);
/* 7d7a6f: mov dword ptr [ebp + eax*8 - 0x4e4], ebx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffb1cu), ebx);
/* 7d7a76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7a77: jmp 0x7d7a63 */
  goto L_7d7a63;
L_7d7a79: /* 7d7a79: xor edi, edi */
  edi = 0;
/* 7d7a7b: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7a80: /* 7d7a80: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a83: jge 0x7d7ae4 */
  if ((sf == of)) goto L_7d7ae4;
L_7d7a85: /* 7d7a85: xor esi, esi */
  esi = 0;
L_7d7a87: /* 7d7a87: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7a8a: jge 0x7d7ae1 */
  if ((sf == of)) goto L_7d7ae1;
L_7d7a8c: /* 7d7a8c: mov eax, 1 */
  eax = 0x1u;
/* 7d7a91: xor edx, edx */
  edx = 0;
/* 7d7a93: mov ecx, esi */
  ecx = esi;
/* 7d7a95: call 0x99cc70 */
  esp -= 4; W32(esp, 0x7d7a9au); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 7d7a9a: mov ecx, dword ptr [ebp + edi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + edi*8 + 0xfffffd18u));
/* 7d7aa1: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d7aa3: mov eax, dword ptr [ebp + edi*8 - 0x2e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffd1cu));
/* 7d7aaa: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d7aac: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7d7aae: je 0x7d7ade */
  if (zf) goto L_7d7ade;
L_7d7ab0: /* 7d7ab0: mov edx, dword ptr [ebp + edi*8 - 0x4e8] */
  edx = R32((uint32_t)(ebp + edi*8 + 0xfffffb18u));
/* 7d7ab7: mov ecx, dword ptr [ebp + esi*8 - 0x2e8] */
  ecx = R32((uint32_t)(ebp + esi*8 + 0xfffffd18u));
/* 7d7abe: mov eax, dword ptr [ebp + edi*8 - 0x4e4] */
  eax = R32((uint32_t)(ebp + edi*8 + 0xfffffb1cu));
/* 7d7ac5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7d7ac7: mov dword ptr [ebp + edi*8 - 0x4e8], edx */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb18u), edx);
/* 7d7ace: mov edx, dword ptr [ebp + esi*8 - 0x2e4] */
  edx = R32((uint32_t)(ebp + esi*8 + 0xfffffd1cu));
/* 7d7ad5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7d7ad7: mov dword ptr [ebp + edi*8 - 0x4e4], eax */
  W32((uint32_t)(ebp + edi*8 + 0xfffffb1cu), eax);
L_7d7ade: /* 7d7ade: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d7adf: jmp 0x7d7a87 */
  goto L_7d7a87;
L_7d7ae1: /* 7d7ae1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7ae2: jmp 0x7d7a80 */
  goto L_7d7a80;
L_7d7ae4: /* 7d7ae4: xor eax, eax */
  eax = 0;
L_7d7ae6: /* 7d7ae6: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7ae9: jge 0x7d7b0a */
  if ((sf == of)) goto L_7d7b0a;
L_7d7aeb: /* 7d7aeb: mov ecx, dword ptr [ebp + eax*8 - 0x4e8] */
  ecx = R32((uint32_t)(ebp + eax*8 + 0xfffffb18u));
/* 7d7af2: mov edx, dword ptr [ebp + eax*8 - 0x4e4] */
  edx = R32((uint32_t)(ebp + eax*8 + 0xfffffb1cu));
/* 7d7af9: mov dword ptr [ebp + eax*8 - 0x2e8], ecx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd18u), ecx);
/* 7d7b00: mov dword ptr [ebp + eax*8 - 0x2e4], edx */
  W32((uint32_t)(ebp + eax*8 + 0xfffffd1cu), edx);
/* 7d7b07: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d7b08: jmp 0x7d7ae6 */
  goto L_7d7ae6;
L_7d7b0a: /* 7d7b0a: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 7d7b0d: jmp 0x7d79f0 */
  goto L_7d79f0;
L_7d7b12: /* 7d7b12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7b15: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d7b1b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7d7b1e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7b20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7b21: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d7b28: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x7d7b2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7b2e: mov cx, word ptr [0xb81b4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b4cu))) & 0xffffu);
/* 7d7b35: mov dx, word ptr [0xb81b50] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb81b50u))) & 0xffffu);
/* 7d7b3c: mov word ptr [ebp - 0xee8], cx */
  W16((uint32_t)(ebp + 0xfffff118u), (ecx & 0xffffu));
/* 7d7b43: xor eax, eax */
  eax = 0;
/* 7d7b45: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 7d7b4a: lea edi, [ebp - 0xee6] */
  edi = (uint32_t)(ebp + 0xfffff11au);
/* 7d7b50: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b52: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b54: mov word ptr [ebp - 0x6e8], dx */
  W16((uint32_t)(ebp + 0xfffff918u), (edx & 0xffffu));
/* 7d7b5b: xor eax, eax */
  eax = 0;
/* 7d7b5d: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 7d7b62: lea edi, [ebp - 0x6e6] */
  edi = (uint32_t)(ebp + 0xfffff91au);
/* 7d7b68: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7d7b6a: push 0xb81b54 */
  { uint32_t v = 0xb81b54u; esp -= 4; W32(esp, v); }
/* 7d7b6f: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 7d7b75: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 7d7b77: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d7b7du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d7b7d: mov ebx, dword ptr [0xcfa914] */
  ebx = R32((uint32_t)(0xcfa914u));
/* 7d7b83: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7d7b87: xor edi, edi */
  edi = 0;
/* 7d7b89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d7b90: /* 7d7b90: cmp edi, dword ptr [ebp - 0xa8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d7b96: jge 0x7d7bf7 */
  if ((sf == of)) goto L_7d7bf7;
L_7d7b98: /* 7d7b98: lea eax, [ebp - 0xee8] */
  eax = (uint32_t)(ebp + 0xfffff118u);
/* 7d7b9e: push 0xadadb0 */
  { uint32_t v = 0xadadb0u; esp -= 4; W32(esp, v); }
/* 7d7ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ba4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7ba6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7ba6: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bac: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7d7baf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7d7bb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bb5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d7bb7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bbdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7bbe: lea edx, [ebp - 0xee8] */
  edx = (uint32_t)(ebp + 0xfffff118u);
/* 7d7bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7bc5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7bc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7bc7: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 7d7bcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bd0: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 7d7bd3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7bd9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7bd9: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7d7bde: lea ecx, [ebp - 0x6e8] */
  ecx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7be5: push 0xadadb4 */
  { uint32_t v = 0xadadb4u; esp -= 4; W32(esp, v); }
/* 7d7bea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7beb: call dword ptr [0xcfa910] */
  esp -= 4; W32(esp, 0x7d7bf1u); SPILL(); f_4e2e73(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0PAGH@Z */ RELOAD();
/* 7d7bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7bf4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d7bf5: jmp 0x7d7b90 */
  goto L_7d7b90;
L_7d7bf7: /* 7d7bf7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7bfa: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 7d7c00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7c02: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d7c08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c0a: je 0x7d7da7 */
  if (zf) goto L_7d7da7;
L_7d7c10: /* 7d7c10: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7d7c13: mov eax, dword ptr [ecx + 0x508] */
  eax = R32((uint32_t)(ecx + 0x508u));
/* 7d7c19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c1b: jne 0x7d7da7 */
  if (!zf) goto L_7d7da7;
L_7d7c21: /* 7d7c21: cmp word ptr [ebp - 0x6e8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffff918u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7d7c29: mov ebx, dword ptr [0xcfa7b8] */
  ebx = R32((uint32_t)(0xcfa7b8u));
/* 7d7c2f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7d7c32: je 0x7d7c56 */
  if (zf) goto L_7d7c56;
L_7d7c34: /* 7d7c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c35: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c39: lea edx, [ebp - 0x6e8] */
  edx = (uint32_t)(ebp + 0xfffff918u);
/* 7d7c3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7c40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c42: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c47: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c49: mov esi, eax */
  esi = eax;
/* 7d7c4b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c50: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c56: /* 7d7c56: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7d7c59: add esi, 0x4f0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4f0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d7c5f: mov ecx, esi */
  ecx = esi;
/* 7d7c61: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x7d7c67u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 7d7c67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d7c69: jle 0x7d7c8b */
  if ((zf || sf != of)) goto L_7d7c8b;
L_7d7c6b: /* 7d7c6b: mov ecx, esi */
  ecx = esi;
/* 7d7c6d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7c73u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7c73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7c74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7c79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7c7b: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7c80: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7c82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7c82: mov esi, eax */
  esi = eax;
/* 7d7c84: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7c87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7c89: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7c8b: /* 7d7c8b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7c8e: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d7c94: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d7c9au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d7c9a: mov ecx, eax */
  ecx = eax;
/* 7d7c9c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7ca2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ca2: push 0xadadc0 */
  { uint32_t v = 0xadadc0u; esp -= 4; W32(esp, v); }
/* 7d7ca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ca8: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d7caeu); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d7cae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cb3: je 0x7d7cde */
  if (zf) goto L_7d7cde;
L_7d7cb5: /* 7d7cb5: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7d7cb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cba: mov eax, 0xadadcc */
  eax = 0xadadccu;
/* 7d7cbf: jne 0x7d7cc6 */
  if (!zf) goto L_7d7cc6;
L_7d7cc1: /* 7d7cc1: mov eax, 0xadae08 */
  eax = 0xadae08u;
L_7d7cc6: /* 7d7cc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7cc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7cc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7cce: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d7cd3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d7cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7cd5: mov esi, eax */
  esi = eax;
/* 7d7cd7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7cda: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7cdc: jne 0x7d7ce3 */
  if (!zf) goto L_7d7ce3;
L_7d7cde: /* 7d7cde: mov esi, 0xb5e3b8 */
  esi = 0xb5e3b8u;
L_7d7ce3: /* 7d7ce3: mov ecx, esi */
  ecx = esi;
/* 7d7ce5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d7cebu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d7ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7cec: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d7cf1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7cf3: push 0xadae50 */
  { uint32_t v = 0xadae50u; esp -= 4; W32(esp, v); }
/* 7d7cf8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7cfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7cfe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7d04u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7d04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d17: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7d1a: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7d7d21: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7d7d28: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7d7d2f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7d7d35u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7d7d35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7d37: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d3a: mov edx, esp */
  edx = esp;
/* 7d7d3c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7d7d3e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7d7d41: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7d7d44: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7d7d47: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7d7d4a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d7d4d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d7d50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d7d53: mov ecx, esp */
  ecx = esp;
/* 7d7d55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7d7d57: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d7d5a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7d7d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d7d5e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7d7d61: mov ecx, esp */
  ecx = esp;
/* 7d7d63: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7d7d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d7d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d7d6e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7d71: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7d77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7d7a: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d7d80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7d80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7d82: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7d7d85: mov dword ptr [edi + 0x508], eax */
  W32((uint32_t)(edi + 0x508u), eax);
/* 7d7d8b: jne 0x7d7dad */
  if (!zf) goto L_7d7dad;
L_7d7d8d: /* 7d7d8d: push 0x6c9 */
  { uint32_t v = 0x6c9u; esp -= 4; W32(esp, v); }
/* 7d7d92: push 0xadae78 */
  { uint32_t v = 0xadae78u; esp -= 4; W32(esp, v); }
/* 7d7d97: push 0xadae84 */
  { uint32_t v = 0xadae84u; esp -= 4; W32(esp, v); }
/* 7d7d9c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7da2u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7da2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7da5: jmp 0x7d7dad */
  goto L_7d7dad;
L_7d7da7: /* 7d7da7: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d7daa: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_7d7dad: /* 7d7dad: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7db2: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7db9: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7dbd: je 0x7d7dd7 */
  if (zf) goto L_7d7dd7;
L_7d7dbf: /* 7d7dbf: push 0xadaea0 */
  { uint32_t v = 0xadaea0u; esp -= 4; W32(esp, v); }
/* 7d7dc4: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7d7dca: call 0x6c991c */
  esp -= 4; W32(esp, 0x7d7dcfu); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7d7dcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7dd1: je 0x7d7e8a */
  if (zf) goto L_7d7e8a;
L_7d7dd7: /* 7d7dd7: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 7d7ddd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ddf: je 0x7d7e1f */
  if (zf) goto L_7d7e1f;
L_7d7de1: /* 7d7de1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7de4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7de6: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7d7dea: je 0x7d7e04 */
  if (zf) goto L_7d7e04;
L_7d7dec: /* 7d7dec: push 0x6d4 */
  { uint32_t v = 0x6d4u; esp -= 4; W32(esp, v); }
/* 7d7df1: push 0xadaeb0 */
  { uint32_t v = 0xadaeb0u; esp -= 4; W32(esp, v); }
/* 7d7df6: push 0xadaebc */
  { uint32_t v = 0xadaebcu; esp -= 4; W32(esp, v); }
/* 7d7dfb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7d7e01u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7d7e01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e04: /* 7d7e04: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 7d7e0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e0c: je 0x7d7e15 */
  if (zf) goto L_7d7e15;
L_7d7e0e: /* 7d7e0e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e10: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d7e12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d7e15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d7e15: /* 7d7e15: mov dword ptr [ebx + 0x110], 0 */
  W32((uint32_t)(ebx + 0x110u), 0x0u);
L_7d7e1f: /* 7d7e1f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e22: mov dword ptr [ebp - 4], 0x24 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e29: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d7e2fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d7e2f: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7e35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e37: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e3b: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7d7e3f: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7d7e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7e45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e47: jne 0x7d7e7d */
  if (!zf) goto L_7d7e7d;
L_7d7e49: /* 7d7e49: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d7e52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d7e52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7e54: push 0xadaed0 */
  { uint32_t v = 0xadaed0u; esp -= 4; W32(esp, v); }
/* 7d7e59: push 0xadaee0 */
  { uint32_t v = 0xadaee0u; esp -= 4; W32(esp, v); }
/* 7d7e5e: mov esi, eax */
  esi = eax;
/* 7d7e60: call dword ptr [0xcfa904] */
  esp -= 4; W32(esp, 0x7d7e66u); SPILL(); f_4e1613(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBG00@Z */ RELOAD();
/* 7d7e66: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7d7e6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d7e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7e73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7e74: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d7e7au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d7e7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7e7d: /* 7d7e7d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d7e80: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7d7e84: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d7e8au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d7e8a: /* 7d7e8a: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7e91: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7d7e94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7e96: mov dword ptr [ebp - 4], 0x21 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7d7e9d: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7e9f: /* 7d7e9f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7d7ea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ea4: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7ea6: /* 7d7ea6: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d7ea9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d7eab: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7d7eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb0: je 0x7d7f00 */
  if (zf) goto L_7d7f00;
L_7d7eb2: /* 7d7eb2: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d7eb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7eb7: je 0x7d7ef2 */
  if (zf) goto L_7d7ef2;
L_7d7eb9: /* 7d7eb9: mov byte ptr [edi + 0x448], 2 */
  W8((uint32_t)(edi + 0x448u), 0x2u);
/* 7d7ec0: jmp 0x7d7f00 */
  goto L_7d7f00;
L_7d7ef2: /* 7d7ef2: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7d7ef5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7ef7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7d7efa: mov byte ptr [edi + 0x448], dl */
  W8((uint32_t)(edi + 0x448u), (edx & 0xffu));
L_7d7f00: /* 7d7f00: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 7d7f06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f08: je 0x7d7f0f */
  if (zf) goto L_7d7f0f;
L_7d7f0a: /* 7d7f0a: call 0x6cbfa5 */
  esp -= 4; W32(esp, 0x7d7f0fu); SPILL(); f_6cbfa5(); if (g_unwind) return; RELOAD();
L_7d7f0f: /* 7d7f0f: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f15: mov dword ptr [eax + 0x104], 0 */
  W32((uint32_t)(eax + 0x104u), 0x0u);
/* 7d7f1f: test byte ptr [edi + 0x444], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x444u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f26: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7d7f2a: jne 0x7d85d8 */
  if (!zf) goto L_7d85d8;
L_7d7f30: /* 7d7f30: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7f36: mov esi, dword ptr [0xcfa3a8] */
  esi = R32((uint32_t)(0xcfa3a8u));
/* 7d7f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7f3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7f40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f40: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7f48: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7d7f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f4f: push 0xad5650 */
  { uint32_t v = 0xad5650u; esp -= 4; W32(esp, v); }
/* 7d7f54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7f55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f57: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7f5d: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d7f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d7f62: mov cl, byte ptr [eax + 0x44c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44cu))) & 0xffu);
/* 7d7f68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7f6b: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d7f6e: jne 0x7d7f83 */
  if (!zf) goto L_7d7f83;
L_7d7f70: /* 7d7f70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d7f76: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d7f78: push 0xadaf08 */
  { uint32_t v = 0xadaf08u; esp -= 4; W32(esp, v); }
/* 7d7f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d7f80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d7f83: /* 7d7f83: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d7f85: mov ecx, ebx */
  ecx = ebx;
/* 7d7f87: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d7f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7f8d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7d7f90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d7f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7f94: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7d7f9au); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7d7f9a: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fa0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d7fa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d7fa5: mov edi, eax */
  edi = eax;
/* 7d7fa7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d7fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d7fa9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d7faf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d7fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d7fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d7fb3: push 0xadaf60 */
  { uint32_t v = 0xadaf60u; esp -= 4; W32(esp, v); }
/* 7d7fb8: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 7d7fbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d7fbe: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7d7fc4u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7d7fc4: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d7fca: xor esi, esi */
  esi = 0;
/* 7d7fcc: mov dword ptr [eax + 0x100], esi */
  W32((uint32_t)(eax + 0x100u), esi);
/* 7d7fd2: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fd8: mov dword ptr [ecx + 0xd0], esi */
  W32((uint32_t)(ecx + 0xd0u), esi);
/* 7d7fde: mov dword ptr [ecx + 0xd4], esi */
  W32((uint32_t)(ecx + 0xd4u), esi);
/* 7d7fe4: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d7fea: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d7fed: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d7fef: mov dword ptr [eax + 0x3ac], esi */
  W32((uint32_t)(eax + 0x3acu), esi);
/* 7d7ff5: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d7ffb: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d7ffe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d8000: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d8003: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d8008u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d8008: or dword ptr [eax + 0x80], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7d8012: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8018: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d801a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7d8020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8020: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d8022: jne 0x7d8072 */
  if (!zf) goto L_7d8072;
L_7d8024: /* 7d8024: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d802a: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d802d: jge 0x7d8072 */
  if ((sf == of)) goto L_7d8072;
L_7d802f: /* 7d802f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d8032: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7d8035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8037: je 0x7d806f */
  if (zf) goto L_7d806f;
L_7d8039: /* 7d8039: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7d803f: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8042: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8044: /* 7d8044: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8047: jne 0x7d8057 */
  if (!zf) goto L_7d8057;
L_7d8049: /* 7d8049: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d804b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d804d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d804e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7d8054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8054: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8055: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8057: /* 7d8057: mov dl, byte ptr [eax + 0x90] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x90u))) & 0xffu);
/* 7d805d: mov cl, byte ptr [eax + 0x91] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x91u))) & 0xffu);
/* 7d8063: mov byte ptr [eax + 0x91], dl */
  W8((uint32_t)(eax + 0x91u), (edx & 0xffu));
/* 7d8069: mov byte ptr [eax + 0x90], cl */
  W8((uint32_t)(eax + 0x90u), (ecx & 0xffu));
L_7d806f: /* 7d806f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d8070: jmp 0x7d8024 */
  goto L_7d8024;
L_7d8072: /* 7d8072: xor esi, esi */
  esi = 0;
L_7d8074: /* 7d8074: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d807a: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d807d: jge 0x7d80d5 */
  if ((sf == of)) goto L_7d80d5;
L_7d807f: /* 7d807f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8082: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7d8085: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8087: je 0x7d80d2 */
  if (zf) goto L_7d80d2;
L_7d8089: /* 7d8089: mov dword ptr [eax + 0xd4], 0 */
  W32((uint32_t)(eax + 0xd4u), 0x0u);
/* 7d8093: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d8099: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d809c: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7d809f: add ecx, 0x110 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d80a5: xor eax, eax */
  eax = 0;
L_7d80a7: /* 7d80a7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d80aa: jge 0x7d80af */
  if ((sf == of)) goto L_7d80af;
L_7d80ac: /* 7d80ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7d80ad: jmp 0x7d80a7 */
  goto L_7d80a7;
L_7d80af: /* 7d80af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d80b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d80b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7d80b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7d80b9: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d80bf: mov edi, dword ptr [eax + 0x2c] */
  edi = R32((uint32_t)(eax + 0x2cu));
/* 7d80c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d80c4: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x7d80c9u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 7d80c9: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 7d80cc: mov dword ptr [ecx + 0x16c], eax */
  W32((uint32_t)(ecx + 0x16cu), eax);
L_7d80d2: /* 7d80d2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d80d3: jmp 0x7d8074 */
  goto L_7d8074;
L_7d80d5: /* 7d80d5: xor esi, esi */
  esi = 0;
/* 7d80d7: jmp 0x7d80e0 */
  goto L_7d80e0;
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
L_7d85d8: /* 7d85d8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d85db: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d85e1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d85e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d85e6: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7d85ec: mov ebx, dword ptr [0xcfa2c0] */
  ebx = R32((uint32_t)(0xcfa2c0u));
/* 7d85f2: fstp qword ptr [eax + 0xd0] */
  WF64((uint32_t)(eax + 0xd0u), ST0); FPOP();
/* 7d85f8: xor edi, edi */
  edi = 0;
/* 7d85fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d8600: /* 7d8600: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d8603: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 7d8609: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d860c: jge 0x7d8664 */
  if ((sf == of)) goto L_7d8664;
L_7d860e: /* 7d860e: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d8611: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d8614: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d8616: je 0x7d8631 */
  if (zf) goto L_7d8631;
L_7d8618: /* 7d8618: mov ecx, dword ptr [0xb7e550] */
  ecx = R32((uint32_t)(0xb7e550u));
/* 7d861e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d8621: mov ecx, esi */
  ecx = esi;
/* 7d8623: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d8625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d8625: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d8627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d8629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d862b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d862c: mov ecx, esi */
  ecx = esi;
/* 7d862e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d8631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d8631: /* 7d8631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d8632: jmp 0x7d8600 */
  goto L_7d8600;
L_7d8664: /* 7d8664: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
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
